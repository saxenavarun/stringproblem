
#include <iostream>
using namespace std;

#define Mod 1000000007

long long int countStrings(long long int n)
{
    long long int a[n], b[n];
    a[0] = b[0] = 1;
    for (int i = 1; i < n; i++)
    {
        a[i] = (a[i-1] + b[i-1])% Mod;
        b[i] = a[i-1];
    }
    return a[n-1] + b[n-1];
}
 
int main()
{   int t,i;
    long long int n;
    cin >> t;
    for(i=0;i<t;i++){
    scanf("%lld",&n);    
    cout << countStrings(n) << endl;
    }
    return 0;
}
