#include <Wire.h> 
#include <PT2348.h>
PT2348 pt; 

void setup(){
   Wire.begin();
   audio();
}

void loop(){}

void audio(){
   pt.setMain_in(1, 0); 
                 /* Input Selector - in_sel
                    int 0 === QD/SE : QD
                    int 1 === SE IN1
                    int 2 === SE IN2
                    int 3 === SE IN3
                    int 4 === QD/SE : SE IN4
                    int 5 === Mute  
                    Input Gain - in_gain
                    int 0...15 === 0...+15 dB */
   pt.setLoun_sub(0, 0, 0);
                 /* Loudness - loun, loun_off
                    int 0...15 === 0...-15 dB
                    int 0...1 === on...off
                    Subwoofer Cut-off Frequency - sub_f
                    int 0...2 === 80 120 160 Hz */
   pt.setVol(0); // Volume int +15...-80 === +15...-80 dB
   pt.setBass_mix(0, 1, 1, 1);
                 /* BASS - bass
                    int -15...15 === -15...+15 dB
                    MIXING 
                    mixing enable int 0...1 === on...off
                    mixing to LF  int 0...1 === on...off
                    mixing to RF  int 0...1 === on...off */
   pt.setTreble(0);// TREBLE int -15...+15 === -15...+15 dB
   pt.setAtt_mix(0);//MIXING LEVEL int -15...+15 === -15...+15 dB
   pt.setAtt_LF(0);// SPEAKER ATTENUATOR LEFT FRONT int -15...+15 === -15...+15 dB
   pt.setAtt_RF(0);// SPEAKER ATTENUATOR RIGHT FRONT int -15...+15 === -15...+15 dB
   pt.setAtt_LR(0);// SPEAKER ATTENUATOR LEFT REAR  int -15...+15 === -15...+15 dB
   pt.setAtt_RR(0);// SPEAKER ATTENUATOR RIGHT REAR  int -15...+15 === -15...+15 dB
   pt.setAtt_SUB(0);// SPEAKER ATTENUATOR SUBWOOFER  int -15...+15 === -15...+15 dB
   pt.setSecond_in(5, 0, 0);
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
  }
