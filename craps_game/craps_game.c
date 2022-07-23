#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Iki zar atilir.
//Zarlarin toplami hesaplanir.
//Ilk atista 7 veya 11 gelirse oyuncu kazanir.
//Ilk atista 2, 3 veya 12 gelirse oyuncu kaybeder.
//Ilk atista 4,5,6,8,9,10 gelirse oyuncunun puani olur.
//Oyuncu 7 atmadan once kendi puanini tutturmalidir.


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
			//zar ilk atildiginda kazanma durumu
			status=WIN;
			
		case 2:
		case 3:
		case 12:
			//zar ilk atildiginda kaybetme durumu
			status=LOSE;
			
		default:  //zar ilk atildiginda 4,5,6,8,9,10 gelme durumu
			
			status=CONTINUE; //zar atilmaya devam eder.
			total_score=first_roll; //puan gosterilir. 
			printf("\nTotal score is: %d\n",total_score);}
			
		while(status==CONTINUE){ //ilk atista kazanma ya da kaybetme durumu gerceklesmediyse devam edilir.
		
			first_roll=rollDice(); //zar tekrardan atilir.
			
			if (first_roll==total_score){ //eger ilk score ile total score ayni ise oyuncu kazanir.
				status=WIN;
			}
			
			else if(first_roll==7){  //eger toplam 7 olursa oyuncu kaybeder.
				status=LOSE;
			}
		}	
				
		if(status==WIN){
			printf("Congratulations! You win...");
		}else {
			printf("You lost!");
		}
	
}

