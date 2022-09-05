#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll LIM=1e6;
const ll mod=1e9+7;
ll fact[LIM];
ll invFact[LIM];

ll power(ll a, ll b)
{
	long ans=1;
	if(b==0)
	{
		return 1;
	}
	if(b%2==0)
	{
		return (ans*ans)%mod;
	}
	else
	{
		return (a*ans*ans)%mod;
	}
}

ll inverse(ll n)
{
	return power(n,mod-2);
}

void find_factorials()
{
	fact[0]=1;
	invFact[0]=1;
	for(int i=1;i<LIM;i++)
	{
		fact[i]=(i*fact[i-1]) % mod;
		invFact[i]=inverse(fact[i]);
	}
}

ll nCr(ll n , ll r)
{
	if(n<0 || r<0 || r>n)
	{
		return 0;
	}
	//n!/r!*(n-r)!
	ll num=fact[n];
	ll dem=invFact[r]*invFact[n-r];
	return (num/dem)%mod;
}

int main()
{
	find_factorials();
	ll n,r;
	cin>>n>>r;
	cout<<nCr(n,r);
}
