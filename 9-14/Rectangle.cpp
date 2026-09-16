#include <iostream>
#include "Rectangle.h"

using namespace std;

    int Rectangle::getArea(){
        return width * length;
    }

    Rectangle::Rectangle(int w, int l){
        if(w < 0 || l < 0){
            cout << "Invalid with or length! setting width and length to 1" << endl;
            w = 1;
            l = 1;
        }

        width = w;
        length = l;
    }