/*718. ��ظ�������
�������������� A �� B ���������������й����ġ��������������ĳ��ȡ�

 

ʾ����

���룺
A: [1,2,3,2,1]
B: [3,2,1,4,7]
�����3
���ͣ�
������Ĺ����������� [3, 2, 1] ��*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int findLength(int* A, int ASize, int* B, int BSize)
{
    int dp[ASize+1][BSize+1];
    memset(dp,0,sizeof(dp));
    int res = 0;
    for(int i = ASize-1;i >= 0; i--)
    {
        for(int j = BSize-1;j >= 0; j--)
        {
            dp[i][j] = A[i] == B[j]?dp[i+1][j+1]+1:0;
            res = fmax(res,dp[i][j]);
        }
    }
    return res;
}
int main()
{
	int a[100],b[100];
	int i,n,k,j;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<k;j++)
	{
		scanf("%d",&b[i]);
	}
	printf("%d",findKthLargest(a,n,b,k));

	return 0;
}