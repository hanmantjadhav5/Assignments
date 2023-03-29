//  Accept N numbers from user and accept one another number as NO , return frequency of NO form it

#include<stdio.h>
#include<stdlib.h>
int Display(int Arr[],int iSize,int iNo)
{
    int iCnt=0, iFreq=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iFreq++;
        }
    }
    return iFreq;
}

int main()
{
    int iSize=0,iCnt=0,iRet=0,iNo=0;
    int *ptr=NULL;

    printf("Enter Number Of Elements : ");
    scanf("%d",&iSize);

    printf("Enter Number To Find : ");
    scanf("%d",&iNo);

    ptr=(int *)malloc(iSize * sizeof(int));

    if(ptr==NULL)
    {
        printf("Failed To Allocate Memory !");
        return -1;
    }

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("\nEnter Element %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    iRet=Display(ptr,iSize,iNo);

    printf("Frequency Of %d is : %d",iNo,iRet);

    free(ptr);

    return 0;
}
