//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-8

//Program-2
#include<iostream>
using namespace std;

int main(){

    int m1, n1;

    cout<<"Enter the number of rows of Matrix-1: ";
    cin>>m1;

    cout<<"Enter the number of columns of Matrix-1: ";
    cin>>n1;

    int mat1[m1][n1];

    cout<<"Enter elements of Matrix-1: "<<endl;

    for(int i=0; i<m1; i++){
        for(int j=0; j<n1; j++){
            cin>>mat1[i][j];
        }
    }


    int m2, n2;

    cout<<"Enter the number of rows of Matrix-2: ";
    cin>>m2;

    cout<<"Enter the number of columns of Matrix-2: ";
    cin>>n2;

    int mat2[m2][n2];

    cout<<"Enter elements of Matrix-2:"<<endl;

    for(int i=0; i<m2; i++){
        for(int j=0; j<n2; j++){
            cin>>mat2[i][j];
        }
    }

     cout<<"Entered Matrix-1 is:"<<endl;
    for(int i=0; i<m1; i++){
        for(int j=0; j<n1; j++){
            cout<<mat1[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"Entered Matrix-2 is:"<<endl;
    for(int i=0; i<m2; i++){
        for(int j=0; j<n2; j++){
            cout<<mat2[i][j]<<"\t";
        }
        cout<<endl;
    }

    int mat_sum[m1][n1];
    if(m1==n2 && n1==m2){
        for(int i=0; i<m1; i++){
            for(int j=0; j<n1; j++){
        mat_sum[i][j]=mat1[i][j]+mat2[i][j];
            }
        }
    }
    else{
        cout<<"Addition can't be performed.";
    }

    cout<<"Sum of Matrices is:"<<endl;
    for(int i=0; i<m1; i++){
        for(int j=0; j<n1; j++){
            cout<<mat_sum[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}