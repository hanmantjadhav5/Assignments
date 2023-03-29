// Accept N numbers from user and accept one another number as NO , return index of first occurrence of that NO.

#include<stdio.h>
#include<malloc.h>

int FindNo(int Arr[], int iLength, int iNo)
{
    for(int i=0; i<iLength; i++)
    {
        if(Arr[i]==iNo)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int iSize=0, iFind, iCnt=0, iRet = 0;
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

    iRet = FindNo(ptr, iSize, iFind);

    if(iRet==-1)
    {
        printf("There Is No Such Number");
    }
    else
    {
        printf("Index Number of First Occurrence of %d is %d", iFind, iRet);
    }

    free(ptr);

    return 0;
}
