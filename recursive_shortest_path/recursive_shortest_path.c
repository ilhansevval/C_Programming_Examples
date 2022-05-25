
#include<stdio.h>
#include <time.h>

		 
	int MainArray[10][10] = {
					 {1,0,1,1,1,1,1,1,0,1},
					 {1,1,1,1,0,1,0,1,0,0},
					 {1,0,0,1,0,1,0,0,0,1},
					 {1,1,1,1,0,1,0,1,0,1},
					 {0,1,1,1,0,1,0,1,0,1},
					 {0,0,1,1,1,0,0,1,0,0},
					 {1,1,0,1,0,0,0,1,1,1},
					 {0,1,1,1,1,1,1,1,1,1},
					 {1,1,1,1,1,1,0,1,0,1},
					 {1,0,0,1,1,1,1,0,0,1},
					 };

					 
    int CntrlArray[10][10] =	{
                     {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0},
					  };


int FindWay(int x , int y , int m, int n,int MainArray[10][10] )
{
    
    if(CntrlArray[x][y]==1){
        return 0;
    }
    
	if(x == m-1 && y == n-1)
	{
		CntrlArray[x][y] = 1;
		return 1; 
	}
	
	if(x>=0 && x<m && y>=0 && y<n && MainArray[x][y]==1)
	{

		CntrlArray[x][y] = 1; 
		
		if(FindWay(x+1,y,m,n,MainArray) == 1)  
		{		
			return 1;
		}
		

		if(FindWay(x,y+1,m,n,MainArray) == 1) 
		{
			return 1;
		}
		
		if(FindWay(x-1,y,m,n,MainArray) == 1)  
		{		
			return 1;
		}
		

		if(FindWay(x,y-1,m,n,MainArray) == 1) 
		{
			return 1;
		}


		CntrlArray[x][y] = 0;	
	
	}

	return 0;
}



int CikisVarMi(int m,int n,int MainArray[10][10])
{
	if(MainArray[m-1][n-1] == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int main ()
{
/*	int MainArray[10][10];
	int rastgele;
	int a=0,b=0;
	srand(time(NULL));
	for(a=0;a<10;a++){
		for(b=0;b<10;b++){
			rastgele=rand()%2; 
			MainArray[a][b];
		}
		
	}*/
	int i , j;

/*	for( i = 0; i<10 ; i++)
	{
		for(j = 0; j<10 ; j++)
		{
			printf("%d \t",MainArray[i][j]);
		}	
		printf("\n");
	}*/
	
	
	
	if(CikisVarMi(10,10,MainArray) == 1 )
	{
		printf("\nNO EXIT");
	}
	

	
	else
	{
		for( i = 0; i<10 ; i++)
		{
			for(j = 0; j<10 ; j++)
			{
			printf("%d \t",MainArray[i][j]);
			}	
		printf("\n");
		}
		
		
		FindWay(0,0,10,10,MainArray);
		
		 printf("\n");
		printf("En Kisa Yol\n");
		
	    for( i = 0; i<10 ; i++)
	    {
		    printf("\n");
		    for(j = 0; j<10 ; j++)
		    {
		     printf("%d",CntrlArray[i][j]);
		    }
	    }
	    
	    printf("\n");
	    printf("\n");
	    for(i=0 ; i<10 ; i++)
	    {
	    	for(j=0;j<10;j++)
	    	{
	    		if(CntrlArray[i][j] != 0)
	    		printf("konum:  [%d] [%d] \n",i,j);
			}
		}
	}
}

