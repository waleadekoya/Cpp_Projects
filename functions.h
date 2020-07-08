#ifndef FUNCTIONS_FUNCTIONS_H
#define FUNCTIONS_FUNCTIONS_H
using namespace std;

#endif //FUNCTIONS_FUNCTIONS_H

template <typename T>
T displayNum(T num1, T num2) {
    cout << num1 << endl;
    cout << num2 << endl;
    return num1 + num2;
}

template <typename T>
void print(T value) {
    cout << value << endl;
}

// template function
template <class T>
T Large(T n1, T n2)
{
    return (n1 > n2) ? n1 : n2;
}