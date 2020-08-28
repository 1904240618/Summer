/*��ָ Offer 04. ��ά�����еĲ���
��һ�� n * m �Ķ�ά�����У�ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳�����������һ������������������һ����ά�����һ���������ж��������Ƿ��и�������

 

ʾ��:

���о��� matrix ���£�

[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
���� target = 5������ true��

���� target = 20������ false��

 */
#include<stdio.h>
#include<stdbool.h>
bool findNumberIn2DArray(int** matrix, int matrixSize, int* matrixColSize, int target)
{
    if (matrix == NULL || matrixSize == 0 || *matrixColSize == 0 )
    {
        return false;
    }
    for (int i = 0, j = *matrixColSize - 1; i < matrixSize && j >= 0;)
    {
        if (target < matrix[i][j])
        {
            j--;
        }
        else if (target > matrix[i][j])
        {
            i++;
        }
        else
        {
            return true;
        }
    }
    return false;
}
int main()
{
	int a[100][100],i,j,target;
	int n1,n2;
	scanf("%d %d %d",&n1,&n2,&target);
	for(i = 0;i < n1;i++)
	{
		for(j = 0;j < n2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("%s",findNumberIn2DArray(a,n1,n2,target));
}