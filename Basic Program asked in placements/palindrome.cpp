#include <iostream>
using namespace std;
bool palindrome(int n)
{
    int r, sum = 0;
    int temp = n;
    while (n!= 0)
    {
        r = n% 10;
        sum=sum * 10 + r;
        n = n/10;
    }
    if(temp==sum)
    return true;
    else
    return false;
}
int main()
{
    int n;
    cin >> n;
     if(palindrome(n))
     cout<<"yes";
     else
     cout<<"no";
}