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
  $display->layout = 'precision_naked';
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
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'destacado_slideshow';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'id' => '',
        'class' => 'destacado-slideshow',
        'grid' => '',
        'prefix' => '4',
        'suffix' => '',
        'pad' => '',
        'push' => '',
        'pull' => '',
        'alpha' => 0,
        'omega' => 0,
      ),
      'style' => 'precision_grid',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['main'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'destacado_bloque_der';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'id' => '',
        'class' => '',
        'grid' => '12',
        'prefix' => '2',
        'suffix' => '2',
        'pad' => '',
        'push' => '',
        'pull' => '',
        'alpha' => 1,
        'omega' => 0,
      ),
      'style' => 'precision_grid',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['main'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'destacado_bloque_cen';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'id' => '',
        'class' => '',
        'grid' => '12',
        'prefix' => '2',
        'suffix' => '2',
        'pad' => '',
        'push' => '',
        'pull' => '',
        'alpha' => 0,
        'omega' => 0,
      ),
      'style' => 'precision_grid',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-3'] = $pane;
    $display->panels['main'][2] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'destacado_bloque_izq';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'id' => '',
        'class' => '',
        'grid' => '12',
        'prefix' => '2',
        'suffix' => '2',
        'pad' => '',
        'push' => '',
        'pull' => '',
        'alpha' => 0,
        'omega' => 1,
      ),
      'style' => 'precision_grid',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $display->content['new-4'] = $pane;
    $display->panels['main'][3] = 'new-4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['inicio'] = $page;

 return $pages;

}
