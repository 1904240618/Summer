int Get_Sum(int *arr,int len)
{
    return len == 0 ? 0 : Get_Sum(arr, len - 1) + arr[len - 1];
}
int main()
{
    int arr[5] = {1,2,4,5,6};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("sum= %d\n",Get_Sum(arr, len));
    return 0;
}
