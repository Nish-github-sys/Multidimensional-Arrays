//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-8

//Program-1
#include<iostream>
using namespace std;

int main(){

    int m, n;

    cout<<"Enter the number of rows: ";
    cin>>m;

    cout<<"Enter the number of columns: ";
    cin>>n;

    int mat[m][n];

    cout<<"Enter elements of Matrix: "<<endl;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>mat[i][j];
        }
    }
    cout<<"Entered Matrix is:"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }


    return 0;
}