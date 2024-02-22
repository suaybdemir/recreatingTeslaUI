#include "system.h"

System::System(QObject *parent)
    : QObject{parent}
    ,m_CarLocked(true)
    ,m_OutdoorTemp(64)
    ,m_UserName("User Name")
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

QString System::UserName() const
{
    return m_UserName;
}

void System::setUserName(const QString &newUserName)
{
    if (m_UserName == newUserName)
        return;
    m_UserName = newUserName;
    emit UserNameChanged();
}
