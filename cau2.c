#include <stdio.h>
#include <math.h>

int KtraSCP(int a)
{
    int sqr = sqrt(a);
    if(sqr * sqr == a)
        return a;
    else
      return 0;
}

int DemSCP(int n)
{
    int tong = 0;
    for (int i = 1; i < n; i++)
    {
        if(KtraSCP(i))
        {
            printf("\t %d", i);
            tong = tong + 1;
        }
    }
    printf("\nTổng số chính phương: %d", tong);
    return 0;
}


int main() 
{
    int n;
     printf("Nhập vào số N: \n");
    scanf("%d", &n);
    printf("Các số chính phương: \n");
    DemSCP(n);
  return 0;
}
