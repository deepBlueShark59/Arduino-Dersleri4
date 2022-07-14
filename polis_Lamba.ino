//#Ders4
//                                                   Polis_Lambası_Projesi
int ledler[] = {2,3,4,5,6,7,8,9};
int My=0;
int tur=7;
void setup() {
  for (int My=0; My<8; My++){ // yukarıdan sırası ile ledleri çağırıyoruz /// ledler[]
     pinMode(ledler[My],OUTPUT); //My değişkenine istediğimiz bir karakteri yazabiliriz.
  

}
}
void loop() {
kid1();
        delay(130);
kid2();

}

void kid1(){
    for (int i=0; i<tur; i++){
        for ( My=0; My <4; My++) // 4 adet led aynı anda yanıyor mavi
        {
        digitalWrite(ledler[My],HIGH);
        }
        delay(30);
        for ( My=0; My <4; My++) // 4 adet led aynı anda sönüyor
        {
        digitalWrite(ledler[My],LOW);
        }
        delay(30);
    }
 
 } 
void kid2(){
    for (int i=0; i<tur; i++){
        for ( My=4; My <8; My++) // 4 adet led aynı anda yanıyor mavi
        {
        digitalWrite(ledler[My],HIGH);
        }
        delay(30);
        for ( My=4; My <8; My++) // 4 adet led aynı anda sönüyor
        {
        digitalWrite(ledler[My],LOW);
        }
            delay(30);
    }
}
