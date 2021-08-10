#include<stdio.h>
int main(){
    int n,m,count=0;
    int s[50];
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++){
        scanf("%d", &s[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(s[i]>=s[m-1] && s[i]>0)
            count++;
    }

    printf("%d\n",count);
    return 0;
}