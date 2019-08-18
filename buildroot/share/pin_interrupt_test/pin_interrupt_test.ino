<<<<<<< HEAD
// Search pins uasable for endstop-interupts
// Compile with the same settings you'd use with Marlin.

#if defined(ARDUINO_AVR_MEGA2560) || defined(ARDUINO_AVR_MEGA)
    #undef  digitalPinToPCICR
    #define digitalPinToPCICR(p)    ( (((p) >= 10) && ((p) <= 15)) || \
                                    (((p) >= 50) && ((p) <= 53)) || \
                                    (((p) >= 62) && ((p) <= 69)) ? (&PCICR) : ((uint8_t *)0) )
=======
// Search pins usable for endstop-interrupts
// Compile with the same build settings you'd use for Marlin.

#if defined(ARDUINO_AVR_MEGA2560) || defined(ARDUINO_AVR_MEGA)
    #undef  digitalPinToPCICR
    #define digitalPinToPCICR(p)    ( ((p) >= 10 && (p) <= 15) || \
                                      ((p) >= 50 && (p) <= 53) || \
                                      ((p) >= 62 && (p) <= 69) ? &PCICR : (uint8_t *)0)
>>>>>>> upstream-marlin/1.1.x
#endif

void setup() {
  Serial.begin(9600);
  Serial.println("PINs causing interrups are:");
<<<<<<< HEAD
  for(int i=2; i<NUM_DIGITAL_PINS; i++){
    if( digitalPinToPCICR(i) != NULL || (int)digitalPinToInterrupt(i) != -1 ) {
      for (int j= 0; j<NUM_ANALOG_INPUTS; j++){
        if(analogInputToDigitalPin(j) == i) {
          Serial.print("A");
=======
  for (int i = 2; i < NUM_DIGITAL_PINS; i++) {
    if (digitalPinToPCICR(i) || (int)digitalPinToInterrupt(i) != -1) {
      for (int j = 0; j < NUM_ANALOG_INPUTS; j++) {
        if (analogInputToDigitalPin(j) == i) {
          Serial.print('A');
>>>>>>> upstream-marlin/1.1.x
          Serial.print(j);
          Serial.print(" = ");
        }
      }
<<<<<<< HEAD
      Serial.print("D");
=======
      Serial.print('D');
>>>>>>> upstream-marlin/1.1.x
      Serial.println(i);
    }
  }
  Serial.println("Arduino pin numbering!");
}

void loop() {
  // put your main code here, to run repeatedly:
}
