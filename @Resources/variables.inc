[MeterStyle-Default]
FontFace=#FontName#
FontColor=#FontColor#
FontSize=#DetailFontSize#
AntiAlias=1

[Variables]
FontName=Ubuntu
FontColor=255,255,255,240
MainFontSize=42
DetailFontSize=10

DateFormat=%d. %B %Y
UptimeFormat=%4!i!D %3!02i!.%2!02i!.%1!02i!

; Thanks to smurfier for this solution
; https://forum.rainmeter.net/viewtopic.php?t=13591
LeapFormat=28 + (((((%Y %% 4) = 0) && ((%Y %% 100) <> 0)) || ((%Y %% 400) = 0)) )
DaysInMonth="01":"31","03":"31","04":"30","05":"31","06":"30","07":"31","08":"31","09":"30","10":"31","11":"30","12":"31"

28 + ((((%Y %% 4) = 0) && ((%Y %% 100) <> 0)) || ((%Y %% 400) = 0))