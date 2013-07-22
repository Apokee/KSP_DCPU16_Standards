/*                        ____________________________                        */
/*                       /                           /\                       */
/*                      /                          _/ /\                      */
/*                     /                          / \/                        */
/*                    /                           /\                          */
/*                   /___________________________/ /                          */
/*                   \___________________________\/                           */
/*                    \ \ \ \ \ \ \ \ \ \ \ \ \ \ \                           */
/*                                                                            */
/*                         EPSILON ZERO INNOVATIONS                           */

// DCPU-16 SPECIFICATIONS //////////////////////////////////////////////////////
//
//  Name: E0MCU - Metrics Compilation Unit
//  ID: 0x304d4355, version: 0x000a
//  Manufacturer: 0x5a45524f (EPSILON_ZERO)
//
////////////////////////////////////////////////////////////////////////////////

// DESCRIPTION /////////////////////////////////////////////////////////////////
//
// The E0 Innovations MCU is intended for use with the Probodobodyne Inc.
// framework. Functionality may not be guaranteed with other frameworks.
// Device serves as an interface for many proprietary sensors.
//
////////////////////////////////////////////////////////////////////////////////

// BEHAVIOUR ///////////////////////////////////////////////////////////////////
//
// A, B, C, X, Y, Z, I, J below refer to the registers on the DCPU.
//
//  A | Behaviour
// ---+------------------------------------------------------------------------
//  0 | Noop.
//  1 | Request orbital velocity. 
//  2 | Request surface velocity. 
//  3 | Request angular velocity.
//  4 | Request radial vector.
//  5 | Request east vector.
//  6 | Request north vector.
//  7 | Request local up vector.
//  8 | Request local right vector.
//  9 | Request local forward vector.
// 10 | Request sea-level altitude.
// 11 | Request latitude.
// 12 | Request longitude.
//
//  B | Behaviour
// ---+------------------------------------------------------------------------
//  b | Accuracy of requested metric.
//
//  C | Behaviour
// ---+------------------------------------------------------------------------
//  c | Set to true if the requested accuracy has caused an overflow.
//
//  X | Behaviour
// ---+------------------------------------------------------------------------
//  x | First component of vector metric or scalar metric.
//
//  Y | Behaviour
// ---+------------------------------------------------------------------------
//  y | Second component of vector metric.
//
//  Z | Behaviour
// ---+------------------------------------------------------------------------
//  z | Third component of vector metric.
//
////////////////////////////////////////////////////////////////////////////////