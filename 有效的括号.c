/*20. ��Ч������
����һ��ֻ���� '('��')'��'{'��'}'��'['��']' ���ַ������ж��ַ����Ƿ���Ч��

��Ч�ַ��������㣺

�����ű�������ͬ���͵������űպϡ�
�����ű�������ȷ��˳��պϡ�
ע����ַ����ɱ���Ϊ����Ч�ַ�����

ʾ�� 1:

����: "()"
���: true
ʾ�� 2:

����: "()[]{}"
���: true
ʾ�� 3:

����: "(]"
���: false*/
char pairs(char a) 
{
    if (a == '}') return '{';
    if (a == ']') return '[';
    if (a == ')') return '(';
    return 0;
}

bool isValid(char* s) 
{
    int n = strlen(s);
    if (n % 2 == 1) 
    {
        return false;
    }
    int a[n + 1], t = 0;
    for (int i = 0; i < n; i++) 
    {
        char ch = pairs(s[i]);
        if (ch) 
        {
            if (t == 0 || a[t - 1] != ch) 
            {
                return false;
            }
            t--;
        } else 
        {
            a[t++] = s[i];
        }
    }
    return t == 0;
}