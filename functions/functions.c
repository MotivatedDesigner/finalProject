#include "functions.h"

int getSize(int arr[])
{
    return *(&arr + 1) - arr;
}