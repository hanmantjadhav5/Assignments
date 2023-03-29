// Write a recursive program which display below pattern.
// Output : A B C D E F 

#include<stdio.h>

void DisplayR()
{
    static char cCnt = 'A';
    if (cCnt<='F')
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