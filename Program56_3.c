// accept string from user and count number of small characters.
// Input : HElloWOrlD
// Output : 5 

#include<stdio.h>

int Count(char *p)
{
    static int i=0;
    static int iCnt=0;
    
    if(p[i]!='\0')
    {
        if((p[i]>='a') && (p[i]<='z'))
        {
            iCnt++;
        }
        i++;
        Count(p);
    }
    return iCnt;
}

int main()
{
    int iRet=0;
    char ch[30];
    //ch=malloc(sizeof(char)*30);

    printf("Enter word: ");
    scanf("%s", &ch);

    iRet = Count(ch);
    printf("Number of small character are %d", iRet);
    return 0;
}