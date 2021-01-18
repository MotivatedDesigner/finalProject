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
void initArray(int arr[],int start, int end)
{
    for (int i = 0; i < getSize(arr)-1; i++)
        arr[i] = aleatoire(start,end);
}