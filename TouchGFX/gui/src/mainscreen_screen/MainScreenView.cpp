#include <gui/mainscreen_screen/MainScreenView.hpp>
#include <touchgfx/Unicode.hpp>

MainScreenView::MainScreenView()
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
	Unicode::snprintfFloat(adcValueBuffer, ADCVALUE_SIZE, "%.2f", newAdcValue);

    adcValue.invalidate();
}
