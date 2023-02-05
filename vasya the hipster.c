#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("%d ",b);
    }else{
        printf("%d ",a);
    }

    int ans=abs(a-b);
    printf("%d",ans/2);
    return 0;
}
