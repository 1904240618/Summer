/*976. �����ε�����ܳ�
������һЩ�����������ȣ���ɵ����� A����������������������ɵġ������Ϊ��������ε�����ܳ���

��������γ��κ������Ϊ��������Σ����� 0��

 

ʾ�� 1��

���룺[2,1,2]
�����5
ʾ�� 2��

���룺[1,2,1]
�����0
ʾ�� 3��

���룺[3,2,3,4]
�����10
ʾ�� 4��

���룺[3,6,2,3]
�����8*/
#include<stdio.h>
void sort(int *A,int left,int right)
{
    int i=left,j=right;
    if(i<j)
    {
        int temp=A[left];
        while(i<j)
        {
            while(A[j]>temp&&i<j)
                j--;
            if(i<j)
            {   A[i]=A[j];
                i++;
            }
            while(A[i]<temp&&i<j)
                i++;
            if(i<j)
            {
                A[j]=A[i];
                j--;
            }
        }
        A[i]=temp;
        sort(A,left,i-1);
        sort(A,i+1,right);
    }
}
int largestPerimeter(int* A, int ASize)
{
  int sum=0,i;
  sort(A,0,ASize-1);
  for(i=ASize-1;i>=2;i--){
      if(A[i-1]+A[i-2]>A[i]){
          sum=A[i]+A[i-1]+A[i-2];
          break;
      }
  }
  return sum;
}
int main()
{
	int n,a[100],i;
	scanf("%d",&n);
	for(i = 0;i < n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",largestPerimeter(a,n));
}