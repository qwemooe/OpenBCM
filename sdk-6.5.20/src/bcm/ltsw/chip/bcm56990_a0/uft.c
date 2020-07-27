/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcm_int/ltsw/mbcm/uft.h>
#include <bcm_int/ltsw/xgs/uft.h>
#include "sub_dispatch.h"

#include <shr/shr_debug.h>

/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_UFT

/******************************************************************************
 * Private functions
 */

static int
bcm56990_a0_ltsw_uft_init(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_uft_init(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_uft_detach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_uft_detach(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_uft_multi_move_depth_set(
    int unit,
    bcm_switch_control_t type,
    int arg)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_uft_multi_move_depth_set(unit, type, arg));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_uft_multi_move_depth_get(
    int unit,
    bcm_switch_control_t type,
    int *arg)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_uft_multi_move_depth_get(unit, type, arg));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_uft_bank_config_set(
    int unit,
    bcm_switch_hash_table_t hash_table,
    uint32_t bank_num,
    int hash_type,
    uint32_t hash_offset)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_uft_bank_config_set(unit, hash_table, bank_num, hash_type, hash_offset));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_uft_bank_config_get(
    int unit,
    bcm_switch_hash_table_t hash_table,
    uint32_t bank_num,
    int *hash_type,
    uint32_t *hash_offset)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_uft_bank_config_get(unit, hash_table, bank_num, hash_type, hash_offset));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_uft_bank_max_get(
    int unit,
    bcm_switch_hash_table_t hash_table,
    uint32_t *bank_count)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_uft_bank_max_get(unit, hash_table, bank_count));

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Uft driver function variable for bcm56990_a0 device.
 */
static mbcm_ltsw_uft_drv_t bcm56990_a0_ltsw_uft_drv = {
    .uft_init = bcm56990_a0_ltsw_uft_init,
    .uft_detach = bcm56990_a0_ltsw_uft_detach,
    .uft_multi_move_depth_set = bcm56990_a0_ltsw_uft_multi_move_depth_set,
    .uft_multi_move_depth_get = bcm56990_a0_ltsw_uft_multi_move_depth_get,
    .uft_bank_config_set = bcm56990_a0_ltsw_uft_bank_config_set,
    .uft_bank_config_get = bcm56990_a0_ltsw_uft_bank_config_get,
    .uft_bank_max_get = bcm56990_a0_ltsw_uft_bank_max_get,
};

/******************************************************************************
 * Public functions
 */

int
bcm56990_a0_ltsw_uft_drv_attach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_uft_drv_set(unit, &bcm56990_a0_ltsw_uft_drv));

    SHR_IF_ERR_VERBOSE_EXIT
        (bcm56990_a0_sub_drv_attach(unit, &bcm56990_a0_ltsw_uft_drv,
                                    BCM56990_A0_SUB_DRV_BCM56990_Ax,
                                    BCM56990_A0_SUB_MOD_UFT));

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Attach functions for other members.
 */
#define BCM56990_A0_DRV_ATTACH_ENTRY(_dn,_vn,_pf,_pd,_r0) \
int _vn##_ltsw_uft_drv_attach(int unit) \
{ \
    SHR_FUNC_ENTER(unit); \
    SHR_IF_ERR_VERBOSE_EXIT \
        (mbcm_ltsw_uft_drv_set(unit, &bcm56990_a0_ltsw_uft_drv)); \
    SHR_IF_ERR_VERBOSE_EXIT \
        (bcm56990_a0_sub_drv_attach(unit, &bcm56990_a0_ltsw_uft_drv, \
                                    BCM56990_A0_SUB_DRV_BCM5699x, \
                                    BCM56990_A0_SUB_MOD_UFT)); \
exit: \
    SHR_FUNC_EXIT(); \
}
#include "sub_devlist.h"