/*88. 合并两个有序数组
给你两个有序整数数组 nums1 和 nums2，请你将 nums2 合并到 nums1 中，使 nums1 成为一个有序数组。

 

说明:

初始化 nums1 和 nums2 的元素数量分别为 m 和 n 。
你可以假设 nums1 有足够的空间（空间大小大于或等于 m + n）来保存 nums2 中的元素。
 

示例:

输入:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3

输出: [1,2,2,3,5,6]*/
#include<stdio.h>
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
    int j = 0,temp;
    for(int i = m;i<m+n;i++,j++)
    {
        nums1[i] = nums2[j];
    }
    for(int k = 0;k < m+n-1;k++)
    {
        for(int i = k+1;i < m+n;i++)
        {
            if(nums1[i]<nums1[k])
            {
                temp = nums1[i];
                nums1[i] = nums1[k];
                nums1[k] = temp;
            }
        }
    }
    return nums1;
}
int main()
{
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	for(int i = 0;i < n1;i++)
	{
		scanf("%d",a[i]);
	}
	for(int i = 0;i < n2;i++)
	{
		scanf("%d",b[i]);
	}
	merge(a, 100,n1,b,100,n2);
	return 0;

}