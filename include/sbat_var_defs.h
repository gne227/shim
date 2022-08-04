// SPDX-License-Identifier: BSD-2-Clause-Patent

#ifndef SBAT_VAR_DEFS_H_
#define SBAT_VAR_DEFS_H_

#define SBAT_VAR_SIG "sbat,"
#define SBAT_VAR_VERSION "1,"
#define SBAT_VAR_ORIGINAL_DATE "2021030218"
#define SBAT_VAR_ORIGINAL \
	SBAT_VAR_SIG SBAT_VAR_VERSION SBAT_VAR_ORIGINAL_DATE "\n"

#if defined(ENABLE_SHIM_DEVEL)
#define SBAT_VAR_PREVIOUS_DATE "2022020101"
#define SBAT_VAR_PREVIOUS_REVOCATIONS "component,2\n"
#define SBAT_VAR_PREVIOUS \
	SBAT_VAR_SIG SBAT_VAR_VERSION SBAT_VAR_PREVIOUS_DATE "\n" \
	SBAT_VAR_PREVIOUS_REVOCATIONS

#define SBAT_VAR_LATEST_DATE "2022050100"
#define SBAT_VAR_LATEST_REVOCATIONS "component,2\nothercomponent,2\n"
#define SBAT_VAR_LATEST \
	SBAT_VAR_SIG SBAT_VAR_VERSION SBAT_VAR_LATEST_DATE "\n" \
	SBAT_VAR_LATEST_REVOCATIONS
#else /* !ENABLE_SHIM_DEVEL */
#define SBAT_VAR_PREVIOUS_DATE SBAT_VAR_ORIGINAL_DATE
#define SBAT_VAR_PREVIOUS_REVOCATIONS
#define SBAT_VAR_PREVIOUS \
	SBAT_VAR_SIG SBAT_VAR_VERSION SBAT_VAR_PREVIOUS_DATE "\n" \
	SBAT_VAR_PREVIOUS_REVOCATIONS

#define SBAT_VAR_LATEST_DATE "2022052400"
#define SBAT_VAR_LATEST_REVOCATIONS "shim,2\ngrub,2\n"
#define SBAT_VAR_LATEST \
	SBAT_VAR_SIG SBAT_VAR_VERSION SBAT_VAR_LATEST_DATE "\n" \
	SBAT_VAR_LATEST_REVOCATIONS
#endif /* ENABLE_SHIM_DEVEL */

#endif /* !SBAT_VAR_DEFS_H_ */