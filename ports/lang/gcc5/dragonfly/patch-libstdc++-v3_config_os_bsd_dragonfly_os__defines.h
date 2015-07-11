--- libstdc++-v3/config/os/bsd/dragonfly/os_defines.h.orig	2015-07-09 16:08:54 UTC
+++ libstdc++-v3/config/os/bsd/dragonfly/os_defines.h
@@ -29,4 +29,9 @@
 // System-specific #define, typedefs, corrections, etc, go here.  This
 // file will come before all others.
 
+#define _GLIBCXX_USE_C99_CHECK 1
+#define _GLIBCXX_USE_C99_DYNAMIC (!(__ISO_C_VISIBLE >= 1999))
+#define _GLIBCXX_USE_C99_LONG_LONG_CHECK 1
+#define _GLIBCXX_USE_C99_LONG_LONG_DYNAMIC (_GLIBCXX_USE_C99_DYNAMIC || !defined __LONG_LONG_SUPPORTED)
+
 #endif
