#include "esp32-hal-dac.h"
#include "driver/dac.h"

void setup() {
  // Initialize DAC
  Serial.begin(115200);
  dac_output_enable(DAC_CHANNEL_1);
}

void loop() {
  Serial.println("Set DAC1 output to 2.5V ------------------------------- ");  
  // Set DAC1 output to 2.5V
  dac_output_voltage(DAC_CHANNEL_1, 512);
  delay(2000);

  Serial.println("Set DAC1 output to 1.65V ------------------------------- ");  
  // Set DAC1 output to 1.65V 
  ledcWrite(DAC_CHANNEL_1, 128);
  delay(2000);
}
