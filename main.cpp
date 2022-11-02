#include "MergeSort.h"
#include "InsertionSort.h"
#include "QuickSort.h"
#include "Fib.h"
#include "Fib2.h"

/* Function to print an array */
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << " " << A[i];
    cout << "\n";
}

void do_fib(){
    int n = 6;
    int result = fib(n);
    std::cout << n << "th fib number: " << result << std::endl;
}

void do_fib2(){
    int n = 6;
    int result = fib2(n);
    std::cout << n << "th fib2 number: " << result << std::endl;
}

void do_insertion_sort(){
    int arr[] = {12, 11, 13, 5, 6};
    int N = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, N);
    std::cout << "Insertion Sort result:" << std::endl;
    printArray(arr, N);
}

void do_merge_sort(){
    int arr[] = {12, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, arr_size - 1);
    std::cout << "Merge Sort result:" << std::endl;
    printArray(arr, arr_size);
}

void do_quick_sort(){
    int arr[] = {9, 3, 4, 2, 1, 8};
    int n = 6;

    quickSort(arr, 0, n - 1);
    std::cout << "Quick Sort result:" << std::endl;
    printArray(arr, n);
}

int main()
{
    do_fib();
    do_fib2();
    do_insertion_sort();
    do_merge_sort();
    do_quick_sort();


    return 0;
}
