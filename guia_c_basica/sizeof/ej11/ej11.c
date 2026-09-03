#include <stdio.h>

int main(){
    //rotar Int[] a la izq.

    // [4 bytes, 4 bytes, ...]
    /// saber el length de Int[]
    //pasos:
    // copiar el primer int (los 1ros 4 bytes)
    // ir al final del array y desplazar 4 bytes
    //insertar en esos 4 0 el primer int
    int input[] = {1, 2, 3, 4};
    int length = sizeof(input) / sizeof(int);


    for(int i = 0; i < length; i++){
        int j = length - 1 - i;
        int fstSwap = input[0];
        int sndSwap = input[j];
        input[0] = sndSwap;
        input[j] = fstSwap;
    }

    //print
    for (int i = 0; i < length; i++){
        printf(" %d", input[i]);
    }
    
}