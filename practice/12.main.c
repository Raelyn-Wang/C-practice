#include <stdio.h>

int main(){
    int GCD=1;
    int a;
    int b;
    
    scanf("%d",&a);
    scanf("%d",&b);
    
    int c;
    if(a>b){
        c=a;
    }else if(b>a){
        c=b;
    }else{
        c=a;
    }
    
    for(int i=1;i<=c;i++){
        if(a%i==0&&b%i==0){
            GCD=i;
        }
    }
    
    printf("GCD=%d",GCD);
    
    return 0;
}
