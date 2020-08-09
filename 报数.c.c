#include <stdio.h>
int main(void)
{
    int count, i, m, n, no;
    int num[50];
    int *p;

    scanf("%d%d", &n, &m);
    for(i = 0; i < n; i++)
        num[i] = i + 1;
    p = num;

num[i]=i+1;
	count=no=1;
	for(;no!=n;){
		if(count==m){
			printf("No%d: %d\n", no, *p);
			no++;
			*p=0;
			count=0;
		}
		p++;
		count++;
		if(*p>n)p=num;
		while(*p==0){p++;if(*p>n)p=num;}
   	 }

    p = num;
    while(*p == 0)
        p++;
    printf("Last No is: %d\n", *p);
}

