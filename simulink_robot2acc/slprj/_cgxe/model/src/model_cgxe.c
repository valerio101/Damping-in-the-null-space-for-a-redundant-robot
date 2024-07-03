/* Include files */

#include "model_cgxe.h"
#include "m_Gnnr8NF3aSQMwelKUk5EsH.h"
#include "m_Jg52ITXOJHF6FJ4IKYUmTF.h"

unsigned int cgxe_model_method_dispatcher(SimStruct* S, int_T method, void* data)
{
  if (ssGetChecksum0(S) == 2589396372 &&
      ssGetChecksum1(S) == 1629114040 &&
      ssGetChecksum2(S) == 562797641 &&
      ssGetChecksum3(S) == 2935299449) {
    method_dispatcher_Gnnr8NF3aSQMwelKUk5EsH(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3270741608 &&
      ssGetChecksum1(S) == 1712093652 &&
      ssGetChecksum2(S) == 775766846 &&
      ssGetChecksum3(S) == 1704510674) {
    method_dispatcher_Jg52ITXOJHF6FJ4IKYUmTF(S, method, data);
    return 1;
  }

  return 0;
}
