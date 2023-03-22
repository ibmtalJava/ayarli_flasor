//Flashor class'ının olduğu dosyayı prrojemize ekledik
#include "flashor.h"
//Flashor class'ı tipinde flashor değişkenini tanımladık
//Flashor'ün constructor'ına ledPin=8, bPlusPin=5 bSubPin=3 değerlerini gönderdik 
Flashor flashor(8,5,3);
void setup() {
  //arduino ilk çalıştığında flashor'ün başlangıç ayarlamalarını yaptık
  flashor.setup();
}

void loop(){
  //her loop'ta çalışacak flashor methodunu çalıştırdık
  flashor.attach();
}
