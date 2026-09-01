#include <stdio.h>
#include <stdint.h>

int main(){
    uint32_t a = 0x0EFFBDFA;
    uint32_t b = 0xEEFFBDF0;
    uint32_t maska = 0xE0000000; 
    uint32_t maskb = 7; 

    uint32_t a_alto = a & maska;
    uint32_t b_alto = b & maskb;

    uint32_t b_desplazado = b_alto << 29;
    if(a_alto == b_desplazado) {
        printf("sison");} else { printf("morire");}

    return 0;
}