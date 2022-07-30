#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	int ans;
	for(int i=1;i<=a && i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		{
			ans=i;
		}
	}
	cout<<ans;
}
int main()
{
	gcd(24,36);
}
