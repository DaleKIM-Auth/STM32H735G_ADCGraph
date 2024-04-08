#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "main.h"
#include "cmsis_os2.h"

extern "C"
{
 extern osMessageQueueId_t adcDataQueueHandle;
 uint32_t osQueueMsg;
}

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
  osStatus_t osStatus = osOK;
  
  if(osMessageQueueGetCount(adcDataQueueHandle) > 0){
    osStatus = osMessageQueueGet(adcDataQueueHandle, &osQueueMsg, NULL, 100U);
    if(osStatus == osOK){
      modelListener->setNewAdcValue(osQueueMsg);
    }
  }
}
