//i/p:madam aarati is from malayalam ramar ;   o/p: 3
#include<iostream>
using namespace std ;
bool ispalindrom(string &str) {
	int low = 0 , high = str.length() - 1;
	while (low <= high) {
		if (str[low++] != str[high--])
			return false ;
		return true ;
	}
}
int  palindromicword(string &str , int n ) {
	int cnt = 0 ;
	str = str + " ";
	string word = "";
	for (int i = 0 ; i <= n ; i++) {
		if (str[i] != ' ')
			word += str[i] ;
		else
		{
			if (ispalindrom(word))
				cnt++;
			word = "";
		}
	}
	return cnt;
}