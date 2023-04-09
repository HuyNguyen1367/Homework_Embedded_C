#include <stdio.h>

char arr[] = "mot ngay khong co em la mot ngay anh khong song,boi vi anh yeu em.";

int temp(char *arr)
{
    int count = 0;
    while(arr[count] != '\0')
    {
        count++;
    }
    return count++;
}

int my_strcmp(char *arr1,char *arr2)
{
    int n=temp(arr1);
    int ketqua = 0;
    for(int i=0;i<n;i++)
    {
        ketqua = arr1[i] - arr2[i];
        if(ketqua !=0)
        {
            break;
        }
    }
    return ketqua;
}

int main() {
    
    char count[150][150] ;
    int n = temp(arr);
    int countz = 0;
    int j=0;
    int freq[100];
    
    for (int i = 0; i < n; i++) {
        if(arr[i] == ' ' || arr[i] == ',' || arr[i] == '.')
        {
            countz++;
            j=0;
        }
        else
        {
            count[countz][j]=arr[i];
            j++;
        }
    }

    //printf("%s",count[i][j]);

    for(int i=0;i<countz;i++)
    {
        freq[i] = 0;
        for(int j=0;j<countz;j++)
        {
            if (my_strcmp(count[i], count[j]) == 0)
        {
            freq[i]++;
            //strcpy(words[j], "");
        }
        }
    }

    for(int i=0;i<countz;i++)
    {
        //if(freq[i]>1)
        printf("Chu %s xuat hien %d lan \n",count[i],freq[i]);
    }



    return 0;
}
