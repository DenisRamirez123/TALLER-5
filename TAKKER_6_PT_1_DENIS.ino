/* FUNDACION KINAL 
   Denis Estuardo de Jesus Ramirez Padilla
   TALLER DE ELECTRONICA 
   ALEJANDRO NAVAS
   2020288
   EB5AM
   TALLER 5 PARTE 1

*/


//inciso (A)
float conversor_kg_a_lb (float kg, float lb);
//inciso (B)
int conversor_amp_a_aamp (int amp, int aamp);
float lb = 2.2;
float aamp = 1000000;
//inciso (C),(D)
const int a = 2;
const int b = 3;
const int c = 4;
const int d = 5;
const int e = 6;
const int f = 7;
const int g = 8;

const int E = 7;
const int segmentos[E] = {a, b, c, d, e, f, g};

const int numeros[10][E] = {
  /*1*/ {0, 1, 1, 0, 0, 0, 0},
  /*3*/ {1, 1, 1, 1, 0, 0, 1},
  /*5*/ {1, 0, 1, 1, 0, 1, 1},
  /*7*/ {1, 1, 1, 0, 0, 0, 0},
  /*9*/ {1, 1, 1, 1, 0, 1, 1},
};
const int APAGADO = LOW;

void setup() {
  //inciso (A)
  Serial.begin(9600);
  delay (1000);
  Serial.println ("El resultado en libras es");
  Serial.println (conversor_kg_a_lb(25,lb));

  //inciso (B)
  delay (1000);
  Serial.println ("El resultado en microamperios es");
  Serial.println (conversor_amp_a_aamp(5000,aamp));
  
  //inciso (C),(D)
  for (int q=0; q<E; q++){
    pinMode(segmentos[q], OUTPUT);
    digitalWrite(segmentos[q], APAGADO);
  }    
}
//inciso (C),(D)
void print(int z){
  for (int q=0; q<E; q++){
    digitalWrite(segmentos[q], numeros [z][q]);
  }
}

void loop() {
  for (int q=0; q<10; q++){
    print(q);
    delay(1000);
  }
}
//inciso (A)
float conversor_kg_a_lb (float kg, float lb)
{
  float resultado_lb;
  resultado_lb = kg*lb;
  return resultado_lb;
}
//inciso (B)
int conversor_amp_a_aamp (int amp, int aamp)
{
  int resultado_amp;
  resultado_amp = amp/aamp;
  return resultado_amp;
}