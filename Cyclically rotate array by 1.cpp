
//User function Template for C++

void rotate(int a[], int n)
{
    int last=a[n-1];
    
    //shift from a2 to an-1 by 1 ahead
    for(int i=n-2;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0]=last;
}
