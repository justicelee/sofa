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
#define SOFA_COMPONENT_ENGINE_DILATEENGINE_CPP
#include <SofaGeneralEngine/DilateEngine.inl>
#include <sofa/core/ObjectFactory.h>

namespace sofa
{

namespace component
{

namespace engine
{

SOFA_DECL_CLASS(DilateEngine)

int DilateEngineClass = core::RegisterObject("Move mesh vertices along their normal")
#ifndef SOFA_FLOAT
//  .add< DilateEngine<defaulttype::Vec3fTypes> >(true) // default template
        .add< DilateEngine<defaulttype::Vec3dTypes> >(true) // default template
#endif //SOFA_FLOAT
#ifndef SOFA_DOUBLE
//.add< DilateEngine<defaulttype::Vec3fTypes> >()
//  .add< DilateEngine<defaulttype::ExtVec3fTypes> >()
#endif //SOFA_DOUBLE
        ;

#ifndef SOFA_FLOAT
template class SOFA_GENERAL_ENGINE_API DilateEngine<defaulttype::Vec3dTypes>;
#endif //SOFA_FLOAT
#ifndef SOFA_DOUBLE
//template class SOFA_GENERAL_ENGINE_API DilateEngine<defaulttype::Vec3fTypes>;
#endif //SOFA_DOUBLE
//template class SOFA_GENERAL_ENGINE_API DilateEngine<defaulttype::ExtVec3fTypes>;

} // namespace engine

} // namespace component

} // namespace sofa

