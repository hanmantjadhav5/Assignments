// Accept N numbers from user and return frequency of even numbers

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int i = 0, iCntEven = 0;

    for ( i = 0; i < iSize ; i++)
    {
        if (Arr[i]%2 == 0)
        {
            iCntEven++;
        }
    }
    return iCntEven;
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0, iRet = 0, iLength = 0;

    printf("Enter number of elements you want to store : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if(ptr==NULL)
    {
        printf("Failed To Allocate Memory !");
        return -1;
    }

    printf("Enter the elemets : \n");
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements from array are : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet = CountEven(ptr,iLength);

    printf("Frequency of even number is : %d\n",iRet);

    free(ptr);

    return 0;
}


