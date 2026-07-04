// DC34-Mech-SAO-Firmware is the program for the small mech weapon boards.
// All boards take the exact same program. 
// Boards are configured by different resistors on the individual boards.
// There is no need to change anything in the program between boards.
// They're configured at the hardware level. 
//
// This program is based on the example_pid5681 Arduino sketch for the Adafruit ATtiny 816
//
/*
 * Arduino IDE setup
 * Programming requires a UPDI programmer ($7 in 2026)
 * https://www.digikey.com/en/products/detail/adafruit-industries-llc/5879/22596413?s=N4IgjCBcoLQBxVAYygMwIYBsDOBTANCAPZQDa4ArAEwIC6AvvYVWSBXAOwCcIDQA
 * 
 * File > Preferences > Additional Boards Manager URLs: paste the following URL
 * http://drazzy.com/package_drazzy.com_index.json
 * 
 * Tools > Board > Boards Manager...
 * Search for megaTinyCore
 * Install megaTinyore by Spence Konde
 * 
 * Tools > Board > megaTinyCore > ATtiny 3226/3216/1616/1606/816/806/416/406 w/Optiboot
 * Tools > Chip: > ATtiny816
 * Tools > Clock: > 10 MHz internal
 * Tools > Programmer > SerialUPDI - SLOW: 57600 baud 
 * 
 * On the UPDI friend, make sure the switch is flipped to 3V
 * 
 * Attach the UPDI Friend programmer between your computer and connector J2 on the circuit, connecting
 * GND -> GND
 * PWR -> PWR
 * UPDI -> UPDI
 * 
 * Sketch > Upload Using Programmer 
 * You will see the red LED flicker on the UPDI friend.
 * If this does not work, you may need to go to
 * Tools > Port
 * and select a serial port.
 */

/*
 * Mapping of GPIO pins to attiny816 pins 
 * GPIO - ATTINY816 Pin
 * 0    - 5
 * 1    - 6
 * 2    - 7
 * 3    - 8
 * 4    - 9
 * 5    - 10
 * 6    - 11
 * 7    - 12
 * 8    - 13
 * 9    - 14
 * 10   - 15
 * 11   - 16
 * 12   - 17
 * 13   - 18
 */
 
 #define PRODUCT_CODE            5681
#define CONFIG_I2C_PERIPH_ADDR  0x49
//#define CONFIG_UART_DEBUG         1

#define CONFIG_INTERRUPT_PIN        6
//#define USE_PINCHANGE_INTERRUPT   1

// Can have up to 3 addresses
#define CONFIG_ADDR_0_PIN          12
#define CONFIG_ADDR_1_PIN          13

#define CONFIG_ADC                 1
#define CONFIG_PWM                 1
#define CONFIG_NEOPIXEL            1
#define CONFIG_NEOPIXEL_BUF_MAX   (60*3) // 60 pixels == 180 bytes

#include "Adafruit_seesawPeripheral.h"

void setup() {
#if CONFIG_UART_DEBUG
  Serial.begin(115200);
  delay(500);
#endif
  delay(1);
  Adafruit_seesawPeripheral_begin();
}


void loop() {
  Adafruit_seesawPeripheral_run();
}
