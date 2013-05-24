#include <stdio.h>
int main()
{
    int v=7;
    int num=0;
    while (v!=0)
    {
        if(v%2==1)
            num++;
        v=v/2;
    }
    printf("%d",num);
}