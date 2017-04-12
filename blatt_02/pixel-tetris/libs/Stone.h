//
// Created by Lukas Wolfsteiner on 11.04.17.
//

#ifndef PG2_SL_SOSE2017_STONE_H
#define PG2_SL_SOSE2017_STONE_H


#include "XyPair.h"

class Stone {

private:
    char buffer[4][4];
    XyPair pos;
    XyPair size;

public:
    Stone();

    int pos_x();

    int pos_y();

    int size_x();

    int size_y();

    char getBuffer(XyPair coord);
};


#endif //PG2_SL_SOSE2017_STONE_H
