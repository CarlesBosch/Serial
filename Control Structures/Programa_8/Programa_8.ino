/**********************************************************************************
**                                                                               **
**                                  While                                        **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 13 / 02 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
int comptar = 11;
int i = 0;

//********** SETUP ****************************************************************
void setup() {                            // S'executa un sol cop
  Serial.begin(9600);                     // Configura una biblioteca a 9600 bpm 
  Serial.print("Ara comptare de 0 a ");   // Escriu ( Ara comptare de 0 a  )
  Serial.println(comptar);    // Escriu a una linia nova el valor de "comptar"
   while(i <= comptar)                    
   // Mentre el valor de "i" sigui menor o igual al valor de "comptar" ...
  {
    Serial.print(i);                      // Escriu el valor de "i"
    Serial.print("-");                    // Escriu ( - )
    i++;                                  // Suma 1 al valor de "i"
  } 
}

//********** LOOP *****************************************************************
void loop() {                             // S'executa repetidament
}

//********** FUNCIONS *************************************************************
