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

static const int CASADI_PREFIX(s0)[] = {12, 1, 0, 12, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
#define s0 CASADI_PREFIX(s0)
static const int CASADI_PREFIX(s1)[] = {8, 1, 0, 8, 0, 1, 2, 3, 4, 5, 6, 7};
#define s1 CASADI_PREFIX(s1)
static const int CASADI_PREFIX(s2)[] = {1, 1, 0, 1, 0};
#define s2 CASADI_PREFIX(s2)
static const int CASADI_PREFIX(s3)[] = {1, 12, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 0, 0, 0, 0, 0, 0, 0, 0};
#define s3 CASADI_PREFIX(s3)
static const int CASADI_PREFIX(s4)[] = {8, 12, 0, 2, 4, 6, 8, 9, 10, 11, 12, 14, 16, 18, 20, 0, 4, 1, 5, 2, 6, 3, 7, 0, 1, 2, 3, 0, 4, 1, 5, 2, 6, 3, 7};
#define s4 CASADI_PREFIX(s4)
/* evaluate_stages */
int FORCESNLPsolver_model_11(const FORCESNLPsolver_FLOAT** arg, FORCESNLPsolver_FLOAT** res) {
     FORCESNLPsolver_FLOAT a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18;
         a0=arg[0] ? arg[0][4] : 0;
         a1=sq(a0);
         a2=arg[0] ? arg[0][5] : 0;
         a3=sq(a2);
  a1=(a1+a3);
  a3=arg[0] ? arg[0][6] : 0;
         a4=sq(a3);
  a1=(a1+a4);
  a4=arg[0] ? arg[0][7] : 0;
         a5=sq(a4);
  a1=(a1+a5);
  a5=arg[0] ? arg[0][8] : 0;
         a6=sq(a5);
  a1=(a1+a6);
  a6=arg[0] ? arg[0][9] : 0;
         a7=sq(a6);
  a1=(a1+a7);
  a7=arg[0] ? arg[0][10] : 0;
         a8=sq(a7);
  a1=(a1+a8);
  a8=arg[0] ? arg[0][11] : 0;
         a9=sq(a8);
  a1=(a1+a9);
  a9=2.;
         a10=arg[1] ? arg[1][0] : 0;
  a10=(a9*a10);
         a11=(a10*a0);
         a12=arg[1] ? arg[1][1] : 0;
  a12=(a9*a12);
         a13=(a12*a2);
  a11=(a11+a13);
  a13=arg[1] ? arg[1][2] : 0;
  a13=(a9*a13);
         a14=(a13*a3);
  a11=(a11+a14);
  a14=arg[1] ? arg[1][3] : 0;
  a14=(a9*a14);
         a15=(a14*a4);
  a11=(a11+a15);
  a15=arg[1] ? arg[1][4] : 0;
  a15=(a9*a15);
         a16=(a15*a5);
  a11=(a11+a16);
  a16=arg[1] ? arg[1][5] : 0;
  a16=(a9*a16);
         a17=(a16*a6);
  a11=(a11+a17);
  a17=arg[1] ? arg[1][6] : 0;
  a17=(a9*a17);
         a18=(a17*a7);
  a11=(a11+a18);
  a18=arg[1] ? arg[1][7] : 0;
  a9=(a9*a18);
  a18=(a9*a8);
  a11=(a11+a18);
  a1=(a1-a11);
  if (res[0]!=0) res[0][0]=a1;
  a1=(a0+a0);
  a1=(a1-a10);
  if (res[1]!=0) res[1][0]=a1;
  a1=(a2+a2);
  a1=(a1-a12);
  if (res[1]!=0) res[1][1]=a1;
  a1=(a3+a3);
  a1=(a1-a13);
  if (res[1]!=0) res[1][2]=a1;
  a1=(a4+a4);
  a1=(a1-a14);
  if (res[1]!=0) res[1][3]=a1;
  a1=(a5+a5);
  a1=(a1-a15);
  if (res[1]!=0) res[1][4]=a1;
  a1=(a6+a6);
  a1=(a1-a16);
  if (res[1]!=0) res[1][5]=a1;
  a1=(a7+a7);
  a1=(a1-a17);
  if (res[1]!=0) res[1][6]=a1;
  a1=(a8+a8);
  a1=(a1-a9);
  if (res[1]!=0) res[1][7]=a1;
  a1=1.0000000000000001e-01;
  a9=(a1*a5);
  a0=(a0+a9);
  a9=5.0000000000000010e-03;
  a17=arg[0] ? arg[0][0] : 0;
  a16=(a9*a17);
  a0=(a0+a16);
  if (res[2]!=0) res[2][0]=a0;
  a0=(a1*a6);
  a2=(a2+a0);
  a0=arg[0] ? arg[0][1] : 0;
  a16=(a9*a0);
  a2=(a2+a16);
  if (res[2]!=0) res[2][1]=a2;
  a2=(a1*a7);
  a3=(a3+a2);
  a2=arg[0] ? arg[0][2] : 0;
  a16=(a9*a2);
  a3=(a3+a16);
  a16=-4.9000000000000016e-02;
  a3=(a3+a16);
  if (res[2]!=0) res[2][2]=a3;
  a3=(a1*a8);
  a4=(a4+a3);
  a3=arg[0] ? arg[0][3] : 0;
  a16=(a9*a3);
  a4=(a4+a16);
  if (res[2]!=0) res[2][3]=a4;
  a17=(a1*a17);
  a5=(a5+a17);
  if (res[2]!=0) res[2][4]=a5;
  a0=(a1*a0);
  a6=(a6+a0);
  if (res[2]!=0) res[2][5]=a6;
  a2=(a1*a2);
  a7=(a7+a2);
  a2=-9.8000000000000009e-01;
  a7=(a7+a2);
  if (res[2]!=0) res[2][6]=a7;
  a3=(a1*a3);
  a8=(a8+a3);
  if (res[2]!=0) res[2][7]=a8;
  if (res[3]!=0) res[3][0]=a9;
  if (res[3]!=0) res[3][1]=a1;
  if (res[3]!=0) res[3][2]=a9;
  if (res[3]!=0) res[3][3]=a1;
  if (res[3]!=0) res[3][4]=a9;
  if (res[3]!=0) res[3][5]=a1;
  if (res[3]!=0) res[3][6]=a9;
  if (res[3]!=0) res[3][7]=a1;
  a9=1.;
  if (res[3]!=0) res[3][8]=a9;
  if (res[3]!=0) res[3][9]=a9;
  if (res[3]!=0) res[3][10]=a9;
  if (res[3]!=0) res[3][11]=a9;
  if (res[3]!=0) res[3][12]=a1;
  if (res[3]!=0) res[3][13]=a9;
  if (res[3]!=0) res[3][14]=a1;
  if (res[3]!=0) res[3][15]=a9;
  if (res[3]!=0) res[3][16]=a1;
  if (res[3]!=0) res[3][17]=a9;
  if (res[3]!=0) res[3][18]=a1;
  if (res[3]!=0) res[3][19]=a9;
  return 0;
}

int FORCESNLPsolver_model_11_init(int *f_type, int *n_in, int *n_out, int *sz_arg, int* sz_res) {
  *f_type = 1;
  *n_in = 2;
  *n_out = 4;
  *sz_arg = 2;
  *sz_res = 4;
  return 0;
}

int FORCESNLPsolver_model_11_sparsity(int i, int *nrow, int *ncol, const int **colind, const int **row) {
  const int* s;
  switch (i) {
    case 0:
      s = s0; break;
    case 1:
    case 4:
      s = s1; break;
    case 2:
      s = s2; break;
    case 3:
      s = s3; break;
    case 5:
      s = s4; break;
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
  if (sz_w) *sz_w = 19;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
