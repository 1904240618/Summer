/*326. 3����
����һ��������дһ���������ж����Ƿ��� 3 ���ݴη���

ʾ�� 1:

����: 27
���: true
ʾ�� 2:

����: 0
���: false
ʾ�� 3:

����: 9
���: true
ʾ�� 4:

����: 45
���: false*/
#include<stdio.h>
bool isPowerOfThree(int n)
{
    if(n>=3&&n%3==0)
    {
        return isPowerOfThree(n/3);
    }
    return n==1;
}