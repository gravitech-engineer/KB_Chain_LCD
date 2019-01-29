#include <KBChain_LCD.h>

// Set lcd1 I2C address to 0x22 for a 16 chars and 2 line display
KBChain_LCD lcd1(0x22, 16, 2);

// Set lcd2 I2C address to 0x23 for a 20 chars and 4 line display
KBChain_LCD lcd2(0x23, 20, 4);

//Custom Chars
uint8_t bell[8]     = {0x4, 0xe, 0xe, 0xe, 0x1f, 0x0, 0x4};
uint8_t note[8]     = {0x2, 0x3, 0x2, 0xe, 0x1e, 0xc, 0x0};
uint8_t clock[8]    = {0x0, 0xe, 0x15, 0x17, 0x11, 0xe, 0x0};
uint8_t heart[8]    = {0x0, 0xa, 0x1f, 0x1f, 0xe, 0x4, 0x0};
uint8_t duck[8]     = {0x0, 0xc, 0x1d, 0xf, 0xf, 0x6, 0x0};
uint8_t check[8]    = {0x0, 0x1 , 0x3, 0x16, 0x1c, 0x8, 0x0};
uint8_t cross[8]    = {0x0, 0x1b, 0xe, 0x4, 0xe, 0x1b, 0x0};
uint8_t retarrow[8] = {  0x1, 0x1, 0x5, 0x9, 0x1f, 0x8, 0x4};

void setup()
{
  // initialize the lcd1, lcd2
  lcd1.begin();
  lcd2.begin();

  // On-Off LED Backlight
   lcd1.noBacklight();
   lcd2.noBacklight();
   delay(500);
   lcd1.backlight();
   lcd2.backlight();
   delay(1000);
}

void loop()
{
  // Clear Display
  lcd1.clear();
  lcd2.clear();
  
  // lcd1 print a message.
  lcd1.print("KidBright Chain");
  lcd1.leftToRight();
  lcd1.setCursor(0, 1);
  lcd1.print("GravitechThai");
  
  // lcd2 print a message.
  lcd2.print("KidBright Chain");
  lcd2.setCursor(0, 1);
  lcd2.print("GravitechThai");
  lcd2.setCursor(0, 2);
  lcd2.print("GravitechThai");
  lcd2.setCursor(0, 3);
  lcd2.print("GravitechThai");
  delay(3000);

  // Print a message and custom chars.
  lcd1.createChar(3, heart);
  lcd2.createChar(3, heart);
  lcd1.clear();
  lcd2.clear();
  lcd1.print("Hello world...");
  lcd2.print("Hello world...");
  lcd1.setCursor(0, 1);
  lcd2.setCursor(0, 1);
  lcd1.print(" I ");
  lcd2.print(" I ");
  lcd1.write(3);
  lcd2.write(3);
  lcd1.print(" KidBright");
  lcd2.print(" KidBright");
  
  lcd1.blink();
  lcd2.blink();
  delay(5000);
  lcd1.noBlink();
  lcd2.noBlink();
}
