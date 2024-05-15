#include <iostream>
using namespace std;

void print(int n)
{
    if (n <= 1)
    {
        cout << "Hello";
        return;
    }
    cout << "Hello ";
    print(n-1);

}

int main()
{
    int n = 5;
    print(n);
}
