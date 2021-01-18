#include "functions.h"


//Get array(int) size
int getSize(int arr[])
{
    return *(&arr + 1) - arr;
}

int aleatoire(int start, int end)
{
    //Used to reset the seed of the rand generator
    time_t t;
    srand((unsigned) time(&t));
    
    //return randum # between start & and
    return  start + (rand() % end-start);
}