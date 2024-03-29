/*

Student name: Steven Balagtas
Student number: n9998250
Unit: CAB202 Semester 1, 2019

This file contains the function declarations for everything related to the Robot Vacuum cleaner.

*/

// Import .h files.
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <cab202_graphics.h>
#include "helpers.h"

void draw_vacuum();
void setup_vacuum();
void draw_charger();
void setup_charger();
bool is_vacuum_ctrl( int ch );
void manual_update_vacuum( int ch );
void update_vacuum();
void go_home();
void return_to_base();
void docked_mode();
bool is_docked();
void toggle_docked();
void vacuum_hack();
void load_hack();
void add_load(int rubbish_weight);
char * get_load_status();
int get_current_load();
int get_rtb_load_trigger();
char * get_heading();
void start_battery_timer();
bool is_battery();
void battery_hack(int new_battery);
int get_battery();
int get_rtb_battery_trigger();
int get_max_battery();
char * get_battery_status();
double get_vac_x();
double get_vac_y();
int get_vac_width();
int get_vac_height();
char * get_vac_bitmap();
double get_charger_x();
double get_charger_y();
int get_charger_width();
int get_charger_height();
char * get_charger_bitmap();