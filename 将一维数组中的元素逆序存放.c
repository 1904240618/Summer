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
        printf("µ¹ĞòÇ°µÄ×Ö·û´®Îª:%s\n", strs);
        reverseChar(strs);
        printf("µ¹ĞòºóµÄ×Ö·û´®Îª:%s\n", strs);

        return 0;
}
