
/*
* File: Buoi_2-DaoNguocChu.c
* Author: Huy Nguyen
* Date: 24/03/2023
* Description: This is the file for reversing words in a sentence
*/

#include <stdio.h>
#include <stdint.h>

char string[50]="He said he wanted to go to the beach";

uint8_t count (char *arr)
{
    uint8_t count = 0;
    while (arr[count] != '\0')
    {
        count++;
    }
    return count++;
}

void reverse(char *arr)
{
    char temp ;
    uint8_t x = 0;
    uint8_t y;
    uint8_t n = count(arr);

    for(int i=0,j=n-1;i<j;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    //x = 0;
    while (x < n) {
        y = x;
        while (arr[y] != ' ' && arr[y] != '\0') {
            y++;
        }
        
        for (int k = x, l = y - 1; k < l; k++, l--) {
            temp = arr[k];
            arr[k] = arr[l];
            arr[l] = temp;
        }
        x = y + 1;
    }
    
}


int main(int argc, char const *argv[])
{
    count(string);
    reverse(string);
    printf("%s",string);
}
