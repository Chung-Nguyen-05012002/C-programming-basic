#include<stdio.h>
int main ()
{
	int i, n, SBT , SNN, SPT = 1;
	
	printf("nhap so bo test :");
	scanf("%d", &SBT);
	 for(i = 1; i <= SBT; i++)
	 {  
	 printf("test %d\n", i);
	 	printf("nhap so phan tu cua day : ");
	 	scanf("%d", &n);
	    int a[n], dem[n];
	 	for(int b = 1; b <= n; b++)
	 	{
	 		dem[n] = 1;
		 }
		 	printf("nhap  cac phan tu :\n");
	 	for(int j = 1; j <= n; j++)
	 	{
	 		scanf("%d", &a[j]);
		 }
	 for( int j = 1; j <= n ; j++)
	 {
	 	for (int m = j; m <= n; m++)
	 	{
	 		if (m = j)
	 		{
	 			continue;
			 }
			 if ( a[m] > a[m-1])
			 {
			 	dem[j] = dem[j] + 1;
			 }
		}
	}
	int max = dem[1];	 
	for (int e = 1; e <= n;e++)
	{
		if (dem[e] > max)
		{
			max = dem[e];
		}
	}
	printf("do dai cua doan tang dai nhat la %d\n", max);
    for(int e = 1; e <= n ; e++)
    {
    	if(max == dem[e])
    	{
    		for(int j = e;j<= n; j++)
    		{
    			if( j == e)
    			{
    				printf("%d", a[j]);
    				continue;
				}
				if ( a[j] > a[j - 1])
				{
					printf("%d", a[j]);
				}
				else{
					break;
				}
			
			}
		}
	}
	 }
	return 0;
}
