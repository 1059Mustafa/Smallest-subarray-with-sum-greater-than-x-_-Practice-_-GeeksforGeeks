int sb(int arr[], int n, int x)
{
    int j=0,i=0;
    int sum=0;
    int max_sum=INT_MAX;
    while(i<n)
    {
        sum=sum+arr[i];
        if(sum<=x)
        {
            i++;
        }
        if(sum>x)
        {
            while(sum>x)
            {
                max_sum=min(max_sum,i-j+1);
                sum=sum-arr[j++];
            }
            i++;
        }
        
    }
    return max_sum;
}
