#include<bits/stdc++.h>
using namespace std ; 

void istringstream1(string str ){
   istringstream iss(str);
   while(iss){
       string word ; 
       iss >> word ; 
       cout << word <<endl; 
   } 
}
int main(){
string s = "my name is rakesh gupta what about you bro" ; 
istringstream1(s); 
}

// C++ program to Iterate through
// a String word by word

