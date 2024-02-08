#if defined(_MSC_VER) and not defined(__clang__)
    #pragma warning(disable: 4251)
    #define GLVK_COMPILER_MSVC "MSVC " + std::to_string(_MSC_VER)
    #define GLVK_COMPILER      GLVK_COMPILER_MSVC
    #define GLVK_EXPORT        __declspec(dllexport)
    #define GLVK_IMPORT        __declspec(dllimport)
    #define GLVK_RESTRICT      __restrict
    #define GLVK_PRIVATE
    #define GLVK_FORCE_INLINE __forceinline
#elif defined(_MSC_VER) and defined(__clang__)
    #define GLVK_EXPORT       __declspec(dllexport)
    #define GLVK_IMPORT       __declspec(dllimport)
    #define GLVK_PRIVATE      [[gnu::visibility("hidden")]]
    #define GLVK_RESTRICT     __restrict
    #define GLVK_FORCE_INLINE [[gnu::always_inline]] inline
#elif defined(__MINGW32__)
    #define GLVK_EXPORT __declspec(dllexport)
    #define GLVK_IMPORT __declspec(dllimport)
    #define GLVK_PRIVATE
    #define GLVK_RESTRICT     __restrict inline
    #define GLVK_FORCE_INLINE [[gnu::always_inline]] inline
#else
    #define GLVK_IMPORT       [[gnu::visibility("default")]]
    #define GLVK_EXPORT       [[gnu::visibility("default")]]
    #define GLVK_PRIVATE      [[gnu::visibility("hidden")]]
    #define GLVK_RESTRICT     __restrict
    #define GLVK_FORCE_INLINE [[gnu::always_inline]] inline
#endif