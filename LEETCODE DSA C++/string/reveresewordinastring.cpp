void reverse(string &s , int low , int high) {
	while (low <= high) {
		swap(s[low++], s[high--]);
	}
}
void reverseword(string &s) {
	// revstr(s, 0, s.length() - 1);
	int l = 0;
	for (int i = 0 ; i < s.length() ; i++) {
		if (s[i] == ' ') {
			revstr(s, l, i - 1);
			l = i + 1;
		}
	}
	revstr(s, l, s.length() - 1);
	revstr(s, 0, s.length() - 1);

}