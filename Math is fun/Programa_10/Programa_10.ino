/**********************************************************************************
**                                                                               **
**                               Math is fun 10                                  **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 06 / 02 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
float a = 3;
float b = 2;
float d;

//********** SETUP ****************************************************************
void setup() {                             // S'executa un sol cop
  Serial.begin(9600);                       // Configura una biblioteca a 9600 bpm

  Serial.println("Aqui esta la divisio: "); // Escriu ( Aqui esta la divisio:  )

  Serial.print("a = ");                     // Escriu ( a =  )
  Serial.println(a);                        // Escriu el valor de "a"
  Serial.print("b = ");                     // Escriu ( b =  )
  Serial.println(b);                        // Escriu el valor de "b"

  d = a / b;
 
  Serial.print("a / b = ");                 // Escriu ( a / b =   )
  Serial.println(d);                        
// Escriu el valor de "d", dona 1.5 perquè estem fent servir variables tipo "float"

}

//********** LOOP *****************************************************************
void loop() {                // S'executa repetidament 
}

//********** FUNCIONS *************************************************************
