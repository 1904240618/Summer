/*14. �����ǰ׺
��дһ�������������ַ��������е������ǰ׺��

��������ڹ���ǰ׺�����ؿ��ַ��� ""��

ʾ�� 1:

����: ["flower","flow","flight"]
���: "fl"
ʾ�� 2:

����: ["dog","racecar","car"]
���: ""
����: ���벻���ڹ���ǰ׺��*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * longestCommonPrefix(char ** strs, int strsSize)
{
	int i,j;
    if(strsSize==0) return "";
    for(i = 0;i < strlen(strs[0]);i++)
    {
        for(j = 1;j < strsSize;j++)
        {
            if(strs[0][i]!=strs[j][i])
            {
                strs[0][i] = '\0';
            }
        }
    }
    return strs[0];
}
int main()
{
    char *s[5] = {"dog","dogl"};
    char *buff = {0};
    buff = longestCommonPrefix(s, 2);
    printf("%s\n", buff);
    free(buff);
    buff = NULL;
    return 0;
}