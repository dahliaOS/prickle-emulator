/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI/QMP commands
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu/osdep.h"
#include "qemu-common.h"
#include "qemu/module.h"
#include "qapi/visitor.h"
#include "qapi/qmp/qdict.h"
#include "qapi/qobject-output-visitor.h"
#include "qapi/qobject-input-visitor.h"
#include "qapi/dealloc-visitor.h"
#include "qapi/error.h"
#include "qapi-visit-target.h"
#include "qapi-commands-target.h"


#if defined(TARGET_I386)
void qmp_marshal_rtc_reset_reinjection(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    qmp_rtc_reset_reinjection(&err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
static void qmp_marshal_output_SevInfo(SevInfo *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_SevInfo(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_SevInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qmp_marshal_query_sev(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    SevInfo *retval;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    retval = qmp_query_sev(&err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_SevInfo(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
static void qmp_marshal_output_SevLaunchMeasureInfo(SevLaunchMeasureInfo *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_SevLaunchMeasureInfo(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_SevLaunchMeasureInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qmp_marshal_query_sev_launch_measure(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    SevLaunchMeasureInfo *retval;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    retval = qmp_query_sev_launch_measure(&err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_SevLaunchMeasureInfo(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
static void qmp_marshal_output_SevCapability(SevCapability *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_SevCapability(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_SevCapability(v, "unused", &ret_in, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qmp_marshal_query_sev_capabilities(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    SevCapability *retval;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    retval = qmp_query_sev_capabilities(&err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_SevCapability(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_S390X)
void qmp_marshal_dump_skeys(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    Visitor *v;
    q_obj_dump_skeys_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    visit_start_struct(v, NULL, NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_dump_skeys_arg_members(v, &arg, &err);
    if (!err) {
        visit_check_struct(v, &err);
    }
    visit_end_struct(v, NULL);
    if (err) {
        goto out;
    }

    qmp_dump_skeys(arg.filename, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_dump_skeys_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
static void qmp_marshal_output_CpuModelCompareInfo(CpuModelCompareInfo *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_CpuModelCompareInfo(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_CpuModelCompareInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
void qmp_marshal_query_cpu_model_comparison(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    CpuModelCompareInfo *retval;
    Visitor *v;
    q_obj_query_cpu_model_comparison_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    visit_start_struct(v, NULL, NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_query_cpu_model_comparison_arg_members(v, &arg, &err);
    if (!err) {
        visit_check_struct(v, &err);
    }
    visit_end_struct(v, NULL);
    if (err) {
        goto out;
    }

    retval = qmp_query_cpu_model_comparison(arg.modela, arg.modelb, &err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_CpuModelCompareInfo(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_query_cpu_model_comparison_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
static void qmp_marshal_output_CpuModelBaselineInfo(CpuModelBaselineInfo *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_CpuModelBaselineInfo(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_CpuModelBaselineInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
void qmp_marshal_query_cpu_model_baseline(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    CpuModelBaselineInfo *retval;
    Visitor *v;
    q_obj_query_cpu_model_baseline_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    visit_start_struct(v, NULL, NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_query_cpu_model_baseline_arg_members(v, &arg, &err);
    if (!err) {
        visit_check_struct(v, &err);
    }
    visit_end_struct(v, NULL);
    if (err) {
        goto out;
    }

    retval = qmp_query_cpu_model_baseline(arg.modela, arg.modelb, &err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_CpuModelBaselineInfo(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_query_cpu_model_baseline_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_ARM)
static void qmp_marshal_output_GICCapabilityList(GICCapabilityList *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_GICCapabilityList(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_GICCapabilityList(v, "unused", &ret_in, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_ARM)
void qmp_marshal_query_gic_capabilities(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    GICCapabilityList *retval;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    retval = qmp_query_gic_capabilities(&err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_GICCapabilityList(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_S390X) || defined(TARGET_I386)
static void qmp_marshal_output_CpuModelExpansionInfo(CpuModelExpansionInfo *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_CpuModelExpansionInfo(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_CpuModelExpansionInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) */

#if defined(TARGET_S390X) || defined(TARGET_I386)
void qmp_marshal_query_cpu_model_expansion(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    CpuModelExpansionInfo *retval;
    Visitor *v;
    q_obj_query_cpu_model_expansion_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    visit_start_struct(v, NULL, NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_query_cpu_model_expansion_arg_members(v, &arg, &err);
    if (!err) {
        visit_check_struct(v, &err);
    }
    visit_end_struct(v, NULL);
    if (err) {
        goto out;
    }

    retval = qmp_query_cpu_model_expansion(arg.type, arg.model, &err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_CpuModelExpansionInfo(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_query_cpu_model_expansion_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) */

#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS)
static void qmp_marshal_output_CpuDefinitionInfoList(CpuDefinitionInfoList *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_CpuDefinitionInfoList(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_CpuDefinitionInfoList(v, "unused", &ret_in, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) */

#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS)
void qmp_marshal_query_cpu_definitions(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    CpuDefinitionInfoList *retval;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    retval = qmp_query_cpu_definitions(&err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_CpuDefinitionInfoList(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) */

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_commands_target_c;
