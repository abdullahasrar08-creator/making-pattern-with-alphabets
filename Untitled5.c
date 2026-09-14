#include<stdio.h>
int main(){
    int i,j,n=5;
    char ch;

    for(i=1;i<=n;i=i+1){
        ch='A';
        for(j=1;j<=i;j=j+1,ch++){

            printf("%c",ch);

        }
        printf("\n");
    }
    return 0;
}
