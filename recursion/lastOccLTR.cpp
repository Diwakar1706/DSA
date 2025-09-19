#include<iostream>
using namespace std;
void lastOcrLTR(string &s,char x,int i, int &ans){
    //base case
    if(i>=s.length()){
        return;
    }
    //ek case solve karunga
    if(s[i]==x){
        ans=i;
    }
    //rc
    lastOcrLTR(s,x,i+1,ans);


}
int main(){
    string s;
    cin>>s;
    char x;
    cin>>x;
    int ans=-1;
    lastOcrLTR(s,x,0,ans);
    cout<<ans<<endl;
}