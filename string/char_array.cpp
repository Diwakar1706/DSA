#include<iostream>
#include<string>
using namespace std;
// int main(){
//     //creation 
//     char ch[100];
//     //input
//     // cin>>ch;
//     cin.getline(ch,100);

//     //output
//     cout<<"printing the value of ch: "<<ch<<endl;


    // // printing by loop
    // for(int i=0; i<10; i++){
    //     cout<<"at index "<<i<<" "<<ch[i]<<endl;
        
    // }
    // char temp=ch[5];
    // int value=(int)temp;
    // cout<<"printing the int value "<<value<<endl;




//     //find length 
int findLength(char ch[],int size){
        int index=0;
        while(ch[index]!='\0'){
            index++;

        }
        return index;
}
// int main(){
//     char ch[100];
//     cin.getline(ch,100);
//     int len=findLength(ch, 100);
//     cout<<"length of string is "<<len<<endl;
   
// }



//reverse an string

int reverseString(char ch[],int size){
    int i=0;
    int j=size-1;
    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    int len=findLength(ch, 100);
    reverseString(ch,len);

    cout<<"reverse string is "<<ch<<endl;
}





