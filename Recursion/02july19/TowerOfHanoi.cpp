#include<iostream>
using namespace std;
//tower of hanoi
//
void TOH(int n,int st,int dt,int ht)
{
    if(n==0)
    {
        return;
    }
    TOH(n-1,st,ht,dt);           //moving n-1 shells from st to original helper tower(faith)
    cout<<n<<"["<<st<<"->"<<dt<<"]"<<endl;  //us moving 1 shell fro original st to original dt
    TOH(n-1,ht,dt,st);         //moving the n-1 shells in original ht(use as st) to original dt using original st(as ht)
}

int main()
{
    TOH(3,1,2,3);

}