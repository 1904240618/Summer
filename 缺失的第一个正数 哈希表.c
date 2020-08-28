/*41. 缺失的第一个正数
给你一个未排序的整数数组，请你找出其中没有出现的最小的正整数。

 

示例 1:

输入: [1,2,0]
输出: 3
示例 2:

输入: [3,4,-1,1]
输出: 2
示例 3:

输入: [7,8,9,11,12]
输出: 1*/
int firstMissingPositive(int* nums, int numsSize)
{
    for(int i = 0;i < numsSize; i++)
    {
        if(nums[i]<=0)
        {
            nums[i] = numsSize+1;
        }
    }
    for(int i = 0;i < numsSize; i++)
    {
        int num = abs(nums[i]);
        if(num<=numsSize)
        {
            nums[num-1] = -abs(nums[num-1]);
        }
    }
    for(int i = 0;i < numsSize; i++)
    {
        if(nums[i]>0)
        {
            return i+1;
        }
    }
    return numsSize+1;
}
void main()
{
	int a[100];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",firstMissingPositive(a,n));

	return 0;
}