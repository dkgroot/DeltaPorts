--- chrome/browser/ui/toolbar/app_menu_model.cc.orig	2019-06-04 18:55:18 UTC
+++ chrome/browser/ui/toolbar/app_menu_model.cc
@@ -670,7 +670,7 @@ bool AppMenuModel::IsCommandIdVisible(int command_id) 
       return app_menu_icon_controller_->GetTypeAndSeverity().type ==
              AppMenuIconController::IconType::UPGRADE_NOTIFICATION;
     }
-#if !defined(OS_LINUX) || defined(USE_AURA)
+#if (!defined(OS_LINUX) && !defined(OS_BSD)) || defined(USE_AURA)
     case IDC_BOOKMARK_PAGE:
       return !chrome::ShouldRemoveBookmarkThisPageUI(browser_->profile());
     case IDC_BOOKMARK_ALL_TABS:
