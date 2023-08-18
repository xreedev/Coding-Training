#include<iostream>
using namespace std;

int main() {
    int i,j,r,c,a[100][100];
    cout<<"ENTER NUMBER OF ROWS:";
    cin >>r;
    cout <<"ENTER NUMBER OF COLUMNS:";
    cin >>c;
    cout <<"ENTER ARRAY ELEMENTS:";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {   cout<<"ENTER ELEMENT A["<<i<<"]["<<j<<"]:";
            cin>>a[i][j];
        }
    }
     cout<<"MAIN DIAGONAL ELEMENTS : "<<endl;
     for(i=0;i<r;i++)
    {
        
        for(j=0;j<c;j++)
        {   
            if(i==j)
            cout<<a[i][j]<<endl;
            
        }
    }
    
   
    
   return 0; 
    
}