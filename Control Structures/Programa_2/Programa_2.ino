/**********************************************************************************
**                                                                               **
**                            Estructura if / else                               **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 13 / 02 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
int tempAigua = 99;

//********** SETUP ****************************************************************
void setup() {                // S'executa un sol cop
  Serial.begin(9600);         // Configura una biblioteca a 9600 bpm 

  if ( tempAigua >= 100 )     // Si l'aigua és igual osuperior al número 100 ...
  {
    Serial.print("Aigua bullint"); 
                              // Escriu ( Aigua bullint )
  }
  else if ( tempAigua < 100 ) //Però si l'aigua es inferior a 100 ...
  {
    Serial.print("Aigua encara no bull"); // Escriu ( Aigua encara no bull )
  }
}

//********** LOOP *****************************************************************
void loop() {                // S'executa repetidament
}

//********** FUNCIONS *************************************************************
