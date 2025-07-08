#ifndef __CFL_LOCK_H__
#define __CFL_LOCK_H__

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__)
    #if defined(__clang__)
        #define CFLTK_EXPORT __declspec(dllexport) __attribute__ ((visibility("default")))
    #else
        #define CFLTK_EXPORT __declspec(dllexport)
    #endif
#else
    #define CFLTK_EXPORT extern __attribute__ ((visibility("default")))
#endif

#ifdef __cplusplus
extern "C" {
#endif

CFLTK_EXPORT void Fl_mutex_lock(void);
CFLTK_EXPORT void Fl_mutex_unlock(void);

#ifndef LOCK
#define LOCK(x)                                                                \
    Fl_mutex_lock();                                                           \
    x;                                                                         \
    Fl_mutex_unlock();
#endif

#ifdef __cplusplus
}
#endif
#endif