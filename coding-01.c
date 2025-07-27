#include <stdio.h> 

int main() {
    char name = 'N';    // ประกาศตัวแปรเก็บอักษรตัวแรกของชื่อ
    int age = 18;         // ประกาศตัวแปรอายุเป็นจำนวนเต็ม
    float weight = 52.00; // ประกาศตัวแปรน้ำหนักเป็นทศนิยม

    // แสดงข้อความพร้อมข้อมูล name และ age
    printf("Student %c is %d years old.\n", name, age);
    printf("He weighs %.2f kg.\n",weight); // %.2f แสดงเลขทศนิยม 2 ตำแหน่ง

    return 0; 
}