#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//�ki zar at�l�r.
//Zarlar�n toplam� hesaplan�r.
//�lk at��ta 7 veya 11 gelirse oyuncu kazan�r.
//�lk at��ta 2, 3 veya 12 gelirse oyuncu kaybeder.
//�lk at��ta 4,5,6,8,9,10 gelirse oyuncunun puan� olur.
//Oyuncu 7 atmadan �nce kendi puan�n� tutturmal�d�r.


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
			//zar ilk at�ld���nda kazanma durumu
			status=WIN;
			
		case 2:
		case 3:
		case 12:
			//zar ilk at�ld���nda kaybetme durumu
			status=LOSE;
			
		default:  //zar ilk at�ld���nda 4,5,6,8,9,10 gelme durumu
			
			status=CONTINUE; //zar at�lmaya devam eder.
			total_score=first_roll; //puan g�sterilir. 
			printf("\nTotal score is: %d\n",total_score);}
			
		while(status==CONTINUE){ //ilk at��ta kazanma ya da kaybetme durumu ger�ekle�mediyse devam edilir.
		
			first_roll=rollDice(); //zar tekrardan at�l�r.
			
			if (first_roll==total_score){ //e�er ilk score ile total score ayn� ise oyuncu kazan�r.
				status=WIN;
			}
			
			else if(first_roll==7){  //e�er toplam 7 olursa oyuncu kaybeder.
				status=LOSE;
			}
		}	
				
		if(status==WIN){
			printf("Congratulations! You win...");
		}else {
			printf("You lost!");
		}
	
}

