#!/bin/bash

/home/deb/drush/drush watchdog-delete all
/home/deb/drush/drush cc all
/home/deb/drush/drush sql-dump > database.sql
