/*��ָ Offer 03. �������ظ�������
�ҳ��������ظ������֡�


��һ������Ϊ n ������ nums ����������ֶ��� 0��n-1 �ķ�Χ�ڡ�������ĳЩ�������ظ��ģ�����֪���м��������ظ��ˣ�Ҳ��֪��ÿ�������ظ��˼��Ρ����ҳ�����������һ���ظ������֡�

ʾ�� 1��

���룺
[2, 3, 1, 0, 2, 5, 3]
�����2 �� 3 */
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