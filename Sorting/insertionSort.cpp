#include <iostream>

using namespace std;

void insertionSort(int arr[], int length);
void printArray(int arr[], int size);

int main()
{
    int array[10] = {2,3,5,6,5,2,21,56,6,1};
    insertionSort(array,10);
}


void insertionSort(int arr[],int length)
{
    int i,hole,value;

    for(i=1;i<length;i++){
        value = arr[i];
        hole = i;

        while(hole > 0 && arr[hole-1] > value){
            arr[hole] = arr[hole-1];
            hole = hole-1;
        }

        arr[hole] = value;

    }

    cout << "Sorted Array : ";
    printArray(arr,length);
}


void printArray(int array[], int size)
{ 
    int j;
    for (j = 0; j < size; j++)
    {
        cout <<" "<< array[j];  
    }
    cout << endl;
}



