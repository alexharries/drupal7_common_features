<?php
/**
 * @file
 * backup_migrate_daily.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function backup_migrate_daily_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "backup_migrate" && $api == "backup_migrate_exportables") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
