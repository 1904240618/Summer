/*74. 搜索二维矩阵
编写一个高效的算法来判断 m x n 矩阵中，是否存在一个目标值。该矩阵具有如下特性：

每行中的整数从左到右按升序排列。
每行的第一个整数大于前一行的最后一个整数。
示例 1:

输入:
matrix = [
  [1,   3,  5,  7],
  [10, 11, 16, 20],
  [23, 30, 34, 50]
]
target = 3
输出: true
示例 2:

输入:
matrix = [
  [1,   3,  5,  7],
  [10, 11, 16, 20],
  [23, 30, 34, 50]
]
target = 13
输出: false*/
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target)
{
    int m = matrixSize,n = matrixColSize[0];
    int l = 0,r = m*n-1;
    if ((NULL == matrix) || (0 == matrixSize)) return false;
    while(l<=r)
    {
        int mid = (l+r)/2;
        int t = matrix[mid/n][mid%n];
        if(target==t)
        {
            return true;
        }
        else if(target<t)
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    return false;
}