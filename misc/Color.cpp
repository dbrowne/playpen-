//
// Created by djb on 7/9/21.
//

#include "Color.h"

#include <iostream>
using namespace std;

Color::Color(){
  r = .5;
  g = .5;
  b = .5;
  a = .5;
}

Color::Color(float red, float green, float blue) {
  r = red;
  g = green;
  b = blue;
  a = 1.0;
}

Color::Color(float red, float green, float blue, float alpha) {
  r = red;
  g = green;
  b = blue;
  a = alpha;
}



Color::~Color() = default;


float * Color::GetColors() {
  float *colors = new float[4];
  colors[0] = r;
  colors[1] = g;
  colors[2] = b;
  colors[3] = a;

  return colors;
}

void Color::SetColor(float red, float green, float blue) {
  this->r = red;
  this->g = green;
  this->b = blue;
}

void Color::SetColor(float red, float green, float blue, float alpha) {
  this->r = red;
  this->g = green;
  this->b = blue;
  this->a = alpha;
}

void Color::SetRed(float red) {
  this->r = red;
}

void Color::SetGreen(float green) {
  this->g = green;
}

void Color::SetBlue(float blue) {
  this->b = blue;
}

void Color::SetAlpha(float alpha) {
  this->a = alpha;
}

float Color::GetRed() {
  return r;
}

float Color::GetBlue() {
  return b;
}

float Color::GetGreen() {
  return g;
}

float Color::GetAlpha() {
  return a;
}

bool Color::operator==(const Color &rhs) const {
  return ((r == rhs.r) && (g==rhs.g) && (b==rhs.b) && (a==rhs.a));
}