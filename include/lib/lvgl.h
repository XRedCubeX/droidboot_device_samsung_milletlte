/**
 * @file lvgl.h
 * Include all LittleV GL related headers
 */

#ifndef LVGL_H
#define LVGL_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "../../lib/lvgl/src/lv_misc/lv_log.h"
#include "../../lib/lvgl/src/lv_misc/lv_task.h"
#include "../../lib/lvgl/src/lv_misc/lv_math.h"
#include "../../lib/lvgl/src/lv_misc/lv_async.h"

#include "../../lib/lvgl/src/lv_hal/lv_hal.h"

#include "../../lib/lvgl/src/lv_core/lv_obj.h"
#include "../../lib/lvgl/src/lv_core/lv_group.h"
#include "../../lib/lvgl/src/lv_core/lv_indev.h"

#include "../../lib/lvgl/src/lv_core/lv_refr.h"
#include "../../lib/lvgl/src/lv_core/lv_disp.h"

#include "../../lib/lvgl/src/lv_themes/lv_theme.h"
#include "../../lib/lvgl/tests/lv_test_main.c"
#include "../../lib/lvgl/src/lv_font/lv_font.h"
#include "../../lib/lvgl/src/lv_font/lv_font_fmt_txt.h"
#include "../../lib/lvgl/src/lv_misc/lv_printf.h"

#include "../../lib/lvgl/src/lv_widgets/lv_btn.h"
#include "../../lib/lvgl/src/lv_widgets/lv_imgbtn.h"
#include "../../lib/lvgl/src/lv_widgets/lv_img.h"
#include "../../lib/lvgl/src/lv_widgets/lv_label.h"
#include "../../lib/lvgl/src/lv_widgets/lv_line.h"
#include "../../lib/lvgl/src/lv_widgets/lv_page.h"
#include "../../lib/lvgl/src/lv_widgets/lv_cont.h"
#include "../../lib/lvgl/src/lv_widgets/lv_list.h"
#include "../../lib/lvgl/src/lv_widgets/lv_chart.h"
#include "../../lib/lvgl/src/lv_widgets/lv_table.h"
#include "../../lib/lvgl/src/lv_widgets/lv_checkbox.h"
#include "../../lib/lvgl/src/lv_widgets/lv_cpicker.h"
#include "../../lib/lvgl/src/lv_widgets/lv_bar.h"
#include "../../lib/lvgl/src/lv_widgets/lv_slider.h"
#include "../../lib/lvgl/src/lv_widgets/lv_led.h"
#include "../../lib/lvgl/src/lv_widgets/lv_btnmatrix.h"
#include "../../lib/lvgl/src/lv_widgets/lv_keyboard.h"
#include "../../lib/lvgl/src/lv_widgets/lv_dropdown.h"
#include "../../lib/lvgl/src/lv_widgets/lv_roller.h"
#include "../../lib/lvgl/src/lv_widgets/lv_textarea.h"
#include "../../lib/lvgl/src/lv_widgets/lv_canvas.h"
#include "../../lib/lvgl/src/lv_widgets/lv_win.h"
#include "../../lib/lvgl/src/lv_widgets/lv_tabview.h"
#include "../../lib/lvgl/src/lv_widgets/lv_tileview.h"
#include "../../lib/lvgl/src/lv_widgets/lv_msgbox.h"
#include "../../lib/lvgl/src/lv_widgets/lv_objmask.h"
#include "../../lib/lvgl/src/lv_widgets/lv_gauge.h"
#include "../../lib/lvgl/src/lv_widgets/lv_linemeter.h"
#include "../../lib/lvgl/src/lv_widgets/lv_switch.h"
#include "../../lib/lvgl/src/lv_widgets/lv_arc.h"
#include "../../lib/lvgl/src/lv_widgets/lv_spinner.h"
#include "../../lib/lvgl/src/lv_widgets/lv_calendar.h"
#include "../../lib/lvgl/src/lv_widgets/lv_spinbox.h"

#include "../../lib/lvgl/src/lv_draw/lv_img_cache.h"

#include "../../lib/lvgl/src/lv_api_map.h"

/*********************
 *      DEFINES
 *********************/
/*Current version of LVGL*/
#define LVGL_VERSION_MAJOR   7
#define LVGL_VERSION_MINOR   0
#define LVGL_VERSION_PATCH   2
#define LVGL_VERSION_INFO    "dev"

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**********************
 *      MACROS
 **********************/

/** Gives 1 if the x.y.z version is supported in the current version
 * Usage:
 *
 * - Require v6
 * #if LV_VERSION_CHECK(6,0,0)
 *   new_func_in_v6();
 * #endif
 *
 *
 * - Require at least v5.3
 * #if LV_VERSION_CHECK(5,3,0)
 *   new_feature_from_v5_3();
 * #endif
 *
 *
 * - Require v5.3.2 bugfixes
 * #if LV_VERSION_CHECK(5,3,2)
 *   bugfix_in_v5_3_2();
 * #endif
 *
 * */
#define LV_VERSION_CHECK(x,y,z) (x == LVGL_VERSION_MAJOR && (y < LVGL_VERSION_MINOR || (y == LVGL_VERSION_MINOR && z <= LVGL_VERSION_PATCH)))


#ifdef __cplusplus
}
#endif

#endif /*LVGL_H*/
