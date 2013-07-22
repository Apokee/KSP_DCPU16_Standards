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
//  Name: E0AGU - Automatic Guidance Unit
//  ID: 0x30414755, version: 0x000c
//  Manufacturer: 0x5a45524f (EPSILON_ZERO)
//
////////////////////////////////////////////////////////////////////////////////

// DESCRIPTION /////////////////////////////////////////////////////////////////
//
// The E0 Innovations AGU is intended for use with the Probodobodyne Inc.
// framework. Functionality may not be guaranteed with other frameworks.
// Control may be limited by control capability of external actuator.
// Device can periodically trigger an interrupt to request new data. Data is
// read from a memory-mapped location which can be configured.
//
////////////////////////////////////////////////////////////////////////////////

// BEHAVIOUR ///////////////////////////////////////////////////////////////////
//
// A, B, C, X, Y, Z, I, J below refer to the registers on the DCPU.
//
//  A | Behaviour
// ---+------------------------------------------------------------------------
//  0 | Noop.
//  1 | Activate subsystems described by register B & FLAG_*.
//  2 | Set memory map location to register B.
//
//  B | Behaviour
// ---+------------------------------------------------------------------------
//  b | Subsystem mask. Set to zero to disable all functionality.
//  b | Memory map location. Set to zero to disable all functionality.
//
////////////////////////////////////////////////////////////////////////////////

// FLAGS ///////////////////////////////////////////////////////////////////////
//
// 0x0001 FLAG_INTERRUPT    Enable periodic interrupts if set.
// 0x0002 FLAG_THROTTLE     Enable throttle controls if set.
// 0x0004 FLAG_ROTATE       Enable rotation controls if set.
// 0x0008 FLAG_WHEELS       Enable steering if set.
// 0x0010 FLAG_TRANS        Enable translation controls if set.
//
// 0x0000 OFFSET_THROTTLE   Memory-map throttle parameter offset.
// 0x0001 OFFSET_ROTATE     Memory-map rotation parameter offset.
// 0x0004 OFFSET_WHEELS     Memory-map steering parameter offset.
// 0x0006 OFFSET_TRANS      Memory-map translation parameter offset.
//
////////////////////////////////////////////////////////////////////////////////