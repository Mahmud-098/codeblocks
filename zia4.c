#include<bits/stdc++.h>
using namespace std;
int is_prime(int n)
{
    int i=2;
    if(n==2 ) return 1;
    if(n==1)return 0;
    for( ; i<=n/2; i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    char str[2000];
    int t,i=1,j,k,l,m,z=1,y=-1;
    while(scanf("%d",&t)==1)
    {
        getchar();
        while(t--)
        {
            gets(str);
            int ara[2000];
            char ara2[2000];
            l=0;
            for(j=0; j<strlen(str); j++)
            {
                int con = 0;
                if(j==-1+strlen(str))continue;
                for(k=j+1; k<strlen(str); k++)
                {
                    if(str[j]=='.')continue;
                    if(str[j]==str[k])
                    {
                        con++;
                        str[k]='.';
                    }

                }
                if(str[j]!='.')
                {
                    ara[l]=con+1;
                    ara2[l]=str[j];
//printf("%c %d\n",ara2[l],ara[l]);
                    l++;
                }
            }
            ara2[l]=0;
            m=0;
            printf("Case %d: ",z);
            for(; m<sizeof(ara)/sizeof(ara[0]) && ara2[m]!=0; m++)
            {
                if(is_prime(ara[m])==1)
                    {printf("%c",ara2[m]);
                    y=0;
                    }

            }
            if(y==-1)printf("%s","empty");

            printf("\n");
            z++;
        }
    }
        return 0;
}


