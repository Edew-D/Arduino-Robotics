#define   LEFT_MOTOR_EN   12
#define   lb   6   
#define   lr   7
#define   RIGHT_MOTOR_EN   8
#define   rr   9
#define   rb   10
void forward()
{

	digitalWrite(lr, LOW);
	digitalWrite(lb, HIGH);
	digitalWrite(rb, HIGH);
	digitalWrite(rr, LOW);
}
void sqt()
{
	digitalWrite(lb, LOW);
	digitalWrite(lr, HIGH);
	digitalWrite(rr, LOW);
	digitalWrite(rb, HIGH);
}
void right()
{
	digitalWrite(lb, LOW);
	digitalWrite(lr, HIGH);
	digitalWrite(rr, LOW);
	digitalWrite(rb, HIGH);
}
void Stay()
{
	digitalWrite(lb, HIGH);
	digitalWrite(lr, HIGH);
	digitalWrite(rr, HIGH);
	digitalWrite(rb, HIGH);
}
void setup()
{
 for (int x = 5; x <= 12; x++)
  { 
    digitalWrite(x, HIGH);
  }
  	digitalWrite(LEFT_MOTOR_EN, HIGH);
  	digitalWrite(RIGHT_MOTOR_EN, HIGH);
}
void loop()
{
forward();
delay(4000);
Stay();
delay(1000);
right();
delay(4000);
sqt();
delay(1000);



}
