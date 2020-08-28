/*20. 有效的括号
给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。

有效字符串需满足：

左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
注意空字符串可被认为是有效字符串。

示例 1:

输入: "()"
输出: true
示例 2:

输入: "()[]{}"
输出: true
示例 3:

输入: "(]"
输出: false*/
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