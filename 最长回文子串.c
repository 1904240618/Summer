/*5. ������Ӵ�
����һ���ַ��� s���ҵ� s ����Ļ����Ӵ�������Լ��� s ����󳤶�Ϊ 1000��

ʾ�� 1��

����: "babad"
���: "bab"
ע��: "aba" Ҳ��һ����Ч�𰸡�
ʾ�� 2��

����: "cbbd"
���: "bb"*/
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