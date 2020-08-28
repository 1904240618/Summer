/*5. 最长回文子串
给定一个字符串 s，找到 s 中最长的回文子串。你可以假设 s 的最大长度为 1000。

示例 1：

输入: "babad"
输出: "bab"
注意: "aba" 也是一个有效答案。
示例 2：

输入: "cbbd"
输出: "bb"*/
#include<string.h>
#include<stdio.h>
void help(char *s, int N, int left, int right, int *start, int *len)
{
    while (left >= 0 && right < N && s[left] == s[right])
        left--, right++;
    if (right - left - 1 > *len) 
    {
        *start = left + 1;
        *len = right - left - 1;
    }
}
char * longestPalindrome(char * s)
{
    int N = strlen(s), start = 0, len = 0,i;  
    for (i = 0; i < N; i++)    
    { 
        help(s, N, i-1, i+1, &start, &len);
    }
    for (i = 0; i < N; i++)
    {     
        help(s, N, i, i+1, &start, &len);
    }
    s[start + len] = '\0';        
    return s + start;
}
int main()
{
	char s[50];
	char *p = {0};
	scanf("%s",s);
	p = longestPalindrome(s);
	printf("%s",p);

	return 0;
}