#include <stdio.h>
#include <conio.h>
int main()
{
   int main();

    printf("\t\t Pelita Bangsa \n\n");
    printf("=========================================\n");
    printf("Nama    : Rafi Alwan Setyawan \nNIM     : 311810325 \nKelas   : TI.18.D7 \n");
    printf("=========================================\n");
    printf ("Kelipatan 7 yang Habis dibagi 2 dari 1-50\n\n");
    int i=7;
    while(i<50)
    {
        if (i%2==0&&i%7==0)
        {
            printf("\n%d",i);
        } i++;
    }
    getch();
}
