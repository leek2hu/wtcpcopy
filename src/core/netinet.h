#ifndef  NETINET_H_INCLUDED
#define  NETINET_H_INCLUDED

#include <stdint.h>

#define __LITTLE_ENDIAN

//copy from netinet/tcp.h
#define SIGRTMAX  64
# define TCPOPT_EOL             0
# define TCPOPT_NOP             1
# define TCPOPT_MAXSEG          2
# define TCPOLEN_MAXSEG         4
# define TCPOPT_WINDOW          3
# define TCPOLEN_WINDOW         3
# define TCPOPT_SACK_PERMITTED  4               /* Experimental */
# define TCPOLEN_SACK_PERMITTED 2
# define TCPOPT_SACK            5               /* Experimental */
# define TCPOPT_TIMESTAMP       8
# define TCPOLEN_TIMESTAMP      10
# define TCPOLEN_TSTAMP_APPA    (TCPOLEN_TIMESTAMP+2) /* appendix A */

//copy from netinet/ip.h
#define IP_RF 0x8000                    /* reserved fragment flag */
#define IP_DF 0x4000                    /* dont fragment flag */
#define IP_MF 0x2000                    /* more fragments flag */
#define IP_OFFMASK 0x1fff               /* mask for fragmenting bits */

#define ETH_P_IP    0x0800      /* Internet Protocol packet */
#define bcopy(a, b, c) memcpy(a, b, c)

typedef uint8_t u_int8_t;
typedef uint16_t u_int16_t;
typedef uint32_t  u_int32_t;
typedef int socklen_t;

#pragma pack (1)
struct udphdr
{
  u_int16_t source;
  u_int16_t dest;
  u_int16_t len;
  u_int16_t check;
};

struct tcphdr
  {
    u_int16_t source;
    u_int16_t dest;
    u_int32_t seq;
    u_int32_t ack_seq;
#ifdef __LITTLE_ENDIAN
    u_int16_t res1:4;
    u_int16_t doff:4;
    u_int16_t fin:1;
    u_int16_t syn:1;
    u_int16_t rst:1;
    u_int16_t psh:1;
    u_int16_t ack:1;
    u_int16_t urg:1;
    u_int16_t res2:2;
#else
    u_int16_t doff:4;
    u_int16_t res1:4;
    u_int16_t res2:2;
    u_int16_t urg:1;
    u_int16_t ack:1;
    u_int16_t psh:1;
    u_int16_t rst:1;
    u_int16_t syn:1;
    u_int16_t fin:1;
#endif
    u_int16_t window;
    u_int16_t check;
    u_int16_t urg_ptr;
};

struct iphdr
{
#ifdef __LITTLE_ENDIAN
    u_int8_t ihl:4;
    u_int8_t version:4;
#else
    u_int8_t version:4;
    u_int8_t ihl:4;
#endif
    u_int8_t tos;
    u_int16_t tot_len;
    u_int16_t id;
    u_int16_t frag_off;
    u_int8_t ttl;
    u_int8_t protocol;
    u_int16_t check;
    u_int32_t saddr;
    u_int32_t daddr;
    /*The options start here. */
};
#pragma pack ()

#endif
