/*75. ��ɫ����
����һ��������ɫ����ɫ����ɫ��һ�� n ��Ԫ�ص����飬ԭ�ض����ǽ�������ʹ����ͬ��ɫ��Ԫ�����ڣ������պ�ɫ����ɫ����ɫ˳�����С�

�����У�����ʹ������ 0�� 1 �� 2 �ֱ��ʾ��ɫ����ɫ����ɫ��

ע��:
����ʹ�ô�����е����������������⡣

ʾ��:

����: [2,0,2,1,1,0]
���: [0,0,1,1,2,2]*/
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