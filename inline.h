#ifndef VCL_INLINE_H 
#define VCL_INLINE_H 

#if __GNUC__
#define VCL_INL __attribute__((__always_inline__)) inline
#elif _MSC_VER
#define VCL_INL __forceinline
#else
#define VCL_INL inline
#endif

#endif