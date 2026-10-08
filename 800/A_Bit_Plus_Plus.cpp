#include<stdio.h>

int main()
{
    int n,sum=0;
    char sym[10];
    scanf("%d",&n);
   while(n--)
   {
        scanf("%s",sym);
        if(sym[1]=='+')
        {
            sum++;
        }
        else if(sym[1]=='-')
        {
            sum--;
        }
        getchar();
   }

    printf("%d\n",sum);

    return 0;
}
