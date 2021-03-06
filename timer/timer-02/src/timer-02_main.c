//=========================================================
// src/timer-02_main.c: generated by Hardware Configurator
//
// This file will be updated when saving a document.
// leave the sections inside the "$[...]" comment tags alone
// or they will be overwritten!!
//=========================================================

//-----------------------------------------------------------------------------
// Includes
//-----------------------------------------------------------------------------
#include <SI_EFM8BB1_Register_Enums.h>                  // SFR declarations
#include "InitDevice.h"
// $[Generated Includes]
// [Generated Includes]$

#define ZERO 0
#define ONE 1

SI_SBIT (ONBOARD_LED, SFR_P1, 4U);
//SI_SBIT (TCON_TF0, SFR_TCON, 5U);

volatile uint8_t counter;
volatile uint8_t i;
volatile uint8_t max;
//-----------------------------------------------------------------------------
// SiLabs_Startup() Routine
// ----------------------------------------------------------------------------
// This function is called immediately after reset, before the initialization
// code is run in SILABS_STARTUP.A51 (which runs before main() ). This is a
// useful place to disable the watchdog timer, which is enable by default
// and may trigger before main() in some instances.
//-----------------------------------------------------------------------------
void SiLabs_Startup (void)
{
  // $[SiLabs Startup]
  // [SiLabs Startup]$
}

//-----------------------------------------------------------------------------
// main() Routine
// ----------------------------------------------------------------------------
int main (void)
{
  // Call hardware initialization routine
  enter_DefaultMode_from_RESET();
  max = 10;

  //ONBOARD_LED = ONE;

  while (1) 
  {
    // $[Generated Run-time code]
    // [Generated Run-time code]$

    //delay
     for (i = 0; i < max; ++i) {
         while (!TCON_TF0);
         TCON_TF0 = 0;
    }

     ONBOARD_LED = ZERO;
     //ONBOARD_LED = !ONBOARD_LED;
  }                             
}
