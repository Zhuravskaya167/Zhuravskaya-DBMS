//Вариант 7: int, avg
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int* generate_array(int siz) {
    int* array = new int[siz];
    cout << "Current array elements: ";
    srand(time(NULL));
    for (int i = 0; i < siz; i++) {
        array[i] = rand() % 100;
        printf("%d ", array[i]);
    }
    return array;
}

int summ(int siz, int *arr) {
    int sum = 0;
    for (int i = 0; i < siz; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main() {
    int size = 0;
    cout << "Enter a size of array: ";
    cin >> size;


    int* A = generate_array(size);
    int sum = summ(size, A);

    const double average = static_cast<double>(sum) / size;

    cout << "\nResult: " << average;

    if (A != nullptr)
    {
        delete[] A;
        A = nullptr;
    }
}
