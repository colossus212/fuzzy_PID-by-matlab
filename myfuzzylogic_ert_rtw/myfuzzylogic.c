/*
 * File: myfuzzylogic.c
 *
 * Code generated for Simulink model 'myfuzzylogic'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Wed Sep 16 16:00:44 2015
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: STMicroelectronics->ST10/Super10
 * Code generation objectives:
 *    1. ROM efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "myfuzzylogic.h"
#include "myfuzzylogic_private.h"

/*
 * Output and update for action system:
 *    '<S4>/Action: One'
 *    '<S5>/Action: One'
 *    '<S6>/Action: One'
 */
void myfuzzylogic_ActionOne(real_T *rty_Out1)
{
  /* SignalConversion: '<S61>/OutportBufferForOut1' incorporates:
   *  Constant: '<S61>/One'
   */
  *rty_Out1 = 1.0;
}

/*
 * Output and update for action system:
 *    '<S4>/Action: u1'
 *    '<S5>/Action: u1'
 *    '<S6>/Action: u1'
 */
void myfuzzylogic_Actionu1(real_T rtu_u1, real_T *rty_u2)
{
  /* Inport: '<S62>/u1' */
  *rty_u2 = rtu_u1;
}

/* Model step function */
void Fuzzy_Run(real_T e, real_T ec, real_T *Kp, real_T *Ki, real_T *Kd)
{
  /* local block i/o variables */
  real_T rtb_Sum1;
  real_T rtb_Merge;
  real_T rtb_Sum1_o;
  real_T rtb_Merge_f;
  real_T rtb_Sum1_j;
  real_T rtb_Merge_b;
  real_T rtb_Weighting_lf;
  real_T rtb_Weighting_da;
  real_T rtb_Exponentialgaussmf_o;
  real_T rtb_Weighting_f2;
  real_T rtb_Weighting;
  real_T rtb_Weighting_k0;
  real_T rtb_Weighting_j5;
  real_T rtb_Weighting_nm;
  real_T rtb_Weighting_ic;
  real_T rtb_Weighting_hq;
  real_T rtb_Weighting_f;
  real_T rtb_Weighting_gj;
  real_T rtb_Weighting_c0;
  real_T rtb_Exponentialgaussmf;
  real_T rtb_Weighting_lh;
  real_T rtb_Weighting_p;
  real_T rtb_Weighting_b;
  real_T rtb_Weighting_j;
  real_T rtb_Weighting_hh;
  real_T rtb_Weighting_kb;
  real_T rtb_Weighting_ka;
  real_T rtb_Weighting_k;
  real_T rtb_Weighting_o;
  real_T rtb_Weighting_eu;
  real_T rtb_Weighting_lt;
  real_T rtb_Weighting_kv;
  real_T rtb_Weighting_gha;
  real_T rtb_Weighting_bj;
  real_T rtb_Weighting_it;
  real_T rtb_Weighting_c;
  real_T rtb_Weighting_p3;
  real_T rtb_Weighting_gh;
  real_T rtb_Weighting_gq;
  real_T rtb_Weighting_op;
  real_T rtb_Weighting_ef;
  real_T rtb_Weighting_ml;
  real_T rtb_Weighting_br;
  real_T rtb_Weighting_n;
  real_T rtb_Weighting_h;
  real_T rtb_Weighting_f1;
  real_T rtb_Weighting_nu;
  real_T rtb_Weighting_oy;
  real_T rtb_Weighting_kjr;
  real_T rtb_Weighting_e1;
  real_T rtb_Weighting_kh;
  real_T rtb_Weighting_d;
  real_T rtb_Weighting_a;
  real_T rtb_Weighting_l;
  real_T rtb_Weighting_i;
  real_T rtb_Weighting_ky;
  real_T rtb_ZeroFiringStrength;
  real_T rtb_AggMethod1[101];
  real_T rtb_AggMethod2[101];
  real_T rtb_AggMethod3[101];
  real_T rtb_impMethod[303];
  real_T rtb_impMethod_ee[303];
  real_T rtb_impMethod_bd[303];
  real_T rtb_impMethod_hv[303];
  real_T rtb_impMethod_im[303];
  real_T rtb_impMethod_c[303];
  real_T rtb_impMethod_m[303];
  real_T rtb_impMethod_b[303];
  real_T rtb_impMethod_og[303];
  real_T rtb_impMethod_fb[303];
  real_T rtb_impMethod_dh[303];
  real_T rtb_impMethod_k0[303];
  real_T rtb_impMethod_p[303];
  real_T rtb_impMethod_c4[303];
  real_T rtb_impMethod_e[303];
  real_T rtb_impMethod_g[303];
  real_T rtb_impMethod_gv[303];
  real_T rtb_impMethod_ha[303];
  real_T rtb_impMethod_n4[303];
  real_T rtb_impMethod_l[303];
  real_T rtb_impMethod_c1[303];
  real_T rtb_impMethod_n[303];
  real_T rtb_impMethod_hr[303];
  real_T rtb_impMethod_k[303];
  real_T rtb_impMethod_dt[303];
  real_T rtb_impMethod_jl[303];
  real_T rtb_impMethod_km[303];
  real_T rtb_impMethod_j[303];
  real_T rtb_impMethod_hy[303];
  real_T rtb_impMethod_my[303];
  real_T rtb_impMethod_o[303];
  real_T rtb_impMethod_ce[303];
  real_T rtb_impMethod_hl[303];
  real_T rtb_impMethod_h[303];
  real_T rtb_impMethod_cn[303];
  real_T rtb_impMethod_a[303];
  real_T rtb_impMethod_o0[303];
  real_T rtb_impMethod_hd[303];
  real_T rtb_impMethod_dg[303];
  real_T rtb_impMethod_mu[303];
  real_T rtb_impMethod_hk[303];
  real_T rtb_impMethod_gz[303];
  real_T rtb_impMethod_dd[303];
  real_T rtb_impMethod_gy[303];
  real_T rtb_impMethod_gm[303];
  real_T rtb_impMethod_e2[303];
  real_T rtb_impMethod_c0[303];
  real_T rtb_impMethod_oa[303];
  real_T rtb_impMethod_f2[303];
  real_T rtb_AveragingCOA_d;
  int16_T i;

  /* Gain: '<S1>/Gain' incorporates:
   *  Inport: '<Root>/e'
   */
  rtb_Weighting_lf = 0.01 * e;

  /* Product: '<S67>/Product (gaussmf)' incorporates:
   *  Constant: '<S67>/mu'
   *  Constant: '<S67>/sigma'
   *  Sum: '<S67>/Sum'
   */
  rtb_Weighting_da = (rtb_Weighting_lf - -6.0) / 0.8494;

  /* Math: '<S67>/Exponential (gaussmf)' incorporates:
   *  Gain: '<S67>/Gain'
   *  Math: '<S67>/Squaring (gaussmf)'
   *
   * About '<S67>/Exponential (gaussmf)':
   *  Operator: exp
   */
  rtb_Weighting_da = exp(rtb_Weighting_da * rtb_Weighting_da * -0.5);

  /* Gain: '<S1>/Gain1' incorporates:
   *  Inport: '<Root>/ec'
   */
  rtb_Exponentialgaussmf_o = 0.01 * ec;

  /* Product: '<S74>/Product (gaussmf)' incorporates:
   *  Constant: '<S74>/mu'
   *  Constant: '<S74>/sigma'
   *  Sum: '<S74>/Sum'
   */
  rtb_Weighting_f2 = (rtb_Exponentialgaussmf_o - -6.0) / 0.8494;

  /* Math: '<S74>/Exponential (gaussmf)' incorporates:
   *  Gain: '<S74>/Gain'
   *  Math: '<S74>/Squaring (gaussmf)'
   *
   * About '<S74>/Exponential (gaussmf)':
   *  Operator: exp
   */
  rtb_Weighting_f2 = exp(rtb_Weighting_f2 * rtb_Weighting_f2 * -0.5);

  /* MinMax: '<S9>/andorMethod' */
  if (rtb_Weighting_da <= rtb_Weighting_f2) {
    rtb_AveragingCOA_d = rtb_Weighting_da;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_f2;
  }

  /* Product: '<S9>/Weighting' incorporates:
   *  MinMax: '<S9>/andorMethod'
   */
  rtb_Weighting = rtb_AveragingCOA_d;

  /* MinMax: '<S9>/impMethod' incorporates:
   *  Constant: '<S59>/NB'
   *  Constant: '<S60>/PB'
   *  MinMax: '<S9>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_PB_Value[i]) {
      rtb_impMethod[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod[i] = rtCP_PB_Value[i];
    }
  }

  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_NB_Value[i]) {
      rtb_impMethod[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod[i + 101] = rtCP_NB_Value[i];
    }
  }

  /* Product: '<S75>/Product (gaussmf)' incorporates:
   *  Constant: '<S75>/mu'
   *  Constant: '<S75>/sigma'
   *  Sum: '<S75>/Sum'
   */
  rtb_Weighting_k0 = (rtb_Exponentialgaussmf_o - -4.0) / 0.8494;

  /* Math: '<S75>/Exponential (gaussmf)' incorporates:
   *  Gain: '<S75>/Gain'
   *  Math: '<S75>/Squaring (gaussmf)'
   *
   * About '<S75>/Exponential (gaussmf)':
   *  Operator: exp
   */
  rtb_Weighting_k0 = exp(rtb_Weighting_k0 * rtb_Weighting_k0 * -0.5);

  /* MinMax: '<S20>/andorMethod' */
  if (rtb_Weighting_da <= rtb_Weighting_k0) {
    rtb_AveragingCOA_d = rtb_Weighting_da;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_k0;
  }

  /* Product: '<S20>/Weighting' incorporates:
   *  MinMax: '<S20>/andorMethod'
   */
  rtb_Weighting_j5 = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S9>/impMethod' incorporates:
     *  Constant: '<S58>/PS'
     */
    if (rtb_Weighting <= rtCP_PS_Value[i]) {
      rtb_impMethod[i + 202] = rtb_Weighting;
    } else {
      rtb_impMethod[i + 202] = rtCP_PS_Value[i];
    }

    /* MinMax: '<S20>/impMethod' incorporates:
     *  Constant: '<S60>/PB'
     *  MinMax: '<S20>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_PB_Value[i]) {
      rtb_impMethod_ee[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_ee[i] = rtCP_PB_Value[i];
    }
  }

  /* MinMax: '<S20>/impMethod' incorporates:
   *  Constant: '<S59>/NB'
   *  MinMax: '<S20>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_NB_Value[i]) {
      rtb_impMethod_ee[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_ee[i + 101] = rtCP_NB_Value[i];
    }
  }

  /* Product: '<S76>/Product (gaussmf)' incorporates:
   *  Constant: '<S76>/mu'
   *  Constant: '<S76>/sigma'
   *  Sum: '<S76>/Sum'
   */
  rtb_Weighting_nm = (rtb_Exponentialgaussmf_o - -2.0) / 0.8494;

  /* Math: '<S76>/Exponential (gaussmf)' incorporates:
   *  Gain: '<S76>/Gain'
   *  Math: '<S76>/Squaring (gaussmf)'
   *
   * About '<S76>/Exponential (gaussmf)':
   *  Operator: exp
   */
  rtb_Weighting_nm = exp(rtb_Weighting_nm * rtb_Weighting_nm * -0.5);

  /* MinMax: '<S31>/andorMethod' */
  if (rtb_Weighting_da <= rtb_Weighting_nm) {
    rtb_AveragingCOA_d = rtb_Weighting_da;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_nm;
  }

  /* Product: '<S31>/Weighting' incorporates:
   *  MinMax: '<S31>/andorMethod'
   */
  rtb_Weighting_ic = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S20>/impMethod' incorporates:
     *  Constant: '<S58>/NS'
     */
    if (rtb_Weighting_j5 <= rtCP_NS_Value[i]) {
      rtb_impMethod_ee[i + 202] = rtb_Weighting_j5;
    } else {
      rtb_impMethod_ee[i + 202] = rtCP_NS_Value[i];
    }

    /* MinMax: '<S31>/impMethod' incorporates:
     *  Constant: '<S60>/PM'
     *  MinMax: '<S31>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_PM_Value[i]) {
      rtb_impMethod_bd[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_bd[i] = rtCP_PM_Value[i];
    }
  }

  /* MinMax: '<S31>/impMethod' incorporates:
   *  Constant: '<S59>/NM'
   *  MinMax: '<S31>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_NM_Value[i]) {
      rtb_impMethod_bd[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_bd[i + 101] = rtCP_NM_Value[i];
    }
  }

  /* Product: '<S80>/Product (gaussmf)' incorporates:
   *  Constant: '<S80>/sigma'
   *  Sum: '<S80>/Sum'
   */
  rtb_Weighting_hq = rtb_Exponentialgaussmf_o / 0.8494;

  /* Math: '<S80>/Exponential (gaussmf)' incorporates:
   *  Gain: '<S80>/Gain'
   *  Math: '<S80>/Squaring (gaussmf)'
   *
   * About '<S80>/Exponential (gaussmf)':
   *  Operator: exp
   */
  rtb_Weighting_hq = exp(rtb_Weighting_hq * rtb_Weighting_hq * -0.5);

  /* MinMax: '<S42>/andorMethod' */
  if (rtb_Weighting_da <= rtb_Weighting_hq) {
    rtb_AveragingCOA_d = rtb_Weighting_da;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_hq;
  }

  /* Product: '<S42>/Weighting' incorporates:
   *  MinMax: '<S42>/andorMethod'
   */
  rtb_Weighting_f = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S31>/impMethod' incorporates:
     *  Constant: '<S58>/NB'
     */
    if (rtb_Weighting_ic <= rtCP_NB_Value_k[i]) {
      rtb_impMethod_bd[i + 202] = rtb_Weighting_ic;
    } else {
      rtb_impMethod_bd[i + 202] = rtCP_NB_Value_k[i];
    }

    /* MinMax: '<S42>/impMethod' incorporates:
     *  Constant: '<S60>/PM'
     *  MinMax: '<S42>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_PM_Value[i]) {
      rtb_impMethod_hv[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_hv[i] = rtCP_PM_Value[i];
    }
  }

  /* MinMax: '<S42>/impMethod' incorporates:
   *  Constant: '<S59>/NM'
   *  MinMax: '<S42>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_NM_Value[i]) {
      rtb_impMethod_hv[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_hv[i + 101] = rtCP_NM_Value[i];
    }
  }

  /* Product: '<S79>/Product (gaussmf)' incorporates:
   *  Constant: '<S79>/mu'
   *  Constant: '<S79>/sigma'
   *  Sum: '<S79>/Sum'
   */
  rtb_Weighting_gj = (rtb_Exponentialgaussmf_o - 2.0) / 0.8494;

  /* Math: '<S79>/Exponential (gaussmf)' incorporates:
   *  Gain: '<S79>/Gain'
   *  Math: '<S79>/Squaring (gaussmf)'
   *
   * About '<S79>/Exponential (gaussmf)':
   *  Operator: exp
   */
  rtb_Weighting_gj = exp(rtb_Weighting_gj * rtb_Weighting_gj * -0.5);

  /* MinMax: '<S53>/andorMethod' */
  if (rtb_Weighting_da <= rtb_Weighting_gj) {
    rtb_AveragingCOA_d = rtb_Weighting_da;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_gj;
  }

  /* Product: '<S53>/Weighting' incorporates:
   *  MinMax: '<S53>/andorMethod'
   */
  rtb_Weighting_c0 = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S42>/impMethod' incorporates:
     *  Constant: '<S58>/NB'
     */
    if (rtb_Weighting_f <= rtCP_NB_Value_k[i]) {
      rtb_impMethod_hv[i + 202] = rtb_Weighting_f;
    } else {
      rtb_impMethod_hv[i + 202] = rtCP_NB_Value_k[i];
    }

    /* MinMax: '<S53>/impMethod' incorporates:
     *  Constant: '<S60>/PS'
     *  MinMax: '<S53>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_PS_Value_f[i]) {
      rtb_impMethod_im[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_im[i] = rtCP_PS_Value_f[i];
    }
  }

  /* MinMax: '<S53>/impMethod' incorporates:
   *  Constant: '<S59>/NS'
   *  MinMax: '<S53>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_NS_Value_a[i]) {
      rtb_impMethod_im[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_im[i + 101] = rtCP_NS_Value_a[i];
    }
  }

  /* Product: '<S78>/Product (gaussmf)' incorporates:
   *  Constant: '<S78>/mu'
   *  Constant: '<S78>/sigma'
   *  Sum: '<S78>/Sum'
   */
  rtb_Exponentialgaussmf = (rtb_Exponentialgaussmf_o - 4.0) / 0.8494;

  /* Math: '<S78>/Exponential (gaussmf)' incorporates:
   *  Gain: '<S78>/Gain'
   *  Math: '<S78>/Squaring (gaussmf)'
   *
   * About '<S78>/Exponential (gaussmf)':
   *  Operator: exp
   */
  rtb_Exponentialgaussmf = exp(rtb_Exponentialgaussmf * rtb_Exponentialgaussmf *
    -0.5);

  /* MinMax: '<S54>/andorMethod' */
  if (rtb_Weighting_da <= rtb_Exponentialgaussmf) {
    rtb_AveragingCOA_d = rtb_Weighting_da;
  } else {
    rtb_AveragingCOA_d = rtb_Exponentialgaussmf;
  }

  /* Product: '<S54>/Weighting' incorporates:
   *  MinMax: '<S54>/andorMethod'
   */
  rtb_Weighting_lh = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S53>/impMethod' incorporates:
     *  Constant: '<S58>/NB'
     */
    if (rtb_Weighting_c0 <= rtCP_NB_Value_k[i]) {
      rtb_impMethod_im[i + 202] = rtb_Weighting_c0;
    } else {
      rtb_impMethod_im[i + 202] = rtCP_NB_Value_k[i];
    }

    /* MinMax: '<S54>/impMethod' incorporates:
     *  Constant: '<S60>/ZO'
     *  MinMax: '<S54>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_ZO_Value[i]) {
      rtb_impMethod_c[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_c[i] = rtCP_ZO_Value[i];
    }
  }

  /* MinMax: '<S54>/impMethod' incorporates:
   *  Constant: '<S59>/ZO'
   *  MinMax: '<S54>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_ZO_Value_o[i]) {
      rtb_impMethod_c[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_c[i + 101] = rtCP_ZO_Value_o[i];
    }
  }

  /* Product: '<S77>/Product (gaussmf)' incorporates:
   *  Constant: '<S77>/mu'
   *  Constant: '<S77>/sigma'
   *  Sum: '<S77>/Sum'
   */
  rtb_Exponentialgaussmf_o = (rtb_Exponentialgaussmf_o - 6.0) / 0.8494;

  /* Math: '<S77>/Exponential (gaussmf)' incorporates:
   *  Gain: '<S77>/Gain'
   *  Math: '<S77>/Squaring (gaussmf)'
   *
   * About '<S77>/Exponential (gaussmf)':
   *  Operator: exp
   */
  rtb_Exponentialgaussmf_o = exp(rtb_Exponentialgaussmf_o *
    rtb_Exponentialgaussmf_o * -0.5);

  /* MinMax: '<S55>/andorMethod' */
  if (rtb_Weighting_da <= rtb_Exponentialgaussmf_o) {
    rtb_AveragingCOA_d = rtb_Weighting_da;
  } else {
    rtb_AveragingCOA_d = rtb_Exponentialgaussmf_o;
  }

  /* Product: '<S55>/Weighting' incorporates:
   *  MinMax: '<S55>/andorMethod'
   */
  rtb_Weighting_da = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S54>/impMethod' incorporates:
     *  Constant: '<S58>/NM'
     */
    if (rtb_Weighting_lh <= rtCP_NM_Value_d[i]) {
      rtb_impMethod_c[i + 202] = rtb_Weighting_lh;
    } else {
      rtb_impMethod_c[i + 202] = rtCP_NM_Value_d[i];
    }

    /* MinMax: '<S55>/impMethod' incorporates:
     *  Constant: '<S60>/ZO'
     *  MinMax: '<S55>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_ZO_Value[i]) {
      rtb_impMethod_m[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_m[i] = rtCP_ZO_Value[i];
    }
  }

  /* MinMax: '<S55>/impMethod' incorporates:
   *  Constant: '<S59>/ZO'
   *  MinMax: '<S55>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_ZO_Value_o[i]) {
      rtb_impMethod_m[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_m[i + 101] = rtCP_ZO_Value_o[i];
    }
  }

  /* Product: '<S68>/Product (gaussmf)' incorporates:
   *  Constant: '<S68>/mu'
   *  Constant: '<S68>/sigma'
   *  Sum: '<S68>/Sum'
   */
  rtb_Weighting_p = (rtb_Weighting_lf - -4.0) / 0.8494;

  /* Math: '<S68>/Exponential (gaussmf)' incorporates:
   *  Gain: '<S68>/Gain'
   *  Math: '<S68>/Squaring (gaussmf)'
   *
   * About '<S68>/Exponential (gaussmf)':
   *  Operator: exp
   */
  rtb_Weighting_p = exp(rtb_Weighting_p * rtb_Weighting_p * -0.5);

  /* MinMax: '<S56>/andorMethod' */
  if (rtb_Weighting_p <= rtb_Weighting_f2) {
    rtb_AveragingCOA_d = rtb_Weighting_p;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_f2;
  }

  /* Product: '<S56>/Weighting' incorporates:
   *  MinMax: '<S56>/andorMethod'
   */
  rtb_Weighting_b = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S55>/impMethod' incorporates:
     *  Constant: '<S58>/PS'
     */
    if (rtb_Weighting_da <= rtCP_PS_Value[i]) {
      rtb_impMethod_m[i + 202] = rtb_Weighting_da;
    } else {
      rtb_impMethod_m[i + 202] = rtCP_PS_Value[i];
    }

    /* MinMax: '<S56>/impMethod' incorporates:
     *  Constant: '<S60>/PB'
     *  MinMax: '<S56>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_PB_Value[i]) {
      rtb_impMethod_b[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_b[i] = rtCP_PB_Value[i];
    }
  }

  /* MinMax: '<S56>/impMethod' incorporates:
   *  Constant: '<S59>/NB'
   *  MinMax: '<S56>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_NB_Value[i]) {
      rtb_impMethod_b[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_b[i + 101] = rtCP_NB_Value[i];
    }
  }

  /* MinMax: '<S57>/andorMethod' */
  if (rtb_Weighting_p <= rtb_Weighting_k0) {
    rtb_AveragingCOA_d = rtb_Weighting_p;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_k0;
  }

  /* Product: '<S57>/Weighting' incorporates:
   *  MinMax: '<S57>/andorMethod'
   */
  rtb_Weighting_j = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S56>/impMethod' incorporates:
     *  Constant: '<S58>/PS'
     */
    if (rtb_Weighting_b <= rtCP_PS_Value[i]) {
      rtb_impMethod_b[i + 202] = rtb_Weighting_b;
    } else {
      rtb_impMethod_b[i + 202] = rtCP_PS_Value[i];
    }

    /* MinMax: '<S57>/impMethod' incorporates:
     *  Constant: '<S60>/PB'
     *  MinMax: '<S57>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_PB_Value[i]) {
      rtb_impMethod_og[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_og[i] = rtCP_PB_Value[i];
    }
  }

  /* MinMax: '<S57>/impMethod' incorporates:
   *  Constant: '<S59>/NB'
   *  MinMax: '<S57>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_NB_Value[i]) {
      rtb_impMethod_og[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_og[i + 101] = rtCP_NB_Value[i];
    }
  }

  /* MinMax: '<S10>/andorMethod' */
  if (rtb_Weighting_p <= rtb_Weighting_nm) {
    rtb_AveragingCOA_d = rtb_Weighting_p;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_nm;
  }

  /* Product: '<S10>/Weighting' incorporates:
   *  MinMax: '<S10>/andorMethod'
   */
  rtb_Weighting_hh = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S57>/impMethod' incorporates:
     *  Constant: '<S58>/NS'
     */
    if (rtb_Weighting_j <= rtCP_NS_Value[i]) {
      rtb_impMethod_og[i + 202] = rtb_Weighting_j;
    } else {
      rtb_impMethod_og[i + 202] = rtCP_NS_Value[i];
    }

    /* MinMax: '<S10>/impMethod' incorporates:
     *  Constant: '<S60>/PM'
     *  MinMax: '<S10>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_PM_Value[i]) {
      rtb_impMethod_fb[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_fb[i] = rtCP_PM_Value[i];
    }
  }

  /* MinMax: '<S10>/impMethod' incorporates:
   *  Constant: '<S59>/NM'
   *  MinMax: '<S10>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_NM_Value[i]) {
      rtb_impMethod_fb[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_fb[i + 101] = rtCP_NM_Value[i];
    }
  }

  /* MinMax: '<S11>/andorMethod' */
  if (rtb_Weighting_p <= rtb_Weighting_hq) {
    rtb_AveragingCOA_d = rtb_Weighting_p;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_hq;
  }

  /* Product: '<S11>/Weighting' incorporates:
   *  MinMax: '<S11>/andorMethod'
   */
  rtb_Weighting_kb = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S10>/impMethod' incorporates:
     *  Constant: '<S58>/NB'
     */
    if (rtb_Weighting_hh <= rtCP_NB_Value_k[i]) {
      rtb_impMethod_fb[i + 202] = rtb_Weighting_hh;
    } else {
      rtb_impMethod_fb[i + 202] = rtCP_NB_Value_k[i];
    }

    /* MinMax: '<S11>/impMethod' incorporates:
     *  Constant: '<S60>/PS'
     *  MinMax: '<S11>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_PS_Value_f[i]) {
      rtb_impMethod_dh[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_dh[i] = rtCP_PS_Value_f[i];
    }
  }

  /* MinMax: '<S11>/impMethod' incorporates:
   *  Constant: '<S59>/NS'
   *  MinMax: '<S11>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_NS_Value_a[i]) {
      rtb_impMethod_dh[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_dh[i + 101] = rtCP_NS_Value_a[i];
    }
  }

  /* MinMax: '<S12>/andorMethod' */
  if (rtb_Weighting_p <= rtb_Weighting_gj) {
    rtb_AveragingCOA_d = rtb_Weighting_p;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_gj;
  }

  /* Product: '<S12>/Weighting' incorporates:
   *  MinMax: '<S12>/andorMethod'
   */
  rtb_Weighting_ka = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S11>/impMethod' incorporates:
     *  Constant: '<S58>/NM'
     */
    if (rtb_Weighting_kb <= rtCP_NM_Value_d[i]) {
      rtb_impMethod_dh[i + 202] = rtb_Weighting_kb;
    } else {
      rtb_impMethod_dh[i + 202] = rtCP_NM_Value_d[i];
    }

    /* MinMax: '<S12>/impMethod' incorporates:
     *  Constant: '<S60>/PS'
     *  MinMax: '<S12>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_PS_Value_f[i]) {
      rtb_impMethod_k0[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_k0[i] = rtCP_PS_Value_f[i];
    }
  }

  /* MinMax: '<S12>/impMethod' incorporates:
   *  Constant: '<S59>/NS'
   *  MinMax: '<S12>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_NS_Value_a[i]) {
      rtb_impMethod_k0[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_k0[i + 101] = rtCP_NS_Value_a[i];
    }
  }

  /* MinMax: '<S13>/andorMethod' */
  if (rtb_Weighting_p <= rtb_Exponentialgaussmf) {
    rtb_AveragingCOA_d = rtb_Weighting_p;
  } else {
    rtb_AveragingCOA_d = rtb_Exponentialgaussmf;
  }

  /* Product: '<S13>/Weighting' incorporates:
   *  MinMax: '<S13>/andorMethod'
   */
  rtb_Weighting_k = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S12>/impMethod' incorporates:
     *  Constant: '<S58>/NM'
     */
    if (rtb_Weighting_ka <= rtCP_NM_Value_d[i]) {
      rtb_impMethod_k0[i + 202] = rtb_Weighting_ka;
    } else {
      rtb_impMethod_k0[i + 202] = rtCP_NM_Value_d[i];
    }

    /* MinMax: '<S13>/impMethod' incorporates:
     *  Constant: '<S60>/ZO'
     *  MinMax: '<S13>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_ZO_Value[i]) {
      rtb_impMethod_p[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_p[i] = rtCP_ZO_Value[i];
    }
  }

  /* MinMax: '<S13>/impMethod' incorporates:
   *  Constant: '<S59>/ZO'
   *  MinMax: '<S13>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_ZO_Value_o[i]) {
      rtb_impMethod_p[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_p[i + 101] = rtCP_ZO_Value_o[i];
    }
  }

  /* MinMax: '<S14>/andorMethod' */
  if (rtb_Weighting_p <= rtb_Exponentialgaussmf_o) {
    rtb_AveragingCOA_d = rtb_Weighting_p;
  } else {
    rtb_AveragingCOA_d = rtb_Exponentialgaussmf_o;
  }

  /* Product: '<S14>/Weighting' incorporates:
   *  MinMax: '<S14>/andorMethod'
   */
  rtb_Weighting_p = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S13>/impMethod' incorporates:
     *  Constant: '<S58>/NS'
     */
    if (rtb_Weighting_k <= rtCP_NS_Value[i]) {
      rtb_impMethod_p[i + 202] = rtb_Weighting_k;
    } else {
      rtb_impMethod_p[i + 202] = rtCP_NS_Value[i];
    }

    /* MinMax: '<S14>/impMethod' incorporates:
     *  Constant: '<S60>/NS'
     *  MinMax: '<S14>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_NS_Value_n[i]) {
      rtb_impMethod_c4[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_c4[i] = rtCP_NS_Value_n[i];
    }
  }

  /* MinMax: '<S14>/impMethod' incorporates:
   *  Constant: '<S59>/ZO'
   *  MinMax: '<S14>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_ZO_Value_o[i]) {
      rtb_impMethod_c4[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_c4[i + 101] = rtCP_ZO_Value_o[i];
    }
  }

  /* Product: '<S69>/Product (gaussmf)' incorporates:
   *  Constant: '<S69>/mu'
   *  Constant: '<S69>/sigma'
   *  Sum: '<S69>/Sum'
   */
  rtb_Weighting_o = (rtb_Weighting_lf - -2.0) / 0.8494;

  /* Math: '<S69>/Exponential (gaussmf)' incorporates:
   *  Gain: '<S69>/Gain'
   *  Math: '<S69>/Squaring (gaussmf)'
   *
   * About '<S69>/Exponential (gaussmf)':
   *  Operator: exp
   */
  rtb_Weighting_o = exp(rtb_Weighting_o * rtb_Weighting_o * -0.5);

  /* MinMax: '<S15>/andorMethod' */
  if (rtb_Weighting_o <= rtb_Weighting_f2) {
    rtb_AveragingCOA_d = rtb_Weighting_o;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_f2;
  }

  /* Product: '<S15>/Weighting' incorporates:
   *  MinMax: '<S15>/andorMethod'
   */
  rtb_Weighting_eu = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S14>/impMethod' incorporates:
     *  Constant: '<S58>/ZO'
     */
    if (rtb_Weighting_p <= rtCP_ZO_Value_i[i]) {
      rtb_impMethod_c4[i + 202] = rtb_Weighting_p;
    } else {
      rtb_impMethod_c4[i + 202] = rtCP_ZO_Value_i[i];
    }

    /* MinMax: '<S15>/impMethod' incorporates:
     *  Constant: '<S60>/PM'
     *  MinMax: '<S15>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_PM_Value[i]) {
      rtb_impMethod_e[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_e[i] = rtCP_PM_Value[i];
    }
  }

  /* MinMax: '<S15>/impMethod' incorporates:
   *  Constant: '<S59>/NB'
   *  MinMax: '<S15>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_NB_Value[i]) {
      rtb_impMethod_e[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_e[i + 101] = rtCP_NB_Value[i];
    }
  }

  /* MinMax: '<S16>/andorMethod' */
  if (rtb_Weighting_o <= rtb_Weighting_k0) {
    rtb_AveragingCOA_d = rtb_Weighting_o;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_k0;
  }

  /* Product: '<S16>/Weighting' incorporates:
   *  MinMax: '<S16>/andorMethod'
   */
  rtb_Weighting_lt = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S15>/impMethod' incorporates:
     *  Constant: '<S58>/ZO'
     */
    if (rtb_Weighting_eu <= rtCP_ZO_Value_i[i]) {
      rtb_impMethod_e[i + 202] = rtb_Weighting_eu;
    } else {
      rtb_impMethod_e[i + 202] = rtCP_ZO_Value_i[i];
    }

    /* MinMax: '<S16>/impMethod' incorporates:
     *  Constant: '<S60>/PM'
     *  MinMax: '<S16>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_PM_Value[i]) {
      rtb_impMethod_g[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_g[i] = rtCP_PM_Value[i];
    }
  }

  /* MinMax: '<S16>/impMethod' incorporates:
   *  Constant: '<S59>/NM'
   *  MinMax: '<S16>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_NM_Value[i]) {
      rtb_impMethod_g[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_g[i + 101] = rtCP_NM_Value[i];
    }
  }

  /* MinMax: '<S17>/andorMethod' */
  if (rtb_Weighting_o <= rtb_Weighting_nm) {
    rtb_AveragingCOA_d = rtb_Weighting_o;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_nm;
  }

  /* Product: '<S17>/Weighting' incorporates:
   *  MinMax: '<S17>/andorMethod'
   */
  rtb_Weighting_kv = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S16>/impMethod' incorporates:
     *  Constant: '<S58>/NS'
     */
    if (rtb_Weighting_lt <= rtCP_NS_Value[i]) {
      rtb_impMethod_g[i + 202] = rtb_Weighting_lt;
    } else {
      rtb_impMethod_g[i + 202] = rtCP_NS_Value[i];
    }

    /* MinMax: '<S17>/impMethod' incorporates:
     *  Constant: '<S60>/PM'
     *  MinMax: '<S17>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_PM_Value[i]) {
      rtb_impMethod_gv[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_gv[i] = rtCP_PM_Value[i];
    }
  }

  /* MinMax: '<S17>/impMethod' incorporates:
   *  Constant: '<S59>/NS'
   *  MinMax: '<S17>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_NS_Value_a[i]) {
      rtb_impMethod_gv[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_gv[i + 101] = rtCP_NS_Value_a[i];
    }
  }

  /* MinMax: '<S18>/andorMethod' */
  if (rtb_Weighting_o <= rtb_Weighting_hq) {
    rtb_AveragingCOA_d = rtb_Weighting_o;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_hq;
  }

  /* Product: '<S18>/Weighting' incorporates:
   *  MinMax: '<S18>/andorMethod'
   */
  rtb_Weighting_gha = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S17>/impMethod' incorporates:
     *  Constant: '<S58>/NM'
     */
    if (rtb_Weighting_kv <= rtCP_NM_Value_d[i]) {
      rtb_impMethod_gv[i + 202] = rtb_Weighting_kv;
    } else {
      rtb_impMethod_gv[i + 202] = rtCP_NM_Value_d[i];
    }

    /* MinMax: '<S18>/impMethod' incorporates:
     *  Constant: '<S60>/PS'
     *  MinMax: '<S18>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_PS_Value_f[i]) {
      rtb_impMethod_ha[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_ha[i] = rtCP_PS_Value_f[i];
    }
  }

  /* MinMax: '<S18>/impMethod' incorporates:
   *  Constant: '<S59>/NS'
   *  MinMax: '<S18>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_NS_Value_a[i]) {
      rtb_impMethod_ha[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_ha[i + 101] = rtCP_NS_Value_a[i];
    }
  }

  /* MinMax: '<S19>/andorMethod' */
  if (rtb_Weighting_o <= rtb_Weighting_gj) {
    rtb_AveragingCOA_d = rtb_Weighting_o;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_gj;
  }

  /* Product: '<S19>/Weighting' incorporates:
   *  MinMax: '<S19>/andorMethod'
   */
  rtb_Weighting_bj = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S18>/impMethod' incorporates:
     *  Constant: '<S58>/NM'
     */
    if (rtb_Weighting_gha <= rtCP_NM_Value_d[i]) {
      rtb_impMethod_ha[i + 202] = rtb_Weighting_gha;
    } else {
      rtb_impMethod_ha[i + 202] = rtCP_NM_Value_d[i];
    }

    /* MinMax: '<S19>/impMethod' incorporates:
     *  Constant: '<S60>/ZO'
     *  MinMax: '<S19>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_ZO_Value[i]) {
      rtb_impMethod_n4[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_n4[i] = rtCP_ZO_Value[i];
    }
  }

  /* MinMax: '<S19>/impMethod' incorporates:
   *  Constant: '<S59>/ZO'
   *  MinMax: '<S19>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_ZO_Value_o[i]) {
      rtb_impMethod_n4[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_n4[i + 101] = rtCP_ZO_Value_o[i];
    }
  }

  /* MinMax: '<S21>/andorMethod' */
  if (rtb_Weighting_o <= rtb_Exponentialgaussmf) {
    rtb_AveragingCOA_d = rtb_Weighting_o;
  } else {
    rtb_AveragingCOA_d = rtb_Exponentialgaussmf;
  }

  /* Product: '<S21>/Weighting' incorporates:
   *  MinMax: '<S21>/andorMethod'
   */
  rtb_Weighting_it = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S19>/impMethod' incorporates:
     *  Constant: '<S58>/NS'
     */
    if (rtb_Weighting_bj <= rtCP_NS_Value[i]) {
      rtb_impMethod_n4[i + 202] = rtb_Weighting_bj;
    } else {
      rtb_impMethod_n4[i + 202] = rtCP_NS_Value[i];
    }

    /* MinMax: '<S21>/impMethod' incorporates:
     *  Constant: '<S60>/NS'
     *  MinMax: '<S21>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_NS_Value_n[i]) {
      rtb_impMethod_l[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_l[i] = rtCP_NS_Value_n[i];
    }
  }

  /* MinMax: '<S21>/impMethod' incorporates:
   *  Constant: '<S59>/PS'
   *  MinMax: '<S21>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_PS_Value_a[i]) {
      rtb_impMethod_l[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_l[i + 101] = rtCP_PS_Value_a[i];
    }
  }

  /* MinMax: '<S22>/andorMethod' */
  if (rtb_Weighting_o <= rtb_Exponentialgaussmf_o) {
    rtb_AveragingCOA_d = rtb_Weighting_o;
  } else {
    rtb_AveragingCOA_d = rtb_Exponentialgaussmf_o;
  }

  /* Product: '<S22>/Weighting' incorporates:
   *  MinMax: '<S22>/andorMethod'
   */
  rtb_Weighting_o = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S21>/impMethod' incorporates:
     *  Constant: '<S58>/NS'
     */
    if (rtb_Weighting_it <= rtCP_NS_Value[i]) {
      rtb_impMethod_l[i + 202] = rtb_Weighting_it;
    } else {
      rtb_impMethod_l[i + 202] = rtCP_NS_Value[i];
    }

    /* MinMax: '<S22>/impMethod' incorporates:
     *  Constant: '<S60>/NS'
     *  MinMax: '<S22>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_NS_Value_n[i]) {
      rtb_impMethod_c1[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_c1[i] = rtCP_NS_Value_n[i];
    }
  }

  /* MinMax: '<S22>/impMethod' incorporates:
   *  Constant: '<S59>/PS'
   *  MinMax: '<S22>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_PS_Value_a[i]) {
      rtb_impMethod_c1[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_c1[i + 101] = rtCP_PS_Value_a[i];
    }
  }

  /* Product: '<S73>/Product (gaussmf)' incorporates:
   *  Constant: '<S73>/sigma'
   *  Sum: '<S73>/Sum'
   */
  rtb_Weighting_c = rtb_Weighting_lf / 0.8494;

  /* Math: '<S73>/Exponential (gaussmf)' incorporates:
   *  Gain: '<S73>/Gain'
   *  Math: '<S73>/Squaring (gaussmf)'
   *
   * About '<S73>/Exponential (gaussmf)':
   *  Operator: exp
   */
  rtb_Weighting_c = exp(rtb_Weighting_c * rtb_Weighting_c * -0.5);

  /* MinMax: '<S23>/andorMethod' */
  if (rtb_Weighting_c <= rtb_Weighting_f2) {
    rtb_AveragingCOA_d = rtb_Weighting_c;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_f2;
  }

  /* Product: '<S23>/Weighting' incorporates:
   *  MinMax: '<S23>/andorMethod'
   */
  rtb_Weighting_p3 = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S22>/impMethod' incorporates:
     *  Constant: '<S58>/ZO'
     */
    if (rtb_Weighting_o <= rtCP_ZO_Value_i[i]) {
      rtb_impMethod_c1[i + 202] = rtb_Weighting_o;
    } else {
      rtb_impMethod_c1[i + 202] = rtCP_ZO_Value_i[i];
    }

    /* MinMax: '<S23>/impMethod' incorporates:
     *  Constant: '<S60>/PM'
     *  MinMax: '<S23>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_PM_Value[i]) {
      rtb_impMethod_n[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_n[i] = rtCP_PM_Value[i];
    }
  }

  /* MinMax: '<S23>/impMethod' incorporates:
   *  Constant: '<S59>/NM'
   *  MinMax: '<S23>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_NM_Value[i]) {
      rtb_impMethod_n[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_n[i + 101] = rtCP_NM_Value[i];
    }
  }

  /* MinMax: '<S24>/andorMethod' */
  if (rtb_Weighting_c <= rtb_Weighting_k0) {
    rtb_AveragingCOA_d = rtb_Weighting_c;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_k0;
  }

  /* Product: '<S24>/Weighting' incorporates:
   *  MinMax: '<S24>/andorMethod'
   */
  rtb_Weighting_gh = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S23>/impMethod' incorporates:
     *  Constant: '<S58>/ZO'
     */
    if (rtb_Weighting_p3 <= rtCP_ZO_Value_i[i]) {
      rtb_impMethod_n[i + 202] = rtb_Weighting_p3;
    } else {
      rtb_impMethod_n[i + 202] = rtCP_ZO_Value_i[i];
    }

    /* MinMax: '<S24>/impMethod' incorporates:
     *  Constant: '<S60>/PM'
     *  MinMax: '<S24>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_PM_Value[i]) {
      rtb_impMethod_hr[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_hr[i] = rtCP_PM_Value[i];
    }
  }

  /* MinMax: '<S24>/impMethod' incorporates:
   *  Constant: '<S59>/NM'
   *  MinMax: '<S24>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_NM_Value[i]) {
      rtb_impMethod_hr[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_hr[i + 101] = rtCP_NM_Value[i];
    }
  }

  /* MinMax: '<S25>/andorMethod' */
  if (rtb_Weighting_c <= rtb_Weighting_nm) {
    rtb_AveragingCOA_d = rtb_Weighting_c;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_nm;
  }

  /* Product: '<S25>/Weighting' incorporates:
   *  MinMax: '<S25>/andorMethod'
   */
  rtb_Weighting_gq = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S24>/impMethod' incorporates:
     *  Constant: '<S58>/NS'
     */
    if (rtb_Weighting_gh <= rtCP_NS_Value[i]) {
      rtb_impMethod_hr[i + 202] = rtb_Weighting_gh;
    } else {
      rtb_impMethod_hr[i + 202] = rtCP_NS_Value[i];
    }

    /* MinMax: '<S25>/impMethod' incorporates:
     *  Constant: '<S60>/PS'
     *  MinMax: '<S25>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_PS_Value_f[i]) {
      rtb_impMethod_k[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_k[i] = rtCP_PS_Value_f[i];
    }
  }

  /* MinMax: '<S25>/impMethod' incorporates:
   *  Constant: '<S59>/NS'
   *  MinMax: '<S25>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_NS_Value_a[i]) {
      rtb_impMethod_k[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_k[i + 101] = rtCP_NS_Value_a[i];
    }
  }

  /* MinMax: '<S26>/andorMethod' */
  if (rtb_Weighting_c <= rtb_Weighting_hq) {
    rtb_AveragingCOA_d = rtb_Weighting_c;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_hq;
  }

  /* Product: '<S26>/Weighting' incorporates:
   *  MinMax: '<S26>/andorMethod'
   */
  rtb_Weighting_op = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S25>/impMethod' incorporates:
     *  Constant: '<S58>/NS'
     */
    if (rtb_Weighting_gq <= rtCP_NS_Value[i]) {
      rtb_impMethod_k[i + 202] = rtb_Weighting_gq;
    } else {
      rtb_impMethod_k[i + 202] = rtCP_NS_Value[i];
    }

    /* MinMax: '<S26>/impMethod' incorporates:
     *  Constant: '<S60>/ZO'
     *  MinMax: '<S26>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_ZO_Value[i]) {
      rtb_impMethod_dt[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_dt[i] = rtCP_ZO_Value[i];
    }
  }

  /* MinMax: '<S26>/impMethod' incorporates:
   *  Constant: '<S59>/ZO'
   *  MinMax: '<S26>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_ZO_Value_o[i]) {
      rtb_impMethod_dt[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_dt[i + 101] = rtCP_ZO_Value_o[i];
    }
  }

  /* MinMax: '<S27>/andorMethod' */
  if (rtb_Weighting_c <= rtb_Weighting_gj) {
    rtb_AveragingCOA_d = rtb_Weighting_c;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_gj;
  }

  /* Product: '<S27>/Weighting' incorporates:
   *  MinMax: '<S27>/andorMethod'
   */
  rtb_Weighting_ef = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S26>/impMethod' incorporates:
     *  Constant: '<S58>/NS'
     */
    if (rtb_Weighting_op <= rtCP_NS_Value[i]) {
      rtb_impMethod_dt[i + 202] = rtb_Weighting_op;
    } else {
      rtb_impMethod_dt[i + 202] = rtCP_NS_Value[i];
    }

    /* MinMax: '<S27>/impMethod' incorporates:
     *  Constant: '<S60>/NS'
     *  MinMax: '<S27>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_NS_Value_n[i]) {
      rtb_impMethod_jl[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_jl[i] = rtCP_NS_Value_n[i];
    }
  }

  /* MinMax: '<S27>/impMethod' incorporates:
   *  Constant: '<S59>/PS'
   *  MinMax: '<S27>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_PS_Value_a[i]) {
      rtb_impMethod_jl[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_jl[i + 101] = rtCP_PS_Value_a[i];
    }
  }

  /* MinMax: '<S28>/andorMethod' */
  if (rtb_Weighting_c <= rtb_Exponentialgaussmf) {
    rtb_AveragingCOA_d = rtb_Weighting_c;
  } else {
    rtb_AveragingCOA_d = rtb_Exponentialgaussmf;
  }

  /* Product: '<S28>/Weighting' incorporates:
   *  MinMax: '<S28>/andorMethod'
   */
  rtb_Weighting_ml = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S27>/impMethod' incorporates:
     *  Constant: '<S58>/NS'
     */
    if (rtb_Weighting_ef <= rtCP_NS_Value[i]) {
      rtb_impMethod_jl[i + 202] = rtb_Weighting_ef;
    } else {
      rtb_impMethod_jl[i + 202] = rtCP_NS_Value[i];
    }

    /* MinMax: '<S28>/impMethod' incorporates:
     *  Constant: '<S60>/NM'
     *  MinMax: '<S28>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_NM_Value_c[i]) {
      rtb_impMethod_km[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_km[i] = rtCP_NM_Value_c[i];
    }
  }

  /* MinMax: '<S28>/impMethod' incorporates:
   *  Constant: '<S59>/PM'
   *  MinMax: '<S28>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_PM_Value_k[i]) {
      rtb_impMethod_km[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_km[i + 101] = rtCP_PM_Value_k[i];
    }
  }

  /* MinMax: '<S29>/andorMethod' */
  if (rtb_Weighting_c <= rtb_Exponentialgaussmf_o) {
    rtb_AveragingCOA_d = rtb_Weighting_c;
  } else {
    rtb_AveragingCOA_d = rtb_Exponentialgaussmf_o;
  }

  /* Product: '<S29>/Weighting' incorporates:
   *  MinMax: '<S29>/andorMethod'
   */
  rtb_Weighting_c = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S28>/impMethod' incorporates:
     *  Constant: '<S58>/NS'
     */
    if (rtb_Weighting_ml <= rtCP_NS_Value[i]) {
      rtb_impMethod_km[i + 202] = rtb_Weighting_ml;
    } else {
      rtb_impMethod_km[i + 202] = rtCP_NS_Value[i];
    }

    /* MinMax: '<S29>/impMethod' incorporates:
     *  Constant: '<S60>/NM'
     *  MinMax: '<S29>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_NM_Value_c[i]) {
      rtb_impMethod_j[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_j[i] = rtCP_NM_Value_c[i];
    }
  }

  /* MinMax: '<S29>/impMethod' incorporates:
   *  Constant: '<S59>/PM'
   *  MinMax: '<S29>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_PM_Value_k[i]) {
      rtb_impMethod_j[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_j[i + 101] = rtCP_PM_Value_k[i];
    }
  }

  /* Product: '<S72>/Product (gaussmf)' incorporates:
   *  Constant: '<S72>/mu'
   *  Constant: '<S72>/sigma'
   *  Sum: '<S72>/Sum'
   */
  rtb_Weighting_br = (rtb_Weighting_lf - 2.0) / 0.8494;

  /* Math: '<S72>/Exponential (gaussmf)' incorporates:
   *  Gain: '<S72>/Gain'
   *  Math: '<S72>/Squaring (gaussmf)'
   *
   * About '<S72>/Exponential (gaussmf)':
   *  Operator: exp
   */
  rtb_Weighting_br = exp(rtb_Weighting_br * rtb_Weighting_br * -0.5);

  /* MinMax: '<S30>/andorMethod' */
  if (rtb_Weighting_br <= rtb_Weighting_f2) {
    rtb_AveragingCOA_d = rtb_Weighting_br;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_f2;
  }

  /* Product: '<S30>/Weighting' incorporates:
   *  MinMax: '<S30>/andorMethod'
   */
  rtb_Weighting_n = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S29>/impMethod' incorporates:
     *  Constant: '<S58>/ZO'
     */
    if (rtb_Weighting_c <= rtCP_ZO_Value_i[i]) {
      rtb_impMethod_j[i + 202] = rtb_Weighting_c;
    } else {
      rtb_impMethod_j[i + 202] = rtCP_ZO_Value_i[i];
    }

    /* MinMax: '<S30>/impMethod' incorporates:
     *  Constant: '<S60>/PS'
     *  MinMax: '<S30>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_PS_Value_f[i]) {
      rtb_impMethod_hy[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_hy[i] = rtCP_PS_Value_f[i];
    }
  }

  /* MinMax: '<S30>/impMethod' incorporates:
   *  Constant: '<S59>/NM'
   *  MinMax: '<S30>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_NM_Value[i]) {
      rtb_impMethod_hy[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_hy[i + 101] = rtCP_NM_Value[i];
    }
  }

  /* MinMax: '<S32>/andorMethod' */
  if (rtb_Weighting_br <= rtb_Weighting_k0) {
    rtb_AveragingCOA_d = rtb_Weighting_br;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_k0;
  }

  /* Product: '<S32>/Weighting' incorporates:
   *  MinMax: '<S32>/andorMethod'
   */
  rtb_Weighting_h = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S30>/impMethod' incorporates:
     *  Constant: '<S58>/ZO'
     */
    if (rtb_Weighting_n <= rtCP_ZO_Value_i[i]) {
      rtb_impMethod_hy[i + 202] = rtb_Weighting_n;
    } else {
      rtb_impMethod_hy[i + 202] = rtCP_ZO_Value_i[i];
    }

    /* MinMax: '<S32>/impMethod' incorporates:
     *  Constant: '<S60>/PS'
     *  MinMax: '<S32>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_PS_Value_f[i]) {
      rtb_impMethod_my[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_my[i] = rtCP_PS_Value_f[i];
    }
  }

  /* MinMax: '<S32>/impMethod' incorporates:
   *  Constant: '<S59>/NS'
   *  MinMax: '<S32>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_NS_Value_a[i]) {
      rtb_impMethod_my[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_my[i + 101] = rtCP_NS_Value_a[i];
    }
  }

  /* MinMax: '<S33>/andorMethod' */
  if (rtb_Weighting_br <= rtb_Weighting_nm) {
    rtb_AveragingCOA_d = rtb_Weighting_br;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_nm;
  }

  /* Product: '<S33>/Weighting' incorporates:
   *  MinMax: '<S33>/andorMethod'
   */
  rtb_Weighting_f1 = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S32>/impMethod' incorporates:
     *  Constant: '<S58>/ZO'
     */
    if (rtb_Weighting_h <= rtCP_ZO_Value_i[i]) {
      rtb_impMethod_my[i + 202] = rtb_Weighting_h;
    } else {
      rtb_impMethod_my[i + 202] = rtCP_ZO_Value_i[i];
    }

    /* MinMax: '<S33>/impMethod' incorporates:
     *  Constant: '<S60>/ZO'
     *  MinMax: '<S33>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_ZO_Value[i]) {
      rtb_impMethod_o[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_o[i] = rtCP_ZO_Value[i];
    }
  }

  /* MinMax: '<S33>/impMethod' incorporates:
   *  Constant: '<S59>/ZO'
   *  MinMax: '<S33>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_ZO_Value_o[i]) {
      rtb_impMethod_o[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_o[i + 101] = rtCP_ZO_Value_o[i];
    }
  }

  /* MinMax: '<S34>/andorMethod' */
  if (rtb_Weighting_br <= rtb_Weighting_hq) {
    rtb_AveragingCOA_d = rtb_Weighting_br;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_hq;
  }

  /* Product: '<S34>/Weighting' incorporates:
   *  MinMax: '<S34>/andorMethod'
   */
  rtb_Weighting_nu = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S33>/impMethod' incorporates:
     *  Constant: '<S58>/ZO'
     */
    if (rtb_Weighting_f1 <= rtCP_ZO_Value_i[i]) {
      rtb_impMethod_o[i + 202] = rtb_Weighting_f1;
    } else {
      rtb_impMethod_o[i + 202] = rtCP_ZO_Value_i[i];
    }

    /* MinMax: '<S34>/impMethod' incorporates:
     *  Constant: '<S60>/NS'
     *  MinMax: '<S34>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_NS_Value_n[i]) {
      rtb_impMethod_ce[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_ce[i] = rtCP_NS_Value_n[i];
    }
  }

  /* MinMax: '<S34>/impMethod' incorporates:
   *  Constant: '<S59>/PS'
   *  MinMax: '<S34>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_PS_Value_a[i]) {
      rtb_impMethod_ce[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_ce[i + 101] = rtCP_PS_Value_a[i];
    }
  }

  /* MinMax: '<S35>/andorMethod' */
  if (rtb_Weighting_br <= rtb_Weighting_gj) {
    rtb_AveragingCOA_d = rtb_Weighting_br;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_gj;
  }

  /* Product: '<S35>/Weighting' incorporates:
   *  MinMax: '<S35>/andorMethod'
   */
  rtb_Weighting_oy = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S34>/impMethod' incorporates:
     *  Constant: '<S58>/ZO'
     */
    if (rtb_Weighting_nu <= rtCP_ZO_Value_i[i]) {
      rtb_impMethod_ce[i + 202] = rtb_Weighting_nu;
    } else {
      rtb_impMethod_ce[i + 202] = rtCP_ZO_Value_i[i];
    }

    /* MinMax: '<S35>/impMethod' incorporates:
     *  Constant: '<S60>/NS'
     *  MinMax: '<S35>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_NS_Value_n[i]) {
      rtb_impMethod_hl[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_hl[i] = rtCP_NS_Value_n[i];
    }
  }

  /* MinMax: '<S35>/impMethod' incorporates:
   *  Constant: '<S59>/PS'
   *  MinMax: '<S35>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_PS_Value_a[i]) {
      rtb_impMethod_hl[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_hl[i + 101] = rtCP_PS_Value_a[i];
    }
  }

  /* MinMax: '<S36>/andorMethod' */
  if (rtb_Weighting_br <= rtb_Exponentialgaussmf) {
    rtb_AveragingCOA_d = rtb_Weighting_br;
  } else {
    rtb_AveragingCOA_d = rtb_Exponentialgaussmf;
  }

  /* Product: '<S36>/Weighting' incorporates:
   *  MinMax: '<S36>/andorMethod'
   */
  rtb_Weighting_kjr = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S35>/impMethod' incorporates:
     *  Constant: '<S58>/ZO'
     */
    if (rtb_Weighting_oy <= rtCP_ZO_Value_i[i]) {
      rtb_impMethod_hl[i + 202] = rtb_Weighting_oy;
    } else {
      rtb_impMethod_hl[i + 202] = rtCP_ZO_Value_i[i];
    }

    /* MinMax: '<S36>/impMethod' incorporates:
     *  Constant: '<S60>/NM'
     *  MinMax: '<S36>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_NM_Value_c[i]) {
      rtb_impMethod_h[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_h[i] = rtCP_NM_Value_c[i];
    }
  }

  /* MinMax: '<S36>/impMethod' incorporates:
   *  Constant: '<S59>/PM'
   *  MinMax: '<S36>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_PM_Value_k[i]) {
      rtb_impMethod_h[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_h[i + 101] = rtCP_PM_Value_k[i];
    }
  }

  /* MinMax: '<S37>/andorMethod' */
  if (rtb_Weighting_br <= rtb_Exponentialgaussmf_o) {
    rtb_AveragingCOA_d = rtb_Weighting_br;
  } else {
    rtb_AveragingCOA_d = rtb_Exponentialgaussmf_o;
  }

  /* Product: '<S37>/Weighting' incorporates:
   *  MinMax: '<S37>/andorMethod'
   */
  rtb_Weighting_br = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S36>/impMethod' incorporates:
     *  Constant: '<S58>/ZO'
     */
    if (rtb_Weighting_kjr <= rtCP_ZO_Value_i[i]) {
      rtb_impMethod_h[i + 202] = rtb_Weighting_kjr;
    } else {
      rtb_impMethod_h[i + 202] = rtCP_ZO_Value_i[i];
    }

    /* MinMax: '<S37>/impMethod' incorporates:
     *  Constant: '<S60>/NM'
     *  MinMax: '<S37>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_NM_Value_c[i]) {
      rtb_impMethod_cn[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_cn[i] = rtCP_NM_Value_c[i];
    }
  }

  /* MinMax: '<S37>/impMethod' incorporates:
   *  Constant: '<S59>/PB'
   *  MinMax: '<S37>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_PB_Value_a[i]) {
      rtb_impMethod_cn[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_cn[i + 101] = rtCP_PB_Value_a[i];
    }
  }

  /* Product: '<S71>/Product (gaussmf)' incorporates:
   *  Constant: '<S71>/mu'
   *  Constant: '<S71>/sigma'
   *  Sum: '<S71>/Sum'
   */
  rtb_Weighting_e1 = (rtb_Weighting_lf - 4.0) / 0.8494;

  /* Math: '<S71>/Exponential (gaussmf)' incorporates:
   *  Gain: '<S71>/Gain'
   *  Math: '<S71>/Squaring (gaussmf)'
   *
   * About '<S71>/Exponential (gaussmf)':
   *  Operator: exp
   */
  rtb_Weighting_e1 = exp(rtb_Weighting_e1 * rtb_Weighting_e1 * -0.5);

  /* MinMax: '<S38>/andorMethod' */
  if (rtb_Weighting_e1 <= rtb_Weighting_f2) {
    rtb_AveragingCOA_d = rtb_Weighting_e1;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_f2;
  }

  /* Product: '<S38>/Weighting' incorporates:
   *  MinMax: '<S38>/andorMethod'
   */
  rtb_Weighting_kh = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S37>/impMethod' incorporates:
     *  Constant: '<S58>/ZO'
     */
    if (rtb_Weighting_br <= rtCP_ZO_Value_i[i]) {
      rtb_impMethod_cn[i + 202] = rtb_Weighting_br;
    } else {
      rtb_impMethod_cn[i + 202] = rtCP_ZO_Value_i[i];
    }

    /* MinMax: '<S38>/impMethod' incorporates:
     *  Constant: '<S60>/PS'
     *  MinMax: '<S38>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_PS_Value_f[i]) {
      rtb_impMethod_a[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_a[i] = rtCP_PS_Value_f[i];
    }
  }

  /* MinMax: '<S38>/impMethod' incorporates:
   *  Constant: '<S59>/ZO'
   *  MinMax: '<S38>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_ZO_Value_o[i]) {
      rtb_impMethod_a[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_a[i + 101] = rtCP_ZO_Value_o[i];
    }
  }

  /* MinMax: '<S39>/andorMethod' */
  if (rtb_Weighting_e1 <= rtb_Weighting_k0) {
    rtb_AveragingCOA_d = rtb_Weighting_e1;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_k0;
  }

  /* Product: '<S39>/Weighting' incorporates:
   *  MinMax: '<S39>/andorMethod'
   */
  rtb_Weighting_d = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S38>/impMethod' incorporates:
     *  Constant: '<S58>/PB'
     */
    if (rtb_Weighting_kh <= rtCP_PB_Value_l[i]) {
      rtb_impMethod_a[i + 202] = rtb_Weighting_kh;
    } else {
      rtb_impMethod_a[i + 202] = rtCP_PB_Value_l[i];
    }

    /* MinMax: '<S39>/impMethod' incorporates:
     *  Constant: '<S60>/ZO'
     *  MinMax: '<S39>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_ZO_Value[i]) {
      rtb_impMethod_o0[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_o0[i] = rtCP_ZO_Value[i];
    }
  }

  /* MinMax: '<S39>/impMethod' incorporates:
   *  Constant: '<S59>/ZO'
   *  MinMax: '<S39>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_ZO_Value_o[i]) {
      rtb_impMethod_o0[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_o0[i + 101] = rtCP_ZO_Value_o[i];
    }
  }

  /* MinMax: '<S40>/andorMethod' */
  if (rtb_Weighting_e1 <= rtb_Weighting_nm) {
    rtb_AveragingCOA_d = rtb_Weighting_e1;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_nm;
  }

  /* Product: '<S40>/Weighting' incorporates:
   *  MinMax: '<S40>/andorMethod'
   */
  rtb_Weighting_a = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S39>/impMethod' incorporates:
     *  Constant: '<S58>/NS'
     */
    if (rtb_Weighting_d <= rtCP_NS_Value[i]) {
      rtb_impMethod_o0[i + 202] = rtb_Weighting_d;
    } else {
      rtb_impMethod_o0[i + 202] = rtCP_NS_Value[i];
    }

    /* MinMax: '<S40>/impMethod' incorporates:
     *  Constant: '<S60>/NS'
     *  MinMax: '<S40>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_NS_Value_n[i]) {
      rtb_impMethod_hd[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_hd[i] = rtCP_NS_Value_n[i];
    }
  }

  /* MinMax: '<S40>/impMethod' incorporates:
   *  Constant: '<S59>/PS'
   *  MinMax: '<S40>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_PS_Value_a[i]) {
      rtb_impMethod_hd[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_hd[i + 101] = rtCP_PS_Value_a[i];
    }
  }

  /* MinMax: '<S41>/andorMethod' */
  if (rtb_Weighting_e1 <= rtb_Weighting_hq) {
    rtb_AveragingCOA_d = rtb_Weighting_e1;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_hq;
  }

  /* Product: '<S41>/Weighting' incorporates:
   *  MinMax: '<S41>/andorMethod'
   */
  rtb_Weighting_l = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S40>/impMethod' incorporates:
     *  Constant: '<S58>/PS'
     */
    if (rtb_Weighting_a <= rtCP_PS_Value[i]) {
      rtb_impMethod_hd[i + 202] = rtb_Weighting_a;
    } else {
      rtb_impMethod_hd[i + 202] = rtCP_PS_Value[i];
    }

    /* MinMax: '<S41>/impMethod' incorporates:
     *  Constant: '<S60>/NM'
     *  MinMax: '<S41>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_NM_Value_c[i]) {
      rtb_impMethod_dg[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_dg[i] = rtCP_NM_Value_c[i];
    }
  }

  /* MinMax: '<S41>/impMethod' incorporates:
   *  Constant: '<S59>/PS'
   *  MinMax: '<S41>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_PS_Value_a[i]) {
      rtb_impMethod_dg[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_dg[i + 101] = rtCP_PS_Value_a[i];
    }
  }

  /* MinMax: '<S43>/andorMethod' */
  if (rtb_Weighting_e1 <= rtb_Weighting_gj) {
    rtb_AveragingCOA_d = rtb_Weighting_e1;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_gj;
  }

  /* Product: '<S43>/Weighting' incorporates:
   *  MinMax: '<S43>/andorMethod'
   */
  rtb_Weighting_i = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S41>/impMethod' incorporates:
     *  Constant: '<S58>/PS'
     */
    if (rtb_Weighting_l <= rtCP_PS_Value[i]) {
      rtb_impMethod_dg[i + 202] = rtb_Weighting_l;
    } else {
      rtb_impMethod_dg[i + 202] = rtCP_PS_Value[i];
    }

    /* MinMax: '<S43>/impMethod' incorporates:
     *  Constant: '<S60>/NM'
     *  MinMax: '<S43>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_NM_Value_c[i]) {
      rtb_impMethod_mu[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_mu[i] = rtCP_NM_Value_c[i];
    }
  }

  /* MinMax: '<S43>/impMethod' incorporates:
   *  Constant: '<S59>/PM'
   *  MinMax: '<S43>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_PM_Value_k[i]) {
      rtb_impMethod_mu[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_mu[i + 101] = rtCP_PM_Value_k[i];
    }
  }

  /* MinMax: '<S44>/andorMethod' */
  if (rtb_Weighting_e1 <= rtb_Exponentialgaussmf) {
    rtb_AveragingCOA_d = rtb_Weighting_e1;
  } else {
    rtb_AveragingCOA_d = rtb_Exponentialgaussmf;
  }

  /* Product: '<S44>/Weighting' incorporates:
   *  MinMax: '<S44>/andorMethod'
   */
  rtb_Weighting_ky = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S43>/impMethod' incorporates:
     *  Constant: '<S58>/PS'
     */
    if (rtb_Weighting_i <= rtCP_PS_Value[i]) {
      rtb_impMethod_mu[i + 202] = rtb_Weighting_i;
    } else {
      rtb_impMethod_mu[i + 202] = rtCP_PS_Value[i];
    }

    /* MinMax: '<S44>/impMethod' incorporates:
     *  Constant: '<S60>/NM'
     *  MinMax: '<S44>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_NM_Value_c[i]) {
      rtb_impMethod_hk[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_hk[i] = rtCP_NM_Value_c[i];
    }
  }

  /* MinMax: '<S44>/impMethod' incorporates:
   *  Constant: '<S59>/PB'
   *  MinMax: '<S44>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_PB_Value_a[i]) {
      rtb_impMethod_hk[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_hk[i + 101] = rtCP_PB_Value_a[i];
    }
  }

  /* MinMax: '<S45>/andorMethod' */
  if (rtb_Weighting_e1 <= rtb_Exponentialgaussmf_o) {
    rtb_AveragingCOA_d = rtb_Weighting_e1;
  } else {
    rtb_AveragingCOA_d = rtb_Exponentialgaussmf_o;
  }

  /* Product: '<S45>/Weighting' incorporates:
   *  MinMax: '<S45>/andorMethod'
   */
  rtb_Weighting_e1 = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S44>/impMethod' incorporates:
     *  Constant: '<S58>/PS'
     */
    if (rtb_Weighting_ky <= rtCP_PS_Value[i]) {
      rtb_impMethod_hk[i + 202] = rtb_Weighting_ky;
    } else {
      rtb_impMethod_hk[i + 202] = rtCP_PS_Value[i];
    }

    /* MinMax: '<S45>/impMethod' incorporates:
     *  Constant: '<S60>/NB'
     *  MinMax: '<S45>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_NB_Value_d[i]) {
      rtb_impMethod_gz[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_gz[i] = rtCP_NB_Value_d[i];
    }
  }

  /* MinMax: '<S45>/impMethod' incorporates:
   *  Constant: '<S59>/PB'
   *  MinMax: '<S45>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_PB_Value_a[i]) {
      rtb_impMethod_gz[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_gz[i + 101] = rtCP_PB_Value_a[i];
    }
  }

  /* Product: '<S70>/Product (gaussmf)' incorporates:
   *  Constant: '<S70>/mu'
   *  Constant: '<S70>/sigma'
   *  Sum: '<S70>/Sum'
   */
  rtb_Weighting_lf = (rtb_Weighting_lf - 6.0) / 0.8494;

  /* Math: '<S70>/Exponential (gaussmf)' incorporates:
   *  Gain: '<S70>/Gain'
   *  Math: '<S70>/Squaring (gaussmf)'
   *
   * About '<S70>/Exponential (gaussmf)':
   *  Operator: exp
   */
  rtb_Weighting_lf = exp(rtb_Weighting_lf * rtb_Weighting_lf * -0.5);

  /* MinMax: '<S46>/andorMethod' */
  if (rtb_Weighting_lf <= rtb_Weighting_f2) {
    rtb_AveragingCOA_d = rtb_Weighting_lf;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_f2;
  }

  /* Product: '<S46>/Weighting' incorporates:
   *  MinMax: '<S46>/andorMethod'
   */
  rtb_ZeroFiringStrength = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S45>/impMethod' incorporates:
     *  Constant: '<S58>/PB'
     */
    if (rtb_Weighting_e1 <= rtCP_PB_Value_l[i]) {
      rtb_impMethod_gz[i + 202] = rtb_Weighting_e1;
    } else {
      rtb_impMethod_gz[i + 202] = rtCP_PB_Value_l[i];
    }

    /* MinMax: '<S46>/impMethod' incorporates:
     *  Constant: '<S60>/ZO'
     *  MinMax: '<S46>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_ZO_Value[i]) {
      rtb_impMethod_dd[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_dd[i] = rtCP_ZO_Value[i];
    }
  }

  /* MinMax: '<S46>/impMethod' incorporates:
   *  Constant: '<S59>/ZO'
   *  MinMax: '<S46>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_ZO_Value_o[i]) {
      rtb_impMethod_dd[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_dd[i + 101] = rtCP_ZO_Value_o[i];
    }
  }

  /* MinMax: '<S47>/andorMethod' */
  if (rtb_Weighting_lf <= rtb_Weighting_k0) {
    rtb_AveragingCOA_d = rtb_Weighting_lf;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_k0;
  }

  /* Product: '<S47>/Weighting' incorporates:
   *  MinMax: '<S47>/andorMethod'
   */
  rtb_Weighting_f2 = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S46>/impMethod' incorporates:
     *  Constant: '<S58>/PB'
     */
    if (rtb_ZeroFiringStrength <= rtCP_PB_Value_l[i]) {
      rtb_impMethod_dd[i + 202] = rtb_ZeroFiringStrength;
    } else {
      rtb_impMethod_dd[i + 202] = rtCP_PB_Value_l[i];
    }

    /* MinMax: '<S47>/impMethod' incorporates:
     *  Constant: '<S60>/ZO'
     *  MinMax: '<S47>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_ZO_Value[i]) {
      rtb_impMethod_gy[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_gy[i] = rtCP_ZO_Value[i];
    }
  }

  /* MinMax: '<S47>/impMethod' incorporates:
   *  Constant: '<S59>/ZO'
   *  MinMax: '<S47>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_ZO_Value_o[i]) {
      rtb_impMethod_gy[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_gy[i + 101] = rtCP_ZO_Value_o[i];
    }
  }

  /* MinMax: '<S48>/andorMethod' */
  if (rtb_Weighting_lf <= rtb_Weighting_nm) {
    rtb_AveragingCOA_d = rtb_Weighting_lf;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_nm;
  }

  /* Product: '<S48>/Weighting' incorporates:
   *  MinMax: '<S48>/andorMethod'
   */
  rtb_Weighting_k0 = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S47>/impMethod' incorporates:
     *  Constant: '<S58>/PM'
     */
    if (rtb_Weighting_f2 <= rtCP_PM_Value_b[i]) {
      rtb_impMethod_gy[i + 202] = rtb_Weighting_f2;
    } else {
      rtb_impMethod_gy[i + 202] = rtCP_PM_Value_b[i];
    }

    /* MinMax: '<S48>/impMethod' incorporates:
     *  Constant: '<S60>/NM'
     *  MinMax: '<S48>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_NM_Value_c[i]) {
      rtb_impMethod_gm[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_gm[i] = rtCP_NM_Value_c[i];
    }
  }

  /* MinMax: '<S48>/impMethod' incorporates:
   *  Constant: '<S59>/PS'
   *  MinMax: '<S48>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_PS_Value_a[i]) {
      rtb_impMethod_gm[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_gm[i + 101] = rtCP_PS_Value_a[i];
    }
  }

  /* MinMax: '<S49>/andorMethod' */
  if (rtb_Weighting_lf <= rtb_Weighting_hq) {
    rtb_AveragingCOA_d = rtb_Weighting_lf;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_hq;
  }

  /* Product: '<S49>/Weighting' incorporates:
   *  MinMax: '<S49>/andorMethod'
   */
  rtb_Weighting_nm = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S48>/impMethod' incorporates:
     *  Constant: '<S58>/PM'
     */
    if (rtb_Weighting_k0 <= rtCP_PM_Value_b[i]) {
      rtb_impMethod_gm[i + 202] = rtb_Weighting_k0;
    } else {
      rtb_impMethod_gm[i + 202] = rtCP_PM_Value_b[i];
    }

    /* MinMax: '<S49>/impMethod' incorporates:
     *  Constant: '<S60>/NM'
     *  MinMax: '<S49>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_NM_Value_c[i]) {
      rtb_impMethod_e2[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_e2[i] = rtCP_NM_Value_c[i];
    }
  }

  /* MinMax: '<S49>/impMethod' incorporates:
   *  Constant: '<S59>/PM'
   *  MinMax: '<S49>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_PM_Value_k[i]) {
      rtb_impMethod_e2[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_e2[i + 101] = rtCP_PM_Value_k[i];
    }
  }

  /* MinMax: '<S50>/andorMethod' */
  if (rtb_Weighting_lf <= rtb_Weighting_gj) {
    rtb_AveragingCOA_d = rtb_Weighting_lf;
  } else {
    rtb_AveragingCOA_d = rtb_Weighting_gj;
  }

  /* Product: '<S50>/Weighting' incorporates:
   *  MinMax: '<S50>/andorMethod'
   */
  rtb_Weighting_hq = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S49>/impMethod' incorporates:
     *  Constant: '<S58>/PM'
     */
    if (rtb_Weighting_nm <= rtCP_PM_Value_b[i]) {
      rtb_impMethod_e2[i + 202] = rtb_Weighting_nm;
    } else {
      rtb_impMethod_e2[i + 202] = rtCP_PM_Value_b[i];
    }

    /* MinMax: '<S50>/impMethod' incorporates:
     *  Constant: '<S60>/NM'
     *  MinMax: '<S50>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_NM_Value_c[i]) {
      rtb_impMethod_c0[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_c0[i] = rtCP_NM_Value_c[i];
    }
  }

  /* MinMax: '<S50>/impMethod' incorporates:
   *  Constant: '<S59>/PM'
   *  MinMax: '<S50>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_PM_Value_k[i]) {
      rtb_impMethod_c0[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_c0[i + 101] = rtCP_PM_Value_k[i];
    }
  }

  /* MinMax: '<S51>/andorMethod' */
  if (rtb_Weighting_lf <= rtb_Exponentialgaussmf) {
    rtb_AveragingCOA_d = rtb_Weighting_lf;
  } else {
    rtb_AveragingCOA_d = rtb_Exponentialgaussmf;
  }

  /* Product: '<S51>/Weighting' incorporates:
   *  MinMax: '<S51>/andorMethod'
   */
  rtb_Weighting_gj = rtb_AveragingCOA_d;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S50>/impMethod' incorporates:
     *  Constant: '<S58>/PS'
     */
    if (rtb_Weighting_hq <= rtCP_PS_Value[i]) {
      rtb_impMethod_c0[i + 202] = rtb_Weighting_hq;
    } else {
      rtb_impMethod_c0[i + 202] = rtCP_PS_Value[i];
    }

    /* MinMax: '<S51>/impMethod' incorporates:
     *  Constant: '<S60>/NB'
     *  MinMax: '<S51>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_NB_Value_d[i]) {
      rtb_impMethod_oa[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_oa[i] = rtCP_NB_Value_d[i];
    }
  }

  /* MinMax: '<S51>/impMethod' incorporates:
   *  Constant: '<S59>/PB'
   *  MinMax: '<S51>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_PB_Value_a[i]) {
      rtb_impMethod_oa[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_oa[i + 101] = rtCP_PB_Value_a[i];
    }
  }

  /* MinMax: '<S52>/andorMethod' */
  if (rtb_Weighting_lf <= rtb_Exponentialgaussmf_o) {
    rtb_AveragingCOA_d = rtb_Weighting_lf;
  } else {
    rtb_AveragingCOA_d = rtb_Exponentialgaussmf_o;
  }

  for (i = 0; i < 101; i++) {
    /* MinMax: '<S51>/impMethod' incorporates:
     *  Constant: '<S58>/PS'
     */
    if (rtb_Weighting_gj <= rtCP_PS_Value[i]) {
      rtb_impMethod_oa[i + 202] = rtb_Weighting_gj;
    } else {
      rtb_impMethod_oa[i + 202] = rtCP_PS_Value[i];
    }

    /* MinMax: '<S52>/impMethod' incorporates:
     *  Constant: '<S60>/NB'
     *  MinMax: '<S52>/andorMethod'
     */
    if (rtb_AveragingCOA_d <= rtCP_NB_Value_d[i]) {
      rtb_impMethod_f2[i] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_f2[i] = rtCP_NB_Value_d[i];
    }
  }

  /* MinMax: '<S52>/impMethod' incorporates:
   *  Constant: '<S58>/PB'
   *  Constant: '<S59>/PB'
   *  MinMax: '<S52>/andorMethod'
   */
  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_PB_Value_a[i]) {
      rtb_impMethod_f2[i + 101] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_f2[i + 101] = rtCP_PB_Value_a[i];
    }
  }

  for (i = 0; i < 101; i++) {
    if (rtb_AveragingCOA_d <= rtCP_PB_Value_l[i]) {
      rtb_impMethod_f2[i + 202] = rtb_AveragingCOA_d;
    } else {
      rtb_impMethod_f2[i + 202] = rtCP_PB_Value_l[i];
    }
  }

  /* MinMax: '<S3>/AggMethod1' */
  for (i = 0; i < 101; i++) {
    if (rtb_impMethod[i] >= rtb_impMethod_ee[i]) {
      rtb_Weighting_lf = rtb_impMethod[i];
    } else {
      rtb_Weighting_lf = rtb_impMethod_ee[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_bd[i])) {
      rtb_Weighting_lf = rtb_impMethod_bd[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_hv[i])) {
      rtb_Weighting_lf = rtb_impMethod_hv[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_im[i])) {
      rtb_Weighting_lf = rtb_impMethod_im[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_c[i])) {
      rtb_Weighting_lf = rtb_impMethod_c[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_m[i])) {
      rtb_Weighting_lf = rtb_impMethod_m[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_b[i])) {
      rtb_Weighting_lf = rtb_impMethod_b[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_og[i])) {
      rtb_Weighting_lf = rtb_impMethod_og[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_fb[i])) {
      rtb_Weighting_lf = rtb_impMethod_fb[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_dh[i])) {
      rtb_Weighting_lf = rtb_impMethod_dh[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_k0[i])) {
      rtb_Weighting_lf = rtb_impMethod_k0[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_p[i])) {
      rtb_Weighting_lf = rtb_impMethod_p[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_c4[i])) {
      rtb_Weighting_lf = rtb_impMethod_c4[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_e[i])) {
      rtb_Weighting_lf = rtb_impMethod_e[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_g[i])) {
      rtb_Weighting_lf = rtb_impMethod_g[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_gv[i])) {
      rtb_Weighting_lf = rtb_impMethod_gv[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_ha[i])) {
      rtb_Weighting_lf = rtb_impMethod_ha[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_n4[i])) {
      rtb_Weighting_lf = rtb_impMethod_n4[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_l[i])) {
      rtb_Weighting_lf = rtb_impMethod_l[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_c1[i])) {
      rtb_Weighting_lf = rtb_impMethod_c1[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_n[i])) {
      rtb_Weighting_lf = rtb_impMethod_n[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_hr[i])) {
      rtb_Weighting_lf = rtb_impMethod_hr[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_k[i])) {
      rtb_Weighting_lf = rtb_impMethod_k[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_dt[i])) {
      rtb_Weighting_lf = rtb_impMethod_dt[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_jl[i])) {
      rtb_Weighting_lf = rtb_impMethod_jl[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_km[i])) {
      rtb_Weighting_lf = rtb_impMethod_km[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_j[i])) {
      rtb_Weighting_lf = rtb_impMethod_j[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_hy[i])) {
      rtb_Weighting_lf = rtb_impMethod_hy[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_my[i])) {
      rtb_Weighting_lf = rtb_impMethod_my[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_o[i])) {
      rtb_Weighting_lf = rtb_impMethod_o[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_ce[i])) {
      rtb_Weighting_lf = rtb_impMethod_ce[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_hl[i])) {
      rtb_Weighting_lf = rtb_impMethod_hl[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_h[i])) {
      rtb_Weighting_lf = rtb_impMethod_h[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_cn[i])) {
      rtb_Weighting_lf = rtb_impMethod_cn[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_a[i])) {
      rtb_Weighting_lf = rtb_impMethod_a[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_o0[i])) {
      rtb_Weighting_lf = rtb_impMethod_o0[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_hd[i])) {
      rtb_Weighting_lf = rtb_impMethod_hd[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_dg[i])) {
      rtb_Weighting_lf = rtb_impMethod_dg[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_mu[i])) {
      rtb_Weighting_lf = rtb_impMethod_mu[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_hk[i])) {
      rtb_Weighting_lf = rtb_impMethod_hk[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_gz[i])) {
      rtb_Weighting_lf = rtb_impMethod_gz[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_dd[i])) {
      rtb_Weighting_lf = rtb_impMethod_dd[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_gy[i])) {
      rtb_Weighting_lf = rtb_impMethod_gy[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_gm[i])) {
      rtb_Weighting_lf = rtb_impMethod_gm[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_e2[i])) {
      rtb_Weighting_lf = rtb_impMethod_e2[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_c0[i])) {
      rtb_Weighting_lf = rtb_impMethod_c0[i];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_oa[i])) {
      rtb_Weighting_lf = rtb_impMethod_oa[i];
    }

    if (rtb_Weighting_lf >= rtb_impMethod_f2[i]) {
      rtb_AggMethod1[i] = rtb_Weighting_lf;
    } else {
      rtb_AggMethod1[i] = rtb_impMethod_f2[i];
    }
  }

  /* End of MinMax: '<S3>/AggMethod1' */

  /* Sum: '<S4>/Sum1' */
  rtb_Exponentialgaussmf_o = rtb_AggMethod1[0];
  for (i = 0; i < 100; i++) {
    rtb_Exponentialgaussmf_o += rtb_AggMethod1[i + 1];
  }

  rtb_Sum1 = rtb_Exponentialgaussmf_o;

  /* End of Sum: '<S4>/Sum1' */

  /* If: '<S4>/If' */
  if (rtb_Sum1 <= 0.0) {
    /* Outputs for IfAction SubSystem: '<S4>/Action: One' incorporates:
     *  ActionPort: '<S61>/Action Port'
     */
    myfuzzylogic_ActionOne(&rtb_Merge);

    /* End of Outputs for SubSystem: '<S4>/Action: One' */
  } else {
    /* Outputs for IfAction SubSystem: '<S4>/Action: u1' incorporates:
     *  ActionPort: '<S62>/Action Port'
     */
    myfuzzylogic_Actionu1(rtb_Sum1, &rtb_Merge);

    /* End of Outputs for SubSystem: '<S4>/Action: u1' */
  }

  /* End of If: '<S4>/If' */

  /* MinMax: '<S3>/AggMethod2' */
  for (i = 0; i < 101; i++) {
    if (rtb_impMethod[i + 101] >= rtb_impMethod_ee[i + 101]) {
      rtb_Weighting_lf = rtb_impMethod[i + 101];
    } else {
      rtb_Weighting_lf = rtb_impMethod_ee[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_bd[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_bd[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_hv[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_hv[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_im[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_im[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_c[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_c[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_m[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_m[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_b[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_b[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_og[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_og[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_fb[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_fb[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_dh[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_dh[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_k0[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_k0[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_p[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_p[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_c4[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_c4[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_e[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_e[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_g[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_g[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_gv[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_gv[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_ha[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_ha[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_n4[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_n4[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_l[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_l[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_c1[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_c1[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_n[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_n[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_hr[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_hr[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_k[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_k[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_dt[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_dt[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_jl[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_jl[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_km[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_km[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_j[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_j[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_hy[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_hy[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_my[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_my[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_o[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_o[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_ce[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_ce[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_hl[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_hl[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_h[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_h[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_cn[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_cn[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_a[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_a[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_o0[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_o0[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_hd[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_hd[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_dg[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_dg[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_mu[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_mu[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_hk[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_hk[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_gz[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_gz[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_dd[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_dd[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_gy[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_gy[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_gm[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_gm[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_e2[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_e2[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_c0[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_c0[i + 101];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_oa[i + 101])) {
      rtb_Weighting_lf = rtb_impMethod_oa[i + 101];
    }

    if (rtb_Weighting_lf >= rtb_impMethod_f2[i + 101]) {
      rtb_AggMethod2[i] = rtb_Weighting_lf;
    } else {
      rtb_AggMethod2[i] = rtb_impMethod_f2[i + 101];
    }
  }

  /* End of MinMax: '<S3>/AggMethod2' */

  /* Sum: '<S5>/Sum1' */
  rtb_Exponentialgaussmf_o = rtb_AggMethod2[0];
  for (i = 0; i < 100; i++) {
    rtb_Exponentialgaussmf_o += rtb_AggMethod2[i + 1];
  }

  rtb_Sum1_o = rtb_Exponentialgaussmf_o;

  /* End of Sum: '<S5>/Sum1' */

  /* If: '<S5>/If' */
  if (rtb_Sum1_o <= 0.0) {
    /* Outputs for IfAction SubSystem: '<S5>/Action: One' incorporates:
     *  ActionPort: '<S63>/Action Port'
     */
    myfuzzylogic_ActionOne(&rtb_Merge_f);

    /* End of Outputs for SubSystem: '<S5>/Action: One' */
  } else {
    /* Outputs for IfAction SubSystem: '<S5>/Action: u1' incorporates:
     *  ActionPort: '<S64>/Action Port'
     */
    myfuzzylogic_Actionu1(rtb_Sum1_o, &rtb_Merge_f);

    /* End of Outputs for SubSystem: '<S5>/Action: u1' */
  }

  /* End of If: '<S5>/If' */

  /* MinMax: '<S3>/AggMethod3' */
  for (i = 0; i < 101; i++) {
    if (rtb_impMethod[i + 202] >= rtb_impMethod_ee[i + 202]) {
      rtb_Weighting_lf = rtb_impMethod[i + 202];
    } else {
      rtb_Weighting_lf = rtb_impMethod_ee[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_bd[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_bd[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_hv[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_hv[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_im[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_im[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_c[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_c[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_m[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_m[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_b[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_b[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_og[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_og[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_fb[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_fb[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_dh[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_dh[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_k0[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_k0[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_p[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_p[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_c4[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_c4[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_e[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_e[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_g[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_g[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_gv[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_gv[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_ha[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_ha[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_n4[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_n4[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_l[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_l[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_c1[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_c1[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_n[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_n[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_hr[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_hr[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_k[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_k[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_dt[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_dt[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_jl[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_jl[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_km[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_km[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_j[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_j[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_hy[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_hy[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_my[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_my[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_o[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_o[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_ce[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_ce[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_hl[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_hl[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_h[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_h[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_cn[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_cn[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_a[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_a[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_o0[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_o0[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_hd[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_hd[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_dg[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_dg[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_mu[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_mu[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_hk[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_hk[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_gz[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_gz[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_dd[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_dd[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_gy[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_gy[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_gm[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_gm[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_e2[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_e2[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_c0[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_c0[i + 202];
    }

    if (!(rtb_Weighting_lf >= rtb_impMethod_oa[i + 202])) {
      rtb_Weighting_lf = rtb_impMethod_oa[i + 202];
    }

    if (rtb_Weighting_lf >= rtb_impMethod_f2[i + 202]) {
      rtb_AggMethod3[i] = rtb_Weighting_lf;
    } else {
      rtb_AggMethod3[i] = rtb_impMethod_f2[i + 202];
    }
  }

  /* End of MinMax: '<S3>/AggMethod3' */

  /* Sum: '<S6>/Sum1' */
  rtb_Exponentialgaussmf_o = rtb_AggMethod3[0];
  for (i = 0; i < 100; i++) {
    rtb_Exponentialgaussmf_o += rtb_AggMethod3[i + 1];
  }

  rtb_Sum1_j = rtb_Exponentialgaussmf_o;

  /* End of Sum: '<S6>/Sum1' */

  /* If: '<S6>/If' */
  if (rtb_Sum1_j <= 0.0) {
    /* Outputs for IfAction SubSystem: '<S6>/Action: One' incorporates:
     *  ActionPort: '<S65>/Action Port'
     */
    myfuzzylogic_ActionOne(&rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S6>/Action: One' */
  } else {
    /* Outputs for IfAction SubSystem: '<S6>/Action: u1' incorporates:
     *  ActionPort: '<S66>/Action Port'
     */
    myfuzzylogic_Actionu1(rtb_Sum1_j, &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S6>/Action: u1' */
  }

  /* End of If: '<S6>/If' */

  /* Switch: '<S3>/Switch' incorporates:
   *  Constant: '<S3>/Zero'
   *  MinMax: '<S52>/andorMethod'
   *  Product: '<S6>/Averaging (COA)'
   *  RelationalOperator: '<S3>/Zero Firing Strength?'
   *  Sum: '<S3>/Total Firing Strength'
   */
  if (((((((((((((((((((((((((((((((((((((((((((((((((rtb_Weighting +
      rtb_Weighting_j5) + rtb_Weighting_ic) + rtb_Weighting_f) +
      rtb_Weighting_c0) + rtb_Weighting_lh) + rtb_Weighting_da) +
      rtb_Weighting_b) + rtb_Weighting_j) + rtb_Weighting_hh) + rtb_Weighting_kb)
    + rtb_Weighting_ka) + rtb_Weighting_k) + rtb_Weighting_p) + rtb_Weighting_eu)
    + rtb_Weighting_lt) + rtb_Weighting_kv) + rtb_Weighting_gha) +
      rtb_Weighting_bj) + rtb_Weighting_it) + rtb_Weighting_o) +
      rtb_Weighting_p3) + rtb_Weighting_gh) + rtb_Weighting_gq) +
      rtb_Weighting_op) + rtb_Weighting_ef) + rtb_Weighting_ml) +
      rtb_Weighting_c) + rtb_Weighting_n) + rtb_Weighting_h) + rtb_Weighting_f1)
                        + rtb_Weighting_nu) + rtb_Weighting_oy) +
                      rtb_Weighting_kjr) + rtb_Weighting_br) + rtb_Weighting_kh)
                   + rtb_Weighting_d) + rtb_Weighting_a) + rtb_Weighting_l) +
                rtb_Weighting_i) + rtb_Weighting_ky) + rtb_Weighting_e1) +
             rtb_ZeroFiringStrength) + rtb_Weighting_f2) + rtb_Weighting_k0) +
          rtb_Weighting_nm) + rtb_Weighting_hq) + rtb_Weighting_gj) +
       rtb_AveragingCOA_d > 0.0) >= 1) {
    /* Product: '<S4>/Product (COA)' incorporates:
     *  Constant: '<S4>/x data'
     */
    for (i = 0; i < 101; i++) {
      rtb_AggMethod1[i] *= rtCP_xdata_Value[i];
    }

    /* End of Product: '<S4>/Product (COA)' */

    /* Sum: '<S4>/Sum' */
    rtb_Weighting_lf = rtb_AggMethod1[0];
    for (i = 0; i < 100; i++) {
      rtb_Weighting_lf += rtb_AggMethod1[i + 1];
    }

    /* End of Sum: '<S4>/Sum' */

    /* Product: '<S4>/Averaging (COA)' */
    rtb_Exponentialgaussmf_o = rtb_Weighting_lf / rtb_Merge;

    /* Product: '<S5>/Product (COA)' incorporates:
     *  Constant: '<S5>/x data'
     */
    for (i = 0; i < 101; i++) {
      rtb_AggMethod2[i] *= rtCP_xdata_Value_j[i];
    }

    /* End of Product: '<S5>/Product (COA)' */

    /* Sum: '<S5>/Sum' */
    rtb_Weighting_lf = rtb_AggMethod2[0];
    for (i = 0; i < 100; i++) {
      rtb_Weighting_lf += rtb_AggMethod2[i + 1];
    }

    /* End of Sum: '<S5>/Sum' */

    /* Product: '<S5>/Averaging (COA)' */
    rtb_AveragingCOA_d = rtb_Weighting_lf / rtb_Merge_f;

    /* Product: '<S6>/Product (COA)' incorporates:
     *  Constant: '<S6>/x data'
     */
    for (i = 0; i < 101; i++) {
      rtb_AggMethod3[i] *= rtCP_xdata_Value_n[i];
    }

    /* End of Product: '<S6>/Product (COA)' */

    /* Sum: '<S6>/Sum' */
    rtb_Weighting_lf = rtb_AggMethod3[0];
    for (i = 0; i < 100; i++) {
      rtb_Weighting_lf += rtb_AggMethod3[i + 1];
    }

    /* End of Sum: '<S6>/Sum' */
    rtb_Weighting_lf /= rtb_Merge_b;
  } else {
    rtb_Exponentialgaussmf_o = 0.0;
    rtb_AveragingCOA_d = 0.0;
    rtb_Weighting_lf = 0.0;
  }

  /* End of Switch: '<S3>/Switch' */

  /* Outport: '<Root>/Kp' incorporates:
   *  Gain: '<S1>/Gain2'
   */
  *Kp = 0.01 * rtb_Exponentialgaussmf_o;

  /* Outport: '<Root>/Ki' incorporates:
   *  Gain: '<S1>/Gain3'
   */
  *Ki = 0.01 * rtb_AveragingCOA_d;

  /* Outport: '<Root>/Kd' incorporates:
   *  Gain: '<S1>/Gain4'
   */
  *Kd = 0.01 * rtb_Weighting_lf;
}

/* Model initialize function */
void Fuzzy_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
