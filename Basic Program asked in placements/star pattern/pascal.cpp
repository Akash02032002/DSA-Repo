#include <iostream>
using namespace std;
int fact(int n)
{
    if (n <= 0)
        return 1;
    return fact(n);
}
int combi(int n, int r) 
  { 
    return (fact(n) / fact(n - r) / fact(r)); 
 }
void pascal(int row)
{
    int k, r;
    for (int i = 1; i <= row; i++)
    {
        k = 1;
        r = 0;
        for (int j = 1; j <= 2 * row - 1; j++)
        {
            if (j >= row + 1 - i && j <= row - 1 + i && k)
            {
                cout << combi(i - 1, r);
                k = 0;
                r++;
            }
            else
            {
                cout << " ";
                k = 1;
            }
        }
        cout << endl;
    }
}
int main()
{
    int k, r, row;
    pascal(5);
}