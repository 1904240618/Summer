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
int partition(int res[], int left, int right) {
    int i = left, j = right;
    int tmp = res[left];
    while (i < j) {
        while (i < j && res[j] > tmp)
            j--;
        if (i < j) {
            res[i] = res[j];
            i++;
        }
        while (i < j && res[i] < tmp)
            i++;
        if (i < j) {
            res[j] = res[i];
            j--;
        }
    }
    res[i] = tmp;
    return i;
}
void quick_sort(int res[],int left,int right)
{
    int mid;
    if(left<right)
    {
        mid = partition(res,left,right);
        quick_sort(res,left,mid-1);
        quick_sort(res,mid+1,right);
    }
}
int* sortArray(int* nums, int numsSize, int* returnSize)
{
    *returnSize = numsSize;
    quick_sort(nums,0,numsSize-1);
    return nums;
}
void main()
{
	int a[100];
	int i,n;
	scanf("%d",&n);
    for(i = 0;i <n ;i++)
    scanf("%d",&a[i]);
	sortArray(0,n,a);
	for(i = 0;i < n;i++)
	printf("%d ",a[i]);
}
