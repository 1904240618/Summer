/*35. ��������λ��
����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ�������������������Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�

����Լ������������ظ�Ԫ�ء�

ʾ�� 1:

����: [1,3,5,6], 5
���: 2
ʾ�� 2:

����: [1,3,5,6], 2
���: 1
ʾ�� 3:

����: [1,3,5,6], 7
���: 4
ʾ�� 4:

����: [1,3,5,6], 0
���: 0*/
#include<stdio.h>
int searchInsert(int* nums, int numsSize, int target)
{
    if(target < nums[0])
    {
        return 0;
    }
    if(target > nums[numsSize-1])
    {
        return numsSize;
    }
    for(int i = 0;i < numsSize;i++)
    {
        if(nums[i] == target)
        {
            return i;
        }
        if(nums[i]<target&&nums[i+1]>target)
        {
            return i+1;
        }
    }
    return 0;
}
int main()
{
	int n,a[100],target;
	scanf("%d %d",&n,&target);
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d ",searchInsert(a,n,target));
}
