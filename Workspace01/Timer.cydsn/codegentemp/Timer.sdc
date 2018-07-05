# THIS FILE IS AUTOMATICALLY GENERATED
# Project: D:\job\MCU\Others\PSoC_train\Workspace01\Timer.cydsn\Timer.cyprj
# Date: Tue, 26 Jun 2018 05:08:22 GMT
#set_units -time ns
create_clock -name {Clock_2(FFB)} -period 1000 -waveform {0 500} [list [get_pins {ClockBlock/ff_div_11}]]
create_clock -name {Clock_1(FFB)} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ff_div_12}]]
create_clock -name {CyRouted1} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/dsi_in_0}]]
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFClk} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyIMO} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFClk} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySysClk} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/sysclk}]]
create_generated_clock -name {Clock_2} -source [get_pins {ClockBlock/hfclk}] -edges {1 49 97} [list]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/hfclk}] -edges {1 48001 96001} [list]


# Component constraints for D:\job\MCU\Others\PSoC_train\Workspace01\Timer.cydsn\TopDesign\TopDesign.cysch
# Project: D:\job\MCU\Others\PSoC_train\Workspace01\Timer.cydsn\Timer.cyprj
# Date: Tue, 26 Jun 2018 05:08:18 GMT