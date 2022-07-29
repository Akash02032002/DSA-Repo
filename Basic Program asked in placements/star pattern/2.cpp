#include<iostream>
using namespace std;
int main(){
    int r ,c ,k;
    cin >> r;
    c=2*r-1;
    for(int i=1 ; i<=r ;i++){
        k=1;
        for(int j= 1 ;j<=c ;j++){
            if( j>=r+1-i && j<=r-1+i && k){
            cout<<"*" ;
            k=0 ;}
            else{
            cout<<" ";
            k=1;}
        }
        cout<<endl;
    } 
}