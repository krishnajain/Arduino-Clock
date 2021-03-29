
#include <DS3231.h>
#include <LiquidCrystal.h>
DS3231 rtc(SDA, SCL);
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup() {
rtc.begin();
lcd.begin(16,2);
rtc.setDOW(MONDAY); 
rtc.setTime(10, 45, 00); 
rtc.setDate(29, 03, 2021); 
}

void loop() {
lcd.setCursor(0,0);
lcd.print("Real Time Clock ");

lcd.setCursor(0,1);
lcd.print("Time :  ");
lcd.print(rtc.getTimeStr());
delay(3000);

lcd.setCursor(0,1);
lcd.print("Date: ");
lcd.print(rtc.getDateStr());
delay(3000);

lcd.setCursor(0,1);
lcd.print("Day: ");
lcd.print(rtc.getDOWStr());
lcd.print(" ");
delay(3000);

lcd.setCursor(0,1);
lcd.print("Temp  : ");
lcd.print(rtc.getTemp());
lcd.print(" C ");
delay(3000);
}
