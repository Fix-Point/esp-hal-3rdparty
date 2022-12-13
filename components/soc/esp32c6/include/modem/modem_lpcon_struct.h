/*
 * SPDX-FileCopyrightText: 2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

typedef volatile struct {
    union {
        struct {
            uint32_t reg_clk_en                    :    1;
            uint32_t reg_clk_debug_ena             :    1;
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } test_conf;
    union {
        struct {
            uint32_t reg_clk_lp_timer_sel_osc_slow :    1;
            uint32_t reg_clk_lp_timer_sel_osc_fast :    1;
            uint32_t reg_clk_lp_timer_sel_xtal     :    1;
            uint32_t reg_clk_lp_timer_sel_xtal32k  :    1;
            uint32_t reg_clk_lp_timer_div_num      :    12;
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } lp_timer_conf;
    union {
        struct {
            uint32_t reg_clk_coex_lp_sel_osc_slow  :    1;
            uint32_t reg_clk_coex_lp_sel_osc_fast  :    1;
            uint32_t reg_clk_coex_lp_sel_xtal      :    1;
            uint32_t reg_clk_coex_lp_sel_xtal32k   :    1;
            uint32_t reg_clk_coex_lp_div_num       :    12;
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } coex_lp_clk_conf;
    union {
        struct {
            uint32_t reg_clk_wifipwr_lp_sel_osc_slow:    1;
            uint32_t reg_clk_wifipwr_lp_sel_osc_fast:    1;
            uint32_t reg_clk_wifipwr_lp_sel_xtal   :    1;
            uint32_t reg_clk_wifipwr_lp_sel_xtal32k:    1;
            uint32_t reg_clk_wifipwr_lp_div_num    :    12;
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } wifi_lp_clk_conf;
    union {
        struct {
            uint32_t reg_clk_i2c_mst_sel_160m      :    1;
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } i2c_mst_clk_conf;
    union {
        struct {
            uint32_t reg_clk_modem_32k_sel         :    2;
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } modem_32k_clk_conf;
    union {
        struct {
            uint32_t reg_clk_wifipwr_en            :    1;
            uint32_t reg_clk_coex_en               :    1;
            uint32_t reg_clk_i2c_mst_en            :    1;
            uint32_t reg_clk_lp_timer_en           :    1;
            uint32_t reserved4                     :    1;
            uint32_t reserved5                     :    1;
            uint32_t reserved6                     :    1;
            uint32_t reserved7                     :    1;
            uint32_t reserved8                     :    1;
            uint32_t reserved9                     :    1;
            uint32_t reserved10                    :    1;
            uint32_t reserved11                    :    1;
            uint32_t reserved12                    :    1;
            uint32_t reserved13                    :    1;
            uint32_t reserved14                    :    1;
            uint32_t reserved15                    :    1;
            uint32_t reserved16                    :    1;
            uint32_t reserved17                    :    1;
            uint32_t reserved18                    :    1;
            uint32_t reserved19                    :    1;
            uint32_t reserved20                    :    1;
            uint32_t reserved21                    :    1;
            uint32_t reserved22                    :    1;
            uint32_t reserved23                    :    1;
            uint32_t reserved24                    :    1;
            uint32_t reserved25                    :    1;
            uint32_t reserved26                    :    1;
            uint32_t reserved27                    :    1;
            uint32_t reserved28                    :    1;
            uint32_t reserved29                    :    1;
            uint32_t reserved30                    :    1;
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } clk_conf;
    union {
        struct {
            uint32_t reg_clk_wifipwr_fo            :    1;
            uint32_t reg_clk_coex_fo               :    1;
            uint32_t reg_clk_i2c_mst_fo            :    1;
            uint32_t reg_clk_lp_timer_fo           :    1;
            uint32_t reg_clk_bcmem_fo              :    1;
            uint32_t reg_clk_i2c_mst_mem_fo        :    1;
            uint32_t reg_clk_chan_freq_mem_fo      :    1;
            uint32_t reg_clk_pbus_mem_fo           :    1;
            uint32_t reg_clk_agc_mem_fo            :    1;
            uint32_t reg_clk_dc_mem_fo             :    1;
            uint32_t reserved10                    :    1;
            uint32_t reserved11                    :    1;
            uint32_t reserved12                    :    1;
            uint32_t reserved13                    :    1;
            uint32_t reserved14                    :    1;
            uint32_t reserved15                    :    1;
            uint32_t reserved16                    :    1;
            uint32_t reserved17                    :    1;
            uint32_t reserved18                    :    1;
            uint32_t reserved19                    :    1;
            uint32_t reserved20                    :    1;
            uint32_t reserved21                    :    1;
            uint32_t reserved22                    :    1;
            uint32_t reserved23                    :    1;
            uint32_t reserved24                    :    1;
            uint32_t reserved25                    :    1;
            uint32_t reserved26                    :    1;
            uint32_t reserved27                    :    1;
            uint32_t reserved28                    :    1;
            uint32_t reserved29                    :    1;
            uint32_t reserved30                    :    1;
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } clk_conf_force_on;
    union {
        struct {
            uint32_t reserved0                     :    16;
            uint32_t reg_clk_wifipwr_st_map        :    4;
            uint32_t reg_clk_coex_st_map           :    4;
            uint32_t reg_clk_i2c_mst_st_map        :    4;
            uint32_t reg_clk_lp_apb_st_map         :    4;
        };
        uint32_t val;
    } clk_conf_power_st;
    union {
        struct {
            uint32_t reg_rst_wifipwr               :    1;
            uint32_t reg_rst_coex                  :    1;
            uint32_t reg_rst_i2c_mst               :    1;
            uint32_t reg_rst_lp_timer              :    1;
            uint32_t reserved4                     :    1;
            uint32_t reserved5                     :    1;
            uint32_t reserved6                     :    1;
            uint32_t reserved7                     :    1;
            uint32_t reserved8                     :    1;
            uint32_t reserved9                     :    1;
            uint32_t reserved10                    :    1;
            uint32_t reserved11                    :    1;
            uint32_t reserved12                    :    1;
            uint32_t reserved13                    :    1;
            uint32_t reserved14                    :    1;
            uint32_t reserved15                    :    1;
            uint32_t reserved16                    :    1;
            uint32_t reserved17                    :    1;
            uint32_t reserved18                    :    1;
            uint32_t reserved19                    :    1;
            uint32_t reserved20                    :    1;
            uint32_t reserved21                    :    1;
            uint32_t reserved22                    :    1;
            uint32_t reserved23                    :    1;
            uint32_t reserved24                    :    1;
            uint32_t reserved25                    :    1;
            uint32_t reserved26                    :    1;
            uint32_t reserved27                    :    1;
            uint32_t reserved28                    :    1;
            uint32_t reserved29                    :    1;
            uint32_t reserved30                    :    1;
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } rst_conf;
    union {
        struct {
            uint32_t reg_dc_mem_force_pu           :    1;
            uint32_t reg_dc_mem_force_pd           :    1;
            uint32_t reg_agc_mem_force_pu          :    1;
            uint32_t reg_agc_mem_force_pd          :    1;
            uint32_t reg_pbus_mem_force_pu         :    1;
            uint32_t reg_pbus_mem_force_pd         :    1;
            uint32_t reg_bc_mem_force_pu           :    1;
            uint32_t reg_bc_mem_force_pd           :    1;
            uint32_t reg_i2c_mst_mem_force_pu      :    1;
            uint32_t reg_i2c_mst_mem_force_pd      :    1;
            uint32_t reg_chan_freq_mem_force_pu    :    1;
            uint32_t reg_chan_freq_mem_force_pd    :    1;
            uint32_t reg_modem_pwr_mem_wp          :    3;
            uint32_t reg_modem_pwr_mem_wa          :    3;
            uint32_t reg_modem_pwr_mem_ra          :    2;
            uint32_t reserved20                    :    1;
            uint32_t reserved21                    :    1;
            uint32_t reserved22                    :    1;
            uint32_t reserved23                    :    1;
            uint32_t reserved24                    :    1;
            uint32_t reserved25                    :    1;
            uint32_t reserved26                    :    1;
            uint32_t reserved27                    :    1;
            uint32_t reserved28                    :    1;
            uint32_t reserved29                    :    1;
            uint32_t reserved30                    :    1;
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } mem_conf;
    union {
        struct {
            uint32_t reg_date                      :    28;
            uint32_t reserved28                    :    4;
        };
        uint32_t val;
    } date;
} modem_lpcon_dev_t;

extern modem_lpcon_dev_t MODEM_LPCON;

#ifdef __cplusplus
}
#endif
