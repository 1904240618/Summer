/*434. �ַ����еĵ�����
ͳ���ַ����еĵ��ʸ���������ĵ���ָ���������Ĳ��ǿո���ַ���

��ע�⣬����Լٶ��ַ����ﲻ�����κβ��ɴ�ӡ���ַ���

ʾ��:

����: "Hello, my name is John"
���: 5
����: ����ĵ�����ָ�����Ĳ��ǿո���ַ������� "Hello," ���� 1 �����ʡ�*/
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int countSegments(char * s)
{
    int count = 0;
    while(*s)
    {
        if(*s++!=' '&&(*s==' '||*s == '\0'))
        {
            count++;
        }
    }
    return count;
}
int main()
{
	char s[100];
	scanf("%s",s);
	printf("%d",countSegments(s));

	return 0;
}