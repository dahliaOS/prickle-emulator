/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI/QMP events
 *
 * Copyright (c) 2014 Wenchao Xia
 * Copyright (c) 2015-2018 Red Hat Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu/osdep.h"
#include "qemu-common.h"
#include "qapi-emit-events.h"
#include "qapi-events-misc.h"
#include "qapi-visit-misc.h"
#include "qapi/error.h"
#include "qapi/qmp/qdict.h"
#include "qapi/qobject-output-visitor.h"
#include "qapi/qmp-event.h"


void qapi_event_send_balloon_change(int64_t actual)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_BALLOON_CHANGE_arg param = {
        actual
    };

    qmp = qmp_event_build_dict("BALLOON_CHANGE");

    v = qobject_output_visitor_new(&obj);

    visit_start_struct(v, "BALLOON_CHANGE", NULL, 0, &error_abort);
    visit_type_q_obj_BALLOON_CHANGE_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    qdict_put_obj(qmp, "data", obj);
    qapi_event_emit(QAPI_EVENT_BALLOON_CHANGE, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_device_deleted(bool has_device, const char *device, const char *path)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_DEVICE_DELETED_arg param = {
        has_device, (char *)device, (char *)path
    };

    qmp = qmp_event_build_dict("DEVICE_DELETED");

    v = qobject_output_visitor_new(&obj);

    visit_start_struct(v, "DEVICE_DELETED", NULL, 0, &error_abort);
    visit_type_q_obj_DEVICE_DELETED_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    qdict_put_obj(qmp, "data", obj);
    qapi_event_emit(QAPI_EVENT_DEVICE_DELETED, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_dump_completed(DumpQueryResult *result, bool has_error, const char *error)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_DUMP_COMPLETED_arg param = {
        result, has_error, (char *)error
    };

    qmp = qmp_event_build_dict("DUMP_COMPLETED");

    v = qobject_output_visitor_new(&obj);

    visit_start_struct(v, "DUMP_COMPLETED", NULL, 0, &error_abort);
    visit_type_q_obj_DUMP_COMPLETED_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    qdict_put_obj(qmp, "data", obj);
    qapi_event_emit(QAPI_EVENT_DUMP_COMPLETED, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_mem_unplug_error(const char *device, const char *msg)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_MEM_UNPLUG_ERROR_arg param = {
        (char *)device, (char *)msg
    };

    qmp = qmp_event_build_dict("MEM_UNPLUG_ERROR");

    v = qobject_output_visitor_new(&obj);

    visit_start_struct(v, "MEM_UNPLUG_ERROR", NULL, 0, &error_abort);
    visit_type_q_obj_MEM_UNPLUG_ERROR_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    qdict_put_obj(qmp, "data", obj);
    qapi_event_emit(QAPI_EVENT_MEM_UNPLUG_ERROR, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_acpi_device_ost(ACPIOSTInfo *info)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_ACPI_DEVICE_OST_arg param = {
        info
    };

    qmp = qmp_event_build_dict("ACPI_DEVICE_OST");

    v = qobject_output_visitor_new(&obj);

    visit_start_struct(v, "ACPI_DEVICE_OST", NULL, 0, &error_abort);
    visit_type_q_obj_ACPI_DEVICE_OST_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    qdict_put_obj(qmp, "data", obj);
    qapi_event_emit(QAPI_EVENT_ACPI_DEVICE_OST, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_events_misc_c;
