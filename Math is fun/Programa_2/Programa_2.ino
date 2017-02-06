/**********************************************************************************
**                                                                               **
**                               Math is fun 2                                   **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 30 / 01 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
int a = 3;                    // Variable que té el nom a i quival a 3
int b = 4;                    // Variable que té el nom b i quival a 4
int h;                        // Variable que té el nom c

//********** SETUP ****************************************************************
void setup() {                // S'executa un sol cop
  Serial.begin(9600);         // Configura una biblioteca a 9600 bpm 

  Serial.println("Hipotenusa equival a: ");
                              // Escriu a una linia ( Hipotenusa equival a: )
  Serial.print("a = ");       // Escriu ( a = )
  Serial.println(a);          // Escriu a continuació el resultat de ( a ) 
  Serial.print("b = ");       // Escriu ( b = )
  Serial.println(b);          // Escriu a continuació el resultat de ( b ) 
  Serial.print("h = ");       // Escriu ( h = )
  Serial.println("?");        // Escriu un interrogant
  Serial.println("  ");       // Escriu un espai    
  
  Serial.print("a al quadrat = ");   // Escriu la suma de ( a + b )       
  Serial.println(pow(a,2));          // Escriu a continuació el resultat de ( a + b )
  
  Serial.print("b al quadrat = ");   // Escriu la suma de ( a + b )       
  Serial.println(pow(b,2));          // Escriu a continuació el resultat de ( a + b )

  Serial.print("h = ");              // Escriu la suma de ( a + b )       
  Serial.println(sqrt(pow(a,2)+(pow(b,2))));
                                     // Escriu a continuació el resultat de ( a + b )

}

//********** LOOP *****************************************************************
void loop() {                // S'executa repetidament 
}

//********** FUNCIONS *************************************************************
