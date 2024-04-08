/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/mainscreen_screen/MainScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

MainScreenViewBase::MainScreenViewBase()
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    backGround.setXY(0, 0);
    backGround.setBitmap(touchgfx::Bitmap(BITMAP_DARK_THEME_IMAGES_BACKGROUNDS_480X272_RAYS_ID));
    add(backGround);

    titleADC.setXY(81, 248);
    titleADC.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    titleADC.setLinespacing(0);
    titleADC.setTypedText(touchgfx::TypedText(T___SINGLEUSE_K5GU));
    add(titleADC);

    adcValue.setPosition(219, 248, 94, 24);
    adcValue.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    adcValue.setLinespacing(0);
    adcValue.setWideTextAction(WIDE_TEXT_WORDWRAP);
    Unicode::snprintf(adcValueBuffer, ADCVALUE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_01MA).getText());
    adcValue.setWildcard(adcValueBuffer);
    adcValue.setTypedText(touchgfx::TypedText(T___SINGLEUSE_UN8P));
    add(adcValue);

    adcUnit.setXY(327, 248);
    adcUnit.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    adcUnit.setLinespacing(0);
    adcUnit.setTypedText(touchgfx::TypedText(T___SINGLEUSE_KJNW));
    add(adcUnit);
}

MainScreenViewBase::~MainScreenViewBase()
{

}

void MainScreenViewBase::setupScreen()
{

}
