/*剑指 Offer 03. 数组中重复的数字
找出数组中重复的数字。


在一个长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围内。数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。请找出数组中任意一个重复的数字。

示例 1：

输入：
[2, 3, 1, 0, 2, 5, 3]
输出：2 或 3 */
#include<stdio.h>
int findRepeatNumber(int* nums, int numsSize)
{
    int *hash = (int*)calloc(numsSize,sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        if(hash[nums[i]]==1)
        {
            return nums[i];
        }
        else
        {
            hash[nums[i]]++;
        }
    }
    return -1;
}
int main()
{
	int n,a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    findRepeatNumber(a,n);
	return 0;
}