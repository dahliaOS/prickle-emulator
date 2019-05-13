/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI visitors
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu/osdep.h"
#include "qemu-common.h"
#include "qapi/error.h"
#include "qapi/qmp/qerror.h"
#include "qapi-visit-rdma.h"

void visit_type_q_obj_RDMA_GID_STATUS_CHANGED_arg_members(Visitor *v, q_obj_RDMA_GID_STATUS_CHANGED_arg *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_str(v, "netdev", &obj->netdev, &err);
    if (err) {
        goto out;
    }
    visit_type_bool(v, "gid-status", &obj->gid_status, &err);
    if (err) {
        goto out;
    }
    visit_type_uint64(v, "subnet-prefix", &obj->subnet_prefix, &err);
    if (err) {
        goto out;
    }
    visit_type_uint64(v, "interface-id", &obj->interface_id, &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_rdma_c;
