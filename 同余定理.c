#include<iostream>
#include<string>
#include<string.h>
#include<cstdio>
#include<algorithm>
using namespace std;
 
int main()
{
	
	int N, i, num, len;
	scanf("%d", &N);
	while(N--)
	{
		num = 0;
		char str[1000010];
		scanf("%s", str);
		len = strlen(str);
		for(i = 0; i != len; ++i)
		{
			num = (num * 10 + (int)(str[i] - '0')) % 10003; 
		}
		printf("%d\n", num);
	}
	return 0;
}
