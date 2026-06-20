int startValue=5;
int ledPin=13;
//Funtion to blink LED a given number of times
void flashLED(int times){
  int flash=0;

  while(flash<times){
digitalWrite(ledPin,HIGH);
delay(1000);
digitalWrite(ledPin,LOW);
delay(1000);

flash++;


  }
}
void setup() {
pinMode(ledPin,OUTPUT);
Serial.begin(9600);

Serial.println("======Smart Countdown=======");
int count=startValue;

while(count>0){
Serial.print("Counter is: ");
Serial.println(count);

//Blink led according to count value
flashLED(count);

delay(1000);
count--;
}

Serial.println("=========Countdown Complete==========");

}
void loop(){

}