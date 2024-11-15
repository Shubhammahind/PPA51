#include <stdio.h>
#include <stdlib.h>

void DigitSum(int Arr[], int iLength)
{
    int iCnt = 0, iDigit = 0, iSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = 0;
        while(Arr[iCnt] != 0)
        {
            iDigit = Arr[iCnt] % 10;
            iSum += iDigit;
            Arr[iCnt] = Arr[iCnt] / 10;

        }

        printf("%d ",iSum);
        
    }

}

int main()
{
    int iSize = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);



    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements : \n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n",iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    DigitSum(p,iSize);
    


    free(p);


    return 0;
}