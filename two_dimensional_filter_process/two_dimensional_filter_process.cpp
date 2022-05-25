#include <stdlib.h>
#include <stdio.h>
#include <time.h>

main(){
	int m,n;
	do{
		printf("Please enter M value of matrix MxN\n");
		scanf("%d", &m);
		printf("Please enter N value of matrix MxN\n");
		scanf("%d", &n);
		if(m<5 || n<5){
			printf("The value of M or N cannot be less than 5\n");
		}
	}
	while(m < 5);
	
	
	int f[m][n];
	int g[m][n];
	
	for(int ii=0; ii<m ;ii++){
		for(int jj=0; jj<n; jj++){
			g[ii][jj]=0;
		}
	}
	
	srand(time(0)); 
	printf("***** F matrisi *****\n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			int rndm = (rand() % 256);
			f[i][j]=rndm;
			printf("%d\t",f[i][j]);
		}
		printf("\n");
	}printf("\n");
	
	
	int v[3][3];
	int t;
	for(int s=0; s < 3; s++){
		for(int k=0; k<3; k++){
			printf("Please enter an intager to v[%d][%d]; ", s,k);
			scanf("%d",&t);
			v[s][k]=t;
		}
	}
	printf("\n");
	printf("***** V matrisi *****\n");
	for(int xd=0; xd < 3; xd++){
		for(int xs=0; xs< 3; xs++){
			printf("%d\t", v[xd][xs]);
		}
		printf("\n");
	}printf("\n");
	
	int toplam=0;
	for(int x=0; x < 3; x++){
		for(int xx=0; xx< 3;xx++){
			for(int sa=0; sa<3; sa++){	
				for(int su=0; su<3; su++){
					toplam +=v[sa][su]*f[sa+x][su+xx];
				}	
			}
			g[x+1][xx+1]=toplam;
			toplam=0;
		}	
	}
	printf("***** G matrisi *****\n");
	for(int sss=0; sss < m; sss++){
		for(int kk=0; kk< n; kk++){
			printf("%d\t", g[sss][kk]);
		}
		printf("\n");
	}printf("\n");
	

	
	int tenpt[2][2];
	int r;
	for(int sq=0; sq < 2; sq++){
		for(int sk=0; sk<2; sk++){
			printf("Please enter an intager to tenpt[%d][%d]; ", sq,sk);
			scanf("%d",&r);
			tenpt[sq][sk]=r;
		}
	}
	
	int result=0;
	int sonuclar[16];
	int snc=0;
	int satir=0;int sutun=0;
	for(int xq=0; xq < m-1; xq++){
		for(int xxq=0; xxq < m-1;xxq++){
			for(int satir=0; satir<2; satir++){	
				for(int sutun=0; sutun<2; sutun++){
					result +=tenpt[satir][sutun]*g[satir+xq][sutun+xxq];				
				}	
			
			}
			sonuclar[snc++]= result;
			/*
			if(g[xq][xxq] == 0)
				g[xq][xxq] = result;
			*/
			result=0;
		}	
	}
	
	int ct=0;
	for (int sat=0; sat <5 ;sat++){
		for(int sut=0; sut < 5 ; sut++){
			if(sat==0 || sat==4){
				g[sat][sut]=sonuclar[ct++];
			}
			if(sat==1 || sat==2 || sat==3 ){
				if(sut == 0 || sut == 4){
					g[sat][sut] = sonuclar[ct++];
				}
			}
		}
	}
	
	
	//tenpt (2x2) dizisini yazdir
	printf("***** TENPT matrisi *****\n");
	for(int ssk=0; ssk < 2; ssk++){
		for(int kks=0; kks< 2; kks++){
			printf("%d\t", tenpt[ssk][kks]);
		}
		printf("\n");
	}
	printf("\n");
	
	printf("***** G matrisi *****\n");	
	for(int sss=0; sss < 5; sss++){
		for(int kk=0; kk< 5; kk++){
			printf("%d\t", g[sss][kk]);
		}
		printf("\n");
	}
	printf("\n");
	
}

