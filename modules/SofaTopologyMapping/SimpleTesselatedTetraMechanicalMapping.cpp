/******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, v16.08                  *
*                (c) 2006-2016 INRIA, USTL, UJF, CNRS, MGH                    *
*                                                                             *
* This program is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This program is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this program. If not, see <http://www.gnu.org/licenses/>.        *
*******************************************************************************
* Authors: The SOFA Team and external contributors (see Authors.txt)          *
*                                                                             *
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/
#define SOFA_COMPONENT_MAPPING_SIMPLETESSELATEDTETRAMECHANICALMAPPING_CPP

#include "SimpleTesselatedTetraMechanicalMapping.inl"
#include <sofa/core/behavior/MechanicalState.h>
#include <sofa/core/ObjectFactory.h>

namespace sofa
{

namespace component
{

namespace mapping
{

using namespace sofa::defaulttype;
using namespace core;
using namespace core::behavior;

SOFA_DECL_CLASS(SimpleTesselatedTetraMechanicalMapping)

int SimpleTesselatedTetraMechanicalMappingClass = core::RegisterObject("Mechanical mapping between two TetrahedronSetTopologies generated by SimpleTesselatedTetraTopologicalMapping")
#ifndef SOFA_FLOAT
        .add< SimpleTesselatedTetraMechanicalMapping< Vec3dTypes ,Vec3dTypes > >()
        .add< SimpleTesselatedTetraMechanicalMapping< Vec3dTypes, ExtVec3dTypes > >()
#endif
#ifndef SOFA_DOUBLE
        .add< SimpleTesselatedTetraMechanicalMapping< Vec3fTypes, Vec3fTypes > >()
        .add< SimpleTesselatedTetraMechanicalMapping< Vec3fTypes, ExtVec3fTypes > >()
#endif

#ifndef SOFA_FLOAT
#ifndef SOFA_DOUBLE
        .add< SimpleTesselatedTetraMechanicalMapping< Vec3fTypes, Vec3dTypes > >()
        .add< SimpleTesselatedTetraMechanicalMapping< Vec3dTypes, Vec3fTypes > >()
#endif
#endif
        ;


#ifndef SOFA_FLOAT
template class SimpleTesselatedTetraMechanicalMapping< Vec3dTypes, Vec3dTypes >;
template class SimpleTesselatedTetraMechanicalMapping< Vec3dTypes, ExtVec3dTypes >;
#endif
#ifndef SOFA_DOUBLE
template class SimpleTesselatedTetraMechanicalMapping< Vec3fTypes, Vec3fTypes >;
template class SimpleTesselatedTetraMechanicalMapping< Vec3fTypes, ExtVec3fTypes >;
#endif

#ifndef SOFA_FLOAT
#ifndef SOFA_DOUBLE
template class SimpleTesselatedTetraMechanicalMapping< Vec3fTypes, Vec3dTypes >;
template class SimpleTesselatedTetraMechanicalMapping< Vec3dTypes, Vec3fTypes >;
#endif
#endif

// Mech -> Mech

// Mech -> Mapped

// Mech -> ExtMapped

} // namespace mapping

} // namespace component

} // namespace sofa
