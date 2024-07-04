#define S_FUNCTION_LEVEL               2
#define S_FUNCTION_NAME                model1_cgxe
#include "simstruc.h"
#include "model1_cgxe.h"
#define MDL_START

static void mdlStart(SimStruct* S)
{
  unsigned int success;
  success = cgxe_model1_method_dispatcher(S, SS_CALL_MDL_START, NULL);
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
  checksumData[0] = 316881823;
  checksumData[1] = 3794865438;
  checksumData[2] = 2166266600;
  checksumData[3] = 1524756919;
  mxSetCell(mxModules, 0, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 405331121;
  checksumData[1] = 2142049275;
  checksumData[2] = 2709683938;
  checksumData[3] = 1644050240;
  mxSetCell(mxModules, 1, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3014870757;
  checksumData[1] = 3796940230;
  checksumData[2] = 134867018;
  checksumData[3] = 2317395099;
  mxSetCell(mxModules, 2, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 4192613931;
  checksumData[1] = 291376836;
  checksumData[2] = 806250278;
  checksumData[3] = 1884191064;
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
    checksumData[0] = 4048932708;
    checksumData[1] = 2003358858;
    checksumData[2] = 1724916027;
    checksumData[3] = 3970894006;
    mxSetField(mxChecksum, 0, "model", mxModelChksum);
  }

  {
    mxArray* mxMakefileChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxMakefileChksum);
    checksumData[0] = 979142915;
    checksumData[1] = 1261605305;
    checksumData[2] = 4071654335;
    checksumData[3] = 1010068149;
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
    checksumData[0] = 2032329084;
    checksumData[1] = 1928579214;
    checksumData[2] = 3008787491;
    checksumData[3] = 3240930353;
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
  success = cgxe_model1_method_dispatcher(S, SS_CALL_MDL_GET_SIM_STATE, (void *)
    (plhs));
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
  success = cgxe_model1_method_dispatcher(S, SS_CALL_MDL_SET_SIM_STATE, (void *)
    prhs[2]);
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
  if (strcmp(tpChksum, "Hb0zxfW4ucUxYa9CoC5FOF") == 0) {
    extern mxArray *cgxe_Hb0zxfW4ucUxYa9CoC5FOF_BuildInfoUpdate(void);
    plhs[0] = cgxe_Hb0zxfW4ucUxYa9CoC5FOF_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "gkyqA4gt7d8YteU89BQC6B") == 0) {
    extern mxArray *cgxe_gkyqA4gt7d8YteU89BQC6B_BuildInfoUpdate(void);
    plhs[0] = cgxe_gkyqA4gt7d8YteU89BQC6B_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "6CUl4zdOS9hZnXbFFGvXqH") == 0) {
    extern mxArray *cgxe_6CUl4zdOS9hZnXbFFGvXqH_BuildInfoUpdate(void);
    plhs[0] = cgxe_6CUl4zdOS9hZnXbFFGvXqH_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "XgLj29YS0gkbAGuj3S7v1G") == 0) {
    extern mxArray *cgxe_XgLj29YS0gkbAGuj3S7v1G_BuildInfoUpdate(void);
    plhs[0] = cgxe_XgLj29YS0gkbAGuj3S7v1G_BuildInfoUpdate();
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
  if (strcmp(tpChksum, "Hb0zxfW4ucUxYa9CoC5FOF") == 0) {
    extern mxArray *cgxe_Hb0zxfW4ucUxYa9CoC5FOF_fallback_info(void);
    plhs[0] = cgxe_Hb0zxfW4ucUxYa9CoC5FOF_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "gkyqA4gt7d8YteU89BQC6B") == 0) {
    extern mxArray *cgxe_gkyqA4gt7d8YteU89BQC6B_fallback_info(void);
    plhs[0] = cgxe_gkyqA4gt7d8YteU89BQC6B_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "6CUl4zdOS9hZnXbFFGvXqH") == 0) {
    extern mxArray *cgxe_6CUl4zdOS9hZnXbFFGvXqH_fallback_info(void);
    plhs[0] = cgxe_6CUl4zdOS9hZnXbFFGvXqH_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "XgLj29YS0gkbAGuj3S7v1G") == 0) {
    extern mxArray *cgxe_XgLj29YS0gkbAGuj3S7v1G_fallback_info(void);
    plhs[0] = cgxe_XgLj29YS0gkbAGuj3S7v1G_fallback_info();
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
