/**********************************************************************************
**                                                                               **
**                                   For                                         **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 13 / 02 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
int comptar = 11;

//********** SETUP ****************************************************************
void setup() {                            // S'executa un sol cop
  Serial.begin(9600);                     // Configura una biblioteca a 9600 bpm 
  Serial.print("Ara comptare de 0 a ");   // Escriu ( Ara comptare de 0 a  )
  Serial.println(comptar);                // Escriu el valor de "comptar"
  for (int i=0; i <= comptar; i++)        
  /* Creem una variable amb el nom ( i ), i li diem que si és menor o igual a 
  "comptar" sumi 1 a " i " */
  {
    if ( i < 11 )             // Si "i" és menor a 11 ...
    {
      Serial.print(i);        // Escriu el valor de "i"
      Serial.print("-");      // Escriu ( - )
    }
    else if ( i >= 11 )       // Però si "i" és igual o major a 11 ...
    {
      Serial.print(i);        // Escriu el valor de "i"
    }
  }
}

//********** LOOP *****************************************************************
void loop() {                             // S'executa repetidament
}

//********** FUNCIONS *************************************************************
