/**********************************************************************************
**                                                                               **
**                               Math is fun 1                                   **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 30 / 01 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
int a = 5;                    // Variable que té el nom a i equival a 5
int b = 10;                   // Variable que té el nom b i equival a 10
int c = 20;                   // Variable que té el nom c i equival a 20

//********** SETUP ****************************************************************
void setup() {                // S'executa un sol cop
  Serial.begin(9600);         // Configura una biblioteca a 9600 bpm 

  Serial.println("Here is some math: ");
                              // Escriu a una linia ( Here is some math )
  Serial.print("a = ");       // Escriu ( a = )
  Serial.println(a);          // Escriu a continuació el resultat de ( a ) 
  Serial.print("b = ");       // Escriu ( b = )
  Serial.println(b);          // Escriu a continuació el resultat de ( b ) 
  Serial.print("c = ");       // Escriu ( c = )
  Serial.println(c);          // Escriu a continuació el resultat de ( c )

  Serial.print("a + b = ");   // Escriu la suma de ( a + b )       
  Serial.println(a + b);      // Escriu a continuació el resultat de ( a + b )

  Serial.print("a * c = ");   // Escriu la multiplicació de ( a * c )
  Serial.println(a * c);      // Escriu a continuació el resultat de ( a * c )
  
  Serial.print("c / b = ");   // Escriu la divisió de ( c / b )
  Serial.println(c / b);      // Escriu a continuació el resultat de ( c / b )

  Serial.print("c % b = ");   // Escriu el mòdul de ( c % b )
  Serial.println(c % b);      // Escriu a continuació el resultat de ( c % b )
  
  Serial.print("b - c = ");   // Escriu la resta de ( b - c )
  Serial.println(b - c);      // Escriu a continuació el resultat de ( b - c )
}

//********** LOOP *****************************************************************
void loop() {                // S'executa repetidament 
}

//********** FUNCIONS *************************************************************
