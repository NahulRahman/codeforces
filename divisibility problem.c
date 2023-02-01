#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        long long int a,b;
        scanf("%lld%lld",&a,&b);
        if(a%b==0)
            printf("0\n");
        else
            printf("%lld\n",b-(a%b));
    }return 0;
}
