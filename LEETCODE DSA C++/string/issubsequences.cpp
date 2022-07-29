//i/p:geeksfrogeeks   geksfr o/p:TRUE

bool issubstring(string &str1 , string &str2 , int n1 , int n2 ) {
	int i = 0 , j = 0 ;
	while (i < n1 && j < n2) {
		if (str1[i] != str2[j])
			i++;
		else {i++; j++;}
	}
	return (j == n2) ;//return true ; else return false;
}
bool issubstring(string &str1 , string &str2 , int n1 , int n2 ) {
// 	if (n1 == 0) return false ;
// 	if (n2 == 0) return true ;
// 	if (str1[n1 - 1] == str2[n2 - 1])
// 		issubstringrecr(str1, str2, n1 - 1, n2 - 1);
// 	else
// 		issubstringrecr(str1, str2, n1 - 1, n2);

// }