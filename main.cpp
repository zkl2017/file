#include <iostream>
using namespace std;
int A[12],i,j,t;
int main()
{  for(j=0;j<12;j++) cin>>A[j];
   for(i=0;i<11;i++)
       for(j=0;j<11-i;j++)
           if(A[j]<A[j+1])
           {t=A[j+1];A[j]=t;A[j+1]=A[j];}
   for(j=0;j<12;j++) cout<<A[j]<<endl;
   return 0;
}
