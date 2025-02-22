/*
 * include/haproxy/lb_map.h
 * Map-based load-balancing (RR and HASH)
 *
 * Copyright (C) 2000-2009 Willy Tarreau - w@1wt.eu
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, version 2.1
 * exclusively.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef _HAPROXY_LB_MAP_H
#define _HAPROXY_LB_MAP_H

#include <haproxy/api.h>
#include <haproxy/proxy-t.h>
#include <haproxy/server-t.h>

void recalc_server_map(struct proxy *px);
void init_server_map(struct proxy *p);
struct server *map_get_server_rr(struct proxy *px, struct server *srvtoavoid);
struct server *map_get_server_hash(struct proxy *px, unsigned int hash);
struct server *map_get_server_tcphdr(struct proxy *px, char *nodeid);


#endif /* _HAPROXY_LB_MAP_H */

/*
 * Local variables:
 *  c-indent-level: 8
 *  c-basic-offset: 8
 * End:
 */
