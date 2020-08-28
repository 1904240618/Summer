/*198. ��ҽ���
����һ��רҵ��С͵���ƻ�͵���ؽֵķ��ݡ�ÿ�䷿�ڶ�����һ�����ֽ�Ӱ����͵�Ե�Ψһ��Լ���ؾ������ڵķ���װ���໥��ͨ�ķ���ϵͳ������������ڵķ�����ͬһ���ϱ�С͵���룬ϵͳ���Զ�������

����һ������ÿ�����ݴ�Ž��ķǸ��������飬������ ����������װ�õ������ ��һҹ֮���ܹ�͵�Ե�����߽�

 

ʾ�� 1��

���룺[1,2,3,1]
�����4
���ͣ�͵�� 1 �ŷ��� (��� = 1) ��Ȼ��͵�� 3 �ŷ��� (��� = 3)��
     ͵�Ե�����߽�� = 1 + 3 = 4 ��
ʾ�� 2��

���룺[2,7,9,3,1]
�����12
���ͣ�͵�� 1 �ŷ��� (��� = 2), ͵�� 3 �ŷ��� (��� = 9)������͵�� 5 �ŷ��� (��� = 1)��

     ͵�Ե�����߽�� = 2 + 9 + 1 = 12 ��*/
#include<stdio.h>
int max(int a,int b)
{
    return a>b?a:b;
}
int rob(int* nums, int numsSize){
    if(!nums || numsSize == 0)
        return 0;
    if(numsSize == 1)
        return nums[0];
    int *dp = (int*)malloc(sizeof(int) * numsSize);
    dp[0] = nums[0];
    dp[1] = max(nums[1], nums[0]);
    for(int i = 2; i < numsSize; i++){
        dp[i] = max(dp[i-2] + nums[i], dp[i-1]);
    }
    return dp[numsSize - 1];
}	
int main()
{
	int n,a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    printf("%d",rob(a,n));
	return 0;
}
