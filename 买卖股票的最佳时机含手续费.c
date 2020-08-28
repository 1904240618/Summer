/*714. ������Ʊ�����ʱ����������
����һ���������� prices�����е� i ��Ԫ�ش����˵� i ��Ĺ�Ʊ�۸� ���Ǹ����� fee �����˽��׹�Ʊ���������á�

��������޴ε���ɽ��ף�������ÿ�ʽ��׶���Ҫ�������ѡ�������Ѿ�������һ����Ʊ����������֮ǰ��Ͳ����ټ��������Ʊ�ˡ�

���ػ����������ֵ��

ע�⣺�����һ�ʽ���ָ������в�������Ʊ���������̣�ÿ�ʽ�����ֻ��ҪΪ֧��һ�������ѡ�

ʾ�� 1:

����: prices = [1, 3, 2, 8, 4, 9], fee = 2
���: 8
����: �ܹ��ﵽ���������:  
�ڴ˴����� prices[0] = 1
�ڴ˴����� prices[3] = 8
�ڴ˴����� prices[4] = 4
�ڴ˴����� prices[5] = 9
������: ((8 - 1) - 2) + ((9 - 4) - 2) = 8.*/
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int maxProfit(int* prices, int pricesSize, int fee)
{
    int cash = 0,hold = -prices[0];
    for(int i = 1;i < pricesSize; i++)
    {
        cash = fmax(cash,hold+prices[i]-fee);
        hold = fmax(hold,cash-prices[i]);
    }
    return cash;
}
int main()
{
	int fee,n;
	int a[100];
	scanf("%d %d",&n,&fee);
	for(int i = 0;i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	int flag = maxProfit(a,n,fee);
	printf("%d",flag);

	return 0;
}
