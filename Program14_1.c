// Accept N numbers from user and return difference between summation of even elements and summation of odd elements


#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iEven=0,iOdd=0;

    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]%2==0)
        {
            iEven = iEven+Arr[i];
        }
        else
        {
            iOdd = iOdd+Arr[i];
        }
    }
    return iEven-iOdd;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *ptr = NULL;

    printf("Enter Number of Elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n",iSize);

    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("\nEnter element %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Difference(ptr, iSize);
    printf("\nResult is %d",iRet);

    free(ptr);
    return 0;
}