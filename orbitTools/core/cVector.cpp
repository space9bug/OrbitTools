//
// cVector.cpp
//
// Copyright (c) 2001-2020 Michael F. Henry
// Version 08/2020
//
#include "stdafx.h"

#include "cVector.h"
#include <algorithm>

namespace Zeptomoby 
{
namespace OrbitTools
{
//*****************************************************************************
// Scale the vector by 'factor'.
//*****************************************************************************
void cVector::Scale(double factor)
{
   m_x *= factor;
   m_y *= factor;
   m_z *= factor;
   m_w *= fabs(factor);
}

//*****************************************************************************
// Subtract a vector from this one.
//*****************************************************************************
void cVector::Sub(const cVector& vec)
{
   m_x -= vec.m_x;
   m_y -= vec.m_y;
   m_z -= vec.m_z;
   m_w -= vec.m_w;
}

//*****************************************************************************
// Calculate the angle between this vector and another
//*****************************************************************************
double cVector::Angle(const cVector& vec) const
{
   double ratio = Dot(vec) / (Magnitude() * vec.Magnitude());

   // Avoid rounding errors
   if (ratio > 0.0) { ratio = std::min(ratio,  1.0); }
   if (ratio < 0.0) { ratio = std::max(ratio, -1.0); }

   return acos(ratio);
}

//*****************************************************************************
// Vector magnitude
//*****************************************************************************
double cVector::Magnitude() const
{
  return sqrt((m_x * m_x) + 
              (m_y * m_y) + 
              (m_z * m_z));
}

//*****************************************************************************
// Return the dot product
//*****************************************************************************
double cVector::Dot(const cVector& vec) const
{
   return (m_x * vec.m_x) +
          (m_y * vec.m_y) +
          (m_z * vec.m_z);
}
}
}