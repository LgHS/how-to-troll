// "Improved" RickWifiRoll - Based on https://github.com/ardaozkal work.
#include <ESP8266WiFi.h>
#define DIM(arr) (sizeof (arr) / sizeof (arr)[0])

const char* ssids[] = {"Never gonna give you up","Never gonna let you down","Never gonna run around","Never gonna make you cry","Never gonna say goodbye","Never gonna tell a lie","Never gonna give, Never gonna give"};
const char* pass = "pass_goes_here";
void setup() {
  int currentssidno = 0;
  while (true)
  {
    const char* ssid = ssids[currentssidno];
    WiFi.softAP(ssid, pass);
    delay(5000);
    WiFi.softAPdisconnect(false);
    currentssidno = (currentssidno + 1) % DIM(ssids);
  }
}

void loop() {
}
