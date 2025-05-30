int rtds = 2;
int tsal = 3;
int buzzer = 4;
int elock =5;
int count = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);	
pinMode(rtds, INPUT_PULLUP);
pinMode(tsal,OUTPUT);
pinMode(buzzer,OUTPUT);
pinMode(elock , OUTPUT);
digitalWrite(tsal,HIGH);
digitalWrite(buzzer,HIGH);
digitalWrite(elock,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  int rtds_status = digitalRead(rtds);
  if(rtds_status==LOW && count==0){
    digitalWrite(tsal,LOW);
    digitalWrite(buzzer,LOW);
    digitalWrite(elock,LOW);
    delay(2500);
    digitalWrite(buzzer,HIGH);
    count=count+1;
    Serial.println("high");
  }
  

}
