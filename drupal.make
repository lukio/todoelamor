; Core Version
; ------------
; Each makefile should begin by declaring the core version of Drupal that all
; projects should be compatible with.

core = 6.x
projects[] = drupal

; Administración

projects[admin_menu][subdir] = contrib
projects[adminrole][subdir] = contrib
projects[token][subdir] = contrib
projects[rules][subdir] = contrib
projects[advanced_help][subdir] = contrib
projects[transliteration][subdir] = contrib
projects[webform][subdir] = contrib
projects[poormanscron][subdir] = contrib

; DEVELOPMENT
; projects[drush][subdir] = contrib
projects[devel][subdir] = contrib
projects[simpletest][subdir] = contrib
projects[features][subdir] = contrib
projects[ctools][subdir] = contrib
projects[strongarm][subdir] = contrib
projects[uuid][subdir] = contrib
projects[uuid_features][subdir] = contrib
projects[versioncontrol][subdir] = contrib
projects[drush_cleanup][subdir] = contrib

; CCK 
projects[cck][subdir] = contrib
projects[filefield][subdir] = contrib
projects[imagefield][subdir] = contrib
projects[imagecache][subdir] = contrib
; projects[ckeditor][subdir] = contrib
projects[imageapi][subdir] = contrib
projects[unique_field][subdir] = contrib
projects[feeds][subdir] = contrib
projects[imce][subdir] = contrib
projects[link][subdir] = contrib

; Views
projects[views][subdir] = contrib
projects[views_bulk_operations][subdir] = contrib
projects[lightbox2][subdir] = contrib
projects[modalframe][subdir] = contrib
projects[automodal][subdir] = contrib
projects[views_slideshow][subdir] = contrib
projects[views_customfield][subdir] = contrib

; Taxonomy
projects[content_taxonomy][subdir] = contrib
projects[hierarchical_select][subdir] = contrib

; Importacion de datos
projects[node_import][subdir] = contrib

; Audio / Video
projects[video][subdir] = contrib
projects[jplayer][subdir] = contrib

; Extras
projects[pathauto][subdir] = contrib
projects[panels][subdir] = contrib
projects[captcha][subdir] = contrib
projects[boost][subdir] = contrib
projects[tabs][subdir] = contrib
projects[tagadelic][subdir] = contrib
projects[tagadelic_views][subdir] = contrib
projects[services][subdir] = contrib
projects[ife][subdir] = contrib
projects[reg_with_pic][subdir] = contrib
projects[dhtml_menu][subdir] = contrib
projects[taxonomy_menu][subdir] = contrib
projects[menu_attributes][subdir] = contrib
projects[superfish][subdir] = contrib
projects[libraries][subdir] = contrib
projects[jquery_ui][subdir] = contrib
projects[jquery_update][subdir] = contrib
projects[onepageprofile][subdir] = contrib
projects[persistent_login][subdir] = contrib



; THEMES
projects[tao][type] = "theme"
projects[tao][download][type] = "git"
projects[tao][download][url] = "git://github.com/developmentseed/tao.git"
projects[tao][download][branch] = "master"
projects[rubik][type] = "theme"
projects[rubik][download][type] = "git"
projects[rubik][download][url] = "git://github.com/developmentseed/rubik.git"
projects[rubik][download][branch] = "master"
; projects[zen][type] = theme
projects[ninesixty][type] = theme
projects[omega][type] = theme

; jplayer
projects[jplayer][type] = "theme"
projects[rubik][download][type] = "git"
projects[rubik][download][url] = "git://github.com/developmentseed/rubik.git"
projects[rubik][download][branch] = "master"

; jQuery UI
libraries[jquery_ui][download][type] = "get"
libraries[jquery_ui][download][url] = "http://jquery-ui.googlecode.com/files/jquery-ui-1.7.zip"
libraries[jquery_ui][directory_name] = "jquery.ui"
libraries[jquery_ui][destination] = "modules/contrib/jquery_ui"

; ; CKEditor
; libraries[ckeditor][download][type]= "get"
; libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.5.3/ckeditor_3.5.3.zip"
; libraries[ckeditor][directory_name] = "ckeditor"
; libraries[ckeditor][destination] = "libraries"

; superfish
libraries[superfish][download][type]= "get"
libraries[superfish][download][url] = "http://dl.dropbox.com/u/22795799/superfish-library-for-drupal-v1.zip"
libraries[superfish][directory_name] = "superfish"
libraries[superfish][destination] = "libraries"
