/*121. ������Ʊ�����ʱ��
����һ�����飬���ĵ� i ��Ԫ����һ֧������Ʊ�� i ��ļ۸�

��������ֻ�������һ�ʽ��ף������������һ֧��Ʊһ�Σ������һ���㷨�����������ܻ�ȡ���������

ע�⣺�㲻���������Ʊǰ������Ʊ��

 

ʾ�� 1:

����: [7,1,5,3,6,4]
���: 5
����: �ڵ� 2 �죨��Ʊ�۸� = 1����ʱ�����룬�ڵ� 5 �죨��Ʊ�۸� = 6����ʱ��������������� = 6-1 = 5 ��
     ע���������� 7-1 = 6, ��Ϊ�����۸���Ҫ��������۸�ͬʱ���㲻��������ǰ������Ʊ��
ʾ�� 2:

����: [7,6,4,3,1]
���: 0
����: �����������, û�н������, �����������Ϊ 0��*/
int maxProfit(int* prices, int pricesSize)
{
    int maxprofit = 0,profit = 0;
    for(int i = 0;i < pricesSize-1; i++)
    {
        for(int j = i+1;j < pricesSize; j++)
        {
            profit = prices[j]-prices[i];
            if(maxprofit<profit)
            {
                maxprofit = profit;
            }
        }
    }
    return maxprofit;
}
int main()
{
	int a[100];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",maxProfit(a,n));

	return 0;
}