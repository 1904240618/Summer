/*14. 最长公共前缀
编写一个函数来查找字符串数组中的最长公共前缀。

如果不存在公共前缀，返回空字符串 ""。

示例 1:

输入: ["flower","flow","flight"]
输出: "fl"
示例 2:

输入: ["dog","racecar","car"]
输出: ""
解释: 输入不存在公共前缀。*/
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