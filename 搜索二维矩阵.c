/*74. ������ά����
��дһ����Ч���㷨���ж� m x n �����У��Ƿ����һ��Ŀ��ֵ���þ�������������ԣ�

ÿ���е����������Ұ��������С�
ÿ�еĵ�һ����������ǰһ�е����һ��������
ʾ�� 1:

����:
matrix = [
  [1,   3,  5,  7],
  [10, 11, 16, 20],
  [23, 30, 34, 50]
]
target = 3
���: true
ʾ�� 2:

����:
matrix = [
  [1,   3,  5,  7],
  [10, 11, 16, 20],
  [23, 30, 34, 50]
]
target = 13
���: false*/
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