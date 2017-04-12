//
// Created by Lukas Wolfsteiner on 12.04.17.
//

#ifndef PG2_SL_SOSE2017_RENDERER_H
#define PG2_SL_SOSE2017_RENDERER_H


#include "Field.h"

class Renderer {

private:
    char screen_buffer[22][12];

    Field *field;
    Stone *stone;

    void screenBufferAdd(Field *);

    void screenBufferAdd(Stone *);

public:
    void Render();

    void addObject(Field *);

    void addObject(Stone *);
};


#endif //PG2_SL_SOSE2017_RENDERER_H
