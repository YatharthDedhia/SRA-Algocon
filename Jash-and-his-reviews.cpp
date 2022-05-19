#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int n,i,j,k,l,counter=0,sum=0;
    cin>>n;
    int restlist[n],count[n];

    for(i=0;i<n;i++)
    {
        cin>>restlist[i];
    }

    for(j=0;j<n;j++)
    {
        for(k=0;k<n;k++)
        {
            if(restlist[j]==restlist[k])
            {
                counter++;
                count[j]=counter;
            }
        }
        counter = 0;
    }

    for(l=0;l<n;l++)
    {

        sum += count[l];
        if(count[l]==1)
        {
            cout<<restlist[l]<<" ";
        }
    }
    
    if(sum%2 == 0)
    {
        cout<<0;
    }
    return 0;   
}
