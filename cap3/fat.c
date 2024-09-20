#include <stdio.h>

int fat(int number);

int main(void)
{
    int n;

    scanf("%d", &n);
    printf("%d", fat(n));

    return 0;
}

int fat(int number)
{
    if (number == 0 || number == 1)
        return 1;
    else
        return number * fat(number - 1);
}