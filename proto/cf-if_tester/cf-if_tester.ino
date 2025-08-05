#include <CFCard.h>
#include <CFFatDriver.h>
#include <debug.h>

// Read sector previously written by raw_write and output on Serial
bool raw_read(uint32_t sector = 2)
{
  if (!hd_init())
  {
    msgout("Error, could not find HD");
    return false;
  }
//  struct raw_data
//  {
//    const char str[32] = "";
//    uint16_t value;
//  } data;
//
//  if (hd_read_sector(sector, (uint8_t *)&data, sizeof(data)))
//  {
//    msgout("Read from HD: ");
//    msgout(data.str, data.value);
//  }
//  else
//    msgout("Error reading from HD");
}

int CF_En = 2;
int CF_RST = 3;

void setup() {
    Serial.begin(115200);
    delay(1000);

    pinMode(CF_En, OUTPUT);
    pinMode(CF_RST, OUTPUT);

    digitalWrite(CF_En, HIGH);
    digitalWrite(CF_RST, HIGH);

    raw_read();
}

void loop() {
  // put your main code here, to run repeatedly:

}
