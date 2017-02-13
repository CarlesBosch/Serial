/**********************************************************************************
**                                                                               **
**                       Estructura if / else if / else                          **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 13 / 02 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
int tempAigua = 101;

//********** SETUP ****************************************************************
void setup() {                            // S'executa un sol cop
  Serial.begin(9600);                     // Configura una biblioteca a 9600 bpm 

  if ( tempAigua <90 )                    // Si l'aigua és inferior a 90 ...
  {
    Serial.print("Aigua encara no bull"); // Escriu ( Aigua encara no bull )
  }
  else if ( tempAigua >= 90 && tempAigua <100 )
  // Però si l'aigua es inferior o igual a 90 o superior a 100 ...
  {
    Serial.print("Aigua apunt de bullir"); // Escriu ( Aigua apunt de bullir )
  }
  else if ( tempAigua == 100 )             // Però si l'aigua es igual a 100 ...
  {
    Serial.print("Aigua a 100C");          // Escriu ( Aigua a 100C )
  }
  else if (tempAigua > 100)                // Però si l'aigua es superior a 100 ...
  {
    Serial.print("Aigua bullint ");        // Escriu ( Aigua bullint )
  }
}

//********** LOOP *****************************************************************
void loop() {                // S'executa repetidament
}

//********** FUNCIONS *************************************************************
