#include <iostream>
using namespace std;

int count(int n){
    int count = 0;
    while(n){
        count++;
        n /= 10;
    }
    return count;
}


int main(){
    int n;
    cout << "Input the digits: ";
    cin >> n;
    int cnt = count(n);
    cout << "No of. Digits: " << cnt << endl;
}