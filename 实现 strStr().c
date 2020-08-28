/*28. ʵ�� strStr()
ʵ�� strStr() ������

����һ�� haystack �ַ�����һ�� needle �ַ������� haystack �ַ������ҳ� needle �ַ������ֵĵ�һ��λ�� (��0��ʼ)����������ڣ��򷵻�  -1��

ʾ�� 1:

����: haystack = "hello", needle = "ll"
���: 2
ʾ�� 2:

����: haystack = "aaaaa", needle = "bba"
���: -1*/
#include<stdio.h>
#include<string.h>
int strStr(char * haystack, char * needle)
{
    int len1 = strlen(haystack),len2 = strlen(needle);
    if(len2<1)
    {
        return 0;
    }
    for(int i = 0;i < len1; i++)
    {
        if(len1-i<len2)
        {
            return -1;
        }
        int temp1 = i;
        int temp2 = 0;
        while(haystack[temp1++]==needle[temp2++])
        {
            if(temp2 == len2)
            {
                return i;
            }
        }
    }
    return -1;
}
int main()
{
	char a[100],b[50];
	scanf("%s %s",a,b);
	int flag = strStr(a,b);
	printf("%d",flag);

	return 0;
}