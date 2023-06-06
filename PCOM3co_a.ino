#include <LiquidCrystal.h>    // Incluímos la libreria externa para poder utilizarla
#include <SoftwareSerial.h>   // Incluimos la librería  SoftwareSerial  
// Lo primero is inicializar la librería indicando los pins de la interfaz
LiquidCrystal lcd(12, 9, 5, 4, 3, 2);
SoftwareSerial BT(10,11);    // Definimos los pines RX y TX del Arduino conectados al BT
// Definimos las constantes
#define COLS 16 // Columnas del LCD
#define ROWS 2 // Filas del LCD
// Configuramos los pines 
const int SW1 = 6;
const int SW2 = 7;
const int SW3 = 8;
const int SW4 = 22;
const int Audio1 = 24;
const int Audio2 = 26;

String Dispositivo;
char recepcion;
void setup() {
  Serial.begin(9600); // set the baud rate
  BT.begin(9600);       // Inicializamos el UART para el BT
  pinMode(SW1, OUTPUT);
  pinMode(SW2, OUTPUT);
  pinMode(SW3, OUTPUT);
  pinMode(SW4, OUTPUT);
  pinMode(Audio1, OUTPUT);
  pinMode(Audio2, OUTPUT);
  // Configuramos las filas y las columnas del LCD en este caso 16 columnas y 2 filas
  lcd.begin(COLS, ROWS);
}

void loop() {
  recepcion = Serial.read();
  if(recepcion=='a'){
     Dispositivo = "1er";
     lcd.setCursor(0,0);
     lcd.print(Dispositivo);
     lcd.setCursor(0,1);
     lcd.print("dispositivo");
     digitalWrite(SW2, LOW);
     digitalWrite(SW3, LOW);
     digitalWrite(SW4, LOW);
     delay(2);
     digitalWrite(SW1, HIGH);
  }
  if(recepcion=='b'){
     Dispositivo = "2do";
     lcd.setCursor(0,0);
     lcd.print(Dispositivo);
     lcd.setCursor(0,1);
     lcd.print("dispositivo");
     digitalWrite(SW1, LOW);
     digitalWrite(SW3, LOW);
     digitalWrite(SW4, LOW);
     delay(2);
     digitalWrite(SW2, HIGH);
  }
  if(recepcion=='c'){
     Dispositivo = "3er";
     lcd.setCursor(0,0);
     lcd.print(Dispositivo);
     lcd.setCursor(0,1);
     lcd.print("dispositivo");
     digitalWrite(SW1, LOW);
     digitalWrite(SW2, LOW);
     digitalWrite(SW4, LOW);
     delay(2);
     digitalWrite(SW3, HIGH);
  }
  if(recepcion=='d'){
     Dispositivo = "4to";
     lcd.setCursor(0,0);
     lcd.print(Dispositivo);
     lcd.setCursor(0,1);
     lcd.print("dispositivo");
     digitalWrite(SW1, LOW);
     digitalWrite(SW2, LOW);
     digitalWrite(SW3, LOW);
     delay(2);
     digitalWrite(SW4, HIGH);
  }
  if(recepcion=='a' || recepcion=='b' || recepcion=='c' || recepcion=='d'){
     delay(2);
     digitalWrite(Audio2, LOW);
     delay(2);
     digitalWrite(Audio1, HIGH);
  }
  if(recepcion=='e'){
     delay(2);
     digitalWrite(Audio1, LOW);
     delay(2);
     digitalWrite(Audio2, HIGH);
  }
}
