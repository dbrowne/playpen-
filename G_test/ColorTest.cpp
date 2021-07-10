//
// Created by djb on 7/9/21.
//
#include "gtest/gtest.h"
#include "Color.h"


#include<iostream>
using namespace std;

class ColorConverterFixture : public ::testing::Test{
 protected:
  Color * color;

  virtual void SetUp(){
    color = new Color();
  }

  virtual void TearDown(){
    delete color;
  }
};

TEST_F(ColorConverterFixture, FirstTest){
  float *colors = color->GetColors();
  EXPECT_EQ(colors[0],0.5);
  EXPECT_EQ(colors[1],0.5);
  EXPECT_EQ(colors[2],0.5);
  EXPECT_EQ(colors[3],0.5);
  delete colors;
}

class ColorConverterFixtureOne : public ::testing::Test{
 protected:
  Color * color;

  virtual void SetUp(){
    color = new Color(1.0, 2.0, 3.0, 4.0);
  }
  virtual void TearDown(){
    delete color;
  }
};

TEST_F(ColorConverterFixtureOne, SecondTest){
  float *colors = color->GetColors();
  EXPECT_EQ(colors[0],1.0);
  EXPECT_EQ(colors[1],2.0);
  EXPECT_EQ(colors[2],3.0);
  EXPECT_EQ(colors[3],4.0);
  delete colors;

  color->SetRed(1.5);
  EXPECT_EQ(color->GetRed(),1.5);
  color->SetBlue(8.5);
  EXPECT_EQ(color->GetBlue(),8.5);
  color->SetGreen(6.5);
  EXPECT_EQ(color->GetGreen(),6.5);
  color->SetAlpha(3.5);
  EXPECT_EQ(color->GetAlpha(),3.5);

}


class ColorConverterFixtureTwo : public ::testing::Test{
 protected:
  Color * color;

  virtual void SetUp(){
    color = new Color(2.5, 4.5, 30.0);
  }
  virtual void TearDown(){
    delete color;
  }
};


TEST_F(ColorConverterFixtureTwo, ThirdTest){
  float *colors = color->GetColors();
  EXPECT_EQ(colors[0],2.5);
  EXPECT_EQ(colors[1],4.5);
  EXPECT_EQ(colors[2],30.0);
  EXPECT_EQ(colors[3],1.0);
  delete colors;

  color->SetRed(1.5);
  EXPECT_EQ(color->GetRed(),1.5);
  color->SetBlue(8.5);
  EXPECT_EQ(color->GetBlue(),8.5);
  color->SetGreen(6.5);
  EXPECT_EQ(color->GetGreen(),6.5);
  color->SetAlpha(3.5);
  EXPECT_EQ(color->GetAlpha(),3.5);

}


class ColorConverterFixtureThree : public ::testing::Test{
 protected:
  Color * color;

  virtual void SetUp(){
    color = new Color(5, 55, 31.0,-5.0);
  }
  virtual void TearDown(){
    delete color;
  }
};


TEST_F(ColorConverterFixtureThree, ThirdTest){

  color->SetColor(1.5,3.0,6.0);
  float *colors = color->GetColors();
  EXPECT_EQ(colors[0],1.5);
  EXPECT_EQ(colors[1],3.0);
  EXPECT_EQ(colors[2],6.0);
  EXPECT_EQ(colors[3],-5.0);
  delete colors;
  color->SetColor(5.5,3.5,8.0,12.0);
  colors = color->GetColors();

  EXPECT_EQ(colors[0],5.5);
  EXPECT_EQ(colors[1],3.5);
  EXPECT_EQ(colors[2],8.0);
  EXPECT_EQ(colors[3],12.0);
  delete colors;

  Color *cc = new Color(5.5,3.5,8.0,12.0);

  EXPECT_TRUE(*cc==*color);

}