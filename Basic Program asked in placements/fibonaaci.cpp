#include <iostream>
using namespace std;
long long int  fib(long long int n)
{
    int a = 0;
    int b = 1, c;
    //   cout<< a << " " ;
    //  cout<< b << " " ;
    if(n==0)
    return 0;
    if(n==1)
    return 1; 
    for (int i = 2; i <= n ; i++)
    {
        c = a + b;
        c%=1000000007;
        //  cout << c << " ";
        a = b;
        b = c;
        
    }
 return (c%1000000007);   
}
int main()
{
    int n;
    cin >> n;
    cout<< fib(n);
}