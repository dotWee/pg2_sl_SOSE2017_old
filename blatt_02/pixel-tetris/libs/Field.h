//
// Created by Lukas Wolfsteiner on 11.04.17.
//

#ifndef PG2_SL_SOSE2017_FIELD_H
#define PG2_SL_SOSE2017_FIELD_H


#include <cstdlib>
#include "Stone.h"

class Field {

private:
    char buffer[22][12];
    Stone *currStone;
    Stone *nextStone;

    XyPair pos;
    XyPair size;

public:
    Field();

    int pos_x();

    int pos_y();

    int size_x();

    int size_y();

    char getBuffer(XyPair coord);
};


#endif //PG2_SL_SOSE2017_FIELD_H
