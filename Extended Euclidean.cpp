#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class ExtendedData
{
	public:
		ll gcd;
		ll x;
		ll y;
};
ExtendedData ExtendedGcd(int a,int b)
{
	if(b==0)
	{
		ExtendedData base;
		base.gcd=a;
		base.x=1;
		base.y=0;
		return base;
	}
	ExtendedData temp=ExtendedGcd(b,a%b);
	ExtendedData ans;
	ans.gcd=temp.gcd;
	ans.x=temp.y;
	ans.y=(temp.x-(a/b)*temp.y);
	return ans;
}
int main()
{
	ll a,b;
	cin>>a>>b;
	ExtendedData MyAns;
	MyAns=ExtendedGcd(a,b);
	cout<<MyAns.gcd<<" "<<MyAns.x<<" "<<MyAns.y;
}
