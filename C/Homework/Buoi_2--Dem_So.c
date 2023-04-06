#include <stdio.h>
#include <stdint.h>

uint8_t arr[]={3,4,2,3,4,2,4,5,2,4};
uint8_t n =10;

void arrange(uint8_t *arr)
{
    //uint8_t temp = arr[0];
    for(int i=0;i<10;i++)
    {
        uint8_t temp ;
        for(int j=i;j<10;j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j] = temp;
            }
        }
        //printf("%d\n",arr[i]);
    }
}

void show (uint8_t *arr)
{
    printf("Sap xep so tu lon den be : \n");
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
}

void counts (uint8_t *arr)
{
    uint8_t freq[n];
    uint8_t count;

    for (int i = 0; i < n; i++) {
        freq[i] = -1;
    }
    
    for(int i=0;i<n;i++)
    {
        count=1;
        
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
        {
            freq[i]=count; 
        }
        //freq[i]=count;      
    }


    printf("\n Phan tu \t So lan xuat hien\n");
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d \t\t %d\n", arr[i], freq[i]);
        }
    }
}

int main(int argc, char const *argv[])
{
    arrange(arr);
    show(arr);
    counts(arr);
    
}
