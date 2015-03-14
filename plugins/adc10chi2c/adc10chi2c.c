#include <stdio.h>
#include "adc10chi2c.h"

#define PLUGINNAME adc10chi2c


int initADC(adcData *data,int bitRes, int address){
    printf("Initialize Plugin: %s ", PLUGINNAME);
    
    // Set up addsess
    if(address == 40) data.address = 0x28;
    else if(address == 41) data.address = 0x29;
    else if(address == 42) data.address = 0x2a;
    else if(address == 43) data.address = 0x2b;
    else if(address == 44) data.address = 0x2c;
    else if(address == 45) data.address = 0x2d;
    else if(address == 46) data.address = 0x2e;
    else if(address == 47) data.address = 0x2f;
    
    printf("ADDRESS: %x", data.address);
    
    
    // RESOLUTION
    int config = 0x00; // adc config
    if (bitRes == 10){ 
      config = 0x00;
      print("RESOLUTION: 10Bit");
    }
    else if (bitRes == 8) {
      config = 0x01;
      print("RESOLUTION: 10Bit");
    }
    
    // ADC build in Filter not implementet 
    
  
  
}

int updateADC(adcData *data){
  
  
}
































