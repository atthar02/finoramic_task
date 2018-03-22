int isValidSudoku(const char** A, int n1)
 {
    int *x=(int*)malloc(sizeof(int)*9);
    int i,j,k,m;
    for(i=0;i<n1;i++)
	{
    	for(j=0;j<9;j++)
		{
    	    x[j]=0;
    	}
    	k=0;
    	while(A[i][k]!='\0')
    	{
    	   if(A[i][k]=='.');
           else
           {                                              
               if(x[A[i][k]-'1']>0)
                {
                    return 0;
                }
               x[A[i][k]-'0'-1]++;
           }
        	k++;
       }
   }
   
   for(i=0;i<9;i++)
   {
    	for(j=0;j<9;j++)
    	{
           x[j]=0;
        }
    	k=0;
       	while(k<n1)
        {
           if(A[k][i]=='.');
          
           else
           {
                if(x[A[k][i]-'1']>0)
                {
                    return 0;            
                }
           		x[A[k][i]-'1']++;
           }
        	k++;
       }
      
   }
   m=0;
   
   for(i=0;i<n1;i=i+3)
   {
       for(m=0;m<9;m=m+3)
       {
            for(j=0;j<9;j++)
            {
                x[j]=0;
            }
       
            for(j=i;j<3+i;j++)
            {
               for(k=m;k<3+m;k++)
               {
                    if(A[j][k]!='.')
                    {
                        if(x[A[j][k]-'1']>0)
                        {
                            return 0;
                        }
                		 x[A[j][k]-'1']++;
                    }
               }    
           }
          
        }
       
   }
   return 1;
}

