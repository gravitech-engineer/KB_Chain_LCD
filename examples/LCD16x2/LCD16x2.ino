#include <KBChain_LCD.h>  //ทำการ #include ไฟล์ .h ใช้กับ LCD

//ประกาศ Class ที่สร้างใน Libraries ตามด้วย ชื่อตัวแปรใหม่(lcd1)ที่จะใช้แทนตัว Class
//ตั้งค่า I2C Address เป็น 0x22 และกำหนดขนาด 16 ตัวอักษร 2 บรรทัด 
KBChain_LCD lcd1(0x22, 16, 2);

void setup()
{
  lcd1.begin();   //ประกาศค่าเริ่มต้นให้ lcd1
  
  lcd1.clear();   //ล้างหน้าจอ lcd1
}

void loop()
{

  // การแสดงข้อความ
  lcd1.leftToRight();                 //เขียนข้อความเรียงตามซ้ายไปขวา
  lcd1.setCursor(0, 0);               //เริ่มเขียนตำแหน่งที่ 1 ของบรรทัดที่1
  lcd1.printstr("KidBright Chain");   //แสดงค่าตัวอักษร
  lcd1.leftToRight();                 //เขียนข้อความเรียงตามซ้ายไปขวา
  lcd1.setCursor(0, 1);               //เริ่มเขียนตำแหน่งที่ 1 ของบรรทัดที่2
  lcd1.printstr("GravitechThai");     //แสดงค่าตัวอักษร
  
}

