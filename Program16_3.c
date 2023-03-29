// Accept N numbers from user and accept one another number as NO, return index of last occurrence of that NO

#include<stdio.h>
#include<malloc.h>

int FindNo(int Arr[], int iLength, int iNo)
{
    int i=0, iCnt=-1;

    for(i=0; i<iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            iCnt=i;
        }
    }
    return iCnt;
}

int main()
{
    int iSize=0, i=0, iFind=0, iRet=0;
    int *ptr = NULL;

    printf("Enter the Number Of Elements : ");
    scanf("%d", &iSize);

    printf("Enter the Number that you want to Find : ");
    scanf("%d", &iFind);

    ptr = (int *)malloc(iSize*sizeof(int));

    if(ptr == NULL)
    {
        printf("Failed To Allocate Memory ");
        return -1;
    }

    printf("Enter The Elements\n");
    
    for(i=0; i<iSize; i++)
    {
        printf("\nEnter The Element %d: ",i+1);
        scanf("%d", &ptr[i]);
    }
        
    iRet = FindNo(ptr, iSize, iFind);

    if(iRet==-1)
    {
        printf("There is no such number");
    }

    else
    {
        printf("Index number of Last occurrence of %d is %d",iFind,iRet);
    }
    
    free(ptr);

    return 0;
}