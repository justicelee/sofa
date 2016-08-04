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
#ifndef SOFA_COMPONENT_ENGINE_SMOOTHMESHENGINE_H
#define SOFA_COMPONENT_ENGINE_SMOOTHMESHENGINE_H
#include "config.h"

#include <sofa/core/DataEngine.h>
#include <sofa/core/objectmodel/BaseObject.h>
#include <sofa/defaulttype/Vec3Types.h>
#include <sofa/core/topology/BaseMeshTopology.h>


namespace sofa
{

namespace component
{

namespace engine
{

/**
 * This class computes the laplacian smooth of a mesh
 */
template <class DataTypes>
class SmoothMeshEngine : public core::DataEngine
{
public:
    SOFA_CLASS(SOFA_TEMPLATE(SmoothMeshEngine,DataTypes),core::DataEngine);
    typedef typename DataTypes::Real Real;
    typedef typename DataTypes::Coord Coord;
    typedef typename DataTypes::VecCoord VecCoord;

protected:

    sofa::core::topology::BaseMeshTopology* m_topo;

    SmoothMeshEngine();

    virtual ~SmoothMeshEngine() {}
public:
    void init();
    void reinit();
    void update();
    virtual void draw(const core::visual::VisualParams* vparams);

    Data<VecCoord> input_position;
    Data<helper::vector <unsigned int> > input_indices;
    Data<VecCoord> output_position;

    Data<unsigned int> nb_iterations;

    Data<bool> showInput;
    Data<bool> showOutput;

    virtual std::string getTemplateName() const
    {
        return templateName(this);
    }

    static std::string templateName(const SmoothMeshEngine<DataTypes>* = NULL)
    {
        return DataTypes::Name();
    }

protected:

};

#if defined(SOFA_EXTERN_TEMPLATE) && !defined(SOFA_COMPONENT_ENGINE_SMOOTHMESHENGINE_CPP)
#ifndef SOFA_FLOAT
extern template class SOFA_GENERAL_ENGINE_API SmoothMeshEngine<defaulttype::Vec3dTypes>;
#endif //SOFA_FLOAT
#ifndef SOFA_DOUBLE
extern template class SOFA_GENERAL_ENGINE_API SmoothMeshEngine<defaulttype::Vec3fTypes>;
#endif //SOFA_DOUBLE
#endif

} // namespace engine

} // namespace component

} // namespace sofa

#endif
