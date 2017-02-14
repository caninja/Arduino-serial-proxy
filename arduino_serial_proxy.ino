const int knp1 = 3;
const int knp2 = 7;
const int knp3 = 10;
const int knp4 = 11;
const int led =  13;
 
// definere knapp int til (ikke)noe
int knapp1 = 0;
int knapp2 = 0;
int knapp3 = 0;
int knapp4 = 0;
 
void setup(){
Serial.begin(9600); //starte serial
pinMode(led,OUTPUT); 
pinMode(knp1,INPUT); // definere hva
pinMode(knp2,INPUT); // de definerte
pinMode(knp3,INPUT); // pinsene gjør
pinMode(knp4,INPUT);
}

void loop(){

//verdien for knapp1 blir satt til
//hva knp1 er nå. 1 eller 0

knapp1 = digitalRead(knp1);
if(knapp1==HIGH){
digitalWrite(led,HIGH);
Serial.print("a");
delay(1000);
}else{
digitalWrite(led,LOW);
}

delay(10);

knapp2 = digitalRead(knp2);
if(knapp2==HIGH){
digitalWrite(led,HIGH); 
Serial.print("b");
delay(1000);
}else{
digitalWrite(led,LOW);
}

delay(10);

knapp3 = digitalRead(knp3);
if(knapp3==HIGH){
digitalWrite(led,HIGH); 
Serial.print("c");
delay(1000);
}else{
digitalWrite(led,LOW);
}

delay(10);

knapp4 = digitalRead(knp4);
if(knapp4==HIGH){
digitalWrite(led,HIGH); 
Serial.print("d");
delay(1000);
}else{
digitalWrite(led,LOW);}
}
