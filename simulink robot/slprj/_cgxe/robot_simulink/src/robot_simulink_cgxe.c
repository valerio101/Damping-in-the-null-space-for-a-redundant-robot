/* Include files */

#include "robot_simulink_cgxe.h"
#include "m_snTPDnxKa3FouhcUIUbioG.h"
#include "m_KP1IFUne4bVp2cYE0pRnBB.h"
#include "m_6D6IzLeu1KppjwRnuOsRoB.h"
#include "m_pOqWks49DzZ1t0A4BrYMwB.h"

unsigned int cgxe_robot_simulink_method_dispatcher(SimStruct* S, int_T method,
  void* data)
{
  if (ssGetChecksum0(S) == 1137896384 &&
      ssGetChecksum1(S) == 189890023 &&
      ssGetChecksum2(S) == 1985311155 &&
      ssGetChecksum3(S) == 1443838323) {
    method_dispatcher_snTPDnxKa3FouhcUIUbioG(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2474805009 &&
      ssGetChecksum1(S) == 2710428317 &&
      ssGetChecksum2(S) == 3701977155 &&
      ssGetChecksum3(S) == 587426749) {
    method_dispatcher_KP1IFUne4bVp2cYE0pRnBB(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2538719146 &&
      ssGetChecksum1(S) == 4227837148 &&
      ssGetChecksum2(S) == 772780978 &&
      ssGetChecksum3(S) == 717573827) {
    method_dispatcher_6D6IzLeu1KppjwRnuOsRoB(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3090325659 &&
      ssGetChecksum1(S) == 1941059431 &&
      ssGetChecksum2(S) == 1555563613 &&
      ssGetChecksum3(S) == 415005262) {
    method_dispatcher_pOqWks49DzZ1t0A4BrYMwB(S, method, data);
    return 1;
  }

  return 0;
}
