// Include the library
#include <Control_Surface.h>
 
// Instantiate a MIDI Interface to use
HairlessMIDI_Interface midi;
 
// Create an array of potentiometers that send out
// MIDI Control Change messages when you turn the
// potentiometers connected to the eight input pins of
// the multiplexer
CCPotentiometer volumePotentiometers[] {
  {A0, 0x10},
  {A1, 0x11},
  {A2, 0x12},
  {A3, 0x13},
  {A4, 0x14},
  {A5, 0x15},
};

NoteButton randomizeButtons[] {
  {7, 0x16},
  {6, 0x17},
  {5, 0x18},
  {4, 0x19},
};
 
// Initialize the Control Surface
void setup() {
  Control_Surface.begin();
}
 
// Update the Control Surface
void loop() {
  Control_Surface.loop();
}