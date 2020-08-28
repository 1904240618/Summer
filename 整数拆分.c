/*343. �������
����һ�������� n��������Ϊ���������������ĺͣ���ʹ��Щ�����ĳ˻���󻯡� ��������Ի�õ����˻���

ʾ�� 1:

����: 2
���: 1
����: 2 = 1 + 1, 1 �� 1 = 1��
ʾ�� 2:

����: 10
���: 36
����: 10 = 3 + 3 + 4, 3 �� 3 �� 4 = 36��*/
#include<stdio.h>
#include<string.h>
int integerBreak(int n) 
{
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 2; i <= n; i++) 
	{
        int res = 0;
        for (int j = 1; j < i; j++) 
		{
            res = fmax(res, fmax(j * (i - j), j * dp[i - j]));
        }
        dp[i] = res;
    }
    return dp[n];
}
int main()
{
	int n;
	scanf("%d",&n);
	int res = integerBreak(n);
	printf("%d",res);

	return 0;
}