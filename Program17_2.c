//  Accept N numbers from user and return smallest number

#include<stdio.h>
#include<stdlib.h>


int Smallest(int Arr[], int iLength)           
{
    int iMin = Arr[0], iCnt =0;

    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

int main(){

    int iSize = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements \n ");
    scanf("%d", &iSize);

    ptr = (int*)malloc(iSize*sizeof(int *));

    if (ptr == NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }
    
    printf("Enter %d elements : ", iSize);

    for(int iCnt = 0; iCnt< iSize; iCnt++){

        printf("Enter element number %d : ", iCnt+1);
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Smallest(ptr, iSize);

    printf("Smallest number is %d", iRet);

    free(ptr);

    return 0;
}



