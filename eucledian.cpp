#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	int R;
	while((a%b)>0)
	{
		R=a%b;
		a=b;
		b=R;
	}
	return b;
}
int main()
{
	int A,B;
	cin>>A;
	cin>>B;
	cout<<gcd(A,B);
	return 0;
}
