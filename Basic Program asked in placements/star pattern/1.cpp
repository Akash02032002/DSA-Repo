#include<iostream>
using namespace std;
int main(){
    int  k =0;
     for(int i=1 ;i<=5 ;i++){
         k++;
         for(int j=1 ;j<=9 ;j++){
             if(j>=6-i && j<=4+i){
          
             cout<<k ; 
            j<5?k++:k--;
             
             }
             else
             cout<<" ";
         }
         k++;
         cout<<endl;
        // k++;
     }
}