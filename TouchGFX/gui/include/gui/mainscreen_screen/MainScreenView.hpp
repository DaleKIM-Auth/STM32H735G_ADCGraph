#ifndef MAINSCREENVIEW_HPP
#define MAINSCREENVIEW_HPP

#include <gui_generated/mainscreen_screen/MainScreenViewBase.hpp>
#include <gui/mainscreen_screen/MainScreenPresenter.hpp>

class MainScreenView : public MainScreenViewBase
{
public:
    MainScreenView();
    virtual ~MainScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void updateAdcValue(float newAdcValue);
    virtual void handleTickEvent();
protected:
    float graphAdcData;
    uint16_t tickCounter;
};

#endif // MAINSCREENVIEW_HPP
