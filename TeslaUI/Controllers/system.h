#ifndef SYSTEM_H
#define SYSTEM_H

#include <QObject>

class System : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool CarLocked READ CarLocked WRITE setCarLocked NOTIFY CarLockedChanged FINAL)
public:
    explicit System(QObject *parent = nullptr);

    bool CarLocked() const;
    void setCarLocked(bool newCarLocked);

signals:
    void CarLockedChanged();
private:
    bool m_CarLocked;
};

#endif // SYSTEM_H
