#include <iostream>
#include <random>
#include <iostream>

void insertSort(int *arr){

    int key,j;

    for (int i=1;i< 100; i++){      //loop through elements in array

        key = arr[i];                    // assign value to key
        j = i-1;                    // assign value 1 below to variable, used for compare

        //while positive index and if arr at value is < one below (j)
        while (key > 0 && key < arr[j]){
            arr[j+1] = arr[j];  //move value from below:: 0,0,j,j,x,y,z
            j--;             // decrement to check the index below
        }

        // if found where index below is no longer less than current
        // assaign that key to that value
        arr[j+1] = key;


    }
}

int main(){

    int unsorted[100];

    for (int i =0;i<100;i++){
        unsorted[i] = rand() % 500 + 1;
        std::cout << unsorted[i]<<", ";
    }
    std::cout<<std::endl;

    insertSort(unsorted);

    for (int i =0;i<100;i++){
        std::cout << unsorted[i]<<", ";
    }
    std::cout<<std::endl;

    return 0;
}
