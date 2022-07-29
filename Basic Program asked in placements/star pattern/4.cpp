#include<iostream>
using namespace std;
int main(){
    int r ,c ,k,p;
    cin >> r;
    c=2*r-1;
    p=(c+1)/2;
    for(int i=1 ; i<=r ;i++){
        k=1;
        for(int j= 1 ;j<=c ;j++){
            if( j>=r+1-i && j<=r-1+i){
            cout<< k;
            j<p?k++:k--;}
            else
            cout<<" ";
        }
        cout<<endl;
    } 
}