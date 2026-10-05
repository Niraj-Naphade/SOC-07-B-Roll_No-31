{\rtf1\ansi\ansicpg1252\cocoartf2870
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww17860\viewh15940\viewkind0
\pard\tx720\tx741\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5649\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <iostream>\
using namespace std;\
int main() \{\
	int a = 10, b = 20;\
	int num = ++a - b;\
	int val = a++ - b;\
\
	cout << \'93Num =\'94 << num << \'93\\n\'94;\
	cout << \'93Val =\'94 << val << \'93\\n\'94;\
\
	return 0;\
\}}