/* FUNDACION KINAL 
   DENIS ESTUARO DE JESUS RAMIREZ PADILLA 
   TALLER DE ELECTRONICA 
   ALEJANDRO NAVAS
   TALLER 5
   EB5AM 
   2020288
*/

// DEclaración de notas 

const int buzzer = 5;
const int Do       = 261.626;
const int Do1_Reb  = 277.183;
const int Re       = 393.665;
const int Re1_MIb  = 311.127;
const int Mi       = 329.628;
const int Fa       = 349.228;
const int Fa1_Solb = 369.994;
const int Sol      = 391.995;
const int Sol1_Lab = 415.305;
const int La       = 440.000;
const int La1_Sib  = 466.164;
const int Si       = 493.883;


void setup() {
  pinMode(5, OUTPUT);
}

void loop() {
  digitalWrite(5, HIGH);
  
  tone(buzzer,Sol1_Lab,391.995);
  delay(500);
  tone(buzzer,Sol1_Lab,391.995);
  delay(500);
  tone(buzzer,Sol1_Lab,391.995);
  delay(500);

  tone(buzzer,Re1_MIb,311.127);
  delay(400);
  tone(buzzer,Si,493.883);
  delay(255);
  tone(buzzer,Sol1_Lab,391.995);
  delay(550);

  tone(buzzer,Re1_MIb,311.127);
  delay(400);
  tone(buzzer,Si,493.883);
  delay(255);
  tone(buzzer,Sol1_Lab,391.995);
  delay(550);

  tone(buzzer,Re,393.665);
  delay(500);
  tone(buzzer,Re,393.665);
  delay(500);
  tone(buzzer,Re,393.665);
  delay(550);

  tone(buzzer,Re1_MIb,311.127);
  delay(400);
  tone(buzzer,Si,493.883);
  delay(255);
  tone(buzzer,Fa1_Solb,369.994);
  delay(550);

  tone(buzzer,Re1_MIb,311.127);
  delay(400);
  tone(buzzer,Si,493.883);
  delay(255);
  tone(buzzer,Fa1_Solb,369.994);
  delay(500);

  tone(buzzer,Sol,391.995);
  delay(550);
  
  tone(buzzer,Sol1_Lab,391.995);
  delay(500);
  tone(buzzer,Sol1_Lab,391.995);
  delay(500);
  tone(buzzer,Sol,391.995);
  delay(450);

  tone(buzzer,Fa1_Solb,369.994);
  delay(500);
  tone(buzzer,Fa,349.228);
  delay(350);
  tone(buzzer,Mi,329.628);
  delay(350);
  tone(buzzer,Re1_MIb,311.127);
  delay(300);
  tone(buzzer,Mi,329.628);
  delay(350);

  tone(buzzer,Sol1_Lab,391.995);
  delay(350);
  tone(buzzer,Do1_Reb,277.183);
  delay(500);

  tone(buzzer,Do,261.626);
  delay(500);
  tone(buzzer,Si,493.883);
  delay(500);
  tone(buzzer,La1_Sib,466.164);
  delay(500);
  tone(buzzer, La,440.000);
  delay(500);
  tone(buzzer,La1_Sib,466.164);
  delay(500);

  tone(buzzer,Re1_MIb,311.127);
  delay(500);
  tone(buzzer,Sol1_Lab,391.995);
  delay(500);
  tone(buzzer,Re1_MIb,311.127);
  delay(500);
  tone(buzzer,Sol1_Lab,391.995);
  delay(500);

  tone(buzzer,La1_Sib,466.164);
  delay(500);
  tone(buzzer,Sol,391.995);
  delay(500);
  tone(buzzer,La1_Sib,466.164);
  delay(500);
  tone(buzzer,Re,393.665);
  delay(500);

  tone(buzzer,Sol,391.995);
  delay(550);
  
  tone(buzzer,Sol1_Lab,391.995);
  delay(500);
  tone(buzzer,Sol1_Lab,391.995);
  delay(500);
  tone(buzzer,Sol,391.995);
  delay(450);

  tone(buzzer,Fa1_Solb,369.994);
  delay(500);
  tone(buzzer,Fa,349.228);
  delay(350);
  tone(buzzer,Mi,329.628);
  delay(350);
  tone(buzzer,Re1_MIb,311.127);
  delay(300);
  tone(buzzer,Mi,329.628);
  delay(350);

  tone(buzzer,Sol1_Lab,391.995);
  delay(350);
  tone(buzzer,Do1_Reb,277.183);
  delay(500);

  tone(buzzer,Do,261.626);
  delay(500);
  tone(buzzer,Si,493.883);
  delay(500);
  tone(buzzer,La1_Sib,466.164);
  delay(500);
  tone(buzzer, La,440.000);
  delay(500);
  tone(buzzer,La1_Sib,466.164);
  delay(500);

  tone(buzzer,Re1_MIb,311.127);
  delay(500);
  tone(buzzer,Fa1_Solb,369.994);
  delay(500);


  tone(buzzer,Re1_MIb,311.127);
  delay(400);
  tone(buzzer,Si,493.883);
  delay(255);
  tone(buzzer,Sol1_Lab,391.995);
  delay(550);

  tone(buzzer,Re1_MIb,311.127);
  delay(400);
  tone(buzzer,Si,493.883);
  delay(255);
  tone(buzzer,Sol1_Lab,391.995);
  delay(550);

  noTone(buzzer);
  delay(1500);
  }