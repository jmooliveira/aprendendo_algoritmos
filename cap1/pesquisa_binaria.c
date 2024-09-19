#include <stdio.h>

int binary_search(int *list, int numb, int len);

int main(void)
{
    int list[10] = {1, 3, 4, 6, 8, 10, 11, 15, 19, 20};
    int number;
    int length = 10;

    scanf("%d", &number);
    
    if (binary_search(list, number, length))
        printf("finded\n");
    else
        printf("can't find\n"); // not found

    return 0;
}

int binary_search(int *list, int numb, int len)
{
    int start = 0;
    int count = 0;
    int end = len - 1;

    while(start <= end)
    {
        int middle = (start + end) / 2; // para evitar overflow alterar para "s"tart + (end - start) / 2"
        if (numb == list[middle])
            return 1;
        else if (numb > list[middle])
            start = middle + 1;
        else
            end = middle - 1;
    }
    
    return 0;
}