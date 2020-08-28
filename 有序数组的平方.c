/*977. 有序数组的平方
给定一个按非递减顺序排序的整数数组 A，返回每个数字的平方组成的新数组，要求也按非递减顺序排序。

 

示例 1：

输入：[-4,-1,0,3,10]
输出：[0,1,9,16,100]
示例 2：

输入：[-7,-3,2,3,11]
输出：[4,9,9,49,121]*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void*a,const void*b)
{
    return *(int*)a-*(int*)b;
}
int* sortedSquares(int* A, int ASize, int* returnSize)
{
    for(int i = 0;i < ASize; i++)
    {
        A[i] = pow(A[i],2);
    }
    qsort(A,ASize,sizeof(int),cmp);
    *returnSize = ASize;
    return A;
}