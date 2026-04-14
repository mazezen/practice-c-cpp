#include <stdio.h>

int main()
{
    int hexNum1 = 0x1A3F;
    int hexNum2 = 0x2f;
    int hexNum3 = 0xAB43;
    int hexNum4 = 0xAbCd;
    int hexNum5 = 0x1;
    int hexNum6 = 0x0;
    int hexNum7 = 0xFF;

    // hex to digit: 每位乘以 16 的幂累加
    printf("------------------------ Hex -------------------------\n");
    printf("hexNum1 hex: 0x%X\n", hexNum1);
    printf("hexNum1 digit: %d\n", hexNum1); // 1*16^3+10*16^2+3*16^1+15*16^0 // 4096+2560+48+15 = 6719
    printf("------------------------------\n");
    printf("hexNum2 hex: 0x%X\n", hexNum2);
    printf("hexNum2 digit: %d\n", hexNum2); // 2*16+15 = 47
    printf("------------------------------\n");
    printf("hexNum3 hex: 0x%X\n", hexNum3);
    printf("hexNum3 digit: %d\n", hexNum3); // 43843
    printf("------------------------------\n");
    printf("hexNum4 hex: 0x%X\n", hexNum4);
    printf("hexNum4 digit: %d\n", hexNum4); // 43981
    printf("------------------------------\n");
    printf("hexNum5 hex: 0x%X\n", hexNum5);
    printf("hexNum5 digit: %d\n", hexNum5);
    printf("------------------------------\n"); // 1
    printf("hexNum6 hex: 0x%X\n", hexNum6);
    printf("hexNum6 digit: %d\n", hexNum6);
    printf("------------------------------\n"); // 0
    printf("hexNum7 hex: 0x%X\n", hexNum7);
    printf("hexNum7 digit: %d\n", hexNum7); // 255

    // hex to digit: 每位乘以 8 的幂累加
    printf("------------------------ Octal -------------------------\n");
    int octNum1 = 057;
    int octNum2 = 012;
    int octNum3 = 03;
    int octNum4 = 0241;
    printf("octNum1 octal: 0%o\n", octNum1);
    printf("octNum1 digit: %d\n", octNum1); // 40+7=47
    printf("------------------------------\n");
    printf("octNum2 octal: 0%o\n", octNum2);
    printf("octNum2 digit: %d\n", octNum2); // 8+2=10
    printf("------------------------------\n");
    printf("octNum3 octal: 0%o\n", octNum3);
    printf("octNum3 digit: %d\n", octNum3); // 3
    printf("------------------------------\n");
    printf("octNum4 octal: 0%o\n", octNum4);
    printf("octNum4 digit: %d\n", octNum4); // 128+32+1=161
    printf("------------------------------\n");

    // hex to digit: 每位乘以 2 的幂累加
    printf("------------------------ Binary -------------------------\n");
    int binNum1 = 1011;
    int binNum2 = 1101;
    int binNum3 = 101;
    printf("binNum1 digit: %d\n", binNum1); // 8+0+2+1 = 11
    printf("------------------------------\n");
    printf("binNum2 digit: %d\n", binNum2); // 8+4+0+1 = 13
    printf("------------------------------\n");
    printf("binNum3 digit: %d\n", binNum3); // 4+0+1 = 5
    printf("------------------------------\n");

    return 0;
}