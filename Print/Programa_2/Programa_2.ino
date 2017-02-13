/**********************************************************************************
**                                                                               **
**                               Programa 2                                      **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 13 / 02 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
int thisByte = 33;

//********** SETUP ****************************************************************
void setup() {                // S'executa un sol cop
  Serial.begin(9600);         // Configura una biblioteca a 9600 bpm
  Serial.println("ASCII Table ~ Character Map");
                      // Escriu a una lília nova ( ASCII Table ~ Character Map )
}

//********** LOOP *****************************************************************
void loop() {                // S'executa repetidament
Serial.write(thisByte);       
  
  Serial.print(", dec: "); 
  Serial.print(thisByte);      
  Serial.print(", hex: "); 
  Serial.print(thisByte, HEX);     
  Serial.print(", oct: "); 
  Serial.print(thisByte, OCT);     
  Serial.print(", bin: "); 
  Serial.println(thisByte, BIN);   

  if(thisByte == 126)  // if printed last visible character '~'
  { 
    while(true)
    { 
    } 
  } 
  thisByte++;     // go on to the next character
}

//********** FUNCIONS *************************************************************
