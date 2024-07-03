/* Include files */

#include "model1_cgxe.h"
#include "m_zlVsX1SxkEh1WoTDwpn32F.h"

unsigned int cgxe_model1_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 4115478497 &&
      ssGetChecksum1(S) == 3508943329 &&
      ssGetChecksum2(S) == 3799628438 &&
      ssGetChecksum3(S) == 2092347621) {
    method_dispatcher_zlVsX1SxkEh1WoTDwpn32F(S, method, data);
    return 1;
  }

  return 0;
}
