/**
 **************************************************
 *
 * @file        PortScanner.ino
 * @brief       Scans all ports for devices
 *
 *
 *
 * @authors     @ soldered.com
 ***************************************************/

#include "TCA9548A-SOLDERED.h"
#include <Wire.h>

TCA9548A I2CMux; // Address can be passed into the constructor

void setup()
{
    I2CMux.begin();
    Wire.begin();
    Serial.begin(115200);
}

void loop()
{
    for (uint8_t t = 0; t < 8; ++t)
    {
        I2CMux.openChannel(t);
        Serial.print("TCA Port #");
        Serial.println((int)t);

        for (uint8_t addr = 0; addr <= 127; addr++)
        {
            // Don't report on the TCA9548A itself!
            if (addr == 0x70)
                continue;

            // See whether a device is on this address
            Wire.beginTransmission(addr);

            // See if something acknowledged the transmission
            int response = Wire.endTransmission();
            if (response == 0)
            {
                Serial.print("Found I2C 0x");
                Serial.println(addr, HEX);
            }
        }

        I2CMux.closeChannel(t);
        delay(1000);
    }

    Serial.println("\nScan completed.");
    delay(5000);
}