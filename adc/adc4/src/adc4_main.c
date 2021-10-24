//=========================================================
// src/adc4_main.c: generated by Hardware Configurator
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
#include "math.h"
// $[Generated Includes]
// [Generated Includes]$

// Global constants
#define ZERO 0
#define ONE 1

//values for resistor and adc calculation
#define RESOLUTION 4096.0
#define VREF 3.3
#define R0 10000.0
#define LSB_CONSTANT (VREF/RESOLUTION)

// values for termistor
#define T25 298.15
#define B2585 3977.0

// Global variables
extern volatile uint16_t adc0_data;
float Volts = 0;
float Resistor = 0;
float Kelvin = 0;
float Celsius = 0;

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

float ADC0InVolts (uint16_t adc0_data) {
  return (adc0_data * LSB_CONSTANT);
}

float get_resistor_value (float Volts) {
  return ((Volts*R0)/(VREF-Volts));
}

float get_temperature_K (float Resistor) {
  return (1/((1/T25)+(1/B2585)*(log(Resistor/R0))));
}

float get_celsius (float Kelvin) {
  return Kelvin - 273.15;
}

//-----------------------------------------------------------------------------
// main() Routine
// ----------------------------------------------------------------------------
int main (void)
{
  // Call hardware initialization routine
  enter_DefaultMode_from_RESET();
  
  while (1) 
  {
    // $[Generated Run-time code]
    // [Generated Run-time code]$

      Volts = ADC0InVolts(adc0_data);
      Resistor = get_resistor_value(Volts);
      Kelvin = get_temperature_K(Resistor);
      Celsius = get_celsius(Kelvin);
  }                             
}
