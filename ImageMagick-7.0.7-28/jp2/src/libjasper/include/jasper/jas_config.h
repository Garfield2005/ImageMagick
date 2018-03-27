/* src/libjasper/include/jasper/jas_config.h.in.  Generated from configure.ac by autoheader.  */


/* Avoid problems due to multiple inclusion. */
#ifndef JAS_CONFIG_H
#define JAS_CONFIG_H

/* This preprocessor symbol identifies the version of JasPer. */
#undef	JAS_VERSION
/* If configure is being used, this symbol will be defined automatically
  at this point in the configuration header file. */

# if defined(_DLL) && !defined(_LIB)
#   if !defined(JAS_WIN_MSVC_BUILD)
#     define JAS_EXPORT __declspec(dllimport)
#   else
#     define JAS_EXPORT __declspec(dllexport)
#   endif
# else
#   define JAS_EXPORT
# endif

/* The preprocessor symbol JAS_WIN_MSVC_BUILD should not be defined
  unless the JasPer software is being built under Microsoft Windows
  using Microsoft Visual C. */
#if !defined(JAS_WIN_MSVC_BUILD)
/* A configure-based build is being used. */



/* Extra debugging support */
#undef DEBUG

/* Debugging memory allocator */
#undef DEBUG_MEMALLOC

/* Debugging overflow detection */
#undef DEBUG_OVERFLOW

/* Define to 1 if you have the <dlfcn.h> header file. */
#undef HAVE_DLFCN_H

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
#undef HAVE_DOPRNT

/* Define to 1 if you have the <fcntl.h> header file. */
#undef HAVE_FCNTL_H

/* Define to 1 if you have the `getrusage' function. */
#undef HAVE_GETRUSAGE

/* Define to 1 if you have the `gettimeofday' function. */
#undef HAVE_GETTIMEOFDAY

/* Define to 1 if you have the <inttypes.h> header file. */
#undef HAVE_INTTYPES_H

/* Define to 1 if you have the <io.h> header file. */
#undef HAVE_IO_H

/* Define to 1 if you have the `m' library (-lm). */
#undef HAVE_LIBM

/* Define to 1 if you have the <limits.h> header file. */
#undef HAVE_LIMITS_H

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H

/* Define to 1 if you have the <stdbool.h> header file. */
#undef HAVE_STDBOOL_H

/* Define to 1 if you have the <stddef.h> header file. */
#undef HAVE_STDDEF_H

/* Define to 1 if you have the <stdint.h> header file. */
#undef HAVE_STDINT_H

/* Define to 1 if you have the <stdlib.h> header file. */
#undef HAVE_STDLIB_H

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#undef HAVE_STRING_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#undef HAVE_SYS_STAT_H

/* Define to 1 if you have the <sys/time.h> header file. */
#undef HAVE_SYS_TIME_H

/* Define to 1 if you have the <sys/types.h> header file. */
#undef HAVE_SYS_TYPES_H

/* Define to 1 if you have the <unistd.h> header file. */
#undef HAVE_UNISTD_H

/* Define to 1 if you have the `vprintf' function. */
#undef HAVE_VPRINTF

/* Define to 1 if you have the <windows.h> header file. */
#undef HAVE_WINDOWS_H

/* JasPer configure */
#undef JAS_CONFIGURE

/* JasPer version */
#undef JAS_VERSION

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#undef LT_OBJDIR

/* Name of package */
#undef PACKAGE

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#undef PACKAGE_NAME

/* Define to the full name and version of this package. */
#undef PACKAGE_STRING

/* Define to the one symbol short name of this package. */
#undef PACKAGE_TARNAME

/* Define to the home page for this package. */
#undef PACKAGE_URL

/* Define to the version of this package. */
#undef PACKAGE_VERSION

/* Define to 1 if you have the ANSI C header files. */
#undef STDC_HEADERS

/* Version number of package */
#undef VERSION

/* Define to 1 if the X Window System is missing or not being used. */
#undef X_DISPLAY_MISSING

/* Define to empty if `const' does not conform to ANSI C. */
#undef const

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
#undef inline
#endif

/* Define to `long long' if <sys/types.h> does not define. */
#undef longlong

/* Define to `unsigned int' if <sys/types.h> does not define. */
#undef size_t

/* Define to `int' if <sys/types.h> does not define. */
#undef ssize_t

/* Define to `unsigned char' if <sys/types.h> does not define. */
#undef uchar

/* Define to `unsigned int' if <sys/types.h> does not define. */
#undef uint

/* Define to `unsigned long' if <sys/types.h> does not define. */
#undef ulong

/* Define to `unsigned long long' if <sys/types.h> does not define. */
#undef ulonglong

/* Define to `unsigned short' if <sys/types.h> does not define. */
#undef ushort


#else
/* A configure-based build is not being used. */
#include <jasper/jas_config2.h>
#endif

#endif

