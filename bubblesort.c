#include "bubblesort.h"

void bubbleSort(int a[]){
    //  ciclo dei numeri passati
  
  int SIZE = sizeof(a)/sizeof(a[0]);  
   
for (unsigned int pass = 1; pass  < SIZE; ++pass){
        // ciclo per confrontare i numeri ad ogni passata
        for(size_t j = 0; j < SIZE - 1; ++j){
            // scambia gli elementi se non sono in ordine
            if(a[j] > a[j+ 1])
            {
                unsigned int hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
        }
    }
}
