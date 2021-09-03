#include<stdio.h>
#include<string.h>
int main(){
    int temp, x,count = 0;
    int input[11];
    input[10] = 47;
    for(int i = 0; i<10; i++){
        scanf("%d",&input[i]);
        input[i] = input[i] % 42;
    }
    for(int y=0;y<10;y++){
		for(int z=y+1;z<10;z++){
			if(input[y]>input[z]){
				temp=input[z];
				input[z]=input[y];
				input[y]=temp;
			}
		}
	}  
    for(int i=0;i<10;i++){
        if(input[i]!=input[i+1]){
            count += 1;
        }
    }
    printf("%d",count);

    return 0;
}