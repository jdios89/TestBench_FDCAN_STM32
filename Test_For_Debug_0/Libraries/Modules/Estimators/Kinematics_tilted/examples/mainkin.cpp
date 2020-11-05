//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: main.cpp
//
// MATLAB Coder version            : 4.1
// C/C++ source code generated on  : 05-Nov-2020 16:37:30
//

//***********************************************************************
// This automatically generated example C main file shows how to call
// entry-point functions that MATLAB Coder generated. You must customize
// this file for your application. Do not modify this file directly.
// Instead, make a copy of this file, modify it, and integrate it into
// your development environment.
//
// This file initializes entry-point function arguments to a default
// size and value before calling the entry-point functions. It does
// not store or use any values returned from the entry-point functions.
// If necessary, it does pre-allocate memory for returned values.
// You can use this file as a starting point for a main function that
// you can deploy in your application.
//
// After you copy the file, and before you deploy it, you must make the
// following changes:
// * For variable-size function arguments, change the example sizes to
// the sizes that your application requires.
// * Change the example values of function arguments to the values that
// your application requires.
// * If the entry-point functions return values, store these values or
// otherwise use them as required by your application.
//
//***********************************************************************
// Include Files
#include "InverseKinematics_tilt.h"
#include "main.h"
#include "InverseKinematics_tilt_terminate.h"
#include "InverseKinematics_tilt_initialize.h"

// Function Declarations
static float argInit_real32_T();
static void main_InverseKinematics_tilt();

// Function Definitions

//
// Arguments    : void
// Return Type  : float
//
static float argInit_real32_T()
{
  return 0.0F;
}

//
// Arguments    : void
// Return Type  : void
//
static void main_InverseKinematics_tilt()
{
  float dq1_tmp;
  float dpsi[3];

  // Initialize function 'InverseKinematics_tilt' input arguments.
  dq1_tmp = argInit_real32_T();

  // Call the entry-point 'InverseKinematics_tilt'.
  InverseKinematics_tilt(dq1_tmp, dq1_tmp, argInit_real32_T(), argInit_real32_T(),
    argInit_real32_T(), argInit_real32_T(), argInit_real32_T(), argInit_real32_T
    (), argInit_real32_T(), argInit_real32_T(), argInit_real32_T(),
    argInit_real32_T(), dpsi);
}

//
// Arguments    : int argc
//                const char * const argv[]
// Return Type  : int
//
int mainto(int, const char * const [])
{
  // Initialize the application.
  // You do not need to do this more than one time.
  InverseKinematics_tilt_initialize();

  // Invoke the entry-point functions.
  // You can call entry-point functions multiple times.
  main_InverseKinematics_tilt();

  // Terminate the application.
  // You do not need to do this more than one time.
  InverseKinematics_tilt_terminate();
  return 0;
}

//
// File trailer for main.cpp
//
// [EOF]
//
