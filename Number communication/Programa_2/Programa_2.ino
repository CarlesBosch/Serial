/**********************************************************************************
**                                                                               **
**                                 Programa 2                                    **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 27 / 02 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
int n1;           

//********** SETUP ****************************************************************
void setup() 
{                         // S'executa un sol cop
  Serial.begin(9600);     // Configura una biblioteca a 9600 bpm
  Serial.println ("Entra un numero");   // Escriu  (Entra un numero)
  
}
//********** LOOP *****************************************************************
 void loop ()
 {
   while (Serial.available() > 0) {      // Llegeix els números del Serial
    n1 = Serial.parseFloat(); 
    Serial.print ("El numero ");         // Escriu a una nova línia (El numero )
    Serial.print (n1);                   // Escriu el valor de "n1"
    if (n1 % 2 == 0)           // Si el mòdul de n1 dividit entre 2 és 0 ...
      {
      Serial.println (" es parell");     // Escriu ( es parell)
      }
      
    else                       // Si el mòdul no és 0 ...
      {   
      Serial.println (" es senar");             // Escriu ( es senar)
      }
      
    if (Serial.read() == '\n')
    Serial.println (" ");                       // Escriu ( )
    Serial.println ("Entra un altre numero");   
                          // Escriu a una nova línia (Entra un altre numero)
  }
 }

//********** FUNCIONS *************************************************************
