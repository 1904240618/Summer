/*977. ���������ƽ��
����һ�����ǵݼ�˳��������������� A������ÿ�����ֵ�ƽ����ɵ������飬Ҫ��Ҳ���ǵݼ�˳������

 

ʾ�� 1��

���룺[-4,-1,0,3,10]
�����[0,1,9,16,100]
ʾ�� 2��

���룺[-7,-3,2,3,11]
�����[4,9,9,49,121]*/
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