#include <Pack/RPSystem.h>

/**
 * @brief Constructor
 */
RPSysPlayerSelectScene::RPSysPlayerSelectScene()
{
    // unk44[0] = a;
}

RPSysPlayerSelectScene::~RPSysPlayerSelectScene()
{

}

void RPSysPlayerSelectScene::disableConnection()
{
    RPSysCoreController::disableConnection();
}


void RPSysPlayerSelectScene::shutdownThing()
{

}

void RPSysPlayerSelectScene::setPlayerNum(int player)
{
    if(RPSysScene::isSceneDisplay()) {
        // uh
        //
    }
    setPlayerNum(player);
}

bool RPSysPlayerSelectScene::sceneThing(int arg)
{
    // fn_801D9BC0
    if(RPSysScene::isSceneChangeEnable()) {
        if(RP_GET_INSTANCE(RPSysQueuedScene)->getNextSceneID()) {
            return RP_GET_INSTANCE(RPSysSceneCreator)->changeSceneAfterFade(RP_GET_INSTANCE(RPSysQueuedScene)->getNextSceneID());
        }
    }
    switch(arg) {
        case 0x2:
            return RP_GET_INSTANCE(RPSysSceneCreator)->changeSceneAfterFade(0x1a);
        // next thing?
        case 0x1a:
            return RP_GET_INSTANCE(RPSysSceneCreator)->changeSceneAfterFade(RPSysSceneCreator::ESceneID_RPSysNunchukCheckScene);
    }
    return RP_GET_INSTANCE(RPSysSceneCreator)->changeSceneAfterFade(0x1a);
}

void RPSysPlayerSelectScene::setCursorOut()
{

}
