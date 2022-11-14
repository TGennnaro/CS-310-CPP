#include <iostream>
using namespace std;

class TV {
    private:
        int channel;
        int volumeLevel;
        bool on;
    public:
        TV() {
            channel = 1;
            volumeLevel = 1;
            on = false;
        }

        void turnOn() {
            on = true;
        }

        void turnOff() {
            on = false;
        }

        void setChannel(int newChannel) {
            if (!on) return;
            if (newChannel >= 1 && newChannel < 120) {
                channel = newChannel;
            }
        }

        void setVolume(int newVolumeLevel) {
            if (!on) return;
            if (newVolumeLevel >= 1 && newVolumeLevel <= 7) {
                volumeLevel = newVolumeLevel;
            }
        }

        void channelUp() {
            setChannel(channel+1);
        }

        void channelDown() {
            setChannel(channel-1);
        }

        void volumeUp() {
            setVolume(volumeLevel+1);
        }

        void volumeDown() {
            setVolume(volumeLevel-1);
        }

        int currentChannel() {
            return channel;
        }

        int currentVolume() {
            return volumeLevel;
        }

        bool isOn() {
            return on;
        }
};

int main() {
    TV t1;
    t1.turnOn();
    t1.setChannel(50);
    t1.setVolume(5);
    t1.turnOff();
    t1.channelUp();
    t1.volumeUp();
    cout << "Is on? " << t1.isOn() << endl;
    cout << "Channel: " << t1.currentChannel() << endl;
    cout << "Volume: " << t1.currentVolume() << endl;

    return 0;
}