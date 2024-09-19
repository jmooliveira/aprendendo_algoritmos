#include <stdio.h>

int selection_sort(int *list);

int main(void)
{
    int array[10] = {9, 0, 5, 1, 8, 7, 4, 2, 6, 3};    

    for (int i = 0; i < 10; i++)
    {
        printf("%d%s", array[i], (i < 10 - 1) ? ", " : "\n");
    }
    selection_sort(array);
    for (int i = 0; i < 10; i++)
    {
        printf("%d%s", array[i], (i < 10 - 1) ? ", " : "\n");
    }

    return 0;
}

int selection_sort(int *list)
{
    int lower_value;
    int indice;

    for (int i = 0; i < 10; i++)
    {
        lower_value = list[i];
        indice = i;
        for (int j = i + 1; j < 10; j++)
        {
            if (list[j] < lower_value)
            {
                lower_value = list[j];
                indice = j;
            }
        }
        list[indice] = list[i];
        list[i] = lower_value;
    }
}