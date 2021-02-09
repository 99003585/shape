/**
 * @file shape.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-02-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<iostream>
#include<cmath>
#include"circle.h"
#include"polygon.h"
#include"triangle.h"
#include"rectangle.h"
#include"shape.h"
using namespace std;

/**
 * @brief Constructed Polygon::Polygon object
 * 
 * @param no of sides 
 */
Polygon::Polygon(int n):m_sides{n}{}
/**
 * @brief Constructed Rectangle::Rectangle object
 * 
 * @param length 
 * @param breadth 
 */
Rectangle::Rectangle(int l,int b):Polygon(4),m_length{l},m_breadth{b}{}
/**
 * @brief Constructed Triangle::Triangle object
 * 
 * @param x -side1
 * @param y -side2
 * @param z -side3
 */
Triangle::Triangle(int x,int y,int z):Polygon(3),m_a{x},m_b{y},m_c{z}{}
/**
 * @brief Constructed Circle::Circle object
 * 
 * @param r -radius
 */
Circle::Circle(double r):r_radius{r}{}


/**
 * @brief Area of rectagle
 * 
 * @return double 
 */
double Rectangle::area(){
    cout<<"Area="<<m_length*m_breadth<<endl;
    return m_length*m_breadth;}

/**
 * @brief Circumference of rectangle
 * 
 * @return double 
 */
double Rectangle::circumference(){
    cout<<"Circumference="<<2*(m_length+m_breadth)<<endl;
    return 2*(m_length+m_breadth);}

/**
 * @brief area of triagle
 * 
 * @return double 
 */
double Triangle::area(){
    int p=(m_a+m_b+m_c)/2;
    cout<<"Area="<<sqrt(p*(p-m_a)*(p-m_b)*(p-m_c))<<endl;
    return sqrt(p*(p-m_a)*(p-m_b)*(p-m_c));}

/**
 * @brief circumference of triangl
 * 
 * @return double 
 */
double Triangle::circumference(){
    cout<<"Circumference="<<m_a+m_b+m_c<<endl;
    return m_a+m_b+m_c;}

/**
 * @brief area of circle
 * 
 * @return double 
 */
double Circle::area(){
    cout<<"Area="<<PI*r_radius*r_radius<<endl;
    return PI*r_radius*r_radius;}
/**
 * @brief circumference of circle
 * 
 * @return double 
 */
double Circle::circumference(){
    cout<<"Circumference="<<2*PI*r_radius<<endl;
    return 2*PI*r_radius;}