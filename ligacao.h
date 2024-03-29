#ifndef LIGACAO_H
#define LIGACAO_H

static const int VELOCIDADE = 500;

// USER INCLUDES BEGIN

#include "date.h"

// USER INCLUDES END

class Ligacao : public Date
{
private:
    Date _data;
    double _duracao;
public:
    Ligacao(double dur, Date d) : _duracao(dur), _data(d) {};

    unsigned int get_dia() { return _data._dia; }
    unsigned int get_mes() { return _data._mes; }
    double get_duracao() { return _duracao; }
    double get_custo() { return _custo; }
};

#endif // LIGACAO_H
