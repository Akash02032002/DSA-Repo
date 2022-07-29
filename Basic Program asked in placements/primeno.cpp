#include<iostream>
#include<math.h>
using namespace std;
bool prime(int n){
  // bool flag=true ;
  // for(int i=2 ;i<=n/2 ;i++){
  // if(n%i==0){
  //     flag=false;
  //     break;
  // }
  if(n==1)
  return false;
  if(n==2 || n==3)
  return true;
  if(n%2==0 || n%3==0)
  return false;
  for(int i=5 ;i<sqrt(n) ; i=i+6){
  if(n%i==0 || n%(i+2)==0)
  return false;
  }
  return true;
// return flag;
}
int main(){
    int n;
  cin >> n;
    prime(n) ? cout<< "prime" : cout<<"not prime" ;
}
