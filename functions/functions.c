#include "functions.h"

//Get array(int) size
int getSize(int arr[])
{
    return *(&arr + 1) - arr;
}

//Generate random # between start & end
int aleatoire(int start, int end)
{
    //Used to reset the seed of the rand generator
    time_t t;
    srand((unsigned) time(&t));
    
    //return randum # between start & and
    return  start + (rand() % end-start);
}

//initialize array[size] with random #
void initArray(int arr[], int size, int start, int end)
{
    //Used to reset the seed of the rand generator
    srand(time(0));
    
    //Fill arr with random #
    for (int i = 0; i < size-1; i++) arr[i] = aleatoire(start,end);
}

//Print array of length n
void printArray(int arr[], int length)
{
    for (int i = 0; i < length; i++) printf("%d",arr[i]);
}

// Delete repeated elements from array of int
void deleteDouble(int arr[], int size, int tab[])
{
    bool isFound;
    int tmpKey;
    for(int i=0,j=0; i<size; i++)
    {
        isFound = False;
        for(int k=0; k<i; k++) if(arr[i]==tab[k]) isFound = True;
        if(!isFound) 
        {
            tab[j] = arr[i];
            j++;
        }
    }
}

//Helper func to swap to int
void swap(int* a, int* b)
{
    *a^=*b^=*a^=*b;
}

//Buble Sort
void bubleSort(int arr[], int size)
{
    // Handle if the array is already sorted
    bool isSorted = True;
    for(int i = 0; i < 5; i++)
    {
        for(int j=0;j<5-i-1;j++)
            if( arr[j] > arr[j+1] ) 
            {
                swap(&arr[j],&arr[j+1]);
                isSorted = False;
            }
        if(isSorted) break;
    }
}