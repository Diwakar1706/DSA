#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the values of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"given array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
}