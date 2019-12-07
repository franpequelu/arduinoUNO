// Programación de funciones lógicas.
// francisco javier morales marfil EMC-electronica digital


      // asignación de las variables
       
       boolean Q3=0;
       boolean Q7=0;
       boolean Q9=0;
       boolean QA3=0;

       boolean I2=0;
       boolean I8=0;
       boolean IA1=0;
       boolean IA2=0;
      
void setup() 
  {
                // configuración entradas
      
      pinMode(2, INPUT);
      pinMode(8, INPUT);
      pinMode(A1, INPUT);
      pinMode(A2, INPUT);

                 // configuración salidas
      
      pinMode(3, OUTPUT);
      pinMode(7, OUTPUT);
      pinMode(9, OUTPUT);
      pinMode(A3, OUTPUT);

                // puesta a cero "reset"
      
      digitalWrite(3, LOW);
      digitalWrite(7, LOW);
      digitalWrite(9, LOW);
      digitalWrite(A3, LOW);
  }


void loop() 

  {
                // Lectura de entradas

      I2=digitalRead(2);
      I8=digitalRead(8);
      IA1=digitalRead(A1);
      IA2=digitalRead(A2);


                // funciones lógicas

      Q3=I2&&I8&&IA1&&IA2;
      Q7=I2||I8||IA1||IA2;
      Q9=(I2&&I8)||(IA1||IA2);
      QA3=!(I2&&I8)||!IA1||!IA2;


                // escritura de reultados a la salida

      digitalWrite(3, Q3);
      digitalWrite(7, Q7);
      digitalWrite(9, Q9);
      digitalWrite(A3, QA3);

}
