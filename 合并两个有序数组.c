/*88. �ϲ�������������
�������������������� nums1 �� nums2�����㽫 nums2 �ϲ��� nums1 �У�ʹ nums1 ��Ϊһ���������顣

 

˵��:

��ʼ�� nums1 �� nums2 ��Ԫ�������ֱ�Ϊ m �� n ��
����Լ��� nums1 ���㹻�Ŀռ䣨�ռ��С���ڻ���� m + n�������� nums2 �е�Ԫ�ء�
 

ʾ��:

����:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3

���: [1,2,2,3,5,6]*/
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