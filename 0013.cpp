#include<stdio.h>
int main(){
    int n[20], sum = 0;
    for(int i = 0; i<9; i++){
        scanf("%d",&n[i]);
        sum = sum + n[i];
    }
    for(int i = 0; i<9; i++){
        for(int j=i+1;j<9;j++){
            if(sum - 100 == n[i]+n[j]){
                for(int k=0;k<9;k++){
                    if(k==i || k==j){
                        continue;
                    }
                   printf("%d\n", n[k]);
                }
                return 0;
            }
            
        }
    }
    return 0;
}