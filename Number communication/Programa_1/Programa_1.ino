/**********************************************************************************
**                                                                               **
**                                 Programa 1                                    **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 27 / 02 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
float r1, r2;  
float rSerie, rParalel;
//********** SETUP ****************************************************************
void setup() 
{                            // S'executa un sol cop
  Serial.begin(9600);        // Configura una biblioteca a 9600 bpm
  Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
      // Escriu (Entra el valor de r1 i r2 (separats per una coma))
}

//********** LOOP *****************************************************************
void loop() 
{                           // S'executa repetidament 
  while (Serial.available() > 0) {  // Llegeix els números del Serial
    r1 = Serial.parseInt();
      Serial.print ("r1 = ");       // Escriu a una nova línia (r1 = )
      Serial.print (r1);            // Escriu el valor de "r1"
      Serial.print(" Ohms     ");   // Escriu ( Ohms     )

    r2 = Serial.parseInt();         
      Serial.print ("r2 = ");       // Escriu (r2 = )
      Serial.print (r2);            // Escriu el valor de "r2"
      Serial.println (" Ohms");     // Escriu ( Ohms)

    if (Serial.read() == '\n') { 
      Serial.print ("rSerie = ");   // Escriu a una nova línia (rSerie = )
      Serial.print (r1+r2);         // Escriu el valor de la suma entre r1 i r2
      Serial.print (" ohms     ");  // Escriu ( ohms     )

      Serial.print ("rParalel = "); // Escriu (rParalel = )
      Serial.print ((r1*r2)/(r1+r2));
        /* Escriu el valor que t dona si divideixes la 
        multiplicació de r1 i r2 entre la suma de r1 i r2*/
      Serial.println (" Ohms");     // Escriu ( Ohms)

      Serial.println (" ");         // Escriu a una línia nova ( )
      Serial.println ("Entra nous valors per r1 i r2");
                   // Escriu a una línia nova (Entra nous valors per r1 i r2)
    }
  }
}

//********** FUNCIONS *************************************************************
