#include "libs/Field.h"
#include "test/FieldTest.h"

int main() {
    int errors = 0;

    // Teste Field-Klasse
    Field field;
    FieldTest fieldTest(field);
    int errors_field = 0;
    errors_field += fieldTest.test();
    errors += errors_field;

    return errors;
}