int blinkPin = 13;
unsigned long preveusTime = 0;

int interval = 1000;
int ledState = LOW;

void setup()
{
	pinMode(blinkPin, OUTPUT);
}

void loop()
{
	unsigned long currentTime = millis();

	if (currentTime - preveusTime >= interval)
	{
		preveusTime = currentTime;
		ledState = !ledState;
		digitalWrite(blinkPin, ledState);
	}
}
