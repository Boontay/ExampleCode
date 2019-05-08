#include <iostream>

using namespace std;

int sum (int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    // void (*fun_ptr)(int) = &fun;
    int (*functionPointer) (int, int) = sum;

    int output1 = functionPointer(10, 13);
    int output2 = sum(10, 13);

    cout << "Output 1: Call using function pointer: " << output1 << endl;
    cout << "Output 2: Call using function name: " << output2 << endl;
}
