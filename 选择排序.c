/*912. 排序数组
给你一个整数数组 nums，请你将该数组升序排列。

 

示例 1：

输入：nums = [5,2,3,1]
输出：[1,2,3,5]
示例 2：

输入：nums = [5,1,1,2,0,0]
输出：[0,0,1,1,2,5]*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
int* sortArray(int* nums, int numsSize, int* returnSize)
{
    int temp;
    returnSize[0] = numsSize;
    for(int i = 0;i < numsSize-1;i++)
    {
        int index = i;
        for(int j = i+1;j < numsSize;j++)
        {
            if(nums[j]<nums[index])
            index = j;
        }
        temp = nums[i];
        nums[i] = nums[index];
        nums[index] = temp;
    }
    return nums;
}
int main()
{
	int a[100],n,i;
	scanf("%d",&n);
	for(i = 0;i < n;i++)
	{
		scanf("%d",&a[i]);
	}
    sortArray(a,n);
	return 0 ;
}