/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "solu.h"

number *
slou_1_svc(number *argp, struct svc_req *rqstp)
{
	static number  result;
    int x=0,y=INT_MAX;
	for(int i=0;i<argp.a;i++){
		if(x<argp.arr[i])x=argp->arr[i];
		if(y>argp.arr[i])y=argp->arr[i];
	}
	for(int i=argp.a-1;i>=0;i--){
		result.arr[i]=argp->arr[argp.a-i-1];
	}
	result.a=x;
	result.b=y;
	/*
	 * insert server code here
	 */

	return &result;
}
