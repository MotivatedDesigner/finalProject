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
int* deleteDouble(int arr[], int size, int start)
{
    // count will be the size of the returned array
    int count = size;
    int tmp;
    
    for (int i = 0; i < size; i++) 
    {
        
        // Fill repeated elements with (start-1) as a mark (no element in the initial array will have the value (start-1))
        if( arr[i] == (start-1) ) continue;
        
        tmp = arr[i];
        
        for (int j = i+1; j < size; j++) 
        {
            
            // If element found more than once his place will be filled with (start-1) 
            if( arr[j] == tmp ){ arr[j] = (start-1); count--; }
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
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size-i-1; j++)
            if( arr[j] > arr[j+1] ) 
            {
                swap(&arr[j],&arr[j+1]);
                isSorted = False;
            }
        if(isSorted) break;
    }
}
