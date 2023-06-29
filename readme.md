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

Addresses
---------

| No  | Address                  |
|-----|--------------------------|
| 1   | 40.2.79.28.0.0.0.220     |
| 2   | 40.221.41.30.0.0.0.182   |
| 3   | 40.255.69.54.101.4.0.153 |
| 4   | 40.201.247.30.0.0.0.205  |
| 5   | 40.54.171.30.0.0.0.47    |
| 6   | 40.88.171.29.0.0.0.119   |
| 7   | 40.213.141.31.0.0.0.180  |
| 8   | 40.220.252.30.0.0.0.13   |
| 9   | 40.72.243.28.0.0.0.8     |
| 10  | 40.255.23.47.101.4.0.36  |
