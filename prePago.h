#ifndef PRE_PAGO_H
#define PRE_PAGO_H

// USER INCLUDES BEGIN
#include "plano.h"
#include <iostream>
#include "date.h"
// USER INCLUDES END

class PrePago : public Plano
{
private:
    double _credito = 0;
    Date _vencimento;
public:
    PrePago(unsigned int d, unsigned int m, unsigned int y) { _vencimento._day = d, _vencimento._month = m, _vencimento._year = y; };
    ~PrePago() {};

    double get_credito() { return this->_credito; }
    unsigned int get_dia_vencimento() { return _vencimento._day; }
    unsigned int get_mes_vencimento() { return _vencimento._month; }

    void ColocarCreditos(double valor) { this->_credito += valor; }

};

#endif // PRE_PAGO_H
