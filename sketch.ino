int ledPin = 9;
int potPin = A0;

int potValue = 0;
int brightness = 0;

void setup()
{
pinMode(ledPin, OUTPUT);

Serial.begin(9600);

Serial.println("PWM LED Control");
}

void loop()
{
 // Read potentiometer
 potValue = analogRead(potPin);

 // Convert ADC value to PWM value
 brightness = map(potValue, 0, 1023, 0, 255);

 // Generate PWM signal
analogWrite(ledPin, brightness);

 // Display values
Serial.print("Pot Value = ");
Serial.print(potValue);

Serial.print(" PWM = ");
Serial.println(brightness);

delay(100);
}