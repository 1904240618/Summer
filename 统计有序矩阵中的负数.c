/*1351. ͳ����������еĸ���
����һ�� m * n �ľ��� grid�������е�Ԫ�������ǰ��л��ǰ��У����Էǵ���˳�����С� 

����ͳ�Ʋ����� grid �� ���� ����Ŀ��

 

ʾ�� 1��

���룺grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
�����8
���ͣ������й��� 8 ��������
ʾ�� 2��

���룺grid = [[3,2],[1,0]]
�����0
ʾ�� 3��

���룺grid = [[1,-1],[-1,-1]]
�����3
ʾ�� 4��

���룺grid = [[-1]]
�����1*/
int findPosition(int *a, int n, int x)
{
    if(!a) return -1;

    int low = 0;
    int high = n - 1;
    while(low <= high)
    {
        int middle = (low + high) >> 1;

        if(x > a[middle]) high = middle - 1;
        else if(x <= a[middle]) low = middle + 1;
    }

    return low;
}
int countNegatives(int** grid, int gridSize, int* gridColSize)
{
    if(!grid) return 0;
    int count = 0;
    for(int i = 0;i < gridSize; i++)
    {
        int flag = findPosition(grid[i],gridColSize[i],0);
        if(flag<gridColSize[i])
        {
            count+=gridColSize[i]-flag;
        }
    }
    return count;
}
int main()
{
	int grid[10][10];
	int i,j,m,n;
	scanf("%d %d",&m,&n);
	for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++)
        {
			scanf("%d",&grid[i][j]);
		}
	}
	printf("����%d\n",countNegatives(grid,m,&n));

	return 0;
	
}