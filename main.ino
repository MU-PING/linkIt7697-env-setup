void setup() 
{
  pinMode(LED_BUILTIN, OUTPUT); //指定build-in LED當作輸出腳位
}

void loop() 
{
  digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1000); // 延遲 1 秒
  digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
  delay(1000); // 延遲 1 秒
}
