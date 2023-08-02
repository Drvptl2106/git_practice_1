#include <iostream>
using namespace std;
class MarketingCampaign 
{
    public: void start() 
    {
        cout<<"Starting marketing campaign"<<endl;
    }
    void stop() 
    {
        cout<<"Stopping marketing campaign"<<endl;
    }
};

class DigitalMarketingCampaign : public MarketingCampaign 
{
    public:void launchAds() 
    {
        cout<< "Launching digital marketing ads" <<endl;
    }
};

int main() 
{
    MarketingCampaign M;
    DigitalMarketingCampaign D;
    M.start();
    M.stop();
    D.start();
    D.stop();
    D.launchAds();
    return 0;
}