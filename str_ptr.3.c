#include<stdio.h>
void main()
{
    char st[5][20],*p[5];
    int i;

    printf("Enter 5 strings: ");
    for(i=0; i<5; ++)
        gets(st[i]);
    printf("\nDisplay 5 strings: ");

    for(i=0; i<5; i++)
    {
        p[i]=&st[i];
        puts(p[i]);

    }
    getch();
}
