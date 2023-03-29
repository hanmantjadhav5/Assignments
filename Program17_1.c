//  Accept N numbers from user and return the largest number

#include<stdio.h>
#include<stdlib.h>


int Maximum(int Arr[], int iLength){

    int iMax =0;

    for (int i = 0; i < iLength; i++)
    {
        if(Arr[i] > iMax ){

            iMax = Arr[i];
        }
    }
    return iMax;
}

int main(){

    int iSize = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    ptr = (int*)malloc(iSize*sizeof(int *));

    if (ptr == NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }
    
    printf("Enter %d elements\n ", iSize);

    for(int iCnt = 0; iCnt< iSize; iCnt++){

        printf("Enter element number %d : ", iCnt+1);
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Maximum(ptr, iSize);

    printf("Largest number is %d", iRet);

    free(ptr);

    return 0;
}
