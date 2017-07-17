int inc;
// Output
int r = 9;   // Red LED,   connected to digital pin 9
int g = 10;  // Green LED, connected to digital pin 10
int b = 11;  // Blue LED,  connected to digital pin 11

void setup()
{
Serial.begin(9600);
pinMode(r, OUTPUT);   // sets the pins as output
  pinMode(g, OUTPUT);   
  pinMode(b, OUTPUT); 
}

void loop()
{
if (Serial.available()>0)
{

  inc= Serial.read();

  if(inc == '1')
  {
  analogWrite(r, 255);
      analogWrite(g,LOW);
      analogWrite(b, 255);
    
  }
  if(inc == '2')
  {
  analogWrite(r, 255);
      analogWrite(g,2);
      analogWrite(b, 255);
    
  }
  if(inc == '3')
  {
  analogWrite(r, 255);
      analogWrite(g,64);
      analogWrite(b, 255);
    
  }
  if(inc == '4')
  {
  analogWrite(r, 255);
      analogWrite(g,96);
      analogWrite(b, 255);
    
  }
  if(inc == '5')
  {
  analogWrite(r, 255);
      analogWrite(g,128);
      analogWrite(b, 255);
    
  }
  if(inc == '6')
  {
  analogWrite(r, 255);
      analogWrite(g,154);
      analogWrite(b, 255);
    
  }
  if(inc == '7')
  {
  analogWrite(r, 255);
      analogWrite(g,180);
      analogWrite(b, 255);
    
  }
  if(inc == '8')
  {
  analogWrite(r, 255);
      analogWrite(g,206);
      analogWrite(b, 255);
    
  }
  if(inc == '9')
  {
  analogWrite(r, LOW);
      analogWrite(g,186);
      analogWrite(b, 255);
    
  }
  if(inc == '0')
  {
  analogWrite(r, LOW);
      analogWrite(g,255);
      analogWrite(b, 255);
    
  }

  if(inc == 'B')
  {
    analogWrite(r, 2);
      analogWrite(g,25);
      analogWrite(b, 255);
    
  }
  if(inc == 'C')
  {
    analogWrite(r, 255);
      analogWrite(g,255);
      analogWrite(b, LOW);
    
  }
 
}
  
}

