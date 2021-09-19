#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int n, a=0, b=0,g=0,M;
    cin >> n;
    string guess;
    cin >> guess;
    char A[] = {'A','B','C'}, B[] = {'B','A','B','C'}, G[] = {'C','C','A','A','B','B'};
    for(int i = 0; i<n; i++){
        if(A[i%3] == guess[i])a++;
        if(B[i%4] == guess[i])b++;
        if(G[i%6] == guess[i])g++;
    }
    M = max(a,max(b,g));
    cout << M << endl;
    if(M == a)cout<<"Adrian"<<endl;
    if(M == b)cout<<"Bruno"<<endl;
    if(M == g)cout<<"Goran";
    return 0;
}