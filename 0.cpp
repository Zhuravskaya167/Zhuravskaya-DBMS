﻿//Вариант 7: int, avg
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    int result = 0;
    int size = 0;
    std::cout << "Enter a size of array: ";
    std::cin >> size;

    int* array = new int[size];
    std::cout << "Enter array elements: ";
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100;
        printf("%d ", array[i]);
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + array[i];
    }
    result = sum / size;

    std::cout << "\nResult: " << result;
    delete[] array;
}