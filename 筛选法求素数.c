#include<iostream>
#include<cmath>
using namespace std;
#define N 10001
bool isPrime(int num)
{
	int tmp = sqrt(num);
	for (int i = 2; i <= tmp; i++)
		if (num %i == 0)
			return 0;
	return 1;
}
int main()
{
        int n;
	cin >> n;
        int a[N], b[N];
	int i;
 
	a[1] = 0;
	a[n] = 0;
	for (i = 2; i <n; i++)
		  a[i] = 1;
	for (i = 1; i <=n; i++)
		b[i] = i ;
 
	for (i = 2; i <=n; i++) {
		if (isPrime(i)) {
			for(int j=i+1;j<n;j++)
				if(j%i==0&&a[i] != 0)
				a[b[j]] = 0;
		}
		
	}
	
	for (i = 1; i <=n; i++)
		if (a[i] == 1)
			cout << b[i] << endl;
	return 0;
	
}

