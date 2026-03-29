#include <stdio.h>

int main(){
    int a;
    int b;
    int r;
    
    scanf("%d",&a);
    scanf("%d",&b);
    
    while(1){
        r=a%b;
        if(r==0) break;
        a=b;
        b=r;
    }
    
    printf("GCB=%d",b);
}
