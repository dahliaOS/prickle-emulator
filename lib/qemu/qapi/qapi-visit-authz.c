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
#include "qapi-visit-authz.h"

void visit_type_QAuthZListPolicy(Visitor *v, const char *name, QAuthZListPolicy *obj, Error **errp)
{
    int value = *obj;
    visit_type_enum(v, name, &value, &QAuthZListPolicy_lookup, errp);
    *obj = value;
}

void visit_type_QAuthZListFormat(Visitor *v, const char *name, QAuthZListFormat *obj, Error **errp)
{
    int value = *obj;
    visit_type_enum(v, name, &value, &QAuthZListFormat_lookup, errp);
    *obj = value;
}

void visit_type_QAuthZListRule_members(Visitor *v, QAuthZListRule *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_str(v, "match", &obj->match, &err);
    if (err) {
        goto out;
    }
    visit_type_QAuthZListPolicy(v, "policy", &obj->policy, &err);
    if (err) {
        goto out;
    }
    if (visit_optional(v, "format", &obj->has_format)) {
        visit_type_QAuthZListFormat(v, "format", &obj->format, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}

void visit_type_QAuthZListRule(Visitor *v, const char *name, QAuthZListRule **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(QAuthZListRule), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_QAuthZListRule_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_QAuthZListRule(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_QAuthZListRuleList(Visitor *v, const char *name, QAuthZListRuleList **obj, Error **errp)
{
    Error *err = NULL;
    QAuthZListRuleList *tail;
    size_t size = sizeof(**obj);

    visit_start_list(v, name, (GenericList **)obj, size, &err);
    if (err) {
        goto out;
    }

    for (tail = *obj; tail;
         tail = (QAuthZListRuleList *)visit_next_list(v, (GenericList *)tail, size)) {
        visit_type_QAuthZListRule(v, NULL, &tail->value, &err);
        if (err) {
            break;
        }
    }

    if (!err) {
        visit_check_list(v, &err);
    }
    visit_end_list(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_QAuthZListRuleList(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_QAuthZListRuleListHack_members(Visitor *v, QAuthZListRuleListHack *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_QAuthZListRuleList(v, "unused", &obj->unused, &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_QAuthZListRuleListHack(Visitor *v, const char *name, QAuthZListRuleListHack **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(QAuthZListRuleListHack), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_QAuthZListRuleListHack_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_QAuthZListRuleListHack(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_authz_c;
