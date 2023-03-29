// Accept N numbers from user and return difference between frequency of even number and odd numbers

#include<stdio.h>
#include<stdlib.h>

int EvenOddDiff(int Arr[], int iLength)
{
    int i = 0, iEvenOdd = 0;

    for(i = 0;i < iLength; i++)
    {
        if(Arr[i]%2==0)
        {
            iEvenOdd++;
        }
        else
        {
            iEvenOdd--;
        }
    }
    return iEvenOdd;
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0, iRet = 0, iSize = 0;

    printf("Enter the number of elements You want to store : ");
    scanf("%d", &iSize);

    ptr =(int *)malloc(iSize*sizeof(int*));

    if(ptr==NULL)
    {
        printf("Failed To Allocate Memory !");
        return -1;
    }
    
    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element %d : ",iCnt+1);
        scanf("%d", &ptr[iCnt]);
    }

    iRet = EvenOddDiff(ptr,iSize);

    printf("Difference Between Even & Odd Numbers is : %d",iRet);

    free(ptr);

    return 0;
}