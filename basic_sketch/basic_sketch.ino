void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
  Serial.println("setup");

    double i = 10.12345;

    char s [80];
    sprintf (s, "Hi %d", i);
    Serial.println (s);  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("loop");
  String str = "1.0";
  double v = str.toDouble() / 3.0;
  Serial.println(v);
  if (v > 0.33331){
    Serial.println("v > 0.33331");
    Serial.println(v.dtostrf());
  }
  delay(5000);
}
