#include <esp8266wifi.h>
#include <esp8266httpclient.h>

const char *ssid = "........";
const char *password = "........";

String nodeName = "esp32";
String redirectUri = "http%3A%2F%2F" + nodeName + ".local%2Fcallback%2F";

void setup(void)
{
  Serial.begin(115200)
      Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop(void)
{
  // read RFID
  // change song if RFID ID has changed
}