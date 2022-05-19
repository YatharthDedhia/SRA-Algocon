#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t,i,j,k,l,m,n;
    int N[t],H[t],hours[t][100],marks[t][100];
    cin>>t;

    //test case loop
    for(i=0;i<t;i++)
    {
        //N H
        cin>>N[i]>>H[i];

        //Hours of each assignment loop
        for(j=0;j<N[i];j++)
        {
            cout<<"Enter A"<<j+1<<" hours: ";
            cin>>hours[i][j];
        }

        //Marks of each assignment loop
        for(k=0;k<N[i];k++)
        {
            cout<<"Enter A"<<k+1<<" marks: ";
            cin>>marks[i][k];
        }
        
        cout<<endl<<N[i]<<endl<<H[i]<<endl<<hours[i][0]<<endl<<hours[i][1]<<endl<<marks[i][0]<<endl<<marks[i][1];
        /*for(n=0;n<N[i];n++)
        {
            if(hours[i][n]>H[i])
            {
                cout<<0;
            }
            else
            {
                cout<<1;
            }
        }*/
    }
    return 0;
}
