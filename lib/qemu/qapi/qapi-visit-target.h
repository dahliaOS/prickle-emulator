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

#ifndef QAPI_VISIT_TARGET_H
#define QAPI_VISIT_TARGET_H

#include "qapi/qapi-builtin-visit.h"
#include "qapi-types-target.h"

#include "qapi-visit-misc.h"

#if defined(TARGET_ALPHA) || defined(TARGET_ARM) || defined(TARGET_HPPA) || defined(TARGET_I386) || defined(TARGET_MIPS) || defined(TARGET_MIPS64) || defined(TARGET_MOXIE) || defined(TARGET_PPC) || defined(TARGET_PPC64) || defined(TARGET_S390X) || defined(TARGET_SH4) || defined(TARGET_SPARC)
void visit_type_q_obj_RTC_CHANGE_arg_members(Visitor *v, q_obj_RTC_CHANGE_arg *obj, Error **errp);
#endif /* defined(TARGET_ALPHA) || defined(TARGET_ARM) || defined(TARGET_HPPA) || defined(TARGET_I386) || defined(TARGET_MIPS) || defined(TARGET_MIPS64) || defined(TARGET_MOXIE) || defined(TARGET_PPC) || defined(TARGET_PPC64) || defined(TARGET_S390X) || defined(TARGET_SH4) || defined(TARGET_SPARC) */
#if defined(TARGET_I386)
void visit_type_SevState(Visitor *v, const char *name, SevState *obj, Error **errp);
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void visit_type_SevInfo_members(Visitor *v, SevInfo *obj, Error **errp);
void visit_type_SevInfo(Visitor *v, const char *name, SevInfo **obj, Error **errp);
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void visit_type_SevLaunchMeasureInfo_members(Visitor *v, SevLaunchMeasureInfo *obj, Error **errp);
void visit_type_SevLaunchMeasureInfo(Visitor *v, const char *name, SevLaunchMeasureInfo **obj, Error **errp);
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void visit_type_SevCapability_members(Visitor *v, SevCapability *obj, Error **errp);
void visit_type_SevCapability(Visitor *v, const char *name, SevCapability **obj, Error **errp);
#endif /* defined(TARGET_I386) */

#if defined(TARGET_S390X)
void visit_type_q_obj_dump_skeys_arg_members(Visitor *v, q_obj_dump_skeys_arg *obj, Error **errp);
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
void visit_type_CpuModelBaselineInfo_members(Visitor *v, CpuModelBaselineInfo *obj, Error **errp);
void visit_type_CpuModelBaselineInfo(Visitor *v, const char *name, CpuModelBaselineInfo **obj, Error **errp);
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
void visit_type_CpuModelCompareInfo_members(Visitor *v, CpuModelCompareInfo *obj, Error **errp);
void visit_type_CpuModelCompareInfo(Visitor *v, const char *name, CpuModelCompareInfo **obj, Error **errp);
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
void visit_type_q_obj_query_cpu_model_comparison_arg_members(Visitor *v, q_obj_query_cpu_model_comparison_arg *obj, Error **errp);
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
void visit_type_q_obj_query_cpu_model_baseline_arg_members(Visitor *v, q_obj_query_cpu_model_baseline_arg *obj, Error **errp);
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_ARM)
void visit_type_GICCapability_members(Visitor *v, GICCapability *obj, Error **errp);
void visit_type_GICCapability(Visitor *v, const char *name, GICCapability **obj, Error **errp);
#endif /* defined(TARGET_ARM) */
#if defined(TARGET_ARM)
void visit_type_GICCapabilityList(Visitor *v, const char *name, GICCapabilityList **obj, Error **errp);
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_S390X) || defined(TARGET_I386)
void visit_type_CpuModelExpansionInfo_members(Visitor *v, CpuModelExpansionInfo *obj, Error **errp);
void visit_type_CpuModelExpansionInfo(Visitor *v, const char *name, CpuModelExpansionInfo **obj, Error **errp);
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) */

#if defined(TARGET_S390X) || defined(TARGET_I386)
void visit_type_q_obj_query_cpu_model_expansion_arg_members(Visitor *v, q_obj_query_cpu_model_expansion_arg *obj, Error **errp);
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) */

#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS)
void visit_type_CpuDefinitionInfo_members(Visitor *v, CpuDefinitionInfo *obj, Error **errp);
void visit_type_CpuDefinitionInfo(Visitor *v, const char *name, CpuDefinitionInfo **obj, Error **errp);
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) */
#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS)
void visit_type_CpuDefinitionInfoList(Visitor *v, const char *name, CpuDefinitionInfoList **obj, Error **errp);
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) */

#endif /* QAPI_VISIT_TARGET_H */
