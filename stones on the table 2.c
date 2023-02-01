#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    int a=0,n,i;
    scanf("%d",&n);
    char s[50];
    scanf("%s",&s);
    for(i=1;i<n;i++){
        if(s[i-1]==s[i]){
            a++;
        }
    }printf("%d",a);
    return 0;
}

