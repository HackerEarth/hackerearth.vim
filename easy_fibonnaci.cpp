#include<iostream>
using namespace std;
int main(){
    int a=0,c;
    int b=1;
    int n;
    cin>>n;
    if(n>2){
     for(int i=0;i<=n-2;i++){
       int  temp;
        c=a+b;
        temp=b;
        b=c;
        a=temp;
       }
       cout<<c;
    }
    if(n==1)
      cout<<b;
    if(n==0)
     cout<<a;
}