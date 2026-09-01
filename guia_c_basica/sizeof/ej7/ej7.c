#include <stdio.h>

int main(){
    int a = 5; int b = 3; int c = 2; int d = 1;
    
    printf("res1 %d \n", a + b * c / d); //(11)
    printf("res2 %d \n", a % b); //(2)
    printf("res3 %d \n", a == b); //false? v 0?
    printf("res4 %d \n", a != b); //true? v 1?
    printf("soy un and: %x \n", a & b); //(0101, 0011, 0001 -> 1)
    printf("soy un or: %x \n", a | b); //(0101, 0011, 0111 -> 7)
    printf("soy un not: %x \n", ~a); //(11111111 11111111 11111111 11111010) fffffffa
    printf("soy un AND: %d \n", a && b); //0, porque 1?
    printf("soy un OR: %d \n", a || b); //1
    printf("soy un LShift: %x \n", a << 1); //(00001010)10
    printf("soy un RShift: %x \n", a >> 1); //(00000010)2
    printf("%d \n", a += b); //a = 8
    printf("%d \n", a -= b); //a = 5
    printf("%d \n", a *= b); //a = 15
    printf("%d \n", a /= b); //a = 5
    printf("%d \n", a %= b); //a = 2
}