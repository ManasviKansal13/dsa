//Program for implementation of Multiple stack in one Array
#include<bits/stdc++.h>
using namespace std;
void MS_Initialize(int n,int m,int *t,int z)
{
    // for(int i=0 ; i<m ; i++)//top of each stack
    // {
    //     t[i]=(n/m)*i-1;
    // }
    *(t+z)=(n/m)*z-1;

}//MSpush(a,t,0,n,m);
void MSpush(int *a,int *t,int x,int n,int m,int z){
    if(*(t+x)==(n/m)*(x+1)-1){
        cout<<"Stack Overflows";
        exit(1);
    }
    else{
        // a[t[i]]=x;
        // t[i]++;
        *(t+x)=*(t+x)+1;
        *(a+(*(t+x)))=z;
    }
}
int MSpop(int *a,int *t,int x,int n,int m )
{
    if(*(t+x)==(n/m)*x-1)
    {
        cout<<"Stack underflows";
        exit(1);
    }
    int v=*(a+(*(t+x)));//a[t[i]];
    *(t+x)=*(t+x)-1;
    return v;
}
int main()
{
    int n,m,z;
    cout<<"Enter the size of array :- ";
    cin>>n;
    int a[n];
    cout<<"Enter number of stack :- ";
    cin>>m;
    int t[m];//array to store the top of each stack
    for(int i=0;i<m;i++)
    {
        MS_Initialize(n,m,t,i);
    }
    MSpush(a,t,0,n,m,7);
    MSpush(a,t,1,n,m,7);
    MSpush(a,t,2,n,m,7);
    MSpush(a,t,2,n,m,8);
    // MSpop(a,t,1,n,m);//MSpop(int *a,int *t,int x,int n,int m,int z )
    // MSpop(a,t,2,n,m);
    printf("%d\t",MSpop(a,t,0,n,m));
    printf("%d\t",MSpop(a,t,1,n,m));
    printf("%d\t",MSpop(a,t,2,n,m));
    printf("%d\t",MSpop(a,t,2,n,m));
}