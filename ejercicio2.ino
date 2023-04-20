
const int ledl =3;                    
const int led2 =5;                   
const int led3 =6;                  
const int pot =0; 
int brillo; 

void setup () {
  pinMode (ledl, OUTPUT);
  
  pinMode (led2, OUTPUT);
 
  pinMode (led3, OUTPUT);
 }
void  leds( ){

  brillo = analogRead (pot)  / 4;
  analogWrite (ledl, brillo);
  analogWrite (led2, brillo);
  analogWrite (led3, brillo);

}
void loop ( ){

  leds();

  }

 
