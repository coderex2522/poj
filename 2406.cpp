#if 0
//KMP
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
const int maxn=1000000+5;
int next[maxn];
char str[maxn];

void get_next(int len)
{
    int i=0,j=-1;
    next[0]=-1;
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
    while(scanf("%s",str)!=EOF&&strcmp(str,".")!=0)
    {
        int len=strlen(str);
        get_next(len);
        if(len%(len-next[len])==0)
            printf("%d\n",len/(len-next[len]));
        else
            printf("1\n");
    }
    return 0;
}
#endif // 1
