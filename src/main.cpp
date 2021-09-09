// Include the library
#include <Control_Surface.h>
 
// Instantiate a MIDI Interface to use
HairlessMIDI_Interface midi;
 
// Create an array of potentiometers that send out
// MIDI Control Change messages when you turn the
// potentiometers connected to the eight input pins of
// the multiplexer
CCPotentiometer volumePotentiometers[] {
  {A0, {0x10, CHANNEL_4}},
  {A1, {0x11, CHANNEL_4}},
  {A2, {0x12, CHANNEL_4}},
  {A3, {0x13, CHANNEL_4}},
  {A4, {0x14, CHANNEL_4}},
  {A5, {0x15, CHANNEL_4}},
};

NoteButton randomizeButtons[] {
  {7, {0x16, CHANNEL_4}},
  {6, {0x17, CHANNEL_4}},
  {5, {0x18, CHANNEL_4}},
  {4, {0x19, CHANNEL_4}},
};
 
// Initialize the Control Surface
void setup() {
  Control_Surface.begin();
}
 
// Update the Control Surface
void loop() {
  Control_Surface.loop();
}