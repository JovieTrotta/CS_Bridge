// What is a pointer -- A pointer is variable (named location in memory) which stores adress of other variables
// What is a variable - A variable is a named location in memory (storage).
// Variable name really masks the address referenced by the variable.
#include <stdio.h>
    void
    introPointer(void);
void pointerMath(void);
void pointerArray(void);
void passbyReference(int *a);
void passingArraysintoFunctions(int *A, int size);
int main(void)
{
    int A[] = {8, 7, 6, 2, 3};
    int n = sizeof(A) / sizeof(A[0]);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %lu \n", i, *(A + i), A + i);
    }
    passingArraysintoFunctions(A, n);
    printf("************\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %lu \n", i, *(A + i), A + i);
    }
    return 0;
}
void introPointer(void)
{
    int a = 7;
    printf("Value in memory: %d Referenced Address %p \n", a, &a);
    // printf("Size in bytes for int: %lu \n", sizeof(int));
    // pointers
    int *pA = &a;
    // printf("Value in memory: %p Referenced Address %p \n", pA, &pA);
    // dereferencing a pointer
    printf("Value in memory: %d Referenced Address %p \n", *pA, pA);
    *pA = *pA + 10;
    printf("New value in a: %d \n", a);
    return;
}
void pointerMath(void)
{
    double b = 9.0, c = 8.0;
    double *pB = &b, *pC = &c;
    printf("Value in memory: %lf Referenced Address %lu \n", *pB, pB);
    printf("Value in memory: %lf Referenced Address %lu \n", *pB + 1, pB - pC);
    printf("Size in bytes for double: %lu \n", sizeof(b));
    // Increment; address (e.g pB) + 1 (sizeof (int))
    return;
}
void pointerArray(void)
{
    // An array is a contiguous block in memory that stores homogenous collection
    of items int A[5] = {8, 9, 23, 2, 4};
    // what happens when we print name of the array
    printf("Name of array: %p \n", A);
    // name of the array refers to some address
    // Name of array is a pointer that stores address of the first element
    printf("Index \t Value \t Address\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d \t %d \t %lu \n", i, *(A + i), (A + i));
    }
    // Arrays and pointers are different types but we can use them in a similar
    way.return;
}
void passbyReference(int *a)
{
    printf("Function; received value: %d \n", *a);
    *a = *a + 7;
    printf("Function: after modification : %d \n", *a);
    return;
}
void passingArraysintoFunctions(int *A, int size)
{
    printf("in function %lu \n", A);
    printf("*****************\n");
    // when we are passing an array to a function, we are passing address of first
    element for (int i = 0; i < size; i++)
    {
        printf("%d %d %lu \n", i, *(A + i), A + i);
    }
    printf("*****************\n");
    for (int i = 0; i < size; i++)
    {
        A[i] = A[i] * 2;
        printf("%d %d %lu \n", i, *(A + i), A + i);
    }
    return;
}
