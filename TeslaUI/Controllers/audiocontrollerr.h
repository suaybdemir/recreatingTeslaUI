#ifndef AUDIOCONTROLLERR_H
#define AUDIOCONTROLLERR_H

#include <QObject>

class AudioControllerr : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int volumeLevel READ volumeLevel WRITE setVolumeLevel NOTIFY volumeLevelChanged FINAL)
public:
    explicit AudioControllerr(QObject *parent = nullptr);

    Q_INVOKABLE void incrementVolume(const int &val);

    int volumeLevel() const;

public slots:
    void setVolumeLevel(int newVolumeLevel);

signals:
    void volumeLevelChanged();

private:
    int m_volumeLevel;
};

#endif // AUDIOCONTROLLERR_H
