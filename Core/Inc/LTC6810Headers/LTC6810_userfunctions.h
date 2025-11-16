/*
 * LTC6810_userfunctions.h
 *
 *  Created on: Jun 17, 2024
 *      Author: Jake
 */

#ifndef INC_LTC6810HEADERS_LTC6810_USERFUNCTIONS_H_
#define INC_LTC6810HEADERS_LTC6810_USERFUNCTIONS_H_

#include "LTC6810Headers/LTC6810.h"

extern cell_asic BMS_IC[1];

void LTC6810Init();
void LTC6810StartADCConversion();
void LTC6810ReadADCConversion();
void LTC6810ReadConfig();
void LTC6810SetDischarge(uint8_t cellnumber);
void LTC6810UnmuteDischarge();
void LTC6810WriteReadConfiguration();
void LTC6810ReadSID();

#endif /* INC_LTC6810HEADERS_LTC6810_USERFUNCTIONS_H_ */
