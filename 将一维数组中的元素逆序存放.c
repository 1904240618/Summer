void reverseChar(char strs[]){
    
    size_t count = strlen(strs);
    
    char *p = strs;
    char tmp;
    for (int i = 0; i < count / 2; i++) {
        tmp = *(p + i);
        *(p + i) = *(p + count - 1 - i);
        *(p + count - 1 - i) = tmp;
    }
}
int main()
{
        
        char strs[] = "ios_php_java";
        printf("����ǰ���ַ���Ϊ:%s\n", strs);
        reverseChar(strs);
        printf("�������ַ���Ϊ:%s\n", strs);

        return 0;
}
