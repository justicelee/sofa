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
#include <sofa/helper/system/config.h>
#include <SofaGeneralSimpleFem/initGeneralSimpleFEM.h>


namespace sofa
{

namespace component
{


void initGeneralSimpleFEM()
{
    static bool first = true;
    if (first)
    {
        first = false;
    }
}

SOFA_LINK_CLASS(BeamFEMForceField)
SOFA_LINK_CLASS(HexahedralFEMForceField)
SOFA_LINK_CLASS(HexahedralFEMForceFieldAndMass)
SOFA_LINK_CLASS(HexahedronFEMForceFieldAndMass)
SOFA_LINK_CLASS(TetrahedralCorotationalFEMForceField)
//SOFA_LINK_CLASS(TriangularAnisotropicFEMForceField)
//SOFA_LINK_CLASS(TriangleFEMForceField)
//SOFA_LINK_CLASS(TriangularFEMForceField)
SOFA_LINK_CLASS(TriangularFEMForceFieldOptim)


} // namespace component

} // namespace sofa
