/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "find_max.h"

bool_t
xdr_data (XDR *xdrs, data *objp)
{
	register int32_t *buf;

	int i;

	if (xdrs->x_op == XDR_ENCODE) {
		buf = XDR_INLINE (xdrs, (1 +  100 )* BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_vector (xdrs, (char *)objp->arr, 100,
				sizeof (int), (xdrproc_t) xdr_int))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->sz))
				 return FALSE;
		} else {
			{
				register int *genp;

				for (i = 0, genp = objp->arr;
					i < 100; ++i) {
					IXDR_PUT_LONG(buf, *genp++);
				}
			}
			IXDR_PUT_LONG(buf, objp->sz);
		}
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		buf = XDR_INLINE (xdrs, (1 +  100 )* BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_vector (xdrs, (char *)objp->arr, 100,
				sizeof (int), (xdrproc_t) xdr_int))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->sz))
				 return FALSE;
		} else {
			{
				register int *genp;

				for (i = 0, genp = objp->arr;
					i < 100; ++i) {
					*genp++ = IXDR_GET_LONG(buf);
				}
			}
			objp->sz = IXDR_GET_LONG(buf);
		}
	 return TRUE;
	}

	 if (!xdr_vector (xdrs, (char *)objp->arr, 100,
		sizeof (int), (xdrproc_t) xdr_int))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->sz))
		 return FALSE;
	return TRUE;
}
