// A void pointer is a pointer which has no associated data type with it.
// It can point to any data of any data type and can be associated to any type.
// We cannot dereference a void pointer.
#include <stdio.h>
int main()
{
    int n = 10;
    // Varaiable n which is initialized to value 10
    void *ptr = &n;
    // A void pointer which has no associated data type.
    // Although it is containing the address of variable n, but we have declared the pointer as a void pointer.
    // This pointer has no associated data type, so it can point to any type of data.
    // That is why we are initializing it with the address of the variable.
    printf("%d", *ptr);
    // We are using the printf function.
    // It is important for us to type cast our pointer before dereferencing it.
    // If we are using it directly, we will get an error message.
    // Why we are even using this pointer?
    // Eventually we need to type cast it to some other pointer.
    // Why cant we simply use an integer pointer?
    // Why we are even bothering about this type of pointer?
    // We have to type cast it and then use it.
    // Why to do so many things when we can use an integer pointer?
    // malloc and calloc are built-in functions that are used to allocate memory.
    // Because these functions return void pointers, they can allocate a memory for any type of data.
    // Without knowing the type of the data, they can allocate a memory.
    // This is the reason why we are using void pointers.
    return 0;
}