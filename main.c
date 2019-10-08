#include <stdio.h>
#include <stdlib.h>

// op05_01
int main(int argc, char *argv[]) {
	int input;
	
	printf("input a number : ");
	scanf("%d", &input);
	
	if (input > 0)
	{	
	printf("positive\n");
	}	

	else
	{ 
	printf("non-positive\n");
	}
		
	return 0;
	
}

// op05_02
int main(int argc, char *argv[]) {
	int input;
	
	printf("input a number : ");
	scanf("%d", &input);
	
	if (input > 0)
	{	
	printf("|x| = %d", input);
	}	

	else
	{ 
	printf("|x| = %d ", -input);
	}
		
	return 0;
	
}



// op05_03
int main(int argc, char *argv[]) {
	int input;
	printf("input a number : ");
	scanf("%d", &input);
	
	if (input > 0)
	{	
	printf("positive\n");
	}	
		
	else if (input < 0)
	{
		printf("negative\n");
	}
	
	else
	{ 
	printf("zero\n");
	}
		
	return 0;
	
}



// op05_04
int main(int argc, char *argv[]) {
	int i=0;
	int meter;
	
	while(i<3){
		meter = i * 1609;
		printf("%d mile is %d meter\n", i, meter);
		i++;
	}
	return 0;
}


// op05_05
int main(int argc, char *argv[]) {
	int i;
	for (i=0; i<10; i++)
		printf("Hello World!\n");
}


// op05_06
int main(int argc, char *argv[]) {
	
	char c;
	int num = 0;
	
	printf("input a string : ");
	
	while( (c= getchar()) != '\n')
	{
		if (c<= '9'&& c>= '0')
		{
			num++;
		}
	
	}
	
	printf("the number of digits is : %i\n", num);
	return 0;
}
			


// op05_07
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
		cnt++;  
	}
	
	while(input != answer);
	printf("congratulation! trial : %i\n", cnt);
	return 0;
	
}

				
			
		
