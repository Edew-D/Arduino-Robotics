#define   LEFT_MOTOR_EN   12
#define   lb   6   
#define   lr   7
#define   RIGHT_MOTOR_EN   8
#define   rr   9
#define   rb   10
void foward()
{

	digitalWrite(LEFT_MOTOR_2A, LOW);
	digitalWrite(LEFT_MOTOR_1A, HIGH);
	digitalWrite(RIGHT_MOTOR_1A, HIGH);
	digitalWrite(RIGHT_MOTOR_2A, LOW);
	delay(3000);
}
void sqt()
{
  	digitalWrite(LEFT_MOTOR_EN, HIGH);
	digitalWrite(LEFT_MOTOR_2A, LOW);
	digitalWrite(LEFT_MOTOR_1A, HIGH);


	digitalWrite(RIGHT_MOTOR_1A, LOW);
	digitalWrite(RIGHT_MOTOR_2A, HIGH);
	delay(1000);
}
void trt()
{
	digitalWrite(LEFT_MOTOR_2A, LOW);
	digitalWrite(LEFT_MOTOR_1A, HIGH);

	digitalWrite(RIGHT_MOTOR_1A, LOW);
	digitalWrite(RIGHT_MOTOR_2A, HIGH);
}
void still()
{
	digitalWrite(LEFT_MOTOR_2A, HIGH);
	digitalWrite(LEFT_MOTOR_1A, HIGH);

	digitalWrite(RIGHT_MOTOR_1A, HIGH);
	digitalWrite(RIGHT_MOTOR_2A, HIGH);
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
