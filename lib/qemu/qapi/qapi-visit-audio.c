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
#include "qapi-visit-audio.h"

void visit_type_AudiodevPerDirectionOptions_members(Visitor *v, AudiodevPerDirectionOptions *obj, Error **errp)
{
    Error *err = NULL;

    if (visit_optional(v, "fixed-settings", &obj->has_fixed_settings)) {
        visit_type_bool(v, "fixed-settings", &obj->fixed_settings, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "frequency", &obj->has_frequency)) {
        visit_type_uint32(v, "frequency", &obj->frequency, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "channels", &obj->has_channels)) {
        visit_type_uint32(v, "channels", &obj->channels, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "voices", &obj->has_voices)) {
        visit_type_uint32(v, "voices", &obj->voices, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "format", &obj->has_format)) {
        visit_type_AudioFormat(v, "format", &obj->format, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "buffer-length", &obj->has_buffer_length)) {
        visit_type_uint32(v, "buffer-length", &obj->buffer_length, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}

void visit_type_AudiodevPerDirectionOptions(Visitor *v, const char *name, AudiodevPerDirectionOptions **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(AudiodevPerDirectionOptions), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_AudiodevPerDirectionOptions_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_AudiodevPerDirectionOptions(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_AudiodevGenericOptions_members(Visitor *v, AudiodevGenericOptions *obj, Error **errp)
{
    Error *err = NULL;

    if (visit_optional(v, "in", &obj->has_in)) {
        visit_type_AudiodevPerDirectionOptions(v, "in", &obj->in, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "out", &obj->has_out)) {
        visit_type_AudiodevPerDirectionOptions(v, "out", &obj->out, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}

void visit_type_AudiodevGenericOptions(Visitor *v, const char *name, AudiodevGenericOptions **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(AudiodevGenericOptions), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_AudiodevGenericOptions_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_AudiodevGenericOptions(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_AudiodevAlsaPerDirectionOptions_members(Visitor *v, AudiodevAlsaPerDirectionOptions *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_AudiodevPerDirectionOptions_members(v, (AudiodevPerDirectionOptions *)obj, &err);
    if (err) {
        goto out;
    }
    if (visit_optional(v, "dev", &obj->has_dev)) {
        visit_type_str(v, "dev", &obj->dev, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "period-length", &obj->has_period_length)) {
        visit_type_uint32(v, "period-length", &obj->period_length, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "try-poll", &obj->has_try_poll)) {
        visit_type_bool(v, "try-poll", &obj->try_poll, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}

void visit_type_AudiodevAlsaPerDirectionOptions(Visitor *v, const char *name, AudiodevAlsaPerDirectionOptions **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(AudiodevAlsaPerDirectionOptions), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_AudiodevAlsaPerDirectionOptions_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_AudiodevAlsaPerDirectionOptions(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_AudiodevAlsaOptions_members(Visitor *v, AudiodevAlsaOptions *obj, Error **errp)
{
    Error *err = NULL;

    if (visit_optional(v, "in", &obj->has_in)) {
        visit_type_AudiodevAlsaPerDirectionOptions(v, "in", &obj->in, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "out", &obj->has_out)) {
        visit_type_AudiodevAlsaPerDirectionOptions(v, "out", &obj->out, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "threshold", &obj->has_threshold)) {
        visit_type_uint32(v, "threshold", &obj->threshold, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}

void visit_type_AudiodevAlsaOptions(Visitor *v, const char *name, AudiodevAlsaOptions **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(AudiodevAlsaOptions), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_AudiodevAlsaOptions_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_AudiodevAlsaOptions(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_AudiodevCoreaudioPerDirectionOptions_members(Visitor *v, AudiodevCoreaudioPerDirectionOptions *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_AudiodevPerDirectionOptions_members(v, (AudiodevPerDirectionOptions *)obj, &err);
    if (err) {
        goto out;
    }
    if (visit_optional(v, "buffer-count", &obj->has_buffer_count)) {
        visit_type_uint32(v, "buffer-count", &obj->buffer_count, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}

void visit_type_AudiodevCoreaudioPerDirectionOptions(Visitor *v, const char *name, AudiodevCoreaudioPerDirectionOptions **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(AudiodevCoreaudioPerDirectionOptions), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_AudiodevCoreaudioPerDirectionOptions_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_AudiodevCoreaudioPerDirectionOptions(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_AudiodevCoreaudioOptions_members(Visitor *v, AudiodevCoreaudioOptions *obj, Error **errp)
{
    Error *err = NULL;

    if (visit_optional(v, "in", &obj->has_in)) {
        visit_type_AudiodevCoreaudioPerDirectionOptions(v, "in", &obj->in, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "out", &obj->has_out)) {
        visit_type_AudiodevCoreaudioPerDirectionOptions(v, "out", &obj->out, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}

void visit_type_AudiodevCoreaudioOptions(Visitor *v, const char *name, AudiodevCoreaudioOptions **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(AudiodevCoreaudioOptions), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_AudiodevCoreaudioOptions_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_AudiodevCoreaudioOptions(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_AudiodevDsoundOptions_members(Visitor *v, AudiodevDsoundOptions *obj, Error **errp)
{
    Error *err = NULL;

    if (visit_optional(v, "in", &obj->has_in)) {
        visit_type_AudiodevPerDirectionOptions(v, "in", &obj->in, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "out", &obj->has_out)) {
        visit_type_AudiodevPerDirectionOptions(v, "out", &obj->out, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "latency", &obj->has_latency)) {
        visit_type_uint32(v, "latency", &obj->latency, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}

void visit_type_AudiodevDsoundOptions(Visitor *v, const char *name, AudiodevDsoundOptions **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(AudiodevDsoundOptions), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_AudiodevDsoundOptions_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_AudiodevDsoundOptions(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_AudiodevOssPerDirectionOptions_members(Visitor *v, AudiodevOssPerDirectionOptions *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_AudiodevPerDirectionOptions_members(v, (AudiodevPerDirectionOptions *)obj, &err);
    if (err) {
        goto out;
    }
    if (visit_optional(v, "dev", &obj->has_dev)) {
        visit_type_str(v, "dev", &obj->dev, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "buffer-count", &obj->has_buffer_count)) {
        visit_type_uint32(v, "buffer-count", &obj->buffer_count, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "try-poll", &obj->has_try_poll)) {
        visit_type_bool(v, "try-poll", &obj->try_poll, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}

void visit_type_AudiodevOssPerDirectionOptions(Visitor *v, const char *name, AudiodevOssPerDirectionOptions **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(AudiodevOssPerDirectionOptions), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_AudiodevOssPerDirectionOptions_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_AudiodevOssPerDirectionOptions(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_AudiodevOssOptions_members(Visitor *v, AudiodevOssOptions *obj, Error **errp)
{
    Error *err = NULL;

    if (visit_optional(v, "in", &obj->has_in)) {
        visit_type_AudiodevOssPerDirectionOptions(v, "in", &obj->in, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "out", &obj->has_out)) {
        visit_type_AudiodevOssPerDirectionOptions(v, "out", &obj->out, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "try-mmap", &obj->has_try_mmap)) {
        visit_type_bool(v, "try-mmap", &obj->try_mmap, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "exclusive", &obj->has_exclusive)) {
        visit_type_bool(v, "exclusive", &obj->exclusive, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "dsp-policy", &obj->has_dsp_policy)) {
        visit_type_uint32(v, "dsp-policy", &obj->dsp_policy, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}

void visit_type_AudiodevOssOptions(Visitor *v, const char *name, AudiodevOssOptions **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(AudiodevOssOptions), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_AudiodevOssOptions_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_AudiodevOssOptions(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_AudiodevPaPerDirectionOptions_members(Visitor *v, AudiodevPaPerDirectionOptions *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_AudiodevPerDirectionOptions_members(v, (AudiodevPerDirectionOptions *)obj, &err);
    if (err) {
        goto out;
    }
    if (visit_optional(v, "name", &obj->has_name)) {
        visit_type_str(v, "name", &obj->name, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "latency", &obj->has_latency)) {
        visit_type_uint32(v, "latency", &obj->latency, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}

void visit_type_AudiodevPaPerDirectionOptions(Visitor *v, const char *name, AudiodevPaPerDirectionOptions **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(AudiodevPaPerDirectionOptions), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_AudiodevPaPerDirectionOptions_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_AudiodevPaPerDirectionOptions(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_AudiodevPaOptions_members(Visitor *v, AudiodevPaOptions *obj, Error **errp)
{
    Error *err = NULL;

    if (visit_optional(v, "in", &obj->has_in)) {
        visit_type_AudiodevPaPerDirectionOptions(v, "in", &obj->in, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "out", &obj->has_out)) {
        visit_type_AudiodevPaPerDirectionOptions(v, "out", &obj->out, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "server", &obj->has_server)) {
        visit_type_str(v, "server", &obj->server, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}

void visit_type_AudiodevPaOptions(Visitor *v, const char *name, AudiodevPaOptions **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(AudiodevPaOptions), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_AudiodevPaOptions_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_AudiodevPaOptions(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_AudiodevWavOptions_members(Visitor *v, AudiodevWavOptions *obj, Error **errp)
{
    Error *err = NULL;

    if (visit_optional(v, "in", &obj->has_in)) {
        visit_type_AudiodevPerDirectionOptions(v, "in", &obj->in, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "out", &obj->has_out)) {
        visit_type_AudiodevPerDirectionOptions(v, "out", &obj->out, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "path", &obj->has_path)) {
        visit_type_str(v, "path", &obj->path, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}

void visit_type_AudiodevWavOptions(Visitor *v, const char *name, AudiodevWavOptions **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(AudiodevWavOptions), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_AudiodevWavOptions_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_AudiodevWavOptions(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_AudioFormat(Visitor *v, const char *name, AudioFormat *obj, Error **errp)
{
    int value = *obj;
    visit_type_enum(v, name, &value, &AudioFormat_lookup, errp);
    *obj = value;
}

void visit_type_AudiodevDriver(Visitor *v, const char *name, AudiodevDriver *obj, Error **errp)
{
    int value = *obj;
    visit_type_enum(v, name, &value, &AudiodevDriver_lookup, errp);
    *obj = value;
}

void visit_type_q_obj_Audiodev_base_members(Visitor *v, q_obj_Audiodev_base *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_str(v, "id", &obj->id, &err);
    if (err) {
        goto out;
    }
    visit_type_AudiodevDriver(v, "driver", &obj->driver, &err);
    if (err) {
        goto out;
    }
    if (visit_optional(v, "timer-period", &obj->has_timer_period)) {
        visit_type_uint32(v, "timer-period", &obj->timer_period, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}

void visit_type_Audiodev_members(Visitor *v, Audiodev *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_q_obj_Audiodev_base_members(v, (q_obj_Audiodev_base *)obj, &err);
    if (err) {
        goto out;
    }
    switch (obj->driver) {
    case AUDIODEV_DRIVER_NONE:
        visit_type_AudiodevGenericOptions_members(v, &obj->u.none, &err);
        break;
    case AUDIODEV_DRIVER_ALSA:
        visit_type_AudiodevAlsaOptions_members(v, &obj->u.alsa, &err);
        break;
    case AUDIODEV_DRIVER_COREAUDIO:
        visit_type_AudiodevCoreaudioOptions_members(v, &obj->u.coreaudio, &err);
        break;
    case AUDIODEV_DRIVER_DSOUND:
        visit_type_AudiodevDsoundOptions_members(v, &obj->u.dsound, &err);
        break;
    case AUDIODEV_DRIVER_OSS:
        visit_type_AudiodevOssOptions_members(v, &obj->u.oss, &err);
        break;
    case AUDIODEV_DRIVER_PA:
        visit_type_AudiodevPaOptions_members(v, &obj->u.pa, &err);
        break;
    case AUDIODEV_DRIVER_SDL:
        visit_type_AudiodevGenericOptions_members(v, &obj->u.sdl, &err);
        break;
    case AUDIODEV_DRIVER_SPICE:
        visit_type_AudiodevGenericOptions_members(v, &obj->u.spice, &err);
        break;
    case AUDIODEV_DRIVER_WAV:
        visit_type_AudiodevWavOptions_members(v, &obj->u.wav, &err);
        break;
    default:
        abort();
    }

out:
    error_propagate(errp, err);
}

void visit_type_Audiodev(Visitor *v, const char *name, Audiodev **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(Audiodev), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_Audiodev_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_Audiodev(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_audio_c;
