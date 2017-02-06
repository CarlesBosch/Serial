/**********************************************************************************
**                                                                               **
**                               Math is fun 3                                   **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 30 / 01 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
int drive_gb = 5;       // Variable que té el nom ( drive_gb ) i equival a 5
int drive_mb;           // Varaible que té el nom ( drive_mb )

//********** SETUP ****************************************************************
void setup() {                          // S'executa un sol cop
  Serial.begin(9600);                   // Configura una biblioteca a 9600 bpm
  Serial.print("El teu disc dur te ");  // Escriu ( El teu disc dur te )
  Serial.print(drive_gb);               // Escriu els GB que té el teu disc dur
  Serial.println(" GB de capacitat.");  // Escriu a continuació GB de capacitat.

  drive_mb = 1024 * drive_gb;           // Multiplica 1024 amb els GB de capacitat

  Serial.print("Pot emmagatzemar ");    // Escriu ( Pot emmagatzemar )
  Serial.print(drive_mb);               // Escriu es MB que té el teu discdur
  Serial.println(" Megabytes!");        // Escriu a continuació Megabytes!
}

//********** LOOP *****************************************************************
void loop() {                // S'executa repetidament 
}

//********** FUNCIONS *************************************************************
