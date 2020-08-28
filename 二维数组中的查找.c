/*剑指 Offer 04. 二维数组中的查找
在一个 n * m 的二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

 

示例:

现有矩阵 matrix 如下：

[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
给定 target = 5，返回 true。

给定 target = 20，返回 false。

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