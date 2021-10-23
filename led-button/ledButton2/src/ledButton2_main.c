//=========================================================
// src/ledButton2_main.c: generated by Hardware Configurator
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

// global constants
#define ZERO 0
#define ONE 1

//pin declaration
#define LED0 P1_B4
#define BTN0 P0_B2

//variables
extern volatile uint8_t counter;
extern volatile uint8_t max_value;

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
  
  //max_value = 100;

  while (1) 
  {
    // $[Generated Run-time code]
    // [Generated Run-time code]$

      //max_value = 100;

      if (BTN0 == ZERO)
      {
          //counter = 0;
          //while (counter <= 5);

          if (max_value == 100)
          {
              max_value = 25;
          } else if (max_value == 25)
          {
              max_value = 5;
          } else if (max_value == 5)
          {
              max_value = 100;
          }

          while (BTN0 == ZERO);

          //counter = 0;
          //while (counter <= 5);
      }


  }                             
}
