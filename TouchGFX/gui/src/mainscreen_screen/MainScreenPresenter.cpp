#include <gui/mainscreen_screen/MainScreenView.hpp>
#include <gui/mainscreen_screen/MainScreenPresenter.hpp>

MainScreenPresenter::MainScreenPresenter(MainScreenView& v)
    : view(v)
{

}

void MainScreenPresenter::activate()
{

}

void MainScreenPresenter::deactivate()
{

}

void MainScreenPresenter::setNewAdcValue(unsigned int newValue)
{
    float aValue = 0;

    aValue = (3.3 * newValue) / 65535;

    view.updateAdcValue(aValue);
}
