#include "Plans/Move1542882005838.h"
using namespace alica;
/*PROTECTED REGION ID(eph1542882005838) ENABLED START*/  // Add additional using directives here
/*PROTECTED REGION END*/
namespace alicaAutogenerated {
// Plan:Move

// Check of RuntimeCondition - (Name): CircleRuntimeCondition, (ConditionString): , (Comment) :

/*
 * Available Vars:
 */
bool RunTimeCondition1543284793605::evaluate(shared_ptr<RunningPlan> rp) {
    /*PROTECTED REGION ID(1543284793605) ENABLED START*/
    return true;
    /*PROTECTED REGION END*/
}

/* generated comment

 Task: LeaderTask  -> EntryPoint-ID: 1543227886876

 Task: FollowerTask  -> EntryPoint-ID: 1543227889789

 */
shared_ptr<UtilityFunction> UtilityFunction1542882005838::getUtilityFunction(Plan* plan) {
    /*PROTECTED REGION ID(1542882005838) ENABLED START*/

    shared_ptr<UtilityFunction> defaultFunction = make_shared<DefaultUtilityFunction>(plan);
    return defaultFunction;

    /*PROTECTED REGION END*/
}

// State: Move2Center in Plan: Move

// State: AlignCircle in Plan: Move

}  // namespace alicaAutogenerated
