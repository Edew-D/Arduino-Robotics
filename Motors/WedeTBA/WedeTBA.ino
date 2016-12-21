#define   LEFT_MOTOR_EN   8
#define   lb   7   
#define   lr   6
#define   RIGHT_MOTOR_EN   11
#define   rr   10
#define   rb   9
#define   rightA  1385
int sr;
int sl;

void right()
{

  digitalWrite(lr, LOW );
  digitalWrite(lb, HIGH);
  digitalWrite(rb, LOW);
  digitalWrite(rr, HIGH);
}

void left()
{
  digitalWrite(lr, HIGH);
  digitalWrite(lb, LOW);
  digitalWrite(rb, HIGH );
  digitalWrite(rr, LOW);
}
void fwd()
{
  digitalWrite(lb, LOW);
  digitalWrite(lr, HIGH);
  digitalWrite(rr, HIGH);
  digitalWrite(rb, LOW);
}
void back()
{
  digitalWrite(lb, LOW);
  digitalWrite(lr, HIGH);
  digitalWrite(rr, LOW);
  digitalWrite(rb, HIGH);
}
void stay()
{
  digitalWrite(lb, HIGH);
  digitalWrite(lr, HIGH); 
  digitalWrite(rr, HIGH);
  digitalWrite(rb, HIGH);
  delay(200);
}

void t90r()
{ 
  right();
  delay(1435);
  stay();
  //2870

}

void square()
{ 
  right();
  delay(1385);
  stay();

}


void setup()
{
  for (int x = 6; x <= 11; x++) 
  { 
    pinMode(x, OUTPUT);
  }
  digitalWrite(LEFT_MOTOR_EN, HIGH);
  digitalWrite(RIGHT_MOTOR_EN, HIGH);
  pinMode(5, INPUT);
  pinMode(12, INPUT);
}
void loop()
{
  sr = digitalRead(5);
  sl = digitalRead(12);
  if ((sl == LOW) && (sr == LOW))
  { 
    fwd();
  }

  if (sr == HIGH)
  { 
    left();
 }

  if (sl == HIGH)
  {
    right();
  } 
  
  if ((sl == HIGH) && (sr == HIGH))
  { 
    fwd();
  }  

}
 



