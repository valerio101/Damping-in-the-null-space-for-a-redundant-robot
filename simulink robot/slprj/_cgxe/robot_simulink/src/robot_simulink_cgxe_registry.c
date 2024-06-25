#define S_FUNCTION_LEVEL               2
#define S_FUNCTION_NAME                robot_simulink_cgxe
#include "simstruc.h"
#include "robot_simulink_cgxe.h"
#define MDL_START

static void mdlStart(SimStruct* S)
{
  unsigned int success;
  success = cgxe_robot_simulink_method_dispatcher(S, SS_CALL_MDL_START, NULL);
  if (!success) {
    /* error */
    mexPrintf("ERROR: Failed to dispatch s-function method!\n");
  }
}

#define MDL_INITIALIZE_CONDITIONS

static void mdlInitializeConditions(SimStruct *S)
{
  mexPrintf("ERROR: Calling model mdlInitializeConditions method directly.\n");
}

#define MDL_UPDATE

static void mdlUpdate(SimStruct *S, int_T tid)
{
  mexPrintf("ERROR: Calling model mdlUpdate method directly.\n");
}

static void mdlOutputs(SimStruct* S, int_T tid)
{
  mexPrintf("ERROR: Calling model mdlOutputs method directly.\n");
}

static void mdlTerminate(SimStruct *S)
{
  mexPrintf("ERROR: Calling model mdlTerminate method directly.\n");
}

static void mdlInitializeSizes(SimStruct *S)
{
}

static void mdlInitializeSampleTimes(SimStruct *S)
{
}

static mxArray* cgxe_get_supported_modules(void)
{
  mxArray* mxModules = mxCreateCellMatrix(4, 1);
  mxArray* mxChksum = NULL;
  uint32_T* checksumData = NULL;
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 1137896384;
  checksumData[1] = 189890023;
  checksumData[2] = 1985311155;
  checksumData[3] = 1443838323;
  mxSetCell(mxModules, 0, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 2474805009;
  checksumData[1] = 2710428317;
  checksumData[2] = 3701977155;
  checksumData[3] = 587426749;
  mxSetCell(mxModules, 1, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 2538719146;
  checksumData[1] = 4227837148;
  checksumData[2] = 772780978;
  checksumData[3] = 717573827;
  mxSetCell(mxModules, 2, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3090325659;
  checksumData[1] = 1941059431;
  checksumData[2] = 1555563613;
  checksumData[3] = 415005262;
  mxSetCell(mxModules, 3, mxChksum);
  return mxModules;
}

static int cgxe_process_get_checksums(int nlhs, mxArray* plhs[], int nrhs, const
  mxArray* prhs[])
{
  const char* checksumFields[] = { "modules", "model", "makefile", "target",
    "overall" };

  mxArray* mxChecksum = mxCreateStructMatrix(1, 1, 5, checksumFields);
  mxSetField(mxChecksum, 0, "modules", cgxe_get_supported_modules());

  {
    mxArray* mxModelChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxModelChksum);
    checksumData[0] = 3836150581;
    checksumData[1] = 238617736;
    checksumData[2] = 4199299289;
    checksumData[3] = 1399779622;
    mxSetField(mxChecksum, 0, "model", mxModelChksum);
  }

  {
    mxArray* mxMakefileChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxMakefileChksum);
    checksumData[0] = 2592520840;
    checksumData[1] = 1049049275;
    checksumData[2] = 4216934590;
    checksumData[3] = 1044366105;
    mxSetField(mxChecksum, 0, "makefile", mxMakefileChksum);
  }

  {
    mxArray* mxTargetChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxTargetChksum);
    checksumData[0] = 2911221907;
    checksumData[1] = 2308967934;
    checksumData[2] = 2419390157;
    checksumData[3] = 1906300239;
    mxSetField(mxChecksum, 0, "target", mxTargetChksum);
  }

  {
    mxArray* mxOverallChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxOverallChksum);
    checksumData[0] = 2105232576;
    checksumData[1] = 2132017582;
    checksumData[2] = 2338847914;
    checksumData[3] = 1673639619;
    mxSetField(mxChecksum, 0, "overall", mxOverallChksum);
  }

  plhs[0] = mxChecksum;
  return 1;
}

static int cgxe_mex_unlock_call(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  while (mexIsLocked()) {
    mexUnlock();
  }

  return 1;
}

static SimStruct* cgxe_unpack_simstruct(const mxArray *mxS)
{
  uint32_T *uintPtr = (uint32_T*)malloc(sizeof(SimStruct*));
  int nEl = sizeof(SimStruct*)/sizeof(uint32_T);
  uint32_T *uintDataPtr = (uint32_T *)mxGetData(mxS);
  int el;
  SimStruct *S;
  for (el=0; el < nEl; el++) {
    uintPtr[el] = uintDataPtr[el];
  }

  memcpy(&S,uintPtr,sizeof(SimStruct*));
  free(uintPtr);
  return S;
}

static int cgxe_get_sim_state(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  unsigned int success;
  SimStruct *S = cgxe_unpack_simstruct(prhs[1]);
  success = cgxe_robot_simulink_method_dispatcher(S, SS_CALL_MDL_GET_SIM_STATE,
    (void *) (plhs));
  if (!success) {
    /* error */
    mexPrintf("ERROR: Failed to dispatch s-function method!\n");
  }

  return 1;
}

static int cgxe_set_sim_state(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  unsigned int success;
  SimStruct *S = cgxe_unpack_simstruct(prhs[1]);
  success = cgxe_robot_simulink_method_dispatcher(S, SS_CALL_MDL_SET_SIM_STATE,
    (void *) prhs[2]);
  if (!success) {
    /* error */
    mexPrintf("ERROR: Failed to dispatch s-function method!\n");
  }

  return 1;
}

static int cgxe_get_BuildInfoUpdate(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  char tpChksum[64];
  mxGetString(prhs[1], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(tpChksum, "snTPDnxKa3FouhcUIUbioG") == 0) {
    extern mxArray *cgxe_snTPDnxKa3FouhcUIUbioG_BuildInfoUpdate(void);
    plhs[0] = cgxe_snTPDnxKa3FouhcUIUbioG_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "KP1IFUne4bVp2cYE0pRnBB") == 0) {
    extern mxArray *cgxe_KP1IFUne4bVp2cYE0pRnBB_BuildInfoUpdate(void);
    plhs[0] = cgxe_KP1IFUne4bVp2cYE0pRnBB_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "6D6IzLeu1KppjwRnuOsRoB") == 0) {
    extern mxArray *cgxe_6D6IzLeu1KppjwRnuOsRoB_BuildInfoUpdate(void);
    plhs[0] = cgxe_6D6IzLeu1KppjwRnuOsRoB_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "pOqWks49DzZ1t0A4BrYMwB") == 0) {
    extern mxArray *cgxe_pOqWks49DzZ1t0A4BrYMwB_BuildInfoUpdate(void);
    plhs[0] = cgxe_pOqWks49DzZ1t0A4BrYMwB_BuildInfoUpdate();
    return 1;
  }

  return 0;
}

static int cgxe_get_fallback_info(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  char tpChksum[64];
  mxGetString(prhs[1], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(tpChksum, "snTPDnxKa3FouhcUIUbioG") == 0) {
    extern mxArray *cgxe_snTPDnxKa3FouhcUIUbioG_fallback_info(void);
    plhs[0] = cgxe_snTPDnxKa3FouhcUIUbioG_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "KP1IFUne4bVp2cYE0pRnBB") == 0) {
    extern mxArray *cgxe_KP1IFUne4bVp2cYE0pRnBB_fallback_info(void);
    plhs[0] = cgxe_KP1IFUne4bVp2cYE0pRnBB_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "6D6IzLeu1KppjwRnuOsRoB") == 0) {
    extern mxArray *cgxe_6D6IzLeu1KppjwRnuOsRoB_fallback_info(void);
    plhs[0] = cgxe_6D6IzLeu1KppjwRnuOsRoB_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "pOqWks49DzZ1t0A4BrYMwB") == 0) {
    extern mxArray *cgxe_pOqWks49DzZ1t0A4BrYMwB_fallback_info(void);
    plhs[0] = cgxe_pOqWks49DzZ1t0A4BrYMwB_fallback_info();
    return 1;
  }

  return 0;
}

#define PROCESS_MEX_SFUNCTION_CMD_LINE_CALL

static int ProcessMexSfunctionCmdLineCall(int nlhs, mxArray* plhs[], int nrhs,
  const mxArray* prhs[])
{
  char commandName[64];
  if (nrhs < 1 || !mxIsChar(prhs[0]))
    return 0;
  mxGetString(prhs[0], commandName, sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName, "get_checksums") == 0) {
    return cgxe_process_get_checksums(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "mex_unlock") == 0) {
    return cgxe_mex_unlock_call(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "get_sim_state") == 0) {
    return cgxe_get_sim_state(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "set_sim_state") == 0) {
    return cgxe_set_sim_state(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "get_BuildInfoUpdate") == 0) {
    return cgxe_get_BuildInfoUpdate(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "get_fallback_info") == 0) {
    return cgxe_get_fallback_info(nlhs, plhs, nrhs, prhs);
  }

  return 0;
}

#include "simulink.c"
