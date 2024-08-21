#define sound_channel A0
#define potentiometer A1
#define TTL 13
#define led_indicator 12
int sound_level=0;
int potentiometer_level=0;


// the setup routine runs once when you press reset:
void setup() {
  pinMode(TTL,OUTPUT);
  pinMode(led_indicator,OUTPUT);
  // initialize serial communication at 9600 bits per second:
  //Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  sound_level = analogRead(A0);
  potentiometer_level = analogRead(A1);
  if (sound_level>potentiometer_level){
    digitalWrite(TTL,HIGH);
    digitalWrite(led_indicator,HIGH);
  }
  else{
    digitalWrite(TTL,LOW);
    digitalWrite(led_indicator,LOW);
  }
  // print out the value you read:
  //Serial.print("sound level: ");
  //Serial.println(sound_level);
  //Serial.print("pot level: ");
  //Serial.println(potentiometer_level);
  
  //delay(1);  // delay in between reads for stability
}
