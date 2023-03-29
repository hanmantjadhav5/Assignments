// Accept N numbers from user and display summation of digits of each number

#include<stdio.h>
#include<stdlib.h>

void DigitSum(int Arr[],int iLen)
{
    int i=0,Temp=0,iSum=0;

    for(i=0; i<iLen; i++)
    {
        Temp=Arr[i];

        while(Temp>0)
        {
            iSum = iSum+ (Temp%10);
            Temp = Temp/10;
        }
        printf(" %d ",iSum);
        iSum=0;
    }
}

int main(){

    int iSize = 0, *ptr = NULL;

    printf("Enter number of elements \n ");
    scanf("%d", &iSize);

    ptr = (int*)malloc(iSize*sizeof(int *));

    if (ptr == NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }
    
    printf("Enter %d elements \n ", iSize);

    for(int iCnt = 0; iCnt< iSize; iCnt++){

        printf("Enter element number %d : ", iCnt+1);
        scanf("%d", &ptr[iCnt]);
    }

    DigitSum(ptr, iSize);

    free(ptr);

    return 0;
}
