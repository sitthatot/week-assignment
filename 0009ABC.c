#include<stdio.h>
int a,b,c,temp;
ascending(){
if(a>c){
		temp = a;
		a = c;
		c = temp;
	}
	if(b>c){
		temp = b;
		b = c;
		c = temp;
	}
    if(a>b){
        temp = a;
        a = b;
        b = temp;
    }
}
int main(){
    char input[3];
	scanf("%d %d %d",&a,&b,&c);
    scanf("%s",input);
        ascending();
        for(int i = 0; i<=3-1;i++){
            if(input[i] == 'A'){
                printf("%d ",a);
            }
            else if(input[i] == 'B'){
                printf("%d ",b);
            }
            else if(input[i] == 'C'){
                printf("%d ",c);
            }
        }
        
	
	return 0;
}