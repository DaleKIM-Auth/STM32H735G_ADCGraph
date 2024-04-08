#include <gui/mainscreen_screen/MainScreenView.hpp>
#include <touchgfx/Unicode.hpp>

MainScreenView::MainScreenView() : 
graphAdcData(0),
tickCounter(0)
{

}

void MainScreenView::setupScreen()
{
    MainScreenViewBase::setupScreen();
}

void MainScreenView::tearDownScreen()
{
    MainScreenViewBase::tearDownScreen();
}

void MainScreenView::updateAdcValue(float newAdcValue)
{
    graphAdcData = newAdcValue;
	Unicode::snprintfFloat(adcValueBuffer, ADCVALUE_SIZE, "%.2f", newAdcValue);

    adcValue.invalidate();
}

void MainScreenView::handleTickEvent()
{
    tickCounter++;
    if(tickCounter%10 == 0){
        dynamicGraph1.addDataPoint(graphAdcData);
    }
}