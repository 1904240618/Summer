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
int partition(int res[], int left, int right) {
    int i = left, j = right;
    int tmp = res[left];
    while (i < j) {
        while (i < j && res[j] > tmp)
            j--;
        if (i < j) {
            res[i] = res[j];
            i++;
        }
        while (i < j && res[i] < tmp)
            i++;
        if (i < j) {
            res[j] = res[i];
            j--;
        }
    }
    res[i] = tmp;
    return i;
}
void quick_sort(int res[],int left,int right)
{
    int mid;
    if(left<right)
    {
        mid = partition(res,left,right);
        quick_sort(res,left,mid-1);
        quick_sort(res,mid+1,right);
    }
}
int* sortArray(int* nums, int numsSize, int* returnSize)
{
    *returnSize = numsSize;
    quick_sort(nums,0,numsSize-1);
    return nums;
}
void main()
{
	int a[100];
	int i,n;
	scanf("%d",&n);
    for(i = 0;i <n ;i++)
    scanf("%d",&a[i]);
	sortArray(0,n,a);
	for(i = 0;i < n;i++)
	printf("%d ",a[i]);
}
