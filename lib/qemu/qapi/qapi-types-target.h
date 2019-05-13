/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI types
 *
 * Copyright IBM, Corp. 2011
 * Copyright (c) 2013-2018 Red Hat Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QAPI_TYPES_TARGET_H
#define QAPI_TYPES_TARGET_H

#include "qapi/qapi-builtin-types.h"
#include "qapi-types-misc.h"

#if defined(TARGET_ALPHA) || defined(TARGET_ARM) || defined(TARGET_HPPA) || defined(TARGET_I386) || defined(TARGET_MIPS) || defined(TARGET_MIPS64) || defined(TARGET_MOXIE) || defined(TARGET_PPC) || defined(TARGET_PPC64) || defined(TARGET_S390X) || defined(TARGET_SH4) || defined(TARGET_SPARC)
typedef struct q_obj_RTC_CHANGE_arg q_obj_RTC_CHANGE_arg;
#endif /* defined(TARGET_ALPHA) || defined(TARGET_ARM) || defined(TARGET_HPPA) || defined(TARGET_I386) || defined(TARGET_MIPS) || defined(TARGET_MIPS64) || defined(TARGET_MOXIE) || defined(TARGET_PPC) || defined(TARGET_PPC64) || defined(TARGET_S390X) || defined(TARGET_SH4) || defined(TARGET_SPARC) */

#if defined(TARGET_I386)
typedef enum SevState {
    SEV_STATE_UNINIT,
    SEV_STATE_LAUNCH_UPDATE,
    SEV_STATE_LAUNCH_SECRET,
    SEV_STATE_RUNNING,
    SEV_STATE_SEND_UPDATE,
    SEV_STATE_RECEIVE_UPDATE,
    SEV_STATE__MAX,
} SevState;

#define SevState_str(val) \
    qapi_enum_lookup(&SevState_lookup, (val))

extern const QEnumLookup SevState_lookup;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
typedef struct SevInfo SevInfo;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
typedef struct SevLaunchMeasureInfo SevLaunchMeasureInfo;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
typedef struct SevCapability SevCapability;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_S390X)
typedef struct q_obj_dump_skeys_arg q_obj_dump_skeys_arg;
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
typedef struct CpuModelBaselineInfo CpuModelBaselineInfo;
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
typedef struct CpuModelCompareInfo CpuModelCompareInfo;
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
typedef struct q_obj_query_cpu_model_comparison_arg q_obj_query_cpu_model_comparison_arg;
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
typedef struct q_obj_query_cpu_model_baseline_arg q_obj_query_cpu_model_baseline_arg;
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_ARM)
typedef struct GICCapability GICCapability;
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_ARM)
typedef struct GICCapabilityList GICCapabilityList;
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_S390X) || defined(TARGET_I386)
typedef struct CpuModelExpansionInfo CpuModelExpansionInfo;
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) */

#if defined(TARGET_S390X) || defined(TARGET_I386)
typedef struct q_obj_query_cpu_model_expansion_arg q_obj_query_cpu_model_expansion_arg;
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) */

#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS)
typedef struct CpuDefinitionInfo CpuDefinitionInfo;
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) */

#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS)
typedef struct CpuDefinitionInfoList CpuDefinitionInfoList;
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) */

#if defined(TARGET_ALPHA) || defined(TARGET_ARM) || defined(TARGET_HPPA) || defined(TARGET_I386) || defined(TARGET_MIPS) || defined(TARGET_MIPS64) || defined(TARGET_MOXIE) || defined(TARGET_PPC) || defined(TARGET_PPC64) || defined(TARGET_S390X) || defined(TARGET_SH4) || defined(TARGET_SPARC)
struct q_obj_RTC_CHANGE_arg {
    int64_t offset;
};
#endif /* defined(TARGET_ALPHA) || defined(TARGET_ARM) || defined(TARGET_HPPA) || defined(TARGET_I386) || defined(TARGET_MIPS) || defined(TARGET_MIPS64) || defined(TARGET_MOXIE) || defined(TARGET_PPC) || defined(TARGET_PPC64) || defined(TARGET_S390X) || defined(TARGET_SH4) || defined(TARGET_SPARC) */

#if defined(TARGET_I386)
struct SevInfo {
    bool enabled;
    uint8_t api_major;
    uint8_t api_minor;
    uint8_t build_id;
    uint32_t policy;
    SevState state;
    uint32_t handle;
};
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_SevInfo(SevInfo *obj);
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
struct SevLaunchMeasureInfo {
    char *data;
};
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_SevLaunchMeasureInfo(SevLaunchMeasureInfo *obj);
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
struct SevCapability {
    char *pdh;
    char *cert_chain;
    int64_t cbitpos;
    int64_t reduced_phys_bits;
};
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_SevCapability(SevCapability *obj);
#endif /* defined(TARGET_I386) */

#if defined(TARGET_S390X)
struct q_obj_dump_skeys_arg {
    char *filename;
};
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
struct CpuModelBaselineInfo {
    CpuModelInfo *model;
};
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
void qapi_free_CpuModelBaselineInfo(CpuModelBaselineInfo *obj);
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
struct CpuModelCompareInfo {
    CpuModelCompareResult result;
    strList *responsible_properties;
};
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
void qapi_free_CpuModelCompareInfo(CpuModelCompareInfo *obj);
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
struct q_obj_query_cpu_model_comparison_arg {
    CpuModelInfo *modela;
    CpuModelInfo *modelb;
};
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
struct q_obj_query_cpu_model_baseline_arg {
    CpuModelInfo *modela;
    CpuModelInfo *modelb;
};
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_ARM)
struct GICCapability {
    int64_t version;
    bool emulated;
    bool kernel;
};
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_ARM)
void qapi_free_GICCapability(GICCapability *obj);
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_ARM)
struct GICCapabilityList {
    GICCapabilityList *next;
    GICCapability *value;
};

void qapi_free_GICCapabilityList(GICCapabilityList *obj);
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_S390X) || defined(TARGET_I386)
struct CpuModelExpansionInfo {
    CpuModelInfo *model;
};
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) */

#if defined(TARGET_S390X) || defined(TARGET_I386)
void qapi_free_CpuModelExpansionInfo(CpuModelExpansionInfo *obj);
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) */

#if defined(TARGET_S390X) || defined(TARGET_I386)
struct q_obj_query_cpu_model_expansion_arg {
    CpuModelExpansionType type;
    CpuModelInfo *model;
};
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) */

#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS)
struct CpuDefinitionInfo {
    char *name;
    bool has_migration_safe;
    bool migration_safe;
    bool q_static;
    bool has_unavailable_features;
    strList *unavailable_features;
    char *q_typename;
};
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) */

#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS)
void qapi_free_CpuDefinitionInfo(CpuDefinitionInfo *obj);
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) */

#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS)
struct CpuDefinitionInfoList {
    CpuDefinitionInfoList *next;
    CpuDefinitionInfo *value;
};

void qapi_free_CpuDefinitionInfoList(CpuDefinitionInfoList *obj);
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) */

#endif /* QAPI_TYPES_TARGET_H */
