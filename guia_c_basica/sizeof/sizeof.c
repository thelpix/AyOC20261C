#include <stdio.h>
#include <stdbool.h>

int main(){
    char c = 100;
    char unsigned cPos = 200;
    unsigned short sPos = 17424;
    short s = -8712;
    unsigned int iPos = 246912;
    int i = 123456;
    unsigned long lPos = 1410065406;
    long l = 1234567890;
    unsigned long long llPos = 9999999999999;
    long long ll = 999999999999;
    float f = 10.15;
    double d = 1000.9238;
    long double ld = 9321843294.2394;
    bool booleano = true;

    printf("char(%zu): %d \n", sizeof(c),c);
    printf("unsigned char(%zu): %d \n", sizeof(cPos), cPos);
    printf("unsigned short(%zu): %d \n", sizeof(sPos), sPos);
    printf("short(%zu): %d \n", sizeof(s), s);
    printf("unsigned int(%zu): %d \n", sizeof(iPos), iPos);
    printf("int(%zu): %d \n", sizeof(i),i);
    printf("unsigned long(%zu): %ld \n", sizeof(lPos), lPos);
    printf("long(%zu): %ld \n", sizeof(l), l);
    printf("unsigned long long(%zu): %lld \n", sizeof(llPos), llPos);
    printf("long long(%zu): %lld \n", sizeof(ll), ll);
    printf("float(%zu): %f \n", sizeof(f), f);
    printf("double(%zu): %lf \n", sizeof(d), d);
    printf("long double(%zu): %Lf \n", sizeof(ld), ld);
    printf("bool(%zu): %d \n", sizeof(booleano), booleano);

    return 0;
}