#include "hookapi.h"

/**
 * @brief The main entry point for the YieldSuck hook.
 * 
 * @param reserved Unused, always 0.
 * @return int64_t The hook's exit code.
 */
int64_t hook(uint32_t reserved)
{
    // This is the main function for your hook.
    // For now, we will just accept any transaction that triggers it.
    accept(0,0,0);
    return 0;
}
