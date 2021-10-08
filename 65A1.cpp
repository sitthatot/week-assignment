#include<iostream>
#include<string.h>
int main(){
    char input[999];
    scanf("%s",&input);
    int n = strlen(input);
    for(int j = 0; j<strlen(input); j++){
        for(int i = 0; i < n; i++)
        {
            printf("%c",input[i]);
        }
            printf("\n");
         n--;
    }
    return 0;
}