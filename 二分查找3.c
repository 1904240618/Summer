
#include<stdio.h>
int arrangeCoins(int n)
{
    int low = 1,high = n;
    while(low<=high)
    {
        long mid = low+(high-low)/2;
        long sum = mid*(mid+1)/2;
        if(sum<n)
        {
            low = mid+1;
        }
        else if(sum == n)
        {
            return mid;
        }
        else
        {
            high = mid-1;
        }
    }        
    return low-1;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",arrangeCoins(n));

	return 0;
}
