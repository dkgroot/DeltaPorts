--- packages/fcl-xml/fpmake.pp.orig	2015-11-13 21:15:29 UTC
+++ packages/fcl-xml/fpmake.pp
@@ -22,7 +22,7 @@ begin
     P.Options.Add('-S2h');
     D:=P.Dependencies.Add('fcl-base');
       D.Version:='3.0.0';
-    D:=P.Dependencies.Add('iconvenc',[linux,darwin,iphonesim,freebsd,haiku,beos,aix]);
+    D:=P.Dependencies.Add('iconvenc',[linux,darwin,iphonesim,dragonfly,freebsd,haiku,beos,aix]);
 
     P.Author := 'Sebastian Guenther, Sergei Gorelkin and FPC development team';
     P.License := 'LGPL with modification, ';
