//accept string from user and count white spaces.
// Input : HE llo WOr lD
// Output : 3 

#include<stdio.h>

int CountOfWhitespace(char *p)
{
    static int i=0;
    static int iCnt=0;

    if(p[i]!='\0')
    {
        if(p[i]==' ')
        {
            iCnt++;
        }
        
        i++;
        CountOfWhitespace(p);
    }
    return iCnt;
}

int main()
{
    char ch[30];
    int iRet=0;

    printf("Enter string:\t");
    scanf("%[^'\n']s",ch);
  
    iRet = CountOfWhitespace(ch);
    printf("count of white space is %d", iRet);

    return 0;
}