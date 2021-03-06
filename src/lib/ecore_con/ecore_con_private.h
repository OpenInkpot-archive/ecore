#ifndef _ECORE_CON_PRIVATE_H
#define _ECORE_CON_PRIVATE_H

#include "ecore_private.h"
#include "Ecore_Con.h"

#define ECORE_MAGIC_CON_SERVER             0x77665544
#define ECORE_MAGIC_CON_CLIENT             0x77556677
#define ECORE_MAGIC_CON_URL                0x77074255

#define ECORE_CON_TYPE 0x0f
#define ECORE_CON_SSL  0xf0

#if USE_GNUTLS
# include <gnutls/gnutls.h>
#elif USE_OPENSSL
# include <openssl/ssl.h>
#endif
#ifdef HAVE_CURL
#include <curl/curl.h>
#endif

#define READBUFSIZ 65536

extern int  _ecore_con_log_dom ;

#ifdef ECORE_CON_DEFAULT_LOG_COLOR
#undef ECORE_LOG_DEFAULT_LOG_COLOR
#endif
#define ECORE_CON_DEFAULT_LOG_COLOR EINA_COLOR_BLUE

#ifdef ERR
# undef ERR
#endif
#define ERR(...) EINA_LOG_DOM_ERR(_ecore_con_log_dom, __VA_ARGS__)

#ifdef DBG
# undef DBG
#endif
#define DBG(...) EINA_LOG_DOM_DBG(_ecore_con_log_dom, __VA_ARGS__)

#ifdef INF
# undef INF
#endif
#define INF(...) EINA_LOG_DOM_INFO(_ecore_con_log_dom, __VA_ARGS__)

#ifdef WRN
# undef WRN
#endif
#define WRN(...) EINA_LOG_DOM_WARN(_ecore_con_log_dom, __VA_ARGS__)

#ifdef CRIT
# undef CRIT
#endif
#define CRIT(...) EINA_LOG_DOM_CRIT(_ecore_con_log_dom, __VA_ARGS__)

typedef enum _Ecore_Con_State
  {
    ECORE_CON_CONNECTED,
    ECORE_CON_DISCONNECTED,
    ECORE_CON_INPROGRESS
  } Ecore_Con_State;

typedef enum _Ecore_Con_Ssl_Error
  {
    ECORE_CON_SSL_ERROR_NONE = 0,
    ECORE_CON_SSL_ERROR_NOT_SUPPORTED,
    ECORE_CON_SSL_ERROR_INIT_FAILED,
    ECORE_CON_SSL_ERROR_SERVER_INIT_FAILED,
    ECORE_CON_SSL_ERROR_SSL2_NOT_SUPPORTED
  } Ecore_Con_Ssl_Error;

struct _Ecore_Con_Client
{
   ECORE_MAGIC;
   int               fd;
   Ecore_Con_Server *server;
   void             *data;
   Ecore_Fd_Handler *fd_handler;
   int               buf_size;
   int               buf_offset;
   unsigned char    *buf;
   char             *ip;
   int               event_count;
   struct sockaddr  *client_addr;
   int               client_addr_len;
#if USE_GNUTLS
   gnutls_session    session;
#elif USE_OPENSSL
   SSL_CTX          *ssl_ctx;
   SSL              *ssl;
   int		     ssl_err;
#endif
   char              dead : 1;
   char              delete_me : 1;
};

struct _Ecore_Con_Server
{
   ECORE_MAGIC;
   int               fd;
   Ecore_Con_Type    type;
   char             *name;
   int               port;
   char             *path;
   void             *data;
   Ecore_Fd_Handler *fd_handler;
   Eina_List        *clients;
   int               write_buf_size;
   int               write_buf_offset;
   unsigned char    *write_buf;
   int               event_count;
   int               client_limit;
   pid_t             ppid;
#if USE_GNUTLS
   gnutls_session    session;
   gnutls_anon_client_credentials_t anoncred_c;
   gnutls_anon_server_credentials_t anoncred_s;
#elif USE_OPENSSL
   SSL_CTX          *ssl_ctx;
   SSL              *ssl;
   int		     ssl_err;
#endif
   char             *ip;
   char              dead : 1;
   char              created : 1;
   char              connecting : 1;
   char              reject_excess_clients : 1;
   char              delete_me : 1;
};

#ifdef HAVE_CURL
struct _Ecore_Con_Url
{
   ECORE_MAGIC;
   CURL              *curl_easy;
   struct curl_slist *headers;
   struct curl_httppost* post;
   Eina_List         *additional_headers;
   Eina_List         *response_headers;
   char              *url;

   Ecore_Con_Url_Time condition;
   time_t             time;
   void              *data;

   Ecore_Fd_Handler  *fd_handler;
   int		      fd;
   int		      flags;

   int		      received;
   int		      write_fd;

   unsigned char      active : 1;
};
#endif

struct _Ecore_Con_Info
{
   unsigned int    size;
   struct addrinfo info;
   char		   ip[NI_MAXHOST];
   char		   service[NI_MAXSERV];
};

/* from ecore_local.c */
int ecore_con_local_init(void);
int ecore_con_local_shutdown(void);
int ecore_con_local_connect(Ecore_Con_Server *svr, Eina_Bool (*cb_done)(void *data, Ecore_Fd_Handler *fd_handler), void *data, void (*cb_free)(void *data, void *ev));
int ecore_con_local_listen(Ecore_Con_Server *svr, Eina_Bool (*cb_listen)(void *data, Ecore_Fd_Handler *fd_handler), void *data);
/* from ecore_con_info.c */
int ecore_con_info_init(void);
int ecore_con_info_shutdown(void);
int ecore_con_info_tcp_connect(Ecore_Con_Server *svr, Ecore_Con_Info_Cb done_cb, void *data);
int ecore_con_info_tcp_listen(Ecore_Con_Server *svr, Ecore_Con_Info_Cb done_cb, void *data);
int ecore_con_info_udp_connect(Ecore_Con_Server *svr, Ecore_Con_Info_Cb done_cb, void *data);
int ecore_con_info_udp_listen(Ecore_Con_Server *svr, Ecore_Con_Info_Cb done_cb, void *data);
int ecore_con_info_mcast_listen(Ecore_Con_Server *svr, Ecore_Con_Info_Cb done_cb, void *data);
/* from ecore_con_ssl.c */
Ecore_Con_Ssl_Error ecore_con_ssl_init(void);
Ecore_Con_Ssl_Error ecore_con_ssl_shutdown(void);
void                ecore_con_ssl_server_prepare(Ecore_Con_Server *svr);
Ecore_Con_Ssl_Error ecore_con_ssl_server_init(Ecore_Con_Server *svr);
Ecore_Con_Ssl_Error ecore_con_ssl_server_shutdown(Ecore_Con_Server *svr);
Ecore_Con_State     ecore_con_ssl_server_try(Ecore_Con_Server *svr);
int                 ecore_con_ssl_server_read(Ecore_Con_Server *svr, unsigned char *buf, int size);
int                 ecore_con_ssl_server_write(Ecore_Con_Server *svr, unsigned char *buf, int size);
Ecore_Con_Ssl_Error ecore_con_ssl_client_init(Ecore_Con_Client *svr);
Ecore_Con_Ssl_Error ecore_con_ssl_client_shutdown(Ecore_Con_Client *svr);
Ecore_Con_State     ecore_con_ssl_client_try(Ecore_Con_Client *svr);
int                 ecore_con_ssl_client_read(Ecore_Con_Client *svr, unsigned char *buf, int size);
int                 ecore_con_ssl_client_write(Ecore_Con_Client *svr, unsigned char *buf, int size);


#endif
