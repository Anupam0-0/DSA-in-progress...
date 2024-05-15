#include <iostream>
using namespace std;

//this is functional way

int sum (int n){

    if(n == 0){
        return 0;        
    }
    return n + sum(n-1);
}


int main(){
    int n = 5;
    cout << "Sum: " << sum(n) << endl;
}