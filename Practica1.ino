
// Incluímos la libreria externa para poder utilizarla
#include <LiquidCrystal.h>
// Lo primero is inicializar la librería indicando los pins de la interfaz
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
// Configuramos los pines del sensor Trigger y Echo
const int PinTrig = 7;
const int PinEcho = 6;
const int led1 = 10;
const int led2 = 9;
const int led3 = 8;

// Definimos las constantes
#define COLS 16 // Columnas del LCD
#define ROWS 2 // Filas del LCD
 
// Constante velocidad sonido en cm/s
const float VelSon = 34000.0;

float H=18.97; 
float d;
float N;
int P;


void setup()
{
  // Iniciamos el monitor serie para mostrar el resultado
  Serial.begin(9600);
  // Ponemos el pin Trig en modo salida
  pinMode(PinTrig, OUTPUT);
  // Ponemos el pin Echo en modo entrada
  pinMode(PinEcho, INPUT);
  // Configuramos las filas y las columnas del LCD en este caso 16 columnas y 2 filas
  lcd.begin(COLS, ROWS);

  pinMode(led1 , OUTPUT);  //definir pin como salida
  pinMode(led2 , OUTPUT);  //definir pin como salida
  pinMode(led3 , OUTPUT);  //definir pin como salida
}
void loop()
{
  iniciarTrigger();
  
  // La función pulseIn obtiene el tiempo que tarda en cambiar entre estados, en este caso a HIGH
  unsigned long tiempo = pulseIn(PinEcho, HIGH);
  
  // Obtenemos la distancia en cm, el factor de 0.000001 ya que esta en microsegundos.
  d = tiempo * 0.000001 * VelSon / 2.0;
  N = H-d;
  P = 100*(N/H);
  Serial.print(d);
  Serial.print("cm");
  Serial.println();
  delay(500);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("H:"+String(H));

  lcd.setCursor(9,0);
  lcd.print("d:"+String(d));

  lcd.setCursor(0,1);
  lcd.print("N:"+String(N));

  lcd.setCursor(9,1);
  lcd.print("P:"+String(P)+"%");

  if(P>=80){
    digitalWrite(led1 , HIGH);   // poner el Pin en HIGH
    digitalWrite(led2 , LOW);   // poner el Pin en LOW
    digitalWrite(led3 , LOW);   // poner el Pin en HIGH
  }

  if(P<=40){
    digitalWrite(led3 , HIGH);   // poner el Pin en HIGH
    digitalWrite(led2 , LOW);   // poner el Pin en LOW
  }

  if((P>40)&&(P<80)){
    digitalWrite(led2 , HIGH);   // poner el Pin en HIGH
    digitalWrite(led1 , LOW);   // poner el Pin en LOW
    digitalWrite(led3 , LOW);   // poner el Pin en LOW
  }
  
}
 
// Método que inicia la secuencia del Trigger para comenzar a medir
void iniciarTrigger()
{
  
  // Ponemos el Triiger en estado bajo y esperamos 2 ms
  digitalWrite(PinTrig, LOW);
  delayMicroseconds(2);
  
  // Ponemos el pin Trigger a estado alto y esperamos 10 ms
  digitalWrite(PinTrig, HIGH);
  delayMicroseconds(10);
  
  // Comenzamos poniendo el pin Trigger en estado bajo
  digitalWrite(PinTrig, LOW);
}
