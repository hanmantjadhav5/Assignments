// Accept N numbers from user and display all such numbers which contains 3 digits in it

#include<stdio.h>
#include<stdlib.h>

void ThreeDigitNumber(int Arr[],int iLen)
{
    int i=0, Temp=0, Cnt=0;

    for(i=0;i<iLen;i++)
    {
        Temp=Arr[i];
        while(Temp>0)
        {
            Cnt++;
            Temp/=10;
        }
        
        (Cnt!=3)?Cnt=0:printf(" %d ",Arr[i]),Cnt=0;
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

    ThreeDigitNumber(ptr, iSize);

    free(ptr);

    return 0;
}

 


