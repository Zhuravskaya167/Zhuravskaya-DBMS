//Вариант 7: int, avg
#include <iostream>
#include <cstdlib>
using namespace std;

/*!
Функция установки размера массива
*/
int getSize();

/*!
Функция заполнения массива радомными значениями
Принимает на вход: размер массива, указатель на массив
*/
void arrayCreation(const int size, int* arr);

/*!
Функция вывода массива на экран
Принимает на вход: размер массива, указатель на массив
*/
void printArray(const int size, int* arr);

/*!
Функция вывода среднего арифметического массива
Принимает на вход: размер массива, указатель на массив
*/
double average(const int size, int* arr);

/*
Главная функция
*/
int main()
{
    const int size = getSize();
    int* arr = new int[size];
    arrayCreation(size, arr);
    cout << "Data array: " << "\n";
    printArray(size, arr);
    cout << "\nResult: " << "\n";
    cout << average(size, arr);
    
    if (arr != nullptr)
    {
        delete[] arr;
        arr = nullptr;
    }
}

int getSize()
{
    int size;
    cout << "Enter the size of the array: ";
    while (true) 	// Проверка на положительный размер массива
    {
        cin >> size;
        if (size < 0)
        {
            cout << "Enter a positive number of elements: ";
        }
        else return size;
    }
}


void arrayCreation(const int size, int* arr)
{
    srand(clock());
    for (int i = 0; i < size; i++) {
        arr[i] = rand();
    }
}


void printArray(const int size, int* arr)
{
    for (int i = 0; i < size; i++) {
        cout << i + 1 << ": " << arr[i] << "\n";
    }
}


double average(const int size, int* arr)
{
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    const double average = static_cast<double>(sum) / size;
    return average;
}