#include<stdio.h>
#include<string.h>
int main(){
    int n,i, x=0;
    char str[50];
    scanf("%d\n", &n);


    for( i=0; i<n; i++)  {
        gets(str);

        if ( (str[0]=='-'&&str[1]=='-') || (str[1]=='-'&&str[2]=='-')){
            x--;
        }
        if ( (str[0]=='+'&&str[1]=='+') || (str[1]=='+'&&str[2]=='+')){
            x++;
        }

    }
    printf("%d", x);

}

