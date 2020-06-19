#include QMK_KEYBOARD_H

#define EXPR000 LT(2,KC_CAPS)
#define EXPR001 LT(2,KC_QUOT)
#define EXPR002 LT(1,KC_ESC)
#define EXPR003 LALT(KC_INS)
#define EXPR004 LCTL(LSFT(KC_B))
#define EXPR005 LALT(KC_PSCR)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_6x6(
KC_EQL ,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,                                         KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_MINS,
KC_TAB ,KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,                                         KC_Y   ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,KC_BSLS,
EXPR000,KC_A   ,KC_S   ,KC_D   ,KC_F   ,KC_G   ,                                         KC_H   ,KC_J   ,KC_K   ,KC_L   ,KC_SCLN,EXPR001,
KC_LSFT,KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,                                         KC_N   ,KC_M   ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT,
EXPR002,KC_GRV ,EXPR003,KC_LEFT,KC_RGHT,KC_BSPC,                                         KC_SPC ,KC_UP  ,KC_DOWN,KC_LBRC,KC_RBRC,MO(1)  ,
                                        KC_DEL ,KC_LCTL,KC_LALT,         KC_LGUI,KC_RCTL,KC_ENT                                         ,
                                                        KC_HOME,         KC_MEH                                                         ,
                                                        KC_END ,         EXPR004),

    [1] = LAYOUT_6x6(
KC_EQL ,KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,                                         KC_F6  ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 ,
_______,_______,_______,_______,_______,KC_LBRC,                                         KC_RBRC,KC_P7  ,KC_P8  ,KC_P9  ,_______,KC_F12 ,
_______,_______,_______,_______,_______,KC_LCBR,                                         KC_RCBR,KC_P4  ,KC_P5  ,KC_P6  ,_______,EXPR005,
_______,_______,_______,_______,_______,_______,                                         _______,KC_P1  ,KC_P2  ,KC_P3  ,_______,_______,
_______,_______,_______,_______,_______,RESET  ,                                         RESET  ,_______,KC_P0  ,KC_PDOT,_______,_______,
                                        _______,_______,_______,         RESET  ,_______,_______                                        ,
                                                        _______,         _______                                                        ,
                                                        _______,         _______),

    [2] = LAYOUT_6x6(
KC_SLEP,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_CALC,                                         KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,
KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,                                         KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,
KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,                                         KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,
KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,                                         KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,
KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,                                         KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,
                                        KC_NO  ,KC_NO  ,KC_NO  ,         KC_NO  ,KC_NO  ,KC_NO                                          ,
                                                        KC_NO  ,         KC_NO                                                          ,
                                                        KC_NO  ,         KC_NO)
};
