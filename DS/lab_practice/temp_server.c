/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "temp.h"

numbers * temp_1_svc(numbers *argp, struct svc_req *rqstp)
{
	static numbers  result;
    int min=INT_MAX,max=0,avg=0;
	for(int i=0;i<argp->n;i++){
	  if(min>argp->arr[i])min=argp->arr[i];
	  if(max<argp->arr[i])max=argp->arr[i];
	  avg+=argp->arr[i];
	}
	result.min=min;
	result.max=max;
	result.avg=(avg/argp->n);
	return &result;
}
