/**********************************************************************************
**                                                                               **
**                               Math is fun 8                                   **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 30 / 01 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
int drive_gb = 100;
long drive_mb;
long drive_kb;
long real_drive_mb;
long real_drive_kb;

//********** SETUP ****************************************************************
void setup() {                        // S'executa un sol cop
  Serial.begin(9600);                 // Configura una biblioteca a 9600 bpm
  Serial.print(" El teu disc dur equival a ");  // Escriu ( Test equival a : )
  Serial.print(drive_gb);               // Escriu a continuació el valor de "test"
  Serial.print(" GB de capacitat ");  // Escriu ( Test equival a : )

  drive_mb = drive_gb;

  
}

//********** LOOP *****************************************************************
void loop() {                // S'executa repetidament 
}

//********** FUNCIONS *************************************************************
