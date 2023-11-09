int analogPin = A0; 
int val = 0;
char datoCmd;
int Led1 = 3;
int Led2 = 2;

String serialData;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  
  digitalWrite(Led1, LOW);
  digitalWrite(Led2, LOW);

  Serial.begin(9600);
}


void loop() {

analogData();
delay(200);

}

void analogData(){
   val = analogRead(analogPin);  
   Serial.println("$"+String(val*1.0)+";"+String(val*0.143));  //$353.0;353.4     
  }

  
void serialEvent() {
   datoCmd = (char)Serial.read();


   if(datoCmd == 'D')
    {
    while(Serial.available())
      {
            datoCmd = (char)Serial.read();
            serialData += datoCmd;
            int dato = serialData.toInt();
            digitalWrite(Led1, dato);
      }
        serialData="";
    }
      if(datoCmd == 'E')
    {
    while(Serial.available())
      {
            datoCmd = (char)Serial.read();
            serialData += datoCmd;
            int dato = serialData.toInt();
            digitalWrite(Led2, dato);
      }
        serialData="";
    }


}
