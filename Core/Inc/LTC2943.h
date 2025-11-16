/*
 * LTC2943.h
 *
 *  Created on: Mar 13, 2024
 *      Author: Jake
 *  Changed on: Oct 25, 2025
 *      Author: Anna
 */

#ifndef INC_LTC2943_H_
#define INC_LTC2943_H_

#include <stdint.h>
#include <stdbool.h>

#include "main.h"

#define SOC_LOOKUP_SIZE 23
uint8_t statusLTC2943(uint8_t* status);
uint8_t initLTC2943 (uint8_t ADCMode, uint8_t PrescalerM, uint8_t ALCCConfig, uint8_t Shutdown);

uint8_t chargeLTC2943(double* chargeValue);
uint8_t currentLTC2943(double* currentValue);
uint8_t voltageLTC2943(double* voltageValue);
uint8_t temperatureLTC2943(double* temperatureValue);

enum LTC2943Register {LTC2943Register_Status, LTC2943Register_Control, LTC2943Register_ChargeMSB,
	LTC2943Register_ChargeLSB, LTC2943Register_ChargeThHMSB, LTC2943Register_ChargeThHLSB,
	LTC2943Register_ChargeThLMSB, LTC2943Register_ChargeThLLSB, LTC2943Register_VoltageMSB,
	LTC2943Register_VoltageLSB, LTC2943Register_VoltageThHMSB, LTC2943Register_VoltageThHLSB,
	LTC2943Register_VoltageThLMSB, LTC2943Register_VoltageThLLSB, LTC2943Register_CurrentMSB,
	LTC2943Register_CurrentLSB, LTC2943Register_CurrentThHMSB, LTC2943Register_CurrentThHLSB,
	LTC2943Register_CurrentThLMSB, LTC2943Register_CurrentThLLSB, LTC2943Register_TemperatureMSB,
	LTC2943Register_TemperatureLSB, LTC2943Register_TemperatureThH, LTC2943Register_TemperatureThL};

enum LTC2943ADCMode {LTC2943ADCMode_Sleep, LTC2943ADCMode_Manual, LTC2943ADCMode_Scan, LTC2943ADCMode_Auto};

enum LTC2943PrescalerM {LTC2943PrescalerM_M1, LTC2943PrescalerM_M4, LTC2943PrescalerM_M16, LTC2943PrescalerM_M64,
	LTC2943PrescalerM_M256, LTC2943PrescalerM_M1024, LTC2943PrescalerM_M4096, LTC2943PrescalerM_Default};

enum LTC2943ALCCConfigure {LTC2943ALCCConfigure_Disabled, LTC2943ALCCConfigure_ChargeComplete, LTC2943ALCCConfigure_Alert};
enum LTC2943Shutdown {LTC2943Shutdown_On, LTC2943Shutdown_Shutdown};



extern float Current;
extern float Power;
extern float SOC;
extern float Estimated_SOC;
extern float Charge;
extern float Integrate;

float LTC2943_getSOC(void);


typedef struct{
	float voltage;
	float soc;
}VTC6;


extern VTC6 Vtc6_18650[SOC_LOOKUP_SIZE];
#endif /* INC_LTC2943_H_ */
