#ifndef HVACHANDLER_H
#define HVACHANDLER_H

#include <QObject>

class HVACHandler : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int TargetTemperature READ TargetTemperature WRITE setTargetTemperature NOTIFY TargetTemperatureChanged FINAL)
public:
    explicit HVACHandler(QObject *parent = nullptr);

    int TargetTemperature() const;

    Q_INVOKABLE void incrementTargetTemperature(const int &val);


public slots:
    void setTargetTemperature(int newTargetTemperature);


signals:

    void TargetTemperatureChanged();

private:

    int m_TargetTemperature;
};

#endif // HVACHANDLER_H
