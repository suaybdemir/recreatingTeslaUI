#include "system.h"
#include <QDateTime>

System::System(QObject *parent)
    : QObject{parent}
    ,m_CarLocked(true)
    ,m_OutdoorTemp(64)
    ,m_UserName("User Name")
{

    m_CurrentTimeTimer = new QTimer(this);
    m_CurrentTimeTimer->setInterval(500);
    m_CurrentTimeTimer->setSingleShot(true);
    connect(m_CurrentTimeTimer, &QTimer::timeout,this,&System::CurrentTimeTimerTimeout);

    CurrentTimeTimerTimeout();
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

QString System::CurrentTime() const
{
    return m_CurrentTime;
}

void System::setCurrentTime(const QString &newCurrentTime)
{
    if (m_CurrentTime == newCurrentTime)
        return;
    m_CurrentTime = newCurrentTime;
    emit CurrentTimeChanged();
}


void System::CurrentTimeTimerTimeout()
{
    QDateTime dateTime;
    QString CurrentTime= dateTime.toString("h:m ap");

    setCurrentTime(CurrentTime);

    m_CurrentTimeTimer->start();
}
