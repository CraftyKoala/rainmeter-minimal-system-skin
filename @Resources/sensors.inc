[Variables]

;CPU Sensor
CPUSensor=0xf0000300
CPUSensorInstance=0x0
CPULoadEntry=0x7000011
CPUFreqEntry=0x6000022

;CPU Enhanced Sensor
CPUESensor=0xf0000501
CPUESensorInstance=0x0
CPUEDieTempEntry=0x1000000

;System Sensor (Memory)
MemSensor=0xf0000301
MemSensorInstance=0x0
MemPhysicalUsedEntry=0x8000003
MemPhysicalLoadEntry=0x8000005
MemSWAPUsedEntry=0x8000000          ;virtual memory commited
MemSWAPLoadEntry=0x8000002          ;virtual memory load

;GPU Sensor
GPUSensor=0xe0002000
GPUSensorInstance=0x0
GPULoadEntry=0x7000000              ;GPU Core load
GPUFanSpeedEntry=0x3000000          ;GPU Fan (RPM)
GPUTempEntry=0x1000000              