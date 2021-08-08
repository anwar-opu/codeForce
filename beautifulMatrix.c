#include <stdio.h>
#include <stdlib.h>
int main() {
    int arr[5][5];
    int r,c;
    int rs,cs;
    int answer;
    for (int i = 0; i <5 ; i++) {
        for (int j = 0; j <5; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i <5; i++) {
        for (int j = 0; j <5; j++){
            if(arr[i][j]==1){
                arr[i][j]=0;
                r = i;
                c = j;
            }
        }
    }
    arr[2][2]=1;
    rs = abs(2-r);
    cs = abs(2-c);
    answer = rs + cs;
    printf("%d", answer);


    return 0;
}

