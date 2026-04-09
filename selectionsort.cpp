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
    for (int i=0; i<n-1; i++){
        int minIndex = i;
        for (int j=i+1; j<n; j++){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}


