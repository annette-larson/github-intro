
int led = 13;

void setup() {                // i hope im doing this right
                              // i pressed fork
                              //then edit
                              //now im typing
                              //are we supposed to make specific comments?
                              

  pinMode(led, OUTPUT);     
}


void loop() {
  digitalWrite(led, HIGH);   
  delay(1000);              
  digitalWrite(led, LOW);    
  delay(1000);              
}
