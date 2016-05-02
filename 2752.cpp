#if 0
//KMP
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
const int maxn=400000+5;
char str[maxn];
int next[maxn];
int num[maxn];
void get_next()
{
    int i=0,j=-1,len;
    len=strlen(str);
    next[i]=-1;
    while(i<len)
    {
        if(j==-1||str[i]==str[j])
        {
            i++;
            j++;
            next[i]=j;
        }
        else
            j=next[j];
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    while(scanf("%s",str)!=EOF)
    {
        int len=strlen(str);
        get_next();
        int j=0;
        for(int i=len;i!=0;i=next[i],j++)
        {
            num[j]=i;
        }
        for(int i=j-1;i>=0;i--)
        {
            if(i!=j-1)
                printf(" ");
            printf("%d",num[i]);
        }
        printf("\n");
    }
    return 0;
}
#endif // 1
