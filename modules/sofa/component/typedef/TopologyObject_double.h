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



// File automatically generated by "generateTypedef"


#ifndef SOFA_TYPEDEF_TopologyObject_double_H
#define SOFA_TYPEDEF_TopologyObject_double_H

//Default files containing the declaration of the vector type
#include <sofa/defaulttype/VecTypes.h>
#include <sofa/defaulttype/RigidTypes.h>
#include <sofa/defaulttype/Mat.h>




#include <SofaNonUniformFem/DynamicSparseGridGeometryAlgorithms.h>
#include <SofaNonUniformFem/DynamicSparseGridTopologyAlgorithms.h>
#include <SofaBaseTopology/EdgeSetGeometryAlgorithms.h>
#include <SofaBaseTopology/EdgeSetTopologyAlgorithms.h>
#include <SofaBaseTopology/HexahedronSetGeometryAlgorithms.h>
#include <SofaBaseTopology/HexahedronSetTopologyAlgorithms.h>
#include <SofaBaseTopology/PointSetGeometryAlgorithms.h>
#include <SofaBaseTopology/PointSetTopologyAlgorithms.h>
#include <SofaBaseTopology/QuadSetGeometryAlgorithms.h>
#include <SofaBaseTopology/QuadSetTopologyAlgorithms.h>
#include <SofaBaseTopology/TetrahedronSetGeometryAlgorithms.h>
#include <SofaBaseTopology/TetrahedronSetTopologyAlgorithms.h>
#include <SofaBaseTopology/TriangleSetGeometryAlgorithms.h>
#include <SofaBaseTopology/TriangleSetTopologyAlgorithms.h>



//---------------------------------------------------------------------------------------------
//Typedef for DynamicSparseGridGeometryAlgorithms
typedef sofa::component::topology::DynamicSparseGridGeometryAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > DynamicSparseGridGeometryAlgorithms1d;
typedef sofa::component::topology::DynamicSparseGridGeometryAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > DynamicSparseGridGeometryAlgorithms2d;
typedef sofa::component::topology::DynamicSparseGridGeometryAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > DynamicSparseGridGeometryAlgorithms3d;



//---------------------------------------------------------------------------------------------
//Typedef for DynamicSparseGridTopologyAlgorithms
typedef sofa::component::topology::DynamicSparseGridTopologyAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > DynamicSparseGridTopologyAlgorithms1d;
typedef sofa::component::topology::DynamicSparseGridTopologyAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > DynamicSparseGridTopologyAlgorithms2d;
typedef sofa::component::topology::DynamicSparseGridTopologyAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > DynamicSparseGridTopologyAlgorithms3d;



//---------------------------------------------------------------------------------------------
//Typedef for EdgeSetGeometryAlgorithms
typedef sofa::component::topology::EdgeSetGeometryAlgorithms<sofa::defaulttype::StdRigidTypes<3, double> > EdgeSetGeometryAlgorithmsRigid3d;
typedef sofa::component::topology::EdgeSetGeometryAlgorithms<sofa::defaulttype::StdRigidTypes<2, double> > EdgeSetGeometryAlgorithmsRigid2d;
typedef sofa::component::topology::EdgeSetGeometryAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > EdgeSetGeometryAlgorithms1d;
typedef sofa::component::topology::EdgeSetGeometryAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > EdgeSetGeometryAlgorithms2d;
typedef sofa::component::topology::EdgeSetGeometryAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > EdgeSetGeometryAlgorithms3d;



//---------------------------------------------------------------------------------------------
//Typedef for EdgeSetTopologyAlgorithms
typedef sofa::component::topology::EdgeSetTopologyAlgorithms<sofa::defaulttype::StdRigidTypes<3, double> > EdgeSetTopologyAlgorithmsRigid3d;
typedef sofa::component::topology::EdgeSetTopologyAlgorithms<sofa::defaulttype::StdRigidTypes<2, double> > EdgeSetTopologyAlgorithmsRigid2d;
typedef sofa::component::topology::EdgeSetTopologyAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > EdgeSetTopologyAlgorithms1d;
typedef sofa::component::topology::EdgeSetTopologyAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > EdgeSetTopologyAlgorithms2d;
typedef sofa::component::topology::EdgeSetTopologyAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > EdgeSetTopologyAlgorithms3d;



//---------------------------------------------------------------------------------------------
//Typedef for HexahedronSetGeometryAlgorithms
typedef sofa::component::topology::HexahedronSetGeometryAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > HexahedronSetGeometryAlgorithms1d;
typedef sofa::component::topology::HexahedronSetGeometryAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > HexahedronSetGeometryAlgorithms2d;
typedef sofa::component::topology::HexahedronSetGeometryAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > HexahedronSetGeometryAlgorithms3d;



//---------------------------------------------------------------------------------------------
//Typedef for HexahedronSetTopologyAlgorithms
typedef sofa::component::topology::HexahedronSetTopologyAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > HexahedronSetTopologyAlgorithms1d;
typedef sofa::component::topology::HexahedronSetTopologyAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > HexahedronSetTopologyAlgorithms2d;
typedef sofa::component::topology::HexahedronSetTopologyAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > HexahedronSetTopologyAlgorithms3d;



//---------------------------------------------------------------------------------------------
//Typedef for PointSetGeometryAlgorithms
typedef sofa::component::topology::PointSetGeometryAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > PointSetGeometryAlgorithms1d;
typedef sofa::component::topology::PointSetGeometryAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > PointSetGeometryAlgorithms2d;
typedef sofa::component::topology::PointSetGeometryAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > PointSetGeometryAlgorithms3d;



//---------------------------------------------------------------------------------------------
//Typedef for PointSetTopologyAlgorithms
typedef sofa::component::topology::PointSetTopologyAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > PointSetTopologyAlgorithms1d;
typedef sofa::component::topology::PointSetTopologyAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > PointSetTopologyAlgorithms2d;
typedef sofa::component::topology::PointSetTopologyAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > PointSetTopologyAlgorithms3d;



//---------------------------------------------------------------------------------------------
//Typedef for QuadSetGeometryAlgorithms
typedef sofa::component::topology::QuadSetGeometryAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > QuadSetGeometryAlgorithms1d;
typedef sofa::component::topology::QuadSetGeometryAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > QuadSetGeometryAlgorithms2d;
typedef sofa::component::topology::QuadSetGeometryAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > QuadSetGeometryAlgorithms3d;



//---------------------------------------------------------------------------------------------
//Typedef for QuadSetTopologyAlgorithms
typedef sofa::component::topology::QuadSetTopologyAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > QuadSetTopologyAlgorithms1d;
typedef sofa::component::topology::QuadSetTopologyAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > QuadSetTopologyAlgorithms2d;
typedef sofa::component::topology::QuadSetTopologyAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > QuadSetTopologyAlgorithms3d;



//---------------------------------------------------------------------------------------------
//Typedef for TetrahedronSetGeometryAlgorithms
typedef sofa::component::topology::TetrahedronSetGeometryAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > TetrahedronSetGeometryAlgorithms1d;
typedef sofa::component::topology::TetrahedronSetGeometryAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > TetrahedronSetGeometryAlgorithms2d;
typedef sofa::component::topology::TetrahedronSetGeometryAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > TetrahedronSetGeometryAlgorithms3d;



//---------------------------------------------------------------------------------------------
//Typedef for TetrahedronSetTopologyAlgorithms
typedef sofa::component::topology::TetrahedronSetTopologyAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > TetrahedronSetTopologyAlgorithms1d;
typedef sofa::component::topology::TetrahedronSetTopologyAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > TetrahedronSetTopologyAlgorithms2d;
typedef sofa::component::topology::TetrahedronSetTopologyAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > TetrahedronSetTopologyAlgorithms3d;



//---------------------------------------------------------------------------------------------
//Typedef for TriangleSetGeometryAlgorithms
typedef sofa::component::topology::TriangleSetGeometryAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > TriangleSetGeometryAlgorithms1d;
typedef sofa::component::topology::TriangleSetGeometryAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > TriangleSetGeometryAlgorithms2d;
typedef sofa::component::topology::TriangleSetGeometryAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > TriangleSetGeometryAlgorithms3d;



//---------------------------------------------------------------------------------------------
//Typedef for TriangleSetTopologyAlgorithms
typedef sofa::component::topology::TriangleSetTopologyAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > TriangleSetTopologyAlgorithms1d;
typedef sofa::component::topology::TriangleSetTopologyAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > TriangleSetTopologyAlgorithms2d;
typedef sofa::component::topology::TriangleSetTopologyAlgorithms<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > TriangleSetTopologyAlgorithms3d;





#ifndef SOFA_FLOAT
typedef DynamicSparseGridGeometryAlgorithms1d DynamicSparseGridGeometryAlgorithms1;
typedef DynamicSparseGridGeometryAlgorithms2d DynamicSparseGridGeometryAlgorithms2;
typedef DynamicSparseGridGeometryAlgorithms3d DynamicSparseGridGeometryAlgorithms3;
typedef DynamicSparseGridTopologyAlgorithms1d DynamicSparseGridTopologyAlgorithms1;
typedef DynamicSparseGridTopologyAlgorithms2d DynamicSparseGridTopologyAlgorithms2;
typedef DynamicSparseGridTopologyAlgorithms3d DynamicSparseGridTopologyAlgorithms3;
typedef EdgeSetGeometryAlgorithmsRigid3d EdgeSetGeometryAlgorithmsRigid3;
typedef EdgeSetGeometryAlgorithmsRigid2d EdgeSetGeometryAlgorithmsRigid2;
typedef EdgeSetGeometryAlgorithms1d EdgeSetGeometryAlgorithms1;
typedef EdgeSetGeometryAlgorithms2d EdgeSetGeometryAlgorithms2;
typedef EdgeSetGeometryAlgorithms3d EdgeSetGeometryAlgorithms3;
typedef EdgeSetTopologyAlgorithmsRigid3d EdgeSetTopologyAlgorithmsRigid3;
typedef EdgeSetTopologyAlgorithmsRigid2d EdgeSetTopologyAlgorithmsRigid2;
typedef EdgeSetTopologyAlgorithms1d EdgeSetTopologyAlgorithms1;
typedef EdgeSetTopologyAlgorithms2d EdgeSetTopologyAlgorithms2;
typedef EdgeSetTopologyAlgorithms3d EdgeSetTopologyAlgorithms3;
typedef HexahedronSetGeometryAlgorithms1d HexahedronSetGeometryAlgorithms1;
typedef HexahedronSetGeometryAlgorithms2d HexahedronSetGeometryAlgorithms2;
typedef HexahedronSetGeometryAlgorithms3d HexahedronSetGeometryAlgorithms3;
typedef HexahedronSetTopologyAlgorithms1d HexahedronSetTopologyAlgorithms1;
typedef HexahedronSetTopologyAlgorithms2d HexahedronSetTopologyAlgorithms2;
typedef HexahedronSetTopologyAlgorithms3d HexahedronSetTopologyAlgorithms3;
typedef PointSetGeometryAlgorithms1d PointSetGeometryAlgorithms1;
typedef PointSetGeometryAlgorithms2d PointSetGeometryAlgorithms2;
typedef PointSetGeometryAlgorithms3d PointSetGeometryAlgorithms3;
typedef PointSetTopologyAlgorithms1d PointSetTopologyAlgorithms1;
typedef PointSetTopologyAlgorithms2d PointSetTopologyAlgorithms2;
typedef PointSetTopologyAlgorithms3d PointSetTopologyAlgorithms3;
typedef QuadSetGeometryAlgorithms1d QuadSetGeometryAlgorithms1;
typedef QuadSetGeometryAlgorithms2d QuadSetGeometryAlgorithms2;
typedef QuadSetGeometryAlgorithms3d QuadSetGeometryAlgorithms3;
typedef QuadSetTopologyAlgorithms1d QuadSetTopologyAlgorithms1;
typedef QuadSetTopologyAlgorithms2d QuadSetTopologyAlgorithms2;
typedef QuadSetTopologyAlgorithms3d QuadSetTopologyAlgorithms3;
typedef TetrahedronSetGeometryAlgorithms1d TetrahedronSetGeometryAlgorithms1;
typedef TetrahedronSetGeometryAlgorithms2d TetrahedronSetGeometryAlgorithms2;
typedef TetrahedronSetGeometryAlgorithms3d TetrahedronSetGeometryAlgorithms3;
typedef TetrahedronSetTopologyAlgorithms1d TetrahedronSetTopologyAlgorithms1;
typedef TetrahedronSetTopologyAlgorithms2d TetrahedronSetTopologyAlgorithms2;
typedef TetrahedronSetTopologyAlgorithms3d TetrahedronSetTopologyAlgorithms3;
typedef TriangleSetGeometryAlgorithms1d TriangleSetGeometryAlgorithms1;
typedef TriangleSetGeometryAlgorithms2d TriangleSetGeometryAlgorithms2;
typedef TriangleSetGeometryAlgorithms3d TriangleSetGeometryAlgorithms3;
typedef TriangleSetTopologyAlgorithms1d TriangleSetTopologyAlgorithms1;
typedef TriangleSetTopologyAlgorithms2d TriangleSetTopologyAlgorithms2;
typedef TriangleSetTopologyAlgorithms3d TriangleSetTopologyAlgorithms3;
#endif

#endif
