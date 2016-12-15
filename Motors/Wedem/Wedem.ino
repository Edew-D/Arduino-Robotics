#define   LEFT_MOTOR_EN   8
#define   lb   7   
#define   lr   6
#define   RIGHT_MOTOR_EN   11
#define   rr   10
#define   rb   9
void right()
{

	digitalWrite(lr, HIGH);
	digitalWrite(lb, LOW);
	digitalWrite(rb, LOW);
	digitalWrite(rr, HIGH);
}

void left()
{

	digitalWrite(lr, LOW);
	digitalWrite(lb, HIGH);
	digitalWrite(rb, HIGH);
	digitalWrite(rr, LOW);
}
void fwd()
{
	digitalWrite(lb, HIGH);
	digitalWrite(lr, LOW);
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
}

void t90r()
{ 
  right();
delay(750);
stay();

}

void setup()
{
 for (int x = 5; x <= 12; x++) 
  { 
    pinMode(x, HIGH);
  }
  	digitalWrite(LEFT_MOTOR_EN, HIGH);
  	digitalWrite(RIGHT_MOTOR_EN, HIGH);
}
void loop()
{
 t90r();
 fwd();
 delay(2500);
}
