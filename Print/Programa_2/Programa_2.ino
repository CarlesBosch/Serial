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
  
  Serial.print(", dec: ");       //  Escriu ( , dec:  )
  Serial.print(thisByte);        // Escriu el valor de " thisByte " en decimal
  Serial.print(", hex: ");       // Escriu ( , hex:  ) 
  Serial.print(thisByte, HEX);   // Escriu el valor de " thisByte " en hexadecimal
  Serial.print(", oct: ");       // Escriu ( , oct:  )
  Serial.print(thisByte, OCT);   // Escriu el valor de " thisByte " en octal
  Serial.print(", bin: ");       // Escriu ( , bin:  )
  Serial.println(thisByte, BIN); // Escriu el valor de " thisByte " en binari

  if(thisByte == 126)       // Si el valor de " thisbyte " és igual a 126 ...
  { 
    while(true)             // Mentre sigui cert .... (en aquest cas no fa res)
    { 
    } 
  } 
  thisByte++;                    // Suma 1 a " thisbyte "
}

//********** FUNCIONS *************************************************************
