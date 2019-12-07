  unsigned int NIVEL_0=0;
  unsigned int NIVEL_1=250;
  unsigned int NIVEL_2=500;
  unsigned int NIVEL_3=750;
  unsigned int NIVEL_4=1023;
  
  unsigned int NIVEL_LDR=0;
  unsigned int NIVEL_ENTRADA=0;
  
void setup() 
{
  Serial.begin (115200); 
  pinMode(3,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop()
{
    NIVEL_LDR = analogRead(A0);
    NIVEL_ENTRADA = map(NIVEL_LDR,70,480,1023,0); 
  
    if( NIVEL_0 <= NIVEL_ENTRADA >= NIVEL_1)
 {
  digitalWrite(3,HIGH); 
  digitalWrite(7,LOW); 
  digitalWrite(A3,LOW); 
  digitalWrite(9,LOW);  
      
 }
    if( NIVEL_1 <= NIVEL_ENTRADA >= NIVEL_2)
 {
  digitalWrite(3,LOW);
  digitalWrite(7,HIGH); 
  digitalWrite(A3,LOW); 
  digitalWrite(9,LOW); 
 }
    if( NIVEL_2 <= NIVEL_ENTRADA >= NIVEL_3)
 {
  digitalWrite(3,LOW);
  digitalWrite(7,lOW); 
  digitalWrite(A3,HIGH); 
  digitalWrite(9,LOW);     
 }    
    if( NIVEL_3 <= NIVEL_ENTRADA >= NIVEL_4)
 {
  digitalWrite(3,LOW);
  digitalWrite(7,lOW); 
  digitalWrite(A3,LOW);
  digitalWrite(9,HIGH);   
 }      

    delay(1000);
}
