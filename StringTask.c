#include<stdio.h>
#include<string.h>
int main(){
    int len, i=0,j=0;
    char s[100];
    gets(s);
    len= strlen(s);
    for(i=0; i<len; i++)
    {
        if(s[i]!='a' && s[i]!='A' && s[i]!='e' && s[i]!='E' && s[i]!='i' && s[i]!='I' && s[i]!='o' && s[i]!='O' && s[i]!='u' && s[i]!='U' && s[i]!='y' && s[i]!='Y')
        {
            if(s[i]<='Z') s[i]+=32;
            printf(".%c",s[i]);
        }
    }
    printf("\n");
    return 0;
}


