#include<iostream>
using namespace std;
int main(){
    int arr[11][11]{
        {95,68,95,42,65,31,42,51,42,68},
        {59,74,21,35,62,14,21,35,26,28},
        {29,24,16,25,42,36,25,16,24,25},
        {32,12,36,24,15,32,16,95,75,85},
        {62,43,19,86,24,37,19,65,53,28},
        {64,29,21,53,24,16,58,75,14,25},
        {35,62,95,86,47,85,78,14,63,29},
        {86,47,68,32,12,36,69,86,74,48},
        {46,26,53,69,78,46,14,21,34,26},
        {38,69,47,28,34,16,24,28,59,68}
    };
    cout<<"*****************************************************\n";
    cout<<"Find the number in array that are lower than the side\n";
    cout<<"*****************************************************\n";
    for(int i = 0; i<10; i++){
        if(arr[i][0] < arr[i][1]){
                //printf("%d ",arr[i][0]);
                printf("number = %d at index of (%d,%d)\n",arr[i][0],i,0);
            }
        for(int j = 1; j<9; j++){
            if(arr[i][j] < arr[i][j-1] && arr[i][j] < arr[i][j+1]){
                //printf("%d ",arr[i][j]);
                printf("number = %d at index of (%d,%d)\n",arr[i][j],i,j);
            }
        }
        if(arr[i][9] < arr[i][8]){
            //printf("%d ",arr[i][9]);
                printf("number = %d at index of (%d,%d)\n",arr[i][9],i,9);
            }
    }
    return 0;
}