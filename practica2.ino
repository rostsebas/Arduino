// Incluímos la libreria externa para poder utilizarla
#include <LiquidCrystal.h>
// Lo primero is inicializar la librería indicando los pins de la interfaz
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
// Configuramos los pines 
const int PWM = 6;
const int SW1 = 7;
const int SW2 = 8;
const int H1 = 9;
const int H2 = 10;


// Definimos las constantes
#define COLS 16 // Columnas del LCD
#define ROWS 2 // Filas del LCD
 
int P;
int j;
int Sentido;
float ciclosT;
int i;
int k;

void setup()
{
  Serial.begin(9600);
  pinMode(PWM, OUTPUT);
  pinMode(SW1, INPUT);
  pinMode(SW2, INPUT);
  pinMode(H1, OUTPUT);
  pinMode(H2, OUTPUT);
  // Configuramos las filas y las columnas del LCD en este caso 16 columnas y 2 filas
  lcd.begin(COLS, ROWS);


}
void loop()
{
  j = digitalRead(SW1);
  Sentido = digitalRead(SW2);
  P = 100*(ciclosT/255);
 
  
  //Sección encargada de la variación del PWM
  if(j == HIGH){
    i++;
  }
  if(i==0){
    ciclosT=0;
  }
  if(i==1){
    ciclosT=42.5; //25.5
  }
  if(i==2){
    ciclosT=127.5;
  }
  if(i==3){
    ciclosT=191.25;
  }
  if(i==4){
    ciclosT=229.5;
  }
  if(i==5){
    i=0;  
  }
  // Sección encargada de los pulsos para puente H
  if(Sentido == HIGH){
    k++;
  }
  if(k==0){
    digitalWrite(H1, HIGH);
    digitalWrite(H2, LOW);
    delayMicroseconds(5);
  }
  if (k == 1){
    digitalWrite(H1, LOW);
    digitalWrite(H2, HIGH);
    delayMicroseconds(5);
  }
  if (k == 2){
    k=0;
  }
  
  analogWrite(PWM, ciclosT);
  delay(300);


  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("P:"+String(P)+"%");
  lcd.setCursor(0,1);
  lcd.print("i:"+String(i));
  lcd.setCursor(9,1);
  lcd.print("k:"+String(k));
  
}
 
