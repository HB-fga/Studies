#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int x = 10;
    int y = 20;
    int *pointer = &x;

    *pointer = y;

    cout<<x<<" "<<y<<endl;

    printf("%d\n", &x); //endereço de memoria

    cout<<&x<<endl;

    return 0;
}