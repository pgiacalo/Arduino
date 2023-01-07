//The code reads the voltage on analogPin and displays it.

int analogPin = A3; // potentiometer wiper (middle terminal) connected to analog pin 3
                    // outside leads to ground and +5V
int val = 0;  // variable to store the value read

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);           //  setup serial
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(analogPin);  // read the input pin
  Serial.println(val);          // debug value

}
