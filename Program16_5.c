// Accept N numbers from user and return product of all odd elements

#include<stdio.h>
#include<malloc.h>

int Product(int Arr[], int iLength)
{
    int i=0, iPr = 1;

    for(i=0; i<iLength; i++)
    {
        if(Arr[i]%2!=0)
        {
            (iPr==0)?iPr++:iPr;
            iPr = iPr*Arr[i];
        }
    }
    return iPr;
}

int main()
{
    int iSize=0, iCnt=0, iRet=0;
    int *ptr = NULL;

    printf("Enter the Number Of Elements : ");
    scanf("%d", &iSize);

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
        
    iRet = Product(ptr, iSize);

    printf("Product is %d ", iRet);

    free(ptr);

    return 0;
}