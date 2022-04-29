/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "solu.h"


void
solu_prog_1(char *host)
{
	CLIENT *clnt;
	number  *result_1;
	number  slou_1_arg;
    printf("Enter size of element:");
	int n;
	scanf("%d",&n);
	printf("Enter elements of array: ");
	for(int i=0;i<n;i++){
		scanf("%d",solu_prog_1->arr[i]);
	}
	solu_prog_1.a=n;	
#ifndef	DEBUG
	clnt = clnt_create (host, SOLU_PROG, SOLU_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = slou_1(&slou_1_arg, clnt);
	if (result_1 == (number *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	else{
		printf("Array After Reverse: ");
		for(int i=0;i<n;i++){
			printf("%d ,",result_1->arr[i]);
		}
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	solu_prog_1 (host);
exit (0);
}
