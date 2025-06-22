#ifndef CLASS_H
#define CLASS_H

#include "Arduino.h"

class BTS7960
{
public:
    BTS7960(byte R_IS_kanan, byte R_EN_kanan, byte R_PWM_kanan,
            byte L_IS_kanan, byte L_EN_kanan, byte L_PWM_kanan,
            byte R_IS_kiri, byte R_EN_kiri, byte R_PWM_kiri,
            byte L_IS_kiri, byte L_EN_kiri, byte L_PWM_kiri,
            byte R_IS_belakang, byte R_EN_belakang, byte R_PWM_belakang,
            byte L_IS_belakang, byte L_EN_belakang, byte L_PWM_belakang);
    void clockwise(unsigned long lama);
    void anticlockwise(unsigned long lama);
    void maju(unsigned long lama);
    void mundur(unsigned long lama);
    void serong_kiri_atas(unsigned long lama);
    void serong_kanan_atas(unsigned long lama);
    void serong_kiri_bawah(unsigned long lama);
    void serong_kanan_bawah(unsigned long lama);
    void belokkiri(unsigned long lama);
    void belokkanan(unsigned long lama);
    void stop(unsigned long lama);

private:
    byte R_IS_kanan, R_EN_kanan, R_PWM_kanan,
         L_IS_kanan, L_EN_kanan, L_PWM_kanan,
         R_IS_kiri, R_EN_kiri, R_PWM_kiri,
         L_IS_kiri, L_EN_kiri, L_PWM_kiri,
         R_IS_belakang, R_EN_belakang, R_PWM_belakang,
         L_IS_belakang, L_EN_belakang, L_PWM_belakang;
};

#endif
