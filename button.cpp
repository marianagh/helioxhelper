#include "boton.h"
#include <QIcon>

QString Boton::getNombre() const
{
    return nombre;
}

void Boton::setNombre(const QString &value)
{
    nombre = value;
}

QString Boton::getAplicacionRuta() const
{
    return aplicacionRuta;
}

void Boton::setAplicacionRuta(const QString &value)
{
    aplicacionRuta = value;
}

QIcon Boton::getIcono() const
{
    return icono;
}

void Boton::setIcono(const QIcon &value)
{
    icono = value;
}

QString Boton::getAudio() const
{
    return audio;
}

void Boton::setAudio(const QString &value)
{
    audio = value;
}

QString Boton::getDescripcion() const
{
    return descripcion;
}

void Boton::setDescripcion(const QString &value)
{
    descripcion = value;
}

QString Boton::getLenguaje() const
{
    return lenguaje;
}

void Boton::setLenguaje(const QString &value)
{
    lenguaje = value;
}

Boton::Boton(QObject *parent) : QObject(parent)
{

}
