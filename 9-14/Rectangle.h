#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
    private:
        int width;
        int length;

    public:

        //Rectangle constructor
        Rectangle(int w, int l);

        int getArea();
};

#endif