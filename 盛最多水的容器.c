/*
11. ʢ���ˮ������
���� n ���Ǹ����� a1��a2��...��an��ÿ�������������е�һ���� (i, ai) ���������ڻ� n ����ֱ�ߣ���ֱ�� i �������˵�ֱ�Ϊ (i, ai) �� (i, 0)���ҳ����е������ߣ�ʹ�������� x �Ṳͬ���ɵ�����������������ˮ��

˵�����㲻����б�������� n ��ֵ����Ϊ 2��

 



ͼ�д�ֱ�ߴ����������� [1,8,6,2,5,4,8,3,7]���ڴ�����£������ܹ�����ˮ����ʾΪ��ɫ���֣������ֵΪ 49��

 

ʾ����

���룺[1,8,6,2,5,4,8,3,7]
�����49
*/
#include<stdio.h>
int maxArea(int* height, int heightSize)
{
    int l = 0,r = heightSize-1;
    int res = 0;
    for(int i = 0;i < heightSize; i++)
    {
        int area = fmin(height[r],height[l])*(r-l);
        res = fmax(res,area);
        if(height[l]<=height[r])
        {
            ++l;
        }
        else
        {
            --r;
        }
    }
    return res;
}
{
	int a[100];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",maxArea(a,n));

	return 0;
}