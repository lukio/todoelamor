<?php

/**
 * Implementation of hook_default_page_manager_pages().
 */
function amor_inicio_panel_default_page_manager_pages() {
  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'inicio';
  $page->task = 'page';
  $page->admin_title = 'Inicio';
  $page->admin_description = '';
  $page->path = 'inicio';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Inicio',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Inicio',
      'name' => 'primary-links',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_inicio_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'inicio';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Inicio',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'css_id' => 'inicio',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'precision_column_one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header_alpha' => NULL,
      'header_beta' => NULL,
      'main' => NULL,
      'footer_alpha' => NULL,
      'footer_beta' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['inicio'] = $page;

 return $pages;

}
