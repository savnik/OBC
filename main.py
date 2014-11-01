import smbus
import time

bus = smbus.SMBus(1)
# Config i2c
#I2C resolution 0=10bit 1=8bit
# Filter type
# 0 0 ADC value
# 0 1 Complementary Filter
adc_config = 0x00

address_adc = 0x28 
V_ref = 5.0

results8 = []
results10 = []

print "Setup ADC"
bus.write_byte(address_adc, adc_config)
time.sleep(0.1)
results10 = bus.read_i2c_block_data(address_adc, 0x00, 0x14)
ch0 = ((results10[0] << 8) | results10[1])*(V_ref/1024.0)
ch1 = ((results10[2] << 8) | results10[3])*(V_ref/1024.0)
ch2 = ((results10[4] << 8) | results10[5])*(V_ref/1024.0)
ch3 = ((results10[6] << 8) | results10[7])*(V_ref/1024.0)
ch4 = ((results10[8] << 8) | results10[9])*(V_ref/1024.0)
ch5 = ((results10[10] << 8) | results10[11])*(V_ref/1024.0)
ch6 = ((results10[12] << 8) | results10[13])*(V_ref/1024.0)
ch7 = ((results10[14] << 8) | results10[15])*(V_ref/1024.0)
ch8 = ((results10[16] << 8) | results10[17])*(V_ref/1024.0)
ch9 = ((results10[18] << 8) | results10[19])*(V_ref/1024.0)

print ch0, ch1

