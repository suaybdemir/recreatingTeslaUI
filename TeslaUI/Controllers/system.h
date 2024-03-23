#ifndef SYSTEM_H
#define SYSTEM_H

#include <QObject>
#include <QProperty>
#include <QTimer>

class System : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool CarLocked READ CarLocked WRITE setCarLocked NOTIFY CarLockedChanged FINAL)
    Q_PROPERTY(int OutdoorTemp READ OutdoorTemp WRITE setOutdoorTemp NOTIFY OutdoorTempChanged FINAL)
    Q_PROPERTY(QString UserName READ UserName WRITE setUserName NOTIFY UserNameChanged FINAL)
    Q_PROPERTY(QString CurrentTime READ CurrentTime WRITE setCurrentTime NOTIFY CurrentTimeChanged FINAL)
public:
    explicit System(QObject *parent = nullptr);

    bool CarLocked() const;
    void setCarLocked(bool newCarLocked);

    int OutdoorTemp() const;
    void setOutdoorTemp(int newOutdoorTemp);

    QString UserName() const;
    void setUserName(const QString &newUserName);

    QString CurrentTime() const;
    void setCurrentTime(const QString &newCurrentTime);

public slots:
    void CurrentTimeTimerTimeout();

signals:
    void CarLockedChanged();
    void OutdoorTempChanged();

    void UserNameChanged();

    void CurrentTimeChanged();

private:
    bool m_CarLocked;
    int m_OutdoorTemp;
    QString m_UserName;
    QString m_CurrentTime;
    QTimer * m_CurrentTimeTimer;

};

#endif // SYSTEM_H
