//
// Created by djb on 7/9/21.
//

#ifndef PLAYPEN_PLUS_MISC_COLOR_H_
#define PLAYPEN_PLUS_MISC_COLOR_H_

class Color {
 private:
  float r;
  float g;
  float b;
  float a;

 public:
  Color();
  ~Color();
  Color(float red, float green,  float blue);
  Color(float red, float green, float blue, float alpha);

  void SetColor(float red, float green, float blue);
  void SetColor(float red, float green, float blue, float alpha);
  void SetRed(float red);
  void SetBlue(float blue);
  void SetGreen(float green);
  void SetAlpha(float alpha);

  float GetRed(void);
  float GetGreen(void);
  float GetBlue(void);
  float GetAlpha(void);
  float *GetColors(void);

  bool operator==(const Color &rhs) const;

};

#endif //PLAYPEN_PLUS_MISC_COLOR_H_
