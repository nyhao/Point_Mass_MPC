/* This function was automatically generated by CasADi */#ifdef __cplusplus
extern "C" {
#endif

#ifdef CODEGEN_PREFIX
  #define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
  #define _NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else /* CODEGEN_PREFIX */
  #define CASADI_PREFIX(ID) FORCESNLPsolver_model_11_ ## ID
#endif /* CODEGEN_PREFIX */

#include <math.h>

#include "FORCESNLPsolver/include/FORCESNLPsolver.h"

#define PRINTF printf
FORCESNLPsolver_FLOAT CASADI_PREFIX(sq)(FORCESNLPsolver_FLOAT x) { return x*x;}
#define sq(x) CASADI_PREFIX(sq)(x)

FORCESNLPsolver_FLOAT CASADI_PREFIX(sign)(FORCESNLPsolver_FLOAT x) { return x<0 ? -1 : x>0 ? 1 : x;}
#define sign(x) CASADI_PREFIX(sign)(x)

static const int CASADI_PREFIX(s0)[] = {20, 1, 0, 20, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
#define s0 CASADI_PREFIX(s0)
static const int CASADI_PREFIX(s1)[] = {15, 1, 0, 15, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
#define s1 CASADI_PREFIX(s1)
static const int CASADI_PREFIX(s2)[] = {1, 1, 0, 1, 0};
#define s2 CASADI_PREFIX(s2)
static const int CASADI_PREFIX(s3)[] = {1, 20, 0, 0, 0, 0, 0, 0, 1, 2, 3, 3, 3, 3, 3, 3, 4, 5, 6, 7, 8, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
#define s3 CASADI_PREFIX(s3)
/* evaluate_stages */
int FORCESNLPsolver_model_11(const FORCESNLPsolver_FLOAT** arg, FORCESNLPsolver_FLOAT** res) {
     FORCESNLPsolver_FLOAT a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48,a49,a50,a51,a52,a53,a54,a55,a56,a57,a58,a59,a60,a61,a62,a63,a64,a65,a66,a67,a68,a69,a70,a71,a72,a73,a74,a75;
         a0=arg[1] ? arg[1][0] : 0;
         a1=arg[0] ? arg[0][17] : 0;
         a2=(a0*a1);
         a3=arg[1] ? arg[1][1] : 0;
  a2=(a2+a3);
         a4=(a2*a1);
         a5=arg[1] ? arg[1][2] : 0;
  a4=(a4+a5);
         a6=arg[0] ? arg[0][5] : 0;
  a4=(a6-a4);
         a7=arg[1] ? arg[1][11] : 0;
         a8=(a7*a1);
         a9=arg[1] ? arg[1][12] : 0;
  a8=(a8+a9);
         a10=arg[1] ? arg[1][9] : 0;
         a11=(a10*a1);
         a12=arg[1] ? arg[1][10] : 0;
  a11=(a11+a12);
         a13=atan2(a8,a11);
         a14=sin(a13);
         a15=(a14*a4);
         a16=arg[1] ? arg[1][3] : 0;
         a17=(a16*a1);
         a18=arg[1] ? arg[1][4] : 0;
  a17=(a17+a18);
         a19=(a17*a1);
         a20=arg[1] ? arg[1][5] : 0;
  a19=(a19+a20);
         a21=arg[0] ? arg[0][6] : 0;
  a19=(a21-a19);
         a22=(a7*a1);
  a22=(a22+a9);
         a23=(a10*a1);
  a23=(a23+a12);
         a24=atan2(a22,a23);
         a25=cos(a24);
         a26=(a25*a19);
  a15=(a15-a26);
  a26=1000.;
  a15=(a26*a15);
         a27=(a0*a1);
  a27=(a27+a3);
         a28=(a27*a1);
  a28=(a28+a5);
  a28=(a6-a28);
         a29=(a7*a1);
  a29=(a29+a9);
         a30=(a10*a1);
  a30=(a30+a12);
         a31=atan2(a29,a30);
         a32=sin(a31);
         a33=(a32*a28);
         a34=(a16*a1);
  a34=(a34+a18);
         a35=(a34*a1);
  a35=(a35+a20);
  a35=(a21-a35);
         a36=(a7*a1);
  a36=(a36+a9);
         a37=(a10*a1);
  a37=(a37+a12);
         a38=atan2(a36,a37);
         a39=cos(a38);
         a40=(a39*a35);
  a33=(a33-a40);
  a40=(a15*a33);
         a41=(a0*a1);
  a41=(a41+a3);
         a42=(a41*a1);
  a42=(a42+a5);
  a42=(a6-a42);
         a43=(a7*a1);
  a43=(a43+a9);
         a44=(a10*a1);
  a44=(a44+a12);
         a45=atan2(a43,a44);
         a46=cos(a45);
         a47=(a46*a42);
         a48=(a16*a1);
  a48=(a48+a18);
         a49=(a48*a1);
  a49=(a49+a20);
  a49=(a21-a49);
         a50=(a7*a1);
  a50=(a50+a9);
         a51=(a10*a1);
  a51=(a51+a12);
         a52=atan2(a50,a51);
         a53=sin(a52);
         a54=(a53*a49);
  a47=(a47+a54);
  a47=(a26*a47);
  a54=(a0*a1);
  a54=(a54+a3);
  a3=(a54*a1);
  a3=(a3+a5);
  a6=(a6-a3);
  a3=(a7*a1);
  a3=(a3+a9);
  a5=(a10*a1);
  a5=(a5+a12);
         a55=atan2(a3,a5);
         a56=cos(a55);
         a57=(a56*a6);
         a58=(a16*a1);
  a58=(a58+a18);
  a18=(a58*a1);
  a18=(a18+a20);
  a21=(a21-a18);
  a18=(a7*a1);
  a18=(a18+a9);
  a9=(a10*a1);
  a9=(a9+a12);
  a12=atan2(a18,a9);
  a20=sin(a12);
         a59=(a20*a21);
  a57=(a57+a59);
  a59=(a47*a57);
  a40=(a40+a59);
  a59=arg[1] ? arg[1][6] : 0;
         a60=(a59*a1);
         a61=arg[1] ? arg[1][7] : 0;
  a60=(a60+a61);
         a62=(a60*a1);
         a63=arg[1] ? arg[1][8] : 0;
  a62=(a62+a63);
         a64=arg[0] ? arg[0][7] : 0;
  a62=(a64-a62);
  a62=(a26*a62);
         a65=(a59*a1);
  a65=(a65+a61);
  a61=(a65*a1);
  a61=(a61+a63);
  a64=(a64-a61);
  a61=(a62*a64);
  a40=(a40+a61);
  a61=1.0000000000000001e-01;
  a63=arg[0] ? arg[0][18] : 0;
  a61=(a61*a63);
  a40=(a40-a61);
  a61=1.0000000000000000e-03;
  a63=arg[0] ? arg[0][13] : 0;
         a66=(a61*a63);
         a67=(a66*a63);
         a68=arg[0] ? arg[0][14] : 0;
         a69=(a61*a68);
         a70=(a69*a68);
  a67=(a67+a70);
  a70=arg[0] ? arg[0][15] : 0;
         a71=(a61*a70);
         a72=(a71*a70);
  a67=(a67+a72);
  a72=arg[0] ? arg[0][16] : 0;
         a73=(a61*a72);
         a74=(a73*a72);
  a67=(a67+a74);
  a40=(a40+a67);
  a67=arg[0] ? arg[0][19] : 0;
  a74=(a61*a67);
         a75=(a74*a67);
  a40=(a40+a75);
  if (res[0]!=0) res[0][0]=a40;
  a56=(a56*a47);
  a57=(a26*a57);
  a46=(a46*a57);
  a40=(a56+a46);
  a32=(a32*a15);
  a40=(a40+a32);
  a33=(a26*a33);
  a14=(a14*a33);
  a40=(a40+a14);
  if (res[1]!=0) res[1][0]=a40;
  a20=(a20*a47);
  a53=(a53*a57);
  a40=(a20+a53);
  a39=(a39*a15);
  a40=(a40-a39);
  a25=(a25*a33);
  a40=(a40-a25);
  if (res[1]!=0) res[1][1]=a40;
  a26=(a26*a64);
  a64=(a62+a26);
  if (res[1]!=0) res[1][2]=a64;
  a63=(a61*a63);
  a66=(a66+a63);
  if (res[1]!=0) res[1][3]=a66;
  a68=(a61*a68);
  a69=(a69+a68);
  if (res[1]!=0) res[1][4]=a69;
  a70=(a61*a70);
  a71=(a71+a70);
  if (res[1]!=0) res[1][5]=a71;
  a72=(a61*a72);
  a73=(a73+a72);
  if (res[1]!=0) res[1][6]=a73;
  a73=sq(a18);
  a72=sq(a9);
  a73=(a73+a72);
  a9=(a9/a73);
  a21=(a21*a47);
  a12=cos(a12);
  a12=(a12*a21);
  a9=(a9*a12);
  a9=(a7*a9);
  a65=(a65*a62);
  a62=(a1*a62);
  a62=(a59*a62);
  a65=(a65+a62);
  a60=(a60*a26);
  a65=(a65+a60);
  a26=(a1*a26);
  a59=(a59*a26);
  a65=(a65+a59);
  a18=(a18/a73);
  a18=(a18*a12);
  a18=(a10*a18);
  a65=(a65+a18);
  a9=(a9-a65);
  a58=(a58*a20);
  a9=(a9-a58);
  a20=(a1*a20);
  a20=(a16*a20);
  a9=(a9-a20);
  a20=sq(a3);
  a58=sq(a5);
  a20=(a20+a58);
  a3=(a3/a20);
  a6=(a6*a47);
  a55=sin(a55);
  a55=(a55*a6);
  a3=(a3*a55);
  a3=(a10*a3);
  a9=(a9+a3);
  a5=(a5/a20);
  a5=(a5*a55);
  a5=(a7*a5);
  a9=(a9-a5);
  a54=(a54*a56);
  a9=(a9-a54);
  a56=(a1*a56);
  a56=(a0*a56);
  a9=(a9-a56);
  a56=sq(a50);
  a54=sq(a51);
  a56=(a56+a54);
  a50=(a50/a56);
  a49=(a49*a57);
  a52=cos(a52);
  a52=(a52*a49);
  a50=(a50*a52);
  a50=(a10*a50);
  a9=(a9-a50);
  a51=(a51/a56);
  a51=(a51*a52);
  a51=(a7*a51);
  a9=(a9+a51);
  a48=(a48*a53);
  a9=(a9-a48);
  a53=(a1*a53);
  a53=(a16*a53);
  a9=(a9-a53);
  a53=sq(a43);
  a48=sq(a44);
  a53=(a53+a48);
  a43=(a43/a53);
  a42=(a42*a57);
  a45=sin(a45);
  a45=(a45*a42);
  a43=(a43*a45);
  a43=(a10*a43);
  a9=(a9+a43);
  a44=(a44/a53);
  a44=(a44*a45);
  a44=(a7*a44);
  a9=(a9-a44);
  a41=(a41*a46);
  a9=(a9-a41);
  a46=(a1*a46);
  a46=(a0*a46);
  a9=(a9-a46);
  a46=sq(a36);
  a41=sq(a37);
  a46=(a46+a41);
  a36=(a36/a46);
  a35=(a35*a15);
  a38=sin(a38);
  a38=(a38*a35);
  a36=(a36*a38);
  a36=(a10*a36);
  a9=(a9-a36);
  a37=(a37/a46);
  a37=(a37*a38);
  a37=(a7*a37);
  a9=(a9+a37);
  a34=(a34*a39);
  a9=(a9+a34);
  a39=(a1*a39);
  a39=(a16*a39);
  a9=(a9+a39);
  a39=sq(a29);
  a34=sq(a30);
  a39=(a39+a34);
  a29=(a29/a39);
  a28=(a28*a15);
  a31=cos(a31);
  a31=(a31*a28);
  a29=(a29*a31);
  a29=(a10*a29);
  a9=(a9-a29);
  a30=(a30/a39);
  a30=(a30*a31);
  a30=(a7*a30);
  a9=(a9+a30);
  a27=(a27*a32);
  a9=(a9-a27);
  a32=(a1*a32);
  a32=(a0*a32);
  a9=(a9-a32);
  a32=sq(a22);
  a27=sq(a23);
  a32=(a32+a27);
  a22=(a22/a32);
  a19=(a19*a33);
  a24=sin(a24);
  a24=(a24*a19);
  a22=(a22*a24);
  a22=(a10*a22);
  a9=(a9-a22);
  a23=(a23/a32);
  a23=(a23*a24);
  a23=(a7*a23);
  a9=(a9+a23);
  a17=(a17*a25);
  a9=(a9+a17);
  a25=(a1*a25);
  a16=(a16*a25);
  a9=(a9+a16);
  a16=sq(a8);
  a25=sq(a11);
  a16=(a16+a25);
  a8=(a8/a16);
  a4=(a4*a33);
  a13=cos(a13);
  a13=(a13*a4);
  a8=(a8*a13);
  a10=(a10*a8);
  a9=(a9-a10);
  a11=(a11/a16);
  a11=(a11*a13);
  a7=(a7*a11);
  a9=(a9+a7);
  a2=(a2*a14);
  a9=(a9-a2);
  a1=(a1*a14);
  a0=(a0*a1);
  a9=(a9-a0);
  if (res[1]!=0) res[1][7]=a9;
  a9=-1.0000000000000001e-01;
  if (res[1]!=0) res[1][8]=a9;
  a61=(a61*a67);
  a74=(a74+a61);
  if (res[1]!=0) res[1][9]=a74;
  return 0;
}

int FORCESNLPsolver_model_11_init(int *f_type, int *n_in, int *n_out, int *sz_arg, int* sz_res) {
  *f_type = 1;
  *n_in = 2;
  *n_out = 2;
  *sz_arg = 2;
  *sz_res = 2;
  return 0;
}

int FORCESNLPsolver_model_11_sparsity(int i, int *nrow, int *ncol, const int **colind, const int **row) {
  const int* s;
  switch (i) {
    case 0:
      s = s0; break;
    case 1:
      s = s1; break;
    case 2:
      s = s2; break;
    case 3:
      s = s3; break;
    default:
      return 1;
  }

  *nrow = s[0];
  *ncol = s[1];
  *colind = s + 2;
  *row = s + 2 + (*ncol + 1);
  return 0;
}

int FORCESNLPsolver_model_11_work(int *sz_iw, int *sz_w) {
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 76;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
