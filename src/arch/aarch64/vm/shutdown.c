#include "hf/arch/vm/shutdown.h"

#include "vmapi/hf/call.h"

#include "../psci.h"

/*
 * Shutdown the system or exit emulation.
 */
noreturn void shutdown(void)
{
	hf_call(PSCI_SYSTEM_OFF, 0, 0, 0);
	for (;;) {
		/* This should never be reached. */
	}
}
