/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef BCMINT_LTSW_MBCM_L3_AACL_H
#define BCMINT_LTSW_MBCM_L3_AACL_H

#include <bcm/l3.h>
#include <bcm_int/ltsw/l3_aacl.h>
#include <bcm_int/ltsw/l3_aacl_int.h>


/*!
 * \brief Initialize L3 AACL feature.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*l3_aacl_init_f)(int unit);

/*!
 * \brief De-initialize the L3 AACL feature.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*l3_aacl_deinit_f)(int unit);

/*!
 * \brief Validation for L3 AACL feature.
 *
 * \param [in] unit Unit Number.
 * \param [in] aacl Pointer to bcm_l3_aacl_t struct which contains fields related to compression table.
 * \param [in] strict Stict validation.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*l3_aacl_validate_f)(
    int unit,
    bcm_l3_aacl_t *aacl,
    bool strict);

/*!
 * \brief Adds a L3 AACL to the compression table.
 *
 * \param [in] unit Unit Number.
 * \param [in] options L3 AACL options. See BCM_L3_AACL_OPTIONS_xxx.
 * \param [in] aacl Pointer to bcm_l3_aacl_t struct which contains fields related to compression table.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*l3_aacl_add_f)(
    int unit,
    uint32_t options,
    bcm_l3_aacl_t *aacl);

/*!
 * \brief Deletes a L3 AACL from the compression table.
 *
 * \param [in] unit Unit Number.
 * \param [in] aacl Pointer to bcm_l3_aacl_t struct which contains fields related to compression table.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*l3_aacl_delete_f)(
    int unit,
    bcm_l3_aacl_t *aacl);

/*!
 * \brief Deletes all AACLs.
 *
 * \param [in] unit Unit Number.
 * \param [in] aacl Pointer to bcm_l3_aacl_t struct which contains fields related to compression table.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*l3_aacl_delete_all_f)(
    int unit,
    bcm_l3_aacl_t *aacl);

/*!
 * \brief Finds information from the AACL table.
 *
 * \param [in] unit Unit Number.
 * \param [inout] aacl Pointer to bcm_l3_aacl_t struct which contains fields related to compression table.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*l3_aacl_find_f)(
    int unit,
    bcm_l3_aacl_t *aacl);

/*!
 * \brief Traverse through the AACL table and run callback at each entry.
 *
 * \param [in] unit Unit Number.
 * \param [in] trav_fn Traverse call back function.
 * \param [in] user_data User data.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*l3_aacl_traverse_f)(
    int unit,
    bcm_l3_aacl_traverse_cb trav_fn,
    void *user_data);

/*!
 * \brief Traverse through the AACL table and run callback at each entry.
 *
 * \param [in] unit Unit Number.
 * \param [in] flags L3 AACL flags. See BCM_L3_AACL_FLAGS_xxx.
 * \param [in] trav_fn Traverse call back function.
 * \param [in] user_data User data.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*l3_aacl_matched_traverse_f)(
    int unit,
    uint32_t flags,
    bcm_l3_aacl_traverse_cb trav_fn,
    void *user_data);

/*!
 * \brief Get the AACL table database.
 *
 * \param [in] unit Unit number.
 * \param [out] tbl_db AACL table databse.
 *
 * \retval SHR_E_NONE No errors.
 */
 typedef int (*l3_aacl_tbl_db_get_f)(
    int unit,
    bcmint_ltsw_l3_aacl_tbl_db_t *tbl_db);

/*!
 * \brief L3_aacl driver structure.
 */
typedef struct mbcm_ltsw_l3_aacl_drv_s {

    /*! Initialize L3 AACL feature. */
    l3_aacl_init_f l3_aacl_init;

    /*! De-initialize the L3 AACL feature. */
    l3_aacl_deinit_f l3_aacl_deinit;

    /*! Validation for L3 AACL feature. */
    l3_aacl_validate_f l3_aacl_validate;

    /*! Adds a L3 AACL to the compression table. */
    l3_aacl_add_f l3_aacl_add;

    /*! Deletes a L3 AACL from the compression table. */
    l3_aacl_delete_f l3_aacl_delete;

    /*! Deletes all AACLs. */
    l3_aacl_delete_all_f l3_aacl_delete_all;

    /*! Finds information from the AACL table. */
    l3_aacl_find_f l3_aacl_find;

    /*! Traverse through the AACL table and run callback at each entry. */
    l3_aacl_traverse_f l3_aacl_traverse;

    /*! Traverse through the AACL table and run callback at each entry. */
    l3_aacl_matched_traverse_f l3_aacl_matched_traverse;

    /*! Get the AACL table database. */
    l3_aacl_tbl_db_get_f l3_aacl_tbl_db_get;

} mbcm_ltsw_l3_aacl_drv_t;

/*!
 * \brief Set the L3_AACL driver of the device.
 *
 * \param [in] unit Unit Number.
 * \param [in] drv L3_aacl driver to set.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_l3_aacl_drv_set(
    int unit,
    mbcm_ltsw_l3_aacl_drv_t *drv);

/*!
 * \brief Initialize L3 AACL feature.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_l3_aacl_init(int unit);

/*!
 * \brief De-initialize the L3 AACL feature.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_l3_aacl_deinit(int unit);

/*!
 * \brief Validation for L3 AACL feature.
 *
 * \param [in] unit Unit Number.
 * \param [in] aacl Pointer to bcm_l3_aacl_t struct which contains fields related to compression table.
 * \param [in] strict Stict validation.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_l3_aacl_validate(
    int unit,
    bcm_l3_aacl_t *aacl,
    bool strict);

/*!
 * \brief Adds a L3 AACL to the compression table.
 *
 * \param [in] unit Unit Number.
 * \param [in] options L3 AACL options. See BCM_L3_AACL_OPTIONS_xxx.
 * \param [in] aacl Pointer to bcm_l3_aacl_t struct which contains fields related to compression table.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_l3_aacl_add(
    int unit,
    uint32_t options,
    bcm_l3_aacl_t *aacl);

/*!
 * \brief Deletes a L3 AACL from the compression table.
 *
 * \param [in] unit Unit Number.
 * \param [in] aacl Pointer to bcm_l3_aacl_t struct which contains fields related to compression table.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_l3_aacl_delete(
    int unit,
    bcm_l3_aacl_t *aacl);

/*!
 * \brief Deletes all AACLs.
 *
 * \param [in] unit Unit Number.
 * \param [in] aacl Pointer to bcm_l3_aacl_t struct which contains fields related to compression table.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_l3_aacl_delete_all(
    int unit,
    bcm_l3_aacl_t *aacl);

/*!
 * \brief Finds information from the AACL table.
 *
 * \param [in] unit Unit Number.
 * \param [inout] aacl Pointer to bcm_l3_aacl_t struct which contains fields related to compression table.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_l3_aacl_find(
    int unit,
    bcm_l3_aacl_t *aacl);

/*!
 * \brief Traverse through the AACL table and run callback at each entry.
 *
 * \param [in] unit Unit Number.
 * \param [in] trav_fn Traverse call back function.
 * \param [in] user_data User data.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_l3_aacl_traverse(
    int unit,
    bcm_l3_aacl_traverse_cb trav_fn,
    void *user_data);

/*!
 * \brief Traverse through the AACL table and run callback at each entry.
 *
 * \param [in] unit Unit Number.
 * \param [in] flags L3 AACL flags. See BCM_L3_AACL_FLAGS_xxx.
 * \param [in] trav_fn Traverse call back function.
 * \param [in] user_data User data.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_l3_aacl_matched_traverse(
    int unit,
    uint32_t flags,
    bcm_l3_aacl_traverse_cb trav_fn,
    void *user_data);

/*!
 * \brief Get L3 AACL logical table info.
 *
 * \param [in] unit Unit Number.
 * \param [out] tbl_db Pointer to table description info.
 *
 * \retval SHR_E_UNAVAIL Logical table is not supported.
 * \retval SHR_E_NONE No errer.
 */
extern int
mbcm_ltsw_l3_aacl_tbl_db_get(
    int unit,
    bcmint_ltsw_l3_aacl_tbl_db_t *tbl_db);

#endif /* BCMINT_LTSW_MBCM_L3_AACL_H */