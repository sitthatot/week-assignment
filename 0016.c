#include<stdio.h>
#include<string.h>
int max;
who_is_max(int A,int B, int G){
    if( A>B && A>G){
        max = A;
        printf("%d\nAdrian\n",max);
    }else if(B>G && B>A){
        max = B;
        printf("%d\nBruno\n",max);
    }else if(G>A && G>B){
        max = G;
        printf("%d\nGoran\n",max);
    }else if(A==B && A==G && B==G){
        printf("%d\nAdrian\nBruno\nGoran\n", A);
    }else if(A==B){
        printf("%d\nAdrian\nBruno\n",A);
    }else if(B==G){
        printf("%d\nBruno\nGoran\n",B);
    }else if(A==G){
        printf("%d\nAdrian\nGoran\n",A);
    }
}
int main(){
    char Adrian[] = "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABC";
    char Bruno[] = "BABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABC";
    char Goran[] = "CCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABB";
    int n,A=0,B=0,G=0;
    char input[101];
    scanf("%d",&n);
    scanf("%s",&input);
    for(int i = 0; i<=strlen(input); i++){
        if(input[i] == Adrian[i]){
            A++;
        }
        if(input[i] == Bruno[i]){
            B++;
        }
        if(input[i] == Goran[i]){
            G++;
        }
    }
    who_is_max(A,B,G);
    return 0;
}
