/*1528. ���������ַ���
����һ���ַ��� s ��һ�� ������ͬ ���������� indices ��

�������������ַ��� s �����е� i ���ַ���Ҫ�ƶ��� indices[i] ָʾ��λ�á�

�����������к���ַ�����

 

ʾ�� 1��



���룺s = "codeleet", indices = [4,5,6,7,0,2,1,3]
�����"leetcode"
���ͣ���ͼ��ʾ��"codeleet" �������к��Ϊ "leetcode" ��
ʾ�� 2��

���룺s = "abc", indices = [0,1,2]
�����"abc"
���ͣ��������к�ÿ���ַ���������ԭ����λ���ϡ�
ʾ�� 3��

���룺s = "aiohn", indices = [3,1,4,2,0]
�����"nihao"
ʾ�� 4��

���룺s = "aaiougrt", indices = [4,0,2,6,7,3,1,5]
�����"arigatou"
ʾ�� 5��

���룺s = "art", indices = [1,0,2]
�����"rat"*/
#include<stdio.h>
#include<stdlib.h>
char * restoreString(char * s, int* indices, int indicesSize)
{
    char *res = (char*)malloc(sizeof(char)*(indicesSize+1));
    for(int i = 0;i < indicesSize; i++)
    {
        res[indices[i]] = s[i];
    }
    res[indicesSize] = '\0';
    return res;
}