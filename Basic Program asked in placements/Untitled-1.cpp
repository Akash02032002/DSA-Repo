#include<iostream>
using namespace std ;
bool prime(int n ){
    for(int i=2 ; i<=n/2 ;i++){
        if(n%i==0)
        {
            return false;
            break;
        }
    }
   return true; 
}
void primeno(int a , int b){
    for (int i =a ; i<=b ; i++){
        if(prime(i))
        cout<<  i << " ";
    }
}
int main(){
    int  a ,b ;
    cin>> a>> b ; 
    primeno(a,b);}