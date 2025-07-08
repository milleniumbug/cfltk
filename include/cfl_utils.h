#ifndef __CFL_UTILS_H__
#define __CFL_UTILS_H__

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

CFLTK_EXPORT int Fl_filename_expand(char *out, int len, const char *in);

CFLTK_EXPORT const char *Fl_type_name(void *w);

CFLTK_EXPORT int Fl_open_uri(const char *uri, char *msg, int msglen);

CFLTK_EXPORT void Fl_decode_uri(char *uri);

#ifdef __cplusplus
}
#endif
#endif
