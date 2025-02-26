/**
 * @file NoahUtils.h
 * @author Gonzalo Cervetti (cervetti.g@gmal.com)
 * @brief Various utilities for Noahproject.
 * @version 0.1
 * @date 2020-03-15
 *
 * @copyright Copyright (c) 2020
 *
 */
#pragma once

// C libraries
#include "math.h"
#include "stdint.h"

// CubeMx libraries
#include "stm32f407xx.h"
#include "tim.h"

namespace noah {
namespace utils {

// @brief Pin structure
struct Pin{
	GPIO_TypeDef* port;
	uint16_t pin;
};

// @brief Timer channel structure
struct MotorChannel{
	TIM_HandleTypeDef* timer;
	uint32_t channel;
};


/**
 * @brief Sort an array of values.
 *
 * @param buffer array to be sorted.
 * @param buffer_size  size of the array.
 */
void sortArray(int32_t *buffer, uint32_t buffer_size);

/**
 * @brief Calculate the mathematical mean of an array.
 *
 * @param buffer array of values to read
 * @param buffer_size size of the buffer
 * @param exclude_values values to be excluded from the mean calculation.
 * @return float
 */
float MeanCalc(int32_t *buffer, uint32_t buffer_size, uint32_t exclude_values);

/**
 * @brief returns val rounded to a value multiple of res.
 *
 * @param val
 * @param res
 * @return float
 */
float applyResolution(float val, float res);

/**
 * @brief Configure one pin to output in runtime.
 * @param pin
 */
void dinamicSetPinToOutput(Pin pin);

/**
 * @brief Configure one pin to input in runtime.
 * @param pin
 */
void dinamicSetPinToInput(Pin pin);
}
}
