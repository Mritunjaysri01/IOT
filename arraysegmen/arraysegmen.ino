void setup() {
  // put your setup code here, to run once:
  for(int i=2;i<=9;i++)
   {
    pinMode(i,OUTPUT);
   }

}


void loop() {
  // put your main code here, to run repeatedly:
 
  int array[10][8]={
    {0,0,0,0,0,0,1,1},
    {1,0,0,1,1,1,1,1},
    {0,0,1,0,0,1,0,1},
    {0,0,0,0,1,1,0,1},
    {1,0,0,1,1,0,0,1},
    {0,1,0,0,1,0,0,1},
    {0,1,0,0,0,0,0,1},
    {0,0,0,1,1,1,1,1},
    {0,0,0,0,0,0,0,1},
    {0,0,0,1,1,0,0,1}
  };
  
  for(int j=0;j<10;j++)
  {
     int pin=2;
    for(int i=0;i<9;i++)
    {
     
      digitalWrite(pin,array[j][i]);
      
      pin++;
    }
    delay(1000);
  }
  

}
