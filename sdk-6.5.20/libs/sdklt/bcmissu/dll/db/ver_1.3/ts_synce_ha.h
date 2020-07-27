/**************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by HA parser from YAML formated file.
 * Edits to this file will be lost when it is regenerated.
 * Tool: bcmha/scripts/ha_yml_parser.py
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#ifndef TS_SYNCE_HA_H
#define TS_SYNCE_HA_H

#include <shr/shr_ha.h>

#define SYNCE_CLK_TYPE_MAX 2

typedef struct {
   /*! Indicate if SYNEC clk configs are taking effect */
   bool clk_recovery[SYNCE_CLK_TYPE_MAX];
   /*! Operational value of port ID */
   uint16_t port_oper[SYNCE_CLK_TYPE_MAX];
   /*! Operational value of clock divisor */
   uint16_t clk_divisor_oper[SYNCE_CLK_TYPE_MAX];
   /*! Operational value of valid status in override mode */
   bool ovr_valid_oper[SYNCE_CLK_TYPE_MAX];
   /*! Operational value of override mode */
   bool override_oper;
} bcmcth_ts_synce_ha_t;

#define BCMCTH_TS_SYNCE_HA_T_ID 0x314d4c4d2f8f2b81

#endif /* TS_SYNCE_HA_H */