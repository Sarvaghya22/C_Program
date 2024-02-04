#include<stdio.h>

int main()
{
    int n,k;
    int count_and=0;
    int count_or=0;
    int count_xor=0;
    scanf("%d %d",&n,&k);
    for(int a=1;a<n;a++)
    {
        for(int b=a+1;b<=n;b++)
        {
            if((a&b)>count_and)
            {
                if((a&b)<k)
                {
                    count_and=a&b;
                }
            }
            if((a|b)>count_or)
            {
                if((a|b)<k)
                {
                    count_or=a|b;
                }
            }
            if((a^b)>count_xor)
            {
                if((a^b)<k)
                {
                    count_xor=a^b;
                }
            }
        }
    }
    printf("%d\n%d\n%d",count_and,count_or,count_xor);
    
}
