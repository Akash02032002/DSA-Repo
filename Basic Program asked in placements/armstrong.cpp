#include<bits/stdc++.h>
using namespace std;
bool armstrong (int n) {
  int r , sum = 0 , i = 0 ;
  int temp = n ;
  while (temp > 0) {
    temp = temp / 10;
    i++;
  }
  temp = n;
  cout << temp << " " << n << endl;
  while (n > 0) {
    r = n % 10;
    sum += pow(r, i);
    n = n / 10;
  }
  cout << sum << " " << temp ;
  if (temp == sum)
    return true;
  else
    return false;
}


int main() {
  int n;
  cin >> n;
  if (armstrong(n))
    cout << "Yes";
  else
    cout << "No";
}