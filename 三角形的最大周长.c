/*976. 三角形的最大周长
给定由一些正数（代表长度）组成的数组 A，返回由其中三个长度组成的、面积不为零的三角形的最大周长。

如果不能形成任何面积不为零的三角形，返回 0。

 

示例 1：

输入：[2,1,2]
输出：5
示例 2：

输入：[1,2,1]
输出：0
示例 3：

输入：[3,2,3,4]
输出：10
示例 4：

输入：[3,6,2,3]
输出：8*/
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