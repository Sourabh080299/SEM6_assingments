/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "find_max.h"

int *
find_max_1_svc(data *argp, struct svc_req *rqstp)
{
	static int  result;
	int i;

	result=argp->arr[0];

	for(i=1; i < argp->sz; i++){
		if(result < argp->arr[i])
			result = argp->arr[i];
	}

	return &result;
}