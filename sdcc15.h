
#ifndef __STC15_H__
#define __STC15_H__

#include <compiler.h>

/////////////////////////////////////////////////
//注意: STC15W4K32S4系列的芯片,上电后所有与PWM相关的IO口均为
//      高阻态,需将这些口设置为准双向口或强推挽模式方可正常使用
//相关IO: P0.6/P0.7/P1.6/P1.7/P2.1/P2.2
//        P2.3/P2.7/P3.7/P4.2/P4.4/P4.5
/////////////////////////////////////////////////

/////////////////////////////////////////////////

//包含本头文件后,不用另外再包含"REG51.H"

//内核特殊功能寄存器        // 复位值   描述
SFR(ACC, 0xE0);   //0000,0000 累加器Accumulator
SFR(B, 0xF0);   //0000,0000 B寄存器
SFR(PSW, 0xD0);   //0000,0000 程序状态字
SBIT(CY, 0xD0, 7);
SBIT(AC, 0xD0, 6);
SBIT(F0, 0xD0, 5);
SBIT(RS1, 0xD0, 4);
SBIT(RS0, 0xD0, 3);
SBIT(OV, 0xD0, 2);
SBIT(F1, 0xD0, 1);
SBIT(P, 0xD0, 0);
SFR(SP, 0x81);   //0000,0111 堆栈指针
SFR(DPL, 0x82);   //0000,0000 数据指针低字节
SFR(DPH, 0x83);   //0000,0000 数据指针高字节

//I/O 口特殊功能寄存器
SFR(P0, 0x80);   //1111,1111 端口0
SBIT(P00, 0x80, 0);
SBIT(P01, 0x80, 1);
SBIT(P02, 0x80, 2);
SBIT(P03, 0x80, 3);
SBIT(P04, 0x80, 4);
SBIT(P05, 0x80, 5);
SBIT(P06, 0x80, 6);
SBIT(P07, 0x80, 7);
SFR(P1, 0x90);   //1111,1111 端口1
SBIT(P10, 0x90, 0);
SBIT(P11, 0x90, 1);
SBIT(P12, 0x90, 2);
SBIT(P13, 0x90, 3);
SBIT(P14, 0x90, 4);
SBIT(P15, 0x90, 5);
SBIT(P16, 0x90, 6);
SBIT(P17, 0x90, 7);
SFR(P2, 0xA0);   //1111,1111 端口2
SBIT(P20, 0xA0, 0);
SBIT(P21, 0xA0, 1);
SBIT(P22, 0xA0, 2);
SBIT(P23, 0xA0, 3);
SBIT(P24, 0xA0, 4);
SBIT(P25, 0xA0, 5);
SBIT(P26, 0xA0, 6);
SBIT(P27, 0xA0, 7);
SFR(P3, 0xB0);   //1111,1111 端口3
SBIT(P30, 0xB0, 0);
SBIT(P31, 0xB0, 1);
SBIT(P32, 0xB0, 2);
SBIT(P33, 0xB0, 3);
SBIT(P34, 0xB0, 4);
SBIT(P35, 0xB0, 5);
SBIT(P36, 0xB0, 6);
SBIT(P37, 0xB0, 7);
SFR(P4, 0xC0);   //1111,1111 端口4
SBIT(P40, 0xC0, 0);
SBIT(P41, 0xC0, 1);
SBIT(P42, 0xC0, 2);
SBIT(P43, 0xC0, 3);
SBIT(P44, 0xC0, 4);
SBIT(P45, 0xC0, 5);
SBIT(P46, 0xC0, 6);
SBIT(P47, 0xC0, 7);
SFR(P5, 0xC8);   //xxxx,1111 端口5
SBIT(P50, 0xC8, 0);
SBIT(P51, 0xC8, 1);
SBIT(P52, 0xC8, 2);
SBIT(P53, 0xC8, 3);
SBIT(P54, 0xC8, 4);
SBIT(P55, 0xC8, 5);
SBIT(P56, 0xC8, 6);
SBIT(P57, 0xC8, 7);
SFR(P6, 0xE8);   //0000,0000 端口6
SBIT(P60, 0xE8, 0);
SBIT(P61, 0xE8, 1);
SBIT(P62, 0xE8, 2);
SBIT(P63, 0xE8, 3);
SBIT(P64, 0xE8, 4);
SBIT(P65, 0xE8, 5);
SBIT(P66, 0xE8, 6);
SBIT(P67, 0xE8, 7);
SFR(P7, 0xF8);   //0000,0000 端口7
SBIT(P70, 0xF8, 0);
SBIT(P71, 0xF8, 1);
SBIT(P72, 0xF8, 2);
SBIT(P73, 0xF8, 3);
SBIT(P74, 0xF8, 4);
SBIT(P75, 0xF8, 5);
SBIT(P76, 0xF8, 6);
SBIT(P77, 0xF8, 7);
SFR(P0M0, 0x94);   //0000,0000 端口0模式寄存器0
SFR(P0M1, 0x93);   //0000,0000 端口0模式寄存器1
SFR(P1M0, 0x92);   //0000,0000 端口1模式寄存器0
SFR(P1M1, 0x91);   //0000,0000 端口1模式寄存器1
SFR(P2M0, 0x96);   //0000,0000 端口2模式寄存器0
SFR(P2M1, 0x95);   //0000,0000 端口2模式寄存器1
SFR(P3M0, 0xB2);   //0000,0000 端口3模式寄存器0
SFR(P3M1, 0xB1);   //0000,0000 端口3模式寄存器1
SFR(P4M0, 0xB4);   //0000,0000 端口4模式寄存器0
SFR(P4M1, 0xB3);   //0000,0000 端口4模式寄存器1
SFR(P5M0, 0xCA);   //0000,0000 端口5模式寄存器0
SFR(P5M1, 0xC9);   //0000,0000 端口5模式寄存器1
SFR(P6M0, 0xCC);   //0000,0000 端口6模式寄存器0
SFR(P6M1, 0xCB);   //0000,0000 端口6模式寄存器1
SFR(P7M0, 0xE2);   //0000,0000 端口7模式寄存器0
SFR(P7M1, 0xE1);   //0000,0000 端口7模式寄存器1

//系统管理特殊功能寄存器
SFR(PCON, 0x87);   //0001,0000 电源控制寄存器
SFR(AUXR, 0x8E);   //0000,0000 辅助寄存器
SFR(AUXR1, 0xA2);   //0000,0000 辅助寄存器1
SFR(P_SW1, 0xA2);   //0000,0000 外设端口切换寄存器1
SFR(CLK_DIV, 0x97);   //0000,0000 时钟分频控制寄存器
SFR(BUS_SPEED, 0xA1);   //xx10,x011 总线速度控制寄存器
SFR(P1ASF, 0x9D);   //0000,0000 端口1模拟功能配置寄存器
SFR(P_SW2, 0xBA);   //0xxx,x000 外设端口切换寄存器

//中断特殊功能寄存器
SFR(IE, 0xA8);   //0000,0000 中断控制寄存器
SBIT(EA, 0xA8, 7);
SBIT(ELVD, 0xA8, 6);
SBIT(EADC, 0xA8, 5);
SBIT(ES, 0xA8, 4);
SBIT(ET1, 0xA8, 3);
SBIT(EX1, 0xA8, 2);
SBIT(ET0, 0xA8, 1);
SBIT(EX0, 0xA8, 0);
SFR(IP, 0xB8);   //0000,0000 中断优先级寄存器
SBIT(PPCA, 0xB8, 7);
SBIT(PLVD, 0xB8, 6);
SBIT(PADC, 0xB8, 5);
SBIT(PS, 0xB8, 4);
SBIT(PT1, 0xB8, 3);
SBIT(PX1, 0xB8, 2);
SBIT(PT0, 0xB8, 1);
SBIT(PX0, 0xB8, 0);
SFR(IE2, 0xAF);   //0000,0000 中断控制寄存器2
SFR(IP2, 0xB5);   //xxxx,xx00 中断优先级寄存器2
SFR(INT_CLKO, 0x8F);   //0000,0000 外部中断与时钟输出控制寄存器

//定时器特殊功能寄存器
SFR(TCON, 0x88);   //0000,0000 T0/T1控制寄存器
SBIT(TF1, 0x88, 7);
SBIT(TR1, 0x88, 6);
SBIT(TF0, 0x88, 5);
SBIT(TR0, 0x88, 4);
SBIT(IE1, 0x88, 3);
SBIT(IT1, 0x88, 2);
SBIT(IE0, 0x88, 1);
SBIT(IT0, 0x88, 0);
SFR(TMOD, 0x89);   //0000,0000 T0/T1模式寄存器
SFR(TL0, 0x8A);   //0000,0000 T0低字节
SFR(TL1, 0x8B);   //0000,0000 T1低字节
SFR(TH0, 0x8C);   //0000,0000 T0高字节
SFR(TH1, 0x8D);   //0000,0000 T1高字节
SFR(T4T3M, 0xD1);   //0000,0000 T3/T4模式寄存器
SFR(T3T4M, 0xD1);   //0000,0000 T3/T4模式寄存器
SFR(T4H, 0xD2);   //0000,0000 T4高字节
SFR(T4L, 0xD3);   //0000,0000 T4低字节
SFR(T3H, 0xD4);   //0000,0000 T3高字节
SFR(T3L, 0xD5);   //0000,0000 T3低字节
SFR(T2H, 0xD6);   //0000,0000 T2高字节
SFR(T2L, 0xD7);   //0000,0000 T2低字节
SFR(WKTCL, 0xAA);   //0000,0000 掉电唤醒定时器低字节
SFR(WKTCH, 0xAB);   //0000,0000 掉电唤醒定时器高字节
SFR(WDT_CONTR, 0xC1);   //0000,0000 看门狗控制寄存器

//串行口特殊功能寄存器
SFR(SCON, 0x98);   //0000,0000 串口1控制寄存器
SBIT(SM0, 0x98, 7);
SBIT(SM1, 0x98, 6);
SBIT(SM2, 0x98, 5);
SBIT(REN, 0x98, 4);
SBIT(TB8, 0x98, 3);
SBIT(RB8, 0x98, 2);
SBIT(TI, 0x98, 1);
SBIT(RI, 0x98, 0);
SFR(SBUF, 0x99);   //xxxx,xxxx 串口1数据寄存器
SFR(S2CON, 0x9A);   //0000,0000 串口2控制寄存器
SFR(S2BUF, 0x9B);   //xxxx,xxxx 串口2数据寄存器
SFR(S3CON, 0xAC);   //0000,0000 串口3控制寄存器
SFR(S3BUF, 0xAD);   //xxxx,xxxx 串口3数据寄存器
SFR(S4CON, 0x84);   //0000,0000 串口4控制寄存器
SFR(S4BUF, 0x85);   //xxxx,xxxx 串口4数据寄存器
SFR(SADDR, 0xA9);   //0000,0000 从机地址寄存器
SFR(SADEN, 0xB9);   //0000,0000 从机地址屏蔽寄存器

//ADC 特殊功能寄存器
SFR(ADC_CONTR, 0xBC);   //0000,0000 A/D转换控制寄存器
SFR(ADC_RES, 0xBD);   //0000,0000 A/D转换结果高8位
SFR(ADC_RESL, 0xBE);   //0000,0000 A/D转换结果低2位

//SPI 特殊功能寄存器
SFR(SPSTAT, 0xCD);   //00xx,xxxx SPI状态寄存器
SFR(SPCTL, 0xCE);   //0000,0100 SPI控制寄存器
SFR(SPDAT, 0xCF);   //0000,0000 SPI数据寄存器

//IAP/ISP 特殊功能寄存器
SFR(IAP_DATA, 0xC2);   //0000,0000 EEPROM数据寄存器
SFR(IAP_ADDRH, 0xC3);   //0000,0000 EEPROM地址高字节
SFR(IAP_ADDRL, 0xC4);   //0000,0000 EEPROM地址第字节
SFR(IAP_CMD, 0xC5);   //xxxx,xx00 EEPROM命令寄存器
SFR(IAP_TRIG, 0xC6);   //0000,0000 EEPRPM命令触发寄存器
SFR(IAP_CONTR, 0xC7);   //0000,x000 EEPROM控制寄存器

//PCA/PWM 特殊功能寄存器
SFR(CCON, 0xD8);   //00xx,xx00 PCA控制寄存器
SBIT(CF, 0xD8, 7);
SBIT(CR, 0xD8, 6);
SBIT(CCF2, 0xD8, 2);
SBIT(CCF1, 0xD8, 1);
SBIT(CCF0, 0xD8, 0);
SFR(CMOD, 0xD9);   //0xxx,x000 PCA 工作模式寄存器
SFR(CL, 0xE9);   //0000,0000 PCA计数器低字节
SFR(CH, 0xF9);   //0000,0000 PCA计数器高字节
SFR(CCAPM0, 0xDA);   //0000,0000 PCA模块0的PWM寄存器
SFR(CCAPM1, 0xDB);   //0000,0000 PCA模块1的PWM寄存器
SFR(CCAPM2, 0xDC);   //0000,0000 PCA模块2的PWM 寄存器
SFR(CCAP0L, 0xEA);   //0000,0000 PCA模块0的捕捉/比较寄存器低字节
SFR(CCAP1L, 0xEB);   //0000,0000 PCA模块1的捕捉/比较寄存器低字节
SFR(CCAP2L, 0xEC);   //0000,0000 PCA模块2的捕捉/比较寄存器低字节
SFR(PCA_PWM0, 0xF2);   //xxxx,xx00 PCA模块0的PWM寄存器
SFR(PCA_PWM1, 0xF3);   //xxxx,xx00 PCA模块1的PWM寄存器
SFR(PCA_PWM2, 0xF4);   //xxxx,xx00 PCA模块1的PWM寄存器
SFR(CCAP0H, 0xFA);   //0000,0000 PCA模块0的捕捉/比较寄存器高字节
SFR(CCAP1H, 0xFB);   //0000,0000 PCA模块1的捕捉/比较寄存器高字节
SFR(CCAP2H, 0xFC);   //0000,0000 PCA模块2的捕捉/比较寄存器高字节

//比较器特殊功能寄存器
SFR(CMPCR1, 0xE6);   //0000,0000 比较器控制寄存器1
SFR(CMPCR2, 0xE7);   //0000,0000 比较器控制寄存器2

//增强型PWM波形发生器特殊功能寄存器
SFR(PWMCFG, 0xf1);   //x000,0000 PWM配置寄存器
SFR(PWMCR, 0xf5);   //0000,0000 PWM控制寄存器
SFR(PWMIF, 0xf6);   //x000,0000 PWM中断标志寄存器
SFR(PWMFDCR, 0xf7);   //xx00,0000 PWM外部异常检测控制寄存器

//如下特殊功能寄存器位于扩展RAM区域
//访问这些寄存器,需先将P_SW2的BIT7设置为1,才可正常读写
#define PWMC        (*(unsigned int  volatile xdata *)0xfff0)
#define PWMCH       (*(unsigned char volatile xdata *)0xfff0)
#define PWMCL       (*(unsigned char volatile xdata *)0xfff1)
#define PWMCKS      (*(unsigned char volatile xdata *)0xfff2)
#define PWM2T1      (*(unsigned int  volatile xdata *)0xff00)
#define PWM2T1H     (*(unsigned char volatile xdata *)0xff00)
#define PWM2T1L     (*(unsigned char volatile xdata *)0xff01)
#define PWM2T2      (*(unsigned int  volatile xdata *)0xff02)
#define PWM2T2H     (*(unsigned char volatile xdata *)0xff02)
#define PWM2T2L     (*(unsigned char volatile xdata *)0xff03)
#define PWM2CR      (*(unsigned char volatile xdata *)0xff04)
#define PWM3T1      (*(unsigned int  volatile xdata *)0xff10)
#define PWM3T1H     (*(unsigned char volatile xdata *)0xff10)
#define PWM3T1L     (*(unsigned char volatile xdata *)0xff11)
#define PWM3T2      (*(unsigned int  volatile xdata *)0xff12)
#define PWM3T2H     (*(unsigned char volatile xdata *)0xff12)
#define PWM3T2L     (*(unsigned char volatile xdata *)0xff13)
#define PWM3CR      (*(unsigned char volatile xdata *)0xff14)
#define PWM4T1      (*(unsigned int  volatile xdata *)0xff20)
#define PWM4T1H     (*(unsigned char volatile xdata *)0xff20)
#define PWM4T1L     (*(unsigned char volatile xdata *)0xff21)
#define PWM4T2      (*(unsigned int  volatile xdata *)0xff22)
#define PWM4T2H     (*(unsigned char volatile xdata *)0xff22)
#define PWM4T2L     (*(unsigned char volatile xdata *)0xff23)
#define PWM4CR      (*(unsigned char volatile xdata *)0xff24)
#define PWM5T1      (*(unsigned int  volatile xdata *)0xff30)
#define PWM5T1H     (*(unsigned char volatile xdata *)0xff30)
#define PWM5T1L     (*(unsigned char volatile xdata *)0xff31)
#define PWM5T2      (*(unsigned int  volatile xdata *)0xff32)
#define PWM5T2H     (*(unsigned char volatile xdata *)0xff32)
#define PWM5T2L     (*(unsigned char volatile xdata *)0xff33)
#define PWM5CR      (*(unsigned char volatile xdata *)0xff34)
#define PWM6T1      (*(unsigned int  volatile xdata *)0xff40)
#define PWM6T1H     (*(unsigned char volatile xdata *)0xff40)
#define PWM6T1L     (*(unsigned char volatile xdata *)0xff41)
#define PWM6T2      (*(unsigned int  volatile xdata *)0xff42)
#define PWM6T2H     (*(unsigned char volatile xdata *)0xff42)
#define PWM6T2L     (*(unsigned char volatile xdata *)0xff43)
#define PWM6CR      (*(unsigned char volatile xdata *)0xff44)
#define PWM7T1      (*(unsigned int  volatile xdata *)0xff50)        
#define PWM7T1H     (*(unsigned char volatile xdata *)0xff50)        
#define PWM7T1L     (*(unsigned char volatile xdata *)0xff51)
#define PWM7T2      (*(unsigned int  volatile xdata *)0xff52)
#define PWM7T2H     (*(unsigned char volatile xdata *)0xff52)
#define PWM7T2L     (*(unsigned char volatile xdata *)0xff53)
#define PWM7CR      (*(unsigned char volatile xdata *)0xff54)

/////////////////////////////////////////////////

#endif

