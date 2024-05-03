#include <stdio.h>

int main()
{
    printf("Các số nguyên có 2 chữ số và là bội của 7:\t");
    for (int i = 10; i <= 99; i++)
    {
        int du = i % 7;
        if (du == 0)
        {
          printf("%d ", i);
        }
    }

  return 0;
}
