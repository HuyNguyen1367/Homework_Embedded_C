#include <stdio.h>

char* number[] = {"khong","mot","hai","ba","bon","nam","sau","bay","tam","chin"};
char* tendem[] = {"","muoi","tram","nghin","muoi","tram","trieu"};

int count(int temp)
{
    int n=0;
   while (temp != 0) {
      temp /= 10;
      n++;
   }
   return n;
}

int nhapso()
{
    int n=0;
    printf("Nhap vao so ban muon : \n");
    scanf("%d",&n);
    return n;
}

int main(int argc, char const *argv[])
{
    int num=nhapso();
    int n = count(num);
    int temp = 0;
    int i=0;


    int arr[n];
    while(num !=0)
    {
        arr[i] = num % 10;
        num /= 10;
        i++;
    }

    for(int i=n-1 ; i>=0 ; i--)
    {
        printf("%s %s ",number[arr[i]],tendem[i]);
    }

    return 0;
}
