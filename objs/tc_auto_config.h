#define TC_CONFIGURE " --pcap-capture --offline --pcap-send"

#ifndef  MINGW32
#define  MINGW32    1
#endif // MINGW32

#ifndef TC_OFFLINE
#define TC_OFFLINE  0
#endif

#ifndef TC_PCAP
#define TC_PCAP  1
#endif


#ifndef TC_PCAP_SND
#define TC_PCAP_SND  0
#endif


#ifndef TC_COMBINED
#define TC_COMBINED  1
#endif


#ifndef TC_COMPILER
#define TC_COMPILER  "gcc 4.4.7 20120313 (Red Hat 4.4.7-4) (GCC) "
#endif


#ifndef TC_HAVE_GCC_ATOMIC
#define TC_HAVE_GCC_ATOMIC  1
#endif


#ifndef TC_HAVE_C99_VARIADIC_MACROS
#define TC_HAVE_C99_VARIADIC_MACROS  1
#endif


#ifndef TC_HAVE_GCC_VARIADIC_MACROS
#define TC_HAVE_GCC_VARIADIC_MACROS  1
#endif


#ifndef TC_HAVE_NONALIGNED
#define TC_HAVE_NONALIGNED  1
#endif


#ifndef TC_CPU_CACHE_LINE
#define TC_CPU_CACHE_LINE  64
#endif


#ifndef TC_HAVE_O_DIRECT
#define TC_HAVE_O_DIRECT  1
#endif


#ifndef TC_HAVE_DEFERRED_ACCEPT
#define TC_HAVE_DEFERRED_ACCEPT  1
#endif


#ifndef TC_HAVE_KEEPALIVE_TUNABLE
#define TC_HAVE_KEEPALIVE_TUNABLE  1
#endif


#ifndef TC_HAVE_TCP_INFO
#define TC_HAVE_TCP_INFO  1
#endif


#ifndef TC_PTR_SIZE
#define TC_PTR_SIZE  8
#endif


#ifndef TC_SIG_ATOMIC_T_SIZE
#define TC_SIG_ATOMIC_T_SIZE  4
#endif


#ifndef TC_MAX_SIZE_T_VALUE
#define TC_MAX_SIZE_T_VALUE  9223372036854775807LL
#endif


#ifndef TC_SIZE_T_LEN
#define TC_SIZE_T_LEN  (sizeof("-9223372036854775808") - 1)
#endif


#ifndef TC_MAX_OFF_T_VALUE
#define TC_MAX_OFF_T_VALUE  9223372036854775807LL
#endif


#ifndef TC_OFF_T_LEN
#define TC_OFF_T_LEN  (sizeof("-9223372036854775808") - 1)
#endif


#ifndef TC_TIME_T_SIZE
#define TC_TIME_T_SIZE  8
#endif


#ifndef TC_TIME_T_LEN
#define TC_TIME_T_LEN  (sizeof("-9223372036854775808") - 1)
#endif


#ifndef TC_HAVE_PREAD
#define TC_HAVE_PREAD  1
#endif


#ifndef TC_HAVE_PWRITE
#define TC_HAVE_PWRITE  1
#endif


#ifndef TC_SIGACTION
#define TC_SIGACTION  0
#endif


#ifndef TC_HAVE_POSIX_MEMALIGN
#define TC_HAVE_POSIX_MEMALIGN  0
#endif


#ifndef TC_HAVE_MEMALIGN
#define TC_HAVE_MEMALIGN  0
#endif


#ifndef TC_HAVE_MAP_ANON
#define TC_HAVE_MAP_ANON  1
#endif


#ifndef TC_HAVE_MAP_DEVZERO
#define TC_HAVE_MAP_DEVZERO  1
#endif


#ifndef TC_HAVE_OPENAT
#define TC_HAVE_OPENAT  1
#endif


#ifndef TC_HAVE_GETADDRINFO
#define TC_HAVE_GETADDRINFO  1
#endif


#ifndef TC_HAVE_EPOLL
#define TC_HAVE_EPOLL  0
#endif


#ifndef HAVE_PCAP_CREATE
#define HAVE_PCAP_CREATE  1
#endif


#ifndef TC_DEBUG
#define TC_DEBUG  1
#endif

#if (!MINGW32)
#ifndef TC_PREFIX
#define TC_PREFIX  "/usr/local/tcpcopy/"
#endif


#ifndef TC_CONF_PREFIX
#define TC_CONF_PREFIX  "conf/"
#endif


#ifndef TC_SBIN_PATH
#define TC_SBIN_PATH  ""
#endif


#ifndef TC_CONF_PATH
#define TC_CONF_PATH  "conf/plugin.conf"
#endif


#ifndef TC_PID_PATH
#define TC_PID_PATH  "logs/tcpcopy.pid"
#endif


#ifndef TC_ERROR_LOG_PATH
#define TC_ERROR_LOG_PATH  "logs/error_tcpcopy.log"
#endif

#else

#ifndef TC_PREFIX
#define TC_PREFIX  "c:\\tcpcopy\\"
#endif


#ifndef TC_CONF_PREFIX
#define TC_CONF_PREFIX  "\\conf\\"
#endif

#ifndef TC_CONF_PATH
#define TC_CONF_PATH  "conf\\plugin.conf"
#endif


#ifndef TC_PID_PATH
#define TC_PID_PATH  "logs\\tcpcopy.pid"
#endif


#ifndef TC_ERROR_LOG_PATH
#define TC_ERROR_LOG_PATH  "logs\\error_tcpcopy.log"
#endif

#endif

