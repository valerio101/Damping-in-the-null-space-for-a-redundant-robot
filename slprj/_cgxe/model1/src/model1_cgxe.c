/* Include files */

#include "model1_cgxe.h"
#include "m_Hb0zxfW4ucUxYa9CoC5FOF.h"
#include "m_gkyqA4gt7d8YteU89BQC6B.h"
#include "m_6CUl4zdOS9hZnXbFFGvXqH.h"
#include "m_XgLj29YS0gkbAGuj3S7v1G.h"

unsigned int cgxe_model1_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 316881823 &&
      ssGetChecksum1(S) == 3794865438 &&
      ssGetChecksum2(S) == 2166266600 &&
      ssGetChecksum3(S) == 1524756919) {
    method_dispatcher_Hb0zxfW4ucUxYa9CoC5FOF(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 405331121 &&
      ssGetChecksum1(S) == 2142049275 &&
      ssGetChecksum2(S) == 2709683938 &&
      ssGetChecksum3(S) == 1644050240) {
    method_dispatcher_gkyqA4gt7d8YteU89BQC6B(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3014870757 &&
      ssGetChecksum1(S) == 3796940230 &&
      ssGetChecksum2(S) == 134867018 &&
      ssGetChecksum3(S) == 2317395099) {
    method_dispatcher_6CUl4zdOS9hZnXbFFGvXqH(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 4192613931 &&
      ssGetChecksum1(S) == 291376836 &&
      ssGetChecksum2(S) == 806250278 &&
      ssGetChecksum3(S) == 1884191064) {
    method_dispatcher_XgLj29YS0gkbAGuj3S7v1G(S, method, data);
    return 1;
  }

  return 0;
}
