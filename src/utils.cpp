/*
Copyright 2014 João Amaral

This file is part of DPA Calc.

DPA Calc is free software: you can redistribute it and/or modify 
it under the terms of the GNU General Public License as published 
by the Free Software Foundation, either version 3 of the License, 
or (at your option) any later version.

DPA Calc is distributed in the hope that it will be useful, 
but WITHOUT ANY WARRANTY; without even the implied warranty 
of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License 
along with DPA Calc. If not, see http://www.gnu.org/licenses/.
*/

#include "dpacalc.h"
#include <sys/time.h>
#include "utils.hpp"
long timevaldiff ( struct timeval* starttime, struct timeval* finishtime )
{
	long msec;
	msec = ( finishtime->tv_sec - starttime->tv_sec ) * 1000;
	msec += ( finishtime->tv_usec - starttime->tv_usec ) / 1000;
	return msec;
}

std::string convertInt( int number )
{
   stringstream ss;//create a stringstream
   ss << number;//add number to the stream
   return ss.str();//return a string with the contents of the stream
}
