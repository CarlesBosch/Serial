/**********************************************************************************
**                                                                               **
**                               Math is fun 7                                   **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 30 / 01 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
long test = 32767;       // Varliable que té el nom (test)i equival a 32767

//********** SETUP ****************************************************************
void setup() {                        // S'executa un sol cop
  Serial.begin(9600);                 // Configura una biblioteca a 9600 bpm
  Serial.print("Test equival a : ");  // Escriu ( Test equival a : )
  Serial.println(test);               // Escriu a continuació el valor de "test"

  test = test + 1;                    // Suma 1 al valor de "test"
 
  Serial.print("Ara equival a : ");   // Escriu ( Ara equival a : )
  Serial.println(test);               // Escriu a continuació el valor de "test"
}

//********** LOOP *****************************************************************
void loop() {                // S'executa repetidament 
}

//********** FUNCIONS *************************************************************
