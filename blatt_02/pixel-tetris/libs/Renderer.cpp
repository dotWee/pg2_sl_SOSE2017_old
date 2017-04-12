//
// Created by Lukas Wolfsteiner on 12.04.17.
//

#include "Renderer.h"

void Renderer::screenBufferAdd(Field *) {

}

void Renderer::screenBufferAdd(Stone *) {

}

void Renderer::Render() {

}

void Renderer::addObject(Field field) {
    this->field = &field;
}

void Renderer::addObject(Stone stone) {
    this->stone = &stone;
}

Renderer::Renderer() {
    field = NULL;
    stone = NULL;
}
