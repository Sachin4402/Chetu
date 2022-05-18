#include<iostream>
using namespace std;

void Fun(int a[],int size ,int *max,int *min)
{  int i;
    *max = *min =a[0];
    for(i=1;i<size;i++)
    {
        if(a[i]<*min)
       *min=a[i];
     if(a[i]>*max)
     *max=a[i];
}
 
}
int main()
{  int a[]={56,2,3,4,54,32,02,21,56,1,8,9,7,5,3,2,14,54,5,2,2,22};
    int min,max;
    int size=sizeof(a)/sizeof(a[0]);
    Fun(a, size, &max, &min);
    cout<<"Maximum Value  "<<(max)<<endl;
 cout<<"Minimum Value  "<<(min);
    return 0;
    
}
