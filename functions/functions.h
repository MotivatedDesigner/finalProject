#include <math.h>
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

void printArray(int arr[], int lengthOfArr);

void deleteDouble(int arr[], int size, int tab[]);

void swap(int* a, int* b);

void bubbleSort(int arr[], int size);

bool isPrime(int num);

int max(int arr[], int size);

int min(int arr[], int size);

void subPrime(int arr[], int size, int subarr[]);