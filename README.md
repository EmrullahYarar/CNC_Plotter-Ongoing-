# CNC_Plotter(Ongoing)

Simple DIY CNC plotter. The base of project uses grblHAL and the system is built on ink printer case. The system works with master and slave stm32 controller for open and closed loop motor control mechaniscms.

X&Y_Axis:
  These two axis are the printers fixed axis. They converted to a closed loop system. The system uses printers encoders sensors. The close loop is controlled by slave stm32. Slave taking the step, dir datas from master controller then drives two DC(rs445) motor with BTS7960 motor drivers. It comapares the steps of master and encoder strips then drives motor. Also, if the steps missed it gives error.

Power Supply:  
  The power supply is a desktop computer PSU. For the logic level type-c connection is used. All stm32 and logic level works with 3.3 V. The 12V comes from the PSU and feeds the motors. All ground points are connected. 

All the other features are supported from grblHAL, X,Y and Z calibration works. Z mapping works.

Project is ongoing.
