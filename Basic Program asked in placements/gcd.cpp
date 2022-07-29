#include<bits/stdc++.h>
using namespace std;
int gcd (int a ,int b){
    //  while(a!=b){
    //      if(a>b)
    //      a=a-b;
    //      else
    //      b=b-a;
    //  }
     int n ,gcd=1;
     if(a>b)
     n=b;
     else
     n=a;
     while(n>0)
     {
         if(a%n==0 && b%n==0){
         return n;
         break;}
         n--;                   

     } 
}
int main(){
  int a , b ;
  cin >>a >> b; 
  cout<<gcd(a,b);
}