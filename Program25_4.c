// Write a program which accept string from user and check whether it contains vowels in it or not

#include<stdio.h>

int ChkVowel(char *str){

    
    if(*str=='\0'){
        return -1;
    }
    
    while(*str!='\0'){
        
        if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u' || *str=='A' || *str=='E' || *str=='I' || *str=='O' || *str=='U')
        {
            return 1;
        }
        str++;
    }
    return 0;
}
int main(){
    
    char Arr[20];
    int iRet = 0;

    printf("Enter string \n ");
    scanf("%[^'\n']s", Arr);

    iRet = ChkVowel(Arr);

    if (iRet == -1){
        printf("Empty String");
    }
    else if (iRet==1){
        printf("Contains Vowels");
    }
    else{
        printf("There is no Vowel");
    }
    
    return 0;
}