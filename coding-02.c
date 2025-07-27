#include <stdio.h> 

int main() {
    char name[31];   // เก็บชื่อนักเรียน สูงสุด 30 ตัวอักษร 
    int age;             // อายุ (จำนวนเต็ม)
    float height;        // ส่วนสูง (ทศนิยม หน่วยเซนติเมตร)

    char subject;        // ตัวอักษรแทนชื่อวิชา 
    float grade;         // เกรดที่ได้ 
    char description[20];// คำอธิบายเกรด 

    // รับชื่อ อายุ และส่วนสูงจากผู้ใช้
    printf("Enter your name, age and height: ");
    scanf("%s %d %f", name, &age, &height);
    
    // รับชื่อวิชา เกรด และคำอธิบายจากผู้ใช้
    printf("Enter subject, grade, and grade description: ");
    scanf(" %c %f %s", &subject, &grade, description);

    // แสดงผลข้อมูลที่รับมา
    printf("%s is %d years old and %.1f centimeters tall.\n", name, age, height);
    printf("In subject %c, %s got %.2f which is described as \"%s\".\n", subject, name, grade, description);

    return 0;  
}