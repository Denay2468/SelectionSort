#include <iostream>
using namespace std;

int arr[20];
int n;

void input(){
    while (true){
        cout<<"Enter the number of elements in the array: ";
        cin>>n;
        if (n<=20)
            break;
        else
            cout<<"Array can have maximum 20 elements. Please enter again."<<endl;
    }
}