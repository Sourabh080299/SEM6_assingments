/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _TEMP_H_RPCGEN
#define _TEMP_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct numbers {
	int arr[100];
	int n;
	int min;
	int max;
	int avg;
};
typedef struct numbers numbers;

#define TEMP_PROG 0x123432
#define TEMP_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define temp 1
extern  numbers * temp_1(numbers *, CLIENT *);
extern  numbers * temp_1_svc(numbers *, struct svc_req *);
extern int temp_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define temp 1
extern  numbers * temp_1();
extern  numbers * temp_1_svc();
extern int temp_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_numbers (XDR *, numbers*);

#else /* K&R C */
extern bool_t xdr_numbers ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_TEMP_H_RPCGEN */
