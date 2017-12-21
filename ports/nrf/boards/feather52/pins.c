// This file was automatically generated by make-pins.py
//
// --af nrf52_af.csv
// --board boards/feather52/pins.csv
// --prefix boards/nrf52_prefix.c

// nrf52_prefix.c becomes the initial portion of the generated pins file.

#include <stdio.h>

#include "py/obj.h"
#include "py/mphal.h"
#include "pin.h"

#define AF(af_idx, af_fn, af_unit, af_type, af_ptr) \
{ \
    { &pin_af_type }, \
    .name = MP_QSTR_AF ## af_idx ## _ ## af_fn ## af_unit, \
    .idx = (af_idx), \
    .fn = AF_FN_ ## af_fn, \
    .unit = (af_unit), \
    .type = AF_PIN_TYPE_ ## af_fn ## _ ## af_type, \
    .af_fn = (af_ptr) \
}

#define PIN(p_port, p_pin, p_af, p_adc_channel) \
{ \
    { &mcu_pin_type }, \
    .name = MP_QSTR_ ## p_port ## p_pin, \
    .port = PORT_ ## p_port, \
    .pin = (p_pin), \
    .num_af = (sizeof(p_af) / sizeof(pin_af_obj_t)), \
    /*.pin_mask = (1 << p_pin), */\
    .af = p_af, \
    .adc_channel = p_adc_channel,\
}

#define NO_ADC    0

const pin_obj_t pin_PA02 = PIN(A,  2, NULL, SAADC_CH_PSELP_PSELP_AnalogInput0);
const pin_obj_t pin_PA03 = PIN(A,  3, NULL, SAADC_CH_PSELP_PSELP_AnalogInput1);
const pin_obj_t pin_PA04 = PIN(A,  4, NULL, SAADC_CH_PSELP_PSELP_AnalogInput2);
const pin_obj_t pin_PA05 = PIN(A,  5, NULL, SAADC_CH_PSELP_PSELP_AnalogInput3);
const pin_obj_t pin_PA06 = PIN(A,  6, NULL, NO_ADC);
const pin_obj_t pin_PA07 = PIN(A,  7, NULL, NO_ADC);
const pin_obj_t pin_PA08 = PIN(A,  8, NULL, NO_ADC);
const pin_obj_t pin_PA09 = PIN(A,  9, NULL, NO_ADC);
const pin_obj_t pin_PA10 = PIN(A, 10, NULL, NO_ADC);
const pin_obj_t pin_PA11 = PIN(A, 11, NULL, NO_ADC);
const pin_obj_t pin_PA12 = PIN(A, 12, NULL, NO_ADC);
const pin_obj_t pin_PA13 = PIN(A, 13, NULL, NO_ADC);
const pin_obj_t pin_PA14 = PIN(A, 14, NULL, NO_ADC);
const pin_obj_t pin_PA15 = PIN(A, 15, NULL, NO_ADC);
const pin_obj_t pin_PA16 = PIN(A, 16, NULL, NO_ADC);
const pin_obj_t pin_PA17 = PIN(A, 17, NULL, NO_ADC);

const pin_obj_t pin_PA19 = PIN(A, 19, NULL, NO_ADC);
const pin_obj_t pin_PA20 = PIN(A, 20, NULL, NO_ADC);

const pin_obj_t pin_PA25 = PIN(A, 25, NULL, NO_ADC);
const pin_obj_t pin_PA26 = PIN(A, 26, NULL, NO_ADC);
const pin_obj_t pin_PA27 = PIN(A, 27, NULL, NO_ADC);
const pin_obj_t pin_PA28 = PIN(A, 28, NULL, SAADC_CH_PSELP_PSELP_AnalogInput4);
const pin_obj_t pin_PA29 = PIN(A, 29, NULL, SAADC_CH_PSELP_PSELP_AnalogInput5);
const pin_obj_t pin_PA30 = PIN(A, 30, NULL, SAADC_CH_PSELP_PSELP_AnalogInput6);
const pin_obj_t pin_PA31 = PIN(A, 31, NULL, SAADC_CH_PSELP_PSELP_AnalogInput7);

STATIC const mp_rom_map_elem_t mcu_pin_globals_table[] = {
  { MP_ROM_QSTR(MP_QSTR_PA02), MP_ROM_PTR(&pin_PA02) },
  { MP_ROM_QSTR(MP_QSTR_PA03), MP_ROM_PTR(&pin_PA03) },
  { MP_ROM_QSTR(MP_QSTR_PA04), MP_ROM_PTR(&pin_PA04) },
  { MP_ROM_QSTR(MP_QSTR_PA05), MP_ROM_PTR(&pin_PA05) },
  { MP_ROM_QSTR(MP_QSTR_PA06), MP_ROM_PTR(&pin_PA06) },
  { MP_ROM_QSTR(MP_QSTR_PA07), MP_ROM_PTR(&pin_PA07) },
  { MP_ROM_QSTR(MP_QSTR_PA08), MP_ROM_PTR(&pin_PA08) },
  { MP_ROM_QSTR(MP_QSTR_PA09), MP_ROM_PTR(&pin_PA09) },
  { MP_ROM_QSTR(MP_QSTR_PA10), MP_ROM_PTR(&pin_PA10) },
  { MP_ROM_QSTR(MP_QSTR_PA11), MP_ROM_PTR(&pin_PA11) },
  { MP_ROM_QSTR(MP_QSTR_PA12), MP_ROM_PTR(&pin_PA12) },
  { MP_ROM_QSTR(MP_QSTR_PA13), MP_ROM_PTR(&pin_PA13) },
  { MP_ROM_QSTR(MP_QSTR_PA14), MP_ROM_PTR(&pin_PA14) },
  { MP_ROM_QSTR(MP_QSTR_PA15), MP_ROM_PTR(&pin_PA15) },
  { MP_ROM_QSTR(MP_QSTR_PA16), MP_ROM_PTR(&pin_PA16) },
  { MP_ROM_QSTR(MP_QSTR_PA17), MP_ROM_PTR(&pin_PA17) },
  { MP_ROM_QSTR(MP_QSTR_PA19), MP_ROM_PTR(&pin_PA19) },
  { MP_ROM_QSTR(MP_QSTR_PA20), MP_ROM_PTR(&pin_PA20) },
  { MP_ROM_QSTR(MP_QSTR_PA25), MP_ROM_PTR(&pin_PA25) },
  { MP_ROM_QSTR(MP_QSTR_PA26), MP_ROM_PTR(&pin_PA26) },
  { MP_ROM_QSTR(MP_QSTR_PA27), MP_ROM_PTR(&pin_PA27) },
  { MP_ROM_QSTR(MP_QSTR_PA28), MP_ROM_PTR(&pin_PA28) },
  { MP_ROM_QSTR(MP_QSTR_PA29), MP_ROM_PTR(&pin_PA29) },
  { MP_ROM_QSTR(MP_QSTR_PA30), MP_ROM_PTR(&pin_PA30) },
  { MP_ROM_QSTR(MP_QSTR_PA31), MP_ROM_PTR(&pin_PA31) },
};
MP_DEFINE_CONST_DICT(mcu_pin_globals, mcu_pin_globals_table);

STATIC const mp_rom_map_elem_t board_module_globals_table[] = {
  { MP_ROM_QSTR(MP_QSTR_A0   ), MP_ROM_PTR(&pin_PA02) },
  { MP_ROM_QSTR(MP_QSTR_A1   ), MP_ROM_PTR(&pin_PA03) },
  { MP_ROM_QSTR(MP_QSTR_A2   ), MP_ROM_PTR(&pin_PA04) },
  { MP_ROM_QSTR(MP_QSTR_A3   ), MP_ROM_PTR(&pin_PA05) },
  { MP_ROM_QSTR(MP_QSTR_TX   ), MP_ROM_PTR(&pin_PA06) },
  { MP_ROM_QSTR(MP_QSTR_A7   ), MP_ROM_PTR(&pin_PA07) },
  { MP_ROM_QSTR(MP_QSTR_RX   ), MP_ROM_PTR(&pin_PA08) },
  { MP_ROM_QSTR(MP_QSTR_NFC1 ), MP_ROM_PTR(&pin_PA09) },
  { MP_ROM_QSTR(MP_QSTR_NFC2 ), MP_ROM_PTR(&pin_PA10) },
  { MP_ROM_QSTR(MP_QSTR_D11  ), MP_ROM_PTR(&pin_PA11) },
  { MP_ROM_QSTR(MP_QSTR_SCK  ), MP_ROM_PTR(&pin_PA12) },
  { MP_ROM_QSTR(MP_QSTR_MOSI ), MP_ROM_PTR(&pin_PA13) },
  { MP_ROM_QSTR(MP_QSTR_MISO ), MP_ROM_PTR(&pin_PA14) },
  { MP_ROM_QSTR(MP_QSTR_D15  ), MP_ROM_PTR(&pin_PA15) },
  { MP_ROM_QSTR(MP_QSTR_D16  ), MP_ROM_PTR(&pin_PA16) },
  { MP_ROM_QSTR(MP_QSTR_LED1 ), MP_ROM_PTR(&pin_PA17) },
  { MP_ROM_QSTR(MP_QSTR_LED2 ), MP_ROM_PTR(&pin_PA19) },
  { MP_ROM_QSTR(MP_QSTR_DFU  ), MP_ROM_PTR(&pin_PA20) },
  { MP_ROM_QSTR(MP_QSTR_SDA  ), MP_ROM_PTR(&pin_PA25) },
  { MP_ROM_QSTR(MP_QSTR_SCL  ), MP_ROM_PTR(&pin_PA26) },
  { MP_ROM_QSTR(MP_QSTR_D27  ), MP_ROM_PTR(&pin_PA27) },
  { MP_ROM_QSTR(MP_QSTR_A4   ), MP_ROM_PTR(&pin_PA28) },
  { MP_ROM_QSTR(MP_QSTR_A5   ), MP_ROM_PTR(&pin_PA29) },
  { MP_ROM_QSTR(MP_QSTR_A6   ), MP_ROM_PTR(&pin_PA30) },
  { MP_ROM_QSTR(MP_QSTR_A7   ), MP_ROM_PTR(&pin_PA31) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
