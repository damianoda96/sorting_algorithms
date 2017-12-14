#include <iostream>

void bubble_sort(int*, const int);
void selection_sort(int*);
void insertion_sort(int*);
void merge_sort(int*);
void shell_sort(int*);
void quick_sort(int*);
void counting_sort(int*);
void radix_sort(int*);
void bucket_sort(int*);
void swap(int&, int&);

int main()
{
    int array[] = {4, 8, 2, 3, 6, 10, 1, 5, 7, 9};
    const int ARRAY_SIZE = 10;
    
    bubble_sort(array, ARRAY_SIZE);
    return 0;
}

void swap(int& num1, int& num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void bubble_sort(int* array, const int ARRAY_SIZE)
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        for (int j = 0; j < ARRAY_SIZE-i-1; j++)
        {
            if(array[j] > array[j+1])
            {
                swap(array[j], array[j+1]);
            }
        }
    }
    
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << array[i] << " ";
    }
    
    std::cout << std::endl;
}




