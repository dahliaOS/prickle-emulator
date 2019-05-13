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

#ifndef QAPI_TYPES_AUDIO_H
#define QAPI_TYPES_AUDIO_H

#include "qapi/qapi-builtin-types.h"

typedef struct AudiodevPerDirectionOptions AudiodevPerDirectionOptions;

typedef struct AudiodevGenericOptions AudiodevGenericOptions;

typedef struct AudiodevAlsaPerDirectionOptions AudiodevAlsaPerDirectionOptions;

typedef struct AudiodevAlsaOptions AudiodevAlsaOptions;

typedef struct AudiodevCoreaudioPerDirectionOptions AudiodevCoreaudioPerDirectionOptions;

typedef struct AudiodevCoreaudioOptions AudiodevCoreaudioOptions;

typedef struct AudiodevDsoundOptions AudiodevDsoundOptions;

typedef struct AudiodevOssPerDirectionOptions AudiodevOssPerDirectionOptions;

typedef struct AudiodevOssOptions AudiodevOssOptions;

typedef struct AudiodevPaPerDirectionOptions AudiodevPaPerDirectionOptions;

typedef struct AudiodevPaOptions AudiodevPaOptions;

typedef struct AudiodevWavOptions AudiodevWavOptions;

typedef enum AudioFormat {
    AUDIO_FORMAT_U8,
    AUDIO_FORMAT_S8,
    AUDIO_FORMAT_U16,
    AUDIO_FORMAT_S16,
    AUDIO_FORMAT_U32,
    AUDIO_FORMAT_S32,
    AUDIO_FORMAT__MAX,
} AudioFormat;

#define AudioFormat_str(val) \
    qapi_enum_lookup(&AudioFormat_lookup, (val))

extern const QEnumLookup AudioFormat_lookup;

typedef enum AudiodevDriver {
    AUDIODEV_DRIVER_NONE,
    AUDIODEV_DRIVER_ALSA,
    AUDIODEV_DRIVER_COREAUDIO,
    AUDIODEV_DRIVER_DSOUND,
    AUDIODEV_DRIVER_OSS,
    AUDIODEV_DRIVER_PA,
    AUDIODEV_DRIVER_SDL,
    AUDIODEV_DRIVER_SPICE,
    AUDIODEV_DRIVER_WAV,
    AUDIODEV_DRIVER__MAX,
} AudiodevDriver;

#define AudiodevDriver_str(val) \
    qapi_enum_lookup(&AudiodevDriver_lookup, (val))

extern const QEnumLookup AudiodevDriver_lookup;

typedef struct q_obj_Audiodev_base q_obj_Audiodev_base;

typedef struct Audiodev Audiodev;

struct AudiodevPerDirectionOptions {
    bool has_fixed_settings;
    bool fixed_settings;
    bool has_frequency;
    uint32_t frequency;
    bool has_channels;
    uint32_t channels;
    bool has_voices;
    uint32_t voices;
    bool has_format;
    AudioFormat format;
    bool has_buffer_length;
    uint32_t buffer_length;
};

void qapi_free_AudiodevPerDirectionOptions(AudiodevPerDirectionOptions *obj);

struct AudiodevGenericOptions {
    bool has_in;
    AudiodevPerDirectionOptions *in;
    bool has_out;
    AudiodevPerDirectionOptions *out;
};

void qapi_free_AudiodevGenericOptions(AudiodevGenericOptions *obj);

struct AudiodevAlsaPerDirectionOptions {
    /* Members inherited from AudiodevPerDirectionOptions: */
    bool has_fixed_settings;
    bool fixed_settings;
    bool has_frequency;
    uint32_t frequency;
    bool has_channels;
    uint32_t channels;
    bool has_voices;
    uint32_t voices;
    bool has_format;
    AudioFormat format;
    bool has_buffer_length;
    uint32_t buffer_length;
    /* Own members: */
    bool has_dev;
    char *dev;
    bool has_period_length;
    uint32_t period_length;
    bool has_try_poll;
    bool try_poll;
};

static inline AudiodevPerDirectionOptions *qapi_AudiodevAlsaPerDirectionOptions_base(const AudiodevAlsaPerDirectionOptions *obj)
{
    return (AudiodevPerDirectionOptions *)obj;
}

void qapi_free_AudiodevAlsaPerDirectionOptions(AudiodevAlsaPerDirectionOptions *obj);

struct AudiodevAlsaOptions {
    bool has_in;
    AudiodevAlsaPerDirectionOptions *in;
    bool has_out;
    AudiodevAlsaPerDirectionOptions *out;
    bool has_threshold;
    uint32_t threshold;
};

void qapi_free_AudiodevAlsaOptions(AudiodevAlsaOptions *obj);

struct AudiodevCoreaudioPerDirectionOptions {
    /* Members inherited from AudiodevPerDirectionOptions: */
    bool has_fixed_settings;
    bool fixed_settings;
    bool has_frequency;
    uint32_t frequency;
    bool has_channels;
    uint32_t channels;
    bool has_voices;
    uint32_t voices;
    bool has_format;
    AudioFormat format;
    bool has_buffer_length;
    uint32_t buffer_length;
    /* Own members: */
    bool has_buffer_count;
    uint32_t buffer_count;
};

static inline AudiodevPerDirectionOptions *qapi_AudiodevCoreaudioPerDirectionOptions_base(const AudiodevCoreaudioPerDirectionOptions *obj)
{
    return (AudiodevPerDirectionOptions *)obj;
}

void qapi_free_AudiodevCoreaudioPerDirectionOptions(AudiodevCoreaudioPerDirectionOptions *obj);

struct AudiodevCoreaudioOptions {
    bool has_in;
    AudiodevCoreaudioPerDirectionOptions *in;
    bool has_out;
    AudiodevCoreaudioPerDirectionOptions *out;
};

void qapi_free_AudiodevCoreaudioOptions(AudiodevCoreaudioOptions *obj);

struct AudiodevDsoundOptions {
    bool has_in;
    AudiodevPerDirectionOptions *in;
    bool has_out;
    AudiodevPerDirectionOptions *out;
    bool has_latency;
    uint32_t latency;
};

void qapi_free_AudiodevDsoundOptions(AudiodevDsoundOptions *obj);

struct AudiodevOssPerDirectionOptions {
    /* Members inherited from AudiodevPerDirectionOptions: */
    bool has_fixed_settings;
    bool fixed_settings;
    bool has_frequency;
    uint32_t frequency;
    bool has_channels;
    uint32_t channels;
    bool has_voices;
    uint32_t voices;
    bool has_format;
    AudioFormat format;
    bool has_buffer_length;
    uint32_t buffer_length;
    /* Own members: */
    bool has_dev;
    char *dev;
    bool has_buffer_count;
    uint32_t buffer_count;
    bool has_try_poll;
    bool try_poll;
};

static inline AudiodevPerDirectionOptions *qapi_AudiodevOssPerDirectionOptions_base(const AudiodevOssPerDirectionOptions *obj)
{
    return (AudiodevPerDirectionOptions *)obj;
}

void qapi_free_AudiodevOssPerDirectionOptions(AudiodevOssPerDirectionOptions *obj);

struct AudiodevOssOptions {
    bool has_in;
    AudiodevOssPerDirectionOptions *in;
    bool has_out;
    AudiodevOssPerDirectionOptions *out;
    bool has_try_mmap;
    bool try_mmap;
    bool has_exclusive;
    bool exclusive;
    bool has_dsp_policy;
    uint32_t dsp_policy;
};

void qapi_free_AudiodevOssOptions(AudiodevOssOptions *obj);

struct AudiodevPaPerDirectionOptions {
    /* Members inherited from AudiodevPerDirectionOptions: */
    bool has_fixed_settings;
    bool fixed_settings;
    bool has_frequency;
    uint32_t frequency;
    bool has_channels;
    uint32_t channels;
    bool has_voices;
    uint32_t voices;
    bool has_format;
    AudioFormat format;
    bool has_buffer_length;
    uint32_t buffer_length;
    /* Own members: */
    bool has_name;
    char *name;
    bool has_latency;
    uint32_t latency;
};

static inline AudiodevPerDirectionOptions *qapi_AudiodevPaPerDirectionOptions_base(const AudiodevPaPerDirectionOptions *obj)
{
    return (AudiodevPerDirectionOptions *)obj;
}

void qapi_free_AudiodevPaPerDirectionOptions(AudiodevPaPerDirectionOptions *obj);

struct AudiodevPaOptions {
    bool has_in;
    AudiodevPaPerDirectionOptions *in;
    bool has_out;
    AudiodevPaPerDirectionOptions *out;
    bool has_server;
    char *server;
};

void qapi_free_AudiodevPaOptions(AudiodevPaOptions *obj);

struct AudiodevWavOptions {
    bool has_in;
    AudiodevPerDirectionOptions *in;
    bool has_out;
    AudiodevPerDirectionOptions *out;
    bool has_path;
    char *path;
};

void qapi_free_AudiodevWavOptions(AudiodevWavOptions *obj);

struct q_obj_Audiodev_base {
    char *id;
    AudiodevDriver driver;
    bool has_timer_period;
    uint32_t timer_period;
};

struct Audiodev {
    char *id;
    AudiodevDriver driver;
    bool has_timer_period;
    uint32_t timer_period;
    union { /* union tag is @driver */
        AudiodevGenericOptions none;
        AudiodevAlsaOptions alsa;
        AudiodevCoreaudioOptions coreaudio;
        AudiodevDsoundOptions dsound;
        AudiodevOssOptions oss;
        AudiodevPaOptions pa;
        AudiodevGenericOptions sdl;
        AudiodevGenericOptions spice;
        AudiodevWavOptions wav;
    } u;
};

void qapi_free_Audiodev(Audiodev *obj);

#endif /* QAPI_TYPES_AUDIO_H */
