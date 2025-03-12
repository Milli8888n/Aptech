#include <stdio.h>
int main()
{
    char name[3] = {'T', 'A', 'M'};
    for (int i = 0; i < 3; i++)
    {
        printf("Char %d is %c\n", i, name[i]);
    }
}