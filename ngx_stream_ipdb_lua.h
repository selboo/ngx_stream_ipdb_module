/*
 * Copyright (C) vislee
 */

#ifndef _NGX_STREAM_IPDB_LUA_H
#define _NGX_STREAM_IPDB_LUA_H

#include <ngx_config.h>
#include <ngx_core.h>
#include <lualib.h>
#include <lauxlib.h>
#include <ngx_stream_lua_api.h>

ngx_int_t ngx_stream_ipdb_lua_preload(ngx_conf_t *cf);

#endif