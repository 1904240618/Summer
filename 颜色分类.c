/*75. 颜色分类
给定一个包含红色、白色和蓝色，一共 n 个元素的数组，原地对它们进行排序，使得相同颜色的元素相邻，并按照红色、白色、蓝色顺序排列。

此题中，我们使用整数 0、 1 和 2 分别表示红色、白色和蓝色。

注意:
不能使用代码库中的排序函数来解决这道题。

示例:

输入: [2,0,2,1,1,0]
输出: [0,0,1,1,2,2]*/
#include<stdio.h>
void sortColors(int* nums, int numsSize)
{
    int temp,index;
    for(int j=0;j<numsSize-1;j++)
    {
        index = j;
        for(int i=j+1;i<numsSize;i++)
        {
            if(nums[i]<nums[index])
            {
                temp = nums[index];
                nums[index] = nums[i];
                nums[i] = temp;
            }
        }
    }
}
int main()
{
	int main()
{
	int n,a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    sortColors(a,n);
	return 0;
}
}