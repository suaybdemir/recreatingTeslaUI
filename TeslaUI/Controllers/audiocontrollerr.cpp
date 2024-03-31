#include "audiocontrollerr.h"

AudioControllerr::AudioControllerr(QObject *parent)
    : QObject{parent}
    , m_volumeLevel(51)
{

}

int AudioControllerr::volumeLevel() const
{
    return m_volumeLevel;
}

void AudioControllerr::incrementVolume(const int &val)
{
    int newVolume = m_volumeLevel + val;

    if(newVolume <= 0) newVolume = 0;
    if(newVolume>= 100) newVolume = 100;

    setVolumeLevel(newVolume);;
}

void AudioControllerr::setVolumeLevel(int newVolumeLevel)
{
    if (m_volumeLevel == newVolumeLevel)
        return;
    m_volumeLevel = newVolumeLevel;
    emit volumeLevelChanged();
}
