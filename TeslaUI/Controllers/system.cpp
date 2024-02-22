#include "system.h"

System::System(QObject *parent)
    : QObject{parent}
    ,m_CarLocked(true)
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
