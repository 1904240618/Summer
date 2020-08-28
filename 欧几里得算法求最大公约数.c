#include "stdio.h"
int gys(int a,int b)
{
	if(a%b==0) return b;
	return gys(b,a%b);
} 
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		int t;
		if(a<b){ 
			t=a;
			a=b;
			b=t;
		} 	
		printf("%d\n",a*b/gys(a,b));		
	}
	return 0;
}
