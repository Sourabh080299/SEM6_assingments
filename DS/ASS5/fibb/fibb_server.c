/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "fibb.h"

data *
find_fibb_1_svc(int *argp, struct svc_req *rqstp)
{
	static data  result;

	printf("fibb(%d) is called.....\n",*argp);

	int a=0,b=1;
	result.sz=0;
	while(b <= *argp){
		result.arr[result.sz]=b;
		result.sz++;
		b+=a;
		a=b-a;
	}
	return &result;
}
