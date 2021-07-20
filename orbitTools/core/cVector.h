//
// cVector.h
//
// Copyright 2003-2020 (c) Michael F. Henry
// Version 08/2020
//
#pragma once

namespace Zeptomoby 
{
namespace OrbitTools
{

class cVector  
{
public:
   cVector(double x = 0.0, double y = 0.0, double z = 0.0, double w = 0.0)
      : m_x(x), m_y(y), m_z(z), m_w(w) 
   {
   }

   virtual ~cVector() {};

   void Sub(const cVector&);     // subtraction
   void Scale(double factor);    // scale vector by 'factor'

   double Angle(const cVector&) const;    // angle between two vectors
   double Magnitude() const;              // vector magnitude
   double Dot(const cVector& vec) const;  // dot product

   double m_x;
   double m_y;
   double m_z;
   double m_w;
};

}
}