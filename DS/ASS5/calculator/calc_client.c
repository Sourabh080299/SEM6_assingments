/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calc.h"


void
calc_prog_1(char *host,float x, float y, int choice)
{
	CLIENT *clnt;
	numbers  input_arg;
	float  *result;

#ifndef	DEBUG
	clnt = clnt_create (host, CALC_PROG, CALC_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	input_arg.a=x;
	input_arg.b=y;
    
	if(choice==1)
		result = add_1(&input_arg, clnt);
	if(choice==2)
			result = sub_1(&input_arg, clnt);
	if(choice==3)
			result = mul_1(&input_arg, clnt);
	if(choice==4)
			result = div_1(&input_arg, clnt);

	if (result == (float *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	else{
			printf("\nResult = %f\n", *result);
	}

#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;
	float x,y;
	int choice;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	while(1){
		printf("\n1. Addition\n");
		printf("2. Substraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		printf("5. Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);

		if(choice<1 || choice>5){
			printf("\nInvalid option.\n");
			continue;
		}

		if(choice == 5){
			printf("\nThank you.\n");
			break;
		}

		printf("Enter first number: ");
		scanf("%f",&x);
		printf("Enter second number: ");
		scanf("%f",&y);
		calc_prog_1 (host,x,y,choice);
	}

exit (0);
}
