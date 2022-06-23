# STM32F429_USB_HID_Multiple
컴파일러의 Preprocessor에서 USE_USBD_COMPOSITE을 설정
usbd_conf.c 에서 USBD_static_malloc을 Size 기준을 변경
각각의 usbd_hidx.c 의 USBD_HID_x_Init() 에서 USBD_malloc를 사용변경
