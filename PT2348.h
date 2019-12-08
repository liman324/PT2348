/* Alexander Liman
   liman324@yandex.ru
   rcl-radio.ru */

#ifndef PT2348_H
#define PT2348_H

#define PT2348_address 0b1000100

#define MAIN_IN        0x00
#define LOUN_SUB       0x01
#define VOLUME         0x02
#define BASS_MIX       0x03
#define TREBLE         0x04
#define MIX_LEVEL      0x05
#define ATT_LF         0x06
#define ATT_RF         0x07
#define ATT_LR         0x08
#define ATT_RR         0x09
#define ATT_SUB        0x10
#define SECOND_IN      0x11

#include <Arduino.h>
class PT2348
{
  public:
    PT2348();
   void setMain_in(int in_sel, int in_gain); 
                 /* Input Selector - in_sel
                    int 0 === QD/SE : QD
                    int 1 === SE IN1
                    int 2 === SE IN2
                    int 3 === SE IN3
                    int 4 === QD/SE : SE IN4
                    int 5 === Mute  
                    Input Gain - in_gain
                    int 0...15 === 0...+15 dB */
   void setLoun_sub(int loud, int loun_off, int sub_f);
                 /* Loudness - loun, loun_off
                    int 0...15 === 0...-15 dB
                    int 0...1 === on...off
                    Subwoofer Cut-off Frequency - sub_f
                    int 0...2 === 80 120 160 Hz */
   void setVol(int vol); // Volume int +15...-80 === +15...-80 dB
   void setBass_mix(int bass, int mix_off, int mix_LF, int mix_RF);
                 /* BASS - bass
                    int -15...15 === -15...+15 dB
                    MIXING 
                    mixing enable int 0...1 === on...off
                    mixing to LF  int 0...1 === on...off
                    mixing to RF  int 0...1 === on...off */
   void setTreble(int treb);// TREBLE int -15...+15 === -15...+15 dB
   void setAtt_mix(int att_mix);//MIXING LEVEL int -15...+15 === -15...+15 dB
   void setAtt_LF(int att_LF);// SPEAKER ATTENUATOR LEFT FRONT int -15...+15 === -15...+15 dB
   void setAtt_RF(int att_RF);// SPEAKER ATTENUATOR RIGHT FRONT int -15...+15 === -15...+15 dB
   void setAtt_LR(int att_LR);// SPEAKER ATTENUATOR LEFT REAR  int -15...+15 === -15...+15 dB
   void setAtt_RR(int att_RR);// SPEAKER ATTENUATOR RIGHT REAR  int -15...+15 === -15...+15 dB
   void setAtt_SUB(int att_SUB);// SPEAKER ATTENUATOR SUBWOOFER  int -15...+15 === -15...+15 dB
   void setSecond_in(int in_sec_sel, int in_sec_gain, int main_second);
                /* Second Input Selector 
                    int 0 === QD/SE : QD
                    int 1 === SE IN1
                    int 2 === SE IN2
                    int 3 === SE IN3
                    int 4 === QD/SE : SE IN4
                    int 5 === Mute  
                    Input Gain - in_gain
                    int 0...15 === 0...+15 dB 
                    Rear Speaker Source 
                    int 0...1 === main source...second source */

  private:
    void writeWire(char a, char b);
};
    
#endif //PT2348_H
