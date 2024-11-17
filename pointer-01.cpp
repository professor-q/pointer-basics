#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr = &num;
    
    cout << "Value of num: " << num << '\n';
    cout << "Address of num (&num): " << &num << '\n';

    cout << "Dereferenced value of ptr (*ptr): " << *ptr << '\n';
    cout << "Address stored in pointer ptr: " << ptr << '\n';

    *ptr = 20;
    cout << "New value of num (after modifying *ptr): " << num << '\n';
    cout << "Address in ptr remains the same: " << ptr << '\n';

    return 0;
}

/*
    A pointer is a variable that stores the memory address of another 
    variable of same type as its value. There are two ways to declare
    pointer variables in C and Cpp:
    int* ptr = &num;
    int *ptr = &num;
*/
