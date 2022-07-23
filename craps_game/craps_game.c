#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Ýki zar atýlýr.
//Zarlarýn toplamý hesaplanýr.
//Ýlk atýþta 7 veya 11 gelirse oyuncu kazanýr.
//Ýlk atýþta 2, 3 veya 12 gelirse oyuncu kaybeder.
//Ýlk atýþta 4,5,6,8,9,10 gelirse oyuncunun puaný olur.
//Oyuncu 7 atmadan önce kendi puanýný tutturmalýdýr.


int rollDice(void){
	
	int die1;
	int die2;
	int total;
	
	die1=1+(rand()%6);
	die2=1+(rand()%6);
	total=die1+die2;

	printf("Player rolled the dices, Score is: %d + %d = %d\n",die1,die2,total);
	return total;
}



int main(){
	
	int total_score;
	srand(time(NULL));

	int first_roll;
	first_roll=rollDice();
	
	enum Status{CONTINUE,WIN,LOSE};
	enum Status status;
	
	switch(first_roll){
		
		case 7:
		case 11:
			//zar ilk atýldýðýnda kazanma durumu
			status=WIN;
			
		case 2:
		case 3:
		case 12:
			//zar ilk atýldýðýnda kaybetme durumu
			status=LOSE;
			
		default:  //zar ilk atýldýðýnda 4,5,6,8,9,10 gelme durumu
			
			status=CONTINUE; //zar atýlmaya devam eder.
			total_score=first_roll; //puan gösterilir. 
			printf("\nTotal score is: %d\n",total_score);}
			
		while(status==CONTINUE){ //ilk atýþta kazanma ya da kaybetme durumu gerçekleþmediyse devam edilir.
		
			first_roll=rollDice(); //zar tekrardan atýlýr.
			
			if (first_roll==total_score){ //eðer ilk score ile total score ayný ise oyuncu kazanýr.
				status=WIN;
			}
			
			else if(first_roll==7){  //eðer toplam 7 olursa oyuncu kaybeder.
				status=LOSE;
			}
		}	
				
		if(status==WIN){
			printf("Congratulations! You win...");
		}else {
			printf("You lost!");
		}
	
}

