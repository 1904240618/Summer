/*62. ��ͬ·��
һ��������λ��һ�� m x n ��������Ͻ� ����ʼ������ͼ�б��Ϊ��Start�� ����

������ÿ��ֻ�����»��������ƶ�һ������������ͼ�ﵽ��������½ǣ�����ͼ�б��Ϊ��Finish������

���ܹ��ж�������ͬ��·����



���磬��ͼ��һ��7 x 3 �������ж��ٿ��ܵ�·����

 

ʾ�� 1:

����: m = 3, n = 2
���: 3
����:
�����Ͻǿ�ʼ���ܹ��� 3 ��·�����Ե������½ǡ�
1. ���� -> ���� -> ����
2. ���� -> ���� -> ����
3. ���� -> ���� -> ����
ʾ�� 2:

����: m = 7, n = 3
���: 28*/
#include<stdio.h>
#include<stdlib.h>
int uniquePaths(int m, int n)
{
    int **dp = (int**)malloc(sizeof(int*)*n);
    for(int i = 0;i < n;i++)
    {
        dp[i] = (int*)malloc(sizeof(int)*m);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==0||j==0)
            {
                dp[i][j] = 1;
            }
            else
            dp[i][j] = dp[i-1][j]+dp[i][j-1];
        }
    }
    return dp[n-1][m-1];
}
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	printf("%d",uniquePaths(m,n));
	return 0;
}