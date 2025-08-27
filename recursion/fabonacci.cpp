#include<iostream>
using namespace std;
int fbi(int n){
    if(n==0)
    return 0;
    if (n==1)
    return 1;
    return fbi(n-1)+fbi(n-2);
}
int main(){
    cout<<fbi(6)<<endl;
}