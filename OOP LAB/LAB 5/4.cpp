#include <iostream>
using namespace std;

class Device {
protected:
    string deviceName;
    string brand;

public:
    void setDevice(string d, string b){
        deviceName = d;
        brand = b;
    }

    void showdevice() {
        cout << "Device Name: " << deviceName << endl;
        cout << "Brand: " << brand << endl;
    }
};

class Connectivity {
protected:
    bool wifiStatus;
    bool bluetoothStatus;

public:
    void setConnectivity(bool wifi, bool bt) {
        wifiStatus = wifi;
        bluetoothStatus = bt;
    }

    void showconnectivity() {
        cout << "WiFi Status: " << (wifiStatus ? "ON" : "OFF") << endl;
        cout << "Bluetooth Status: " << (bluetoothStatus ? "ON" : "OFF") << endl;
    }
};

class SmartWatch : public Device, public Connectivity {
private:
    int heartRate;
    int stepCount;

public:
    void setSmartWatch(string d, string b, bool wifi, bool bt, int hr, int steps) {
        setDevice(d, b);             
        setConnectivity(wifi, bt);  
        heartRate = hr;
        stepCount = steps;
    }

    void showsmartwatch() {
        showdevice();              
        showconnectivity();       
        cout << "Heart Rate: " << heartRate << " bpm" << endl;
        cout << "Step Count: " << stepCount << endl;
    }
};

int main() {
    SmartWatch s;
    s.setSmartWatch("Smart Watch", "Apple", true, true, 68, 7000);
    s.showsmartwatch();
    return 0;
}