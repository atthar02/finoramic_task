int power(int x, int n, int d) 
{
 int temp;
 long long a=x%d;
 long long p=1;
    if(x==0)
       return 0;

    if (n==0)
       return 1%d;
   
	while(n>0) 
	{	
    	if (n%2==1)
		{
        	p=(p*a)%d;
	    	n--;       
		} 
		else 
    	{
      		a=(a*a)%d;
        	n=n>>1;
		}

	}
	if(p<0)
	{
    	p=(p+d)%d;
	}

return (int)p;
}
