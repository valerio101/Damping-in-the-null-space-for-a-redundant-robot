/* Include files */

#include "modelInterface.h"
#include "m_NRow8X0OFqedY5LmzUzZ3.h"
#include <string.h>
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 26,    /* lineNo */
  "GetTransformBlock",                 /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotsimulink/robotslmanip/+robotics/+slmanip/+internal/+block/GetTransformBloc"
  "k.m"                                /* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 9,   /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 25,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 39,  /* lineNo */
  "GetTransformBlock",                 /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotsimulink/robotslmanip/+robotics/+slmanip/+internal/+block/GetTransformBloc"
  "k.m"                                /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 1,   /* lineNo */
  "InternalAccess",                    /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/InternalAccess.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 1404,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 47,  /* lineNo */
  "VisualizationInfo",                 /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/VisualizationInfo.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 69,  /* lineNo */
  "VisualizationInfo",                 /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/VisualizationInfo.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 74,  /* lineNo */
  "randi",                             /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/randfun/randi.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 107, /* lineNo */
  "rand",                              /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/randfun/rand.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 45,  /* lineNo */
  "eml_rand",                          /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/randfun/private/eml_rand.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 23,  /* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/randfun/private/eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 51,  /* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/randfun/eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 111, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 133, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 185, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 201, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 182, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 1364,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 77,  /* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 102, /* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 112, /* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 159,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 180,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 182,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 213,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 214,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 155,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 279,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 1,  /* lineNo */
  "InternalAccess",                    /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/InternalAccess.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 31, /* lineNo */
  "CollisionSet",                      /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 56, /* lineNo */
  "CollisionSet",                      /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 131,/* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 153,/* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 158,/* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 173,/* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 304,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 167,/* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 168,/* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 170,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 27, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 32, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 46, /* lineNo */
  "GetTransformBlock",                 /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotsimulink/robotslmanip/+robotics/+slmanip/+internal/+block/GetTransformBloc"
  "k.m"                                /* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 1070,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 1072,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 1075,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 1086,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 1668,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 93, /* lineNo */
  "validateattributes",                /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/lang/validateattributes.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 1456,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 1457,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 1464,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 38, /* lineNo */
  "repmat",                            /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elmat/repmat.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 614,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 442,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 444,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 445,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 447,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 451,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 69, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 312,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 21, /* lineNo */
  "axang2tform",                       /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/shared/robotics/robotutils/axang2tform.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 24, /* lineNo */
  "axang2tform",                       /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/shared/robotics/robotutils/axang2tform.m"/* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 21, /* lineNo */
  "validateNumericMatrix",             /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/shared/robotics/robotutilsint/+robotics/+internal/+validation/validateNumericMatrix.m"/* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 24, /* lineNo */
  "axang2tform",                       /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/shared/robotics/robotutilsint/+robotics/+internal/axang2tform.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 37, /* lineNo */
  "axang2rotm",                        /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/shared/robotics/robotutilsint/+robotics/+internal/axang2rotm.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 15, /* lineNo */
  "normalizeRows",                     /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/shared/robotics/robotutilsint/+robotics/+internal/normalizeRows.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 23, /* lineNo */
  "quat2tform",                        /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/shared/robotics/robotutilsint/+robotics/+internal/quat2tform.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 22, /* lineNo */
  "quat2rotm",                         /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/shared/robotics/robotutilsint/+robotics/+internal/quat2rotm.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 1716,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 1720,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 1422,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 1428,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 478,/* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 22, /* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/matlabCodegenHandle.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 296,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 342,/* lineNo */
  "CollisionGeometry",                 /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionGeometry.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 1,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 156, /* lineNo */
  17,                                  /* colNo */
  "eml_rand_mt19937ar",                /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/randfun/eml_rand_mt19937ar.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/+valattr/validatenonnan.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/+valattr/validatefinite.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 10,  /* lineNo */
  23,                                  /* colNo */
  "validatesize",                      /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/+valattr/validatesize.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 15,  /* lineNo */
  19,                                  /* colNo */
  "validatesize",                      /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/+valattr/validatesize.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 2376,/* lineNo */
  13,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 57,  /* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elmat/repmat.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 58,  /* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo j_emlrtMCI = { 288, /* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtMCInfo k_emlrtMCI = { 18,  /* lineNo */
  23,                                  /* colNo */
  "validatencols",                     /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/+valattr/validatencols.m"/* pName */
};

static emlrtMCInfo l_emlrtMCI = { 13,  /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pName */
};

static emlrtMCInfo m_emlrtMCI = { 138, /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo n_emlrtMCI = { 133, /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo o_emlrtMCI = { 82,  /* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/ops/power.m"/* pName */
};

static emlrtMCInfo p_emlrtMCI = { 28,  /* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/error.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 215,   /* lineNo */
  46,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  7,                                   /* iLast */
  215,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  215,                                 /* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pName */
};

static emlrtDCInfo b_emlrtDCI = { 216, /* lineNo */
  44,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { 1,   /* iFirst */
  7,                                   /* iLast */
  216,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  216,                                 /* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pName */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  218,                                 /* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pName */
};

static emlrtECInfo d_emlrtECI = { -1,  /* nDims */
  219,                                 /* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pName */
};

static emlrtDCInfo c_emlrtDCI = { 30,  /* lineNo */
  32,                                  /* colNo */
  "CharacterVector",                   /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CharacterVector.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  200,                                 /* iLast */
  30,                                  /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "CharacterVector",                   /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CharacterVector.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 70,  /* lineNo */
  17,                                  /* colNo */
  "VisualizationInfo",                 /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/VisualizationInfo.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  62,                                  /* iLast */
  70,                                  /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "VisualizationInfo",                 /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/VisualizationInfo.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 280, /* lineNo */
  48,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  280,                                 /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo e_emlrtECI = { -1,  /* nDims */
  280,                                 /* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 62,  /* lineNo */
  25,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pName */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  63,                                  /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 38,  /* lineNo */
  65,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 38,  /* lineNo */
  65,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  158,                                 /* lineNo */
  56,                                  /* colNo */
  "",                                  /* aName */
  "RigidBody",                         /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = { -1,  /* nDims */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "CharacterVector",                   /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CharacterVector.m"/* pName */
};

static emlrtDCInfo h_emlrtDCI = { 305, /* lineNo */
  60,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  305,                                 /* lineNo */
  60,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { 1,   /* iFirst */
  200,                                 /* iLast */
  26,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "CharacterVector",                   /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CharacterVector.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "CharacterVector",                   /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CharacterVector.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI = { 1427,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pName */
};

static emlrtBCInfo k_emlrtBCI = { 0,   /* iFirst */
  9,                                   /* iLast */
  1428,                                /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1090,                                /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1079,                                /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo c_emlrtRTEI = { 1460,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pName */
};

static emlrtDCInfo i_emlrtDCI = { 1463,/* lineNo */
  27,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { 1,   /* iFirst */
  7,                                   /* iLast */
  1463,                                /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 1463,/* lineNo */
  29,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { 1,   /* iFirst */
  7,                                   /* iLast */
  1463,                                /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "axang2rotm",                        /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/shared/robotics/robotutilsint/+robotics/+internal/axang2rotm.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1468,                                /* lineNo */
  62,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  451,                                 /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1464,                                /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  451,                                 /* lineNo */
  93,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1468,                                /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 1468,/* lineNo */
  38,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1468,                                /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 41,  /* lineNo */
  14,                                  /* colNo */
  "repmat",                            /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elmat/repmat.m",/* pName */
  4                                    /* checkKind */
};

static emlrtRTEInfo d_emlrtRTEI = { 295,/* lineNo */
  25,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pName */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  296,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  296,                                 /* lineNo */
  79,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo gd_emlrtRSI = { 13, /* lineNo */
  "sqrt",                              /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 15, /* lineNo */
  "validatesize",                      /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/+valattr/validatesize.m"/* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 14, /* lineNo */
  "validatefinite",                    /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/+valattr/validatefinite.m"/* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 14, /* lineNo */
  "validatenonnan",                    /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/+valattr/validatenonnan.m"/* pathName */
};

static emlrtRSInfo kd_emlrtRSI = { 28, /* lineNo */
  "error",                             /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/error.m"/* pathName */
};

static emlrtRSInfo ld_emlrtRSI = { 10, /* lineNo */
  "validatesize",                      /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/+valattr/validatesize.m"/* pathName */
};

static emlrtRSInfo md_emlrtRSI = { 156,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/randfun/eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo nd_emlrtRSI = { 58, /* lineNo */
  "assertValidSizeArg",                /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m"/* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 2376,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 133,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 138,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 18, /* lineNo */
  "validatencols",                     /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/+valattr/validatencols.m"/* pathName */
};

static emlrtRSInfo sd_emlrtRSI = { 288,/* lineNo */
  "cat",                               /* fcnName */
  "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_NRow8X0OFqedY5LmzUzZ3
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_NRow8X0OFqedY5LmzUzZ3
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *moduleInstance);
static void cgxe_mdl_derivative(InstanceStruct_NRow8X0OFqedY5LmzUzZ3
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_NRow8X0OFqedY5LmzUzZ3
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_NRow8X0OFqedY5LmzUzZ3
  *moduleInstance);
static void mw__internal__system__init__fcn(InstanceStruct_NRow8X0OFqedY5LmzUzZ3
  *moduleInstance);
static void mw__internal__system__terminate__fcn
  (InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__setup(InstanceStruct_NRow8X0OFqedY5LmzUzZ3
  *moduleInstance, const emlrtStack *sp);
static void GetTransformBlock_setupImpl(InstanceStruct_NRow8X0OFqedY5LmzUzZ3
  *moduleInstance, const emlrtStack *sp,
  robotics_slmanip_internal_block_GetTransformBlock *obj);
static void b_rand(InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *moduleInstance, const
                   emlrtStack *sp, real_T r[5]);
static robotics_manip_internal_RigidBody *RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj, char_T bodyInput[10]);
static boolean_T b_strcmp(char_T b_data[], int32_T b_size[2]);
static boolean_T c_strcmp(char_T b_data[], int32_T b_size[2]);
static boolean_T d_strcmp(char_T b_data[], int32_T b_size[2]);
static void rigidBodyJoint_set_MotionSubspace(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T msubspace_data[], int32_T msubspace_size[2]);
static boolean_T e_strcmp(char_T a_data[], int32_T a_size[2]);
static robotics_manip_internal_CollisionSet *CollisionSet_CollisionSet(const
  emlrtStack *sp, robotics_manip_internal_CollisionSet *obj);
static robotics_manip_internal_RigidBody *b_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static void rigidBodyJoint_get_MotionSubspace(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T msubspace_data[], int32_T msubspace_size[2]);
static robotics_manip_internal_RigidBody *c_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *d_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *e_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *f_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *g_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *h_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *i_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *j_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *k_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *l_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static void mw__internal__call__reset(InstanceStruct_NRow8X0OFqedY5LmzUzZ3
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__step(InstanceStruct_NRow8X0OFqedY5LmzUzZ3
  *moduleInstance, const emlrtStack *sp, real_T b_u0[7], real_T c_y0[16]);
static void RigidBodyTree_forwardKinematics(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree *obj, real_T qvec[7], cell_wrap
  Ttree_data[], int32_T Ttree_size[2]);
static real_T RigidBodyTree_assertUpperBoundOnNumBodies(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree *obj);
static void repmat(const emlrtStack *sp, real_T varargin_2, cell_wrap b_data[],
                   int32_T b_size[2]);
static void rigidBodyJoint_get_JointAxis(const emlrtStack *sp, rigidBodyJoint
  *obj, real_T ax[3]);
static real_T sumColumnB(real_T x[3]);
static void cat(real_T varargin_1, real_T varargin_2, real_T varargin_3, real_T
                varargin_4, real_T varargin_5, real_T varargin_6, real_T
                varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9]);
static void permute(real_T a[9], real_T c_b[9]);
static void quat2tform(const emlrtStack *sp, real_T q[4], real_T H[16]);
static real_T b_sumColumnB(real_T x[4]);
static boolean_T f_strcmp(char_T a_data[], int32_T a_size[2]);
static boolean_T g_strcmp(char_T a_data[], int32_T a_size[2]);
static void handle_matlabCodegenDestructor(const emlrtStack *sp,
  robotics_manip_internal_CollisionSet *obj);
static const mxArray *message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location);
static void error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                  emlrtMCInfo *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location);
static const mxArray *c_message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, emlrtMCInfo *location);
static real_T eml_rand_mt19937ar(const emlrtStack *sp, uint32_T d_state[625]);
static void RigidBodyTree_validateConfiguration(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree *obj, real_T Q[7]);
static void b_sqrt(const emlrtStack *sp, real_T *x);
static void array_robotics_manip_internal_C(coder_array_robotics_manip_inte
  *coderArray, int32_T size0, int32_T size1);
static void b_array_robotics_manip_internal_C(coder_array_robotics_manip_inte
  *coderArray);
static void c_array_robotics_manip_internal_C(coder_array_robotics_manip_inte
  *coderArray);
static void init_simulink_io_address(InstanceStruct_NRow8X0OFqedY5LmzUzZ3
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  init_simulink_io_address(moduleInstance);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetSimStateCompliance(moduleInstance->S, 4);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__init__fcn(moduleInstance);
  mw__internal__call__setup(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_initialize(InstanceStruct_NRow8X0OFqedY5LmzUzZ3
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  emlrtLicenseCheckR2022a(&st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "robotics_system_toolbox", 2);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__reset(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_NRow8X0OFqedY5LmzUzZ3
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__step(moduleInstance, &st, *moduleInstance->u0,
    *moduleInstance->b_y0);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_derivative(InstanceStruct_NRow8X0OFqedY5LmzUzZ3
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_NRow8X0OFqedY5LmzUzZ3
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_NRow8X0OFqedY5LmzUzZ3
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__terminate__fcn(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__system__init__fcn(InstanceStruct_NRow8X0OFqedY5LmzUzZ3
  *moduleInstance)
{
  static uint32_T uv[625] = { 5489U, 1301868182U, 2938499221U, 2950281878U,
    1875628136U, 751856242U, 944701696U, 2243192071U, 694061057U, 219885934U,
    2066767472U, 3182869408U, 485472502U, 2336857883U, 1071588843U, 3418470598U,
    951210697U, 3693558366U, 2923482051U, 1793174584U, 2982310801U, 1586906132U,
    1951078751U, 1808158765U, 1733897588U, 431328322U, 4202539044U, 530658942U,
    1714810322U, 3025256284U, 3342585396U, 1937033938U, 2640572511U, 1654299090U,
    3692403553U, 4233871309U, 3497650794U, 862629010U, 2943236032U, 2426458545U,
    1603307207U, 1133453895U, 3099196360U, 2208657629U, 2747653927U, 931059398U,
    761573964U, 3157853227U, 785880413U, 730313442U, 124945756U, 2937117055U,
    3295982469U, 1724353043U, 3021675344U, 3884886417U, 4010150098U, 4056961966U,
    699635835U, 2681338818U, 1339167484U, 720757518U, 2800161476U, 2376097373U,
    1532957371U, 3902664099U, 1238982754U, 3725394514U, 3449176889U, 3570962471U,
    4287636090U, 4087307012U, 3603343627U, 202242161U, 2995682783U, 1620962684U,
    3704723357U, 371613603U, 2814834333U, 2111005706U, 624778151U, 2094172212U,
    4284947003U, 1211977835U, 991917094U, 1570449747U, 2962370480U, 1259410321U,
    170182696U, 146300961U, 2836829791U, 619452428U, 2723670296U, 1881399711U,
    1161269684U, 1675188680U, 4132175277U, 780088327U, 3409462821U, 1036518241U,
    1834958505U, 3048448173U, 161811569U, 618488316U, 44795092U, 3918322701U,
    1924681712U, 3239478144U, 383254043U, 4042306580U, 2146983041U, 3992780527U,
    3518029708U, 3545545436U, 3901231469U, 1896136409U, 2028528556U, 2339662006U,
    501326714U, 2060962201U, 2502746480U, 561575027U, 581893337U, 3393774360U,
    1778912547U, 3626131687U, 2175155826U, 319853231U, 986875531U, 819755096U,
    2915734330U, 2688355739U, 3482074849U, 2736559U, 2296975761U, 1029741190U,
    2876812646U, 690154749U, 579200347U, 4027461746U, 1285330465U, 2701024045U,
    4117700889U, 759495121U, 3332270341U, 2313004527U, 2277067795U, 4131855432U,
    2722057515U, 1264804546U, 3848622725U, 2211267957U, 4100593547U, 959123777U,
    2130745407U, 3194437393U, 486673947U, 1377371204U, 17472727U, 352317554U,
    3955548058U, 159652094U, 1232063192U, 3835177280U, 49423123U, 3083993636U,
    733092U, 2120519771U, 2573409834U, 1112952433U, 3239502554U, 761045320U,
    1087580692U, 2540165110U, 641058802U, 1792435497U, 2261799288U, 1579184083U,
    627146892U, 2165744623U, 2200142389U, 2167590760U, 2381418376U, 1793358889U,
    3081659520U, 1663384067U, 2009658756U, 2689600308U, 739136266U, 2304581039U,
    3529067263U, 591360555U, 525209271U, 3131882996U, 294230224U, 2076220115U,
    3113580446U, 1245621585U, 1386885462U, 3203270426U, 123512128U, 12350217U,
    354956375U, 4282398238U, 3356876605U, 3888857667U, 157639694U, 2616064085U,
    1563068963U, 2762125883U, 4045394511U, 4180452559U, 3294769488U, 1684529556U,
    1002945951U, 3181438866U, 22506664U, 691783457U, 2685221343U, 171579916U,
    3878728600U, 2475806724U, 2030324028U, 3331164912U, 1708711359U, 1970023127U,
    2859691344U, 2588476477U, 2748146879U, 136111222U, 2967685492U, 909517429U,
    2835297809U, 3206906216U, 3186870716U, 341264097U, 2542035121U, 3353277068U,
    548223577U, 3170936588U, 1678403446U, 297435620U, 2337555430U, 466603495U,
    1132321815U, 1208589219U, 696392160U, 894244439U, 2562678859U, 470224582U,
    3306867480U, 201364898U, 2075966438U, 1767227936U, 2929737987U, 3674877796U,
    2654196643U, 3692734598U, 3528895099U, 2796780123U, 3048728353U, 842329300U,
    191554730U, 2922459673U, 3489020079U, 3979110629U, 1022523848U, 2202932467U,
    3583655201U, 3565113719U, 587085778U, 4176046313U, 3013713762U, 950944241U,
    396426791U, 3784844662U, 3477431613U, 3594592395U, 2782043838U, 3392093507U,
    3106564952U, 2829419931U, 1358665591U, 2206918825U, 3170783123U, 31522386U,
    2988194168U, 1782249537U, 1105080928U, 843500134U, 1225290080U, 1521001832U,
    3605886097U, 2802786495U, 2728923319U, 3996284304U, 903417639U, 1171249804U,
    1020374987U, 2824535874U, 423621996U, 1988534473U, 2493544470U, 1008604435U,
    1756003503U, 1488867287U, 1386808992U, 732088248U, 1780630732U, 2482101014U,
    976561178U, 1543448953U, 2602866064U, 2021139923U, 1952599828U, 2360242564U,
    2117959962U, 2753061860U, 2388623612U, 4138193781U, 2962920654U, 2284970429U,
    766920861U, 3457264692U, 2879611383U, 815055854U, 2332929068U, 1254853997U,
    3740375268U, 3799380844U, 4091048725U, 2006331129U, 1982546212U, 686850534U,
    1907447564U, 2682801776U, 2780821066U, 998290361U, 1342433871U, 4195430425U,
    607905174U, 3902331779U, 2454067926U, 1708133115U, 1170874362U, 2008609376U,
    3260320415U, 2211196135U, 433538229U, 2728786374U, 2189520818U, 262554063U,
    1182318347U, 3710237267U, 1221022450U, 715966018U, 2417068910U, 2591870721U,
    2870691989U, 3418190842U, 4238214053U, 1540704231U, 1575580968U, 2095917976U,
    4078310857U, 2313532447U, 2110690783U, 4056346629U, 4061784526U, 1123218514U,
    551538993U, 597148360U, 4120175196U, 3581618160U, 3181170517U, 422862282U,
    3227524138U, 1713114790U, 662317149U, 1230418732U, 928171837U, 1324564878U,
    1928816105U, 1786535431U, 2878099422U, 3290185549U, 539474248U, 1657512683U,
    552370646U, 1671741683U, 3655312128U, 1552739510U, 2605208763U, 1441755014U,
    181878989U, 3124053868U, 1447103986U, 3183906156U, 1728556020U, 3502241336U,
    3055466967U, 1013272474U, 818402132U, 1715099063U, 2900113506U, 397254517U,
    4194863039U, 1009068739U, 232864647U, 2540223708U, 2608288560U, 2415367765U,
    478404847U, 3455100648U, 3182600021U, 2115988978U, 434269567U, 4117179324U,
    3461774077U, 887256537U, 3545801025U, 286388911U, 3451742129U, 1981164769U,
    786667016U, 3310123729U, 3097811076U, 2224235657U, 2959658883U, 3370969234U,
    2514770915U, 3345656436U, 2677010851U, 2206236470U, 271648054U, 2342188545U,
    4292848611U, 3646533909U, 3754009956U, 3803931226U, 4160647125U, 1477814055U,
    4043852216U, 1876372354U, 3133294443U, 3871104810U, 3177020907U, 2074304428U,
    3479393793U, 759562891U, 164128153U, 1839069216U, 2114162633U, 3989947309U,
    3611054956U, 1333547922U, 835429831U, 494987340U, 171987910U, 1252001001U,
    370809172U, 3508925425U, 2535703112U, 1276855041U, 1922855120U, 835673414U,
    3030664304U, 613287117U, 171219893U, 3423096126U, 3376881639U, 2287770315U,
    1658692645U, 1262815245U, 3957234326U, 1168096164U, 2968737525U, 2655813712U,
    2132313144U, 3976047964U, 326516571U, 353088456U, 3679188938U, 3205649712U,
    2654036126U, 1249024881U, 880166166U, 691800469U, 2229503665U, 1673458056U,
    4032208375U, 1851778863U, 2563757330U, 376742205U, 1794655231U, 340247333U,
    1505873033U, 396524441U, 879666767U, 3335579166U, 3260764261U, 3335999539U,
    506221798U, 4214658741U, 975887814U, 2080536343U, 3360539560U, 571586418U,
    138896374U, 4234352651U, 2737620262U, 3928362291U, 1516365296U, 38056726U,
    3599462320U, 3585007266U, 3850961033U, 471667319U, 1536883193U, 2310166751U,
    1861637689U, 2530999841U, 4139843801U, 2710569485U, 827578615U, 2012334720U,
    2907369459U, 3029312804U, 2820112398U, 1965028045U, 35518606U, 2478379033U,
    643747771U, 1924139484U, 4123405127U, 3811735531U, 3429660832U, 3285177704U,
    1948416081U, 1311525291U, 1183517742U, 1739192232U, 3979815115U, 2567840007U,
    4116821529U, 213304419U, 4125718577U, 1473064925U, 2442436592U, 1893310111U,
    4195361916U, 3747569474U, 828465101U, 2991227658U, 750582866U, 1205170309U,
    1409813056U, 678418130U, 1171531016U, 3821236156U, 354504587U, 4202874632U,
    3882511497U, 1893248677U, 1903078632U, 26340130U, 2069166240U, 3657122492U,
    3725758099U, 831344905U, 811453383U, 3447711422U, 2434543565U, 4166886888U,
    3358210805U, 4142984013U, 2988152326U, 3527824853U, 982082992U, 2809155763U,
    190157081U, 3340214818U, 2365432395U, 2548636180U, 2894533366U, 3474657421U,
    2372634704U, 2845748389U, 43024175U, 2774226648U, 1987702864U, 3186502468U,
    453610222U, 4204736567U, 1392892630U, 2471323686U, 2470534280U, 3541393095U,
    4269885866U, 3909911300U, 759132955U, 1482612480U, 667715263U, 1795580598U,
    2337923983U, 3390586366U, 581426223U, 1515718634U, 476374295U, 705213300U,
    363062054U, 2084697697U, 2407503428U, 2292957699U, 2426213835U, 2199989172U,
    1987356470U, 4026755612U, 2147252133U, 270400031U, 1367820199U, 2369854699U,
    2844269403U, 79981964U, 624U };

  emlrtStack st;
  int32_T i;
  for (i = 0; i < 625; i++) {
    moduleInstance->c_state[i] = uv[i];
  }

  for (i = 0; i < 20; i++) {
    moduleInstance->sysobj.TreeInternal._pobj0[i].
      CollisionsInternal.matlabCodegenIsDeleted = true;
  }

  moduleInstance->sysobj.TreeInternal.Base.CollisionsInternal.matlabCodegenIsDeleted
    = true;
  for (i = 0; i < 20; i++) {
    moduleInstance->sysobj.TreeInternal._pobj0[i].matlabCodegenIsDeleted = true;
  }

  moduleInstance->sysobj.TreeInternal.Base.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.TreeInternal.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.matlabCodegenIsDeleted = true;
  st.site = NULL;
  moduleInstance->method = 7U;
  moduleInstance->method_not_empty = true;
  st.site = NULL;
  moduleInstance->state = 1144108930U;
  moduleInstance->state_not_empty = true;
  st.site = NULL;
  for (i = 0; i < 2; i++) {
    moduleInstance->b_state[i] = 158852560U * (uint32_T)i + 362436069U;
  }

  moduleInstance->b_state_not_empty = true;
  st.site = NULL;
  moduleInstance->c_state_not_empty = true;
}

static void mw__internal__system__terminate__fcn
  (InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  robotics_manip_internal_RigidBody *obj;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fd_emlrtRSI;
  if (!moduleInstance->sysobj.matlabCodegenIsDeleted) {
    moduleInstance->sysobj.matlabCodegenIsDeleted = true;
  }

  st.site = &fd_emlrtRSI;
  if (!moduleInstance->sysobj.TreeInternal.matlabCodegenIsDeleted) {
    moduleInstance->sysobj.TreeInternal.matlabCodegenIsDeleted = true;
  }

  st.site = &fd_emlrtRSI;
  if (!moduleInstance->sysobj.TreeInternal.Base.matlabCodegenIsDeleted) {
    moduleInstance->sysobj.TreeInternal.Base.matlabCodegenIsDeleted = true;
  }

  for (i = 0; i < 20; i++) {
    st.site = &fd_emlrtRSI;
    obj = &moduleInstance->sysobj.TreeInternal._pobj0[i];
    if (!obj->matlabCodegenIsDeleted) {
      obj->matlabCodegenIsDeleted = true;
    }
  }

  st.site = &fd_emlrtRSI;
  handle_matlabCodegenDestructor(&st,
    &moduleInstance->sysobj.TreeInternal.Base.CollisionsInternal);
  for (i = 0; i < 20; i++) {
    st.site = &fd_emlrtRSI;
    handle_matlabCodegenDestructor(&st,
      &moduleInstance->sysobj.TreeInternal._pobj0[i].CollisionsInternal);
  }
}

static void mw__internal__call__setup(InstanceStruct_NRow8X0OFqedY5LmzUzZ3
  *moduleInstance, const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T d_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T f_u[5] = { 's', 'e', 't', 'u', 'p' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[51];
  char_T e_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &f_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized != 0) {
    for (i = 0; i < 51; i++) {
      c_u[i] = d_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 51, m, &c_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      c_u[i] = d_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 51, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      e_u[i] = f_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &e_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &d_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  moduleInstance->sysobj.isInitialized = 1;
  b_st.site = &d_emlrtRSI;
  GetTransformBlock_setupImpl(moduleInstance, &b_st, &moduleInstance->sysobj);
}

static void GetTransformBlock_setupImpl(InstanceStruct_NRow8X0OFqedY5LmzUzZ3
  *moduleInstance, const emlrtStack *sp,
  robotics_slmanip_internal_block_GetTransformBlock *obj)
{
  static char_T cv10[15] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '1',
    '0', '_', 'j', 'n', 't' };

  static char_T cv9[11] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '1',
    '0' };

  static char_T cv[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '1' };

  static char_T cv1[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '2' };

  static char_T cv2[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '3' };

  static char_T cv3[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '4' };

  static char_T cv4[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '5' };

  static char_T cv5[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '6' };

  static char_T cv6[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '7' };

  static char_T cv7[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '8' };

  static char_T cv8[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '9' };

  static char_T vec[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T msubspace_data[36];
  real_T idx[5];
  real_T obj_Length;
  int32_T msubspace_size[2];
  int32_T obj_Vector_size[2];
  int32_T poslim_size[2];
  int32_T switch_expression_size[2];
  int32_T homepos_size_idx_1;
  int32_T i;
  int32_T k;
  char_T obj_Vector[200];
  char_T switch_expression_data[200];
  int8_T b_I[36];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &g_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  b_st.site = &q_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  c_st.site = &i_emlrtRSI;
  d_st.site = &j_emlrtRSI;
  e_st.site = &k_emlrtRSI;
  f_st.site = &l_emlrtRSI;
  b_rand(moduleInstance, &f_st, idx);
  for (k = 0; k < 5; k++) {
    idx[k] = muDoubleScalarFloor(idx[k] * 62.0) + 1.0;
  }

  for (i = 0; i < 5; i++) {
    k = (int32_T)emlrtIntegerCheckR2012b(idx[i], &d_emlrtDCI, &d_st);
    emlrtDynamicBoundsCheckR2012b(k, 1, 62, &d_emlrtBCI, &d_st);
  }

  obj->TreeInternal.NumBodies = 10.0;
  b_st.site = &u_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  obj->TreeInternal.Bodies[0] = RigidBody_RigidBody(&c_st,
    &(&obj->TreeInternal._pobj0[0])[0], cv);
  c_st.site = &v_emlrtRSI;
  obj->TreeInternal.Bodies[1] = RigidBody_RigidBody(&c_st,
    &(&obj->TreeInternal._pobj0[0])[1], cv1);
  c_st.site = &v_emlrtRSI;
  obj->TreeInternal.Bodies[2] = RigidBody_RigidBody(&c_st,
    &(&obj->TreeInternal._pobj0[0])[2], cv2);
  c_st.site = &v_emlrtRSI;
  obj->TreeInternal.Bodies[3] = RigidBody_RigidBody(&c_st,
    &(&obj->TreeInternal._pobj0[0])[3], cv3);
  c_st.site = &v_emlrtRSI;
  obj->TreeInternal.Bodies[4] = RigidBody_RigidBody(&c_st,
    &(&obj->TreeInternal._pobj0[0])[4], cv4);
  c_st.site = &v_emlrtRSI;
  obj->TreeInternal.Bodies[5] = RigidBody_RigidBody(&c_st,
    &(&obj->TreeInternal._pobj0[0])[5], cv5);
  c_st.site = &v_emlrtRSI;
  obj->TreeInternal.Bodies[6] = RigidBody_RigidBody(&c_st,
    &(&obj->TreeInternal._pobj0[0])[6], cv6);
  c_st.site = &v_emlrtRSI;
  obj->TreeInternal.Bodies[7] = RigidBody_RigidBody(&c_st,
    &(&obj->TreeInternal._pobj0[0])[7], cv7);
  c_st.site = &v_emlrtRSI;
  obj->TreeInternal.Bodies[8] = RigidBody_RigidBody(&c_st,
    &(&obj->TreeInternal._pobj0[0])[8], cv8);
  c_st.site = &v_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  e_st.site = &h_emlrtRSI;
  (&obj->TreeInternal._pobj0[0])[9].NameInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    (&obj->TreeInternal._pobj0[0])[9].NameInternal.Vector[i] = ' ';
  }

  for (i = 0; i < 200; i++) {
    obj_Vector[i] = (&obj->TreeInternal._pobj0[0])[9].NameInternal.Vector[i];
  }

  for (i = 0; i < 11; i++) {
    obj_Vector[i] = cv9[i];
  }

  (&obj->TreeInternal._pobj0[0])[9].NameInternal.Length = 11.0;
  for (i = 0; i < 200; i++) {
    (&obj->TreeInternal._pobj0[0])[9].NameInternal.Vector[i] = obj_Vector[i];
  }

  d_st.site = &x_emlrtRSI;
  for (i = 0; i < 36; i++) {
    (&obj->TreeInternal._pobj0[0])[9].JointInternal.MotionSubspaceInternal[i] =
      0.0;
  }

  e_st.site = &ab_emlrtRSI;
  (&obj->TreeInternal._pobj0[0])[9].JointInternal.NameInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    (&obj->TreeInternal._pobj0[0])[9].JointInternal.NameInternal.Vector[i] = ' ';
  }

  (&obj->TreeInternal._pobj0[0])[9].JointInternal.TypeInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    (&obj->TreeInternal._pobj0[0])[9].JointInternal.TypeInternal.Vector[i] = ' ';
  }

  for (i = 0; i < 200; i++) {
    obj_Vector[i] = (&obj->TreeInternal._pobj0[0])[9].
      JointInternal.NameInternal.Vector[i];
  }

  for (i = 0; i < 15; i++) {
    obj_Vector[i] = cv10[i];
  }

  (&obj->TreeInternal._pobj0[0])[9].JointInternal.NameInternal.Length = 15.0;
  for (i = 0; i < 200; i++) {
    (&obj->TreeInternal._pobj0[0])[9].JointInternal.NameInternal.Vector[i] =
      obj_Vector[i];
  }

  e_st.site = &bb_emlrtRSI;
  for (i = 0; i < 200; i++) {
    obj_Vector[i] = (&obj->TreeInternal._pobj0[0])[9].
      JointInternal.TypeInternal.Vector[i];
  }

  for (i = 0; i < 5; i++) {
    obj_Vector[i] = vec[i];
  }

  (&obj->TreeInternal._pobj0[0])[9].JointInternal.TypeInternal.Length = 5.0;
  for (i = 0; i < 200; i++) {
    (&obj->TreeInternal._pobj0[0])[9].JointInternal.TypeInternal.Vector[i] =
      obj_Vector[i];
  }

  e_st.site = &cb_emlrtRSI;
  f_st.site = &fb_emlrtRSI;
  obj_Length = (&obj->TreeInternal._pobj0[0])[9].
    JointInternal.TypeInternal.Length;
  for (i = 0; i < 200; i++) {
    obj_Vector[i] = (&obj->TreeInternal._pobj0[0])[9].
      JointInternal.TypeInternal.Vector[i];
  }

  if (obj_Length < 1.0) {
    k = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &f_st);
    k = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &c_emlrtBCI, &f_st);
  }

  switch_expression_size[0] = 1;
  switch_expression_size[1] = k;
  if (k - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)k * sizeof
           (char_T));
  }

  if (b_strcmp(switch_expression_data, switch_expression_size)) {
    k = 0;
  } else if (c_strcmp(switch_expression_data, switch_expression_size)) {
    k = 1;
  } else if (d_strcmp(switch_expression_data, switch_expression_size)) {
    k = 2;
  } else {
    k = -1;
  }

  switch (k) {
   case 0:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = (real_T)iv[i];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    (&obj->TreeInternal._pobj0[0])[9].JointInternal.VelocityNumber = 1.0;
    (&obj->TreeInternal._pobj0[0])[9].JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      (&obj->TreeInternal._pobj0[0])[9].JointInternal.JointAxisInternal[i] =
        (real_T)iv2[i];
    }
    break;

   case 1:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = (real_T)iv1[i];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    (&obj->TreeInternal._pobj0[0])[9].JointInternal.VelocityNumber = 1.0;
    (&obj->TreeInternal._pobj0[0])[9].JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      (&obj->TreeInternal._pobj0[0])[9].JointInternal.JointAxisInternal[i] =
        (real_T)iv2[i];
    }
    break;

   case 2:
    for (i = 0; i < 36; i++) {
      b_I[i] = 0;
    }

    for (k = 0; k < 6; k++) {
      b_I[k + 6 * k] = 1;
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = 6;
    for (i = 0; i < 36; i++) {
      msubspace_data[i] = (real_T)b_I[i];
    }

    poslim_size[0] = 7;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 7;
    (&obj->TreeInternal._pobj0[0])[9].JointInternal.VelocityNumber = 6.0;
    (&obj->TreeInternal._pobj0[0])[9].JointInternal.PositionNumber = 7.0;
    for (i = 0; i < 3; i++) {
      (&obj->TreeInternal._pobj0[0])[9].JointInternal.JointAxisInternal[i] =
        rtNaN;
    }
    break;

   default:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0.0;
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    (&obj->TreeInternal._pobj0[0])[9].JointInternal.VelocityNumber = 0.0;
    (&obj->TreeInternal._pobj0[0])[9].JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      (&obj->TreeInternal._pobj0[0])[9].JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  e_st.site = &db_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&e_st, &(&obj->TreeInternal._pobj0[0])[9].
    JointInternal, msubspace_data, msubspace_size);
  e_st.site = &eb_emlrtRSI;
  f_st.site = &fb_emlrtRSI;
  obj_Length = (&obj->TreeInternal._pobj0[0])[9].
    JointInternal.TypeInternal.Length;
  for (i = 0; i < 200; i++) {
    obj_Vector[i] = (&obj->TreeInternal._pobj0[0])[9].
      JointInternal.TypeInternal.Vector[i];
  }

  if (obj_Length < 1.0) {
    k = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &f_st);
    k = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &c_emlrtBCI, &f_st);
  }

  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = k;
  if (k - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)k * sizeof
           (char_T));
  }

  if (!e_strcmp(switch_expression_data, obj_Vector_size)) {
    obj_Length = (&obj->TreeInternal._pobj0[0])[9].JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      i = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &d_st);
      i = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &emlrtBCI, &d_st);
    }

    switch_expression_size[0] = i;
    switch_expression_size[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&switch_expression_size[0], 2, &poslim_size[0],
      2, &emlrtECI, &d_st);
    obj_Length = (&obj->TreeInternal._pobj0[0])[9].JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      i = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &b_emlrtDCI, &d_st);
      i = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &b_emlrtBCI, &d_st);
    }

    emlrtSubAssignSizeCheck1dR2017a(i, homepos_size_idx_1, &b_emlrtECI, &d_st);
  } else {
    for (i = 0; i < 2; i++) {
      switch_expression_size[i] = i + 1;
    }

    emlrtSubAssignSizeCheckR2012b(&switch_expression_size[0], 2, &poslim_size[0],
      2, &c_emlrtECI, &d_st);
    emlrtSubAssignSizeCheck1dR2017a(1, homepos_size_idx_1, &d_emlrtECI, &d_st);
  }

  (&obj->TreeInternal._pobj0[0])[9].ParentIndex = -1.0;
  d_st.site = &y_emlrtRSI;
  CollisionSet_CollisionSet(&d_st, &(&obj->TreeInternal._pobj0[0])[9].
    CollisionsInternal);
  (&obj->TreeInternal._pobj0[0])[9].matlabCodegenIsDeleted = false;
  obj->TreeInternal.Bodies[9] = &(&obj->TreeInternal._pobj0[0])[9];
  b_st.site = &s_emlrtRSI;
  obj->TreeInternal.Bodies[0] = b_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[10]);
  b_st.site = &s_emlrtRSI;
  obj->TreeInternal.Bodies[1] = c_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[11]);
  b_st.site = &s_emlrtRSI;
  obj->TreeInternal.Bodies[2] = d_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[12]);
  b_st.site = &s_emlrtRSI;
  obj->TreeInternal.Bodies[3] = e_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[13]);
  b_st.site = &s_emlrtRSI;
  obj->TreeInternal.Bodies[4] = f_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[14]);
  b_st.site = &s_emlrtRSI;
  obj->TreeInternal.Bodies[5] = g_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[15]);
  b_st.site = &s_emlrtRSI;
  obj->TreeInternal.Bodies[6] = h_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[16]);
  b_st.site = &s_emlrtRSI;
  obj->TreeInternal.Bodies[7] = i_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[17]);
  b_st.site = &s_emlrtRSI;
  obj->TreeInternal.Bodies[8] = j_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[18]);
  b_st.site = &s_emlrtRSI;
  obj->TreeInternal.Bodies[9] = k_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[19]);
  obj->TreeInternal.PositionNumber = 7.0;
  b_st.site = &t_emlrtRSI;
  l_RigidBody_RigidBody(&b_st, &obj->TreeInternal.Base);
  obj->TreeInternal.matlabCodegenIsDeleted = false;
}

static void b_rand(InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *moduleInstance, const
                   emlrtStack *sp, real_T r[5])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T d;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &m_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &n_emlrtRSI;
  for (k = 0; k < 5; k++) {
    c_st.site = &o_emlrtRSI;
    d = eml_rand_mt19937ar(&c_st, moduleInstance->c_state);
    r[k] = d;
  }
}

static robotics_manip_internal_RigidBody *RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj, char_T bodyInput[10])
{
  static char_T vec[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T cv[4] = { '_', 'j', 'n', 't' };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  robotics_manip_internal_RigidBody *b_obj;
  real_T msubspace_data[36];
  real_T obj_Length;
  int32_T msubspace_size[2];
  int32_T obj_Vector_size[2];
  int32_T poslim_size[2];
  int32_T switch_expression_size[2];
  int32_T homepos_size_idx_1;
  int32_T loop_ub;
  char_T obj_Vector[200];
  char_T switch_expression_data[200];
  int8_T b_I[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_obj = obj;
  st.site = &w_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  b_obj->NameInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->NameInternal.Vector[loop_ub] = ' ';
  }

  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->NameInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 10; loop_ub++) {
    obj_Vector[loop_ub] = bodyInput[loop_ub];
  }

  b_obj->NameInternal.Length = 10.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->NameInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  st.site = &x_emlrtRSI;
  for (loop_ub = 0; loop_ub < 36; loop_ub++) {
    b_obj->JointInternal.MotionSubspaceInternal[loop_ub] = 0.0;
  }

  b_st.site = &ab_emlrtRSI;
  b_obj->JointInternal.NameInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.NameInternal.Vector[loop_ub] = ' ';
  }

  b_obj->JointInternal.TypeInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.TypeInternal.Vector[loop_ub] = ' ';
  }

  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.NameInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 10; loop_ub++) {
    obj_Vector[loop_ub] = bodyInput[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 4; loop_ub++) {
    obj_Vector[loop_ub + 10] = cv[loop_ub];
  }

  b_obj->JointInternal.NameInternal.Length = 14.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.NameInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_st.site = &bb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 5; loop_ub++) {
    obj_Vector[loop_ub] = vec[loop_ub];
  }

  b_obj->JointInternal.TypeInternal.Length = 5.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.TypeInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_st.site = &cb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  obj_Length = b_obj->JointInternal.TypeInternal.Length;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &c_emlrtBCI, &c_st);
  }

  switch_expression_size[0] = 1;
  switch_expression_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (b_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 1;
  } else if (d_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 2;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)iv[loop_ub];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv2[loop_ub];
    }
    break;

   case 1:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)iv1[loop_ub];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv2[loop_ub];
    }
    break;

   case 2:
    for (loop_ub = 0; loop_ub < 36; loop_ub++) {
      b_I[loop_ub] = 0;
    }

    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      b_I[loop_ub + 6 * loop_ub] = 1;
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = 6;
    for (loop_ub = 0; loop_ub < 36; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)b_I[loop_ub];
    }

    poslim_size[0] = 7;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 7;
    b_obj->JointInternal.VelocityNumber = 6.0;
    b_obj->JointInternal.PositionNumber = 7.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = rtNaN;
    }
    break;

   default:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = 0.0;
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 0.0;
    b_obj->JointInternal.PositionNumber = 0.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = 0.0;
    }
    break;
  }

  b_st.site = &db_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&b_st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  b_st.site = &eb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  obj_Length = b_obj->JointInternal.TypeInternal.Length;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &c_emlrtBCI, &c_st);
  }

  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (!e_strcmp(switch_expression_data, obj_Vector_size)) {
    obj_Length = b_obj->JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &st);
      loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 7, &emlrtBCI, &st);
    }

    switch_expression_size[0] = loop_ub;
    switch_expression_size[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&switch_expression_size[0], 2, &poslim_size[0],
      2, &emlrtECI, &st);
    obj_Length = b_obj->JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &b_emlrtDCI, &st);
      loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 7, &b_emlrtBCI, &st);
    }

    emlrtSubAssignSizeCheck1dR2017a(loop_ub, homepos_size_idx_1, &b_emlrtECI,
      &st);
  } else {
    for (loop_ub = 0; loop_ub < 2; loop_ub++) {
      switch_expression_size[loop_ub] = loop_ub + 1;
    }

    emlrtSubAssignSizeCheckR2012b(&switch_expression_size[0], 2, &poslim_size[0],
      2, &c_emlrtECI, &st);
    emlrtSubAssignSizeCheck1dR2017a(1, homepos_size_idx_1, &d_emlrtECI, &st);
  }

  b_obj->ParentIndex = -1.0;
  st.site = &y_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static boolean_T b_strcmp(char_T b_data[], int32_T b_size[2])
{
  static char_T cv[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (b_size[1] != 8) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 8) {
        if (cv[kstr - 1] != b_data[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static boolean_T c_strcmp(char_T b_data[], int32_T b_size[2])
{
  static char_T cv[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (b_size[1] != 9) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 9) {
        if (cv[kstr - 1] != b_data[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static boolean_T d_strcmp(char_T b_data[], int32_T b_size[2])
{
  static char_T cv[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (b_size[1] != 8) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 8) {
        if (cv[kstr - 1] != b_data[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void rigidBodyJoint_set_MotionSubspace(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T msubspace_data[], int32_T msubspace_size[2])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T obj_Length;
  int32_T obj_Vector_size[2];
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  char_T obj_Vector[200];
  char_T obj_Vector_data[200];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &gb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &fb_emlrtRSI;
  obj_Length = obj->TypeInternal.Length;
  for (i = 0; i < 200; i++) {
    obj_Vector[i] = obj->TypeInternal.Vector[i];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &b_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &c_emlrtBCI, &b_st);
  }

  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)loop_ub * sizeof
           (char_T));
  }

  if (!e_strcmp(obj_Vector_data, obj_Vector_size)) {
    obj_Length = obj->VelocityNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &e_emlrtDCI,
        (emlrtConstCTX)sp);
      loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 6, &e_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    obj_Vector_size[0] = 6;
    obj_Vector_size[1] = loop_ub;
    emlrtSubAssignSizeCheckR2012b(&obj_Vector_size[0], 2, &msubspace_size[0], 2,
      &e_emlrtECI, (void *)sp);
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < 6; i1++) {
        obj->MotionSubspaceInternal[i1 + 6 * i] = msubspace_data[i1 + 6 * i];
      }
    }
  } else {
    for (i = 0; i < 6; i++) {
      obj->MotionSubspaceInternal[i] = 0.0;
    }
  }
}

static boolean_T e_strcmp(char_T a_data[], int32_T a_size[2])
{
  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (a_size[1] != 5) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 5) {
        if (a_data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static robotics_manip_internal_CollisionSet *CollisionSet_CollisionSet(const
  emlrtStack *sp, robotics_manip_internal_CollisionSet *obj)
{
  static void *t1_GeometryInternal = NULL;
  coder_array_robotics_manip_inte r;
  emlrtStack b_st;
  emlrtStack st;
  robotics_manip_internal_CollisionGeometry expl_temp;
  robotics_manip_internal_CollisionSet *b_obj;
  real_T d;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  b_array_robotics_manip_internal_C(&r);
  b_obj = obj;
  b_obj->Size = 0.0;
  st.site = &ib_emlrtRSI;
  b_st.site = &hb_emlrtRSI;
  b_obj->MaxElements = 0.0;
  d = emlrtNonNegativeCheckR2012b(b_obj->MaxElements, &g_emlrtDCI,
    (emlrtConstCTX)sp);
  array_robotics_manip_internal_C(&r, 1, (int32_T)emlrtIntegerCheckR2012b(d,
    &f_emlrtDCI, (emlrtConstCTX)sp));
  for (i = 0; i < 2; i++) {
    iv[i] = r.size[i];
  }

  array_robotics_manip_internal_C(&b_obj->CollisionGeometries, iv[0], iv[1]);
  st.site = &jb_emlrtRSI;
  d = b_obj->MaxElements;
  i = (int32_T)d - 1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &emlrtRTEI, (emlrtConstCTX)sp);
  for (b_i = 0; b_i <= i; b_i++) {
    i1 = b_obj->CollisionGeometries.size[1] - 1;
    expl_temp.CollisionPrimitive = t1_GeometryInternal;
    b_obj->CollisionGeometries.vector.data[emlrtDynamicBoundsCheckR2012b(b_i, 0,
      i1, &f_emlrtBCI, (emlrtConstCTX)sp)] = expl_temp;
  }

  b_obj->matlabCodegenIsDeleted = false;
  c_array_robotics_manip_internal_C(&r);
  return b_obj;
}

static robotics_manip_internal_RigidBody *b_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static char_T cv1[16] = { 'w', 'o', 'r', 'l', 'd', '_', 'i', 'i', 'w', 'a',
    '_', 'j', 'o', 'i', 'n', 't' };

  static char_T cv[11] = { 'i', 'i', 'w', 'a', '_', 'l', 'i', 'n', 'k', '_', '0'
  };

  static char_T vec[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv5[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv2[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv3[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv4[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  robotics_manip_internal_RigidBody *b_obj;
  real_T msubspace_data[36];
  real_T obj_Length;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T msubspace_size[2];
  int32_T obj_Vector_size[2];
  int32_T poslim_size[2];
  int32_T switch_expression_size[2];
  int32_T homepos_size_idx_1;
  int32_T loop_ub;
  char_T vec_data[204];
  char_T obj_Vector[200];
  char_T switch_expression_data[200];
  int8_T b_I[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_obj = obj;
  st.site = &w_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  b_obj->NameInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->NameInternal.Vector[loop_ub] = ' ';
  }

  st.site = &kb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->NameInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 11; loop_ub++) {
    vec_data[loop_ub] = cv[loop_ub];
  }

  iv[0] = 1;
  iv[1] = 11;
  iv1[0] = 1;
  iv1[1] = 11;
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &f_emlrtECI, &st);
  memcpy(&obj_Vector[0], &vec_data[0], 11U * sizeof(char_T));
  b_obj->NameInternal.Length = 11.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->NameInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_obj->ParentIndex = 0.0;
  st.site = &lb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 36; loop_ub++) {
    b_obj->JointInternal.MotionSubspaceInternal[loop_ub] = 0.0;
  }

  b_st.site = &ab_emlrtRSI;
  b_obj->JointInternal.NameInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.NameInternal.Vector[loop_ub] = ' ';
  }

  b_obj->JointInternal.TypeInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.TypeInternal.Vector[loop_ub] = ' ';
  }

  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.NameInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 16; loop_ub++) {
    obj_Vector[loop_ub] = cv1[loop_ub];
  }

  b_obj->JointInternal.NameInternal.Length = 16.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.NameInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_st.site = &bb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 5; loop_ub++) {
    obj_Vector[loop_ub] = vec[loop_ub];
  }

  b_obj->JointInternal.TypeInternal.Length = 5.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.TypeInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_st.site = &cb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  obj_Length = b_obj->JointInternal.TypeInternal.Length;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &c_emlrtBCI, &c_st);
  }

  switch_expression_size[0] = 1;
  switch_expression_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (b_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 1;
  } else if (d_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 2;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)iv2[loop_ub];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
    }
    break;

   case 1:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)iv3[loop_ub];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
    }
    break;

   case 2:
    for (loop_ub = 0; loop_ub < 36; loop_ub++) {
      b_I[loop_ub] = 0;
    }

    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      b_I[loop_ub + 6 * loop_ub] = 1;
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = 6;
    for (loop_ub = 0; loop_ub < 36; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)b_I[loop_ub];
    }

    poslim_size[0] = 7;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 7;
    b_obj->JointInternal.VelocityNumber = 6.0;
    b_obj->JointInternal.PositionNumber = 7.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = rtNaN;
    }
    break;

   default:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = 0.0;
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 0.0;
    b_obj->JointInternal.PositionNumber = 0.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = 0.0;
    }
    break;
  }

  b_st.site = &db_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&b_st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  b_st.site = &eb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  obj_Length = b_obj->JointInternal.TypeInternal.Length;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &c_emlrtBCI, &c_st);
  }

  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (!e_strcmp(switch_expression_data, obj_Vector_size)) {
    obj_Length = b_obj->JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &st);
      loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 7, &emlrtBCI, &st);
    }

    iv[0] = loop_ub;
    iv[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &emlrtECI, &st);
    obj_Length = b_obj->JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &b_emlrtDCI, &st);
      loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 7, &b_emlrtBCI, &st);
    }

    emlrtSubAssignSizeCheck1dR2017a(loop_ub, homepos_size_idx_1, &b_emlrtECI,
      &st);
  } else {
    for (loop_ub = 0; loop_ub < 2; loop_ub++) {
      iv[loop_ub] = loop_ub + 1;
    }

    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &c_emlrtECI,
      &st);
    emlrtSubAssignSizeCheck1dR2017a(1, homepos_size_idx_1, &d_emlrtECI, &st);
  }

  for (loop_ub = 0; loop_ub < 16; loop_ub++) {
    b_obj->JointInternal.JointToParentTransform[loop_ub] = (real_T)iv5[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 16; loop_ub++) {
    b_obj->JointInternal.ChildToJointTransform[loop_ub] = (real_T)iv5[loop_ub];
  }

  st.site = &mb_emlrtRSI;
  rigidBodyJoint_get_MotionSubspace(&st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  emlrtDynamicBoundsCheckR2012b(1, 1, msubspace_size[1], &g_emlrtBCI,
    (emlrtConstCTX)sp);
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub] = 0.0;
  }

  st.site = &mb_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_obj->JointInternal.JointAxisInternal[loop_ub] = 0.0;
  }

  st.site = &nb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static void rigidBodyJoint_get_MotionSubspace(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T msubspace_data[], int32_T msubspace_size[2])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T obj_Length;
  int32_T obj_Vector_size[2];
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  char_T obj_Vector[200];
  char_T obj_Vector_data[200];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ob_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &fb_emlrtRSI;
  obj_Length = obj->TypeInternal.Length;
  for (i = 0; i < 200; i++) {
    obj_Vector[i] = obj->TypeInternal.Vector[i];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &b_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &c_emlrtBCI, &b_st);
  }

  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)loop_ub * sizeof
           (char_T));
  }

  if (!e_strcmp(obj_Vector_data, obj_Vector_size)) {
    obj_Length = obj->VelocityNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &h_emlrtDCI,
        (emlrtConstCTX)sp);
      loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 6, &h_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = loop_ub;
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < 6; i1++) {
        msubspace_data[i1 + 6 * i] = obj->MotionSubspaceInternal[i1 + 6 * i];
      }
    }
  } else {
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0.0;
    }
  }
}

static robotics_manip_internal_RigidBody *c_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 0.1575, 1.0 };

  static char_T cv1[12] = { 'i', 'i', 'w', 'a', '_', 'j', 'o', 'i', 'n', 't',
    '_', '1' };

  static char_T cv[11] = { 'i', 'i', 'w', 'a', '_', 'l', 'i', 'n', 'k', '_', '1'
  };

  static char_T vec[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static int8_T iv5[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv2[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv3[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv4[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  robotics_manip_internal_RigidBody *b_obj;
  real_T msubspace_data[36];
  real_T obj_Length;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T msubspace_size[2];
  int32_T obj_Vector_size[2];
  int32_T poslim_size[2];
  int32_T switch_expression_size[2];
  int32_T homepos_size_idx_1;
  int32_T loop_ub;
  char_T vec_data[204];
  char_T obj_Vector[200];
  char_T switch_expression_data[200];
  int8_T b_I[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_obj = obj;
  st.site = &w_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  b_obj->NameInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->NameInternal.Vector[loop_ub] = ' ';
  }

  st.site = &kb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->NameInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 11; loop_ub++) {
    vec_data[loop_ub] = cv[loop_ub];
  }

  iv[0] = 1;
  iv[1] = 11;
  iv1[0] = 1;
  iv1[1] = 11;
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &f_emlrtECI, &st);
  memcpy(&obj_Vector[0], &vec_data[0], 11U * sizeof(char_T));
  b_obj->NameInternal.Length = 11.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->NameInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_obj->ParentIndex = 1.0;
  st.site = &lb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 36; loop_ub++) {
    b_obj->JointInternal.MotionSubspaceInternal[loop_ub] = 0.0;
  }

  b_st.site = &ab_emlrtRSI;
  b_obj->JointInternal.NameInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.NameInternal.Vector[loop_ub] = ' ';
  }

  b_obj->JointInternal.TypeInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.TypeInternal.Vector[loop_ub] = ' ';
  }

  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.NameInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 12; loop_ub++) {
    obj_Vector[loop_ub] = cv1[loop_ub];
  }

  b_obj->JointInternal.NameInternal.Length = 12.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.NameInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_st.site = &bb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 8; loop_ub++) {
    obj_Vector[loop_ub] = vec[loop_ub];
  }

  b_obj->JointInternal.TypeInternal.Length = 8.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.TypeInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_st.site = &cb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  obj_Length = b_obj->JointInternal.TypeInternal.Length;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &c_emlrtBCI, &c_st);
  }

  switch_expression_size[0] = 1;
  switch_expression_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (b_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 1;
  } else if (d_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 2;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)iv2[loop_ub];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
    }
    break;

   case 1:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)iv3[loop_ub];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
    }
    break;

   case 2:
    for (loop_ub = 0; loop_ub < 36; loop_ub++) {
      b_I[loop_ub] = 0;
    }

    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      b_I[loop_ub + 6 * loop_ub] = 1;
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = 6;
    for (loop_ub = 0; loop_ub < 36; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)b_I[loop_ub];
    }

    poslim_size[0] = 7;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 7;
    b_obj->JointInternal.VelocityNumber = 6.0;
    b_obj->JointInternal.PositionNumber = 7.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = rtNaN;
    }
    break;

   default:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = 0.0;
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 0.0;
    b_obj->JointInternal.PositionNumber = 0.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = 0.0;
    }
    break;
  }

  b_st.site = &db_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&b_st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  b_st.site = &eb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  obj_Length = b_obj->JointInternal.TypeInternal.Length;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &c_emlrtBCI, &c_st);
  }

  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (!e_strcmp(switch_expression_data, obj_Vector_size)) {
    obj_Length = b_obj->JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &st);
      loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 7, &emlrtBCI, &st);
    }

    iv[0] = loop_ub;
    iv[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &emlrtECI, &st);
    obj_Length = b_obj->JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &b_emlrtDCI, &st);
      loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 7, &b_emlrtBCI, &st);
    }

    emlrtSubAssignSizeCheck1dR2017a(loop_ub, homepos_size_idx_1, &b_emlrtECI,
      &st);
  } else {
    for (loop_ub = 0; loop_ub < 2; loop_ub++) {
      iv[loop_ub] = loop_ub + 1;
    }

    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &c_emlrtECI,
      &st);
    emlrtSubAssignSizeCheck1dR2017a(1, homepos_size_idx_1, &d_emlrtECI, &st);
  }

  for (loop_ub = 0; loop_ub < 16; loop_ub++) {
    b_obj->JointInternal.JointToParentTransform[loop_ub] = dv[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 16; loop_ub++) {
    b_obj->JointInternal.ChildToJointTransform[loop_ub] = (real_T)iv5[loop_ub];
  }

  st.site = &mb_emlrtRSI;
  rigidBodyJoint_get_MotionSubspace(&st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  emlrtDynamicBoundsCheckR2012b(1, 1, msubspace_size[1], &g_emlrtBCI,
    (emlrtConstCTX)sp);
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub] = (real_T)iv2[loop_ub];
  }

  st.site = &mb_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
  }

  st.site = &nb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *d_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[16] = { -1.0, -2.0682310711021444E-13, -0.0, 0.0,
    1.0127277222968137E-24, -4.8965888601467475E-12, 1.0, 0.0,
    -2.0682310711021444E-13, 1.0, 4.8965888601467475E-12, 0.0, 0.0, 0.0, 0.2025,
    1.0 };

  static char_T cv1[12] = { 'i', 'i', 'w', 'a', '_', 'j', 'o', 'i', 'n', 't',
    '_', '2' };

  static char_T cv[11] = { 'i', 'i', 'w', 'a', '_', 'l', 'i', 'n', 'k', '_', '2'
  };

  static char_T vec[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static int8_T iv5[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv2[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv3[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv4[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  robotics_manip_internal_RigidBody *b_obj;
  real_T msubspace_data[36];
  real_T obj_Length;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T msubspace_size[2];
  int32_T obj_Vector_size[2];
  int32_T poslim_size[2];
  int32_T switch_expression_size[2];
  int32_T homepos_size_idx_1;
  int32_T loop_ub;
  char_T vec_data[204];
  char_T obj_Vector[200];
  char_T switch_expression_data[200];
  int8_T b_I[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_obj = obj;
  st.site = &w_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  b_obj->NameInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->NameInternal.Vector[loop_ub] = ' ';
  }

  st.site = &kb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->NameInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 11; loop_ub++) {
    vec_data[loop_ub] = cv[loop_ub];
  }

  iv[0] = 1;
  iv[1] = 11;
  iv1[0] = 1;
  iv1[1] = 11;
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &f_emlrtECI, &st);
  memcpy(&obj_Vector[0], &vec_data[0], 11U * sizeof(char_T));
  b_obj->NameInternal.Length = 11.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->NameInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_obj->ParentIndex = 2.0;
  st.site = &lb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 36; loop_ub++) {
    b_obj->JointInternal.MotionSubspaceInternal[loop_ub] = 0.0;
  }

  b_st.site = &ab_emlrtRSI;
  b_obj->JointInternal.NameInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.NameInternal.Vector[loop_ub] = ' ';
  }

  b_obj->JointInternal.TypeInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.TypeInternal.Vector[loop_ub] = ' ';
  }

  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.NameInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 12; loop_ub++) {
    obj_Vector[loop_ub] = cv1[loop_ub];
  }

  b_obj->JointInternal.NameInternal.Length = 12.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.NameInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_st.site = &bb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 8; loop_ub++) {
    obj_Vector[loop_ub] = vec[loop_ub];
  }

  b_obj->JointInternal.TypeInternal.Length = 8.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.TypeInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_st.site = &cb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  obj_Length = b_obj->JointInternal.TypeInternal.Length;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &c_emlrtBCI, &c_st);
  }

  switch_expression_size[0] = 1;
  switch_expression_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (b_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 1;
  } else if (d_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 2;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)iv2[loop_ub];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
    }
    break;

   case 1:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)iv3[loop_ub];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
    }
    break;

   case 2:
    for (loop_ub = 0; loop_ub < 36; loop_ub++) {
      b_I[loop_ub] = 0;
    }

    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      b_I[loop_ub + 6 * loop_ub] = 1;
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = 6;
    for (loop_ub = 0; loop_ub < 36; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)b_I[loop_ub];
    }

    poslim_size[0] = 7;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 7;
    b_obj->JointInternal.VelocityNumber = 6.0;
    b_obj->JointInternal.PositionNumber = 7.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = rtNaN;
    }
    break;

   default:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = 0.0;
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 0.0;
    b_obj->JointInternal.PositionNumber = 0.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = 0.0;
    }
    break;
  }

  b_st.site = &db_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&b_st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  b_st.site = &eb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  obj_Length = b_obj->JointInternal.TypeInternal.Length;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &c_emlrtBCI, &c_st);
  }

  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (!e_strcmp(switch_expression_data, obj_Vector_size)) {
    obj_Length = b_obj->JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &st);
      loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 7, &emlrtBCI, &st);
    }

    iv[0] = loop_ub;
    iv[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &emlrtECI, &st);
    obj_Length = b_obj->JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &b_emlrtDCI, &st);
      loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 7, &b_emlrtBCI, &st);
    }

    emlrtSubAssignSizeCheck1dR2017a(loop_ub, homepos_size_idx_1, &b_emlrtECI,
      &st);
  } else {
    for (loop_ub = 0; loop_ub < 2; loop_ub++) {
      iv[loop_ub] = loop_ub + 1;
    }

    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &c_emlrtECI,
      &st);
    emlrtSubAssignSizeCheck1dR2017a(1, homepos_size_idx_1, &d_emlrtECI, &st);
  }

  for (loop_ub = 0; loop_ub < 16; loop_ub++) {
    b_obj->JointInternal.JointToParentTransform[loop_ub] = dv[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 16; loop_ub++) {
    b_obj->JointInternal.ChildToJointTransform[loop_ub] = (real_T)iv5[loop_ub];
  }

  st.site = &mb_emlrtRSI;
  rigidBodyJoint_get_MotionSubspace(&st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  emlrtDynamicBoundsCheckR2012b(1, 1, msubspace_size[1], &g_emlrtBCI,
    (emlrtConstCTX)sp);
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub] = (real_T)iv2[loop_ub];
  }

  st.site = &mb_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
  }

  st.site = &nb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *e_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[16] = { -1.0, -2.0682310711021444E-13, -0.0, 0.0,
    1.0127277222968137E-24, -4.8965888601467475E-12, 1.0, 0.0,
    -2.0682310711021444E-13, 1.0, 4.8965888601467475E-12, 0.0, 0.0, 0.2045, 0.0,
    1.0 };

  static char_T cv1[12] = { 'i', 'i', 'w', 'a', '_', 'j', 'o', 'i', 'n', 't',
    '_', '3' };

  static char_T cv[11] = { 'i', 'i', 'w', 'a', '_', 'l', 'i', 'n', 'k', '_', '3'
  };

  static char_T vec[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static int8_T iv5[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv2[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv3[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv4[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  robotics_manip_internal_RigidBody *b_obj;
  real_T msubspace_data[36];
  real_T obj_Length;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T msubspace_size[2];
  int32_T obj_Vector_size[2];
  int32_T poslim_size[2];
  int32_T switch_expression_size[2];
  int32_T homepos_size_idx_1;
  int32_T loop_ub;
  char_T vec_data[204];
  char_T obj_Vector[200];
  char_T switch_expression_data[200];
  int8_T b_I[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_obj = obj;
  st.site = &w_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  b_obj->NameInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->NameInternal.Vector[loop_ub] = ' ';
  }

  st.site = &kb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->NameInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 11; loop_ub++) {
    vec_data[loop_ub] = cv[loop_ub];
  }

  iv[0] = 1;
  iv[1] = 11;
  iv1[0] = 1;
  iv1[1] = 11;
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &f_emlrtECI, &st);
  memcpy(&obj_Vector[0], &vec_data[0], 11U * sizeof(char_T));
  b_obj->NameInternal.Length = 11.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->NameInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_obj->ParentIndex = 3.0;
  st.site = &lb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 36; loop_ub++) {
    b_obj->JointInternal.MotionSubspaceInternal[loop_ub] = 0.0;
  }

  b_st.site = &ab_emlrtRSI;
  b_obj->JointInternal.NameInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.NameInternal.Vector[loop_ub] = ' ';
  }

  b_obj->JointInternal.TypeInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.TypeInternal.Vector[loop_ub] = ' ';
  }

  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.NameInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 12; loop_ub++) {
    obj_Vector[loop_ub] = cv1[loop_ub];
  }

  b_obj->JointInternal.NameInternal.Length = 12.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.NameInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_st.site = &bb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 8; loop_ub++) {
    obj_Vector[loop_ub] = vec[loop_ub];
  }

  b_obj->JointInternal.TypeInternal.Length = 8.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.TypeInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_st.site = &cb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  obj_Length = b_obj->JointInternal.TypeInternal.Length;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &c_emlrtBCI, &c_st);
  }

  switch_expression_size[0] = 1;
  switch_expression_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (b_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 1;
  } else if (d_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 2;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)iv2[loop_ub];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
    }
    break;

   case 1:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)iv3[loop_ub];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
    }
    break;

   case 2:
    for (loop_ub = 0; loop_ub < 36; loop_ub++) {
      b_I[loop_ub] = 0;
    }

    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      b_I[loop_ub + 6 * loop_ub] = 1;
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = 6;
    for (loop_ub = 0; loop_ub < 36; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)b_I[loop_ub];
    }

    poslim_size[0] = 7;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 7;
    b_obj->JointInternal.VelocityNumber = 6.0;
    b_obj->JointInternal.PositionNumber = 7.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = rtNaN;
    }
    break;

   default:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = 0.0;
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 0.0;
    b_obj->JointInternal.PositionNumber = 0.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = 0.0;
    }
    break;
  }

  b_st.site = &db_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&b_st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  b_st.site = &eb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  obj_Length = b_obj->JointInternal.TypeInternal.Length;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &c_emlrtBCI, &c_st);
  }

  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (!e_strcmp(switch_expression_data, obj_Vector_size)) {
    obj_Length = b_obj->JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &st);
      loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 7, &emlrtBCI, &st);
    }

    iv[0] = loop_ub;
    iv[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &emlrtECI, &st);
    obj_Length = b_obj->JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &b_emlrtDCI, &st);
      loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 7, &b_emlrtBCI, &st);
    }

    emlrtSubAssignSizeCheck1dR2017a(loop_ub, homepos_size_idx_1, &b_emlrtECI,
      &st);
  } else {
    for (loop_ub = 0; loop_ub < 2; loop_ub++) {
      iv[loop_ub] = loop_ub + 1;
    }

    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &c_emlrtECI,
      &st);
    emlrtSubAssignSizeCheck1dR2017a(1, homepos_size_idx_1, &d_emlrtECI, &st);
  }

  for (loop_ub = 0; loop_ub < 16; loop_ub++) {
    b_obj->JointInternal.JointToParentTransform[loop_ub] = dv[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 16; loop_ub++) {
    b_obj->JointInternal.ChildToJointTransform[loop_ub] = (real_T)iv5[loop_ub];
  }

  st.site = &mb_emlrtRSI;
  rigidBodyJoint_get_MotionSubspace(&st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  emlrtDynamicBoundsCheckR2012b(1, 1, msubspace_size[1], &g_emlrtBCI,
    (emlrtConstCTX)sp);
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub] = (real_T)iv2[loop_ub];
  }

  st.site = &mb_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
  }

  st.site = &nb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *f_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 4.8965888601467475E-12, 1.0,
    0.0, 0.0, -1.0, 4.8965888601467475E-12, 0.0, 0.0, 0.0, 0.2155, 1.0 };

  static char_T cv1[12] = { 'i', 'i', 'w', 'a', '_', 'j', 'o', 'i', 'n', 't',
    '_', '4' };

  static char_T cv[11] = { 'i', 'i', 'w', 'a', '_', 'l', 'i', 'n', 'k', '_', '4'
  };

  static char_T vec[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static int8_T iv5[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv2[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv3[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv4[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  robotics_manip_internal_RigidBody *b_obj;
  real_T msubspace_data[36];
  real_T obj_Length;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T msubspace_size[2];
  int32_T obj_Vector_size[2];
  int32_T poslim_size[2];
  int32_T switch_expression_size[2];
  int32_T homepos_size_idx_1;
  int32_T loop_ub;
  char_T vec_data[204];
  char_T obj_Vector[200];
  char_T switch_expression_data[200];
  int8_T b_I[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_obj = obj;
  st.site = &w_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  b_obj->NameInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->NameInternal.Vector[loop_ub] = ' ';
  }

  st.site = &kb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->NameInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 11; loop_ub++) {
    vec_data[loop_ub] = cv[loop_ub];
  }

  iv[0] = 1;
  iv[1] = 11;
  iv1[0] = 1;
  iv1[1] = 11;
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &f_emlrtECI, &st);
  memcpy(&obj_Vector[0], &vec_data[0], 11U * sizeof(char_T));
  b_obj->NameInternal.Length = 11.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->NameInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_obj->ParentIndex = 4.0;
  st.site = &lb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 36; loop_ub++) {
    b_obj->JointInternal.MotionSubspaceInternal[loop_ub] = 0.0;
  }

  b_st.site = &ab_emlrtRSI;
  b_obj->JointInternal.NameInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.NameInternal.Vector[loop_ub] = ' ';
  }

  b_obj->JointInternal.TypeInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.TypeInternal.Vector[loop_ub] = ' ';
  }

  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.NameInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 12; loop_ub++) {
    obj_Vector[loop_ub] = cv1[loop_ub];
  }

  b_obj->JointInternal.NameInternal.Length = 12.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.NameInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_st.site = &bb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 8; loop_ub++) {
    obj_Vector[loop_ub] = vec[loop_ub];
  }

  b_obj->JointInternal.TypeInternal.Length = 8.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.TypeInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_st.site = &cb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  obj_Length = b_obj->JointInternal.TypeInternal.Length;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &c_emlrtBCI, &c_st);
  }

  switch_expression_size[0] = 1;
  switch_expression_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (b_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 1;
  } else if (d_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 2;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)iv2[loop_ub];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
    }
    break;

   case 1:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)iv3[loop_ub];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
    }
    break;

   case 2:
    for (loop_ub = 0; loop_ub < 36; loop_ub++) {
      b_I[loop_ub] = 0;
    }

    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      b_I[loop_ub + 6 * loop_ub] = 1;
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = 6;
    for (loop_ub = 0; loop_ub < 36; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)b_I[loop_ub];
    }

    poslim_size[0] = 7;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 7;
    b_obj->JointInternal.VelocityNumber = 6.0;
    b_obj->JointInternal.PositionNumber = 7.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = rtNaN;
    }
    break;

   default:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = 0.0;
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 0.0;
    b_obj->JointInternal.PositionNumber = 0.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = 0.0;
    }
    break;
  }

  b_st.site = &db_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&b_st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  b_st.site = &eb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  obj_Length = b_obj->JointInternal.TypeInternal.Length;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &c_emlrtBCI, &c_st);
  }

  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (!e_strcmp(switch_expression_data, obj_Vector_size)) {
    obj_Length = b_obj->JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &st);
      loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 7, &emlrtBCI, &st);
    }

    iv[0] = loop_ub;
    iv[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &emlrtECI, &st);
    obj_Length = b_obj->JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &b_emlrtDCI, &st);
      loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 7, &b_emlrtBCI, &st);
    }

    emlrtSubAssignSizeCheck1dR2017a(loop_ub, homepos_size_idx_1, &b_emlrtECI,
      &st);
  } else {
    for (loop_ub = 0; loop_ub < 2; loop_ub++) {
      iv[loop_ub] = loop_ub + 1;
    }

    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &c_emlrtECI,
      &st);
    emlrtSubAssignSizeCheck1dR2017a(1, homepos_size_idx_1, &d_emlrtECI, &st);
  }

  for (loop_ub = 0; loop_ub < 16; loop_ub++) {
    b_obj->JointInternal.JointToParentTransform[loop_ub] = dv[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 16; loop_ub++) {
    b_obj->JointInternal.ChildToJointTransform[loop_ub] = (real_T)iv5[loop_ub];
  }

  st.site = &mb_emlrtRSI;
  rigidBodyJoint_get_MotionSubspace(&st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  emlrtDynamicBoundsCheckR2012b(1, 1, msubspace_size[1], &g_emlrtBCI,
    (emlrtConstCTX)sp);
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub] = (real_T)iv2[loop_ub];
  }

  st.site = &mb_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
  }

  st.site = &nb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *g_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[16] = { -1.0, -0.0, 2.0682310711021444E-13, 0.0,
    2.0682310711021444E-13, 4.8965888601467475E-12, 1.0, 0.0,
    -1.0127277222968137E-24, 1.0, -4.8965888601467475E-12, 0.0, 0.0, 0.1845, 0.0,
    1.0 };

  static char_T cv1[12] = { 'i', 'i', 'w', 'a', '_', 'j', 'o', 'i', 'n', 't',
    '_', '5' };

  static char_T cv[11] = { 'i', 'i', 'w', 'a', '_', 'l', 'i', 'n', 'k', '_', '5'
  };

  static char_T vec[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static int8_T iv5[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv2[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv3[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv4[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  robotics_manip_internal_RigidBody *b_obj;
  real_T msubspace_data[36];
  real_T obj_Length;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T msubspace_size[2];
  int32_T obj_Vector_size[2];
  int32_T poslim_size[2];
  int32_T switch_expression_size[2];
  int32_T homepos_size_idx_1;
  int32_T loop_ub;
  char_T vec_data[204];
  char_T obj_Vector[200];
  char_T switch_expression_data[200];
  int8_T b_I[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_obj = obj;
  st.site = &w_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  b_obj->NameInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->NameInternal.Vector[loop_ub] = ' ';
  }

  st.site = &kb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->NameInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 11; loop_ub++) {
    vec_data[loop_ub] = cv[loop_ub];
  }

  iv[0] = 1;
  iv[1] = 11;
  iv1[0] = 1;
  iv1[1] = 11;
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &f_emlrtECI, &st);
  memcpy(&obj_Vector[0], &vec_data[0], 11U * sizeof(char_T));
  b_obj->NameInternal.Length = 11.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->NameInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_obj->ParentIndex = 5.0;
  st.site = &lb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 36; loop_ub++) {
    b_obj->JointInternal.MotionSubspaceInternal[loop_ub] = 0.0;
  }

  b_st.site = &ab_emlrtRSI;
  b_obj->JointInternal.NameInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.NameInternal.Vector[loop_ub] = ' ';
  }

  b_obj->JointInternal.TypeInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.TypeInternal.Vector[loop_ub] = ' ';
  }

  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.NameInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 12; loop_ub++) {
    obj_Vector[loop_ub] = cv1[loop_ub];
  }

  b_obj->JointInternal.NameInternal.Length = 12.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.NameInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_st.site = &bb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 8; loop_ub++) {
    obj_Vector[loop_ub] = vec[loop_ub];
  }

  b_obj->JointInternal.TypeInternal.Length = 8.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.TypeInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_st.site = &cb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  obj_Length = b_obj->JointInternal.TypeInternal.Length;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &c_emlrtBCI, &c_st);
  }

  switch_expression_size[0] = 1;
  switch_expression_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (b_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 1;
  } else if (d_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 2;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)iv2[loop_ub];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
    }
    break;

   case 1:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)iv3[loop_ub];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
    }
    break;

   case 2:
    for (loop_ub = 0; loop_ub < 36; loop_ub++) {
      b_I[loop_ub] = 0;
    }

    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      b_I[loop_ub + 6 * loop_ub] = 1;
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = 6;
    for (loop_ub = 0; loop_ub < 36; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)b_I[loop_ub];
    }

    poslim_size[0] = 7;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 7;
    b_obj->JointInternal.VelocityNumber = 6.0;
    b_obj->JointInternal.PositionNumber = 7.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = rtNaN;
    }
    break;

   default:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = 0.0;
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 0.0;
    b_obj->JointInternal.PositionNumber = 0.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = 0.0;
    }
    break;
  }

  b_st.site = &db_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&b_st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  b_st.site = &eb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  obj_Length = b_obj->JointInternal.TypeInternal.Length;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &c_emlrtBCI, &c_st);
  }

  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (!e_strcmp(switch_expression_data, obj_Vector_size)) {
    obj_Length = b_obj->JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &st);
      loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 7, &emlrtBCI, &st);
    }

    iv[0] = loop_ub;
    iv[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &emlrtECI, &st);
    obj_Length = b_obj->JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &b_emlrtDCI, &st);
      loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 7, &b_emlrtBCI, &st);
    }

    emlrtSubAssignSizeCheck1dR2017a(loop_ub, homepos_size_idx_1, &b_emlrtECI,
      &st);
  } else {
    for (loop_ub = 0; loop_ub < 2; loop_ub++) {
      iv[loop_ub] = loop_ub + 1;
    }

    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &c_emlrtECI,
      &st);
    emlrtSubAssignSizeCheck1dR2017a(1, homepos_size_idx_1, &d_emlrtECI, &st);
  }

  for (loop_ub = 0; loop_ub < 16; loop_ub++) {
    b_obj->JointInternal.JointToParentTransform[loop_ub] = dv[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 16; loop_ub++) {
    b_obj->JointInternal.ChildToJointTransform[loop_ub] = (real_T)iv5[loop_ub];
  }

  st.site = &mb_emlrtRSI;
  rigidBodyJoint_get_MotionSubspace(&st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  emlrtDynamicBoundsCheckR2012b(1, 1, msubspace_size[1], &g_emlrtBCI,
    (emlrtConstCTX)sp);
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub] = (real_T)iv2[loop_ub];
  }

  st.site = &mb_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
  }

  st.site = &nb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *h_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 4.8965888601467475E-12, 1.0,
    0.0, 0.0, -1.0, 4.8965888601467475E-12, 0.0, 0.0, 0.0, 0.2155, 1.0 };

  static char_T cv1[12] = { 'i', 'i', 'w', 'a', '_', 'j', 'o', 'i', 'n', 't',
    '_', '6' };

  static char_T cv[11] = { 'i', 'i', 'w', 'a', '_', 'l', 'i', 'n', 'k', '_', '6'
  };

  static char_T vec[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static int8_T iv5[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv2[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv3[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv4[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  robotics_manip_internal_RigidBody *b_obj;
  real_T msubspace_data[36];
  real_T obj_Length;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T msubspace_size[2];
  int32_T obj_Vector_size[2];
  int32_T poslim_size[2];
  int32_T switch_expression_size[2];
  int32_T homepos_size_idx_1;
  int32_T loop_ub;
  char_T vec_data[204];
  char_T obj_Vector[200];
  char_T switch_expression_data[200];
  int8_T b_I[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_obj = obj;
  st.site = &w_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  b_obj->NameInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->NameInternal.Vector[loop_ub] = ' ';
  }

  st.site = &kb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->NameInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 11; loop_ub++) {
    vec_data[loop_ub] = cv[loop_ub];
  }

  iv[0] = 1;
  iv[1] = 11;
  iv1[0] = 1;
  iv1[1] = 11;
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &f_emlrtECI, &st);
  memcpy(&obj_Vector[0], &vec_data[0], 11U * sizeof(char_T));
  b_obj->NameInternal.Length = 11.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->NameInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_obj->ParentIndex = 6.0;
  st.site = &lb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 36; loop_ub++) {
    b_obj->JointInternal.MotionSubspaceInternal[loop_ub] = 0.0;
  }

  b_st.site = &ab_emlrtRSI;
  b_obj->JointInternal.NameInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.NameInternal.Vector[loop_ub] = ' ';
  }

  b_obj->JointInternal.TypeInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.TypeInternal.Vector[loop_ub] = ' ';
  }

  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.NameInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 12; loop_ub++) {
    obj_Vector[loop_ub] = cv1[loop_ub];
  }

  b_obj->JointInternal.NameInternal.Length = 12.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.NameInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_st.site = &bb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 8; loop_ub++) {
    obj_Vector[loop_ub] = vec[loop_ub];
  }

  b_obj->JointInternal.TypeInternal.Length = 8.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.TypeInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_st.site = &cb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  obj_Length = b_obj->JointInternal.TypeInternal.Length;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &c_emlrtBCI, &c_st);
  }

  switch_expression_size[0] = 1;
  switch_expression_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (b_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 1;
  } else if (d_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 2;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)iv2[loop_ub];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
    }
    break;

   case 1:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)iv3[loop_ub];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
    }
    break;

   case 2:
    for (loop_ub = 0; loop_ub < 36; loop_ub++) {
      b_I[loop_ub] = 0;
    }

    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      b_I[loop_ub + 6 * loop_ub] = 1;
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = 6;
    for (loop_ub = 0; loop_ub < 36; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)b_I[loop_ub];
    }

    poslim_size[0] = 7;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 7;
    b_obj->JointInternal.VelocityNumber = 6.0;
    b_obj->JointInternal.PositionNumber = 7.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = rtNaN;
    }
    break;

   default:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = 0.0;
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 0.0;
    b_obj->JointInternal.PositionNumber = 0.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = 0.0;
    }
    break;
  }

  b_st.site = &db_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&b_st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  b_st.site = &eb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  obj_Length = b_obj->JointInternal.TypeInternal.Length;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &c_emlrtBCI, &c_st);
  }

  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (!e_strcmp(switch_expression_data, obj_Vector_size)) {
    obj_Length = b_obj->JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &st);
      loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 7, &emlrtBCI, &st);
    }

    iv[0] = loop_ub;
    iv[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &emlrtECI, &st);
    obj_Length = b_obj->JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &b_emlrtDCI, &st);
      loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 7, &b_emlrtBCI, &st);
    }

    emlrtSubAssignSizeCheck1dR2017a(loop_ub, homepos_size_idx_1, &b_emlrtECI,
      &st);
  } else {
    for (loop_ub = 0; loop_ub < 2; loop_ub++) {
      iv[loop_ub] = loop_ub + 1;
    }

    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &c_emlrtECI,
      &st);
    emlrtSubAssignSizeCheck1dR2017a(1, homepos_size_idx_1, &d_emlrtECI, &st);
  }

  for (loop_ub = 0; loop_ub < 16; loop_ub++) {
    b_obj->JointInternal.JointToParentTransform[loop_ub] = dv[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 16; loop_ub++) {
    b_obj->JointInternal.ChildToJointTransform[loop_ub] = (real_T)iv5[loop_ub];
  }

  st.site = &mb_emlrtRSI;
  rigidBodyJoint_get_MotionSubspace(&st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  emlrtDynamicBoundsCheckR2012b(1, 1, msubspace_size[1], &g_emlrtBCI,
    (emlrtConstCTX)sp);
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub] = (real_T)iv2[loop_ub];
  }

  st.site = &mb_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
  }

  st.site = &nb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *i_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[16] = { -1.0, -0.0, 2.0682310711021444E-13, 0.0,
    2.0682310711021444E-13, 4.8965888601467475E-12, 1.0, 0.0,
    -1.0127277222968137E-24, 1.0, -4.8965888601467475E-12, 0.0, 0.0, 0.081, 0.0,
    1.0 };

  static char_T cv1[12] = { 'i', 'i', 'w', 'a', '_', 'j', 'o', 'i', 'n', 't',
    '_', '7' };

  static char_T cv[11] = { 'i', 'i', 'w', 'a', '_', 'l', 'i', 'n', 'k', '_', '7'
  };

  static char_T vec[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static int8_T iv5[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv2[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv3[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv4[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  robotics_manip_internal_RigidBody *b_obj;
  real_T msubspace_data[36];
  real_T obj_Length;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T msubspace_size[2];
  int32_T obj_Vector_size[2];
  int32_T poslim_size[2];
  int32_T switch_expression_size[2];
  int32_T homepos_size_idx_1;
  int32_T loop_ub;
  char_T vec_data[204];
  char_T obj_Vector[200];
  char_T switch_expression_data[200];
  int8_T b_I[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_obj = obj;
  st.site = &w_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  b_obj->NameInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->NameInternal.Vector[loop_ub] = ' ';
  }

  st.site = &kb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->NameInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 11; loop_ub++) {
    vec_data[loop_ub] = cv[loop_ub];
  }

  iv[0] = 1;
  iv[1] = 11;
  iv1[0] = 1;
  iv1[1] = 11;
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &f_emlrtECI, &st);
  memcpy(&obj_Vector[0], &vec_data[0], 11U * sizeof(char_T));
  b_obj->NameInternal.Length = 11.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->NameInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_obj->ParentIndex = 7.0;
  st.site = &lb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 36; loop_ub++) {
    b_obj->JointInternal.MotionSubspaceInternal[loop_ub] = 0.0;
  }

  b_st.site = &ab_emlrtRSI;
  b_obj->JointInternal.NameInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.NameInternal.Vector[loop_ub] = ' ';
  }

  b_obj->JointInternal.TypeInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.TypeInternal.Vector[loop_ub] = ' ';
  }

  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.NameInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 12; loop_ub++) {
    obj_Vector[loop_ub] = cv1[loop_ub];
  }

  b_obj->JointInternal.NameInternal.Length = 12.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.NameInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_st.site = &bb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 8; loop_ub++) {
    obj_Vector[loop_ub] = vec[loop_ub];
  }

  b_obj->JointInternal.TypeInternal.Length = 8.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.TypeInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_st.site = &cb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  obj_Length = b_obj->JointInternal.TypeInternal.Length;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &c_emlrtBCI, &c_st);
  }

  switch_expression_size[0] = 1;
  switch_expression_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (b_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 1;
  } else if (d_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 2;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)iv2[loop_ub];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
    }
    break;

   case 1:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)iv3[loop_ub];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
    }
    break;

   case 2:
    for (loop_ub = 0; loop_ub < 36; loop_ub++) {
      b_I[loop_ub] = 0;
    }

    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      b_I[loop_ub + 6 * loop_ub] = 1;
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = 6;
    for (loop_ub = 0; loop_ub < 36; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)b_I[loop_ub];
    }

    poslim_size[0] = 7;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 7;
    b_obj->JointInternal.VelocityNumber = 6.0;
    b_obj->JointInternal.PositionNumber = 7.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = rtNaN;
    }
    break;

   default:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = 0.0;
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 0.0;
    b_obj->JointInternal.PositionNumber = 0.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = 0.0;
    }
    break;
  }

  b_st.site = &db_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&b_st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  b_st.site = &eb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  obj_Length = b_obj->JointInternal.TypeInternal.Length;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &c_emlrtBCI, &c_st);
  }

  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (!e_strcmp(switch_expression_data, obj_Vector_size)) {
    obj_Length = b_obj->JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &st);
      loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 7, &emlrtBCI, &st);
    }

    iv[0] = loop_ub;
    iv[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &emlrtECI, &st);
    obj_Length = b_obj->JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &b_emlrtDCI, &st);
      loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 7, &b_emlrtBCI, &st);
    }

    emlrtSubAssignSizeCheck1dR2017a(loop_ub, homepos_size_idx_1, &b_emlrtECI,
      &st);
  } else {
    for (loop_ub = 0; loop_ub < 2; loop_ub++) {
      iv[loop_ub] = loop_ub + 1;
    }

    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &c_emlrtECI,
      &st);
    emlrtSubAssignSizeCheck1dR2017a(1, homepos_size_idx_1, &d_emlrtECI, &st);
  }

  for (loop_ub = 0; loop_ub < 16; loop_ub++) {
    b_obj->JointInternal.JointToParentTransform[loop_ub] = dv[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 16; loop_ub++) {
    b_obj->JointInternal.ChildToJointTransform[loop_ub] = (real_T)iv5[loop_ub];
  }

  st.site = &mb_emlrtRSI;
  rigidBodyJoint_get_MotionSubspace(&st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  emlrtDynamicBoundsCheckR2012b(1, 1, msubspace_size[1], &g_emlrtBCI,
    (emlrtConstCTX)sp);
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub] = (real_T)iv2[loop_ub];
  }

  st.site = &mb_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
  }

  st.site = &nb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *j_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[16] = { 4.8965888601467475E-12, 0.0, 1.0, 0.0, -0.0, 1.0, 0.0,
    0.0, -1.0, -0.0, 4.8965888601467475E-12, 0.0, 0.0, 0.0, 0.045, 1.0 };

  static char_T cv1[13] = { 'i', 'i', 'w', 'a', '_', 'j', 'o', 'i', 'n', 't',
    '_', 'e', 'e' };

  static char_T cv[12] = { 'i', 'i', 'w', 'a', '_', 'l', 'i', 'n', 'k', '_', 'e',
    'e' };

  static char_T vec[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv5[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv2[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv3[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv4[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  robotics_manip_internal_RigidBody *b_obj;
  real_T msubspace_data[36];
  real_T obj_Length;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T msubspace_size[2];
  int32_T obj_Vector_size[2];
  int32_T poslim_size[2];
  int32_T switch_expression_size[2];
  int32_T homepos_size_idx_1;
  int32_T loop_ub;
  char_T vec_data[204];
  char_T obj_Vector[200];
  char_T switch_expression_data[200];
  int8_T b_I[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_obj = obj;
  st.site = &w_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  b_obj->NameInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->NameInternal.Vector[loop_ub] = ' ';
  }

  st.site = &kb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->NameInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 12; loop_ub++) {
    vec_data[loop_ub] = cv[loop_ub];
  }

  iv[0] = 1;
  iv[1] = 12;
  iv1[0] = 1;
  iv1[1] = 12;
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &f_emlrtECI, &st);
  memcpy(&obj_Vector[0], &vec_data[0], 12U * sizeof(char_T));
  b_obj->NameInternal.Length = 12.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->NameInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_obj->ParentIndex = 8.0;
  st.site = &lb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 36; loop_ub++) {
    b_obj->JointInternal.MotionSubspaceInternal[loop_ub] = 0.0;
  }

  b_st.site = &ab_emlrtRSI;
  b_obj->JointInternal.NameInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.NameInternal.Vector[loop_ub] = ' ';
  }

  b_obj->JointInternal.TypeInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.TypeInternal.Vector[loop_ub] = ' ';
  }

  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.NameInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 13; loop_ub++) {
    obj_Vector[loop_ub] = cv1[loop_ub];
  }

  b_obj->JointInternal.NameInternal.Length = 13.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.NameInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_st.site = &bb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 5; loop_ub++) {
    obj_Vector[loop_ub] = vec[loop_ub];
  }

  b_obj->JointInternal.TypeInternal.Length = 5.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.TypeInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_st.site = &cb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  obj_Length = b_obj->JointInternal.TypeInternal.Length;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &c_emlrtBCI, &c_st);
  }

  switch_expression_size[0] = 1;
  switch_expression_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (b_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 1;
  } else if (d_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 2;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)iv2[loop_ub];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
    }
    break;

   case 1:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)iv3[loop_ub];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
    }
    break;

   case 2:
    for (loop_ub = 0; loop_ub < 36; loop_ub++) {
      b_I[loop_ub] = 0;
    }

    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      b_I[loop_ub + 6 * loop_ub] = 1;
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = 6;
    for (loop_ub = 0; loop_ub < 36; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)b_I[loop_ub];
    }

    poslim_size[0] = 7;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 7;
    b_obj->JointInternal.VelocityNumber = 6.0;
    b_obj->JointInternal.PositionNumber = 7.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = rtNaN;
    }
    break;

   default:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = 0.0;
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 0.0;
    b_obj->JointInternal.PositionNumber = 0.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = 0.0;
    }
    break;
  }

  b_st.site = &db_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&b_st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  b_st.site = &eb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  obj_Length = b_obj->JointInternal.TypeInternal.Length;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &c_emlrtBCI, &c_st);
  }

  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (!e_strcmp(switch_expression_data, obj_Vector_size)) {
    obj_Length = b_obj->JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &st);
      loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 7, &emlrtBCI, &st);
    }

    iv[0] = loop_ub;
    iv[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &emlrtECI, &st);
    obj_Length = b_obj->JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &b_emlrtDCI, &st);
      loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 7, &b_emlrtBCI, &st);
    }

    emlrtSubAssignSizeCheck1dR2017a(loop_ub, homepos_size_idx_1, &b_emlrtECI,
      &st);
  } else {
    for (loop_ub = 0; loop_ub < 2; loop_ub++) {
      iv[loop_ub] = loop_ub + 1;
    }

    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &c_emlrtECI,
      &st);
    emlrtSubAssignSizeCheck1dR2017a(1, homepos_size_idx_1, &d_emlrtECI, &st);
  }

  for (loop_ub = 0; loop_ub < 16; loop_ub++) {
    b_obj->JointInternal.JointToParentTransform[loop_ub] = dv[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 16; loop_ub++) {
    b_obj->JointInternal.ChildToJointTransform[loop_ub] = (real_T)iv5[loop_ub];
  }

  st.site = &mb_emlrtRSI;
  rigidBodyJoint_get_MotionSubspace(&st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  emlrtDynamicBoundsCheckR2012b(1, 1, msubspace_size[1], &g_emlrtBCI,
    (emlrtConstCTX)sp);
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub] = 0.0;
  }

  st.site = &mb_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_obj->JointInternal.JointAxisInternal[loop_ub] = 0.0;
  }

  st.site = &nb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *k_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[16] = { 1.0, 2.0682310711021444E-13, 2.0682310711021444E-13,
    0.0, -2.0682310711025723E-13, 1.0, 2.0682310711021444E-13, 0.0,
    -2.0682310711017166E-13, -2.0682310711025723E-13, 1.0, 0.0, 0.0, 0.0, 0.045,
    1.0 };

  static char_T cv1[18] = { 'i', 'i', 'w', 'a', '_', 'j', 'o', 'i', 'n', 't',
    '_', 'e', 'e', '_', 'k', 'u', 'k', 'a' };

  static char_T cv[17] = { 'i', 'i', 'w', 'a', '_', 'l', 'i', 'n', 'k', '_', 'e',
    'e', '_', 'k', 'u', 'k', 'a' };

  static char_T vec[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv5[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv2[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv3[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv4[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  robotics_manip_internal_RigidBody *b_obj;
  real_T msubspace_data[36];
  real_T obj_Length;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T msubspace_size[2];
  int32_T obj_Vector_size[2];
  int32_T poslim_size[2];
  int32_T switch_expression_size[2];
  int32_T homepos_size_idx_1;
  int32_T loop_ub;
  char_T vec_data[204];
  char_T obj_Vector[200];
  char_T switch_expression_data[200];
  int8_T b_I[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_obj = obj;
  st.site = &w_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  b_obj->NameInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->NameInternal.Vector[loop_ub] = ' ';
  }

  st.site = &kb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->NameInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 17; loop_ub++) {
    vec_data[loop_ub] = cv[loop_ub];
  }

  iv[0] = 1;
  iv[1] = 17;
  iv1[0] = 1;
  iv1[1] = 17;
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &f_emlrtECI, &st);
  memcpy(&obj_Vector[0], &vec_data[0], 17U * sizeof(char_T));
  b_obj->NameInternal.Length = 17.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->NameInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_obj->ParentIndex = 8.0;
  st.site = &lb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 36; loop_ub++) {
    b_obj->JointInternal.MotionSubspaceInternal[loop_ub] = 0.0;
  }

  b_st.site = &ab_emlrtRSI;
  b_obj->JointInternal.NameInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.NameInternal.Vector[loop_ub] = ' ';
  }

  b_obj->JointInternal.TypeInternal.Length = 200.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.TypeInternal.Vector[loop_ub] = ' ';
  }

  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.NameInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 18; loop_ub++) {
    obj_Vector[loop_ub] = cv1[loop_ub];
  }

  b_obj->JointInternal.NameInternal.Length = 18.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.NameInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_st.site = &bb_emlrtRSI;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 5; loop_ub++) {
    obj_Vector[loop_ub] = vec[loop_ub];
  }

  b_obj->JointInternal.TypeInternal.Length = 5.0;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    b_obj->JointInternal.TypeInternal.Vector[loop_ub] = obj_Vector[loop_ub];
  }

  b_st.site = &cb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  obj_Length = b_obj->JointInternal.TypeInternal.Length;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &c_emlrtBCI, &c_st);
  }

  switch_expression_size[0] = 1;
  switch_expression_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (b_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 1;
  } else if (d_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 2;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)iv2[loop_ub];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
    }
    break;

   case 1:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)iv3[loop_ub];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = (real_T)iv4[loop_ub];
    }
    break;

   case 2:
    for (loop_ub = 0; loop_ub < 36; loop_ub++) {
      b_I[loop_ub] = 0;
    }

    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      b_I[loop_ub + 6 * loop_ub] = 1;
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = 6;
    for (loop_ub = 0; loop_ub < 36; loop_ub++) {
      msubspace_data[loop_ub] = (real_T)b_I[loop_ub];
    }

    poslim_size[0] = 7;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 7;
    b_obj->JointInternal.VelocityNumber = 6.0;
    b_obj->JointInternal.PositionNumber = 7.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = rtNaN;
    }
    break;

   default:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      msubspace_data[loop_ub] = 0.0;
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 0.0;
    b_obj->JointInternal.PositionNumber = 0.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_obj->JointInternal.JointAxisInternal[loop_ub] = 0.0;
    }
    break;
  }

  b_st.site = &db_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&b_st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  b_st.site = &eb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  obj_Length = b_obj->JointInternal.TypeInternal.Length;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = b_obj->JointInternal.TypeInternal.Vector[loop_ub];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &c_emlrtBCI, &c_st);
  }

  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (!e_strcmp(switch_expression_data, obj_Vector_size)) {
    obj_Length = b_obj->JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &st);
      loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 7, &emlrtBCI, &st);
    }

    iv[0] = loop_ub;
    iv[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &emlrtECI, &st);
    obj_Length = b_obj->JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &b_emlrtDCI, &st);
      loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 7, &b_emlrtBCI, &st);
    }

    emlrtSubAssignSizeCheck1dR2017a(loop_ub, homepos_size_idx_1, &b_emlrtECI,
      &st);
  } else {
    for (loop_ub = 0; loop_ub < 2; loop_ub++) {
      iv[loop_ub] = loop_ub + 1;
    }

    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &c_emlrtECI,
      &st);
    emlrtSubAssignSizeCheck1dR2017a(1, homepos_size_idx_1, &d_emlrtECI, &st);
  }

  for (loop_ub = 0; loop_ub < 16; loop_ub++) {
    b_obj->JointInternal.JointToParentTransform[loop_ub] = dv[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 16; loop_ub++) {
    b_obj->JointInternal.ChildToJointTransform[loop_ub] = (real_T)iv5[loop_ub];
  }

  st.site = &mb_emlrtRSI;
  rigidBodyJoint_get_MotionSubspace(&st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  emlrtDynamicBoundsCheckR2012b(1, 1, msubspace_size[1], &g_emlrtBCI,
    (emlrtConstCTX)sp);
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub] = 0.0;
  }

  st.site = &mb_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_obj->JointInternal.JointAxisInternal[loop_ub] = 0.0;
  }

  st.site = &nb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *l_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static char_T cv[5] = { 'w', 'o', 'r', 'l', 'd' };

  static char_T vec[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T cv1[4] = { '_', 'j', 'n', 't' };

  static int8_T iv2[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv3[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv4[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  robotics_manip_internal_RigidBody *b_obj;
  real_T msubspace_data[36];
  real_T obj_Length;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T msubspace_size[2];
  int32_T obj_Vector_size[2];
  int32_T poslim_size[2];
  int32_T switch_expression_size[2];
  int32_T homepos_size_idx_1;
  int32_T i;
  int32_T loop_ub;
  char_T jname_data[204];
  char_T obj_Vector[200];
  char_T switch_expression_data[200];
  int8_T b_I[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_obj = obj;
  st.site = &w_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  b_obj->NameInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    b_obj->NameInternal.Vector[i] = ' ';
  }

  st.site = &kb_emlrtRSI;
  for (i = 0; i < 200; i++) {
    obj_Vector[i] = b_obj->NameInternal.Vector[i];
  }

  for (i = 0; i < 5; i++) {
    jname_data[i] = cv[i];
  }

  iv[0] = 1;
  iv[1] = 5;
  iv1[0] = 1;
  iv1[1] = 5;
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &f_emlrtECI, &st);
  memcpy(&obj_Vector[0], &jname_data[0], 5U * sizeof(char_T));
  b_obj->NameInternal.Length = 5.0;
  for (i = 0; i < 200; i++) {
    b_obj->NameInternal.Vector[i] = obj_Vector[i];
  }

  b_obj->ParentIndex = -1.0;
  st.site = &pb_emlrtRSI;
  obj_Length = b_obj->NameInternal.Length;
  for (i = 0; i < 200; i++) {
    obj_Vector[i] = b_obj->NameInternal.Vector[i];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &c_emlrtBCI, &st);
  }

  if (loop_ub - 1 >= 0) {
    memcpy(&jname_data[0], &obj_Vector[0], (uint32_T)loop_ub * sizeof(char_T));
  }

  for (i = 0; i < 4; i++) {
    jname_data[i + loop_ub] = cv1[i];
  }

  st.site = &qb_emlrtRSI;
  for (i = 0; i < 36; i++) {
    b_obj->JointInternal.MotionSubspaceInternal[i] = 0.0;
  }

  b_st.site = &ab_emlrtRSI;
  b_obj->JointInternal.NameInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    b_obj->JointInternal.NameInternal.Vector[i] = ' ';
  }

  b_obj->JointInternal.TypeInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    b_obj->JointInternal.TypeInternal.Vector[i] = ' ';
  }

  b_st.site = &rb_emlrtRSI;
  for (i = 0; i < 200; i++) {
    obj_Vector[i] = b_obj->JointInternal.NameInternal.Vector[i];
  }

  emlrtDynamicBoundsCheckR2012b(loop_ub + 4, 1, loop_ub + 4, &j_emlrtBCI, &b_st);
  emlrtDynamicBoundsCheckR2012b(loop_ub + 4, 1, 200, &i_emlrtBCI, &b_st);
  iv[0] = 1;
  iv[1] = loop_ub + 4;
  iv1[0] = 1;
  iv1[1] = loop_ub + 4;
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &f_emlrtECI, &b_st);
  if (loop_ub + 3 >= 0) {
    memcpy(&obj_Vector[0], &jname_data[0], (uint32_T)(loop_ub + 4) * sizeof
           (char_T));
  }

  b_obj->JointInternal.NameInternal.Length = (real_T)(loop_ub + 4);
  for (i = 0; i < 200; i++) {
    b_obj->JointInternal.NameInternal.Vector[i] = obj_Vector[i];
  }

  b_st.site = &bb_emlrtRSI;
  for (i = 0; i < 200; i++) {
    obj_Vector[i] = b_obj->JointInternal.TypeInternal.Vector[i];
  }

  for (i = 0; i < 5; i++) {
    obj_Vector[i] = vec[i];
  }

  b_obj->JointInternal.TypeInternal.Length = 5.0;
  for (i = 0; i < 200; i++) {
    b_obj->JointInternal.TypeInternal.Vector[i] = obj_Vector[i];
  }

  b_st.site = &cb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  obj_Length = b_obj->JointInternal.TypeInternal.Length;
  for (i = 0; i < 200; i++) {
    obj_Vector[i] = b_obj->JointInternal.TypeInternal.Vector[i];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &c_emlrtBCI, &c_st);
  }

  switch_expression_size[0] = 1;
  switch_expression_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (b_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 1;
  } else if (d_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 2;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = (real_T)iv2[i];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv4[i];
    }
    break;

   case 1:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = (real_T)iv3[i];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv4[i];
    }
    break;

   case 2:
    for (i = 0; i < 36; i++) {
      b_I[i] = 0;
    }

    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      b_I[loop_ub + 6 * loop_ub] = 1;
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = 6;
    for (i = 0; i < 36; i++) {
      msubspace_data[i] = (real_T)b_I[i];
    }

    poslim_size[0] = 7;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 7;
    b_obj->JointInternal.VelocityNumber = 6.0;
    b_obj->JointInternal.PositionNumber = 7.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = rtNaN;
    }
    break;

   default:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0.0;
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    homepos_size_idx_1 = 1;
    b_obj->JointInternal.VelocityNumber = 0.0;
    b_obj->JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  b_st.site = &db_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&b_st, &b_obj->JointInternal, msubspace_data,
    msubspace_size);
  b_st.site = &eb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  obj_Length = b_obj->JointInternal.TypeInternal.Length;
  for (i = 0; i < 200; i++) {
    obj_Vector[i] = b_obj->JointInternal.TypeInternal.Vector[i];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &c_emlrtBCI, &c_st);
  }

  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (!e_strcmp(switch_expression_data, obj_Vector_size)) {
    obj_Length = b_obj->JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      i = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &st);
      i = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &emlrtBCI, &st);
    }

    iv[0] = i;
    iv[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &emlrtECI, &st);
    obj_Length = b_obj->JointInternal.PositionNumber;
    if (obj_Length < 1.0) {
      i = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &b_emlrtDCI, &st);
      i = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &b_emlrtBCI, &st);
    }

    emlrtSubAssignSizeCheck1dR2017a(i, homepos_size_idx_1, &b_emlrtECI, &st);
  } else {
    for (i = 0; i < 2; i++) {
      iv[i] = i + 1;
    }

    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &c_emlrtECI,
      &st);
    emlrtSubAssignSizeCheck1dR2017a(1, homepos_size_idx_1, &d_emlrtECI, &st);
  }

  st.site = &nb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static void mw__internal__call__reset(InstanceStruct_NRow8X0OFqedY5LmzUzZ3
  *moduleInstance, const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T d_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T f_u[5] = { 'r', 'e', 's', 'e', 't' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T e_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &sb_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      c_u[i] = d_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &c_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      c_u[i] = d_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      e_u[i] = f_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &e_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &d_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }
}

static void mw__internal__call__step(InstanceStruct_NRow8X0OFqedY5LmzUzZ3
  *moduleInstance, const emlrtStack *sp, real_T b_u0[7], real_T c_y0[16])
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static const int32_T iv3[2] = { 1, 46 };

  static const int32_T iv4[2] = { 1, 46 };

  static const int32_T iv5[2] = { 1, 5 };

  static const int32_T iv6[2] = { 1, 46 };

  static const int32_T iv7[2] = { 1, 46 };

  static const int32_T iv9[2] = { 1, 17 };

  static char_T d_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T h_u[46] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'o', 'd', 'y', 'N', 'o',
    't', 'F', 'o', 'u', 'n', 'd' };

  static char_T k_u[17] = { 'i', 'i', 'w', 'a', '_', 'l', 'i', 'n', 'k', '_',
    'e', 'e', '_', 'k', 'u', 'k', 'a' };

  static char_T f_u[5] = { 's', 'e', 't', 'u', 'p' };

  static char_T i_u[5] = { 'w', 'o', 'r', 'l', 'd' };

  static int8_T iv8[4] = { 0, 0, 0, 1 };

  cell_wrap Ttree_data[10];
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *m;
  const mxArray *y;
  robotics_manip_internal_RigidBody *obj;
  real_T T1[16];
  real_T T2[16];
  real_T d_R[16];
  real_T R[9];
  real_T b_R[9];
  real_T qvec[7];
  real_T c_R[3];
  real_T d;
  real_T obj_Length;
  int32_T Ttree_size[2];
  int32_T b_obj_Vector_size[2];
  int32_T c_obj_Vector_size[2];
  int32_T d_obj_Vector_size[2];
  int32_T obj_Vector_size[2];
  int32_T b_i;
  int32_T bid1;
  int32_T i;
  int32_T loop_ub;
  char_T obj_Vector[200];
  char_T obj_Vector_data[200];
  char_T c_u[51];
  char_T g_u[46];
  char_T j_u[17];
  char_T e_u[5];
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &tb_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized != 1) {
    b_st.site = &d_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    if (moduleInstance->sysobj.isInitialized != 0) {
      for (b_i = 0; b_i < 51; b_i++) {
        c_u[b_i] = d_u[b_i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&c_st, 51, m, &c_u[0]);
      emlrtAssign(&y, m);
      for (b_i = 0; b_i < 51; b_i++) {
        c_u[b_i] = d_u[b_i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(&c_st, 51, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (b_i = 0; b_i < 5; b_i++) {
        e_u[b_i] = f_u[b_i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(&c_st, 5, m, &e_u[0]);
      emlrtAssign(&c_y, m);
      d_st.site = &d_emlrtRSI;
      error(&d_st, y, getString(&d_st, message(&d_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    moduleInstance->sysobj.isInitialized = 1;
    d_st.site = &d_emlrtRSI;
    GetTransformBlock_setupImpl(moduleInstance, &d_st, &moduleInstance->sysobj);
  }

  b_st.site = &d_emlrtRSI;
  c_st.site = &ub_emlrtRSI;
  for (i = 0; i < 7; i++) {
    qvec[i] = b_u0[i];
  }

  d_st.site = &vb_emlrtRSI;
  RigidBodyTree_validateConfiguration(&d_st,
    &moduleInstance->sysobj.TreeInternal, qvec);
  d_st.site = &wb_emlrtRSI;
  RigidBodyTree_forwardKinematics(&d_st, &moduleInstance->sysobj.TreeInternal,
    qvec, Ttree_data, Ttree_size);
  d_st.site = &xb_emlrtRSI;
  e_st.site = &wc_emlrtRSI;
  bid1 = -2;
  f_st.site = &yc_emlrtRSI;
  g_st.site = &bd_emlrtRSI;
  obj_Length = moduleInstance->sysobj.TreeInternal.Base.NameInternal.Length;
  memcpy(&obj_Vector[0],
         &moduleInstance->sysobj.TreeInternal.Base.NameInternal.Vector[0], 200U *
         sizeof(char_T));
  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    b_i = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &g_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(b_i, 1, 200, &c_emlrtBCI, &g_st);
  }

  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)loop_ub * sizeof
           (char_T));
  }

  if (f_strcmp(obj_Vector_data, obj_Vector_size)) {
    bid1 = -1;
  } else {
    d = moduleInstance->sysobj.TreeInternal.NumBodies;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &b_emlrtRTEI, &e_st);
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i <= (int32_T)d - 1)) {
      f_st.site = &ad_emlrtRSI;
      obj = moduleInstance->
        sysobj.TreeInternal.Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 9,
        &k_emlrtBCI, &f_st)];
      g_st.site = &bd_emlrtRSI;
      obj_Length = obj->NameInternal.Length;
      for (b_i = 0; b_i < 200; b_i++) {
        obj_Vector[b_i] = obj->NameInternal.Vector[b_i];
      }

      if (obj_Length < 1.0) {
        loop_ub = 0;
      } else {
        b_i = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &g_st);
        loop_ub = emlrtDynamicBoundsCheckR2012b(b_i, 1, 200, &c_emlrtBCI, &g_st);
      }

      b_obj_Vector_size[0] = 1;
      b_obj_Vector_size[1] = loop_ub;
      if (loop_ub - 1 >= 0) {
        memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)loop_ub * sizeof
               (char_T));
      }

      if (f_strcmp(obj_Vector_data, b_obj_Vector_size)) {
        bid1 = i;
        exitg1 = true;
      } else {
        i++;
      }
    }
  }

  if (bid1 + 1 == -1) {
    e_st.site = &xc_emlrtRSI;
    for (b_i = 0; b_i < 46; b_i++) {
      g_u[b_i] = h_u[b_i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&e_st, 46, m, &g_u[0]);
    emlrtAssign(&d_y, m);
    for (b_i = 0; b_i < 46; b_i++) {
      g_u[b_i] = h_u[b_i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&e_st, 46, m, &g_u[0]);
    emlrtAssign(&e_y, m);
    for (b_i = 0; b_i < 5; b_i++) {
      e_u[b_i] = i_u[b_i];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&e_st, 5, m, &e_u[0]);
    emlrtAssign(&f_y, m);
    f_st.site = &kd_emlrtRSI;
    error(&f_st, d_y, getString(&f_st, message(&f_st, e_y, f_y, &p_emlrtMCI),
           &p_emlrtMCI), &p_emlrtMCI);
  }

  if (bid1 + 1 == 0) {
    for (b_i = 0; b_i < 16; b_i++) {
      T1[b_i] = 0.0;
    }

    for (bid1 = 0; bid1 < 4; bid1++) {
      T1[bid1 + (bid1 << 2)] = 1.0;
    }
  } else {
    memcpy(&T1[0], &Ttree_data[emlrtDynamicBoundsCheckR2012b(bid1, 0,
            Ttree_size[1] - 1, &m_emlrtBCI, &c_st)].f1[0], sizeof(real_T) << 4);
  }

  d_st.site = &yb_emlrtRSI;
  e_st.site = &wc_emlrtRSI;
  bid1 = -2;
  f_st.site = &yc_emlrtRSI;
  g_st.site = &bd_emlrtRSI;
  obj_Length = moduleInstance->sysobj.TreeInternal.Base.NameInternal.Length;
  memcpy(&obj_Vector[0],
         &moduleInstance->sysobj.TreeInternal.Base.NameInternal.Vector[0], 200U *
         sizeof(char_T));
  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    b_i = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &g_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(b_i, 1, 200, &c_emlrtBCI, &g_st);
  }

  c_obj_Vector_size[0] = 1;
  c_obj_Vector_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)loop_ub * sizeof
           (char_T));
  }

  if (g_strcmp(obj_Vector_data, c_obj_Vector_size)) {
    bid1 = -1;
  } else {
    d = moduleInstance->sysobj.TreeInternal.NumBodies;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &b_emlrtRTEI, &e_st);
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i <= (int32_T)d - 1)) {
      f_st.site = &ad_emlrtRSI;
      obj = moduleInstance->
        sysobj.TreeInternal.Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 9,
        &k_emlrtBCI, &f_st)];
      g_st.site = &bd_emlrtRSI;
      obj_Length = obj->NameInternal.Length;
      for (b_i = 0; b_i < 200; b_i++) {
        obj_Vector[b_i] = obj->NameInternal.Vector[b_i];
      }

      if (obj_Length < 1.0) {
        loop_ub = 0;
      } else {
        b_i = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &g_st);
        loop_ub = emlrtDynamicBoundsCheckR2012b(b_i, 1, 200, &c_emlrtBCI, &g_st);
      }

      d_obj_Vector_size[0] = 1;
      d_obj_Vector_size[1] = loop_ub;
      if (loop_ub - 1 >= 0) {
        memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)loop_ub * sizeof
               (char_T));
      }

      if (g_strcmp(obj_Vector_data, d_obj_Vector_size)) {
        bid1 = i;
        exitg1 = true;
      } else {
        i++;
      }
    }
  }

  if (bid1 + 1 == -1) {
    e_st.site = &xc_emlrtRSI;
    for (b_i = 0; b_i < 46; b_i++) {
      g_u[b_i] = h_u[b_i];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(&e_st, 46, m, &g_u[0]);
    emlrtAssign(&g_y, m);
    for (b_i = 0; b_i < 46; b_i++) {
      g_u[b_i] = h_u[b_i];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&e_st, 46, m, &g_u[0]);
    emlrtAssign(&h_y, m);
    for (b_i = 0; b_i < 17; b_i++) {
      j_u[b_i] = k_u[b_i];
    }

    i_y = NULL;
    m = emlrtCreateCharArray(2, &iv9[0]);
    emlrtInitCharArrayR2013a(&e_st, 17, m, &j_u[0]);
    emlrtAssign(&i_y, m);
    f_st.site = &kd_emlrtRSI;
    error(&f_st, g_y, getString(&f_st, message(&f_st, h_y, i_y, &p_emlrtMCI),
           &p_emlrtMCI), &p_emlrtMCI);
  }

  if (bid1 + 1 == 0) {
    for (b_i = 0; b_i < 16; b_i++) {
      T2[b_i] = 0.0;
    }

    for (bid1 = 0; bid1 < 4; bid1++) {
      T2[bid1 + (bid1 << 2)] = 1.0;
    }
  } else {
    memcpy(&T2[0], &Ttree_data[emlrtDynamicBoundsCheckR2012b(bid1, 0,
            Ttree_size[1] - 1, &l_emlrtBCI, &c_st)].f1[0], sizeof(real_T) << 4);
  }

  for (b_i = 0; b_i < 3; b_i++) {
    for (bid1 = 0; bid1 < 3; bid1++) {
      R[bid1 + 3 * b_i] = T2[b_i + (bid1 << 2)];
    }
  }

  for (b_i = 0; b_i < 9; b_i++) {
    b_R[b_i] = -R[b_i];
  }

  for (b_i = 0; b_i < 3; b_i++) {
    c_R[b_i] = 0.0;
    for (bid1 = 0; bid1 < 3; bid1++) {
      d_R[bid1 + (b_i << 2)] = R[bid1 + 3 * b_i];
      c_R[b_i] += b_R[b_i + 3 * bid1] * T2[bid1 + 12];
    }

    d_R[b_i + 12] = c_R[b_i];
  }

  for (b_i = 0; b_i < 4; b_i++) {
    d_R[(b_i << 2) + 3] = (real_T)iv8[b_i];
  }

  for (b_i = 0; b_i < 4; b_i++) {
    for (bid1 = 0; bid1 < 4; bid1++) {
      c_y0[b_i + (bid1 << 2)] = 0.0;
      for (loop_ub = 0; loop_ub < 4; loop_ub++) {
        c_y0[b_i + (bid1 << 2)] += d_R[b_i + (loop_ub << 2)] * T1[loop_ub +
          (bid1 << 2)];
      }
    }
  }
}

static void RigidBodyTree_forwardKinematics(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree *obj, real_T qvec[7], cell_wrap
  Ttree_data[], int32_T Ttree_size[2])
{
  static const int32_T iv[2] = { 1, 39 };

  static const int32_T iv1[2] = { 1, 15 };

  static const int32_T iv2[2] = { 1, 45 };

  static const int32_T iv3[2] = { 1, 39 };

  static const int32_T iv5[2] = { 1, 15 };

  static const int32_T iv6[2] = { 1, 45 };

  static const int32_T iv7[2] = { 1, 35 };

  static const int32_T iv8[2] = { 1, 48 };

  static const int32_T iv9[2] = { 1, 5 };

  static char_T l_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c',
    't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static char_T h_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T f_u[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
    'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  static char_T j_u[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'a', 'x', 'a',
    'n', 'g', '2', 't', 'f', 'o', 'r', 'm', ':', 'i', 'n', 'c', 'o', 'r', 'r',
    'e', 'c', 't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static char_T g_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  static char_T n_u[5] = { 'a', 'x', 'a', 'n', 'g' };

  static int8_T iv4[4] = { 0, 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *m;
  const mxArray *y;
  robotics_manip_internal_RigidBody *body;
  real_T a[16];
  real_T b_I[16];
  real_T c_b[16];
  real_T d_b[16];
  real_T dv[9];
  real_T dv1[9];
  real_T result_data[4];
  real_T v[3];
  real_T k;
  real_T n;
  real_T pnum;
  real_T sth;
  int32_T switch_expression_size[2];
  int32_T b_i;
  int32_T b_k;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T loop_ub;
  char_T obj_Vector[200];
  char_T switch_expression_data[200];
  char_T k_u[48];
  char_T e_u[45];
  char_T c_u[39];
  char_T i_u[35];
  char_T d_u[15];
  char_T m_u[5];
  int8_T c_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &cc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  n = RigidBodyTree_assertUpperBoundOnNumBodies(&st, obj);
  st.site = &dc_emlrtRSI;
  repmat(&st, n, Ttree_data, Ttree_size);
  k = 1.0;
  i = (int32_T)n - 1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, n, mxDOUBLE_CLASS, (int32_T)n,
    &c_emlrtRTEI, (emlrtConstCTX)sp);
  for (b_i = 0; b_i <= i; b_i++) {
    body = obj->Bodies[b_i];
    pnum = body->JointInternal.PositionNumber;
    n = (k + pnum) - 1.0;
    if (k > n) {
      i1 = 0;
      i2 = 0;
    } else {
      i1 = (int32_T)emlrtIntegerCheckR2012b(k, &i_emlrtDCI, (emlrtConstCTX)sp);
      i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, 7, &n_emlrtBCI, (emlrtConstCTX)
        sp) - 1;
      i2 = (int32_T)emlrtIntegerCheckR2012b(n, &j_emlrtDCI, (emlrtConstCTX)sp);
      i2 = emlrtDynamicBoundsCheckR2012b(i2, 1, 7, &o_emlrtBCI, (emlrtConstCTX)
        sp);
    }

    st.site = &ec_emlrtRSI;
    for (loop_ub = 0; loop_ub < 16; loop_ub++) {
      a[loop_ub] = body->JointInternal.JointToParentTransform[loop_ub];
    }

    b_st.site = &gc_emlrtRSI;
    c_st.site = &hc_emlrtRSI;
    d_st.site = &fb_emlrtRSI;
    n = body->JointInternal.TypeInternal.Length;
    for (loop_ub = 0; loop_ub < 200; loop_ub++) {
      obj_Vector[loop_ub] = body->JointInternal.TypeInternal.Vector[loop_ub];
    }

    if (n < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(n, &c_emlrtDCI, &d_st);
      loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &c_emlrtBCI,
        &d_st);
    }

    switch_expression_size[0] = 1;
    switch_expression_size[1] = loop_ub;
    if (loop_ub - 1 >= 0) {
      memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
             sizeof(char_T));
    }

    if (b_strcmp(switch_expression_data, switch_expression_size)) {
      loop_ub = 0;
    } else if (c_strcmp(switch_expression_data, switch_expression_size)) {
      loop_ub = 1;
    } else if (d_strcmp(switch_expression_data, switch_expression_size)) {
      loop_ub = 2;
    } else {
      loop_ub = -1;
    }

    switch (loop_ub) {
     case 0:
      c_st.site = &ic_emlrtRSI;
      rigidBodyJoint_get_JointAxis(&c_st, &body->JointInternal, v);
      if ((i2 - i1 == 1) || (i2 - i1 == 0)) {
      } else {
        for (loop_ub = 0; loop_ub < 39; loop_ub++) {
          c_u[loop_ub] = f_u[loop_ub];
        }

        y = NULL;
        m = emlrtCreateCharArray(2, &iv[0]);
        emlrtInitCharArrayR2013a(&b_st, 39, m, &c_u[0]);
        emlrtAssign(&y, m);
        for (loop_ub = 0; loop_ub < 39; loop_ub++) {
          c_u[loop_ub] = f_u[loop_ub];
        }

        d_y = NULL;
        m = emlrtCreateCharArray(2, &iv3[0]);
        emlrtInitCharArrayR2013a(&b_st, 39, m, &c_u[0]);
        emlrtAssign(&d_y, m);
        c_st.site = &sd_emlrtRSI;
        error(&c_st, y, getString(&c_st, b_message(&c_st, d_y, &j_emlrtMCI),
               &j_emlrtMCI), &j_emlrtMCI);
      }

      if (i2 - i1 != 0) {
        loop_ub = 1;
      } else {
        loop_ub = 0;
      }

      for (i2 = 0; i2 < 3; i2++) {
        result_data[i2] = v[i2];
      }

      for (i2 = 0; i2 < loop_ub; i2++) {
        result_data[3] = qvec[i1];
      }

      c_st.site = &jc_emlrtRSI;
      d_st.site = &oc_emlrtRSI;
      e_st.site = &qc_emlrtRSI;
      f_st.site = &bc_emlrtRSI;
      if (loop_ub + 3 != 4) {
        for (i1 = 0; i1 < 35; i1++) {
          i_u[i1] = j_u[i1];
        }

        g_y = NULL;
        m = emlrtCreateCharArray(2, &iv7[0]);
        emlrtInitCharArrayR2013a(&f_st, 35, m, &i_u[0]);
        emlrtAssign(&g_y, m);
        for (i1 = 0; i1 < 48; i1++) {
          k_u[i1] = l_u[i1];
        }

        h_y = NULL;
        m = emlrtCreateCharArray(2, &iv8[0]);
        emlrtInitCharArrayR2013a(&f_st, 48, m, &k_u[0]);
        emlrtAssign(&h_y, m);
        for (i1 = 0; i1 < 5; i1++) {
          m_u[i1] = n_u[i1];
        }

        i_y = NULL;
        m = emlrtCreateCharArray(2, &iv9[0]);
        emlrtInitCharArrayR2013a(&f_st, 5, m, &m_u[0]);
        emlrtAssign(&i_y, m);
        j_y = NULL;
        m = emlrtCreateDoubleScalar(4.0);
        emlrtAssign(&j_y, m);
        g_st.site = &rd_emlrtRSI;
        error(&g_st, g_y, getString(&g_st, c_message(&g_st, h_y, i_y, j_y,
                &k_emlrtMCI), &k_emlrtMCI), &k_emlrtMCI);
      }

      d_st.site = &pc_emlrtRSI;
      e_st.site = &rc_emlrtRSI;
      f_st.site = &sc_emlrtRSI;
      for (b_k = 0; b_k < 3; b_k++) {
        n = result_data[b_k];
        v[b_k] = n * n;
      }

      n = sumColumnB(v);
      g_st.site = &tc_emlrtRSI;
      b_sqrt(&g_st, &n);
      n = 1.0 / n;
      for (b_k = 0; b_k < 3; b_k++) {
        v[b_k] = result_data[b_k] * n;
      }

      emlrtDynamicBoundsCheckR2012b(4, 1, loop_ub + 3, &p_emlrtBCI, &e_st);
      n = muDoubleScalarCos(result_data[3]);
      sth = muDoubleScalarSin(result_data[3]);
      for (i1 = 0; i1 < 16; i1++) {
        c_b[i1] = 0.0;
      }

      cat(v[0] * v[0] * (1.0 - n) + n, v[0] * v[1] * (1.0 - n) - v[2] * sth, v[0]
          * v[2] * (1.0 - n) + v[1] * sth, v[0] * v[1] * (1.0 - n) + v[2] * sth,
          v[1] * v[1] * (1.0 - n) + n, v[1] * v[2] * (1.0 - n) - v[0] * sth, v[0]
          * v[2] * (1.0 - n) - v[1] * sth, v[1] * v[2] * (1.0 - n) + v[0] * sth,
          v[2] * v[2] * (1.0 - n) + n, dv);
      permute(dv, dv1);
      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          c_b[i2 + (i1 << 2)] = dv1[i2 + 3 * i1];
        }
      }

      c_b[15] = 1.0;
      break;

     case 1:
      c_st.site = &kc_emlrtRSI;
      rigidBodyJoint_get_JointAxis(&c_st, &body->JointInternal, v);
      c_st.site = &mc_emlrtRSI;
      if (i2 - i1 != 1) {
        if (i2 - i1 == 1) {
          for (i2 = 0; i2 < 45; i2++) {
            e_u[i2] = h_u[i2];
          }

          c_y = NULL;
          m = emlrtCreateCharArray(2, &iv2[0]);
          emlrtInitCharArrayR2013a(&c_st, 45, m, &e_u[0]);
          emlrtAssign(&c_y, m);
          for (i2 = 0; i2 < 45; i2++) {
            e_u[i2] = h_u[i2];
          }

          f_y = NULL;
          m = emlrtCreateCharArray(2, &iv6[0]);
          emlrtInitCharArrayR2013a(&c_st, 45, m, &e_u[0]);
          emlrtAssign(&f_y, m);
          d_st.site = &pd_emlrtRSI;
          error(&d_st, c_y, getString(&d_st, b_message(&d_st, f_y, &n_emlrtMCI),
                 &n_emlrtMCI), &n_emlrtMCI);
        } else {
          for (i2 = 0; i2 < 15; i2++) {
            d_u[i2] = g_u[i2];
          }

          b_y = NULL;
          m = emlrtCreateCharArray(2, &iv1[0]);
          emlrtInitCharArrayR2013a(&c_st, 15, m, &d_u[0]);
          emlrtAssign(&b_y, m);
          for (i2 = 0; i2 < 15; i2++) {
            d_u[i2] = g_u[i2];
          }

          e_y = NULL;
          m = emlrtCreateCharArray(2, &iv5[0]);
          emlrtInitCharArrayR2013a(&c_st, 15, m, &d_u[0]);
          emlrtAssign(&e_y, m);
          d_st.site = &qd_emlrtRSI;
          error(&d_st, b_y, getString(&d_st, b_message(&d_st, e_y, &m_emlrtMCI),
                 &m_emlrtMCI), &m_emlrtMCI);
        }
      }

      for (i2 = 0; i2 < 9; i2++) {
        c_I[i2] = 0;
      }

      for (b_k = 0; b_k < 3; b_k++) {
        c_I[b_k + 3 * b_k] = 1;
      }

      for (i2 = 0; i2 < 3; i2++) {
        for (loop_ub = 0; loop_ub < 3; loop_ub++) {
          c_b[loop_ub + (i2 << 2)] = (real_T)c_I[loop_ub + 3 * i2];
        }

        c_b[i2 + 12] = v[i2] * qvec[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        c_b[(i1 << 2) + 3] = (real_T)iv4[i1];
      }
      break;

     case 2:
      loop_ub = i2 - i1;
      for (b_k = 0; b_k < 3; b_k++) {
        emlrtDynamicBoundsCheckR2012b(b_k + 5, 1, loop_ub, &r_emlrtBCI, &b_st);
      }

      for (loop_ub = 0; loop_ub < 16; loop_ub++) {
        b_I[loop_ub] = 0.0;
      }

      for (b_k = 0; b_k < 4; b_k++) {
        b_I[b_k + (b_k << 2)] = 1.0;
      }

      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        b_I[loop_ub + 12] = qvec[(i1 + loop_ub) + 4];
      }

      i2 -= i1;
      for (loop_ub = 0; loop_ub < 4; loop_ub++) {
        result_data[loop_ub] = qvec[(i1 + emlrtDynamicBoundsCheckR2012b(loop_ub
          + 1, 1, i2, &t_emlrtBCI, &b_st)) - 1];
      }

      c_st.site = &lc_emlrtRSI;
      quat2tform(&c_st, result_data, d_b);
      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          c_b[i1 + (i2 << 2)] = 0.0;
          for (loop_ub = 0; loop_ub < 4; loop_ub++) {
            c_b[i1 + (i2 << 2)] += b_I[i1 + (loop_ub << 2)] * d_b[loop_ub + (i2 <<
              2)];
          }
        }
      }
      break;

     default:
      for (i1 = 0; i1 < 16; i1++) {
        c_b[i1] = 0.0;
      }

      for (b_k = 0; b_k < 4; b_k++) {
        c_b[b_k + (b_k << 2)] = 1.0;
      }
      break;
    }

    for (i1 = 0; i1 < 16; i1++) {
      d_b[i1] = body->JointInternal.ChildToJointTransform[i1];
    }

    for (i1 = 0; i1 < 4; i1++) {
      for (i2 = 0; i2 < 4; i2++) {
        b_I[i1 + (i2 << 2)] = 0.0;
        for (loop_ub = 0; loop_ub < 4; loop_ub++) {
          b_I[i1 + (i2 << 2)] += a[i1 + (loop_ub << 2)] * c_b[loop_ub + (i2 << 2)];
        }
      }
    }

    for (i1 = 0; i1 < 4; i1++) {
      for (i2 = 0; i2 < 4; i2++) {
        Ttree_data[emlrtDynamicBoundsCheckR2012b(b_i, 0, Ttree_size[1] - 1,
          &s_emlrtBCI, (emlrtConstCTX)sp)].f1[i1 + (i2 << 2)] = 0.0;
        for (loop_ub = 0; loop_ub < 4; loop_ub++) {
          Ttree_data[emlrtDynamicBoundsCheckR2012b(b_i, 0, Ttree_size[1] - 1,
            &s_emlrtBCI, (emlrtConstCTX)sp)].f1[i1 + (i2 << 2)] =
            Ttree_data[emlrtDynamicBoundsCheckR2012b(b_i, 0, Ttree_size[1] - 1,
            &s_emlrtBCI, (emlrtConstCTX)sp)].f1[i1 + (i2 << 2)] + b_I[i1 +
            (loop_ub << 2)] * d_b[loop_ub + (i2 << 2)];
        }
      }
    }

    k += pnum;
    if (body->ParentIndex > 0.0) {
      for (i1 = 0; i1 < 16; i1++) {
        i2 = (int32_T)emlrtIntegerCheckR2012b(body->ParentIndex, &k_emlrtDCI,
          (emlrtConstCTX)sp) - 1;
        a[i1] = Ttree_data[emlrtDynamicBoundsCheckR2012b(i2, 0, Ttree_size[1] -
          1, &u_emlrtBCI, (emlrtConstCTX)sp)].f1[i1];
      }

      emlrtDynamicBoundsCheckR2012b(b_i, 0, Ttree_size[1] - 1, &q_emlrtBCI,
        (emlrtConstCTX)sp);
      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          b_I[i1 + (i2 << 2)] = 0.0;
          for (loop_ub = 0; loop_ub < 4; loop_ub++) {
            b_I[i1 + (i2 << 2)] += a[i1 + (loop_ub << 2)] * Ttree_data[b_i]
              .f1[loop_ub + (i2 << 2)];
          }
        }
      }

      memcpy(&Ttree_data[emlrtDynamicBoundsCheckR2012b(b_i, 0, Ttree_size[1] - 1,
              &v_emlrtBCI, (emlrtConstCTX)sp)].f1[0], &b_I[0], sizeof(real_T) <<
             4);
    }
  }
}

static real_T RigidBodyTree_assertUpperBoundOnNumBodies(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree *obj)
{
  static const int32_T iv[2] = { 1, 30 };

  static const int32_T iv1[2] = { 1, 30 };

  static char_T d_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T nb;
  int32_T i;
  char_T c_u[30];
  st.prev = sp;
  st.tls = sp->tls;
  nb = obj->NumBodies;
  if (!(nb <= 10.0)) {
    for (i = 0; i < 30; i++) {
      c_u[i] = d_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 30, m, &c_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 30; i++) {
      c_u[i] = d_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 30, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &od_emlrtRSI;
    error(&st, y, getString(&st, b_message(&st, b_y, &g_emlrtMCI), &g_emlrtMCI),
          &g_emlrtMCI);
  }

  return nb;
}

static void repmat(const emlrtStack *sp, real_T varargin_2, cell_wrap b_data[],
                   int32_T b_size[2])
{
  static const int32_T iv1[2] = { 1, 28 };

  static const int32_T iv2[2] = { 1, 28 };

  static char_T d_u[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I', 'n',
    'p', 'u', 't' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  int32_T i1;
  int32_T jtilecol;
  char_T c_u[28];
  int8_T t0_f1[16];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (i = 0; i < 16; i++) {
    t0_f1[i] = iv[i];
  }

  st.site = &fc_emlrtRSI;
  if ((varargin_2 != muDoubleScalarFloor(varargin_2)) || muDoubleScalarIsInf
      (varargin_2) || (varargin_2 < -2.147483648E+9)) {
    for (i = 0; i < 28; i++) {
      c_u[i] = d_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 28, m, &c_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 28; i++) {
      c_u[i] = d_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 28, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    c_y = NULL;
    m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)emlrtMxGetData(m) = MIN_int32_T;
    emlrtAssign(&c_y, m);
    d_y = NULL;
    m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)emlrtMxGetData(m) = MAX_int32_T;
    emlrtAssign(&d_y, m);
    b_st.site = &nd_emlrtRSI;
    error(&b_st, y, getString(&b_st, c_message(&b_st, b_y, c_y, d_y, &i_emlrtMCI),
           &i_emlrtMCI), &i_emlrtMCI);
  }

  emlrtNonNegativeCheckR2012b(varargin_2, &l_emlrtDCI, (emlrtConstCTX)sp);
  emlrtNonNegativeCheckR2012b(varargin_2, &l_emlrtDCI, (emlrtConstCTX)sp);
  b_size[0] = 1;
  b_size[1] = (int32_T)varargin_2;
  if ((int32_T)varargin_2 != 0) {
    i = (uint8_T)(int32_T)varargin_2 - 1;
    for (jtilecol = 0; jtilecol <= i; jtilecol++) {
      for (i1 = 0; i1 < 16; i1++) {
        b_data[jtilecol].f1[i1] = (real_T)t0_f1[i1];
      }
    }
  }
}

static void rigidBodyJoint_get_JointAxis(const emlrtStack *sp, rigidBodyJoint
  *obj, real_T ax[3])
{
  static char_T cv1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static char_T cv[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  emlrtStack b_st;
  emlrtStack st;
  real_T obj_Length;
  int32_T exitg1;
  int32_T kstr;
  char_T obj_Vector[200];
  boolean_T b_bool;
  boolean_T guard1;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &nc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &fb_emlrtRSI;
  obj_Length = obj->TypeInternal.Length;
  for (kstr = 0; kstr < 200; kstr++) {
    obj_Vector[kstr] = obj->TypeInternal.Vector[kstr];
  }

  if (obj_Length < 1.0) {
    kstr = 0;
  } else {
    kstr = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &b_st);
    kstr = emlrtDynamicBoundsCheckR2012b(kstr, 1, 200, &c_emlrtBCI, &b_st);
  }

  b_bool = false;
  if (kstr != 8) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 8) {
        if (obj_Vector[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  guard1 = false;
  if (b_bool) {
    guard1 = true;
  } else {
    st.site = &nc_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    obj_Length = obj->TypeInternal.Length;
    for (kstr = 0; kstr < 200; kstr++) {
      obj_Vector[kstr] = obj->TypeInternal.Vector[kstr];
    }

    if (obj_Length < 1.0) {
      kstr = 0;
    } else {
      kstr = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &c_emlrtDCI, &b_st);
      kstr = emlrtDynamicBoundsCheckR2012b(kstr, 1, 200, &c_emlrtBCI, &b_st);
    }

    b_bool = false;
    if (kstr != 9) {
    } else {
      kstr = 1;
      do {
        exitg1 = 0;
        if (kstr - 1 < 9) {
          if (obj_Vector[kstr - 1] != cv1[kstr - 1]) {
            exitg1 = 1;
          } else {
            kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      guard1 = true;
    } else {
      for (kstr = 0; kstr < 3; kstr++) {
        ax[kstr] = rtNaN;
      }
    }
  }

  if (guard1) {
    for (kstr = 0; kstr < 3; kstr++) {
      ax[kstr] = obj->JointAxisInternal[kstr];
    }
  }
}

static real_T sumColumnB(real_T x[3])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 2; k++) {
    y += x[k + 1];
  }

  return y;
}

static void cat(real_T varargin_1, real_T varargin_2, real_T varargin_3, real_T
                varargin_4, real_T varargin_5, real_T varargin_6, real_T
                varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9])
{
  y[0] = varargin_1;
  y[1] = varargin_2;
  y[2] = varargin_3;
  y[3] = varargin_4;
  y[4] = varargin_5;
  y[5] = varargin_6;
  y[6] = varargin_7;
  y[7] = varargin_8;
  y[8] = varargin_9;
}

static void permute(real_T a[9], real_T c_b[9])
{
  int32_T b_k;
  int32_T k;
  for (k = 0; k < 3; k++) {
    for (b_k = 0; b_k < 3; b_k++) {
      c_b[k + 3 * b_k] = a[b_k + 3 * k];
    }
  }
}

static void quat2tform(const emlrtStack *sp, real_T q[4], real_T H[16])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T dv[9];
  real_T dv1[9];
  real_T normRowMatrix[4];
  real_T b_q;
  int32_T i;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &uc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &vc_emlrtRSI;
  for (k = 0; k < 4; k++) {
    b_q = q[k];
    normRowMatrix[k] = b_q * b_q;
  }

  b_q = b_sumColumnB(normRowMatrix);
  c_st.site = &tc_emlrtRSI;
  b_sqrt(&c_st, &b_q);
  b_q = 1.0 / b_q;
  for (k = 0; k < 4; k++) {
    normRowMatrix[k] = q[k] * b_q;
  }

  for (k = 0; k < 16; k++) {
    H[k] = 0.0;
  }

  cat(1.0 - 2.0 * (normRowMatrix[2] * normRowMatrix[2] + normRowMatrix[3] *
                   normRowMatrix[3]), 2.0 * (normRowMatrix[1] * normRowMatrix[2]
       - normRowMatrix[0] * normRowMatrix[3]), 2.0 * (normRowMatrix[1] *
       normRowMatrix[3] + normRowMatrix[0] * normRowMatrix[2]), 2.0 *
      (normRowMatrix[1] * normRowMatrix[2] + normRowMatrix[0] * normRowMatrix[3]),
      1.0 - 2.0 * (normRowMatrix[1] * normRowMatrix[1] + normRowMatrix[3] *
                   normRowMatrix[3]), 2.0 * (normRowMatrix[2] * normRowMatrix[3]
       - normRowMatrix[0] * normRowMatrix[1]), 2.0 * (normRowMatrix[1] *
       normRowMatrix[3] - normRowMatrix[0] * normRowMatrix[2]), 2.0 *
      (normRowMatrix[2] * normRowMatrix[3] + normRowMatrix[0] * normRowMatrix[1]),
      1.0 - 2.0 * (normRowMatrix[1] * normRowMatrix[1] + normRowMatrix[2] *
                   normRowMatrix[2]), dv);
  permute(dv, dv1);
  for (k = 0; k < 3; k++) {
    for (i = 0; i < 3; i++) {
      H[i + (k << 2)] = dv1[i + 3 * k];
    }
  }

  H[15] = 1.0;
}

static real_T b_sumColumnB(real_T x[4])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 3; k++) {
    y += x[k + 1];
  }

  return y;
}

static boolean_T f_strcmp(char_T a_data[], int32_T a_size[2])
{
  static char_T cv[5] = { 'w', 'o', 'r', 'l', 'd' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (a_size[1] != 5) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 5) {
        if (a_data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static boolean_T g_strcmp(char_T a_data[], int32_T a_size[2])
{
  static char_T cv[17] = { 'i', 'i', 'w', 'a', '_', 'l', 'i', 'n', 'k', '_', 'e',
    'e', '_', 'k', 'u', 'k', 'a' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (a_size[1] != 17) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 17) {
        if (a_data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void handle_matlabCodegenDestructor(const emlrtStack *sp,
  robotics_manip_internal_CollisionSet *obj)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  robotics_manip_internal_CollisionGeometry expl_temp;
  robotics_manip_internal_CollisionGeometry r;
  real_T d;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    st.site = &cd_emlrtRSI;
    d = obj->Size;
    i = (int32_T)d - 1;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &d_emlrtRTEI, &st);
    for (b_i = 0; b_i <= i; b_i++) {
      b_st.site = &dd_emlrtRSI;
      i1 = obj->CollisionGeometries.size[1] - 1;
      r = obj->CollisionGeometries.vector.data[emlrtDynamicBoundsCheckR2012b(b_i,
        0, i1, &x_emlrtBCI, &b_st)];
      c_st.site = &ed_emlrtRSI;
      collisioncodegen_destructGeometry(&r.CollisionPrimitive);
      i1 = obj->CollisionGeometries.size[1] - 1;
      expl_temp.CollisionPrimitive = r.CollisionPrimitive;
      obj->CollisionGeometries.vector.data[emlrtDynamicBoundsCheckR2012b(b_i, 0,
        i1, &w_emlrtBCI, &st)] = expl_temp;
    }
  }
}

static const mxArray *message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 2, &pArrays[0],
    "message", true, location);
}

static const mxArray *getString(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 1, &pArray, "getString",
    true, location);
}

static void error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, NULL, 2, &pArrays[0], "error",
                        true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 1, &pArray, "message",
    true, location);
}

static const mxArray *c_message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 3, &pArrays[0],
    "message", true, location);
}

static real_T eml_rand_mt19937ar(const emlrtStack *sp, uint32_T d_state[625])
{
  static const int32_T iv[2] = { 1, 37 };

  static const int32_T iv1[2] = { 1, 37 };

  static char_T e_u[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  real_T r;
  int32_T exitg1;
  int32_T k;
  int32_T kk;
  uint32_T c_u[2];
  uint32_T mti;
  uint32_T y;
  char_T d_u[37];
  boolean_T exitg2;
  boolean_T isvalid;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &p_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on:        */
  /*                                                                         */
  /*  A C-program for MT19937, with initialization improved 2002/1/26.       */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto.                        */
  /*                                                                         */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
  /*  All rights reserved.                                                   */
  /*                                                                         */
  /*  Redistribution and use in source and binary forms, with or without     */
  /*  modification, are permitted provided that the following conditions     */
  /*  are met:                                                               */
  /*                                                                         */
  /*    1. Redistributions of source code must retain the above copyright    */
  /*       notice, this list of conditions and the following disclaimer.     */
  /*                                                                         */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer      */
  /*       in the documentation and/or other materials provided with the     */
  /*       distribution.                                                     */
  /*                                                                         */
  /*    3. The names of its contributors may not be used to endorse or       */
  /*       promote products derived from this software without specific      */
  /*       prior written permission.                                         */
  /*                                                                         */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
  /*                                                                         */
  /* =============================   END   ================================= */
  do {
    exitg1 = 0;
    for (k = 0; k < 2; k++) {
      mti = d_state[624] + 1U;
      if (mti >= 625U) {
        for (kk = 0; kk < 227; kk++) {
          y = (d_state[kk] & 2147483648U) | (d_state[kk + 1] & 2147483647U);
          if ((y & 1U) == 0U) {
            y >>= 1U;
          } else {
            y = y >> 1U ^ 2567483615U;
          }

          d_state[kk] = d_state[kk + 397] ^ y;
        }

        for (kk = 0; kk < 396; kk++) {
          y = (d_state[kk + 227] & 2147483648U) | (d_state[kk + 228] &
            2147483647U);
          if ((y & 1U) == 0U) {
            y >>= 1U;
          } else {
            y = y >> 1U ^ 2567483615U;
          }

          d_state[kk + 227] = d_state[kk] ^ y;
        }

        y = (d_state[623] & 2147483648U) | (d_state[0] & 2147483647U);
        if ((y & 1U) == 0U) {
          y >>= 1U;
        } else {
          y = y >> 1U ^ 2567483615U;
        }

        d_state[623] = d_state[396] ^ y;
        mti = 1U;
      }

      y = d_state[(int32_T)mti - 1];
      d_state[624] = mti;
      y ^= y >> 11U;
      y ^= y << 7U & 2636928640U;
      y ^= y << 15U & 4022730752U;
      y ^= y >> 18U;
      c_u[k] = y;
    }

    r = 1.1102230246251565E-16 * ((real_T)(c_u[0] >> 5U) * 6.7108864E+7 +
      (real_T)(c_u[1] >> 6U));
    if (r == 0.0) {
      if ((d_state[624] >= 1U) && (d_state[624] < 625U)) {
        isvalid = true;
      } else {
        isvalid = false;
      }

      if (isvalid) {
        isvalid = false;
        k = 0;
        exitg2 = false;
        while ((!exitg2) && (k + 1 < 625)) {
          if (d_state[k] == 0U) {
            k++;
          } else {
            isvalid = true;
            exitg2 = true;
          }
        }
      }

      if (!isvalid) {
        for (k = 0; k < 37; k++) {
          d_u[k] = e_u[k];
        }

        b_y = NULL;
        m = emlrtCreateCharArray(2, &iv[0]);
        emlrtInitCharArrayR2013a(&st, 37, m, &d_u[0]);
        emlrtAssign(&b_y, m);
        for (k = 0; k < 37; k++) {
          d_u[k] = e_u[k];
        }

        c_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(&st, 37, m, &d_u[0]);
        emlrtAssign(&c_y, m);
        b_st.site = &md_emlrtRSI;
        error(&b_st, b_y, getString(&b_st, b_message(&b_st, c_y, &b_emlrtMCI),
               &b_emlrtMCI), &b_emlrtMCI);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return r;
}

static void RigidBodyTree_validateConfiguration(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree *obj, real_T Q[7])
{
  static const int32_T iv[2] = { 1, 52 };

  static const int32_T iv1[2] = { 1, 46 };

  static const int32_T iv10[2] = { 1, 25 };

  static const int32_T iv2[2] = { 1, 52 };

  static const int32_T iv3[2] = { 1, 38 };

  static const int32_T iv4[2] = { 1, 25 };

  static const int32_T iv5[2] = { 1, 46 };

  static const int32_T iv6[2] = { 1, 51 };

  static const int32_T iv7[2] = { 1, 38 };

  static const int32_T iv8[2] = { 1, 25 };

  static const int32_T iv9[2] = { 1, 45 };

  static char_T d_u[52] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'F', 'u',
    'n', 'c', 't', 'i', 'o', 'n', 'I', 'n', 'p', 'u', 't', 's', ':', 'e', 'x',
    'p', 'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T g_u[52] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'F', 'u',
    'n', 'c', 't', 'i', 'o', 'n', 'I', 'n', 'p', 'u', 't', 's', ':', 'e', 'x',
    'p', 'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T n_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'F', 'u',
    'n', 'c', 't', 'i', 'o', 'n', 'I', 'n', 'p', 'u', 't', 's', ':', 'i', 'n',
    'c', 'o', 'r', 'r', 'e', 'c', 't', 'S', 'i', 'z', 'e' };

  static char_T f_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T l_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T p_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c',
    't', 'S', 'i', 'z', 'e' };

  static char_T j_u[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 's',
    ':', 'b', 'a', 'd', 'S', 'i', 'z', 'e', 'A', 'r', 'r', 'a', 'y' };

  static char_T k_u[25] = { 'j', 'o', 'i', 'n', 't', ' ', 'p', 'o', 's', 'i',
    't', 'i', 'o', 'n', ' ', 'v', 'e', 'c', 't', 'o', 'r', ' ', '(', 'q', ')' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *m;
  const mxArray *y;
  real_T sz[2];
  real_T b_sz;
  int32_T i;
  int32_T k;
  char_T c_u[52];
  char_T m_u[51];
  char_T e_u[46];
  char_T o_u[45];
  char_T h_u[38];
  char_T i_u[25];
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  sz[0] = obj->PositionNumber;
  sz[1] = 1.0;
  st.site = &ac_emlrtRSI;
  b_st.site = &bc_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 7)) {
    if (!muDoubleScalarIsNaN(Q[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (i = 0; i < 52; i++) {
      c_u[i] = d_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 52, m, &c_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 46; i++) {
      e_u[i] = f_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 46, m, &e_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 25; i++) {
      i_u[i] = k_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&b_st, 25, m, &i_u[0]);
    emlrtAssign(&e_y, m);
    c_st.site = &jd_emlrtRSI;
    error(&c_st, y, getString(&c_st, message(&c_st, b_y, e_y, &c_emlrtMCI),
           &c_emlrtMCI), &c_emlrtMCI);
  }

  b_st.site = &bc_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 7)) {
    if ((!muDoubleScalarIsInf(Q[k])) && (!muDoubleScalarIsNaN(Q[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (i = 0; i < 52; i++) {
      c_u[i] = g_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&b_st, 52, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 46; i++) {
      e_u[i] = l_u[i];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&b_st, 46, m, &e_u[0]);
    emlrtAssign(&f_y, m);
    for (i = 0; i < 25; i++) {
      i_u[i] = k_u[i];
    }

    i_y = NULL;
    m = emlrtCreateCharArray(2, &iv8[0]);
    emlrtInitCharArrayR2013a(&b_st, 25, m, &i_u[0]);
    emlrtAssign(&i_y, m);
    c_st.site = &id_emlrtRSI;
    error(&c_st, c_y, getString(&c_st, message(&c_st, f_y, i_y, &d_emlrtMCI),
           &d_emlrtMCI), &d_emlrtMCI);
  }

  b_st.site = &bc_emlrtRSI;
  p = true;
  for (k = 0; k < 2; k++) {
    b_sz = sz[k];
    if (p && ((b_sz != b_sz) || ((!muDoubleScalarIsInf(b_sz)) && (b_sz >= 0.0) &&
          (b_sz == muDoubleScalarFloor(b_sz))))) {
      p = true;
    } else {
      p = false;
    }
  }

  if (!p) {
    for (i = 0; i < 38; i++) {
      h_u[i] = j_u[i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&b_st, 38, m, &h_u[0]);
    emlrtAssign(&d_y, m);
    for (i = 0; i < 38; i++) {
      h_u[i] = j_u[i];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&b_st, 38, m, &h_u[0]);
    emlrtAssign(&h_y, m);
    c_st.site = &ld_emlrtRSI;
    error(&c_st, d_y, getString(&c_st, b_message(&c_st, h_y, &e_emlrtMCI),
           &e_emlrtMCI), &e_emlrtMCI);
  }

  p = true;
  for (k = 0; k < 2; k++) {
    b_sz = sz[k];
    if (p) {
      if (b_sz != b_sz) {
        p = true;
      } else {
        if (k + 1 <= 1) {
          i = 7;
        } else {
          i = 1;
        }

        if (b_sz == (real_T)i) {
          p = true;
        } else {
          p = false;
        }
      }
    } else {
      p = false;
    }
  }

  if (!p) {
    for (i = 0; i < 51; i++) {
      m_u[i] = n_u[i];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(&b_st, 51, m, &m_u[0]);
    emlrtAssign(&g_y, m);
    for (i = 0; i < 45; i++) {
      o_u[i] = p_u[i];
    }

    j_y = NULL;
    m = emlrtCreateCharArray(2, &iv9[0]);
    emlrtInitCharArrayR2013a(&b_st, 45, m, &o_u[0]);
    emlrtAssign(&j_y, m);
    for (i = 0; i < 25; i++) {
      i_u[i] = k_u[i];
    }

    k_y = NULL;
    m = emlrtCreateCharArray(2, &iv10[0]);
    emlrtInitCharArrayR2013a(&b_st, 25, m, &i_u[0]);
    emlrtAssign(&k_y, m);
    c_st.site = &hd_emlrtRSI;
    error(&c_st, g_y, getString(&c_st, message(&c_st, j_y, k_y, &f_emlrtMCI),
           &f_emlrtMCI), &f_emlrtMCI);
  }
}

static void b_sqrt(const emlrtStack *sp, real_T *x)
{
  static const int32_T iv[2] = { 1, 30 };

  static const int32_T iv1[2] = { 1, 30 };

  static const int32_T iv2[2] = { 1, 4 };

  static char_T d_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  static char_T f_u[4] = { 's', 'q', 'r', 't' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[30];
  char_T e_u[4];
  st.prev = sp;
  st.tls = sp->tls;
  if (*x < 0.0) {
    for (i = 0; i < 30; i++) {
      c_u[i] = d_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 30, m, &c_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 30; i++) {
      c_u[i] = d_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 30, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 4; i++) {
      e_u[i] = f_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 4, m, &e_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &gd_emlrtRSI;
    error(&st, y, getString(&st, message(&st, b_y, c_y, &l_emlrtMCI),
           &l_emlrtMCI), &l_emlrtMCI);
  }

  *x = muDoubleScalarSqrt(*x);
}

static void array_robotics_manip_internal_C(coder_array_robotics_manip_inte
  *coderArray, int32_T size0, int32_T size1)
{
  robotics_manip_internal_CollisionGeometry *newData;
  int32_T newCapacity;
  int32_T newNumel;
  coderArray->size[0] = size0;
  coderArray->size[1] = size1;
  newNumel = coderArray->size[0] * coderArray->size[1];
  if (newNumel > coderArray->vector.allocated) {
    newCapacity = coderArray->vector.allocated;
    if (newCapacity < 16) {
      newCapacity = 16;
    }

    while (newCapacity < newNumel) {
      if (newCapacity > 1073741823) {
        newCapacity = MAX_int32_T;
      } else {
        newCapacity <<= 1;
      }
    }

    newData = (robotics_manip_internal_CollisionGeometry *)emlrtMallocMex(sizeof
      (robotics_manip_internal_CollisionGeometry) * (uint32_T)newCapacity);
    if (coderArray->vector.data != NULL) {
      memcpy(newData, coderArray->vector.data, sizeof
             (robotics_manip_internal_CollisionGeometry) * (uint32_T)
             coderArray->vector.numel);
      if (coderArray->vector.owner) {
        emlrtFreeMex(coderArray->vector.data);
      }
    }

    coderArray->vector.data = newData;
    coderArray->vector.allocated = newCapacity;
    coderArray->vector.owner = true;
  }

  coderArray->vector.numel = newNumel;
}

static void b_array_robotics_manip_internal_C(coder_array_robotics_manip_inte
  *coderArray)
{
  coderArray->vector.data = (robotics_manip_internal_CollisionGeometry *)NULL;
  coderArray->vector.numel = 0;
  coderArray->vector.allocated = 0;
  coderArray->vector.owner = true;
  coderArray->size[0] = 0;
  coderArray->size[1] = 0;
}

static void c_array_robotics_manip_internal_C(coder_array_robotics_manip_inte
  *coderArray)
{
  if (coderArray->vector.owner && (coderArray->vector.data !=
       (robotics_manip_internal_CollisionGeometry *)NULL)) {
    emlrtFreeMex(coderArray->vector.data);
  }
}

static void init_simulink_io_address(InstanceStruct_NRow8X0OFqedY5LmzUzZ3
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->u0 = (real_T (*)[7])cgxertGetInputPortSignal(moduleInstance->S,
    0);
  moduleInstance->b_y0 = (real_T (*)[16])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
}

/* CGXE Glue Code */
static void mdlOutputs_NRow8X0OFqedY5LmzUzZ3(SimStruct *S, int_T tid)
{
  InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *moduleInstance =
    (InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_NRow8X0OFqedY5LmzUzZ3(SimStruct *S)
{
  InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *moduleInstance =
    (InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_NRow8X0OFqedY5LmzUzZ3(SimStruct *S, int_T tid)
{
  InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *moduleInstance =
    (InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static void mdlDerivatives_NRow8X0OFqedY5LmzUzZ3(SimStruct *S)
{
  InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *moduleInstance =
    (InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_derivative(moduleInstance);
}

static void mdlTerminate_NRow8X0OFqedY5LmzUzZ3(SimStruct *S)
{
  InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *moduleInstance =
    (InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_NRow8X0OFqedY5LmzUzZ3(SimStruct *S)
{
  InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *moduleInstance =
    (InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_NRow8X0OFqedY5LmzUzZ3(SimStruct *S)
{
  InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *moduleInstance =
    (InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_NRow8X0OFqedY5LmzUzZ3(SimStruct *S)
{
  InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *moduleInstance =
    (InstanceStruct_NRow8X0OFqedY5LmzUzZ3 *)calloc(1, sizeof
    (InstanceStruct_NRow8X0OFqedY5LmzUzZ3));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_NRow8X0OFqedY5LmzUzZ3);
  ssSetmdlInitializeConditions(S, mdlInitialize_NRow8X0OFqedY5LmzUzZ3);
  ssSetmdlUpdate(S, mdlUpdate_NRow8X0OFqedY5LmzUzZ3);
  ssSetmdlDerivatives(S, mdlDerivatives_NRow8X0OFqedY5LmzUzZ3);
  ssSetmdlTerminate(S, mdlTerminate_NRow8X0OFqedY5LmzUzZ3);
  ssSetmdlEnable(S, mdlEnable_NRow8X0OFqedY5LmzUzZ3);
  ssSetmdlDisable(S, mdlDisable_NRow8X0OFqedY5LmzUzZ3);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_NRow8X0OFqedY5LmzUzZ3(SimStruct *S)
{
}

void method_dispatcher_NRow8X0OFqedY5LmzUzZ3(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_NRow8X0OFqedY5LmzUzZ3(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_NRow8X0OFqedY5LmzUzZ3(S);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: NRow8X0OFqedY5LmzUzZ3.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_NRow8X0OFqedY5LmzUzZ3_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxArray * elem_11;
  mxArray * elem_12;
  mxArray * elem_13;
  mxArray * elem_14;
  mxArray * elem_15;
  mxArray * elem_16;
  mxArray * elem_17;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(1,4);
  elem_4 = mxCreateString("addIncludeFiles");
  mxSetCell(elem_3,0,elem_4);
  elem_5 = mxCreateCellMatrix(1,1);
  elem_6 = mxCreateString("collisioncodegen_api.hpp");
  mxSetCell(elem_5,0,elem_6);
  mxSetCell(elem_3,1,elem_5);
  elem_7 = mxCreateCellMatrix(1,1);
  elem_8 = mxCreateString("");
  mxSetCell(elem_7,0,elem_8);
  mxSetCell(elem_3,2,elem_7);
  elem_9 = mxCreateCellMatrix(1,1);
  elem_10 = mxCreateString("");
  mxSetCell(elem_9,0,elem_10);
  mxSetCell(elem_3,3,elem_9);
  mxSetCell(elem_1,1,elem_3);
  elem_11 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_11);
  elem_12 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_12);
  elem_13 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_13);
  elem_14 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_14);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_15 = mxCreateCellMatrix(1,1);
  elem_16 = mxCreateString(
    "robotics.core.internal.coder.CollisionGeometryBuildable");
  mxSetCell(elem_15,0,elem_16);
  mxSetCell(mxBIArgs,1,elem_15);
  elem_17 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_17);
  return mxBIArgs;
}

mxArray *cgxe_NRow8X0OFqedY5LmzUzZ3_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString(
    "robotics.core.internal.coder.CollisionGeometryBuildable");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
