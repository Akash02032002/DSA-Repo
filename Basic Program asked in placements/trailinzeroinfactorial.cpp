#include<bits/stdc++.h>
using namespace std ;
    // int fact(int n ){
    //     int f=1;
    //     for(int i=1 ;i<=n ;i++){
    //         f*=i;
    //     }
    //     return f ;
    // }
int zeros(int n){
    // int c =fact (n);
    int cnt =0 ;
//    while(c%10==0){
//        cnt++;
//        c/=10;
//    }
   for(int i=5 ;i<=n ; i=i*5){
       cnt+=n/i;
       
   }
   return cnt ;
}
int main(){
    int n ;
    cin>> n ;
    cout << zeros (n);
}