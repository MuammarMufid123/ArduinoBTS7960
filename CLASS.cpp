#include "CLASS.h"

BTS7960::BTS7960(byte R_IS_kanan, byte R_EN_kanan, byte R_PWM_kanan,
        byte L_IS_kanan, byte  L_EN_kanan, byte L_PWM_kanan,
        byte R_IS_kiri, byte R_EN_kiri, byte R_PWM_kiri,
        byte L_IS_kiri, byte  L_EN_kiri, byte L_PWM_kiri,
        byte R_IS_belakang, byte R_EN_belakang, byte R_PWM_belakang,
        byte L_IS_belakang, byte  L_EN_belakang, byte L_PWM_belakang)

{
  pinMode(R_IS_kanan, OUTPUT);
  pinMode(R_EN_kanan, OUTPUT);
  pinMode(R_PWM_kanan, OUTPUT);
  pinMode(L_IS_kanan, OUTPUT);
  pinMode(L_EN_kanan, OUTPUT);
  pinMode(L_PWM_kanan, OUTPUT);
  pinMode(R_IS_kiri, OUTPUT);
  pinMode(R_EN_kiri, OUTPUT);
  pinMode(R_PWM_kiri, OUTPUT);
  pinMode(L_IS_kiri, OUTPUT);
  pinMode(L_EN_kiri, OUTPUT);
  pinMode(L_PWM_kiri, OUTPUT);
  pinMode(R_IS_belakang, OUTPUT);
  pinMode(R_EN_belakang, OUTPUT);
  pinMode(R_PWM_belakang, OUTPUT);
  pinMode(L_IS_belakang, OUTPUT);
  pinMode(L_EN_belakang, OUTPUT);
  pinMode(L_PWM_belakang, OUTPUT);

  digitalWrite(R_IS_kanan, LOW);
  digitalWrite(L_IS_kanan, LOW);
  digitalWrite(R_EN_kanan, HIGH);
  digitalWrite(L_EN_kanan, HIGH);
  digitalWrite(R_IS_kiri, LOW);
  digitalWrite(L_IS_kiri, LOW);
  digitalWrite(R_EN_kiri, HIGH);
  digitalWrite(L_EN_kiri, HIGH);
  digitalWrite(R_IS_belakang, LOW);
  digitalWrite(L_IS_belakang, LOW);
  digitalWrite(R_EN_belakang, HIGH);
  digitalWrite(L_EN_belakang, HIGH);
  
  BTS7960::R_IS_kanan = R_IS_kanan;
  BTS7960::R_EN_kanan = R_EN_kanan;
  BTS7960::R_PWM_kanan = R_PWM_kanan;
  BTS7960::L_IS_kanan = L_IS_kanan;
  BTS7960::L_EN_kanan = L_EN_kanan;
  BTS7960::L_PWM_kanan = L_PWM_kanan;
  BTS7960::R_IS_kiri = R_IS_kiri;
  BTS7960::R_EN_kiri = R_EN_kiri;
  BTS7960::R_PWM_kiri = R_PWM_kiri;
  BTS7960::L_IS_kiri = L_IS_kiri;
  BTS7960::L_EN_kiri = L_EN_kiri;
  BTS7960::L_PWM_kiri = L_PWM_kiri;
  BTS7960::R_IS_belakang = R_IS_belakang;
  BTS7960::R_EN_belakang = R_EN_belakang;
  BTS7960::R_PWM_belakang = R_PWM_belakang;
  BTS7960::L_IS_belakang = L_IS_belakang;
  BTS7960::L_EN_belakang = L_EN_belakang;
  BTS7960::L_PWM_belakang = L_PWM_belakang;
}


void BTS7960::clockwise(unsigned long lama)
{
   analogWrite(R_PWM_kanan, 100.0);
   analogWrite(L_PWM_kanan, 0);
   analogWrite(R_PWM_kiri, 100.0);
   analogWrite(L_PWM_kiri, 0);
   analogWrite(R_PWM_belakang, 100.0);
   analogWrite(L_PWM_belakang, 0);
   delay(lama);
}

void BTS7960::anticlockwise(unsigned long lama)
{
   analogWrite(R_PWM_kanan, 0);
   analogWrite(L_PWM_kanan, 100.0);
   analogWrite(R_PWM_kiri, 0);
   analogWrite(L_PWM_kiri, 100.0);
   analogWrite(R_PWM_belakang, 0);
   analogWrite(L_PWM_belakang, 100.0);
   delay(lama);
}

void BTS7960::maju(unsigned long lama)
{
   analogWrite(R_PWM_kanan, 0);
   analogWrite(L_PWM_kanan, 170.0);
   analogWrite(R_PWM_kiri, 135.0);
   analogWrite(L_PWM_kiri, 0);
   analogWrite(R_PWM_belakang, 0);
   analogWrite(L_PWM_belakang, 0);
   delay(lama);
}

void BTS7960::mundur(unsigned long lama)
{
   analogWrite(R_PWM_kanan, 150.0);
   analogWrite(L_PWM_kanan, 0);
   analogWrite(R_PWM_kiri, 0);
   analogWrite(L_PWM_kiri, 150.0);
   analogWrite(R_PWM_belakang, 0);
   analogWrite(L_PWM_belakang, 0);
   delay(lama);
   stop(0);
}

void BTS7960::serong_kiri_atas(unsigned long lama)
{
   analogWrite(R_PWM_kanan, 0);
   analogWrite(L_PWM_kanan, 150.0);
   analogWrite(R_PWM_kiri, 0);
   analogWrite(L_PWM_kiri, 0);
   analogWrite(R_PWM_belakang, 150.0);
   analogWrite(L_PWM_belakang, 0);
   delay(lama);
   stop(0);
}

void BTS7960::serong_kanan_atas(unsigned long lama)
{
   analogWrite(R_PWM_kanan, 0);
   analogWrite(L_PWM_kanan, 0);
   analogWrite(R_PWM_kiri, 130.0);
   analogWrite(L_PWM_kiri, 0);
   analogWrite(R_PWM_belakang, 0);
   analogWrite(L_PWM_belakang, 130.0);
   delay(lama);
   stop(0);
}

void BTS7960::serong_kiri_bawah(unsigned long lama)
{
   analogWrite(R_PWM_kanan, 0);
   analogWrite(L_PWM_kanan, 0);
   analogWrite(R_PWM_kiri, 0);
   analogWrite(L_PWM_kiri, 130.0);
   analogWrite(R_PWM_belakang, 130.0);
   analogWrite(L_PWM_belakang, 0);
   delay(lama);
   stop(0);
}

void BTS7960::serong_kanan_bawah(unsigned long lama)
{
   analogWrite(R_PWM_kanan, 150.0);
   analogWrite(L_PWM_kanan, 0);
   analogWrite(R_PWM_kiri, 0);
   analogWrite(L_PWM_kiri, 0);
   analogWrite(R_PWM_belakang, 0);
   analogWrite(L_PWM_belakang, 150.0);
   delay(lama);
   stop(0);
}

void BTS7960::stop(unsigned long lama)
{
   analogWrite(R_PWM_kanan, 0);
   analogWrite(L_PWM_kanan, 0);
   analogWrite(R_PWM_kiri, 0);
   analogWrite(L_PWM_kiri, 0);
   analogWrite(R_PWM_belakang, 0);
   analogWrite(L_PWM_belakang, 0);
   delay(lama);
}

void BTS7960::belokkiri(unsigned long lama)
{
   analogWrite(R_PWM_kanan, 0);
   analogWrite(L_PWM_kanan, 90);
   analogWrite(R_PWM_kiri, 0);
   analogWrite(L_PWM_kiri, 90);
   analogWrite(R_PWM_belakang, 200);
   analogWrite(L_PWM_belakang, 0);
   delay(lama);
   stop(0);
}

void BTS7960::belokkanan(unsigned long lama)
{
   analogWrite(R_PWM_kanan, 90);
   analogWrite(L_PWM_kanan, 0);
   analogWrite(R_PWM_kiri, 95);
   analogWrite(L_PWM_kiri, 0);
   analogWrite(R_PWM_belakang, 0);
   analogWrite(L_PWM_belakang, 200);
   delay(lama);
   stop(0);
}

