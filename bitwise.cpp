//post increment/decrement 
//pre increment/decrement 
#include<iostream>
using namespace std;
int main(){
    int a=5;
    a=++a;

    cout<<a<<endl;


    int b=10;
    cout<<b--*10<<endl;
    cout<<b--*10<<endl;


    int c=10;
    cout<<(++c) * (c++)<<endl;//kisi me 121 or kisi me 132 why?
    

    int d=10;
    cout<<(d++)*(++d);
    
}



// study about break and continue
