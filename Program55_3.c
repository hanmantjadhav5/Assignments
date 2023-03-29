// recursive program which accept string from user
// and count number of characters
// Input : Hello
// Output : 5

#include <stdio.h>
 
int Strlen(char *str)
{
    int count = 0;
    int i = 0;  

    if(*str == '\0') 
    {  
         return 0;  
    }
    else
    {
        return 1+ Strlen(str+1);
    } 
    
}
 
int main()
{
    char arr[20];
    printf("Enter String: ");
    scanf("%s",&arr);

    int iRet = Strlen(arr);
    printf("Total number of characters in a string: %d", iRet); 
    return 0;
}