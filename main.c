#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// op05_06
int main(int argc, char *argv[]) {
	
	int answer = 50;
	int input;
	int cnt = 0;
	
	do
	{
		printf("Guess a number : ");
		scanf("%d", &input);
		
		if(input>answer)
		{
		 printf("High!\n");
		}
		 else if (input<answer)
		 {
		 	printf("Low!\n");
		 }
		cnt++;   // thinkting about this 
	}
	
	while(input != answer);
	printf("congratulation! trial : %i\n", cnt);
	return 0;
	
	
}
				
		

	
	


