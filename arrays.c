#include <stdio.h> 
#include <stdlib.h>
#include "input.h"

void printArray(int arr[], int arrLength) {
    printf("[ ");
    for(int i=0; i<arrLength; i++) {
        printf("%d%s", arr[i], (i < arrLength - 1 ? ", " : ""));
    }
    printf("]\n");
}

int arrayFirstIndexOf(int val, const int arr[], int length) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == val) {
            return i;
        }
    }
    return -1; 
}

int arrayLastIndexOf(int val, const int arr[], int length){
    int lastIndex = -1;

    for(int i = 0; i < length; i++){
        if(arr[i] == val){
            lastIndex = i;
        }
    }

    return lastIndex;
}