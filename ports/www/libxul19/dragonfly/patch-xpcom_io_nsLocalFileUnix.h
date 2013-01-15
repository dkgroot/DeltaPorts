$NetBSD: patch-ad,v 1.1.1.1 2011/04/19 11:16:07 tnn Exp $

--- xpcom/io/nsLocalFileUnix.h.orig	2009-06-29 18:15:32.000000000 +0200
+++ xpcom/io/nsLocalFileUnix.h
@@ -75,7 +75,7 @@
 #endif
 
 // so we can statfs on freebsd
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || ((defined(__DragonFly__) || defined(__NetBSD__)) && !defined(HAVE_STATVFS))
     #define HAVE_SYS_STATFS_H
     #define STATFS statfs
     #include <sys/param.h>
