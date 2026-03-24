#include <stdio.h>

int main(){
    int a;
    int b;
    int r;
    
    scanf("%d",&a);
    scanf("%d",&b);
    
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    
    printf("GCB=%d",a);
}
