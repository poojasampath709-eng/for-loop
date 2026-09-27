#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int r=0;r<n;r++)
    {
        for(int c=0;c<n;c++)
        {
            printf("*",r);
        }
        printf("\n");
    }
    return 0;
}
    