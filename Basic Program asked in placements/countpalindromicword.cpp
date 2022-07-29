#include<bits/stdc++.h>
using namespace std ;
bool check(string &str){
    int n=str.length();
      if(str[0]!=str[n-1])
      return false;
      for(int i=0 ;i<n ;i++,n--){
          if(str[i]!=str[n-1])
          return false;
      }
      return true;
}
int count (string &str ,int n){
    str=str + " ";
    string word ="";
    char ch; int cnt=0;
    for(int i=0 ;i<n+1 ;i++){
        ch=str[i];
        if(ch!=' ')
        word+=ch;
        else{
            if(check(word)){
            cnt++;
            word="";}
        }
    }
    return cnt; 
}
int main(){
    string str; 
    getline(cin,str);
    int n=str.length();
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<count(str, n );}