#include <Arduino.h>
#include <Wire.h>
#include "PT2348.h"

PT2348::PT2348(){
    Wire.begin();
}

void PT2348::setMain_in(int in_sel, int in_gain){
           switch(in_sel){
               case 0: in_sel = 0b00000000;break;
               case 1: in_sel = 0b00000001;break;
               case 2: in_sel = 0b00000010;break;
               case 3: in_sel = 0b00000011;break;
               case 4: in_sel = 0b00000100;break;
               case 5: in_sel = 0b00000101;break;
   }
           switch(in_gain){
               case 0: in_gain =  0b00000000;break;
               case 1: in_gain =  0b00001000;break;
               case 2: in_gain =  0b00010000;break;
               case 3: in_gain =  0b00011000;break;
               case 4: in_gain =  0b00100000;break;
               case 5: in_gain =  0b00101000;break;
               case 6: in_gain =  0b00110000;break;
               case 7: in_gain =  0b00111000;break;
               case 8: in_gain =  0b01000000;break;
               case 9: in_gain =  0b01001000;break;
               case 10: in_gain = 0b01010000;break;
               case 11: in_gain = 0b01011000;break;
               case 12: in_gain = 0b01100000;break;
               case 13: in_gain = 0b01101000;break;
               case 14: in_gain = 0b01110000;break;
               case 15: in_gain = 0b01111000;break;
   }
        
           writeWire(MAIN_IN, in_sel+in_gain); 
   }

void PT2348::setLoun_sub(int loud, int loun_off, int sub_f){
           switch(loud){
               case 0: loud =  0b00000000;break;
               case 1: loud =  0b00000001;break;
               case 2: loud =  0b00000010;break;
               case 3: loud =  0b00000011;break;
               case 4: loud =  0b00000100;break;
               case 5: loud =  0b00000101;break;
               case 6: loud =  0b00000110;break;
               case 7: loud =  0b00000111;break;
               case 8: loud =  0b00001000;break;
               case 9: loud =  0b00001001;break;
               case 10: loud = 0b00001010;break;
               case 11: loud = 0b00001011;break;
               case 12: loud = 0b00001100;break;
               case 13: loud = 0b00001101;break;
               case 14: loud = 0b00001110;break;
               case 15: loud = 0b00001111;break;
   }
            switch(loun_off){
               case 0: loun_off = 0b00000000;break;
               case 1: loun_off = 0b00010000;break;
   } 
            switch(sub_f){
               case 0: sub_f = 0b00100000;break;
               case 1: sub_f = 0b01000000;break;
               case 2: sub_f = 0b01100000;break;
   } 
           writeWire(LOUN_SUB, loud+loun_off+sub_f); 
   }

void PT2348::setVol(int vol){
             switch(vol){
               case 0: vol =  0b00000000;break;
               case 1: vol =  0b00000001;break;
               case 2: vol =  0b00000010;break;
               case 3: vol =  0b00000011;break;
               case 4: vol =  0b00000100;break;
               case 5: vol =  0b00000101;break;
               case 6: vol =  0b00000110;break;
               case 7: vol =  0b00000111;break;
               case 8: vol =  0b00001000;break;
               case 9: vol =  0b00001001;break;
               case 10: vol = 0b00001010;break;
               case 11: vol = 0b00001011;break;
               case 12: vol = 0b00001100;break;
               case 13: vol = 0b00001101;break;
               case 14: vol = 0b00001110;break;
               case 15: vol = 0b00001111;break;

               case -1: vol =  0b00010001;break;
               case -2: vol =  0b00010010;break;
               case -3: vol =  0b00010011;break;
               case -4: vol =  0b00010100;break;
               case -5: vol =  0b00010101;break;
               case -6: vol =  0b00010110;break;
               case -7: vol =  0b00010111;break;
               case -8: vol =  0b00100000;break;
               case -9: vol =  0b00100001;break;
               case -10: vol = 0b00100010;break;
               case -11: vol = 0b00100011;break;
               case -12: vol = 0b00100100;break;
               case -13: vol = 0b00100101;break;
               case -14: vol = 0b00100110;break;
               case -15: vol = 0b00100111;break;

               case -16: vol =  0b00110000;break;
               case -17: vol =  0b00110001;break;
               case -18: vol =  0b00110010;break;
               case -19: vol =  0b00110011;break;
               case -20: vol =  0b00110100;break;
               case -21: vol =  0b00110101;break;
               case -22: vol =  0b00110110;break;
               case -23: vol =  0b00110111;break;
               case -24: vol =  0b01000000;break;
               case -25: vol =  0b01000001;break;
               case -26: vol =  0b01000010;break;
               case -27: vol =  0b01000011;break;
               case -28: vol =  0b01000100;break;
               case -29: vol =  0b01000101;break;
               case -30: vol =  0b01000110;break;
               case -31: vol =  0b01000111;break;

               case -32: vol =  0b01010000;break;
               case -33: vol =  0b01010001;break;
               case -34: vol =  0b01010010;break;
               case -35: vol =  0b01010011;break;
               case -36: vol =  0b01010100;break;
               case -37: vol =  0b01010101;break;
               case -38: vol =  0b01010110;break;
               case -39: vol =  0b01010111;break;
               case -40: vol =  0b01100000;break;
               case -41: vol =  0b01100001;break;
               case -42: vol =  0b01100010;break;
               case -43: vol =  0b01100011;break;
               case -44: vol =  0b01100100;break;
               case -45: vol =  0b01100101;break;
               case -46: vol =  0b01100110;break;
               case -47: vol =  0b01100111;break;

               case -48: vol =  0b01110000;break;
               case -49: vol =  0b01110001;break;
               case -50: vol =  0b01110010;break;
               case -51: vol =  0b01110011;break;
               case -52: vol =  0b01110100;break;
               case -53: vol =  0b01110101;break;
               case -54: vol =  0b01110110;break;
               case -55: vol =  0b01110111;break;
               case -56: vol =  0b10000000;break;
               case -57: vol =  0b10000001;break;
               case -58: vol =  0b10000010;break;
               case -59: vol =  0b10000011;break;
               case -60: vol =  0b10000100;break;
               case -61: vol =  0b10000101;break;
               case -62: vol =  0b10000110;break;
               case -63: vol =  0b10000111;break;

               case -64: vol =  0b10010000;break;
               case -65: vol =  0b10010001;break;
               case -66: vol =  0b10010010;break;
               case -67: vol =  0b10010011;break;
               case -68: vol =  0b10010100;break;
               case -69: vol =  0b10010101;break;
               case -70: vol =  0b10010110;break;
               case -71: vol =  0b10010111;break;
               case -72: vol =  0b10100000;break;
               case -73: vol =  0b10100001;break;
               case -74: vol =  0b10100010;break;
               case -75: vol =  0b10100011;break;
               case -76: vol =  0b10100100;break;
               case -77: vol =  0b10100101;break;
               case -78: vol =  0b10100110;break;
               case -79: vol =  0b10100111;break;
  } 
              if(vol<=-80){vol = 0b11110000;}
           writeWire(VOLUME, vol); 
  }


void PT2348::setBass_mix(int bass, int mix_off, int mix_LF, int mix_RF){
             switch(bass){
               case -1: bass =  0b00000001;break;
               case -2: bass =  0b00000010;break;
               case -3: bass =  0b00000011;break;
               case -4: bass =  0b00000100;break;
               case -5: bass =  0b00000101;break;
               case -6: bass =  0b00000110;break;
               case -7: bass =  0b00000111;break;
               case -8: bass =  0b00001000;break;
               case -9: bass =  0b00001001;break;
               case -10: bass = 0b00001010;break;
               case -11: bass = 0b00001011;break;
               case -12: bass = 0b00001100;break;
               case -13: bass = 0b00001101;break;
               case -14: bass = 0b00001110;break;
               case -15: bass = 0b00001111;break;

               case 0: bass =  0b00010000;break;
               case 1: bass =  0b00010001;break;
               case 2: bass =  0b00010010;break;
               case 3: bass =  0b00010011;break;
               case 4: bass =  0b00010100;break;
               case 5: bass =  0b00010101;break;
               case 6: bass =  0b00010110;break;
               case 7: bass =  0b00010111;break;
               case 8: bass =  0b00011000;break;
               case 9: bass =  0b00011001;break;
               case 10: bass = 0b00011010;break;
               case 11: bass = 0b00011011;break;
               case 12: bass = 0b00011100;break;
               case 13: bass = 0b00011101;break;
               case 14: bass = 0b00011110;break;
               case 15: bass = 0b00011111;break;
  }
            switch(mix_off){
               case 0: mix_off = 0b00000000;break;
               case 1: mix_off = 0b00100000;break;
  } 
            switch(mix_LF){
               case 0: mix_LF = 0b00000000;break;
               case 1: mix_LF = 0b01000000;break;
  } 
            switch(mix_RF){
               case 0: mix_RF = 0b00000000;break;
               case 1: mix_RF = 0b10000000;break;
  } 
           writeWire(BASS_MIX, bass+mix_off+mix_LF+mix_RF); 
  }

void PT2348::setTreble(int treb){
             switch(treb){
               case -1: treb =  0b00000001;break;
               case -2: treb =  0b00000010;break;
               case -3: treb =  0b00000011;break;
               case -4: treb =  0b00000100;break;
               case -5: treb =  0b00000101;break;
               case -6: treb =  0b00000110;break;
               case -7: treb =  0b00000111;break;
               case -8: treb =  0b00001000;break;
               case -9: treb =  0b00001001;break;
               case -10: treb = 0b00001010;break;
               case -11: treb = 0b00001011;break;
               case -12: treb = 0b00001100;break;
               case -13: treb = 0b00001101;break;
               case -14: treb = 0b00001110;break;
               case -15: treb = 0b00001111;break;

               case 0: treb =  0b00010000;break;
               case 1: treb =  0b00010001;break;
               case 2: treb =  0b00010010;break;
               case 3: treb =  0b00010011;break;
               case 4: treb =  0b00010100;break;
               case 5: treb =  0b00010101;break;
               case 6: treb =  0b00010110;break;
               case 7: treb =  0b00010111;break;
               case 8: treb =  0b00011000;break;
               case 9: treb =  0b00011001;break;
               case 10: treb = 0b00011010;break;
               case 11: treb = 0b00011011;break;
               case 12: treb = 0b00011100;break;
               case 13: treb = 0b00011101;break;
               case 14: treb = 0b00011110;break;
               case 15: treb = 0b00011111;break;
  }    
           writeWire(TREBLE, treb);    
  }

void PT2348::setAtt_mix(int att_mix){
             switch(att_mix){
               case 0: att_mix =  0b00000000;break;
               case 1: att_mix =  0b00000001;break;
               case 2: att_mix =  0b00000010;break;
               case 3: att_mix =  0b00000011;break;
               case 4: att_mix =  0b00000100;break;
               case 5: att_mix =  0b00000101;break;
               case 6: att_mix =  0b00000110;break;
               case 7: att_mix =  0b00000111;break;
               case 8: att_mix =  0b00001000;break;
               case 9: att_mix =  0b00001001;break;
               case 10: att_mix = 0b00001010;break;
               case 11: att_mix = 0b00001011;break;
               case 12: att_mix = 0b00001100;break;
               case 13: att_mix = 0b00001101;break;
               case 14: att_mix = 0b00001110;break;
               case 15: att_mix = 0b00001111;break;

               case -1: att_mix =  0b00010001;break;
               case -2: att_mix =  0b00010010;break;
               case -3: att_mix =  0b00010011;break;
               case -4: att_mix =  0b00010100;break;
               case -5: att_mix =  0b00010101;break;
               case -6: att_mix =  0b00010110;break;
               case -7: att_mix =  0b00010111;break;
               case -8: att_mix =  0b00100000;break;
               case -9: att_mix =  0b00100001;break;
               case -10: att_mix = 0b00100010;break;
               case -11: att_mix = 0b00100011;break;
               case -12: att_mix = 0b00100100;break;
               case -13: att_mix = 0b00100101;break;
               case -14: att_mix = 0b00100110;break;
               case -15: att_mix = 0b00100111;break;
  }    
           writeWire(MIX_LEVEL, att_mix);    
  }

void PT2348::setAtt_LF(int att_LF){
             switch(att_LF){
               case 0: att_LF =  0b00000000;break;
               case 1: att_LF =  0b00000001;break;
               case 2: att_LF =  0b00000010;break;
               case 3: att_LF =  0b00000011;break;
               case 4: att_LF =  0b00000100;break;
               case 5: att_LF =  0b00000101;break;
               case 6: att_LF =  0b00000110;break;
               case 7: att_LF =  0b00000111;break;
               case 8: att_LF =  0b00001000;break;
               case 9: att_LF =  0b00001001;break;
               case 10: att_LF = 0b00001010;break;
               case 11: att_LF = 0b00001011;break;
               case 12: att_LF = 0b00001100;break;
               case 13: att_LF = 0b00001101;break;
               case 14: att_LF = 0b00001110;break;
               case 15: att_LF = 0b00001111;break;

               case -1: att_LF =  0b00010001;break;
               case -2: att_LF =  0b00010010;break;
               case -3: att_LF =  0b00010011;break;
               case -4: att_LF =  0b00010100;break;
               case -5: att_LF =  0b00010101;break;
               case -6: att_LF =  0b00010110;break;
               case -7: att_LF =  0b00010111;break;
               case -8: att_LF =  0b00100000;break;
               case -9: att_LF =  0b00100001;break;
               case -10: att_LF = 0b00100010;break;
               case -11: att_LF = 0b00100011;break;
               case -12: att_LF = 0b00100100;break;
               case -13: att_LF = 0b00100101;break;
               case -14: att_LF = 0b00100110;break;
               case -15: att_LF = 0b00100111;break;
  }    
           writeWire(ATT_LF, att_LF);    
  }

void PT2348::setAtt_RF(int att_RF){
             switch(att_RF){
               case 0: att_RF =  0b00000000;break;
               case 1: att_RF =  0b00000001;break;
               case 2: att_RF =  0b00000010;break;
               case 3: att_RF =  0b00000011;break;
               case 4: att_RF =  0b00000100;break;
               case 5: att_RF =  0b00000101;break;
               case 6: att_RF =  0b00000110;break;
               case 7: att_RF =  0b00000111;break;
               case 8: att_RF =  0b00001000;break;
               case 9: att_RF =  0b00001001;break;
               case 10: att_RF = 0b00001010;break;
               case 11: att_RF = 0b00001011;break;
               case 12: att_RF = 0b00001100;break;
               case 13: att_RF = 0b00001101;break;
               case 14: att_RF = 0b00001110;break;
               case 15: att_RF = 0b00001111;break;

               case -1: att_RF =  0b00010001;break;
               case -2: att_RF =  0b00010010;break;
               case -3: att_RF =  0b00010011;break;
               case -4: att_RF =  0b00010100;break;
               case -5: att_RF =  0b00010101;break;
               case -6: att_RF =  0b00010110;break;
               case -7: att_RF =  0b00010111;break;
               case -8: att_RF =  0b00100000;break;
               case -9: att_RF =  0b00100001;break;
               case -10: att_RF = 0b00100010;break;
               case -11: att_RF = 0b00100011;break;
               case -12: att_RF = 0b00100100;break;
               case -13: att_RF = 0b00100101;break;
               case -14: att_RF = 0b00100110;break;
               case -15: att_RF = 0b00100111;break;
  }    
           writeWire(ATT_RF, att_RF);    
  }

void PT2348::setAtt_LR(int att_LR){
             switch(att_LR){
               case 0: att_LR =  0b00000000;break;
               case 1: att_LR =  0b00000001;break;
               case 2: att_LR =  0b00000010;break;
               case 3: att_LR =  0b00000011;break;
               case 4: att_LR =  0b00000100;break;
               case 5: att_LR =  0b00000101;break;
               case 6: att_LR =  0b00000110;break;
               case 7: att_LR =  0b00000111;break;
               case 8: att_LR =  0b00001000;break;
               case 9: att_LR =  0b00001001;break;
               case 10: att_LR = 0b00001010;break;
               case 11: att_LR = 0b00001011;break;
               case 12: att_LR = 0b00001100;break;
               case 13: att_LR = 0b00001101;break;
               case 14: att_LR = 0b00001110;break;
               case 15: att_LR = 0b00001111;break;

               case -1: att_LR =  0b00010001;break;
               case -2: att_LR =  0b00010010;break;
               case -3: att_LR =  0b00010011;break;
               case -4: att_LR =  0b00010100;break;
               case -5: att_LR =  0b00010101;break;
               case -6: att_LR =  0b00010110;break;
               case -7: att_LR =  0b00010111;break;
               case -8: att_LR =  0b00100000;break;
               case -9: att_LR =  0b00100001;break;
               case -10: att_LR = 0b00100010;break;
               case -11: att_LR = 0b00100011;break;
               case -12: att_LR = 0b00100100;break;
               case -13: att_LR = 0b00100101;break;
               case -14: att_LR = 0b00100110;break;
               case -15: att_LR = 0b00100111;break;
  }    
           writeWire(ATT_LR, att_LR);    
  }

void PT2348::setAtt_RR(int att_RR){
             switch(att_RR){
               case 0: att_RR =  0b00000000;break;
               case 1: att_RR =  0b00000001;break;
               case 2: att_RR =  0b00000010;break;
               case 3: att_RR =  0b00000011;break;
               case 4: att_RR =  0b00000100;break;
               case 5: att_RR =  0b00000101;break;
               case 6: att_RR =  0b00000110;break;
               case 7: att_RR =  0b00000111;break;
               case 8: att_RR =  0b00001000;break;
               case 9: att_RR =  0b00001001;break;
               case 10: att_RR = 0b00001010;break;
               case 11: att_RR = 0b00001011;break;
               case 12: att_RR = 0b00001100;break;
               case 13: att_RR = 0b00001101;break;
               case 14: att_RR = 0b00001110;break;
               case 15: att_RR = 0b00001111;break;

               case -1: att_RR =  0b00010001;break;
               case -2: att_RR =  0b00010010;break;
               case -3: att_RR =  0b00010011;break;
               case -4: att_RR =  0b00010100;break;
               case -5: att_RR =  0b00010101;break;
               case -6: att_RR =  0b00010110;break;
               case -7: att_RR =  0b00010111;break;
               case -8: att_RR =  0b00100000;break;
               case -9: att_RR =  0b00100001;break;
               case -10: att_RR = 0b00100010;break;
               case -11: att_RR = 0b00100011;break;
               case -12: att_RR = 0b00100100;break;
               case -13: att_RR = 0b00100101;break;
               case -14: att_RR = 0b00100110;break;
               case -15: att_RR = 0b00100111;break;
  }    
           writeWire(ATT_RR, att_RR);    
  }

void PT2348::setAtt_SUB(int att_SUB){
             switch(att_SUB){
               case 0: att_SUB =  0b00000000;break;
               case 1: att_SUB =  0b00000001;break;
               case 2: att_SUB =  0b00000010;break;
               case 3: att_SUB =  0b00000011;break;
               case 4: att_SUB =  0b00000100;break;
               case 5: att_SUB =  0b00000101;break;
               case 6: att_SUB =  0b00000110;break;
               case 7: att_SUB =  0b00000111;break;
               case 8: att_SUB =  0b00001000;break;
               case 9: att_SUB =  0b00001001;break;
               case 10: att_SUB = 0b00001010;break;
               case 11: att_SUB = 0b00001011;break;
               case 12: att_SUB = 0b00001100;break;
               case 13: att_SUB = 0b00001101;break;
               case 14: att_SUB = 0b00001110;break;
               case 15: att_SUB = 0b00001111;break;

               case -1: att_SUB =  0b00010001;break;
               case -2: att_SUB =  0b00010010;break;
               case -3: att_SUB =  0b00010011;break;
               case -4: att_SUB =  0b00010100;break;
               case -5: att_SUB =  0b00010101;break;
               case -6: att_SUB =  0b00010110;break;
               case -7: att_SUB =  0b00010111;break;
               case -8: att_SUB =  0b00100000;break;
               case -9: att_SUB =  0b00100001;break;
               case -10: att_SUB = 0b00100010;break;
               case -11: att_SUB = 0b00100011;break;
               case -12: att_SUB = 0b00100100;break;
               case -13: att_SUB = 0b00100101;break;
               case -14: att_SUB = 0b00100110;break;
               case -15: att_SUB = 0b00100111;break;
  }    
           writeWire(ATT_SUB, att_SUB);    
  }

void PT2348::setSecond_in(int in_sec_sel, int in_sec_gain, int main_second){
           switch(in_sec_sel){
               case 0: in_sec_sel = 0b00000000;break;
               case 1: in_sec_sel = 0b00000001;break;
               case 2: in_sec_sel = 0b00000010;break;
               case 3: in_sec_sel = 0b00000011;break;
               case 4: in_sec_sel = 0b00000100;break;
               case 5: in_sec_sel = 0b00000101;break;
   }
           switch(in_sec_gain){
               case 0: in_sec_gain =  0b00000000;break;
               case 1: in_sec_gain =  0b00001000;break;
               case 2: in_sec_gain =  0b00010000;break;
               case 3: in_sec_gain =  0b00011000;break;
               case 4: in_sec_gain =  0b00100000;break;
               case 5: in_sec_gain =  0b00101000;break;
               case 6: in_sec_gain =  0b00110000;break;
               case 7: in_sec_gain =  0b00111000;break;
               case 8: in_sec_gain =  0b01000000;break;
               case 9: in_sec_gain =  0b01001000;break;
               case 10: in_sec_gain = 0b01010000;break;
               case 11: in_sec_gain = 0b01011000;break;
               case 12: in_sec_gain = 0b01100000;break;
               case 13: in_sec_gain = 0b01101000;break;
               case 14: in_sec_gain = 0b01110000;break;
               case 15: in_sec_gain = 0b01111000;break;
   }
           switch(main_second){
               case 0: main_second = 0b00000000;break;
               case 1: main_second = 0b10000000;break;
   }
        
           writeWire(SECOND_IN, in_sec_sel+in_sec_gain+main_second); 
   }

void PT2348::writeWire(char a, char b){
  Wire.beginTransmission(PT2348_address);
  Wire.write (a);
  Wire.write (b);
  Wire.endTransmission();
}
