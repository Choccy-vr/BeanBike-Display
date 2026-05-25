#include <Arduino.h>
#include "esp_pm.h"
#include <soc/spi_reg.h>
#define FSPI 1
void setup() {
  Serial.begin(115200);
  Serial.println(SPI_USER_REG(FSPI));
}
void loop() {}
