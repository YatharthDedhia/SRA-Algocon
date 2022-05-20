#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t,i,j,k,l,m,z,x,hrsum,marksum,counter=0;
    int size =1000;
    int N[size],H[size],hours[size][size],marks[size][size],ans[size];
    cin>>t;

    //test case loop
    for(i=0;i<t;i++)
    {
        ans[i]=0;
        counter=0;
        //N H
        cin>>N[i]>>H[i];

        //Hours of each assignment loop
        for(j=0;j<N[i];j++)
        {
            cin>>hours[i][j];
        }

        //Marks of each assignment loop
        for(k=0;k<N[i];k++)
        {
            cin>>marks[i][k];
        }
        
//---------------INPUT OVER--------------------

        for(l=0;l<N[i];l++)
        {
            for(m=l+1;m<N[i];m++)
            {
                hrsum = hours[i][l]+hours[i][m];
                if(hrsum<=H[i])
                {
                    marksum=marks[i][l]+marks[i][m];
                    ans[i] = max(ans[i],marksum);
                    //cout<<anssumarr[l]<<endl;
                }
                else{continue;}
            }
        }

        for(z=0;z<N[i];z++)
        {
            if(hours[i][z]<H[i])
            {
                counter++;
            }
        }

        if(counter == 1)
        {
            for(x=0;x<N[i];x++)
            {
                if(hours[i][x]<H[i])
                {
                    ans[i]=marks[i][x];
                }
            }
        }
    }

    //printing ans
    for(i=0;i<t;i++)
    {
        cout<<ans[i]<<endl;
    }

    return 0;
}
