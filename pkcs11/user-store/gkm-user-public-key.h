/*
 * gnome-keyring
 *
 * Copyright (C) 2008 Stefan Walter
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 */

#ifndef __GKM_USER_PUBLIC_KEY_H__
#define __GKM_USER_PUBLIC_KEY_H__

#include <glib-object.h>

#include "gkm/gkm-public-xsa-key.h"

#define GKM_FACTORY_USER_PUBLIC_KEY            (gkm_user_public_key_get_factory ())

#define GKM_TYPE_USER_PUBLIC_KEY               (gkm_user_public_key_get_type ())
#define GKM_USER_PUBLIC_KEY(obj)               (G_TYPE_CHECK_INSTANCE_CAST ((obj), GKM_TYPE_USER_PUBLIC_KEY, GkmUserPublicKey))
#define GKM_USER_PUBLIC_KEY_CLASS(klass)       (G_TYPE_CHECK_CLASS_CAST ((klass), GKM_TYPE_USER_PUBLIC_KEY, GkmUserPublicKeyClass))
#define GKM_IS_USER_PUBLIC_KEY(obj)            (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GKM_TYPE_USER_PUBLIC_KEY))
#define GKM_IS_USER_PUBLIC_KEY_CLASS(klass)    (G_TYPE_CHECK_CLASS_TYPE ((klass), GKM_TYPE_USER_PUBLIC_KEY))
#define GKM_USER_PUBLIC_KEY_GET_CLASS(obj)     (G_TYPE_INSTANCE_GET_CLASS ((obj), GKM_TYPE_USER_PUBLIC_KEY, GkmUserPublicKeyClass))

typedef struct _GkmUserPublicKey GkmUserPublicKey;
typedef struct _GkmUserPublicKeyClass GkmUserPublicKeyClass;

struct _GkmUserPublicKeyClass {
	GkmPublicXsaKeyClass parent_class;
};

GType                gkm_user_public_key_get_type               (void);

GkmFactory*          gkm_user_public_key_get_factory            (void);

GkmUserPublicKey*    gkm_user_public_key_new                    (const gchar *unique);

#endif /* __GKM_USER_PUBLIC_KEY_H__ */
