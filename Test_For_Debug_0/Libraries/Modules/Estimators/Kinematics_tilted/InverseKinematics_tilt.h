//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: InverseKinematics_tilt.h
//
// MATLAB Coder version            : 4.1
// C/C++ source code generated on  : 05-Nov-2020 16:37:30
//
#ifndef INVERSEKINEMATICS_TILT_H
#define INVERSEKINEMATICS_TILT_H

// Include Files
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "InverseKinematics_tilt_types.h"

// Function Declarations
extern void InverseKinematics_tilt(float dq1, float dq2, float dq3, float dq4,
  float dx, float dy, float q1, float q2, float q3, float q4, float rk, float rw,
  float dpsi[3]);

#endif

//
// File trailer for InverseKinematics_tilt.h
//
// [EOF]
//
