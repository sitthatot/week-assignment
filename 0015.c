#include<stdio.h>
int main(){
    int n[3];
    for(int i = 0; i<3; i++){
        scanf("%d",&n[i]);
    }

    if(n[1] - n[0] >= n[2] - n[1]){
        printf("%d",n[1] - n[0] - 1);
    }else{
        printf("%d",n[2] - n[1] - 1);
    }
    return 0;
}