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

#ifndef QAPI_TYPES_BLOCK_H
#define QAPI_TYPES_BLOCK_H

#include "qapi/qapi-builtin-types.h"
#include "qapi-types-block-core.h"

typedef enum BiosAtaTranslation {
    BIOS_ATA_TRANSLATION_AUTO,
    BIOS_ATA_TRANSLATION_NONE,
    BIOS_ATA_TRANSLATION_LBA,
    BIOS_ATA_TRANSLATION_LARGE,
    BIOS_ATA_TRANSLATION_RECHS,
    BIOS_ATA_TRANSLATION__MAX,
} BiosAtaTranslation;

#define BiosAtaTranslation_str(val) \
    qapi_enum_lookup(&BiosAtaTranslation_lookup, (val))

extern const QEnumLookup BiosAtaTranslation_lookup;

typedef enum FloppyDriveType {
    FLOPPY_DRIVE_TYPE_144,
    FLOPPY_DRIVE_TYPE_288,
    FLOPPY_DRIVE_TYPE_120,
    FLOPPY_DRIVE_TYPE_NONE,
    FLOPPY_DRIVE_TYPE_AUTO,
    FLOPPY_DRIVE_TYPE__MAX,
} FloppyDriveType;

#define FloppyDriveType_str(val) \
    qapi_enum_lookup(&FloppyDriveType_lookup, (val))

extern const QEnumLookup FloppyDriveType_lookup;

typedef struct BlockdevSnapshotInternal BlockdevSnapshotInternal;

typedef struct PRManagerInfo PRManagerInfo;

typedef struct PRManagerInfoList PRManagerInfoList;

typedef struct q_obj_blockdev_snapshot_delete_internal_sync_arg q_obj_blockdev_snapshot_delete_internal_sync_arg;

typedef struct q_obj_eject_arg q_obj_eject_arg;

typedef struct q_obj_nbd_server_start_arg q_obj_nbd_server_start_arg;

typedef struct q_obj_nbd_server_add_arg q_obj_nbd_server_add_arg;

typedef enum NbdServerRemoveMode {
    NBD_SERVER_REMOVE_MODE_SAFE,
    NBD_SERVER_REMOVE_MODE_HARD,
    NBD_SERVER_REMOVE_MODE__MAX,
} NbdServerRemoveMode;

#define NbdServerRemoveMode_str(val) \
    qapi_enum_lookup(&NbdServerRemoveMode_lookup, (val))

extern const QEnumLookup NbdServerRemoveMode_lookup;

typedef struct q_obj_nbd_server_remove_arg q_obj_nbd_server_remove_arg;

typedef struct q_obj_DEVICE_TRAY_MOVED_arg q_obj_DEVICE_TRAY_MOVED_arg;

typedef struct q_obj_PR_MANAGER_STATUS_CHANGED_arg q_obj_PR_MANAGER_STATUS_CHANGED_arg;

typedef enum QuorumOpType {
    QUORUM_OP_TYPE_READ,
    QUORUM_OP_TYPE_WRITE,
    QUORUM_OP_TYPE_FLUSH,
    QUORUM_OP_TYPE__MAX,
} QuorumOpType;

#define QuorumOpType_str(val) \
    qapi_enum_lookup(&QuorumOpType_lookup, (val))

extern const QEnumLookup QuorumOpType_lookup;

typedef struct q_obj_QUORUM_FAILURE_arg q_obj_QUORUM_FAILURE_arg;

typedef struct q_obj_QUORUM_REPORT_BAD_arg q_obj_QUORUM_REPORT_BAD_arg;

struct BlockdevSnapshotInternal {
    char *device;
    char *name;
};

void qapi_free_BlockdevSnapshotInternal(BlockdevSnapshotInternal *obj);

struct PRManagerInfo {
    char *id;
    bool connected;
};

void qapi_free_PRManagerInfo(PRManagerInfo *obj);

struct PRManagerInfoList {
    PRManagerInfoList *next;
    PRManagerInfo *value;
};

void qapi_free_PRManagerInfoList(PRManagerInfoList *obj);

struct q_obj_blockdev_snapshot_delete_internal_sync_arg {
    char *device;
    bool has_id;
    char *id;
    bool has_name;
    char *name;
};

struct q_obj_eject_arg {
    bool has_device;
    char *device;
    bool has_id;
    char *id;
    bool has_force;
    bool force;
};

struct q_obj_nbd_server_start_arg {
    SocketAddressLegacy *addr;
    bool has_tls_creds;
    char *tls_creds;
    bool has_tls_authz;
    char *tls_authz;
};

struct q_obj_nbd_server_add_arg {
    char *device;
    bool has_name;
    char *name;
    bool has_writable;
    bool writable;
    bool has_bitmap;
    char *bitmap;
};

struct q_obj_nbd_server_remove_arg {
    char *name;
    bool has_mode;
    NbdServerRemoveMode mode;
};

struct q_obj_DEVICE_TRAY_MOVED_arg {
    char *device;
    char *id;
    bool tray_open;
};

struct q_obj_PR_MANAGER_STATUS_CHANGED_arg {
    char *id;
    bool connected;
};

struct q_obj_QUORUM_FAILURE_arg {
    char *reference;
    int64_t sector_num;
    int64_t sectors_count;
};

struct q_obj_QUORUM_REPORT_BAD_arg {
    QuorumOpType type;
    bool has_error;
    char *error;
    char *node_name;
    int64_t sector_num;
    int64_t sectors_count;
};

#endif /* QAPI_TYPES_BLOCK_H */
