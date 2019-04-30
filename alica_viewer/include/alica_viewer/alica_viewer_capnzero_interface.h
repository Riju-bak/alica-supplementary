#pragma once

#include <QThread>

#include <msgs/AlicaEngineInfo.capnp.h>
#include <msgs/PlanTreeInfo.capnp.h>
#include <engine/containers/AlicaEngineInfo.h>
#include <engine/containers/PlanTreeInfo.h>
#include <essentials/AgentIDManager.h>

#include <capnp/serialize-packed.h>

namespace capnzero
{
    class Subscriber;
}

namespace alica
{

class AlicaViewerCapnzeroInterface : public QThread
{
    Q_OBJECT

  public:
    AlicaViewerCapnzeroInterface(int argc, char* argv[]);
    ~AlicaViewerCapnzeroInterface();
    void run() override;

  Q_SIGNALS:
    void shutdown();
    void alicaEngineInfoUpdate(const alica::AlicaEngineInfo& msg);
    void alicaPlanInfoUpdate(const alica::PlanTreeInfo& msg);
    void updateTicks();

  private:
    void alicaEngineInfoCallback(::capnp::FlatArrayMessageReader& msg);
    void alicaPlanInfoCallback(::capnp::FlatArrayMessageReader& msg);
    capnzero::Subscriber *AlicaEngineInfoSubscriber;
    capnzero::Subscriber *AlicaPlanTreeInfoSubscriber;
    essentials::AgentIDManager* _agent_id_manager;
    void *ctx;
    std::string url;
    std::string alicaEngineInfoTopic;
    std::string planTreeInfoTopic;
};

} // namespace alica

// Declare templates that can be accepted by QVariant
Q_DECLARE_METATYPE(alica::AlicaEngineInfo);
Q_DECLARE_METATYPE(alica::PlanTreeInfo);