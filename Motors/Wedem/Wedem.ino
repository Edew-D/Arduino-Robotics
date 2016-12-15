#define   LEFT_MOTOR_EN   12
#define   lb   6   
#define   lr   7
#define   RIGHT_MOTOR_EN   8
#define   rr   9
#define   rb   10
void foward()
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
void trt()
{
	digitalWrite(lb, LOW);
	digitalWrite(lr, HIGH);
	digitalWrite(rr, LOW);
	digitalWrite(rb, HIGH);
}
void still()
{
	digitalWrite(lb, HIGH);
	digitalWrite(lr, HIGH);
	digitalWrite(rr, HIGH);
	digitalWrite(rb, HIGH);
}
void setup()
{
int x = 5, x <= 12, x++
  { 
    digitalWrite(x, HIGH);
  }
  	digitalWrite(LEFT_MOTOR_EN, HIGH);
  	digitalWrite(RIGHT_MOTOR_EN, HIGH);
}
void loop()
{

}
