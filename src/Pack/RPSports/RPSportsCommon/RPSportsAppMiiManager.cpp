#include <RPSports/RPSportsCommon/RPSportsAppMiiManager.h>
#include <Pack/RPSystem.h>

static const char* lbl_80383BD8 = "CPUMii/cpu_mii.rcd";
// static RFLStoreData* data;

RPSportsAppMiiManager::RPSportsAppMiiManager(EGG::Heap *pHeap) : RPSysAppMiiManager(60, pHeap)
{
}

RPSportsAppMiiManager::~RPSportsAppMiiManager()
{
}

// void RPSportsAppMiiManager::LoadResource()
// {
//     // EGG::Archive* pArchive = new EGG::Archive();
//     char* a = NULL;
//     RPSysResourceManager* pResourceManager =
//         RP_GET_INSTANCE(RPSysResourceManager);
//
//     EGG::Archive* pArchive = pResourceManager->GetStaticCommonArchive();
//
//     // strcat(a, lbl_80383BD8);
//
//     pResourceManager->GetFileFromArchive(pArchive, a);
// }
