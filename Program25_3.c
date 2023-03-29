// Write a program which accept string from user and return difference between 
// frequency of small characters and frequency of capital characters

#include<stdio.h>

int Difference(char *str){

    int iCcnt = 0, iScnt = 0;

    if (*str == '\0'){                        //filter

        return 0;
    }

    while (*str != '\0'){

        if (*str >= 'A'  && *str <= 'Z')
        {
            iCcnt++;
        }
        else if (*str >= 'a'  && *str <= 'z')
        {
            iScnt++;
        }
        str++;
    }
    
    int x =(iScnt - iCcnt);
    
    if (x < 0){
        
        x = -x;
    }
    return x;
}

int main(){
    
    char Arr[20];
    int iRet = 0;

    printf("Enter string \n ");
    scanf("%[^'\n']s", Arr);

    iRet = Difference(Arr);

    printf("Difference between Capital Characters & Small Characters is  %d", iRet);

    return 0;
}