/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 19:05:34 by sdarsie           #+#    #+#             */
/*   Updated: 2017/05/19 19:08:39 by sdarsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../fractal.h"

int filled_julia(double x1, double y1, int incr)
{
  int i;
  double x;
  double y;
  double tmp;

  i = 0;
  x = x1;
  y = y1;
  tmp = 0;
  while ((sq(x) + sq(y)) < 4 && i < 100)
    {
      tmp = ((sq(x) - sq(y)) - 0.75);
      y = (2 * x * y);
      x = tmp;
      i += incr;
    }
  return (i);
}

int mandlebrot_3(double x1, double y1, int incr)
{
  int i;
  double x;
  double y;
  double tmp;

  i = 0;
  x = x1;
  y = y1;
  tmp = 0;
  while ((sq(x) + sq(y)) < 4 && i < 100)
    {
      tmp = (cubo(x) - (3 * sq(y) * x)) + x1;
      y = ((-1) * cubo(y)) + (3 * y * sq(x)) + y1;
      x = tmp;
      i += incr;
    }
  return (i);
}

int mandlebrot_4(double x1, double y1, int incr)
{
  int i;
  double x;
  double y;
  double tmp;

  i = 0;
  x = x1;
  y = y1;
  tmp = 0;
  while ((sq(x) + sq(y)) < 4 && i < 100)
    {
      tmp = (sq(sq(x)) + sq(sq(y)) -(6 * sq(y) * sq(x))) + x1;
      y = ((-4 * cubo(y) * x) + (4 * cubo(x) * y)) + y1;
      x = tmp;
      i += incr;
    }
  return (i);
}

int mandlebrot_5(double x1, double y1, int incr) 
{
  int i;
  double x;
  double y;
  double tmp;

  i = 0;
  x = x1;
  y = y1;
  tmp = 0;
  while ((sq(x) + sq(y)) < 4 && i < 100)
    {
      tmp = ((sq(x)* cubo(x)) -
	     (10 * cubo(x) * sq(y)) + (5 * x * sq(sq(y)))) + x1;
      y = ((sq(y) * cubo(y)) -
	   (10 * sq(x) * cubo(y)) + (5 * y * sq(sq(x)))) + y1;
      x = tmp;
      i += incr;
    }
  return (i);
}

int mandlebrot_6(double x1, double y1, int incr) 
{
  int i;
  double x;
  double y;
  double tmp;

  i = 0;
  x = x1;
  y = y1;
  tmp = 0;
  while ((sq(x) + sq(y)) < 4 && i < 100)
    {
      tmp = ((cubo(x) * cubo(x)) - (cubo(y) * cubo(y)) -
	     (15 * sq(sq(x)) * sq(y)) + (15 * sq(x) * sq(sq(y)))) + x1;
      y = ((6 * sq(x) * cubo(x) * y) +
	   (6 * x * cubo(y) * sq(y)) - (20 * cubo(x) * cubo(y))) + y1;
      x = tmp;
      i += incr;
    }
  return (i);
}
