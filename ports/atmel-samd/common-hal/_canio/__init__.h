/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2020 Jeff Epler for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#pragma once

#include "hal/utils/include/utils.h"
#include "component/can.h"

#define COMMON_HAL_CANIO_MAX_MESSAGE_LENGTH (8)
#define COMMON_HAL_CANIO_RX_FIFO_SIZE (3)
#define COMMON_HAL_CANIO_RX_FILTER_SIZE (4)
#define COMMON_HAL_CANIO_TX_FIFO_SIZE (1)

typedef struct canio_listener canio_listener_t;
typedef struct canio_can canio_can_t;

typedef struct {
    union {
        CAN_RXBE_0_Type rxb0;
        CAN_TXBE_0_Type txb0;
        CAN_RXF0E_0_Type rxf0;
    };
    union {
        CAN_RXBE_1_Type rxb1;
        CAN_TXBE_1_Type txb1;
        CAN_RXF0E_1_Type rxf1;
    };
    COMPILER_ALIGNED(4)
    uint8_t data[COMMON_HAL_CANIO_MAX_MESSAGE_LENGTH];
} canio_can_fifo_t;

typedef uint32_t canio_can_filter_t;

typedef struct {
    canio_can_fifo_t tx_fifo[COMMON_HAL_CANIO_TX_FIFO_SIZE];
    canio_can_fifo_t rx0_fifo[COMMON_HAL_CANIO_RX_FIFO_SIZE];
    canio_can_fifo_t rx1_fifo[COMMON_HAL_CANIO_RX_FIFO_SIZE];
    canio_can_filter_t rx_filter[COMMON_HAL_CANIO_RX_FILTER_SIZE];
} canio_can_state_t;
