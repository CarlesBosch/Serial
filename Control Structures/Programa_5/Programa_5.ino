/**********************************************************************************
**                                                                               **
**                               Switch case                                     **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 13 / 02 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
int sensorReading = 4;

//********** SETUP ****************************************************************
void setup() {                            // S'executa un sol cop
  Serial.begin(9600);                     // Configura una biblioteca a 9600 bpm 
  Serial.print("The day is "); 
   
  switch (sensorReading) {
  case 0:    
    Serial.println("dark");
    break;
  case 1:    
    Serial.println("dim");
    break;
  case 2:    
    Serial.println("medium");
    break;
  case 3:
    Serial.println("bright");
    break;
  default:
    Serial.println("... I don't know!!!");
  }
}

//********** LOOP *****************************************************************
void loop() {                // S'executa repetidament
}

//********** FUNCIONS *************************************************************
