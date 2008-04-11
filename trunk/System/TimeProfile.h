//---------------------------------------------------------------------------//
// Neon v2.5
// Copyright (C) 2006,2008 Jordi Ros <shine.3p@gmail.com>
// www.neonv2.com / www.xplsv.com
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program called license.txt
// If not, see <http://www.gnu.org/licenses/>
//
//---------------------------------------------------------------------------//

#ifndef _TIMEPROFILER_H
#define _TIMEPROFILER_H

#include "Base.h"
#include "Timer.h"

class CTimeProfile
{
public:
    void  Begin();
    void  End  ();

    float Last()
    {
      return m_Time;
    }
    float Average()
    {
      return m_Average;
    }
private:
    float          m_Time;
    float          m_Average;
    vector<float>  m_Times;
    CTimer         m_Timer;
}; 

#endif
