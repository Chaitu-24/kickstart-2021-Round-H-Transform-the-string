#include<stdio.h>
#include<string.h>
int func(char c1,char c2)
{
    int dif;
    if(c1>c2)
    dif=c1-c2;
    else
    dif=c2-c1;
    if(dif<26-dif)
    return dif;
    return (26-dif);
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int a=1;a<=t;a++)
  {
    char s[100001];
    char f[27];
    scanf("%s%s",s,f);
    int minsum=0;
    for(int i=0;i<strlen(s);i++)
    { 
        int mi=26;
        for(int j=0;j<strlen(f);j++)
        {
            int xy=func(s[i],f[j]);
            if(xy<mi)
            mi=xy;
            if(mi==0)
            break;
        }
        minsum+=mi;
    }
    printf("Case #%d: %d\n",a,minsum);
  }
}
