/*
 * File: myfuzzylogic.h
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

#ifndef RTW_HEADER_myfuzzylogic_h_
#define RTW_HEADER_myfuzzylogic_h_
#include <math.h>
#ifndef myfuzzylogic_COMMON_INCLUDES_
# define myfuzzylogic_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* myfuzzylogic_COMMON_INCLUDES_ */

#include "myfuzzylogic_types.h"

/* Macros for accessing real-time model data structure */

/* Model entry point functions */
extern void Fuzzy_Init(void);

/* Customized model step function */
extern void Fuzzy_Run(real_T e, real_T ec, real_T *Kp, real_T *Ki, real_T *Kd);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'myfuzzylogic'
 * '<S1>'   : 'myfuzzylogic/Subsystem'
 * '<S2>'   : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller'
 * '<S3>'   : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard'
 * '<S4>'   : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Defuzzification1'
 * '<S5>'   : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Defuzzification2'
 * '<S6>'   : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Defuzzification3'
 * '<S7>'   : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/E'
 * '<S8>'   : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/EC'
 * '<S9>'   : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule1'
 * '<S10>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule10'
 * '<S11>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule11'
 * '<S12>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule12'
 * '<S13>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule13'
 * '<S14>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule14'
 * '<S15>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule15'
 * '<S16>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule16'
 * '<S17>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule17'
 * '<S18>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule18'
 * '<S19>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule19'
 * '<S20>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule2'
 * '<S21>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule20'
 * '<S22>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule21'
 * '<S23>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule22'
 * '<S24>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule23'
 * '<S25>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule24'
 * '<S26>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule25'
 * '<S27>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule26'
 * '<S28>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule27'
 * '<S29>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule28'
 * '<S30>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule29'
 * '<S31>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule3'
 * '<S32>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule30'
 * '<S33>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule31'
 * '<S34>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule32'
 * '<S35>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule33'
 * '<S36>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule34'
 * '<S37>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule35'
 * '<S38>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule36'
 * '<S39>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule37'
 * '<S40>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule38'
 * '<S41>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule39'
 * '<S42>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule4'
 * '<S43>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule40'
 * '<S44>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule41'
 * '<S45>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule42'
 * '<S46>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule43'
 * '<S47>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule44'
 * '<S48>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule45'
 * '<S49>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule46'
 * '<S50>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule47'
 * '<S51>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule48'
 * '<S52>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule49'
 * '<S53>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule5'
 * '<S54>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule6'
 * '<S55>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule7'
 * '<S56>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule8'
 * '<S57>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule9'
 * '<S58>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/¡÷Kd'
 * '<S59>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/¡÷Ki'
 * '<S60>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/¡÷Kp'
 * '<S61>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Defuzzification1/Action: One'
 * '<S62>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Defuzzification1/Action: u1'
 * '<S63>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Defuzzification2/Action: One'
 * '<S64>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Defuzzification2/Action: u1'
 * '<S65>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Defuzzification3/Action: One'
 * '<S66>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Defuzzification3/Action: u1'
 * '<S67>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/E/NB'
 * '<S68>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/E/NM'
 * '<S69>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/E/NS'
 * '<S70>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/E/PB'
 * '<S71>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/E/PM'
 * '<S72>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/E/PS'
 * '<S73>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/E/ZO'
 * '<S74>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/EC/NB'
 * '<S75>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/EC/NM'
 * '<S76>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/EC/NS'
 * '<S77>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/EC/PB'
 * '<S78>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/EC/PM'
 * '<S79>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/EC/PS'
 * '<S80>'  : 'myfuzzylogic/Subsystem/Fuzzy Logic  Controller/FIS Wizard/EC/ZO'
 */
#endif                                 /* RTW_HEADER_myfuzzylogic_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
