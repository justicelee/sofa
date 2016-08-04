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
#ifndef SOFA_SIMULATION_COMMON_XML_MUTLIMAPPINGELEMENT_H
#define SOFA_SIMULATION_COMMON_XML_MUTLIMAPPINGELEMENT_H
#include <SofaSimulationCommon/xml/ObjectElement.h>

namespace sofa
{
namespace core
{
class BaseMapping;
}
namespace simulation
{
class Node;
namespace xml
{

class SOFA_SIMULATION_COMMON_API BaseMultiMappingElement : public ObjectElement
{
public:
    BaseMultiMappingElement(const std::string& name, const std::string& type, BaseElement* parent=NULL);
    bool initNode();

protected:
    virtual void updateSceneGraph(
        sofa::core::BaseMapping* multiMapping,
        const helper::vector<simulation::Node*>& ancestorInputs,
        helper::vector<simulation::Node*>& otherInputs,
        helper::vector<simulation::Node*>& outputs
    ) = 0;
};
}
}
}

#endif // SOFA_SIMULATION_COMMON_XML_MUTLIMAPPINGELEMENT_H

