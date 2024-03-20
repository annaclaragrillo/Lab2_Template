#include <stdio.h> 
#include <stdlib.h>
#include "input.h"
#include "arrays.h"

int main() {
        
    int seq[50] = {
            93, 32, 31, 36, 60, 1, 74, 87, 52, 2,
            76, 54, 74, 17, 90, 81, 96, 72, 22, 31,
            49, 83, 99, 1, 11, 55, 86, 39, 6, 10,
            48, 65, 52, 10, 86, 82, 43, 4, 3, 6,
            78, 35, 31, 82, 18, 1, 48, 80, 23, 38
            };

    int matrix[6][5] = {
            {31,22, 4,17,24},
            {36,40,24,29,22},
            {34,16,39,50,26},
            {15,20,18, 7,39},
            {4,34,22,26,30},
            {5,42, 9,31,27}
            };

    
    printArray(seq,50);
    
    int val=52;
    int index= arrayFirstIndexOf(val, seq, 50);
    if(index != -1){
        printf("O valor %d foi encontrado no índice %d.\n", val, index);
    } else {
        printf("O valor %d não foi encontrado.\n", val);
    }

    return EXIT_SUCCESS;
}
