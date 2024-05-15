#include <iostream>
using namespace std;

//this is functional way

long fact(int n)
{
    if (n == 0) // Base case
        return 1;
    else
        return (n * fact(n-1));
}


int main(){
    int n = 4;
    cout << "Factorial: " << fact(n) << endl;
}