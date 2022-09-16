#include<iostream> 
using namespace std; 

  int main(){
     int n,i,digit;
     cout<<"enter the number:";
     cin>>n;

     while(n!=0){
         digit++;
         n/=10;
     }
     cout<<digit;
     return 0;
}