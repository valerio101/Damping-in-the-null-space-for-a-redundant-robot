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
  mxArray* mxModules = mxCreateCellMatrix(5, 1);
  mxArray* mxChksum = NULL;
  uint32_T* checksumData = NULL;
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 784879911;
  checksumData[1] = 1393155060;
  checksumData[2] = 3952798672;
  checksumData[3] = 1175498503;
  mxSetCell(mxModules, 0, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 913923201;
  checksumData[1] = 2542857697;
  checksumData[2] = 1430628584;
  checksumData[3] = 1109208376;
  mxSetCell(mxModules, 1, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 2363422972;
  checksumData[1] = 2993223528;
  checksumData[2] = 1884736733;
  checksumData[3] = 1598938455;
  mxSetCell(mxModules, 2, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3469954046;
  checksumData[1] = 2983243469;
  checksumData[2] = 1943915703;
  checksumData[3] = 3493174484;
  mxSetCell(mxModules, 3, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3777151813;
  checksumData[1] = 4206254963;
  checksumData[2] = 288693818;
  checksumData[3] = 349458999;
  mxSetCell(mxModules, 4, mxChksum);
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
    checksumData[0] = 3439715141;
    checksumData[1] = 2759315400;
    checksumData[2] = 3309312663;
    checksumData[3] = 4251744864;
    mxSetField(mxChecksum, 0, "model", mxModelChksum);
  }

  {
    mxArray* mxMakefileChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxMakefileChksum);
    checksumData[0] = 302809900;
    checksumData[1] = 2106716978;
    checksumData[2] = 2229300160;
    checksumData[3] = 1661530424;
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
    checksumData[0] = 3802005993;
    checksumData[1] = 3705699476;
    checksumData[2] = 506621856;
    checksumData[3] = 2832402622;
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
  if (strcmp(tpChksum, "NRow8X0OFqedY5LmzUzZ3") == 0) {
    extern mxArray *cgxe_NRow8X0OFqedY5LmzUzZ3_BuildInfoUpdate(void);
    plhs[0] = cgxe_NRow8X0OFqedY5LmzUzZ3_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "DUmjmcoui7qfqY1OHRun6G") == 0) {
    extern mxArray *cgxe_DUmjmcoui7qfqY1OHRun6G_BuildInfoUpdate(void);
    plhs[0] = cgxe_DUmjmcoui7qfqY1OHRun6G_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "nF26G4Gm9zCyiROo35Ac1D") == 0) {
    extern mxArray *cgxe_nF26G4Gm9zCyiROo35Ac1D_BuildInfoUpdate(void);
    plhs[0] = cgxe_nF26G4Gm9zCyiROo35Ac1D_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "erAk6EJSTx5zVZzRlzFnx") == 0) {
    extern mxArray *cgxe_erAk6EJSTx5zVZzRlzFnx_BuildInfoUpdate(void);
    plhs[0] = cgxe_erAk6EJSTx5zVZzRlzFnx_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "UfqrrAApCT5ZaKkYJF4XlB") == 0) {
    extern mxArray *cgxe_UfqrrAApCT5ZaKkYJF4XlB_BuildInfoUpdate(void);
    plhs[0] = cgxe_UfqrrAApCT5ZaKkYJF4XlB_BuildInfoUpdate();
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
  if (strcmp(tpChksum, "NRow8X0OFqedY5LmzUzZ3") == 0) {
    extern mxArray *cgxe_NRow8X0OFqedY5LmzUzZ3_fallback_info(void);
    plhs[0] = cgxe_NRow8X0OFqedY5LmzUzZ3_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "DUmjmcoui7qfqY1OHRun6G") == 0) {
    extern mxArray *cgxe_DUmjmcoui7qfqY1OHRun6G_fallback_info(void);
    plhs[0] = cgxe_DUmjmcoui7qfqY1OHRun6G_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "nF26G4Gm9zCyiROo35Ac1D") == 0) {
    extern mxArray *cgxe_nF26G4Gm9zCyiROo35Ac1D_fallback_info(void);
    plhs[0] = cgxe_nF26G4Gm9zCyiROo35Ac1D_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "erAk6EJSTx5zVZzRlzFnx") == 0) {
    extern mxArray *cgxe_erAk6EJSTx5zVZzRlzFnx_fallback_info(void);
    plhs[0] = cgxe_erAk6EJSTx5zVZzRlzFnx_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "UfqrrAApCT5ZaKkYJF4XlB") == 0) {
    extern mxArray *cgxe_UfqrrAApCT5ZaKkYJF4XlB_fallback_info(void);
    plhs[0] = cgxe_UfqrrAApCT5ZaKkYJF4XlB_fallback_info();
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
