/**********************************************************************************
**                                                                               **
**                               Hello World 2                                   **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 30 / 01 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************

//********** SETUP ****************************************************************
void setup() {                      // S'executa un sol cop
  Serial.begin(9600);               // Configura una biblioteca a 9600 bpm   
}

//********** LOOP *****************************************************************
void loop() {                       // S'executa repetidament
  Serial.println("Hello World");    /* Escriu repetidament a una sola 
                                    linia ( Hello World )*/
}

//********** FUNCIONS *************************************************************
