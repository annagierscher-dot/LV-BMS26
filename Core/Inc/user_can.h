/*
 * can.h
 *
 *  Created on: Nov 28, 2023
 *      Author: Pimml
 */


#ifndef INC_USER_CAN_H_
#define INC_USER_CAN_H_


#include "pwcan4.h"
#include "main.h"
#include "stm32u5xx_hal.h"
#include "freertos_os2.h"
#include "task.h"


extern struct pwcan4_lv_bms_cell_temperatures1_t candata_cell_temperatures1;
extern struct pwcan4_lv_bms_cell_temperatures2_t candata_cell_temperatures2;
extern struct pwcan4_lv_bms_cell_voltages_t candata_cell_voltages;
extern struct pwcan4_lv_bms_status_t candata_status;
extern struct pwcan4_lv_bms_fms_t candata_fms;
extern struct pwcan4_lv_bms_debug1_t candata_debug1;
extern struct pwcan4_lv_bms_debug2_t candata_lv_bms_debug2;
extern struct pwcan4_lv_bms_add_info_t candata_add_info;
extern struct pwcan4_dv_ebs_status_t candata_ebs_status;


void can_send_ebs();
void can_send_CellTemperatures();
void can_send_CellVoltages();
void can_send_Debug1();
void can_send_debug2();
void can_send_AddInfo();
void can_send_Status();
void can_send_FMS();


void receive_can_message(uint32_t id, uint8_t rxdata[8]);
void testsend(void);
void sendLVBMSCellVoltages(double V1, double V2, double V3, double V4);
void sendLVBMSCellTemperatures(uint8_t T1, uint8_t T2, uint8_t T3, uint8_t T4, uint8_t T5, uint8_t T6, uint8_t T7, uint8_t T8);
void sendLVBMSDebug1(double charge, double current, double voltage, double temperature);

 /* INC_USER_CAN_H_ */

#endif


