
    /* ...... Faltu cude deikha  kunu lav nai.......*/

#include <bits/stdc++.h>
using namespace std;

#define Y() cout<< "YES" <<endl
#define N() cout << "NO"<<endl
#define max_3(a,b,a) max(a, max(b,c))
#define max_4(a,b,c,d) max(a,max(b,max(c,d)))
#define min_3(a,b,c) min(a, min(b,c))
#define min_4(a,b,c,d) min(a,min(b,min(c,d)))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define deb return 0
#define ll long long int
#define pb push_back
#define B begin()
#define E end()
#define vec vector <ll>

int main()
{
	 ll a, b, c, d, i, j, k, l, m, n, p, q, t, ct = 0, ct1 = 0, ct2 = 0, ck = 0, ck1 = 0, ck2 = 0, ln, ln1, start, end, mid;
    ll a1 = 0, a2 = 0, a3 = 0, a4 = 0, sum = 0, sum1 = 0, max1, max2, min1, min2;
    double x, y, z;
    char ch, ch1, ch2;
    cin>>n;
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	min=a[0];
	for(i=1;i<n;i++)
	{
	   if(min>a[i])
	   {
	   	min=a[i];
	   }	
	}
	x=min+(n-1);
	j=1;
	k=min+1;
	for(i=(min+1);i<=x;i++)
	{
		
		for(j=(min+1),l=1;j<=x;j++,l++)
		{
		if(k==a[l])
		{
			ct++;
			break;
		}
			
		}
		k++;
	}



	return 0;

}




