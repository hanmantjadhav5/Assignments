// Accept N numbers from user and accept one another number as NO , check whether NO is present or not

#include<stdio.h>
#include<malloc.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL FindNo(int Arr[], int iLength, int iNo)
{
    for(int i=0; i<iLength; i++)
    {
        if(Arr[i]==iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iSize=0, iFind, iCnt=0;
    BOOL bRet=FALSE;
    int *ptr = NULL;

    printf("Enter the number of elements : ");
    scanf("%d", &iSize);

    printf("Enter the Number that you want to Find : ");
    scanf("%d", &iFind);

    ptr =(int *)malloc(iSize*sizeof(int *));

    if(ptr==NULL)
    {
        printf("Failed to allocate Memory ");
        return -1;
    }

    printf("Enter %d Elements\n", iSize );

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("\nEnter Element %d: ", iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    bRet = FindNo(ptr, iSize, iFind);

    if(bRet==TRUE)
    {
        printf("Number is present: ");
    }
    else
    {
        printf("Number not is present: ");
    }

    free(ptr);

    return 0;
}
