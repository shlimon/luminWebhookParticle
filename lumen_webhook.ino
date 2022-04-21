

int led = D7; 

int pTrans = A0;

void setup() {



  pinMode(led, OUTPUT);
  pinMode(pTrans,INPUT);

}


void loop() {
 
    digitalWrite(led, HIGH);
  String value = String(analogRead(pTrans));
  Particle.publish("temp",value,PRIVATE);
  delay(30000);
  
  digitalWrite(led,LOW);
  delay(30000);
  


}

