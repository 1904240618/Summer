/*922. ����ż�������� II
����һ���Ǹ��������� A�� A ��һ��������������һ��������ż����

��������������Ա㵱 A[i] Ϊ����ʱ��i Ҳ���������� A[i] Ϊż��ʱ�� i Ҳ��ż����

����Է����κ���������������������Ϊ�𰸡�

 

ʾ����

���룺[4,2,5,7]
�����[4,5,2,7]
���ͣ�[4,7,2,5]��[2,5,4,7]��[2,7,4,5] Ҳ�ᱻ���ܡ�*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
int* sortArrayByParityII(int* A, int ASize, int* returnSize)
{
    int temp;
    int j = 1;
    *returnSize = ASize;
    for(int i = 0;i < ASize; i=i+2)
    {
        if(A[i]%2==1)
        {
            while(A[j]%2==1)
            {
                j +=2;
            }
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    return A;
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
	int *p = sortArrayByParityII(a,n);
	for (int i = 0; i < size; i++)
	{
        printf("%d ",*(p+i));
	}

	return 0;
}