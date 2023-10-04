#include<stdio.h>

int main(){
    int n;

    scanf("%d", &n); // 5 ut + 1 ut per argument
                     // 5 ut เมื่อเรียกใช้ + 1 ut ต่อตัวแปร

    for(int i=0; i<n; i++){
        int k = n*(n-1);
    }

    printf("%d\n", n); // 5 ut + 1 ut per character that have been print (Exclude arguments) + 1 ut per arguments
                       // 5 ut เมื่อเรียกใช้ + 1 ut ต่ออักขระที่ถูกพิมพ์ออกทางหน้าจอ (ไม่รวมค่าจากตัวแปร) + 1 ut ต่อตัวแปร

    return 0; // 1 ut
}