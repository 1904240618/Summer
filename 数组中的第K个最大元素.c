/*215. 数组中的第K个最大元素
在未排序的数组中找到第 k 个最大的元素。请注意，你需要找的是数组排序后的第 k 个最大的元素，而不是第 k 个不同的元素。

示例 1:

输入: [3,2,1,5,6,4] 和 k = 2
输出: 5
示例 2:

输入: [3,2,3,1,2,4,5,5,6] 和 k = 4
输出: 4*/
#include<stdio.h>
int cmp(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}
int findKthLargest(int* nums, int numsSize, int k)
{
    qsort(nums,numsSize,sizeof(int),cmp);
    return nums[numsSize-k];
}
int main()
{
	int a[100];
	int i,n,k;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",findKthLargest(a,n,k));

	return 0;
}