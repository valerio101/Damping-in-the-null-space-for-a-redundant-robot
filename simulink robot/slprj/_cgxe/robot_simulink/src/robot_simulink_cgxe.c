/* Include files */

#include "robot_simulink_cgxe.h"
#include "m_NRow8X0OFqedY5LmzUzZ3.h"
#include "m_DUmjmcoui7qfqY1OHRun6G.h"
#include "m_nF26G4Gm9zCyiROo35Ac1D.h"
#include "m_erAk6EJSTx5zVZzRlzFnx.h"
#include "m_UfqrrAApCT5ZaKkYJF4XlB.h"

unsigned int cgxe_robot_simulink_method_dispatcher(SimStruct* S, int_T method,
  void* data)
{
  if (ssGetChecksum0(S) == 784879911 &&
      ssGetChecksum1(S) == 1393155060 &&
      ssGetChecksum2(S) == 3952798672 &&
      ssGetChecksum3(S) == 1175498503) {
    method_dispatcher_NRow8X0OFqedY5LmzUzZ3(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 913923201 &&
      ssGetChecksum1(S) == 2542857697 &&
      ssGetChecksum2(S) == 1430628584 &&
      ssGetChecksum3(S) == 1109208376) {
    method_dispatcher_DUmjmcoui7qfqY1OHRun6G(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2363422972 &&
      ssGetChecksum1(S) == 2993223528 &&
      ssGetChecksum2(S) == 1884736733 &&
      ssGetChecksum3(S) == 1598938455) {
    method_dispatcher_nF26G4Gm9zCyiROo35Ac1D(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3469954046 &&
      ssGetChecksum1(S) == 2983243469 &&
      ssGetChecksum2(S) == 1943915703 &&
      ssGetChecksum3(S) == 3493174484) {
    method_dispatcher_erAk6EJSTx5zVZzRlzFnx(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3777151813 &&
      ssGetChecksum1(S) == 4206254963 &&
      ssGetChecksum2(S) == 288693818 &&
      ssGetChecksum3(S) == 349458999) {
    method_dispatcher_UfqrrAApCT5ZaKkYJF4XlB(S, method, data);
    return 1;
  }

  return 0;
}
