#include "Config.h"

#include <Preferences.h>
Preferences preferences;
void Config::load()
{
    preferences.begin("prefs", false);
    this->devicePassword = preferences.getString("dev-pass", "");
    this->internetConnectionType = static_cast<Config::InternetConnectionType>(preferences.getInt("inet-conn", 0));
    this->wifiSsid = preferences.getString("wifi-ssid", "");
    this->wifiPassword = preferences.getString("wifi-pass", "");
    this->registratonToken = preferences.getString("register-tok", "");
    this->apiUrl = preferences.getString("api-url", "");
    preferences.end();
}

void Config::save()
{
    preferences.begin("prefs", false);
    preferences.putString("dev-pass", Config::getDevicePassword());
    preferences.end();
}

String Config::getDevicePassword()
{
    return this->devicePassword;
}

Config::InternetConnectionType Config::getInternetConnectionType()
{
    return this->internetConnectionType;
}

String Config::getWifiSsid()
{
    return this->wifiSsid;
}

String Config::getWifiPassword()
{
    return this->wifiPassword;
}

String Config::getRegistratonToken()
{
    return this->registratonToken;
}

String Config::getApiUrl()
{
    return this->apiUrl;
}

void Config::setDevicePassword(String devicePassword)
{
    this->devicePassword = devicePassword;
}

void Config::setInternetConnectionType(Config::InternetConnectionType internetConnectionType)
{
    this->internetConnectionType = internetConnectionType;
}

void Config::setWifiSsid(String wifiSsid)
{
    this->wifiSsid = wifiSsid;
}

void Config::setWifiPassword(String wifiPassword)
{
    this->wifiPassword = wifiPassword;
}

void Config::setRegistratonToken(String registratonToken)
{
    this->registratonToken = registratonToken;
}

void Config::setApiUrl(String apiUrl)
{
    this->apiUrl = apiUrl;
}