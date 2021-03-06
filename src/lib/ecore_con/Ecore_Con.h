/*
 * vim:ts=8:sw=3:sts=8:noexpandtab:cino=>5n-3f0^-2{2
 */
#ifndef _ECORE_CON_H
#define _ECORE_CON_H

#include <time.h>
#include <libgen.h>
#ifdef _WIN32
# include <ws2tcpip.h>
#else
# include <netdb.h>
#endif
#include <Eina.h>

#ifdef EAPI
# undef EAPI
#endif

#ifdef _MSC_VER
# ifdef BUILDING_DLL
#  define EAPI __declspec(dllexport)
# else
#  define EAPI __declspec(dllimport)
# endif
#else
# ifdef __GNUC__
#  if __GNUC__ >= 4
#   define EAPI __attribute__ ((visibility("default")))
#  else
#   define EAPI
#  endif
# else
#  define EAPI
# endif
#endif

/**
 * @file Ecore_Con.h
 * @brief Sockets functions.
 *
 * The Ecore Connection Library ( @c Ecore_Con ) provides simple mechanisms
 * for communications between programs using reliable sockets.  It saves
 * the programmer from having to worry about file descripters and waiting
 * for incoming connections.
 *
 * There are two main objects in the @c Ecore_Con library: the @c
 * Ecore_Con_Server and the @c Ecore_Con_Client.
 *
 * The @c Ecore_Con_Server represents a server that can be connected to.
 * It is used regardless of whether the program is acting as a server or
 * client itself.
 *
 * To create a listening server, call @c ecore_con_server_add().
 *
 * To connect to a server, call @c ecore_con_server_connect().  Data can
 * then be sent to the server using the @c ecore_con_server_send().
 *
 * Whenever a client connection is made to an @c Ecore_Con_Server, a
 * @c ECORE_CON_CLIENT_ADD event is emitted.  Any event callbacks that are
 * called receive a @c Ecore_Con_Client object, which represents a
 * connection that that particular client.
 *
 * Functions are described in the following groupings:
 * @li @ref Ecore_Con_Lib_Group
 * @li @ref Ecore_Con_Server_Group
 * @li @ref Ecore_Con_Client_Group
 * @li @ref Ecore_Con_Url_Group
 */

#ifdef __cplusplus
extern "C" {
#endif

   typedef struct _Ecore_Con_Server  Ecore_Con_Server; /**< A connection handle */
   typedef struct _Ecore_Con_Client  Ecore_Con_Client; /**< A connection handle */
   typedef struct _Ecore_Con_Url     Ecore_Con_Url;
   typedef struct _Ecore_Con_Info    Ecore_Con_Info;

   typedef void (*Ecore_Con_Info_Cb)(void *data, Ecore_Con_Info *infos);

   typedef enum _Ecore_Con_Type
     {
	ECORE_CON_LOCAL_USER       = 0,
	ECORE_CON_LOCAL_SYSTEM     = 1,
	ECORE_CON_LOCAL_ABSTRACT   = 2,
	ECORE_CON_REMOTE_TCP       = 3,
	ECORE_CON_REMOTE_MCAST     = 4,
	ECORE_CON_REMOTE_UDP       = 5,
	ECORE_CON_REMOTE_BROADCAST = 6,
	ECORE_CON_REMOTE_NODELAY   = 7,
          
	ECORE_CON_USE_SSL2 = (1 << 4),
	ECORE_CON_USE_SSL3 = (1 << 5),
	ECORE_CON_USE_TLS  = (1 << 6)
     } Ecore_Con_Type;
#define ECORE_CON_USE_SSL ECORE_CON_USE_SSL2
#define ECORE_CON_REMOTE_SYSTEM ECORE_CON_REMOTE_TCP

   typedef enum _Ecore_Con_Url_Time
     {
	ECORE_CON_URL_TIME_NONE = 0,
	ECORE_CON_URL_TIME_IFMODSINCE,
	ECORE_CON_URL_TIME_IFUNMODSINCE,
	ECORE_CON_URL_TIME_LASTMOD
     } Ecore_Con_Url_Time;

   typedef struct _Ecore_Con_Event_Client_Add  Ecore_Con_Event_Client_Add;
   typedef struct _Ecore_Con_Event_Client_Del  Ecore_Con_Event_Client_Del;
   typedef struct _Ecore_Con_Event_Server_Add  Ecore_Con_Event_Server_Add;
   typedef struct _Ecore_Con_Event_Server_Del  Ecore_Con_Event_Server_Del;
   typedef struct _Ecore_Con_Event_Client_Data Ecore_Con_Event_Client_Data;
   typedef struct _Ecore_Con_Event_Server_Data Ecore_Con_Event_Server_Data;
   typedef struct _Ecore_Con_Event_Url_Data Ecore_Con_Event_Url_Data;
   typedef struct _Ecore_Con_Event_Url_Complete Ecore_Con_Event_Url_Complete;
   typedef struct _Ecore_Con_Event_Url_Progress Ecore_Con_Event_Url_Progress;

   struct _Ecore_Con_Event_Client_Add
     {
	Ecore_Con_Client *client;
     };

   struct _Ecore_Con_Event_Client_Del
     {
	Ecore_Con_Client *client;
     };

   struct _Ecore_Con_Event_Server_Add
     {
	Ecore_Con_Server *server;
     };

   struct _Ecore_Con_Event_Server_Del
     {
	Ecore_Con_Server *server;
     };

   struct _Ecore_Con_Event_Client_Data
     {
	Ecore_Con_Client *client;
	void             *data;
	int               size;
     };

   struct _Ecore_Con_Event_Server_Data
     {
	Ecore_Con_Server *server;
	void             *data;
	int               size;
     };

   struct _Ecore_Con_Event_Url_Data
     {
	Ecore_Con_Url    *url_con;
	int               size;
	unsigned char     data[1];
     };

   struct _Ecore_Con_Event_Url_Complete
     {
	Ecore_Con_Url    *url_con;
	int               status;
     };

   struct _Ecore_Con_Event_Url_Progress
     {
	Ecore_Con_Url    *url_con;
	struct {
	   double         total;
	   double         now;
	} down;
	struct {
	   double         total;
	   double         now;
	} up;
     };

   EAPI extern int ECORE_CON_EVENT_CLIENT_ADD;
   EAPI extern int ECORE_CON_EVENT_CLIENT_DEL;
   EAPI extern int ECORE_CON_EVENT_SERVER_ADD;
   EAPI extern int ECORE_CON_EVENT_SERVER_DEL;
   EAPI extern int ECORE_CON_EVENT_CLIENT_DATA;
   EAPI extern int ECORE_CON_EVENT_SERVER_DATA;
   EAPI extern int ECORE_CON_EVENT_URL_DATA;
   EAPI extern int ECORE_CON_EVENT_URL_COMPLETE;
   EAPI extern int ECORE_CON_EVENT_URL_PROGRESS;

   EAPI int               ecore_con_init(void);
   EAPI int               ecore_con_shutdown(void);

   EAPI Ecore_Con_Server *ecore_con_server_add(Ecore_Con_Type type, const char *name, int port, const void *data);

   EAPI Ecore_Con_Server *ecore_con_server_connect(Ecore_Con_Type type, const char *name, int port, const void *data);
   EAPI void             *ecore_con_server_del(Ecore_Con_Server *svr);
   EAPI void             *ecore_con_server_data_get(Ecore_Con_Server *svr);
   EAPI int               ecore_con_server_connected_get(Ecore_Con_Server *svr);
   EAPI Eina_List       *ecore_con_server_clients_get(Ecore_Con_Server *svr);
   EAPI int               ecore_con_server_send(Ecore_Con_Server *svr, const void *data, int size);
   EAPI void              ecore_con_server_client_limit_set(Ecore_Con_Server *svr, int client_limit, char reject_excess_clients);
   EAPI char             *ecore_con_server_ip_get(Ecore_Con_Server *svr);
   EAPI void              ecore_con_server_flush(Ecore_Con_Server *svr);

   EAPI int               ecore_con_client_send(Ecore_Con_Client *cl, const void *data, int size);
   EAPI Ecore_Con_Server *ecore_con_client_server_get(Ecore_Con_Client *cl);
   EAPI void             *ecore_con_client_del(Ecore_Con_Client *cl);
   EAPI void              ecore_con_client_data_set(Ecore_Con_Client *cl, const void *data);
   EAPI void             *ecore_con_client_data_get(Ecore_Con_Client *cl);
   EAPI char             *ecore_con_client_ip_get(Ecore_Con_Client *cl);
   EAPI void              ecore_con_client_flush(Ecore_Con_Client *cl);

   EAPI int               ecore_con_ssl_available_get(void);

   EAPI int               ecore_con_url_init(void);
   EAPI int               ecore_con_url_shutdown(void);
   EAPI Ecore_Con_Url    *ecore_con_url_new(const char *url);
   EAPI Ecore_Con_Url    *ecore_con_url_custom_new(const char *url, const char *custom_request);
   EAPI void              ecore_con_url_destroy(Ecore_Con_Url *url_con);
   EAPI void              ecore_con_url_data_set(Ecore_Con_Url *url_con, void *data);
   EAPI void             *ecore_con_url_data_get(Ecore_Con_Url *url_con);
   EAPI void              ecore_con_url_additional_header_add(Ecore_Con_Url *url_con, const char *key, const char *value);
   EAPI void              ecore_con_url_additional_headers_clear(Ecore_Con_Url *url_con);
   EAPI const Eina_List  *ecore_con_url_response_headers_get(Ecore_Con_Url *url_con);
   EAPI int               ecore_con_url_url_set(Ecore_Con_Url *url_con, const char *url);
   EAPI void		  ecore_con_url_fd_set(Ecore_Con_Url *url_con, int fd);
   EAPI int		  ecore_con_url_received_bytes_get(Ecore_Con_Url *url_con);
   EAPI int		  ecore_con_url_httpauth_set(Ecore_Con_Url *url_con, const char *username, const char *password, Eina_Bool safe);
   EAPI int               ecore_con_url_send(Ecore_Con_Url *url_con, const void *data, size_t length, const char *content_type);
   EAPI void              ecore_con_url_time(Ecore_Con_Url *url_con, Ecore_Con_Url_Time condition, time_t tm);

   EAPI int		  ecore_con_info_get(Ecore_Con_Server *svr, Ecore_Con_Info_Cb done_cb, void *data, struct addrinfo *hints);

   EAPI int		  ecore_con_url_ftp_upload(Ecore_Con_Url *url_con, const char *filename, const char *user, const char *pass, const char *upload_dir);
   EAPI void		  ecore_con_url_verbose_set(Ecore_Con_Url *url_con, int verbose);
   EAPI void		  ecore_con_url_ftp_use_epsv_set(Ecore_Con_Url *url_con, int use_epsv);
   EAPI int               ecore_con_url_http_post_send(Ecore_Con_Url *url_con, void *curl_httppost);

#ifdef __cplusplus
}
#endif

#endif
