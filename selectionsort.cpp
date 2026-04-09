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
    cout<<"Enter Array elements:"<<endl;
    for (int i=0; i<n; i++){
        cout<<"Element "<<i+1<<": ";
        cin>>arr[i];
    }

}

void selectionSort(){
    for (int j=0; j<n-1; j++){
        int minIndex = j;
        for (int i=j+1; i<n; i++){
            if (arr[i] < arr[minIndex]){
                minIndex = i;
            }
        }
        swap(arr[j], arr[minIndex]);
    }
}


