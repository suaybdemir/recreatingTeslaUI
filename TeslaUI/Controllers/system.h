#ifndef SYSTEM_H
#define SYSTEM_H

#include <QObject>

class System : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool CarLocked READ CarLocked WRITE setCarLocked NOTIFY CarLockedChanged FINAL)
    Q_PROPERTY(int OutdoorTemp READ OutdoorTemp WRITE setOutdoorTemp NOTIFY OutdoorTempChanged FINAL)
public:
    explicit System(QObject *parent = nullptr);

    bool CarLocked() const;
    void setCarLocked(bool newCarLocked);

    int OutdoorTemp() const;
    void setOutdoorTemp(int newOutdoorTemp);

signals:
    void CarLockedChanged();
    void OutdoorTempChanged();

private:
    bool m_CarLocked;
    int m_OutdoorTemp;
};

#endif // SYSTEM_H
