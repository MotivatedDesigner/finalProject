
#include <stdlib.h>
#include <time.h>
//Define bool type
#define False 0
#define True !False
typedef int bool;

//Prototypes
int getSize(int arr[]);

int aleatoire(int start, int end);

void initArray(int arr[], int size, int start, int end);

void printArray(int arr[], int length);

void deleteDouble(int arr[], int size, int tab[]);

void swap(int* a, int* b);

void bubleSort(int arr[], int size);
