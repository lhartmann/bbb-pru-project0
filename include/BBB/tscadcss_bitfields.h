// Written with information from AM335X PRU-ICSS Reference Guide
// Initial release: may-2014 - Lucas Hartmann
// Licensed under GPLv3+

#ifndef KRHUAN_TSCADCSS_BITFIELDS_H
#define KRHUAN_TSCADCSS_BITFIELDS_H

#include <stdint.h>

union TSCADCSS_REVISION_reg_t {
  struct {
    unsigned Y_MINOR : 6;
    unsigned CUSTOM : 2;
    unsigned X_MAJOR : 3;
    unsigned R_RTL : 5;
    unsigned FUNC : 12;
    unsigned : 2;
    unsigned SCHEME : 2;
  } bit;
  uint32_t all;
};


union TSCADCSS_SYSCONFIG_reg_t {
  struct {
    unsigned : 2;
    unsigned IdleMode : 2;
    unsigned : 28;
  } bit;
  uint32_t all;
};

union TSCADCSS_IRQSTATUS_RAW_reg_t {
  struct {
    unsigned HW_Pen_Event_asynchronous : 1;
    unsigned End_of_Sequence : 1;
    unsigned FIFO0_Threshold : 1;
    unsigned FIFO0_Overrun : 1;
    unsigned FIFO0_Underflow : 1;
    unsigned FIFO1_Threshold : 1;
    unsigned FIFO1_Overrun : 1;
    unsigned FIFO1_Underflow : 1;
    unsigned Out_of_Range : 1;
    unsigned Pen_Up_Event : 1;
    unsigned PEN_IRQ_synchronized : 1;
    unsigned : 21;
  } bit;
  uint32_t all;
};


union TSCADCSS_IRQSTATUS_reg_t {
  struct {
    unsigned HW_Pen_Event_asynchronous : 1;
    unsigned End_of_Sequence : 1;
    unsigned FIFO0_Threshold : 1;
    unsigned FIFO0_Overrun : 1;
    unsigned FIFO0_Underflow : 1;
    unsigned FIFO1_Threshold : 1;
    unsigned FIFO1_Overrun : 1;
    unsigned FIFO1_Underflow : 1;
    unsigned Out_of_Range : 1;
    unsigned Pen_Up_event : 1;
    unsigned HW_Pen_Event_synchronous : 1;
    unsigned : 21;
  } bit;
  uint32_t all;
};


union TSCADCSS_IRQENABLE_CLR_reg_t {
  struct {
    unsigned HW_Pen_Event_asynchronous : 1;
    unsigned End_of_Sequence : 1;
    unsigned FIFO0_Threshold : 1;
    unsigned FIFO0_Overrun : 1;
    unsigned FIFO0_Underflow : 1;
    unsigned FIFO1_Threshold : 1;
    unsigned FIFO1_Overrun : 1;
    unsigned FIFO1_Underflow : 1;
    unsigned Out_of_Range : 1;
    unsigned Pen_Up_Event : 1;
    unsigned HW_Pen_Event_synchronous : 1;
    unsigned : 21;
  } bit;
  uint32_t all;
};

union TSCADCSS_IRQENABLE_SET_reg_t {
  struct {
    unsigned HW_Pen_Event_asynchronous : 1;
    unsigned End_of_Sequence : 1;
    unsigned FIFO0_Threshold : 1;
    unsigned FIFO0_Overrun : 1;
    unsigned FIFO0_Underflow : 1;
    unsigned FIFO1_Threshold : 1;
    unsigned FIFO1_Overrun : 1;
    unsigned FIFO1_Underflow : 1;
    unsigned Out_of_Range : 1;
    unsigned Pen_Up_Event : 1;
    unsigned HW_Pen_Event_synchronous : 1;
    unsigned : 21;
  } bit;
  uint32_t all;
};


union TSCADCSS_IRQWAKEUP_reg_t {
  struct {
    unsigned WAKEEN0 : 1;
    unsigned : 31;
  } bit;
  uint32_t all;
};


union TSCADCSS_DMAENABLE_SET_reg_t {
  struct {
    unsigned Enable_0 : 1;
    unsigned Enable_1 : 1;
    unsigned : 30;
  } bit;
  uint32_t all;
};


union TSCADCSS_DMAENABLE_CLR_reg_t {
  struct {
    unsigned Enable_0 : 1;
    unsigned Enable_1 : 1;
    unsigned : 30;
  } bit;
  uint32_t all;
};


union TSCADCSS_CTRL_reg_t {
  struct {
    unsigned Enable : 1;
    unsigned Step_ID_tag : 1;
    unsigned StepConfig_WriterProtect_n_active_low : 1;
    unsigned ADC_Bias_Select : 1;
    unsigned Power_Down : 1;
    unsigned AFE_Pen_Ctrl : 2;
    unsigned Touch_Screen_Enable : 1;
    unsigned HW_event_mapping : 1;
    unsigned HW_preempt : 1;
    unsigned : 22;
  } bit;
  uint32_t all;
};

union TSCADCSS_ADCSTAT_reg_t {
  struct {
    unsigned STEP_ID : 5;
    unsigned FSM_BUSY : 1;
    unsigned PEN_IRQ0 : 1;
    unsigned PEN_IRQ1 : 1;
    unsigned : 24;
  } bit;
  uint32_t all;
};


union TSCADCSS_ADCRANGE_reg_t {
  struct {
    unsigned Low_Range_Data : 12;
    unsigned : 4;
    unsigned High_Range_Data : 12;
    unsigned : 4;
  } bit;
  uint32_t all;
};


union TSCADCSS_ADC_CLKDIV_reg_t {
  struct {
    unsigned ADC_ClkDiv : 16;
    unsigned : 16;
  } bit;
  uint32_t all;
};


union TSCADCSS_ADC_MISC_reg_t {
  struct {
    unsigned AFE_Spare_Input : 4;
    unsigned AFE_Spare_Output : 4;
    unsigned : 24;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPENABLE_reg_t {
  struct {
    unsigned TS_Charge : 1;
    unsigned STEP1 : 1;
    unsigned STEP2 : 1;
    unsigned STEP3 : 1;
    unsigned STEP4 : 1;
    unsigned STEP5 : 1;
    unsigned STEP6 : 1;
    unsigned STEP7 : 1;
    unsigned STEP8 : 1;
    unsigned STEP9 : 1;
    unsigned STEP10 : 1;
    unsigned STEP11 : 1;
    unsigned STEP12 : 1;
    unsigned STEP13 : 1;
    unsigned STEP14 : 1;
    unsigned STEP15 : 1;
    unsigned STEP16 : 1;
  unsigned : 15;
  } bit;
  uint32_t all;
};


union TSCADCSS_IDLECONFIG_reg_t {
  struct {
    unsigned : 5;
    unsigned XPPSW_SWC : 1;
    unsigned XNNSW__SWC : 1;
    unsigned YPPSW__SWC : 1;
    unsigned YNNSW_SWC : 1;
    unsigned XNPSW_SWC : 1;
    unsigned YPNSW_SWC : 1;
    unsigned WPNSW_SWC : 1;
    unsigned SEL_RFP_SWC_2_0 : 3;
    unsigned SEL_INM_SWM_3_0 : 4;
    unsigned SEL_INP_SWC_3_0 : 4;
    unsigned SEL_RFM_SWC_1_0 : 2;
    unsigned Diff_CNTRL : 1;
  unsigned : 6;
  } bit;
  uint32_t all;
};


union TSCADCSS_TS_CHARGE_STEPCONFIG_reg_t {
  struct {
    unsigned : 5;
    unsigned XPPSW_SWC : 1;
    unsigned XNNSW__SWC : 1;
    unsigned YPPSW__SWC : 1;
    unsigned YNNSW_SWC : 1;
    unsigned XNPSW_SWC : 1;
    unsigned YPNSW_SWC : 1;
    unsigned WPNSW_SWC : 1;
    unsigned SEL_RFP_SWC_2_0 : 3;
    unsigned SEL_INM_SWM_3_0 : 4;
    unsigned SEL_INP_SWC_3_0 : 4;
    unsigned SEL_RFM_SWC_1_0 : 2;
    unsigned Diff_CNTRL : 1;
    unsigned : 6;
  } bit;
  uint32_t all;
};


union TSCADCSS_TS_CHARGE_DELAY_reg_t {
  struct {
    unsigned OpenDelay : 18;
    unsigned : 14;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPCONFIG1_reg_t {
  struct {
    unsigned Mode : 2;
    unsigned Averaging : 3;
    unsigned XPPSW_SWC : 1;
    unsigned XNNSW_SWC : 1;
    unsigned YPPSW_SWC : 1;
    unsigned YNNSW_SWC : 1;
    unsigned XNPSW_SWC : 1;
    unsigned YPNSW_SWC : 1;
    unsigned WPNSW_SWC : 1;
    unsigned SEL_RFP_SWC_2_0 : 3;
    unsigned SEL_INM_SWM_3_0 : 4;
    unsigned SEL_INP_SWC_3_0 : 4;
    unsigned SEL_RFM_SWC_1_0 : 2;
    unsigned Diff_CNTRL : 1;
    unsigned FIFO_select : 1;
    unsigned Range_check : 1;
    unsigned : 4;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPDELAY1_reg_t {
  struct {
    unsigned OpenDelay : 18;
    unsigned : 6;
    unsigned SampleDelay : 8;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPCONFIG2_reg_t {
  struct {
    unsigned Mode : 2;
    unsigned Averaging : 3;
    unsigned XPPSW_SWC : 1;
    unsigned XNNSW_SWC : 1;
    unsigned YPPSW_SWC : 1;
    unsigned YNNSW_SWC : 1;
    unsigned XNPSW_SWC : 1;
    unsigned YPNSW_SWC : 1;
    unsigned WPNSW_SWC : 1;
    unsigned SEL_RFP_SWC_2_0 : 3;
    unsigned SEL_INM_SWM_3_0 : 4;
    unsigned SEL_INP_SWC_3_0 : 4;
    unsigned SEL_RFM_SWC_1_0 : 2;
    unsigned Diff_CNTRL : 1;
    unsigned FIFO_select : 1;
    unsigned Range_check : 1;
    unsigned : 4;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPDELAY2_reg_t {
  struct {
    unsigned OpenDelay : 18;
    unsigned : 6;
    unsigned SampleDelay : 8;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPCONFIG3_reg_t {
  struct {
    unsigned Mode : 2;
    unsigned Averaging : 3;
    unsigned XPPSW_SWC : 1;
    unsigned XNNSW_SWC : 1;
    unsigned YPPSW_SWC : 1;
    unsigned YNNSW_SWC : 1;
    unsigned XNPSW_SWC : 1;
    unsigned YPNSW_SWC : 1;
    unsigned WPNSW_SWC : 1;
    unsigned SEL_RFP_SWC_2_0 : 3;
    unsigned SEL_INM_SWM_3_0 : 4;
    unsigned SEL_INP_SWC_3_0 : 4;
    unsigned SEL_RFM_SWC_1_0 : 2;
    unsigned Diff_CNTRL : 1;
    unsigned FIFO_select : 1;
    unsigned Range_check : 1;
    unsigned : 4;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPDELAY3_reg_t {
  struct {
    unsigned OpenDelay : 18;
    unsigned : 6;
    unsigned SampleDelay : 8;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPCONFIG4_reg_t {
  struct {
    unsigned Mode : 2;
    unsigned Averaging : 3;
    unsigned XPPSW_SWC : 1;
    unsigned XNNSW_SWC : 1;
    unsigned YPPSW_SWC : 1;
    unsigned YNNSW_SWC : 1;
    unsigned XNPSW_SWC : 1;
    unsigned YPNSW_SWC : 1;
    unsigned WPNSW_SWC : 1;
    unsigned SEL_RFP_SWC_2_0 : 3;
    unsigned SEL_INM_SWM_3_0 : 4;
    unsigned SEL_INP_SWC_3_0 : 4;
    unsigned SEL_RFM_SWC_1_0 : 2;
    unsigned Diff_CNTRL : 1;
    unsigned FIFO_select : 1;
    unsigned Range_check : 1;
    unsigned : 4;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPDELAY4_reg_t {
  struct {
    unsigned OpenDelay : 18;
    unsigned : 6;
    unsigned SampleDelay : 8;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPCONFIG5_reg_t {
  struct {
    unsigned Mode : 2;
    unsigned Averaging : 3;
    unsigned XPPSW_SWC : 1;
    unsigned XNNSW_SWC : 1;
    unsigned YPPSW_SWC : 1;
    unsigned YNNSW_SWC : 1;
    unsigned XNPSW_SWC : 1;
    unsigned YPNSW_SWC : 1;
    unsigned WPNSW_SWC : 1;
    unsigned SEL_RFP_SWC_2_0 : 3;
    unsigned SEL_INM_SWM_3_0 : 4;
    unsigned SEL_INP_SWC_3_0 : 4;
    unsigned SEL_RFM_SWC_1_0 : 2;
    unsigned Diff_CNTRL : 1;
    unsigned FIFO_select : 1;
    unsigned Range_check : 1;
    unsigned : 4;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPDELAY5_reg_t {
  struct {
    unsigned OpenDelay : 18;
    unsigned : 6;
    unsigned SampleDelay : 8;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPCONFIG6_reg_t {
  struct {
    unsigned Mode : 2;
    unsigned Averaging : 3;
    unsigned XPPSW_SWC : 1;
    unsigned XNNSW_SWC : 1;
    unsigned YPPSW_SWC : 1;
    unsigned YNNSW_SWC : 1;
    unsigned XNPSW_SWC : 1;
    unsigned YPNSW_SWC : 1;
    unsigned WPNSW_SWC : 1;
    unsigned SEL_RFP_SWC_2_0 : 3;
    unsigned SEL_INM_SWM_3_0 : 4;
    unsigned SEL_INP_SWC_3_0 : 4;
    unsigned SEL_RFM_SWC_1_0 : 2;
    unsigned Diff_CNTRL : 1;
    unsigned FIFO_select : 1;
    unsigned Range_check : 1;
    unsigned : 4;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPDELAY6_reg_t {
  struct {
    unsigned OpenDelay : 18;
    unsigned : 6;
    unsigned SampleDelay : 8;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPCONFIG7_reg_t {
  struct {
    unsigned Mode : 2;
    unsigned Averaging : 3;
    unsigned XPPSW_SWC : 1;
    unsigned XNNSW_SWC : 1;
    unsigned YPPSW_SWC : 1;
    unsigned YNNSW_SWC : 1;
    unsigned XNPSW_SWC : 1;
    unsigned YPNSW_SWC : 1;
    unsigned WPNSW_SWC : 1;
    unsigned SEL_RFP_SWC_2_0 : 3;
    unsigned SEL_INM_SWM_3_0 : 4;
    unsigned SEL_INP_SWC_3_0 : 4;
    unsigned SEL_RFM_SWC_1_0 : 2;
    unsigned Diff_CNTRL : 1;
    unsigned FIFO_select : 1;
    unsigned Range_check : 1;
    unsigned : 4;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPDELAY7_reg_t {
  struct {
    unsigned OpenDelay : 18;
    unsigned : 6;
    unsigned SampleDelay : 8;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPCONFIG8_reg_t {
  struct {
    unsigned Mode : 2;
    unsigned Averaging : 3;
    unsigned XPPSW_SWC : 1;
    unsigned XNNSW_SWC : 1;
    unsigned YPPSW_SWC : 1;
    unsigned YNNSW_SWC : 1;
    unsigned XNPSW_SWC : 1;
    unsigned YPNSW_SWC : 1;
    unsigned WPNSW_SWC : 1;
    unsigned SEL_RFP_SWC_2_0 : 3;
    unsigned SEL_INM_SWM_3_0 : 4;
    unsigned SEL_INP_SWC_3_0 : 4;
    unsigned SEL_RFM_SWC_1_0 : 2;
    unsigned Diff_CNTRL : 1;
    unsigned FIFO_select : 1;
    unsigned Range_check : 1;
    unsigned : 4;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPDELAY8_reg_t {
  struct {
    unsigned OpenDelay : 18;
    unsigned : 6;
    unsigned SampleDelay : 8;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPCONFIG9_reg_t {
  struct {
    unsigned Mode : 2;
    unsigned Averaging : 3;
    unsigned XPPSW_SWC : 1;
    unsigned XNNSW_SWC : 1;
    unsigned YPPSW_SWC : 1;
    unsigned YNNSW_SWC : 1;
    unsigned XNPSW_SWC : 1;
    unsigned YPNSW_SWC : 1;
    unsigned WPNSW_SWC : 1;
    unsigned SEL_RFP_SWC_2_0 : 3;
    unsigned SEL_INM_SWM_3_0 : 4;
    unsigned SEL_INP_SWC_3_0 : 4;
    unsigned SEL_RFM_SWC_1_0 : 2;
    unsigned Diff_CNTRL : 1;
    unsigned FIFO_select : 1;
    unsigned Range_check : 1;
    unsigned : 4;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPDELAY9_reg_t {
  struct {
    unsigned OpenDelay : 18;
    unsigned : 6;
    unsigned SampleDelay : 8;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPCONFIG10_reg_t {
  struct {
    unsigned Mode : 2;
    unsigned Averaging : 3;
    unsigned XPPSW_SWC : 1;
    unsigned XNNSW_SWC : 1;
    unsigned YPPSW_SWC : 1;
    unsigned YNNSW_SWC : 1;
    unsigned XNPSW_SWC : 1;
    unsigned YPNSW_SWC : 1;
    unsigned WPNSW_SWC : 1;
    unsigned SEL_RFP_SWC_2_0 : 3;
    unsigned SEL_INM_SWM_3_0 : 4;
    unsigned SEL_INP_SWC_3_0 : 4;
    unsigned SEL_RFM_SWC_1_0 : 2;
    unsigned Diff_CNTRL : 1;
    unsigned FIFO_select : 1;
    unsigned Range_check : 1;
    unsigned : 4;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPDELAY10_reg_t {
  struct {
    unsigned OpenDelay : 18;
    unsigned : 6;
    unsigned SampleDelay : 8;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPCONFIG11_reg_t {
  struct {
    unsigned Mode : 2;
    unsigned Averaging : 3;
    unsigned XPPSW_SWC : 1;
    unsigned XNNSW_SWC : 1;
    unsigned YPPSW_SWC : 1;
    unsigned YNNSW_SWC : 1;
    unsigned XNPSW_SWC : 1;
    unsigned YPNSW_SWC : 1;
    unsigned WPNSW_SWC : 1;
    unsigned SEL_RFP_SWC_2_0 : 3;
    unsigned SEL_INM_SWM_3_0 : 4;
    unsigned SEL_INP_SWC_3_0 : 4;
    unsigned SEL_RFM_SWC_1_0 : 2;
    unsigned Diff_CNTRL : 1;
    unsigned FIFO_select : 1;
    unsigned Range_check : 1;
    unsigned : 4;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPDELAY11_reg_t {
  struct {
    unsigned OpenDelay : 18;
    unsigned : 6;
    unsigned SampleDelay : 8;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPCONFIG12_reg_t {
  struct {
    unsigned Mode : 2;
    unsigned Averaging : 3;
    unsigned XPPSW_SWC : 1;
    unsigned XNNSW_SWC : 1;
    unsigned YPPSW_SWC : 1;
    unsigned YNNSW_SWC : 1;
    unsigned XNPSW_SWC : 1;
    unsigned YPNSW_SWC : 1;
    unsigned WPNSW_SWC : 1;
    unsigned SEL_RFP_SWC_2_0 : 3;
    unsigned SEL_INM_SWM_3_0 : 4;
    unsigned SEL_INP_SWC_3_0 : 4;
    unsigned SEL_RFM_SWC_1_0 : 2;
    unsigned Diff_CNTRL : 1;
    unsigned FIFO_select : 1;
    unsigned Range_check : 1;
    unsigned : 4;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPDELAY12_reg_t {
  struct {
    unsigned OpenDelay : 18;
    unsigned : 6;
    unsigned SampleDelay : 8;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPCONFIG13_reg_t {
  struct {
    unsigned Mode : 2;
    unsigned Averaging : 3;
    unsigned XPPSW_SWC : 1;
    unsigned XNNSW_SWC : 1;
    unsigned YPPSW_SWC : 1;
    unsigned YNNSW_SWC : 1;
    unsigned XNPSW_SWC : 1;
    unsigned YPNSW_SWC : 1;
    unsigned WPNSW_SWC : 1;
    unsigned SEL_RFP_SWC_2_0 : 3;
    unsigned SEL_INM_SWM_3_0 : 4;
    unsigned SEL_INP_SWC_3_0 : 4;
    unsigned SEL_RFM_SWC_1_0 : 2;
    unsigned Diff_CNTRL : 1;
    unsigned FIFO_select : 1;
    unsigned Range_check : 1;
    unsigned : 4;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPDELAY13_reg_t {
  struct {
    unsigned OpenDelay : 18;
    unsigned : 6;
    unsigned SampleDelay : 8;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPCONFIG14_reg_t {
    struct {
      unsigned Mode : 2;
      unsigned Averaging : 3;
      unsigned XPPSW_SWC : 1;
      unsigned XNNSW_SWC : 1;
      unsigned YPPSW_SWC : 1;
      unsigned YNNSW_SWC : 1;
      unsigned XNPSW_SWC : 1;
      unsigned YPNSW_SWC : 1;
      unsigned WPNSW_SWC : 1;
      unsigned SEL_RFP_SWC_2_0 : 3;
      unsigned SEL_INM_SWM_3_0 : 4;
      unsigned SEL_INP_SWC_3_0 : 4;
      unsigned SEL_RFM_SWC_1_0 : 2;
      unsigned Diff_CNTRL : 1;
      unsigned FIFO_select : 1;
      unsigned Range_check : 1;
    unsigned : 4;
    } bit;
    uint32_t all;
};


union TSCADCSS_STEPDELAY14_reg_t {
  struct {
    unsigned OpenDelay : 18;
    unsigned : 6;
    unsigned SampleDelay : 8;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPCONFIG15_reg_t {
  struct {
    unsigned Mode : 2;
    unsigned Averaging : 3;
    unsigned XPPSW_SWC : 1;
    unsigned XNNSW_SWC : 1;
    unsigned YPPSW_SWC : 1;
    unsigned YNNSW_SWC : 1;
    unsigned XNPSW_SWC : 1;
    unsigned YPNSW_SWC : 1;
    unsigned WPNSW_SWC : 1;
    unsigned SEL_RFP_SWC_2_0 : 3;
    unsigned SEL_INM_SWM_3_0 : 4;
    unsigned SEL_INP_SWC_3_0 : 4;
    unsigned SEL_RFM_SWC_1_0 : 2;
    unsigned Diff_CNTRL : 1;
    unsigned FIFO_select : 1;
    unsigned Range_check : 1;
    unsigned : 4;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPDELAY15_reg_t {
  struct {
    unsigned OpenDelay : 18;
    unsigned : 6;
    unsigned SampleDelay : 8;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPCONFIG16_reg_t {
  struct {
    unsigned Mode : 2;
    unsigned Averaging : 3;
    unsigned XPPSW_SWC : 1;
    unsigned XNNSW_SWC : 1;
    unsigned YPPSW_SWC : 1;
    unsigned YNNSW_SWC : 1;
    unsigned XNPSW_SWC : 1;
    unsigned YPNSW_SWC : 1;
    unsigned WPNSW_SWC : 1;
    unsigned SEL_RFP_SWC_2_0 : 3;
    unsigned SEL_INM_SWM_3_0 : 4;
    unsigned SEL_INP_SWC_3_0 : 4;
    unsigned SEL_RFM_SWC_1_0 : 2;
    unsigned Diff_CNTRL : 1;
    unsigned FIFO_select : 1;
    unsigned Range_check : 1;
    unsigned : 4;
  } bit;
  uint32_t all;
};


union TSCADCSS_STEPDELAY16_reg_t {
  struct {
    unsigned OpenDelay : 18;
    unsigned : 6;
    unsigned SampleDelay : 8;
  } bit;
  uint32_t all;
};


union TSCADCSS_FIFO0COUNT_reg_t {
  struct {
    unsigned Words_in_FIFO0 : 7;
    unsigned : 25;
  } bit;
  uint32_t all;
};


union TSCADCSS_FIFO0THRESHOLD_reg_t {
  struct {
    unsigned FIFO0_threshold_Level : 6;
    unsigned : 26;
  } bit;
  uint32_t all;
};


union TSCADCSS_DMA0REQ_reg_t {
  struct {
    unsigned DMA_Request_Level : 6;
    unsigned : 26;
  } bit;
  uint32_t all;
};


union TSCADCSS_FIFO1COUNT_reg_t {
  struct {
    unsigned Words_in_FIFO0 : 7;
    unsigned : 25;
  } bit;
  uint32_t all;
};


union TSCADCSS_FIFO1THRESHOLD_reg_t {
  struct {
    unsigned FIFO0_threshold_Level : 6;
    unsigned : 26;
  } bit;
  uint32_t all;
};


union TSCADCSS_DMA1REQ_reg_t {
  struct {
    unsigned DMA_Request_Level : 6;
    unsigned : 26;
  } bit;
  uint32_t all;
};


union TSCADCSS_FIFO0DATA_reg_t {
  struct {
    unsigned ADCDATA : 12;
    unsigned : 4;
    unsigned ADCCHNLID : 4;
    unsigned : 12;
  } bit;
  uint32_t all;
};


union TSCADCSS_FIFO1DATA_reg_t {
  struct {
    unsigned ADCDATA : 12;
    unsigned : 4;
    unsigned ADCCHNLID : 4;
    unsigned : 12;
  } bit;
  uint32_t all;
};

#endif
