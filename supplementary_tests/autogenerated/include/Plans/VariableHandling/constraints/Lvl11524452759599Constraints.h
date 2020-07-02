#ifndef Lvl1CONSTRAINT_H_
#define Lvl1_H_
#include "engine/BasicConstraint.h"
#include <memory>

using namespace std;
using namespace alica;

namespace alica
{
class ProblemDescriptor;
class RunningPlan;
} // namespace alica

namespace alicaAutogenerated
{

class Constraint1524453470580 : public BasicConstraint
{
    void getConstraint(shared_ptr<ProblemDescriptor> c, shared_ptr<RunningPlan> rp);
};

class Constraint1524453491764 : public BasicConstraint
{
    void getConstraint(shared_ptr<ProblemDescriptor> c, shared_ptr<RunningPlan> rp);
};

} // namespace alicaAutogenerated

#endif /* Lvl1CONSTRAINT_H_ */