#include <PID_v1.h>
#include <Ultrasonic.h>
#include <Servo.h>
#define Nivel_servo 62

// Configuramos los pines del sensor Trigger y Echo
Ultrasonic Sensor1(7,6);   // (Trig PIN,Echo PIN)
Ultrasonic Sensor2(5,4);  // (Trig PIN,Echo PIN)
Ultrasonic Sensor3(3,2);  // (Trig PIN,Echo PIN)

Servo MotorX;
Servo MotorY;
double distancia1, distancia2, distancia3;
double Setpoint1, Setpoint2, Setpoint3, Input, Output, error, ServoOutput;
double Kp1=50, Ki1=20, Kd1=5, Kp2=35, Ki2=15, Kd2=4, Kp3=40, Ki3=17, Kd3=4;
          //10 0.2 2
PID PID1(&distancia1, &Output, &Setpoint1, Kp1, Ki1, Kd1, DIRECT);
PID PID2(&distancia2, &Output, &Setpoint2, Kp2, Ki2, Kd2, DIRECT);
PID PID3(&distancia3, &Output, &Setpoint3, Kp3, Ki3, Kd3, DIRECT);

void setup() {
  //posicion referencia
  Setpoint1 = 25; 
  Setpoint2 = 11; 
  Setpoint3 = 4; 
  // Iniciamos el monitor serie para mostrar el resultado
  MotorY.attach(8);
  MotorX.attach(9);
  distancia1 = Sensor1.Ranging(CM);
  distancia2 = Sensor2.Ranging(CM);
  distancia3 = Sensor3.Ranging(CM);
  Serial.begin(9600);
  MotorY.write(Nivel_servo);
  PID1.SetMode(AUTOMATIC);
  PID1.SetOutputLimits(-8,8);    //OUTput
  PID1.SetSampleTime(50);
  PID2.SetMode(AUTOMATIC);
  PID2.SetOutputLimits(-13,13);    //OUTput
  PID2.SetSampleTime(50);
  PID3.SetMode(AUTOMATIC);
  PID3.SetOutputLimits(-12,12);    //OUTput
  PID3.SetSampleTime(50);
 }

 
//Sensor1 25cm   5cm
//Sensor2 11cm
//Sensor3 4cm

 //55(baja)-60(normal)-65(sube) Y
 //100(normal)-110(izquierda)   X

void loop() {
    distancia1 = Sensor1.Ranging(CM);
    distancia2 = Sensor2.Ranging(CM);
    distancia3 = Sensor3.Ranging(CM);
 //PID sensor 1
    if (distancia1 < 29 && distancia1 > 20)
      Ki1=2.5;
     else 
      Ki1=0; 

   if(distancia1 > 23 || distancia1 < 28){
     PID1.Compute();
     error = Setpoint1 - distancia1; 
     ServoOutput=Nivel_servo-Output;                                           
     MotorY.write(ServoOutput); 
     MotorX.write(120); 
  }
  else 
     MotorY.write(Nivel_servo); 
 //PID sensor 2
   if (distancia2 < 22 && distancia2 > 1)
      Ki2=2;
     else 
      Ki2=0; 

   if(distancia2 > 1 || distancia2 < 21){
     PID2.Compute();
     error = Setpoint2 - distancia2; 
     ServoOutput=Nivel_servo-Output;                                           
     MotorY.write(ServoOutput); 
     MotorX.write(120); 
  }
  else 
     MotorY.write(Nivel_servo); 
 //PID sensor 3
   if (distancia3 < 1 && distancia3 > 30)
      Ki3=2;
     else 
      Ki3=0; 

   if(distancia3 > 1 || distancia3 < 28){
     PID3.Compute();
     error = Setpoint3 - distancia3; 
     ServoOutput=Nivel_servo-Output;                                           
     MotorY.write(ServoOutput); 
     MotorX.write(120); 
  }
  else 
     MotorY.write(Nivel_servo);  
     
      
  Serial.print("Sensor1: ");
  Serial.print(Sensor1.Ranging(CM)); 
  Serial.println("cm");
  delay(900);
  Serial.print("Sensor2: ");
  Serial.print(Sensor2.Ranging(CM)); 
  Serial.println("cm");
  delay(900);
  Serial.print("Sensor3: ");
  Serial.print(Sensor3.Ranging(CM)); 
  Serial.println("cm");
  delay(900); 
}
