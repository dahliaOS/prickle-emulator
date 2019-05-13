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

#ifndef QAPI_TYPES_MIGRATION_H
#define QAPI_TYPES_MIGRATION_H

#include "qapi/qapi-builtin-types.h"
#include "qapi-types-common.h"
#include "qapi-types-sockets.h"

typedef struct MigrationStats MigrationStats;

typedef struct XBZRLECacheStats XBZRLECacheStats;

typedef struct CompressionStats CompressionStats;

typedef enum MigrationStatus {
    MIGRATION_STATUS_NONE,
    MIGRATION_STATUS_SETUP,
    MIGRATION_STATUS_CANCELLING,
    MIGRATION_STATUS_CANCELLED,
    MIGRATION_STATUS_ACTIVE,
    MIGRATION_STATUS_POSTCOPY_ACTIVE,
    MIGRATION_STATUS_POSTCOPY_PAUSED,
    MIGRATION_STATUS_POSTCOPY_RECOVER,
    MIGRATION_STATUS_COMPLETED,
    MIGRATION_STATUS_FAILED,
    MIGRATION_STATUS_COLO,
    MIGRATION_STATUS_PRE_SWITCHOVER,
    MIGRATION_STATUS_DEVICE,
    MIGRATION_STATUS__MAX,
} MigrationStatus;

#define MigrationStatus_str(val) \
    qapi_enum_lookup(&MigrationStatus_lookup, (val))

extern const QEnumLookup MigrationStatus_lookup;

typedef struct MigrationInfo MigrationInfo;

typedef enum MigrationCapability {
    MIGRATION_CAPABILITY_XBZRLE,
    MIGRATION_CAPABILITY_RDMA_PIN_ALL,
    MIGRATION_CAPABILITY_AUTO_CONVERGE,
    MIGRATION_CAPABILITY_ZERO_BLOCKS,
    MIGRATION_CAPABILITY_COMPRESS,
    MIGRATION_CAPABILITY_EVENTS,
    MIGRATION_CAPABILITY_POSTCOPY_RAM,
    MIGRATION_CAPABILITY_X_COLO,
    MIGRATION_CAPABILITY_RELEASE_RAM,
    MIGRATION_CAPABILITY_BLOCK,
    MIGRATION_CAPABILITY_RETURN_PATH,
    MIGRATION_CAPABILITY_PAUSE_BEFORE_SWITCHOVER,
    MIGRATION_CAPABILITY_MULTIFD,
    MIGRATION_CAPABILITY_DIRTY_BITMAPS,
    MIGRATION_CAPABILITY_POSTCOPY_BLOCKTIME,
    MIGRATION_CAPABILITY_LATE_BLOCK_ACTIVATE,
    MIGRATION_CAPABILITY_X_IGNORE_SHARED,
    MIGRATION_CAPABILITY__MAX,
} MigrationCapability;

#define MigrationCapability_str(val) \
    qapi_enum_lookup(&MigrationCapability_lookup, (val))

extern const QEnumLookup MigrationCapability_lookup;

typedef struct MigrationCapabilityStatus MigrationCapabilityStatus;

typedef struct MigrationCapabilityStatusList MigrationCapabilityStatusList;

typedef struct q_obj_migrate_set_capabilities_arg q_obj_migrate_set_capabilities_arg;

typedef enum MigrationParameter {
    MIGRATION_PARAMETER_ANNOUNCE_INITIAL,
    MIGRATION_PARAMETER_ANNOUNCE_MAX,
    MIGRATION_PARAMETER_ANNOUNCE_ROUNDS,
    MIGRATION_PARAMETER_ANNOUNCE_STEP,
    MIGRATION_PARAMETER_COMPRESS_LEVEL,
    MIGRATION_PARAMETER_COMPRESS_THREADS,
    MIGRATION_PARAMETER_DECOMPRESS_THREADS,
    MIGRATION_PARAMETER_COMPRESS_WAIT_THREAD,
    MIGRATION_PARAMETER_CPU_THROTTLE_INITIAL,
    MIGRATION_PARAMETER_CPU_THROTTLE_INCREMENT,
    MIGRATION_PARAMETER_TLS_CREDS,
    MIGRATION_PARAMETER_TLS_HOSTNAME,
    MIGRATION_PARAMETER_TLS_AUTHZ,
    MIGRATION_PARAMETER_MAX_BANDWIDTH,
    MIGRATION_PARAMETER_DOWNTIME_LIMIT,
    MIGRATION_PARAMETER_X_CHECKPOINT_DELAY,
    MIGRATION_PARAMETER_BLOCK_INCREMENTAL,
    MIGRATION_PARAMETER_MULTIFD_CHANNELS,
    MIGRATION_PARAMETER_XBZRLE_CACHE_SIZE,
    MIGRATION_PARAMETER_MAX_POSTCOPY_BANDWIDTH,
    MIGRATION_PARAMETER_MAX_CPU_THROTTLE,
    MIGRATION_PARAMETER__MAX,
} MigrationParameter;

#define MigrationParameter_str(val) \
    qapi_enum_lookup(&MigrationParameter_lookup, (val))

extern const QEnumLookup MigrationParameter_lookup;

typedef struct MigrateSetParameters MigrateSetParameters;

typedef struct MigrationParameters MigrationParameters;

typedef struct q_obj_client_migrate_info_arg q_obj_client_migrate_info_arg;

typedef struct q_obj_MIGRATION_arg q_obj_MIGRATION_arg;

typedef struct q_obj_MIGRATION_PASS_arg q_obj_MIGRATION_PASS_arg;

typedef enum COLOMessage {
    COLO_MESSAGE_CHECKPOINT_READY,
    COLO_MESSAGE_CHECKPOINT_REQUEST,
    COLO_MESSAGE_CHECKPOINT_REPLY,
    COLO_MESSAGE_VMSTATE_SEND,
    COLO_MESSAGE_VMSTATE_SIZE,
    COLO_MESSAGE_VMSTATE_RECEIVED,
    COLO_MESSAGE_VMSTATE_LOADED,
    COLO_MESSAGE__MAX,
} COLOMessage;

#define COLOMessage_str(val) \
    qapi_enum_lookup(&COLOMessage_lookup, (val))

extern const QEnumLookup COLOMessage_lookup;

typedef enum COLOMode {
    COLO_MODE_NONE,
    COLO_MODE_PRIMARY,
    COLO_MODE_SECONDARY,
    COLO_MODE__MAX,
} COLOMode;

#define COLOMode_str(val) \
    qapi_enum_lookup(&COLOMode_lookup, (val))

extern const QEnumLookup COLOMode_lookup;

typedef enum FailoverStatus {
    FAILOVER_STATUS_NONE,
    FAILOVER_STATUS_REQUIRE,
    FAILOVER_STATUS_ACTIVE,
    FAILOVER_STATUS_COMPLETED,
    FAILOVER_STATUS_RELAUNCH,
    FAILOVER_STATUS__MAX,
} FailoverStatus;

#define FailoverStatus_str(val) \
    qapi_enum_lookup(&FailoverStatus_lookup, (val))

extern const QEnumLookup FailoverStatus_lookup;

typedef struct q_obj_COLO_EXIT_arg q_obj_COLO_EXIT_arg;

typedef enum COLOExitReason {
    COLO_EXIT_REASON_NONE,
    COLO_EXIT_REASON_REQUEST,
    COLO_EXIT_REASON_ERROR,
    COLO_EXIT_REASON_PROCESSING,
    COLO_EXIT_REASON__MAX,
} COLOExitReason;

#define COLOExitReason_str(val) \
    qapi_enum_lookup(&COLOExitReason_lookup, (val))

extern const QEnumLookup COLOExitReason_lookup;

typedef struct q_obj_migrate_continue_arg q_obj_migrate_continue_arg;

typedef struct q_obj_migrate_set_downtime_arg q_obj_migrate_set_downtime_arg;

typedef struct q_obj_migrate_set_speed_arg q_obj_migrate_set_speed_arg;

typedef struct q_obj_migrate_set_cache_size_arg q_obj_migrate_set_cache_size_arg;

typedef struct q_obj_migrate_arg q_obj_migrate_arg;

typedef struct q_obj_migrate_incoming_arg q_obj_migrate_incoming_arg;

typedef struct q_obj_xen_save_devices_state_arg q_obj_xen_save_devices_state_arg;

#if defined(CONFIG_REPLICATION)
typedef struct q_obj_xen_set_replication_arg q_obj_xen_set_replication_arg;
#endif /* defined(CONFIG_REPLICATION) */

#if defined(CONFIG_REPLICATION)
typedef struct ReplicationStatus ReplicationStatus;
#endif /* defined(CONFIG_REPLICATION) */

typedef struct COLOStatus COLOStatus;

typedef struct q_obj_migrate_recover_arg q_obj_migrate_recover_arg;

struct MigrationStats {
    int64_t transferred;
    int64_t remaining;
    int64_t total;
    int64_t duplicate;
    int64_t skipped;
    int64_t normal;
    int64_t normal_bytes;
    int64_t dirty_pages_rate;
    double mbps;
    int64_t dirty_sync_count;
    int64_t postcopy_requests;
    int64_t page_size;
    uint64_t multifd_bytes;
    uint64_t pages_per_second;
};

void qapi_free_MigrationStats(MigrationStats *obj);

struct XBZRLECacheStats {
    int64_t cache_size;
    int64_t bytes;
    int64_t pages;
    int64_t cache_miss;
    double cache_miss_rate;
    int64_t overflow;
};

void qapi_free_XBZRLECacheStats(XBZRLECacheStats *obj);

struct CompressionStats {
    int64_t pages;
    int64_t busy;
    double busy_rate;
    int64_t compressed_size;
    double compression_rate;
};

void qapi_free_CompressionStats(CompressionStats *obj);

struct MigrationInfo {
    bool has_status;
    MigrationStatus status;
    bool has_ram;
    MigrationStats *ram;
    bool has_disk;
    MigrationStats *disk;
    bool has_xbzrle_cache;
    XBZRLECacheStats *xbzrle_cache;
    bool has_total_time;
    int64_t total_time;
    bool has_expected_downtime;
    int64_t expected_downtime;
    bool has_downtime;
    int64_t downtime;
    bool has_setup_time;
    int64_t setup_time;
    bool has_cpu_throttle_percentage;
    int64_t cpu_throttle_percentage;
    bool has_error_desc;
    char *error_desc;
    bool has_postcopy_blocktime;
    uint32_t postcopy_blocktime;
    bool has_postcopy_vcpu_blocktime;
    uint32List *postcopy_vcpu_blocktime;
    bool has_compression;
    CompressionStats *compression;
    bool has_socket_address;
    SocketAddressList *socket_address;
};

void qapi_free_MigrationInfo(MigrationInfo *obj);

struct MigrationCapabilityStatus {
    MigrationCapability capability;
    bool state;
};

void qapi_free_MigrationCapabilityStatus(MigrationCapabilityStatus *obj);

struct MigrationCapabilityStatusList {
    MigrationCapabilityStatusList *next;
    MigrationCapabilityStatus *value;
};

void qapi_free_MigrationCapabilityStatusList(MigrationCapabilityStatusList *obj);

struct q_obj_migrate_set_capabilities_arg {
    MigrationCapabilityStatusList *capabilities;
};

struct MigrateSetParameters {
    bool has_announce_initial;
    uint64_t announce_initial;
    bool has_announce_max;
    uint64_t announce_max;
    bool has_announce_rounds;
    uint64_t announce_rounds;
    bool has_announce_step;
    uint64_t announce_step;
    bool has_compress_level;
    int64_t compress_level;
    bool has_compress_threads;
    int64_t compress_threads;
    bool has_compress_wait_thread;
    bool compress_wait_thread;
    bool has_decompress_threads;
    int64_t decompress_threads;
    bool has_cpu_throttle_initial;
    int64_t cpu_throttle_initial;
    bool has_cpu_throttle_increment;
    int64_t cpu_throttle_increment;
    bool has_tls_creds;
    StrOrNull *tls_creds;
    bool has_tls_hostname;
    StrOrNull *tls_hostname;
    bool has_tls_authz;
    StrOrNull *tls_authz;
    bool has_max_bandwidth;
    int64_t max_bandwidth;
    bool has_downtime_limit;
    int64_t downtime_limit;
    bool has_x_checkpoint_delay;
    int64_t x_checkpoint_delay;
    bool has_block_incremental;
    bool block_incremental;
    bool has_multifd_channels;
    int64_t multifd_channels;
    bool has_xbzrle_cache_size;
    uint64_t xbzrle_cache_size;
    bool has_max_postcopy_bandwidth;
    uint64_t max_postcopy_bandwidth;
    bool has_max_cpu_throttle;
    int64_t max_cpu_throttle;
};

void qapi_free_MigrateSetParameters(MigrateSetParameters *obj);

struct MigrationParameters {
    bool has_announce_initial;
    uint64_t announce_initial;
    bool has_announce_max;
    uint64_t announce_max;
    bool has_announce_rounds;
    uint64_t announce_rounds;
    bool has_announce_step;
    uint64_t announce_step;
    bool has_compress_level;
    uint8_t compress_level;
    bool has_compress_threads;
    uint8_t compress_threads;
    bool has_compress_wait_thread;
    bool compress_wait_thread;
    bool has_decompress_threads;
    uint8_t decompress_threads;
    bool has_cpu_throttle_initial;
    uint8_t cpu_throttle_initial;
    bool has_cpu_throttle_increment;
    uint8_t cpu_throttle_increment;
    bool has_tls_creds;
    char *tls_creds;
    bool has_tls_hostname;
    char *tls_hostname;
    bool has_tls_authz;
    char *tls_authz;
    bool has_max_bandwidth;
    uint64_t max_bandwidth;
    bool has_downtime_limit;
    uint64_t downtime_limit;
    bool has_x_checkpoint_delay;
    uint32_t x_checkpoint_delay;
    bool has_block_incremental;
    bool block_incremental;
    bool has_multifd_channels;
    uint8_t multifd_channels;
    bool has_xbzrle_cache_size;
    uint64_t xbzrle_cache_size;
    bool has_max_postcopy_bandwidth;
    uint64_t max_postcopy_bandwidth;
    bool has_max_cpu_throttle;
    uint8_t max_cpu_throttle;
};

void qapi_free_MigrationParameters(MigrationParameters *obj);

struct q_obj_client_migrate_info_arg {
    char *protocol;
    char *hostname;
    bool has_port;
    int64_t port;
    bool has_tls_port;
    int64_t tls_port;
    bool has_cert_subject;
    char *cert_subject;
};

struct q_obj_MIGRATION_arg {
    MigrationStatus status;
};

struct q_obj_MIGRATION_PASS_arg {
    int64_t pass;
};

struct q_obj_COLO_EXIT_arg {
    COLOMode mode;
    COLOExitReason reason;
};

struct q_obj_migrate_continue_arg {
    MigrationStatus state;
};

struct q_obj_migrate_set_downtime_arg {
    double value;
};

struct q_obj_migrate_set_speed_arg {
    int64_t value;
};

struct q_obj_migrate_set_cache_size_arg {
    int64_t value;
};

struct q_obj_migrate_arg {
    char *uri;
    bool has_blk;
    bool blk;
    bool has_inc;
    bool inc;
    bool has_detach;
    bool detach;
    bool has_resume;
    bool resume;
};

struct q_obj_migrate_incoming_arg {
    char *uri;
};

struct q_obj_xen_save_devices_state_arg {
    char *filename;
    bool has_live;
    bool live;
};

#if defined(CONFIG_REPLICATION)
struct q_obj_xen_set_replication_arg {
    bool enable;
    bool primary;
    bool has_failover;
    bool failover;
};
#endif /* defined(CONFIG_REPLICATION) */

#if defined(CONFIG_REPLICATION)
struct ReplicationStatus {
    bool error;
    bool has_desc;
    char *desc;
};
#endif /* defined(CONFIG_REPLICATION) */

#if defined(CONFIG_REPLICATION)
void qapi_free_ReplicationStatus(ReplicationStatus *obj);
#endif /* defined(CONFIG_REPLICATION) */

struct COLOStatus {
    COLOMode mode;
    COLOMode last_mode;
    COLOExitReason reason;
};

void qapi_free_COLOStatus(COLOStatus *obj);

struct q_obj_migrate_recover_arg {
    char *uri;
};

#endif /* QAPI_TYPES_MIGRATION_H */
