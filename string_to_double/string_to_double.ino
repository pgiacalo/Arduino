
#define ON 1
#define OFF 0

#define DEBUG OFF

#if DEBUG == 1
  #define debug(x) Serial.print(x)
  #define debugln(x) Serial.println(x)
#else
  #define debug(x) 
  #define debugln(x) 
#endif

void setup() {
  // put your setup code here, to run once:
    Serial.begin(57600);
    debugln("setup...");
}

double stringToDouble(String str) {
  char charBuf[str.length() + 1];
  str.toCharArray(charBuf, sizeof(charBuf));
  return atof(charBuf);
}

void loop() {
  // put your main code here, to run repeatedly:
    
    String str = "10.12345";
    double v = str.toDouble();
    String s = "10.2468";
    double val = stringToDouble(s);
    debugln(v);
    debugln(val);
    delay(1000);
}
