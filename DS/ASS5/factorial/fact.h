/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _FACT_H_RPCGEN
#define _FACT_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define FACT_PROG 0x23451111
#define FACT_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define FACT 1
extern  int * fact_1(int *, CLIENT *);
extern  int * fact_1_svc(int *, struct svc_req *);
extern int fact_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define FACT 1
extern  int * fact_1();
extern  int * fact_1_svc();
extern int fact_prog_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_FACT_H_RPCGEN */
