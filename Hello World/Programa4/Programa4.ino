/**********************************************************************************
**                                                                               **
**                               Hello World 4                                   **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 30 / 01 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************

//********** SETUP ****************************************************************
void setup() {                      // S'executa un sol cop
  Serial.begin(9600);
  Serial.println(" ");
    // Escriu una sola vegada (  ) 
  Serial.println("Escull un numero de l'operacio que vols realitzar?");
    // Escriu una sola vegada ( Escull n numero de l'operació que vols realitzar ) 
  Serial.println("  1. Comprovar numero de tarjeta de credit");
    // Escriu una sola vegada (   1. Comprovar numero de tarjeta de credit )   
  Serial.println("  2. Comprovar numero de compte bancari");
    // Escriu una sola vegada (   2. Comprovar numero de compte bancari )   
  Serial.println("  3. Buscar un digit perdut de tarjeta de credit");
    // Escriu una sola vegada (   3. Buscar un digit perdut de tarjeta de credit )
}

//********** LOOP *****************************************************************
void loop() {                       // S'executa repetidament
}

//********** FUNCIONS *************************************************************
