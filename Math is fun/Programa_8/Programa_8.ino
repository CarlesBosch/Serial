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
void setup() {                              // S'executa un sol cop
  Serial.begin(9600);                       // Configura una biblioteca a 9600 bpm
  Serial.print("El teu disc dur equival a ");
                                         // Escriu ( El teu disc dur equival a  )
  Serial.print(drive_gb);                      // Escriu el valor de "drive_gb"
  Serial.println(" GB de capacitat.");         // Escriu ( BG de capacitat.)

  drive_mb = drive_gb;
  drive_kb = drive_gb;
  real_drive_mb = drive_gb;
  real_drive_kb = drive_gb;
  
  drive_mb = drive_mb * 1024;
  drive_kb = drive_kb * 1024 * 1024;
  real_drive_mb = real_drive_mb * 1000;
  real_drive_kb = real_drive_kb * 1000 * 1000;
  
  Serial.print("En teoria, pot emmagatzemar ");
                            // Escriu a continuació (En teoria, pot emmagatzemar)
  Serial.print(drive_mb);                     // Escriu el valor de "drive_mb"
  Serial.print(" Megabytes, ");               // Escriu ( Megabytes, )
  Serial.print(drive_kb);                     // Escriu el valor de "drive_kb"
  Serial.println(" Kilobytes.");              // Escriu ( Kilobytes.)

  Serial.print("Pero realment emmagatzema ");   
                            // Escriu a continuació (Però realment emmagatzema)              
  Serial.print(real_drive_mb);              // Escriu el valor de "real_drive_mb"
  Serial.print(" Megabytes, ");             // Escriu ( Megabytes.)
  Serial.print(real_drive_kb);              // Escriu el valor de "real_drive_kb"
  Serial.println(" Kilobytes.");            // Escriu ( Kilobytes.)

  Serial.print("Estas perdent ");       // Escriu a continuació (Estas perdent )
  Serial.print(drive_kb - real_drive_kb); 
                              // Escriu el valor de "drve_kb - real_drive_kb"
  Serial.print(" Kilobytes.");                // Escriu ( Kilobytes.)

}

//********** LOOP *****************************************************************
void loop() {                // S'executa repetidament 
}

//********** FUNCIONS *************************************************************
