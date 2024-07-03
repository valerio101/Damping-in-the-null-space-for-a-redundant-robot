/* Include files */

#include "model1acc_cgxe.h"
#include "m_gkyqA4gt7d8YteU89BQC6B.h"
#include "m_oyTiUA1mXHIdU2mQYs9HkB.h"

unsigned int cgxe_model1acc_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 405331121 &&
      ssGetChecksum1(S) == 2142049275 &&
      ssGetChecksum2(S) == 2709683938 &&
      ssGetChecksum3(S) == 1644050240) {
    method_dispatcher_gkyqA4gt7d8YteU89BQC6B(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1546716979 &&
      ssGetChecksum1(S) == 1400672913 &&
      ssGetChecksum2(S) == 3348075028 &&
      ssGetChecksum3(S) == 1801310102) {
    method_dispatcher_oyTiUA1mXHIdU2mQYs9HkB(S, method, data);
    return 1;
  }

  return 0;
}
