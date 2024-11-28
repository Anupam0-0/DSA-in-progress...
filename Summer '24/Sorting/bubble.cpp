#include <iostream>
using namespace std;

//ascending order

void input(int arr[], int n){
    cout << "Input: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void output(int arr[], int n){
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }  
}

int main(){
    int n , arr[100];
    cout << "Size of array: ";
    cin >> n;
    input(arr, n);
    bubbleSort(arr, n);
    output(arr, n);
}

//code by anupam0-0 aka candycoder