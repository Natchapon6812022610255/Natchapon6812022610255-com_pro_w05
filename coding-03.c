#include <stdio.h>

int main() {
    float a = 0.456;
    int b = 17;
    float c = 26.432;
    int d = 7;
    float e = 123.456;
    float f = 0.005;

    printf("a = %7.3f %%\n", a);   // กำหนดช่องกว้าง 7 ตัวอักษร ทศนิยม 3 ตำแหน่ง
    printf("b = %5d %%\n", b);     // ช่องกว้าง 5 ตัวอักษร สำหรับจำนวนเต็ม
    printf("c = %7.3f %%\n", c);
    printf("d = %5d %%\n", d);
    printf("e = %8.3f %%\n", e);   // e ตัวเลขใหญ่กว่าหน่อย จึงขยายช่องกว้างขึ้น
    printf("f = %7.3f %%\n", f);

    return 0;
}