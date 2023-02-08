#include<bits/stdc++.h>
using namespace std;

void printlist(int *p,int n )
{
    for (int i=0;i<n;i++)
    cout<<p[i]<<endl;
}

void bubblesort(int *p,int n)
{
    for (int k=0;k<n-1;k++)
    {
         for (int i=0;i<n-1;i++)
    {
        if(p[i]>p[i+1]) swap (p[i],p[i+1]);
    }
    }
}

int main()
{
    int n=1000;
    int *a = new int[n];
    ifstream fin("1k.txt");

    for(int i=0;i<n;i++)
    {
        fin>>a[i];
    }
    printlist(a, n );
    bubblesort(a, n);
    printlist(a, n );



return 0;
}

