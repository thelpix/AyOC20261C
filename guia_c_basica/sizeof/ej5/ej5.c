#include <stdio.h>

int main() {
    float n = 0.1;
    double m = 0.1;

    printf("Mi pija mide: %fcm\n", n);
    printf("Mi pija mide: %lfcm \n", m);
    printf("Mi pija mide: %dcm \n", (int)n);
    printf("Mi pija mide: %dcm \n", (int)m);

    return 0;
}