#include <Servo.h>          // Incluir la librería Servo
Servo servo1; 
Servo servo2;// Crear un objeto tipo Servo llamado servo1
int angulo = 0 ;
int angulo2 = 0;
int Eje_X = A1 ;
int Eje_Y = A2 ;
int boton = 4  , LED = 12 ;

void setup()
    {
        servo1.attach(6) ;  // Conectar servo1 al pin 6
        servo2.attach(7);
        //pinMode( boton, INPUT_PULLUP) ;
        pinMode( boton, OUTPUT) ;
    }

void loop()
    {
        angulo  = map( analogRead(A1), 0, 1024, 180, 0);
        servo1.write(angulo);
        angulo2  = map( analogRead(A2), 0, 1024, 0, 180);
        servo2.write(angulo2);
        
        if ( ! digitalRead(boton))
              digitalWrite(LED, HIGH);
        else
              digitalWrite(LED, LOW);
        delay(250) ;
           }
