/**********************************************************************************
**                                                                               **
**                               Math is fun 9                                   **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 06 / 02 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
int a = 3;
int b = 2;
int d;

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
  // Escriu el valor de "d", dona 1 perquè estem fent servir variables tipo "int"

}

//********** LOOP *****************************************************************
void loop() {                // S'executa repetidament 
}

//********** FUNCIONS *************************************************************
