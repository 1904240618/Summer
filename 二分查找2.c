
#include<stdio.h>
int missingNumber(int* nums, int numsSize){
    int i=0,j=numsSize-1,mid=0;
    while(i<=j){
        mid=(i+j)/2;
        if(nums[mid]==mid)
            i=mid+1;
        else
            j=mid-1;
    }
    return i;
}
int main()
{
	int n,a[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    printf("%d",missingNumber(a,n));
	return 0;
}
