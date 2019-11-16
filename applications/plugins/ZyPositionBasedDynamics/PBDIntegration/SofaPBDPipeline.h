#ifndef SOFAPBDPIPELINE_H
#define SOFAPBDPIPELINE_H

#include <sofa/core/objectmodel/Data.h>
#include <sofa/core/objectmodel/Tag.h>
#include <ZyPipelineInterface.h>

#include "initZyPositionBasedDynamicsPlugin.h"

#include "SofaPBDSearchNodeVisitor.h"
#include "SofaPBDCollisionVisitor.h"

namespace sofa
{
    namespace core
    {
        class CollisionModel;
        namespace collision
        {
            class BroadPhaseDetection;
            class NarrowPhaseDetection;
            class CollisionGroupManager;
            class ContactManager;
            class Intersection;
        }
    }
}

namespace sofa
{
    namespace simulation
    {
        namespace PBDSimulation
        {
            using namespace sofa;
            using namespace sofa::core::objectmodel;
            using namespace sofa::core::collision;

            static sofa::core::objectmodel::Tag tagPBDCollisionPipeline = sofa::core::objectmodel::Tag("SofaPBDPipeline");


            class SOFA_ZY_POSITION_BASED_DYNAMICS_PLUGIN_API SofaPBDPipeline: public sofa::core::collision::ZyPipelineInterface
            {
                public:
                    SOFA_CLASS(SofaPBDPipeline, sofa::core::collision::ZyPipelineInterface);

                    SofaPBDPipeline();
                    ~SofaPBDPipeline();

                    void doCollisionReset();
                    void doCollisionDetection(const sofa::helper::vector<sofa::core::CollisionModel*>&);
                    void doCollisionResponse();

                    void setup(BroadPhaseDetection*, NarrowPhaseDetection*, Intersection*, ContactManager*, CollisionGroupManager*);

                    bool isDefaultPipeline() const { return false; }

                    void increaseExternalCallCount();
                    void resetExternalCallCount();
                    unsigned int getExternalCallCount() const;
                    unsigned int getInternalCallCount() const;

                protected:
                    Intersection* pipelineIntersectionMethod;
                    BroadPhaseDetection* pipelineBroadPhaseDetection;
                    NarrowPhaseDetection* pipelineNarrowPhaseDetection;

                    ContactManager* pipelineContactManager;
                    CollisionGroupManager* pipelineGroupManager;

                    Data<int> depth;

                    unsigned int m_callCountExternal;
                    unsigned int m_callCountInternal;
            };
        }
    }
}

#endif // SOFAPBDPIPELINE_H
