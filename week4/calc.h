// clac.h
#pragma once
#ifndef M_PI//아직 정의 하지 않았으면 
#define M_PI 3.14159265358979323846 //정의하기
#endif

#ifndef MATH_FUNC_H
#define MATH_FUNC_H



//함수 원형 선언하기
double sum(double, double);
double sub(double, double);
double mul(double, double);
double div(double, double);
int rem(int, int);

// 추가함수
double power(double base, double exponent);
double squareRoot(double num);
double areaOfCircle(double radius);
double circumferenceOfCircle(double radius);


#endif