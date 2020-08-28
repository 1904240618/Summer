/*28. 实现 strStr()
实现 strStr() 函数。

给定一个 haystack 字符串和一个 needle 字符串，在 haystack 字符串中找出 needle 字符串出现的第一个位置 (从0开始)。如果不存在，则返回  -1。

示例 1:

输入: haystack = "hello", needle = "ll"
输出: 2
示例 2:

输入: haystack = "aaaaa", needle = "bba"
输出: -1*/
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