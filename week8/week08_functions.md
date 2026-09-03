# Week 8 — Functions Reference

**Function Reference — `ex02_game_utils.c`**

| Function | ทำหน้าที่ | Returns |
|---|---|---|
| `int clamp(int value, int min, int max)` | จำกัดค่า value ให้อยู่ระหว่าง min และ max | ค่าที่ clamp แล้ว |
| `float lerp(float a, float b, float t)` | Linear interpolation ระหว่าง a และ b ตาม t | ค่าที่คำนวณได้ |
| `int randomRange(int min, int max)` | สุ่มตัวเลขระหว่าง min และ max | ค่าสุ่ม |
| `float percentOf(int current, int total)` | คำนวณเปอร์เซ็นต์ | ค่าเปอร์เซ็นต์ |

## คำถาม Reflection — Exercise 2

### 2.1 `clamp` — Pass by Value

**คำถาม:** ทำไม `hp` ใน `main()` ถึงยังเป็น 150 ทั้งที่ `value` ใน `clamp()` ถูกเขียนทับเป็น 100 ไปแล้ว?

**คำตอบ:**เพราะว่า hp ใน main() คือต้นฉบับทียังไม่ถูกแทนที่ใน value ที่อยู่ ใน camp()

### 2.2 `lerp` — Local Scope

**คำถาม:** ทำไม `main()` ถึงมองไม่เห็นตัวแปร `result` ทั้งที่มันถูกประกาศไว้ในไฟล์เดียวกัน?

**คำตอบ:**เพราะตัวแปรที่ประกาศในฟังก์ชันมองไม่เห็นจากภายนอก และ result ใน square() กับ result ใน main() เป็นคนละตัวแปรกันโดยสิ้นเชิง เพราะแต่ละ function มี scope
ของตัวเอง

### 2.3 `randomRange` — Pass by Value

**คำถาม:** ทำไม `diceMin` ใน `main()` ถึงยังเป็น 1 ทั้งที่ `min` ใน `randomRange()` ถูกบวกเพิ่มเป็น 101 ไปแล้ว?

**คำตอบ:**เพราะ#include <stdlib.h>, #include <time.h> และเรียก srand((unsigned
int)time(NULL)); ครั้งเดียว ที่ต้นๆ main() — ห้ามเรียก srand() ซ้ำใน loop หรือใน randomRange() เอง
ไม่งั้นตัวเลขจะสุ่มซ้ำแบบเดิมทุกครั้ง

### 2.4 `percentOf` — Pass by Value

**คำถาม:** ทำไม `score` ใน `main()` ถึงไม่เปลี่ยนเป็น 0 ตาม `current` ทั้งที่ `percentOf()` แก้ `current = 0;` ไปแล้ว?

**คำตอบ:** เพราะว่า ในfunction percentOf()   currentก็คือ ตัวแปรscore ที่ดึงค่ามาคิด
