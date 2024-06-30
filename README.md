# Array_1
I'll provide a detailed explanation of how each part of the code works, including the main function and each of the helper functions.

### Program Overview

This program performs the following tasks:
1. Initializes an array with predefined values.
2. Prints the original array.
3. Replaces all even numbers in the array with a special character (`$`).
4. Prints the modified array.
5. Sorts the modified array in descending order.
6. Prints the sorted array.

### Detailed Explanation

```c
#include <stdio.h>
#define SIZE 10
#define SPL_CHAR '$'

// Function prototypes
void replace_$ (int a[], int size);
void print_array (const int a[], int size);
void descending (int a[], int size);

int main() {
    int a[SIZE] = {42, 3, 6, 12, 2, 7, 8, 13, 21, 20};
    int size = 10;

    printf("Hello, LET'S START THE ARRAY QUESTION\n");
    
    printf("Original array:\n");
    print_array(a, size);

    replace_$(a, size);

    printf("Array after replacing even numbers with %c:\n", SPL_CHAR);
    print_array(a, size);

    descending(a, size);

    printf("Array in descending order:\n");
    print_array(a, size);

    return 0;
}
```

1. **Main Function**:
   - **Array Initialization**: 
     ```c
     int a[SIZE] = {42, 3, 6, 12, 2, 7, 8, 13, 21, 20};
     ```
     This line initializes an array `a` with 10 elements. The macro `SIZE` is used to define the size of the array.
   - **Size Variable**:
     ```c
     int size = 10;
     ```
     This line sets the `size` variable to 10, indicating the number of elements in the array.
   - **Printing Messages and Array**:
     ```c
     printf("Hello, LET'S START THE ARRAY QUESTION\n");
     printf("Original array:\n");
     print_array(a, size);
     ```
     These lines print a welcome message and the original array. The `print_array` function is called to print the elements of the array.
   - **Replacing Even Numbers**:
     ```c
     replace_$(a, size);
     ```
     This line calls the `replace_$` function to replace all even numbers in the array with the special character (`$`).
   - **Printing Modified Array**:
     ```c
     printf("Array after replacing even numbers with %c:\n", SPL_CHAR);
     print_array(a, size);
     ```
     These lines print a message and the modified array. The `print_array` function is called again to print the modified array.
   - **Sorting the Array**:
     ```c
     descending(a, size);
     ```
     This line calls the `descending` function to sort the array in descending order.
   - **Printing Sorted Array**:
     ```c
     printf("Array in descending order:\n");
     print_array(a, size);
     ```
     These lines print a message and the sorted array. The `print_array` function is called once more to print the sorted array.

```c
void print_array (const int a[], int size) {
    for (int i = 0; i < size; i++) {
        if (a[i] == SPL_CHAR) {
            printf("%c ", SPL_CHAR);
        } else {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}
```

2. **print_array Function**:
   - **Loop Through Array**:
     ```c
     for (int i = 0; i < size; i++) {
         if (a[i] == SPL_CHAR) {
             printf("%c ", SPL_CHAR);
         } else {
             printf("%d ", a[i]);
         }
     }
     ```
     This loop iterates through each element of the array `a` and prints it. If the element is equal to `SPL_CHAR` (which represents the special character `$`), it prints the character. Otherwise, it prints the integer value.
   - **New Line**:
     ```c
     printf("\n");
     ```
     This line prints a newline character after printing all the elements of the array.

```c
void replace_$ (int a[], int size) {
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0) {
            a[i] = SPL_CHAR;
        }
    }
}
```

3. **replace_$ Function**:
   - **Loop Through Array**:
     ```c
     for (int i = 0; i < size; i++) {
         if (a[i] % 2 == 0) {
             a[i] = SPL_CHAR;
         }
     }
     ```
     This loop iterates through each element of the array `a`. If an element is even (i.e., `a[i] % 2 == 0`), it replaces that element with `SPL_CHAR` (the special character `$`).

```c
void descending (int a[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
```

4. **descending Function**:
   - **Outer Loop**:
     ```c
     for (int i = 0; i < size - 1; i++) {
     ```
     This outer loop iterates from the beginning of the array to the second-to-last element.
   - **Inner Loop**:
     ```c
     for (int j = i + 1; j < size; j++) {
     ```
     This inner loop iterates from the element right after the current element of the outer loop to the end of the array.
   - **Swapping Elements**:
     ```c
     if (a[i] < a[j]) {
         int temp = a[i];
         a[i] = a[j];
         a[j] = temp;
     }
     ```
     This condition checks if the current element is smaller than the next element. If it is, the elements are swapped to arrange them in descending order. The `temp` variable is used to temporarily hold the value of one element during the swap.

### Summary

The program starts by initializing an array and printing its original state. It then replaces all even numbers with the special character `$` and prints the modified array. Finally, it sorts the modified array in descending order and prints the sorted array. The use of functions for each specific task (printing, replacing, and sorting) makes the code modular and easier to understand. The `const` keyword in the `print_array` function ensures that the array is not modified during printing.
