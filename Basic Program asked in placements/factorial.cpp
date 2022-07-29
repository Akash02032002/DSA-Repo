#include<iostream>
using namespace std;
int fact(int n){
    // int fact=1 ,i;
    // for(i=1 ;i<=n ;i++){
    //     fact*= i;
    // }
    // return fact;
    if (n==0)
    return 1;
    return n * fact(n-1);
}
int main(){
    int n;
    cin>> n;
    cout<<fact(n);
}