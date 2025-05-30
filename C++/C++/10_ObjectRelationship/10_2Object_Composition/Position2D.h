//
//  Position2D.h
//  C++
//
//  Created by TAEHO SIM on 3/5/25.
//

#ifndef Position2D_h
#define Position2D_h

#include "monster.h"

class Position2D{
private:
    int _x;
    int _y;
public:
    Position2D(const int& x_in, const int& y_in)
    : _x(x_in), _y(y_in) {}
    
    //TODO: = Operator 
    void set(const Position2D& pos_target)
    {
        set(pos_target._x,pos_target._y);
    }
    void set(const int& x_target, const int& y_target){
        _x = x_target;
        _y = y_target;
    }
    
    friend std::ostream& operator << (std::ostream& out, const Position2D& pos2d){
        out << pos2d._x<< " " <<pos2d._y;
        return out;
    }
    
};

#endif /* Position2D_h */
