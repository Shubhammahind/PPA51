#include <stdio.h>
#include <stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0, iCount = 0;
    int Arr1[iLength];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        Arr1[iCnt] = Arr[iCnt];
        iCount = 0;
        while(Arr[iCnt] != 0)
        {
            Arr[iCnt] = Arr[iCnt] / 10;
            iCount++;   
        }
        if(iCount == 3)
        {
            printf("%d ", Arr1[iCnt]);
        }
      
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

    Digits(p,iSize);
    


    free(p);


    return 0;
}