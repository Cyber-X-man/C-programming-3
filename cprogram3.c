#include<stdio.h>
int main()
{
	printf("Wellcome!\n");   // first program.
	
  int a, b, c;
	printf("Enter two number : ");
	scanf("%d %d", &a, &b);          //variable.
	c = a + b;
	printf("%d\n", c);

	printf("Enter value : ");
	scanf("%d", &a);
	if(a < 10){
		printf("a less then 10\n");   //if else statement.
	}
	else{
		printf("a greater then 10\n");
	}

	a = 1;
	while(a <= 5){
		printf("%d\n", a); //while loop.
		a++;
		if(a == 4){
			break;
		}
	}

	for(b = 6; b <= 10; b++){
		printf("%d\n", b);
		if(b == 8){          //for loop.
			continue;
		}
	}

	printf("Enter value : ");
	scanf("%d", &c);
	switch(c){
		case 2:
		printf("Value : 2\n");   //switch statement
		break;

		case 10:
		printf("Value : 10\n");
		break;

		default:
		printf("worng type\n");
	}

	printf("Code finish.\n");

	return 0;
}

echo 'hello'
