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

void printArray(int arr[], int lengthOfArr)
{
    for (int i = 0; i < lengthOfArr; i++) printf("%d",arr[i]);
}

void deleteDouble(int arr[], int size, int tab[])
{
    bool isFound;
    for(int i=0,j=0; i<size; i++)
    {
        isFound = False;
        for(int k=0; k<i; k++) if(arr[i]==tab[k]) isFound = True;
        if(!isFound) { tab[j] = arr[i]; j++; }
    }
}

//Helper func to swap tow int
void swap(int* a, int* b)
{
    *a^=*b^=*a^=*b;
}

void bubbleSort(int arr[], int size)
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
<<<<<<< HEAD

int max(int arr[], int size)
{
    int tmpKey = arr[0];
    for (int i = 1; i < size; i++) if ( tmpKey < arr[i] ) tmpKey = arr[i];
    return tmpKey;
}

int min(int arr[], int size)
{
    int tmpKey = arr[0];
    for (int i = 1; i < size; i++) if ( tmpKey > arr[i] ) tmpKey = arr[i];
    return tmpKey;
}

bool isPrime(int num)
{
    for (int i = 2; i < sqrt(num); i++)
    {
        if ( !(num % i) ) return False;
        return True;
    }
}

// Find prime #s in array of integers & store them in subarr
void subPrime(int arr[], int size, int subarr[])
{
    for (int i = 0, j = 0; i < size; i++) if ( isPrime(arr[i]) ) { subarr[j] = arr[i]; j++; }
}
