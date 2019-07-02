#include<iostream>
using namespace std;

void  PD(int n)
{
    if(n==0)
    {
        return;

    }
    PD(n-1);
    cout<<n<<", ";
}

void PDI(int n)
{
  if(n==0)
  {
    return;
  }
  cout<<n<<",";
  PDI(n-1);
  cout<<n<<",";
}

int factorial(int n)
{
  if(n==0)
  {
    return 1;
  }
  int ans=n*factorial(n-1);
  return ans;

}

//time complexity o(n)
int power(int x,int n)
{
  if(n==0)
  {
    return 1;
  }
  int ans=x*power(x,n-1);
  return ans;

}

//improved answer i.e. time complexity log(n) 
int powerimproved(int x,int n)
{
  if(n==1)
  {
    return x;
  }
  int ans=powerimproved(x,n/2);

  if(n%2==0)
  {
    return ans*ans;
  }
  else
  {
    
    return ans*ans*x;
    
  }
  
}

int main()
{
  PD(5);     cout<<endl;
  PDI(5);    cout<<endl;
  cout<<factorial(5)<<endl;
  cout<<power(5,3)<<endl;
  cout<<powerimproved(5,2)<<endl;

  return 0;  
}