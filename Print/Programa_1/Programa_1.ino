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

  Serial.write(num);
  Serial.println();

  Serial.println(num);
  Serial.println(num, DEC);

  Serial.println(num, BIN);

  Serial.println(num, HEX);

  Serial.println(num, OCT);
}

//********** LOOP *****************************************************************
void loop() {                // S'executa repetidament
}

//********** FUNCIONS *************************************************************
