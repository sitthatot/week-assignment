#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
unsigned long decimal = 0, weight = 1,rem;
int main(){
    int binary;
    int array[99];
    char answer = 'y';
    int isPlay = 1;
    int collect = 0;
    while(answer == 'y')
    { 
        printf("Please enter your 8 digits to decode the word: ");
        scanf("%d",&binary);
        for(int i = 0; i< 8; i++)
        {
            rem = binary % 10;
            decimal = decimal + rem*weight;
            binary = binary / 10;
            weight = weight*2;
        }
        array[collect] = decimal;
        collect++;
        decimal = 0;
        weight = 1;
        printf("Is there another 8 sets of numbers? y/n: ");
        scanf(" %c", &answer);  
    }
    for(int i = 0; i<collect; i++)
    {
        printf("%c",array[i]);
    }  
    return 0;
}