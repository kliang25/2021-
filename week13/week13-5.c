#include <stdio.h>
void printfStar(int n)
{
    for (int i=0;i<n;i++) printf("*");
}
void printfSpace(int n)
{
    for (int i=0;i<n;i++) printf(" ");
}
int main()
{
    for (int i=1;i<10;i++){
    printfSpace(9-i);
    printfStar(i);
    printf("\n");
    }
}

