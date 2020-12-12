#include <iostream>

using namespace std;

int main() {

    int x = 7;
    int *ptr = &x;
    // int => pointer to an int
    // * => pointer declaration
    // & => "the adress of"

    cout << "x is = " << x << endl;

    cout << "ptr is = " << ptr << endl;
    // or
    // printf("ptr in hexadecimal is = %x\n", ptr);

    cout << "value of x acessed trought ptr is = " << *ptr << endl;

    *ptr = 15;

    cout << "x value was modified trought ptr and is now = " << x << endl;
    
    //ARRAY

    int numbers[5];
    int *newptr = numbers; // same as "&somenumbers[0]"
    int v = 2;

    for(;newptr<&numbers[5];newptr++) // ptr++ makes the pointer go to the next memory adress
    {
        *newptr = v;
        v = v * 2;
    }

    cout << "\narray filled using pointers:\n";
    for(int i = 0;i < 5;i++)
    {
        cout << i << " = " << numbers[i] << endl;
    }

    return 0;
}   