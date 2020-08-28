/*151. 翻转字符串里的单词
给定一个字符串，逐个翻转字符串中的每个单词。

 

示例 1：

输入: "the sky is blue"
输出: "blue is sky the"
示例 2：

输入: "  hello world!  "
输出: "world! hello"
解释: 输入字符串可以在前面或者后面包含多余的空格，但是反转后的字符不能包括。
示例 3：

输入: "a good   example"
输出: "example good a"
解释: 如果两个单词间有多余的空格，将反转后单词间的空格减少到只含一个。*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * reverseWords(char * s){
    int len = strlen(s);
    char *res = (char *)malloc(sizeof(char) * (strlen(s) + 2));
    char *p = (char *)malloc(sizeof(char) * (strlen(s) + 2));
    int i, t = 0, count = 0, flag = 0;
	if(len == 0)
        return s;
    for(i = len - 1;i >= 0;i--)
    {
        if(s[i] != ' ')
        {
            p[t++] = s[i];
            flag = 1;
        }
        if(s[i] == ' ')
        {
            while(t > 0)
                res[count++] = p[--t];
            if(flag == 1)
                res[count++] = ' ';
            flag = 0;
        }
    }
    if(t == 0)
    {
        if(count > 0)
            count--;
    }
    while(t > 0)
        res[count++] = p[--t];
    res[count] = '\0';
    return res;
}
