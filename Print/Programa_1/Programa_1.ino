/**********************************************************************************
**                                                                               **
**                               Programa 1                                      **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 06 / 02 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
int num = 64;

//********** SETUP ****************************************************************
void setup() {                // S'executa un sol cop
  Serial.begin(9600);         // Configura una biblioteca a 9600 bpm

  Serial.println("Diferents formats per el mateix numero:");
  // Escriu a una nova línia (Diferents formats per el mateix numero:)

  Serial.write(num);          // 
  Serial.println();           // 

  Serial.println(num);        // Escriu a una nova línia el nalor del "num"
  Serial.println(num, DEC); 
  // Escriu a una nova línia el valor del "num" en decimal
 
  Serial.println(num, BIN);   
  // Escriu a una nova línia el valor del "num" en binari

  Serial.println(num, HEX);   
  // Escriu a una nova línia el valor del "num" en hexadecimal

  Serial.println(num, OCT);   
  // Escriu a una nova línia el valor del "num" en octal
}

//********** LOOP *****************************************************************
void loop() {                // S'executa repetidament
}

//********** FUNCIONS *************************************************************
