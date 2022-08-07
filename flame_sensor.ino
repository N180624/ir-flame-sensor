const int buzzerpin=9;
const int flamepin=8;


void setup() 
{

  Serial.begin(9600);
  pinMode(buzzerpin,OUTPUT);
  pinMode(flamepin,INPUT);
}

void loop()
{
   int firevalue=digitalRead(flamepin);
   Serial.println(firevalue);
   if(firevalue==0)

   {
    digitalWrite(buzzerpin,HIGH);
    delay(5000);
   }
   else
   {
    digitalWrite(buzzerpin,HIGH);
   }
   delay(500);
}
 
