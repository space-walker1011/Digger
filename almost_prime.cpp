// Find the almost prime number which has distinct 2 prime divisors 
// eg 18 -> 2, 3 (distinct prime divisors)
// n range ( 1<n<3000)

#include<bits/stdc++.h>
using namespace std;

int seive(int n)
{
    // pr to store the divisors count for the primes
    int pr[n+1] = {};
    vector<int> primes;
    int i, j;
    for(int i=2;i<=n;i++)
    {
        if(!pr[i])
        {
            primes.push_back(i);
            for(int j=i; j<=n; j+=i)
                pr[j]++;
        }

    }

    int ans =0;
    for(int i=2;i<=n;i++)
    {
        if(pr[i] == 2) ans++;

    }
    return ans;

}

int main()
{
    cout<<(seive(21));
}