/*912. ��������
����һ���������� nums�����㽫�������������С�

 

ʾ�� 1��

���룺nums = [5,2,3,1]
�����[1,2,3,5]
ʾ�� 2��

���룺nums = [5,1,1,2,0,0]
�����[0,0,1,1,2,5]*/
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