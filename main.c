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

    
    //printArray(seq,50);

    int val = 52;
    int index = arrayFirstIndexOf(val, seq, 50);
    if(index != -1){
        printf("O valor %d foi encontrado pela primeira vez no índice %d.\n", val, index);
    } else {
        printf("O valor %d não foi encontrado.\n", val);
    }

   int value = 1;
   int i = arrayLastIndexOf(value, seq, 50);
    if(index != -1){
        printf("O valor %d foi encontrado pela última vez no índice %d.\n", value, i);
    } else {
        printf("O valor %d não foi encontrado.\n", value);
    }
    
    printf("Sequência seq: ");
    for (int i = 0; i < 50; i++) {
        printf("%d ", seq[i]);
    }
    printf("\n");

    int number;
    printf("Digite o valor a pesquisar: ");
    readInteger(&number);
    
    int first = arrayFirstIndexOf(number, seq, 50);
    int last = arrayLastIndexOf(number, seq, 50);

    if (first == -1) {
        printf("O valor %d não existe na sequência.\n", number);
    } else {
        printf("O valor %d ocorre nos índices: primeiro = %d, último = %d\n", number, first, last);
    }
    
    
    return EXIT_SUCCESS;
}
