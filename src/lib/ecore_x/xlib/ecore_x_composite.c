/*
 * vim:ts=8:sw=3:sts=8:noexpandtab:cino=>5n-3f0^-2{2
 */

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif


#include "ecore_x_private.h"
#include "Ecore_X.h"

static int _composite_available;

void
_ecore_x_composite_init(void)
{
   _composite_available = 0;

#ifdef ECORE_XCOMPOSITE
   int major, minor;

   if (XCompositeQueryVersion(_ecore_x_disp, &major, &minor))
     _composite_available = 1;
#endif
}

EAPI int
ecore_x_composite_query(void)
{
   return _composite_available;
}

EAPI Ecore_X_Pixmap
ecore_x_composite_name_window_pixmap_get(Ecore_X_Window win)
{
   Ecore_X_Pixmap pixmap;
  
#ifdef ECORE_XCOMPOSITE
   pixmap = XCompositeNameWindowPixmap(_ecore_x_disp, win);
#else
   return None;
#endif

   return pixmap;
}
