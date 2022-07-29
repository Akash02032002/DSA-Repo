#include<bits/stdc++.h>
using namespace std; 
int digit(long long int  n){
if(n==0)
return 0;
//     int cnt=0;
// while(n>0)
// {
//     n/=10;                                                                                                                                                                                                                                  
//     cnt++;
// }
// int cnt = floor(log10(n)+1) ;
int cnt = 1 + digit(n/10);
return cnt ;
}
int main(){
    long long int n ;
    cin>> n ;
    cout<<digit(n);
}