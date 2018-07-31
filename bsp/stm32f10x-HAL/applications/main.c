/*
 * File      : main.c
 * This file is part of RT-Thread RTOS
 * COPYRIGHT (C) 2009, RT-Thread Development Team
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rt-thread.org/license/LICENSE
 *
 * Change Logs:
 * Date           Author       Notes
 * 2015-07-29     Arda.Fu      first implementation
 */
#include <rtthread.h>
#include "led.h"
#include "motor.h"
int main(void)
{
	/* user app entry */
	led_run_init();		//开启运行指示灯线程
	motor_ctr_init();	//开启电机控制线程
	return 0;
}
