#include "circle.h"
#include <cmath>
#include <iostream>

using namespace std;


        Circle::Circle(){
            radius = 0.0;
            x = 0;
            y = 0;
    }
        Circle::Circle(float rr, float xx, float yy){
            radius = rr;
            x = xx;
            y = yy;
    }

        float Circle::area(){
            return pow(radius, 2) * M_PI;
    }

        float Circle::diameter(){
            return radius * 2;
    }
        void Circle::set_radius(float rr){  //setter
            if(rr > 0){
            radius = rr;
        }  else {
            radius = 0;
      }
    }
        void Circle::set_origin(int xx, int yy){
                x == xx;
                y == yy;
        }

        float Circle::get_radius(){  //getter
            return radius;
        } 

        void Circle::imprime(){
            cout << "Radius: " << radius << " - X: " << x << " - Y: " << y << "\n";
        }