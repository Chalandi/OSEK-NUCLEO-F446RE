// **********************************************************************************************************************
//                                                  OSEK OS Configuration                                                
// **********************************************************************************************************************
// Note: This file is automatically generated from the Excel file OsekCfg.xlsm, Please do not modify it manually !
// **********************************************************************************************************************

// **********************************************************************************************************************
// Filename        : osGenCfg.h
// 
// Author          : Chalandi Amine
//
// Owner           : Chalandi Amine
// 
// Excel File      : D:\GHS_PRJ\MyOSEK\Osek_Renesas\SW\OSEK\HwPlatform\Renesas\F1x\R7F701581\Generator\OsekCfg.xlsm
// 
// Generation Date : February 17, 2019 15:27
// 
// Description     : OSEK based application config
// 
// **********************************************************************************************************************

#include "OsGenMac.h"


//=============================================================================
//  OS Configuration
//=============================================================================

OS_CONFIG_BEGIN
  
  OS_TASK_BEGIN
    OS_TASK_DEF(Idle ,0 ,1024 ,1 ,OS_AUTOSTART ,EXTENDED ,FULL_PREEMPT)
    OS_TASK_DEF(T1 ,6 ,1024 ,1 ,OS_AUTOSTART ,EXTENDED ,FULL_PREEMPT)
    OS_TASK_DEF(T2 ,15 ,1024 ,1 ,OS_NO_AUTOSTART ,EXTENDED ,FULL_PREEMPT)
  OS_TASK_END
  
  OS_EVENT_BEGIN
    OS_EVENT_DEF(EVT_BLINK_ORANGE_LED, (1UL<<0))
    OS_EVENT_DEF(EVT_BLINK_GREEN_LED, (1UL<<1))
    OS_EVENT_DEF(EVT_BLINK_RED_LED, (1UL<<2))
    OS_EVENT_DEF(EVT_BLINK_BLUE_LED, (1UL<<1))
    OS_EVENT_DEF(EVT_MSG_QUEUED, (1UL<<2))
    OS_EVENT_DEF(EVT_BLINK_FASTER_BLUE_LED, (1UL<<0))
  OS_EVENT_END
  
  OS_ALARM_BEGIN
    OS_ALARM_DEF(ALARM_BLUE_LED ,ALARM_SET_EVENT ,EVT_BLINK_BLUE_LED ,T1 ,0)
    OS_ALARM_DEF(ALARM_GREEN_LED ,ALARM_SET_EVENT ,EVT_BLINK_GREEN_LED ,Idle ,0)
    OS_ALARM_DEF(ALARM_FASTER_BLUE_LED ,ALARM_SET_EVENT ,EVT_BLINK_FASTER_BLUE_LED ,T2 ,0)
  OS_ALARM_END
  
  OS_RESOURCE_BEGIN
    OS_RESOURCE_DEF(RES_SCHEDULER ,RES_SCHEDULER_PRIO , {1,1,1})
    OS_RESOURCE_DEF(RES_R1 , 11 , {0,1,0})
    OS_RESOURCE_DEF(RES_R2 , 20 , {1,0,1})
    OS_RESOURCE_DEF(RES_R3 , 16 , {1,0,1})
    OS_RESOURCE_DEF(RES_MSG , 7 , {0,1,0})
  OS_RESOURCE_END

OS_CONFIG_END

//=============================================================================
//  FE Interrupts Configuration
//=============================================================================

OS_FE_INTERRUPT_BEGIN
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 000 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 001 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 002 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 003 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 004 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 005 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 006 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 007 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 008 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 009 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 010 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 011 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 012 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 013 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 014 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 015 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 016 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 017 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 018 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 019 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 020 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 021 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 022 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 023 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 024 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 025 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 026 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 027 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 028 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 029 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 030 */
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 031 */
OS_FE_INTERRUPT_END

//=============================================================================
//  EI Interrupts Configuration
//=============================================================================

OS_INTERRUPT_BEGIN
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 000 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 001 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 002 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 003 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 004 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 005 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 006 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 007 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 008 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 009 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 010 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 011 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 012 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 013 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 014 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 015 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 016 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 017 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 018 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 019 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 020 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 021 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 022 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 023 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 024 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 025 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 026 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 027 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 028 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 029 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 030 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 031 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 032 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 033 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 034 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 035 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 036 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 037 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 038 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 039 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 040 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 041 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 042 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 043 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 044 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 045 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 046 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 047 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 048 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 049 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 050 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 051 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 052 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 053 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 054 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 055 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 056 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 057 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 058 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 059 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 060 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 061 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 062 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 063 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 064 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 065 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 066 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 067 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 068 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 069 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 070 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 071 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 072 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 073 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 074 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 075 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 076 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 077 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 078 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 079 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 080 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 081 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 082 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 083 */
  OS_INTERRUPT_CAT2_DEF(SysTickTimer) /* Channel 084 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 085 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 086 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 087 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 088 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 089 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 090 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 091 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 092 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 093 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 094 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 095 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 096 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 097 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 098 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 099 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 100 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 101 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 102 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 103 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 104 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 105 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 106 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 107 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 108 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 109 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 110 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 111 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 112 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 113 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 114 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 115 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 116 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 117 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 118 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 119 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 120 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 121 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 122 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 123 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 124 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 125 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 126 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 127 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 128 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 129 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 130 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 131 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 132 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 133 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 134 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 135 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 136 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 137 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 138 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 139 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 140 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 141 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 142 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 143 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 144 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 145 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 146 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 147 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 148 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 149 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 150 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 151 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 152 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 153 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 154 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 155 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 156 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 157 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 158 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 159 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 160 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 161 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 162 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 163 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 164 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 165 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 166 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 167 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 168 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 169 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 170 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 171 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 172 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 173 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 174 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 175 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 176 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 177 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 178 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 179 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 180 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 181 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 182 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 183 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 184 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 185 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 186 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 187 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 188 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 189 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 190 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 191 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 192 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 193 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 194 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 195 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 196 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 197 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 198 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 199 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 200 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 201 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 202 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 203 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 204 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 205 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 206 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 207 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 208 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 209 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 210 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 211 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 212 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 213 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 214 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 215 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 216 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 217 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 218 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 219 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 220 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 221 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 222 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 223 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 224 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 225 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 226 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 227 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 228 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 229 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 230 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 231 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 232 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 233 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 234 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 235 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 236 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 237 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 238 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 239 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 240 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 241 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 242 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 243 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 244 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 245 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 246 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 247 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 248 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 249 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 250 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 251 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 252 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 253 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 254 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 255 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 256 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 257 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 258 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 259 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 260 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 261 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 262 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 263 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 264 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 265 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 266 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 267 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 268 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 269 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 270 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 271 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 272 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 273 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 274 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 275 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 276 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 277 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 278 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 279 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 280 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 281 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 282 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 283 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 284 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 285 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 286 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 287 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 288 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 289 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 290 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 291 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 292 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 293 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 294 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 295 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 296 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 297 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 298 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 299 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 300 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 301 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 302 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 303 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 304 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 305 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 306 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 307 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 308 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 309 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 310 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 311 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 312 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 313 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 314 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 315 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 316 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 317 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 318 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 319 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 320 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 321 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 322 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 323 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 324 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 325 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 326 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 327 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 328 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 329 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 330 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 331 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 332 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 333 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 334 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 335 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 336 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 337 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 338 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 339 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 340 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 341 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 342 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 343 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 344 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 345 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 346 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 347 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 348 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 349 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 350 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 351 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 352 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 353 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 354 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 355 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 356 */
  OS_INTERRUPT_CAT2_DEF(Undefined) /* Channel 357 */
OS_INTERRUPT_END



//=============================================================================
//  Hooks Configuration
//=============================================================================
#define STARTUPHOOK            0
#define ERRORHOOK              0
#define SHUTDOWNHOOK           0
#define PRETASKHOOK            1
#define POSTTASKHOOK           1


//=============================================================================
//  Clock Configuration
//=============================================================================
#define CPU_FREQ_MHZ           120U
#define SYS_TICK_US            1000U
