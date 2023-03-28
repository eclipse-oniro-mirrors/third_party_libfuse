#ifndef LIBFUSE_CONFIG_H
#define LIBFUSE_CONFIG_H

#define HAVE_COPY_FILE_RANGE

#define HAVE_FALLOCATE

#define HAVE_FDATASYNC

#define HAVE_FORK

#define HAVE_FSTATAT

#define HAVE_ICONV

#define HAVE_OPENAT

#define HAVE_PIPE2

#define HAVE_POSIX_FALLOCATE

#define HAVE_READLINKAT

#define HAVE_SETXATTR

#define HAVE_SPLICE

#define HAVE_STRUCT_STAT_ST_ATIM

#undef HAVE_STRUCT_STAT_ST_ATIMESPEC

#define HAVE_UTIMENSAT

#define HAVE_VMSPLICE

#define PACKAGE_VERSION "3.10.5"

#define pthread_setcancelstate(state, p)
#define pthread_cancel(thread)

#define PTHREAD_CANCEL_ENABLE 0
#define PTHREAD_CANCEL_DISABLE 0

#endif
