Temp I2C address
================

[PlatformIO](https://platformio.org/) based Ethernet temperature sensor.
Read Temperature sensor address and print it to the console. 

Address printed as hex: **{0x28, 0x58, 0xAB, 0x1D, 0x0, 0x0, 0x0, 0x77}** and
decimal: **40.88.171.29.0.0.0.119**

Digital address may be used in the SNMP request.

Hardware
--------

* Arduino UNO
* DS18B20 I2C temperature sensor

Packages
--------

* gyverlibs/microDS18B20@^3.10

Monitor
-------

Worked from terminal

```bash
pio device monitor
```