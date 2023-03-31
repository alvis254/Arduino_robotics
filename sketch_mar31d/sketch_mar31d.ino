int ena = 25;
int in1 = 26;
int in2 = 27;

//motor 2 variables
int enb = 14;
int in3 = 32;
int in4 = 33;

void forward()
digitalwrite(in1, high)
digitalwrite(in2, low)

digitalwrite(in3, high)
digitalwrite(in4, low)

analogwrite(ena, 150)
analogwrite(enb, 150)

void reverse()
digitalwrite(in1, low)
digitalwrite(in2 ,high)

digitalwrite(in3, low)
digitalwrite(in4, high)

analogwrite(ena, 150)
analogwrite(enb, 150)

void setup() {
pinmode(ena, OUTPUT)
pinmode(in1, OUTPUT)
pinmode(in2, OUTPUT)
pinmode(enb, OUTPUT)
pinmode(in3, OUTPUT)
pinmode(in4, OUTPUT)

ledcAttachpin(ena, 2);
ledcAttachpin(enb, 2);
ledsetup(0,1000,8);

void loop() {
  
 forward();
 delay(10000) 

 reverse();
 delay(5000);
 
}
