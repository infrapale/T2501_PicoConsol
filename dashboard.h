#ifndef __DASHBOARD_H__
#define __DASHBOARD_H__

#include "main.h"
#include <TFT_eSPI.h> 

#define NBR_BASIC_ROWS      12
// #define TFT_HIGHT           240
// #define TFT_WIDTH           320
#define BASIC_ROW_HEIGHT    (TFT_WIDTH / NBR_BASIC_ROWS)
#define BASIC_ROW_LEN       40

typedef enum
{
    DASHBOARD_TIME_SENSOR = 0,
    DASHBOARD_BASIC_ROWS
} dashboard_mode_et;


void dashboard_initialize(void);

void dashboard_draw_box(uint8_t bindx);

void dashboard_update_all(void);

void dashboard_set_text(uint8_t box_indx, char *txt_ptr);

void dashboard_set_mode(dashboard_mode_et new_mode);

void dashboard_print_row(int8_t rindx, char *txtp, uint16_t txt_colour, uint16_t bgnd_colour);

void dashboard_debug_print(void);

void dashboard_update_task();

void dashboard_next_sensor(void);

void dashboard_previous_sensor(void);

void dashboard_show_sensor_print(void);

void dashboard_show_time_sensor(void);



#endif