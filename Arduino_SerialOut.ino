
#include <SoftwareSerial.h>

// Uncomment whatever type you're using!

SoftwareSerial espSerial(5, 6);

String str;
void setup(){
Serial.begin(115200);
espSerial.begin(115200);

}
void loop()
{

str = "com arduino: ";
espSerial.println(str);
delay(100);
}
