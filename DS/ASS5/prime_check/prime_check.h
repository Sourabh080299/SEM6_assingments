/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _PRIME_CHECK_H_RPCGEN
#define _PRIME_CHECK_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define PRIMECHECK_PROG 0x123456
#define PRIMECHECK_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define prime_check 1
extern  int * prime_check_1(int *, CLIENT *);
extern  int * prime_check_1_svc(int *, struct svc_req *);
extern int primecheck_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define prime_check 1
extern  int * prime_check_1();
extern  int * prime_check_1_svc();
extern int primecheck_prog_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_PRIME_CHECK_H_RPCGEN */