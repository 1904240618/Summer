/*41. ȱʧ�ĵ�һ������
����һ��δ������������飬�����ҳ�����û�г��ֵ���С����������

 

ʾ�� 1:

����: [1,2,0]
���: 3
ʾ�� 2:

����: [3,4,-1,1]
���: 2
ʾ�� 3:

����: [7,8,9,11,12]
���: 1*/
int firstMissingPositive(int* nums, int numsSize)
{
    for(int i = 0;i < numsSize; i++)
    {
        if(nums[i]<=0)
        {
            nums[i] = numsSize+1;
        }
    }
    for(int i = 0;i < numsSize; i++)
    {
        int num = abs(nums[i]);
        if(num<=numsSize)
        {
            nums[num-1] = -abs(nums[num-1]);
        }
    }
    for(int i = 0;i < numsSize; i++)
    {
        if(nums[i]>0)
        {
            return i+1;
        }
    }
    return numsSize+1;
}
void main()
{
	int a[100];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",firstMissingPositive(a,n));

	return 0;
}