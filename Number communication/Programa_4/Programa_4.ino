/**********************************************************************************
**                                                                               **
**                                 Programa 4                                    **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 27 / 02 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
int hores;
int salari;
int salaribo;
    
//********** SETUP ****************************************************************
void setup() 
{                         // S'executa un sol cop
  Serial.begin(9600);     // Configura una biblioteca a 9600 bpm
  Serial.println ("Quantes hores treballes?"); // Escriu (Quantes hores treballes?)
  
}
//********** LOOP *****************************************************************
 void loop ()
 {                        // S'executa repetidament
   while (Serial.available() > 0) {  // Llegeix els números del Serial
    hores = Serial.parseFloat(); 
    Serial.print ("El salari per "); // Escriu a una nova línia (El salari per )
    Serial.print (hores);            // Escriu el valor de "hores"
    if (hores < 38)                  // Si les hores són inferiors a 38 ...
      {
      salari = hores * 20;  // Multipliquem les hores per 20 i ens dona el salari
      Serial.print (" hores treballades es de ");    
                            // Escriu ( hores treballades es de )
      }     

    else if (hores > 38)            // Si les hores són superiors a 38 ...
      {
      salari = hores * (20*1.5);
 // Multipliquem les hores per la muliplicació de 20 i 1,5, i ens dona el salari
      Serial.print (" hores treballades es de ");    
                            // Escriu ( hores treballades es de )
      }

    if (salari <= 800)              // Si el salari és inferior o igual a 800 ...
      {
      salaribo = salari - (salari * 0.05);/* Multipliquem el salari per 0.05 i li 
                                    restem el salari, això ens dona el salaribo*/
      Serial.print (salaribo);      // Escriu el valor de "salribo"
      Serial.println (" Euros");    // Escriu ( Euros)
      }

    else if (salari > 800)          // Si el salari és superior a 800 ...
      {
      salaribo = salari - (salari * 0.1);/* Multipliquem el salari per 0.1 i li 
                                    restem el salari, això ens dona el salaribo*/
      Serial.print (salaribo);      // Escriu el valor de "salaribo"
      Serial.println (" Euros");    // Escriu ( Euros)
      }
    
    if (Serial.read() == '\n')
    Serial.println (" ");           // Escriu ( )
    Serial.println ("Quantes hores treballes?");   
                          // Escriu a una nova línia (Quantes hores treballes?)
  }
 }

//********** FUNCIONS *************************************************************
