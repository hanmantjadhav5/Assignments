//  Accept N number from user and display all such elements 
// which are multiplies of 11

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
    int iCnt=0;
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt]%11==0 )
        {
            printf("\n%d",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize=0, i=0;
    int *ptr=NULL;

    printf("Enter Number Of Elements : \n ");
    scanf("%d", &iSize);

    ptr=(int *)malloc(iSize * sizeof(int));

    if(ptr==NULL)
    {
        printf("Failed To Allocate Memory");
        return -1;
    }

    printf("Enter %d elements \n",iSize);

    for(i=0; i<iSize; i++)
    {
        printf("Enter Element %d  ", i+1);
        scanf("%d",&ptr[i]);
    }
    Display(ptr,iSize);

    free(ptr);
    return 0;
}




