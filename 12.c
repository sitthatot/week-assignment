#include<stdio.h>
int main(){
    printf("This program will sum 2 of the greatest number!\n");
    printf("Enter 3 number saperately: ");
	int a,b,c,temp;
	scanf("%d %d %d",&a,&b,&c);
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
        printf("solution: %d + %d\n",b,c);
		printf("answer: %d",b+c);
	
	return 0;
}