//sneha diwan
//entc B2
//23070123126
//experiment 8
#include<iostream>
using namespace std;
int main()
{
    int temp[3][3],i,j,k,l;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"enter element- ("<<i<<j<<"): ";
            cin>>temp[i][j];
        }
    }
    for(k=0;k<3;k++)
    {
        for(l=0;l<3;l++)
        {
            cout<<temp[k][l];
            cout<<" ";
        }
    }    
    return 0;
}
/*
Output 

enter element- (00): 1
enter element- (01): 2
enter element- (02): 3
enter element- (10): 4
enter element- (11): 5
enter element- (12): 6
enter element- (20): 7
enter element- (21): 8
enter element- (22): 9
1 2 3 4 5 6 7 8 9 


=== Code Execution Successful ===


*/
