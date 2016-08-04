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
#define SOFA_COMPONENT_COLLISION_DIRECTSAP_CPP
#include <SofaGeneralMeshCollision/DirectSAP.inl>
#include <sofa/core/visual/VisualParams.h>
#include <SofaBaseCollision/CapsuleModel.h>
#include <SofaBaseCollision/Sphere.h>
#include <SofaMeshCollision/Triangle.h>
#include <SofaMeshCollision/Line.h>
#include <SofaMeshCollision/Point.h>
#include <sofa/helper/FnDispatcher.h>
#include <sofa/core/ObjectFactory.h>
#include <map>
#include <queue>
#include <stack>

#include <sofa/helper/system/gl.h>

namespace sofa
{

namespace component
{

namespace collision
{

bool DSAPBox::overlaps(const DSAPBox &other,double alarmDist) const{
    return overlaps(other,0,alarmDist) && overlaps(other,0,alarmDist) && overlaps(other,0,alarmDist);
    //return overlaps(other,0,alarmDist) && overlaps(other,1,alarmDist) && overlaps(other,2,alarmDist);
}

double DSAPBox::squaredDistance(const DSAPBox & other)const{
    double dist2 = 0;

    for(int axis = 0 ; axis < 3 ; ++axis){
        dist2 += squaredDistance(other,axis);
    }

    return dist2;
}

using namespace sofa::defaulttype;
using namespace sofa::helper;
using namespace collision;

SOFA_DECL_CLASS(DirectSap)

int DirectSAPClassSofaVector = core::RegisterObject("Collision detection using sweep and prune")
        .add< TDirectSAP<helper::vector,helper::CPUMemoryManager> >()
        ;

int DirectSAPClassStdVector = core::RegisterObject("Collision detection using sweep and prune")
        .add< TDirectSAP<std::vector,std::allocator> >()
        ;


template class SOFA_GENERAL_MESH_COLLISION_API TDirectSAP<helper::vector,helper::CPUMemoryManager>;
template class SOFA_GENERAL_MESH_COLLISION_API TDirectSAP<std::vector,std::allocator>;
} // namespace collision

} // namespace component

} // namespace sofa

