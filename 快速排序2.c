/*378. ��������е�KС��Ԫ��
����һ�� n x n ��������ÿ�к�ÿ��Ԫ�ؾ������������ҵ������е� k С��Ԫ�ء�
��ע�⣬���������ĵ� k СԪ�أ������ǵ� k ����ͬ��Ԫ�ء�

 

ʾ����

matrix = [
   [ 1,  5,  9],
   [10, 11, 13],
   [12, 13, 15]
],
k = 8,

���� 13��*/
#include<stdlib.h>
#include<stdio.h>
int cmp(const void *a,const void *b)
{
    return *(int*)a - *(int*)b;
}
int kthSmallest(int** matrix, int matrixSize, int* matrixColSize, int k)
{
    int l = 0;
    int *res = (int*)malloc(sizeof(int)*matrixSize*matrixSize);
    for(int i=0;i<matrixSize;i++)
    {
        for(int j=0;j<matrixColSize[i];j++)
        {
            res[l++] = matrix[i][j];
        }
    }
    qsort(res, l, sizeof(int), cmp);
    return res[k-1];
}
int main()
{
	int n,i,j,a[100][100],k;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
    printf("%d",kthSmallest(a,n,n,k));
}