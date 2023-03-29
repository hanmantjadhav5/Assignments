//  Accept N numbers from user and accept Range, Display all elements from that range

#include<stdio.h>
#include<malloc.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int i=0, iCnt=-1;

    for(i=0; i<iLength; i++)
    {
        if(Arr[i]>=iStart && Arr[i]<=iEnd)
        {
            printf(" %d ",Arr[i]);
        }
    }
    return;
}

int main()
{
    int iSize=0, iCnt=0, iValue1=0, iValue2=0;
    int iLength=0;
    int *ptr = NULL;

    printf("Enter the Number Of Elements : ");
    scanf("%d", &iSize);

    printf("Enter the starting point : ");
    scanf("%d", &iValue1);

    printf("Enter the ending point : ");
    scanf("%d", &iValue2);

    ptr = (int *)malloc(iSize*sizeof(int));

    if(ptr == NULL)
    {
        printf("Failed To Allocate Memory ");
        return -1;
    }

    printf("Enter %d Elements ", iSize);
    
    for(iCnt=0; iCnt < iSize; iCnt++)
    {
        printf("\nEnter The Element %d: ",iCnt+1);
        scanf("%d", &ptr[iCnt]);
    }
        
    Range(ptr, iSize, iValue1, iValue2);

    free(ptr);

    return 0;
}