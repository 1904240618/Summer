int main()
{
    int sum = 0;
    int arr[5] = {1,2,4,5,6};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    printf("sum = %d\n",sum);
    return 0;
}
