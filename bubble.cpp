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

    for(int i=n-1; i>=0; i--){
        bool swaped=0;

        for(int j =0;j<=i;j++){
          if(arr[j]>arr[j+1]){
            swaped=1;
            swap(arr[j],arr[j+1]);
          }
        
        }
        if(swaped==0)
        break;

    }
    cout<<endl;
    cout<<"sorted array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}