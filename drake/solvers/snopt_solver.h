#pragma once

#include "drake/drakeOptimization_export.h"

#include "drake/solvers/mathematical_program.h"

namespace drake {
namespace solvers {

class DRAKEOPTIMIZATION_EXPORT SnoptSolver :
    public MathematicalProgramSolverInterface  {
 public:
  // This solver is implemented in various pieces depending on if
  // SNOPT was available during compilation.
  bool available() const override;
  SolutionResult Solve(MathematicalProgram& prog) const override;
};

}  // namespace solvers
}  // namespace drake
