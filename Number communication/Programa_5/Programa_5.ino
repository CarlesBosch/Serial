/**********************************************************************************
**                                                                               **
**                                 Programa 5                                    **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 06 / 03 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
int mida;

//********** SETUP ****************************************************************
void setup() 
{                         // S'executa un sol cop
  Serial.begin(9600);     // Configura una biblioteca a 9600 bpm
  Serial.println ("Quina mida te el cargol en cm?"); // Escriu (Quantes hores treballes?)
  
}
//********** LOOP *****************************************************************
 void loop ()
 {                        // S'executa repetidament
   while (Serial.available() > 0) {  // Llegeix els números del Serial
    mida = Serial.parseFloat(); 

    
    if (mida >= 1 & mida < 3)                  // Si les hores són inferiors a 38 ...
      {
      Serial.print ("El cargol amb una mida de "); // Escriu a una nova línia (El salari per )
      Serial.print (mida);    // Escriu ( hores treballades es de )
      Serial.println (" cm es petit.");
      Serial.println (" ");
      }     
    if (mida >= 3 & mida < 5)                  // Si les hores són inferiors a 38 ...
      {
      Serial.print ("El cargol amb una mida de "); // Escriu a una nova línia (El salari per ) 
      Serial.print (mida);    // Escriu ( hores treballades es de )
      Serial.println (" cm es mitja.");
      Serial.println (" ");
      }     
    if (mida >= 5 & mida < 8)                  // Si les hores són inferiors a 38 ...
      {
      Serial.print ("El cargol amb una mida de "); // Escriu a una nova línia (El salari per )
      Serial.print (mida);    // Escriu ( hores treballades es de )
      Serial.println (" cm es gran.");
      Serial.println (" ");
      }     
    if (mida >= 8 & mida <= 10)                  // Si les hores són inferiors a 38 ...
      {
      Serial.print ("El cargol amb una mida de "); // Escriu a una nova línia (El salari per )
      Serial.print (mida);    // Escriu ( hores treballades es de )
      Serial.println (" cm es molt gran.");
      Serial.println (" ");
      }     
    if (mida > 10)                  // Si les hores són inferiors a 38 ...
      {
      Serial.println ("La mida del cargol es incorrecta.");
      Serial.println (" ");
      }     
   }
 }

//********** FUNCIONS *************************************************************
