#ifndef BOTON_H
#define BOTON_H

#include <QObject>
#include <QIcon>

class Boton : public QObject
{ private:
    QString nombre;
    QString aplicacionRuta;
    QIcon icono;
    QString audio;
    QString descripcion;
    QString lenguaje;

    Q_OBJECT
public:
    explicit Boton(QObject *parent = 0);

    QString getNombre() const;
    void setNombre(const QString &value);

    QString getAplicacionRuta() const;
    void setAplicacionRuta(const QString &value);

    QIcon getIcono() const;
    void setIcono(const QIcon &value);

    QString getAudio() const;
    void setAudio(const QString &value);

    QString getDescripcion() const;
    void setDescripcion(const QString &value);

    QString getLenguaje() const;
    void setLenguaje(const QString &value);

signals:

public slots:
};

#endif // BOTON_H
