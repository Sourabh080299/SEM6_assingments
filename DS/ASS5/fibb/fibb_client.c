/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "fibb.h"


void
fibb_prog_1(char *host, int x)
{
	CLIENT *clnt;
	data  *result_1;
	int  find_fibb_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, FIBB_PROG, FIBB_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	find_fibb_1_arg = x;

	result_1 = find_fibb_1(&find_fibb_1_arg, clnt);
	if (result_1 == (data *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	else{
		if(result_1->sz==0)
			printf("\nNo Fibonacci number.");
		else{
			printf("\nFibonacci numbers are : ");
			int i=0;
			for(i=0; i < result_1->sz; i++){
				printf("%d ",result_1->arr[i]);
			}
		}
		printf("\n");
	}

#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;
	int x;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];

	printf("Enter the number: ");
	scanf("%d",&x);

	fibb_prog_1 (host,x);
exit (0);
}
