void setup() {
  // put your setup code here, to run once
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int peggy =analogRead(A0);
int terry ;
Serial.println(peggy);
if (peggy <=100)peggy=100;
if (peggy >=500)peggy=500;
terry = map(peggy,100,500,0,255);
analogWrite(9,terry);
delay(1);
}
