#include <stdio.h>
    
    int arr[] = {1, 2, 3, 4};
    int length = sizeof(arr) / sizeof(int);

    void rotarNVeces(int input){
        while(input > 0){
            for(int i = 0; i < length; i++){
            int j = length - 1 - i;
            int fstSwap = arr[0];
            int sndSwap = arr[j];
            arr[0] = sndSwap;
            arr[j] = fstSwap;
            }
            --input;
        }
    }

int main(){
    int a;
    printf("inserte parametro: ");
    scanf("%d", &a);
    rotarNVeces(a);

    //print
    for (int i = 0; i < length; i++){
        printf(" %d", arr[i]);
    }    
    return 0;
}