#include <stdio.h>
#include <stdint.h>

int main() {
    int8_t t8;
    int16_t t16;
    int32_t t32;
    int64_t t64;
    uint8_t ut8;
    uint16_t ut16;
    uint32_t ut32;
    uint64_t ut64;

    printf("this int is: %lu \n",sizeof(t8));
    printf("this int is: %lu \n",sizeof(t16));
    printf("this int is: %lu \n",sizeof(t32));
    printf("this int is: %lu \n",sizeof(t64));
    printf("this int is: %lu \n",sizeof(ut8));
    printf("this int is: %lu \n",sizeof(ut16));
    printf("this int is: %lu \n",sizeof(ut32));
    printf("this int is: %lu \n",sizeof(ut64));

    return 0;
}