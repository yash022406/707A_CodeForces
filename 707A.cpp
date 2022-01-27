#include<iostream>
using namespace std;
int main(){
    int n,m,flag=0;
    cin>>n>>m;
    char a[n][m];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]=='C' ||a[i][j]=='M' ||a[i][j]=='Y'  ){
                flag=0;
                cout<<"#Color";
                return 0;
            }else{
                flag=1;
            }
        }
    }
    if(flag==1){
        cout<<"#Black&White";
    }
    return 0;
}