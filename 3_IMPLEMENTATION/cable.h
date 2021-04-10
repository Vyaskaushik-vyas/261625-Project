/**
 * @file cable.h
 * @author T.N.Vyas kaushik (you@domain.com)
 * @brief  The library which contains the functions to calculate the Cable sizing
 * @version 0.1
 * @date 2021-04-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __CABLE_H
#define __CABLE_H
/**
 * @brief calculates the ampacity
 * 
 * @param sys_volatge
 * @param transformer_volage
 * @return  float 
 */
float calculate_ampacity(float sys_voltage,float transformer_capacity);

/**
 * @brief to calculate the breaker current
 * 
 * @param ampacity 
 * @return float 
 */
float calculate_breaker_current(float ampacity);

/**
 * @brief finds the derating factor of teperatre
 * 
 * @param site_temperature
 * @return float
 */

float calculate_derating_temp(float site_temerature);

/**
 * @brief finds the derating factor of depth
 * 
 * @param site_depth
 * @param rating_fator
 * 
 * @return float
 */

float calculate_derating_depth(float site_depth,float rating_factor);
/**
 * @brief finds the cummilative derating current
 * 
 * @param derating_teperature_value 
 * @param derating_depth_value 
 * @param ampacity
 * @return float 
 */
float calculate_total_derating(float derating_teperature_value,float derating_depth_value,float ampacity);
/**
 * @brief finds the voltage drop of the current system.
 * 
 * @param ampacity 
 * @param sys_voltage 
 * @param power_factor 
 * @param length 
 * @param resistance 
 * @param reactance 
 * @return float 
 */

float calculate_voltagedrop(float ampacity,float sys_voltage,float power_factor,float length,float resistance,float reactance);




#endif