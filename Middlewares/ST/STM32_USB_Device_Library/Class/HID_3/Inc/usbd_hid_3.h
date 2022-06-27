/**
  ******************************************************************************
  * @file    usbd_hid.h
  * @author  MCD Application Team
  * @brief   Header file for the usbd_hid_core.c file.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2015 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USB_HID_3_H
#define __USB_HID_3_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include  "usbd_ioreq.h"

/** @addtogroup STM32_USB_DEVICE_LIBRARY
  * @{
  */

/** @defgroup USBD_HID
  * @brief This file is the Header file for usbd_hid.c
  * @{
  */


/** @defgroup USBD_HID_Exported_Defines
  * @{
  */
#ifndef HID_3_EPIN_ADDR
#define HID_3_EPIN_ADDR                              0x84U
#endif /* HID_EPIN_ADDR */
#define HID_3_EPIN_SIZE                              0x04U

#define USB_HID_3_CONFIG_DESC_SIZ                    34U
#define USB_HID_3_DESC_SIZ                           9U
#define HID_3_MOUSE_REPORT_DESC_SIZE                 45U

#define HID_3_DESCRIPTOR_TYPE                        0x21U
#define HID_3_REPORT_DESC                            0x22U

#ifndef HID_3_HS_BINTERVAL
#define HID_3_HS_BINTERVAL                           0x07U
#endif /* HID_HS_BINTERVAL */

#ifndef HID_3_FS_BINTERVAL
#define HID_3_FS_BINTERVAL                           0x0AU
#endif /* HID_FS_BINTERVAL */

#define HID_3_REQ_SET_PROTOCOL                       0x0BU
#define HID_3_REQ_GET_PROTOCOL                       0x03U

#define HID_3_REQ_SET_IDLE                           0x0AU
#define HID_3_REQ_GET_IDLE                           0x02U

#define HID_3_REQ_SET_REPORT                         0x09U
#define HID_3_REQ_GET_REPORT                         0x01U
/**
  * @}
  */


/** @defgroup USBD_CORE_Exported_TypesDefinitions
  * @{
  */
typedef enum
{
  HID_3_IDLE = 0,
  HID_3_BUSY,
} HID_3_StateTypeDef;


typedef struct
{
  uint32_t Protocol;
  uint32_t IdleState;
  uint32_t AltSetting;
  HID_3_StateTypeDef state;
} USBD_HID_3_HandleTypeDef;

/*
 * HID Class specification version 1.1
 * 6.2.1 HID Descriptor
 */

typedef struct
{
  uint8_t           bLength;
  uint8_t           bDescriptorType;
  uint16_t          bcdHID;
  uint8_t           bCountryCode;
  uint8_t           bNumDescriptors;
  uint8_t           bHIDDescriptorType;
  uint16_t          wItemLength;
} __PACKED USBD_HID_3_DescTypeDef;

/**
  * @}
  */



/** @defgroup USBD_CORE_Exported_Macros
  * @{
  */

/**
  * @}
  */

/** @defgroup USBD_CORE_Exported_Variables
  * @{
  */

extern USBD_ClassTypeDef USBD_HID_3;
#define USBD_HID_3_CLASS &USBD_HID_3
/**
  * @}
  */

/** @defgroup USB_CORE_Exported_Functions
  * @{
  */
uint8_t USBD_HID_3_SendReport(USBD_HandleTypeDef *pdev, uint8_t *report, uint16_t len);
uint32_t USBD_HID_3_GetPollingInterval(USBD_HandleTypeDef *pdev);

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif  /* __USB_HID_2_H */
/**
  * @}
  */

/**
  * @}
  */

