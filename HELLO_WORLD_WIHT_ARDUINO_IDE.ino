#define led 3 //In this line we define the pin to which the LED is connected on the microcontroller


void setup() {//In the setup we will indicate whether the pin is input or output
pinMode(led,OUTPUT);//In this case we want it to be output because from the microcontroller to the LED a voltage of 5v will come out

}

void loop() {//The loop means how many times we want a certain action to be repeated
  digitalWrite(led,HIGH);//so we start by writing a digital type function, that is, in the microcontroller we can have analog or digital, as we want it to do a certain action we tell it to write, we call the variable led which we define as pin 3, and we set it to HIGH, because we want it to turn on
  delay(1000);//the delay is the waiting time that we define in parentheses in seconds, that is, 1000 milliseconds
  digitalWrite(led,LOW);//Here it's the same thing, but we want to turn it off so we write LOW
  delay(1000);

}
