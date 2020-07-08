#include "StrorageClass.h"
#include <iostream>
#include "functions.h"
using namespace std;

// A variable defined inside a function (defined inside function body between braces)
// is called a local variable or automatic variable

// local variable exists and can be accessed only inside a function.
// The life of a local variable ends (It is destroyed) when the function exits


// Global variable declaration
int c = 12;

// Static Local Variable - Keyword static is used for specifying a static variable
// A static local variable exists only inside a function where it is declared (like local variable)
// The lifetime os a static local variable starts when the function is called and ends only when the program ends.

void test()
{
    // var is a static variable
    static int var = 0;
    ++var;

    print(var);

    // During the first call, variable var is declared as static variable and initialized to 0
    // Then 1 is added to var which is displayed in the screen.
    // When the function test() returns, variable var still exists because it is a static variable.
}