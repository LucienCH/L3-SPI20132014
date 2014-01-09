/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "generateur.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

histogr *
histo_1(nvg *argp, CLIENT *clnt)
{
	static histogr clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, HISTO,
		(xdrproc_t) xdr_nvg, (caddr_t) argp,
		(xdrproc_t) xdr_histogr, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

nvg *
moy_1(nvg *argp, CLIENT *clnt)
{
	static nvg clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, MOY,
		(xdrproc_t) xdr_nvg, (caddr_t) argp,
		(xdrproc_t) xdr_nvg, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

nvg *
med_1(nvg *argp, CLIENT *clnt)
{
	static nvg clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, MED,
		(xdrproc_t) xdr_nvg, (caddr_t) argp,
		(xdrproc_t) xdr_nvg, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}
