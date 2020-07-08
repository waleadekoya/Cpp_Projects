#include <iostream>
#include "functions.h"
#include "StrorageClass.h"
# include <cmath>
using namespace std;


// function prototype
void add(int, int);
void multiply(int = 13, int = 8);

int main() {
    cout << "Hello, World!" << endl;
    displayNum(3.3, 141.5);
    print(Large(50, 30));

    print("Hello, World!");

    // function is called before definition
    add(5, 3);
    multiply();
    multiply(10, 650);

    // C++ Library/Built-in Functions
    print(sqrt(35));

    // static local variable
    test();
    test();


    return 0;
}

// function definition
void add(int a, int b) {
    print(a + b);
}

void multiply(int a, int b) {
    print(a * b);
}


