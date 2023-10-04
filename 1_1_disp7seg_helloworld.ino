//hello world sem multiplexar os pinos comuns dos displays

//defines
#define liga 1
#define desl 0

//exemplo de como inicializar pinos como vetores
int segmentos[7]={32, 33, 25, 26, 27, 14, 12};// pinos dos segmentos do display
int digitos[2]={2, 15};// pinos comuns de cada display

void display (int);//prototipação de função

int x;

void setup() 
{
  int i;
  for (i=0;i<7;i++)//inicialização dos pinos de segmentos
  {
    pinMode(segmentos[i],OUTPUT);
    digitalWrite(segmentos[i],0);
  }
  for(i=0;i<2;i++)//inicialização dos pinos comuns de cada display
   {
       pinMode(digitos[i],OUTPUT);
       digitalWrite(digitos[i],0);//liga os comuns
   }
}

void loop() 
{
  for(x=0;x<10;x++)
  { 
    display(x);
    delay(500);
  }
}

void display (int seg)
{
  if (seg==0)//numero 0
  {
    digitalWrite(segmentos[0], liga);
    digitalWrite(segmentos[1], liga);
    digitalWrite(segmentos[2], liga);
    digitalWrite(segmentos[3], liga);
    digitalWrite(segmentos[4], liga);
    digitalWrite(segmentos[5], liga);
    digitalWrite(segmentos[6], desl);
  }
  if (seg==1)//numero 1
  {
    digitalWrite(segmentos[0], desl);
    digitalWrite(segmentos[1], liga);
    digitalWrite(segmentos[2], liga);
    digitalWrite(segmentos[3], desl);
    digitalWrite(segmentos[4], desl);
    digitalWrite(segmentos[5], desl);
    digitalWrite(segmentos[6], desl);
  }
  if (seg==2)//numero 2
  {
    digitalWrite(segmentos[0], liga);
    digitalWrite(segmentos[1], liga);
    digitalWrite(segmentos[2], desl);
    digitalWrite(segmentos[3], liga);
    digitalWrite(segmentos[4], liga);
    digitalWrite(segmentos[5], desl);
    digitalWrite(segmentos[6], liga);
  }
  if (seg==3)//numero 3
  {
    digitalWrite(segmentos[0], liga);
    digitalWrite(segmentos[1], liga);
    digitalWrite(segmentos[2], liga);
    digitalWrite(segmentos[3], liga);
    digitalWrite(segmentos[4], desl);
    digitalWrite(segmentos[5], desl);
    digitalWrite(segmentos[6], liga);
  }
  if (seg==4)//numero 4
  {
    digitalWrite(segmentos[0], desl);
    digitalWrite(segmentos[1], liga);
    digitalWrite(segmentos[2], liga);
    digitalWrite(segmentos[3], desl);
    digitalWrite(segmentos[4], desl);
    digitalWrite(segmentos[5], liga);
    digitalWrite(segmentos[6], liga);
  }
  if (seg==5)//numero 5
  {
    digitalWrite(segmentos[0], liga);
    digitalWrite(segmentos[1], desl);
    digitalWrite(segmentos[2], liga);
    digitalWrite(segmentos[3], liga);
    digitalWrite(segmentos[4], desl);
    digitalWrite(segmentos[5], liga);
    digitalWrite(segmentos[6], liga);
  }
  if (seg==6)//numero 6
  {
    digitalWrite(segmentos[0], liga);
    digitalWrite(segmentos[1], desl);
    digitalWrite(segmentos[2], liga);
    digitalWrite(segmentos[3], liga);
    digitalWrite(segmentos[4], liga);
    digitalWrite(segmentos[5], liga);
    digitalWrite(segmentos[6], liga);
  }
  if (seg==7)//numero 7
  {
    digitalWrite(segmentos[0], liga);
    digitalWrite(segmentos[1], liga);
    digitalWrite(segmentos[2], liga);
    digitalWrite(segmentos[3], desl);
    digitalWrite(segmentos[4], desl);
    digitalWrite(segmentos[5], desl);
    digitalWrite(segmentos[6], desl);
  }
  if (seg==8)//numero 8
  {
    digitalWrite(segmentos[0], liga);
    digitalWrite(segmentos[1], liga);
    digitalWrite(segmentos[2], liga);
    digitalWrite(segmentos[3], liga);
    digitalWrite(segmentos[4], liga);
    digitalWrite(segmentos[5], liga);
    digitalWrite(segmentos[6], liga);
  }
  if (seg==9)//numero 9
  {
    digitalWrite(segmentos[0], liga);
    digitalWrite(segmentos[1], liga);
    digitalWrite(segmentos[2], liga);
    digitalWrite(segmentos[3], liga);
    digitalWrite(segmentos[4], desl);
    digitalWrite(segmentos[5], liga);
    digitalWrite(segmentos[6], liga);
  }
}
