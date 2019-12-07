 CONTROL DE TEMPERATURA DE UNA HABITACION
 francisco javier morales marfil EMC-electronica digital


   // asignación de las variables
 
      int termometro0 = 2;
      int termometro1 = 8;
      int termometro2 = A1;
      int ventana = A2;
      
      int radiador = 3;
      int alarma = 7;
      int ventilador = 9;
      int extractor = A3;

      int T0;
      int T1;
      int T2;
      int V1;
      int QRd;
      int QAL;
      int QEx;
      int QVn; 
      
void setup() 
{
                    // configuración entradas
      
      pinMode(termometro0, INPUT);
      pinMode(termometro1, INPUT);
      pinMode(termometro2, INPUT);
      pinMode(ventana, INPUT);

                   // configuración salidas
      
      pinMode(radiador, OUTPUT);
      pinMode(alarma, OUTPUT);
      pinMode(ventilador, OUTPUT);
      pinMode(extractor, OUTPUT);

                  // puesta a cero "reset"
      
      digitalWrite(radiador, LOW);
      digitalWrite(alarma, LOW);
      digitalWrite(ventilador, LOW);
      digitalWrite(extractor, LOW);
}

void loop() 

{
                   // Lectura de entradas

      T0 =digitalRead(termometro0);
      T1 =digitalRead(termometro1);
      T2 =digitalRead(termometro2);
      V1 =digitalRead(ventana);


                    // funciones lógicas
      
        QRd = (!T0&&T1&&T2&&!V1)||(T0&&T1&&T2&&!V1);
        QAL = (!T0&&!T1&&!T2&&!V1)||(!T0&&T1&&T2&&V1)||(T0&&!T1&&T2&&V1)||(T0&&T1&&T2&&V1);
        QEx = (!T0&&!T1&&!T2&&!V1)||(!T0&&!T1&&!T2&&V1);
        QVn = (!T0&&T1&&T2&&!V1)||(!T0&&T1&&T2&&V1);


                    // escritura de reultados a la salida

      digitalWrite(radiador, QRd);
      digitalWrite(alarma, QAL);
      digitalWrite(ventilador, QVn);
      digitalWrite(extractor, QEx);
}
