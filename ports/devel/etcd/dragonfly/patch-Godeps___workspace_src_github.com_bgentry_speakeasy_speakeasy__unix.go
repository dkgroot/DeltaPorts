--- Godeps/_workspace/src/github.com/bgentry/speakeasy/speakeasy_unix.go.orig	2018-02-21 01:16:43 UTC
+++ Godeps/_workspace/src/github.com/bgentry/speakeasy/speakeasy_unix.go
@@ -4,7 +4,7 @@
 // Original code is based on code by RogerV in the golang-nuts thread:
 // https://groups.google.com/group/golang-nuts/browse_thread/thread/40cc41e9d9fc9247
 
-// +build darwin freebsd linux netbsd openbsd solaris
+// +build darwin freebsd dragonfly linux netbsd openbsd solaris
 
 package speakeasy
 
