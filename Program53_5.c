// Write a recursive program which display below pattern.
// Output : a b c d e f 

#include<stdio.h>

void DisplayR()
{
    static char cCnt = 'a';
    if (cCnt<='f')
    {
        printf("%c\t",cCnt);
        cCnt++; 
        DisplayR();
    }
}

int main()
{   
    DisplayR();

    return 0;
}