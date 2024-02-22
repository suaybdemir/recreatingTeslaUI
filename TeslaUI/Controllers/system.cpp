#include "system.h"

System::System(QObject *parent)
    : QObject{parent}
    ,m_CarLocked(true)
    ,m_OutdoorTemp(64)
{

}

bool System::CarLocked() const
{
    return m_CarLocked;
}

void System::setCarLocked(bool newCarLocked)
{
    if (m_CarLocked == newCarLocked)
        return;
    m_CarLocked = newCarLocked;
    emit CarLockedChanged();
}

int System::OutdoorTemp() const
{
    return m_OutdoorTemp;
}

void System::setOutdoorTemp(int newOutdoorTemp)
{
    if (m_OutdoorTemp == newOutdoorTemp)
        return;
    m_OutdoorTemp = newOutdoorTemp;
    emit OutdoorTempChanged();
}
