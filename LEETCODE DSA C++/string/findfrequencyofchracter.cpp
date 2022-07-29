//i/p:geeksforgeeks   o/p:e4f1g2k2o1r1s2
#include<iostream>
using namespace std ;
void freqchar(string &str , int n ) {
	int count[26] = {0}; ;
	for (int i = 0 ; i < n ; i++)
		count[str[i] - 'a']++;
	for (int i = 0 ; i < 26 ; i++) {
		if (count[i] > 0)
			cout << char(i + 'a') << count[i];
	}
}