//Eular totient Function
/*  Euler's Totient function F (n) for an input n is the count of numbers in {1, 2, 3, ...., n} that are relatively prime to n, i.e., the numbers whose GCD (Greatest Common Divisor) with n is 1. */

/* fun(1) = 1
   gcd(1,1)= 1....
   fun(2) = 2
   gcd(1,1)=1 and gcd(2,2)=1 */
   
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(a==0)
	{
		return b;
	}
	return gcd(b%a,a);	
}
int EularTotient(int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	{
		if(gcd(i,n)==1)
		{
			res++;
		}
	}
	return res;
}
int main()
{
	int num;
	cin>>num;
	cout<<EularTotient(num);
}
   
