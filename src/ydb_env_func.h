/* -*- mode: C; c-basic-offset: 4; indent-tabs-mode: nil -*- */
// vim: expandtab:ts=8:sw=4:softtabstop=4:
// This file defines the public interface to the ydb library

#if !defined(TOKU_YDB_ENV_FUNC_H)
#define TOKU_YDB_ENV_FUNC_H

#if defined(__cplusplus)
extern "C" {
#endif

extern void (*checkpoint_callback_f)(void*);
extern void * checkpoint_callback_extra;
extern void (*checkpoint_callback2_f)(void*);
extern void * checkpoint_callback2_extra;

extern uint32_t engine_status_enable;
// Called to use dlmalloc functions.
void setup_dlmalloc(void) __attribute__((__visibility__("default")));

// Test-only function
void toku_env_increase_last_xid(DB_ENV *env, uint64_t increment);

#if defined(__cplusplus)
}
#endif

#endif
