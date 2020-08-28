/*59. �������� II
����һ�������� n������һ������ 1 �� n2 ����Ԫ�أ���Ԫ�ذ�˳ʱ��˳���������е������ξ���

ʾ��:

����: 3
���:
[
 [ 1, 2, 3 ],
 [ 8, 9, 4 ],
 [ 7, 6, 5 ]
]*/
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
#include<stdio.h>
int** generateMatrix(int n, int* returnSize, int** returnColumnSizes)
{
    int**res = (int**)malloc(n*sizeof(int*));
     int l = 0;
    int r = n - 1;
    int t = 0;
    int b = n - 1;
    *returnSize = n;
    *returnColumnSizes = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        res[i] = (int*)malloc(sizeof(int) * n);
        (*returnColumnSizes)[i] = n;
    }
    int num = 1;
    int max = n*n;
    while(num<=max)
    {
        for(int i = l; i <= r; i++)res[t][i] = num++; 
        t++;
        for(int i = t; i <= b; i++) res[i][r] = num++; 
        r--;
        for(int i = r; i >= l; i--) res[b][i] = num++; 
        b--;
        for(int i = b; i >= t; i--) res[i][l] = num++; 
        l++;
    }
    return res;
}
