#include "bubblesort.h"
void swap(int *element1,*element2){
    int hold;
    hold = *element1;
    *element1 = element2;
    *element2 = hold;
}

void bubbleSort(int a[]){
  int SIZE = sizeof(a)/sizeof(a[0]);  
   //  for loop for past numbers
for (unsigned int pass = 1; pass  < SIZE; ++pass){
        // for loop for confronting every number 
        for(size_t j = 0; j < SIZE - 1; ++j){
            // swap elements 
            if(a[j] > a[j+ 1]) {
                swap(a[j-1],a[j+1])
            }
        }
    }
}
