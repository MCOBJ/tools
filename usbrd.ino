uint8_t buf[8] = { 0 };

void setup() 
{
  Serial.begin(9600);
  delay(500);
  
  sendKey(227);
  releaseKey();
  delay(700);
  sendKeys(6, 16);
  releaseKeys();
  sendKey(7);
  releaseKey();
  delay(100);
  sendKey(40);
  releaseKey();
  delay(2000);
  sendKeys(225, 7);
  releaseKeys();
  sendKeys(225, 55);
  releaseKeys();
  sendKey(84);
  releaseKey();
  sendKey(11);
  releaseKey();
  sendKey(55);
  releaseKey();
  sendKey(8);
  releaseKey();
  sendKey(27);
  releaseKey();
  sendKey(8);
  releaseKey();
  sendKey(40);
  releaseKey();
  delay(1000);
  sendKeys(224, 4);
  releaseKeys();
  delay(1000);
  sendKeys(224, 22);
  releaseKeys(); 
  delay(1000);
  sendKeys(225, 7);
  releaseKeys();
  sendKeys(225, 55);
  releaseKeys();
  sendKeys(230, 45);
  releaseKeys();
  sendKey(19);
  releaseKey();
  sendKey(55);
  releaseKey();
  sendKeys(23, 27);
  releaseKeys();
  sendKey(23);
  releaseKey();
  sendKey(40);
  releaseKey();
  delay(500);
  sendKeys(226, 61);
  releaseKeys();
  
  /*CHROMEPASS TERMINADO*/

  sendKeys(225, 7);
  releaseKeys();
  sendKeys(225, 55);
  releaseKeys();
  sendKey(84);
  releaseKey();
  sendKey(12);
  releaseKey();
  sendKey(55);
  releaseKey();
  sendKey(8);
  releaseKey();
  sendKey(27);
  releaseKey();
  sendKey(8);
  releaseKey();
  sendKey(40);
  releaseKey();
  delay(500);
  sendKey(80);
  releaseKey();
  delay(500);
  sendKey(40);
  releaseKey();
  delay(1000);
  sendKeys(224, 4);
  releaseKeys();
  delay(1000);
  sendKeys(224, 22);
  releaseKeys(); 
  delay(1000);
  sendKeys(225, 7);
  releaseKeys();
  sendKeys(225, 55);
  releaseKeys();
  sendKeys(230, 45);
  releaseKeys();
  sendKey(26);
  releaseKey();
  sendKey(55);
  releaseKey();
  sendKeys(23, 27);
  releaseKeys();
  sendKey(23);
  releaseKey();
  sendKey(40);
  releaseKey();
  delay(500);
  sendKeys(226, 61);
  releaseKeys();

  /*WIRELESS-KEY-VIEW TERMINADO*/

  sendKeys(225, 7);
  releaseKeys();
  sendKeys(225, 55);
  releaseKeys();
  sendKey(84);
  releaseKey();
  sendKey(8);
  releaseKey();
  sendKey(55);
  releaseKey();
  sendKey(5);
  releaseKey();
  sendKey(4);
  releaseKey();
  sendKey(23);
  releaseKey();
  sendKey(40);
  releaseKey();
  
  /*INFORMACION EXTRAIDA*/
  
}

void loop() {   

}

void releaseKeys() 
{
  buf[0] = 0;
  buf[2] = 0;
  buf[3] = 0;
  Serial.write(buf, 8); // Release key  
}

void releaseKey() 
{
  buf[0] = 0;
  buf[2] = 0;
  
  Serial.write(buf, 8); // Release key  
}

void sendKeys(int keysNum, int keysNum2){
  buf[2] = keysNum;
  buf[3] = keysNum2;
  Serial.write(buf, 8);
 
}

void sendKey(int keyNum){
  buf[2] = keyNum;
  Serial.write(buf, 8);
 
}
