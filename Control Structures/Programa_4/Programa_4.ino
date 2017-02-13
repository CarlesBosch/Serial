/**********************************************************************************
**                                                                               **
**                       Estructura if / else if / else                          **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 13 / 02 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
int Indicador = 100;

//********** SETUP ****************************************************************
void setup() {                            // S'executa un sol cop
  Serial.begin(9600);                     // Configura una biblioteca a 9600 bpm 

  if ( Indicador <=3.5 )       // Si l'Indicador és inferior o igaual a 3.5 ...
  {
    Serial.print("A");         // Escriu ( A )
  }
  else if ( Indicador > 3.5 && Indicador <= 6.5 )
                               // Però si l'Indicador està entre 3.5 i 6.5 ...
  {
    Serial.print("B");         // Escriu ( B )
  }
  else if ( Indicador > 6.5 && Indicador <= 11.1 ) 
                               // Però si l'Indicador està entre 6.5 i 11.1 ...
  {
    Serial.print("C");         // Escriu ( C )
  }
  else if ( Indicador > 11.1 && Indicador <= 17.7)     
                               // Però si l'Indicador està entre 11.1 i 17.7 ...
  {
    Serial.print("D");         // Escriu ( D )
  }
  else if ( Indicador > 17.7 && Indicador <= 38.2 )
                               // Però si l'Indicador està entre 17.7 i 38.2 ...
  {
    Serial.print("E");         // Escriu ( E )
  }
  else if ( Indicador > 38.2 && Indicador <= 43.2 )
                               // Però si l'Indicador està entre 38.2 i 43.2 ...
  {
    Serial.print("F");         // Escriu ( F )
  }
  else                         // Si no es compleix res ...
  {
    Serial.print("G");         // Escriu ( G )
  }
}

//********** LOOP *****************************************************************
void loop() {                // S'executa repetidament
}

//********** FUNCIONS *************************************************************
