#include<stdio.h>

void main()
{
    // loops
    // for
    // while
    // do-while
    int iterationNumber;
    printf("Number of times: ");
    scanf("%d", &iterationNumber);
    int i = 0;
    for (i = 0; i < iterationNumber; i++) //1.variable init 2condition checking 3.iteration
    {
        printf("\nLoops working in this much times: %d", i);
        /* code */ // Statements
    }
    
    i = 0;
    while (i < iterationNumber)
    {
        /* code */
        printf("\nWhile Loops working in this much times: %d", i);
        i++;
    }
    i = 0;
    do
    {
        printf("\nLoops working in this much times: %d", i);
        ++i;
        /* code */
    } while (i < iterationNumber);
    
}