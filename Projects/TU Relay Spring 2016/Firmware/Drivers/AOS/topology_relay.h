/**
  ******************************************************************************
  * File Name          : topology_relay.h
  * Date               : 04/26/2015
	*	Author 						 : Will Nichols
  * Description        : Array topology definition. To be filled out manually or
	*												using the MATLAB topology generation tool.
  *
  ******************************************************************************
  */
	
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __topology_H
#define __topology_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"
	 
// Module Part Numbers: 
// HO01R1: Hexagon receiver with VEMT3700 - 30mm height
// HO01R2: Hexagon receiver with VEMT3700 - 20mm height
// HO02R0: Hexagon transmiter with VSMY2850G - 30mm height
// HO02R1: Hexagon transmiter with VSMY2850G - 20mm height
// PO01R0: Pentagon receiver with VEMT3700 compatible with hexagons 30mm height
// PO02R0: Pentagon transmiter with VSMY2850G compatible with hexagons 30mm height
	
// Enumerations
enum	modulePartNumbers{_HO01R3, _HO01R2, _HO02R0, _HO02R1, _HO02R2, _PO01R0, _PO02R0};
enum	portPol{_normal, _reversed};
enum	modulePorts{_P1=1, _P2, _P3, _P4, _P5, _P6};

#define _N	8				// Number of array modules

// Array modules
#define _mod1		1<<3
#define _mod2		2<<3
#define _mod3		3<<3
#define _mod4		4<<3
#define _mod5		5<<3
#define _mod6		6<<3
#define _mod7		7<<3
#define _mod8		8<<3

// Topology
static uint16_t array[_N][7] = {
{ _HO01R3, _mod2|_P1, 0, 0, 0, 0, 0},		// Relay Rx Module 1
{ _HO02R2, _mod1|_P1, 0, 0, 0, 0, 0},		// Relay Tx Module 2
{ _HO01R3, _mod4|_P1, _mod5|_P1, 0, 0, 0, 0},		// Splitter Rx Module 3
{ _HO02R2, _mod3|_P1, 0, 0, 0, 0, 0},		// Splitter Tx Module 4
{ _HO02R2, _mod3|_P2, 0, 0, 0, 0, 0},		// Splitter Tx Module 5
{ _HO01R3, _mod8|_P1, 0, 0, 0, 0, 0},		// Relay Rx Module 6
{ _HO01R3, _mod8|_P2, 0, 0, 0, 0, 0},		// Relay Rx Module 7
{ _HO02R2, _mod6|_P1, _mod7|_P1, 0, 0, 0, 0}		// Relay Tx Module 8
};

// Configurations for duplex serial ports
#ifdef _module_1
	#define	_module	1
	#define	HO01R3	1
	#define RELAY 1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_normal	1
	#define	_P4pol_normal	1	
	#define	_P5pol_normal	1
	#define	_P6pol_normal	1
#endif

#ifdef _module_2
	#define	_module	2
	#define	HO02R2	1
	#define RELAY 1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_normal	1
	#define	_P4pol_normal	1	
	#define	_P5pol_normal	1
	#define	_P6pol_normal	1
#endif

//Splitter
#ifdef _module_3
	#define	_module	3
	#define	HO01R3	1
	#define SPLITTER 1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_normal	1
	#define	_P4pol_normal	1	
	#define	_P5pol_normal	1
	#define	_P6pol_normal	1
#endif

#ifdef _module_4
	#define	_module	4
	#define	HO02R2	1
	#define SPLITTER 1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_normal	1
	#define	_P4pol_normal	1	
	#define	_P5pol_normal	1
	#define	_P6pol_normal	1
#endif

#ifdef _module_5
	#define	_module	5
	#define	HO02R2	1
	#define SPLITTER 1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_normal	1
	#define	_P4pol_normal	1	
	#define	_P5pol_normal	1
	#define	_P6pol_normal	1
#endif
//Switch
#ifdef _module_6
	#define	_module	6
	#define	HO01R3	1
	#define SWITCH 1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_normal	1
	#define	_P4pol_normal	1	
	#define	_P5pol_normal	1
	#define	_P6pol_normal	1
#endif

#ifdef _module_7
	#define	_module	7
	#define	HO01R3	1
	#define SWITCH 1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_normal	1
	#define	_P4pol_normal	1	
	#define	_P5pol_normal	1
	#define	_P6pol_normal	1
#endif

#ifdef _module_8
	#define	_module	8
	#define	HO02R2	1
	#define SWITCH 1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_normal	1
	#define	_P4pol_normal	1	
	#define	_P5pol_normal	1
	#define	_P6pol_normal	1
#endif


#ifdef __cplusplus
}
#endif
#endif /*__ topology_H */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT OU *****END OF FILE****/
