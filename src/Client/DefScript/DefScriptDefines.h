#ifndef DEFSCRIPTDEFINES_H
#define DEFSCRIPTDEFINES_H

// use this directive to check if the parser is working correctly
#define DEF_DEBUG_SCRIPT_CALLS

#ifdef _DEBUG
#    define _DEFSC_DEBUG(code) code;
#    define _DEFSC_DEBUG_LOG DebugLog // does NOT YET work!!
#else
#    define _DEFSC_DEBUG(code)
#    define _DEFSC_DEBUG_LOG
#endif

#if COMPILER == COMPILER_MICROSOFT
typedef __int64 int64;
typedef unsigned __int64 uint64;
#else
typedef __int64_t int64;
typedef __uint64_t uint64;
// TODO: correct ATOI64 for linux if necessary
#endif

enum VariableType
{
    DEFSCRIPT_NONE=0,
    DEFSCRIPT_VAR,
    DEFSCRIPT_FUNC
};

typedef long double ldbl;

#endif