/*215. �����еĵ�K�����Ԫ��
��δ������������ҵ��� k ������Ԫ�ء���ע�⣬����Ҫ�ҵ������������ĵ� k ������Ԫ�أ������ǵ� k ����ͬ��Ԫ�ء�

ʾ�� 1:

����: [3,2,1,5,6,4] �� k = 2
���: 5
ʾ�� 2:

����: [3,2,3,1,2,4,5,5,6] �� k = 4
���: 4*/
#include<stdio.h>
int cmp(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}
int findKthLargest(int* nums, int numsSize, int k)
{
    qsort(nums,numsSize,sizeof(int),cmp);
    return nums[numsSize-k];
}
int main()
{
	int a[100];
	int i,n,k;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",findKthLargest(a,n,k));

	return 0;
}