#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1, Rect r2){
	double l,r,b,t,m,n;

	if(r1.x < r2.x){
		l = r2.x;
	}else{
		l = r1.x;
	}

	if(r1.x + r1.w < r2.x + r2.w){
		r = r1.x + r1.w;
	}else{
		r = r2.x + r2.w;
	}

	if(r1.y < r2.y){
		t = r1.y;
	}else{
		t = r2.y;
	}

	if(r1.y - r1.h < r2.y - r2.h){
		b = r2.y - r2.h;
	}else{
		b = r1.y - r1.h;
	}

	m = r - l ;
	n = t - b;

	if(m <= 0 || n <=0){
		return 0;
	}

	return m*n;

}


