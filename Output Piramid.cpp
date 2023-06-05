#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, rows, k = 0;
    printf("Masukkan Batasan Angka : ");
    scanf("%d", &rows);

    for (a = 1; a <= rows; a++)
    {
        for (b = 1; b <= rows - a; b++)
        {
            printf(" ");
        }
        for (k = 1; k <= (2 * a - 1); k++)
        {
            printf("%d", a);
        }
        printf("\n");
    }
    getch();
    return 0;
}


