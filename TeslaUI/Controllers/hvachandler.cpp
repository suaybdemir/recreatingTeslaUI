#include "hvachandler.h"

HVACHandler::HVACHandler(QObject *parent)
    : QObject{parent}
    , m_TargetTemperature(70)
{


}

int HVACHandler::TargetTemperature() const
{
    return m_TargetTemperature;
}

void HVACHandler::incrementTargetTemperature(const int &val)
{
    int newTargetTemp = m_TargetTemperature + val;
    setTargetTemperature(newTargetTemp);
}

void HVACHandler::setTargetTemperature(int newTargetTemperature)
{
    if (m_TargetTemperature == newTargetTemperature)
        return;
    m_TargetTemperature = newTargetTemperature;
    emit TargetTemperatureChanged();
}
