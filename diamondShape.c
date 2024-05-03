#include<stdio.h>
int main(){
     int n,sp,hashDash;
    scanf("%d",&n);
    sp=n-1;
    hashDash=1;
    for(int i=1; i<=2*n-1; i++){
       for(int j=1; j<=sp; j++){
        printf(" ");
       }
      for(int j=1; j<=hashDash; j++){
        if(i%2==0){
            printf("-");
        }else{
            printf("#");
        }
    }
       if(i<=n-1){
        hashDash+=2;
        sp--;
       }else{
        hashDash-=2;
        sp++;
       }
       printf("\n");
    }
    return 0;
}