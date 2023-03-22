class Flashor{
  private:
    int ledPin;
    int bPlusPin;
    int bSubPin;
    int flashDelay;
    int bPlus;
    int bSub;
    int sayac;
    int led;
  public:
    Flashor(int d1,int d2,int d3){
      ledPin=d1;
      bPlusPin=d2;
      bSubPin=d3;
    }
    void setup(){
      pinMode(ledPin,OUTPUT);
      pinMode(bPlusPin,INPUT);
      pinMode(bSubPin,INPUT);
      bPlus=digitalRead(bPlusPin);
      bSub=digitalRead(bSubPin);
      flashDelay=300;
      sayac=0;
      led=HIGH;
      digitalWrite(ledPin,led);
    }
    void attach(){
      if(bPlus==LOW&&digitalRead(bPlusPin)==HIGH){
        flashDelay=flashDelay+10;
      }
      if(bSub==LOW&&digitalRead(bSubPin)==HIGH){
        flashDelay=flashDelay-10;
      }
      sayac++;
      if(sayac>flashDelay){
        sayac=0;  
        if(led==LOW){
          led=HIGH;
          digitalWrite(ledPin,led);
        }
        else{
          led=LOW;
          digitalWrite(ledPin,led);
        }
      }
      bPlus=digitalRead(bPlusPin);
      bSub=digitalRead(bSubPin);
      delayMicroseconds(100);
    }
};
