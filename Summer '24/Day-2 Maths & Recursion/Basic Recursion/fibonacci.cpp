#include <iostream>
using namespace std;

//this is functional way

long fib(int n)
{
    if (n == 0 || n ==1) // Base case
        return 1;
    else
        return fib(n-1) + fib(n-2);
}


int main(){
    int n = 8;
    cout << "Fibonacci: " << fib(n) << endl;
}