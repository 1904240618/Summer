/*151. ��ת�ַ�����ĵ���
����һ���ַ����������ת�ַ����е�ÿ�����ʡ�

 

ʾ�� 1��

����: "the sky is blue"
���: "blue is sky the"
ʾ�� 2��

����: "  hello world!  "
���: "world! hello"
����: �����ַ���������ǰ����ߺ����������Ŀո񣬵��Ƿ�ת����ַ����ܰ�����
ʾ�� 3��

����: "a good   example"
���: "example good a"
����: ����������ʼ��ж���Ŀո񣬽���ת�󵥴ʼ�Ŀո���ٵ�ֻ��һ����*/
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
