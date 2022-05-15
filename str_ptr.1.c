#include<stdio.h>
void main()
{
    const int arraySize = 10;
    int i = 0;
    int *arrayPtr = NULL;


    arrayPtr = (int *) malloc(arraySize *sizeof(int));
    if(arrayPtr== NULL)
    {
        printf("Halting: Unable to allocate array.\n");
        exit(1);
    }

    for(i=0; i<10; i++)
        scanf("%d",(arrayPtr + i));


    for(i=0; i<10; i++)
        printf("%d",*(arrayPtr + i));

    free(arrayPtr);
    arrayPtr=NULL;

}
