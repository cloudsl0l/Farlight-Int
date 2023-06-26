#pragma once
#define WINDOWS_IGNORE_PACKING_MISMATCH
// Farlight84 (15.40) SDK

#include <set>
#include <string>
#include <xlocale>
#include <windows.h>
#include <psapi.h>
static int x, y;

#include "SDK/FL84_Basic.hpp"

#include "SDK/FL84_CoreUObject_structs.hpp"
#include "SDK/FL84_CoreUObject_classes.hpp"
#include "SDK/FL84_CoreUObject_parameters.hpp"
#include "SDK/FL84_AudioExtensions_structs.hpp"
#include "SDK/FL84_AudioExtensions_classes.hpp"
#include "SDK/FL84_AudioExtensions_parameters.hpp"
#include "SDK/FL84_InputCore_structs.hpp"
#include "SDK/FL84_InputCore_classes.hpp"
#include "SDK/FL84_InputCore_parameters.hpp"
#include "SDK/FL84_SlateCore_structs.hpp"
#include "SDK/FL84_SlateCore_classes.hpp"
#include "SDK/FL84_SlateCore_parameters.hpp"
#include "SDK/FL84_PacketHandler_structs.hpp"
#include "SDK/FL84_PacketHandler_classes.hpp"
#include "SDK/FL84_PacketHandler_parameters.hpp"
#include "SDK/FL84_Gauntlet_structs.hpp"
#include "SDK/FL84_Gauntlet_classes.hpp"
#include "SDK/FL84_Gauntlet_parameters.hpp"
#include "SDK/FL84_Slate_structs.hpp"
#include "SDK/FL84_Slate_classes.hpp"
#include "SDK/FL84_Slate_parameters.hpp"
#include "SDK/FL84_AudioPlatformConfiguration_structs.hpp"
#include "SDK/FL84_AudioPlatformConfiguration_classes.hpp"
#include "SDK/FL84_AudioPlatformConfiguration_parameters.hpp"
#include "SDK/FL84_PhysicsCore_structs.hpp"
#include "SDK/FL84_PhysicsCore_classes.hpp"
#include "SDK/FL84_PhysicsCore_parameters.hpp"
#include "SDK/FL84_Engine_structs.hpp"
#include "SDK/FL84_Engine_classes.hpp"
#include "SDK/FL84_Engine_parameters.hpp"
#include "SDK/FL84_EnhancedInput_structs.hpp"
#include "SDK/FL84_EnhancedInput_classes.hpp"
#include "SDK/FL84_EnhancedInput_parameters.hpp"
#include "SDK/FL84_GameplayTags_structs.hpp"
#include "SDK/FL84_GameplayTags_classes.hpp"
#include "SDK/FL84_GameplayTags_parameters.hpp"
#include "SDK/FL84_WebBrowser_structs.hpp"
#include "SDK/FL84_WebBrowser_classes.hpp"
#include "SDK/FL84_WebBrowser_parameters.hpp"
#include "SDK/FL84_MovieScene_structs.hpp"
#include "SDK/FL84_MovieScene_classes.hpp"
#include "SDK/FL84_MovieScene_parameters.hpp"
#include "SDK/FL84_GameplayTasks_structs.hpp"
#include "SDK/FL84_GameplayTasks_classes.hpp"
#include "SDK/FL84_GameplayTasks_parameters.hpp"
#include "SDK/FL84_SessionMessages_structs.hpp"
#include "SDK/FL84_SessionMessages_classes.hpp"
#include "SDK/FL84_SessionMessages_parameters.hpp"
#include "SDK/FL84_ChaosSolvers_structs.hpp"
#include "SDK/FL84_ChaosSolvers_classes.hpp"
#include "SDK/FL84_ChaosSolvers_parameters.hpp"
#include "SDK/FL84_Serialization_structs.hpp"
#include "SDK/FL84_Serialization_classes.hpp"
#include "SDK/FL84_Serialization_parameters.hpp"
#include "SDK/FL84_PropertyPath_structs.hpp"
#include "SDK/FL84_PropertyPath_classes.hpp"
#include "SDK/FL84_PropertyPath_parameters.hpp"
#include "SDK/FL84_Renderer_structs.hpp"
#include "SDK/FL84_Renderer_classes.hpp"
#include "SDK/FL84_Renderer_parameters.hpp"
#include "SDK/FL84_EngineMessages_structs.hpp"
#include "SDK/FL84_EngineMessages_classes.hpp"
#include "SDK/FL84_EngineMessages_parameters.hpp"
#include "SDK/FL84_CommonInput_structs.hpp"
#include "SDK/FL84_CommonInput_classes.hpp"
#include "SDK/FL84_CommonInput_parameters.hpp"
#include "SDK/FL84_GeometryCollectionSimulationCore_structs.hpp"
#include "SDK/FL84_GeometryCollectionSimulationCore_classes.hpp"
#include "SDK/FL84_GeometryCollectionSimulationCore_parameters.hpp"
#include "SDK/FL84_MediaUtils_structs.hpp"
#include "SDK/FL84_MediaUtils_classes.hpp"
#include "SDK/FL84_MediaUtils_parameters.hpp"
#include "SDK/FL84_MovieSceneTracks_structs.hpp"
#include "SDK/FL84_MovieSceneTracks_classes.hpp"
#include "SDK/FL84_MovieSceneTracks_parameters.hpp"
#include "SDK/FL84_BP_LobbyMode_structs.hpp"
#include "SDK/FL84_BP_LobbyMode_classes.hpp"
#include "SDK/FL84_BP_LobbyMode_parameters.hpp"
#include "SDK/FL84_FieldSystemCore_structs.hpp"
#include "SDK/FL84_FieldSystemCore_classes.hpp"
#include "SDK/FL84_FieldSystemCore_parameters.hpp"
#include "SDK/FL84_ImageWrapper_structs.hpp"
#include "SDK/FL84_ImageWrapper_classes.hpp"
#include "SDK/FL84_ImageWrapper_parameters.hpp"
#include "SDK/FL84_BinariesPatchFeature_structs.hpp"
#include "SDK/FL84_BinariesPatchFeature_classes.hpp"
#include "SDK/FL84_BinariesPatchFeature_parameters.hpp"
#include "SDK/FL84_GeometryCollectionCore_structs.hpp"
#include "SDK/FL84_GeometryCollectionCore_classes.hpp"
#include "SDK/FL84_GeometryCollectionCore_parameters.hpp"
#include "SDK/FL84_Landmass_structs.hpp"
#include "SDK/FL84_Landmass_classes.hpp"
#include "SDK/FL84_Landmass_parameters.hpp"
#include "SDK/FL84_AnimationCore_structs.hpp"
#include "SDK/FL84_AnimationCore_classes.hpp"
#include "SDK/FL84_AnimationCore_parameters.hpp"
#include "SDK/FL84_WidgetCarousel_structs.hpp"
#include "SDK/FL84_WidgetCarousel_classes.hpp"
#include "SDK/FL84_WidgetCarousel_parameters.hpp"
#include "SDK/FL84_Login_structs.hpp"
#include "SDK/FL84_Login_classes.hpp"
#include "SDK/FL84_Login_parameters.hpp"
#include "SDK/FL84_ReplicationGraph_structs.hpp"
#include "SDK/FL84_ReplicationGraph_classes.hpp"
#include "SDK/FL84_ReplicationGraph_parameters.hpp"
#include "SDK/FL84_DmgTypeBP_Environmental_structs.hpp"
#include "SDK/FL84_DmgTypeBP_Environmental_classes.hpp"
#include "SDK/FL84_DmgTypeBP_Environmental_parameters.hpp"
#include "SDK/FL84_ClothingSystemRuntimeInterface_structs.hpp"
#include "SDK/FL84_ClothingSystemRuntimeInterface_classes.hpp"
#include "SDK/FL84_ClothingSystemRuntimeInterface_parameters.hpp"
#include "SDK/FL84_ClothingSystemRuntimeCommon_structs.hpp"
#include "SDK/FL84_ClothingSystemRuntimeCommon_classes.hpp"
#include "SDK/FL84_ClothingSystemRuntimeCommon_parameters.hpp"
#include "SDK/FL84_Overlay_structs.hpp"
#include "SDK/FL84_Overlay_classes.hpp"
#include "SDK/FL84_Overlay_parameters.hpp"
#include "SDK/FL84_MoviePlayer_structs.hpp"
#include "SDK/FL84_MoviePlayer_classes.hpp"
#include "SDK/FL84_MoviePlayer_parameters.hpp"
#include "SDK/FL84_UMG_structs.hpp"
#include "SDK/FL84_UMG_classes.hpp"
#include "SDK/FL84_UMG_parameters.hpp"
#include "SDK/FL84_JsonUtilities_structs.hpp"
#include "SDK/FL84_JsonUtilities_classes.hpp"
#include "SDK/FL84_JsonUtilities_parameters.hpp"
#include "SDK/FL84_SolarUtils_structs.hpp"
#include "SDK/FL84_SolarUtils_classes.hpp"
#include "SDK/FL84_SolarUtils_parameters.hpp"
#include "SDK/FL84_ClothingSystemRuntimeNv_structs.hpp"
#include "SDK/FL84_ClothingSystemRuntimeNv_classes.hpp"
#include "SDK/FL84_ClothingSystemRuntimeNv_parameters.hpp"
#include "SDK/FL84_MeshDescription_structs.hpp"
#include "SDK/FL84_MeshDescription_classes.hpp"
#include "SDK/FL84_MeshDescription_parameters.hpp"
#include "SDK/FL84_StaticMeshDescription_structs.hpp"
#include "SDK/FL84_StaticMeshDescription_classes.hpp"
#include "SDK/FL84_StaticMeshDescription_parameters.hpp"
#include "SDK/FL84_InteractiveToolsFramework_structs.hpp"
#include "SDK/FL84_InteractiveToolsFramework_classes.hpp"
#include "SDK/FL84_InteractiveToolsFramework_parameters.hpp"
#include "SDK/FL84_AssetRegistry_structs.hpp"
#include "SDK/FL84_AssetRegistry_classes.hpp"
#include "SDK/FL84_AssetRegistry_parameters.hpp"
#include "SDK/FL84_NetCore_structs.hpp"
#include "SDK/FL84_NetCore_classes.hpp"
#include "SDK/FL84_NetCore_parameters.hpp"
#include "SDK/FL84_ChaosSolverEngine_structs.hpp"
#include "SDK/FL84_ChaosSolverEngine_classes.hpp"
#include "SDK/FL84_ChaosSolverEngine_parameters.hpp"
#include "SDK/FL84_AnimGraphRuntime_structs.hpp"
#include "SDK/FL84_AnimGraphRuntime_classes.hpp"
#include "SDK/FL84_AnimGraphRuntime_parameters.hpp"
#include "SDK/FL84_FieldSystemEngine_structs.hpp"
#include "SDK/FL84_FieldSystemEngine_classes.hpp"
#include "SDK/FL84_FieldSystemEngine_parameters.hpp"
#include "SDK/FL84_GeometryCollectionEngine_structs.hpp"
#include "SDK/FL84_GeometryCollectionEngine_classes.hpp"
#include "SDK/FL84_GeometryCollectionEngine_parameters.hpp"
#include "SDK/FL84_ImageWriteQueue_structs.hpp"
#include "SDK/FL84_ImageWriteQueue_classes.hpp"
#include "SDK/FL84_ImageWriteQueue_parameters.hpp"
#include "SDK/FL84_BuildPatchServices_structs.hpp"
#include "SDK/FL84_BuildPatchServices_classes.hpp"
#include "SDK/FL84_BuildPatchServices_parameters.hpp"
#include "SDK/FL84_EyeTracker_structs.hpp"
#include "SDK/FL84_EyeTracker_classes.hpp"
#include "SDK/FL84_EyeTracker_parameters.hpp"
#include "SDK/FL84_CommonUI_structs.hpp"
#include "SDK/FL84_CommonUI_classes.hpp"
#include "SDK/FL84_CommonUI_parameters.hpp"
#include "SDK/FL84_PhysXVehicles_structs.hpp"
#include "SDK/FL84_PhysXVehicles_classes.hpp"
#include "SDK/FL84_PhysXVehicles_parameters.hpp"
#include "SDK/FL84_EngineSettings_structs.hpp"
#include "SDK/FL84_EngineSettings_classes.hpp"
#include "SDK/FL84_EngineSettings_parameters.hpp"
#include "SDK/FL84_MaterialShaderQualitySettings_structs.hpp"
#include "SDK/FL84_MaterialShaderQualitySettings_classes.hpp"
#include "SDK/FL84_MaterialShaderQualitySettings_parameters.hpp"
#include "SDK/FL84_TimeManagement_structs.hpp"
#include "SDK/FL84_TimeManagement_classes.hpp"
#include "SDK/FL84_TimeManagement_parameters.hpp"
#include "SDK/FL84_Landscape_structs.hpp"
#include "SDK/FL84_Landscape_classes.hpp"
#include "SDK/FL84_Landscape_parameters.hpp"
#include "SDK/FL84_Foliage_structs.hpp"
#include "SDK/FL84_Foliage_classes.hpp"
#include "SDK/FL84_Foliage_parameters.hpp"
#include "SDK/FL84_HeadMountedDisplay_structs.hpp"
#include "SDK/FL84_HeadMountedDisplay_classes.hpp"
#include "SDK/FL84_HeadMountedDisplay_parameters.hpp"
#include "SDK/FL84_SolarlandResUpdate_structs.hpp"
#include "SDK/FL84_SolarlandResUpdate_classes.hpp"
#include "SDK/FL84_SolarlandResUpdate_parameters.hpp"
#include "SDK/FL84_AugmentedReality_structs.hpp"
#include "SDK/FL84_AugmentedReality_classes.hpp"
#include "SDK/FL84_AugmentedReality_parameters.hpp"
#include "SDK/FL84_MRMesh_structs.hpp"
#include "SDK/FL84_MRMesh_classes.hpp"
#include "SDK/FL84_MRMesh_parameters.hpp"
#include "SDK/FL84_MovieSceneCapture_structs.hpp"
#include "SDK/FL84_MovieSceneCapture_classes.hpp"
#include "SDK/FL84_MovieSceneCapture_parameters.hpp"
#include "SDK/FL84_SolarlandDeviceId_structs.hpp"
#include "SDK/FL84_SolarlandDeviceId_classes.hpp"
#include "SDK/FL84_SolarlandDeviceId_parameters.hpp"
#include "SDK/FL84_AkAudio_structs.hpp"
#include "SDK/FL84_AkAudio_classes.hpp"
#include "SDK/FL84_AkAudio_parameters.hpp"
#include "SDK/FL84_CinematicCamera_structs.hpp"
#include "SDK/FL84_CinematicCamera_classes.hpp"
#include "SDK/FL84_CinematicCamera_parameters.hpp"
#include "SDK/FL84_NavigationSystem_structs.hpp"
#include "SDK/FL84_NavigationSystem_classes.hpp"
#include "SDK/FL84_NavigationSystem_parameters.hpp"
#include "SDK/FL84_GameplayAbilities_structs.hpp"
#include "SDK/FL84_GameplayAbilities_classes.hpp"
#include "SDK/FL84_GameplayAbilities_parameters.hpp"
#include "SDK/FL84_SoundFields_structs.hpp"
#include "SDK/FL84_SoundFields_classes.hpp"
#include "SDK/FL84_SoundFields_parameters.hpp"
#include "SDK/FL84_AIModule_structs.hpp"
#include "SDK/FL84_AIModule_classes.hpp"
#include "SDK/FL84_AIModule_parameters.hpp"
#include "SDK/FL84_TemplateLoadingSystem_structs.hpp"
#include "SDK/FL84_TemplateLoadingSystem_classes.hpp"
#include "SDK/FL84_TemplateLoadingSystem_parameters.hpp"
#include "SDK/FL84_MobilePatchingUtils_structs.hpp"
#include "SDK/FL84_MobilePatchingUtils_classes.hpp"
#include "SDK/FL84_MobilePatchingUtils_parameters.hpp"
#include "SDK/FL84_LocationServicesBPLibrary_structs.hpp"
#include "SDK/FL84_LocationServicesBPLibrary_classes.hpp"
#include "SDK/FL84_LocationServicesBPLibrary_parameters.hpp"
#include "SDK/FL84_GooglePAD_structs.hpp"
#include "SDK/FL84_GooglePAD_classes.hpp"
#include "SDK/FL84_GooglePAD_parameters.hpp"
#include "SDK/FL84_CustomMeshComponent_structs.hpp"
#include "SDK/FL84_CustomMeshComponent_classes.hpp"
#include "SDK/FL84_CustomMeshComponent_parameters.hpp"
#include "SDK/FL84_CableComponent_structs.hpp"
#include "SDK/FL84_CableComponent_classes.hpp"
#include "SDK/FL84_CableComponent_parameters.hpp"
#include "SDK/FL84_AppleImageUtils_structs.hpp"
#include "SDK/FL84_AppleImageUtils_classes.hpp"
#include "SDK/FL84_AppleImageUtils_parameters.hpp"
#include "SDK/FL84_AssetTags_structs.hpp"
#include "SDK/FL84_AssetTags_classes.hpp"
#include "SDK/FL84_AssetTags_parameters.hpp"
#include "SDK/FL84_ArchVisCharacter_structs.hpp"
#include "SDK/FL84_ArchVisCharacter_classes.hpp"
#include "SDK/FL84_ArchVisCharacter_parameters.hpp"
#include "SDK/FL84_UdpMessaging_structs.hpp"
#include "SDK/FL84_UdpMessaging_classes.hpp"
#include "SDK/FL84_UdpMessaging_parameters.hpp"
#include "SDK/FL84_TcpMessaging_structs.hpp"
#include "SDK/FL84_TcpMessaging_classes.hpp"
#include "SDK/FL84_TcpMessaging_parameters.hpp"
#include "SDK/FL84_WmfMediaFactory_structs.hpp"
#include "SDK/FL84_WmfMediaFactory_classes.hpp"
#include "SDK/FL84_WmfMediaFactory_parameters.hpp"
#include "SDK/FL84_UI_CursorWidget_Default_structs.hpp"
#include "SDK/FL84_UI_CursorWidget_Default_classes.hpp"
#include "SDK/FL84_UI_CursorWidget_Default_parameters.hpp"
#include "SDK/FL84_TemplateSequence_structs.hpp"
#include "SDK/FL84_TemplateSequence_classes.hpp"
#include "SDK/FL84_TemplateSequence_parameters.hpp"
#include "SDK/FL84_ImgMediaFactory_structs.hpp"
#include "SDK/FL84_ImgMediaFactory_classes.hpp"
#include "SDK/FL84_ImgMediaFactory_parameters.hpp"
#include "SDK/FL84_ActorSequence_structs.hpp"
#include "SDK/FL84_ActorSequence_classes.hpp"
#include "SDK/FL84_ActorSequence_parameters.hpp"
#include "SDK/FL84_LevelSequence_structs.hpp"
#include "SDK/FL84_LevelSequence_classes.hpp"
#include "SDK/FL84_LevelSequence_parameters.hpp"
#include "SDK/FL84_AudioMixer_structs.hpp"
#include "SDK/FL84_AudioMixer_classes.hpp"
#include "SDK/FL84_AudioMixer_parameters.hpp"
#include "SDK/FL84_MediaAssets_structs.hpp"
#include "SDK/FL84_MediaAssets_classes.hpp"
#include "SDK/FL84_MediaAssets_parameters.hpp"
#include "SDK/FL84_AutomationUtils_structs.hpp"
#include "SDK/FL84_AutomationUtils_classes.hpp"
#include "SDK/FL84_AutomationUtils_parameters.hpp"
#include "SDK/FL84_MediaCompositing_structs.hpp"
#include "SDK/FL84_MediaCompositing_classes.hpp"
#include "SDK/FL84_MediaCompositing_parameters.hpp"
#include "SDK/FL84_UObjectPlugin_structs.hpp"
#include "SDK/FL84_UObjectPlugin_classes.hpp"
#include "SDK/FL84_UObjectPlugin_parameters.hpp"
#include "SDK/FL84_SignificanceManager_structs.hpp"
#include "SDK/FL84_SignificanceManager_classes.hpp"
#include "SDK/FL84_SignificanceManager_parameters.hpp"
#include "SDK/FL84_GeometryCache_structs.hpp"
#include "SDK/FL84_GeometryCache_classes.hpp"
#include "SDK/FL84_GeometryCache_parameters.hpp"
#include "SDK/FL84_FacialAnimation_structs.hpp"
#include "SDK/FL84_FacialAnimation_classes.hpp"
#include "SDK/FL84_FacialAnimation_parameters.hpp"
#include "SDK/FL84_LightPropagationVolumeRuntime_structs.hpp"
#include "SDK/FL84_LightPropagationVolumeRuntime_classes.hpp"
#include "SDK/FL84_LightPropagationVolumeRuntime_parameters.hpp"
#include "SDK/FL84_SLTA_structs.hpp"
#include "SDK/FL84_SLTA_classes.hpp"
#include "SDK/FL84_SLTA_parameters.hpp"
#include "SDK/FL84_AnimationSharing_structs.hpp"
#include "SDK/FL84_AnimationSharing_classes.hpp"
#include "SDK/FL84_AnimationSharing_parameters.hpp"
#include "SDK/FL84_OodleHandlerComponent_structs.hpp"
#include "SDK/FL84_OodleHandlerComponent_classes.hpp"
#include "SDK/FL84_OodleHandlerComponent_parameters.hpp"
#include "SDK/FL84_GeometryCacheTracks_structs.hpp"
#include "SDK/FL84_GeometryCacheTracks_classes.hpp"
#include "SDK/FL84_GeometryCacheTracks_parameters.hpp"
#include "SDK/FL84_FarlightPatchRuntime_structs.hpp"
#include "SDK/FL84_FarlightPatchRuntime_classes.hpp"
#include "SDK/FL84_FarlightPatchRuntime_parameters.hpp"
#include "SDK/FL84_ImpostorBaker_structs.hpp"
#include "SDK/FL84_ImpostorBaker_classes.hpp"
#include "SDK/FL84_ImpostorBaker_parameters.hpp"
//#include "SDK/FL84_HotPatcherRuntime_structs.hpp"
//#include "SDK/FL84_HotPatcherRuntime_classes.hpp"
//#include "SDK/FL84_HotPatcherRuntime_parameters.hpp"
#include "SDK/FL84_DTBPJson_structs.hpp"
#include "SDK/FL84_DTBPJson_classes.hpp"
#include "SDK/FL84_DTBPJson_parameters.hpp"
#include "SDK/FL84_ACLPlugin_structs.hpp"
#include "SDK/FL84_ACLPlugin_classes.hpp"
#include "SDK/FL84_ACLPlugin_parameters.hpp"
#include "SDK/FL84_AnoSDK_structs.hpp"
#include "SDK/FL84_AnoSDK_classes.hpp"
#include "SDK/FL84_AnoSDK_parameters.hpp"
#include "SDK/FL84_SolarTCPSocket_structs.hpp"
#include "SDK/FL84_SolarTCPSocket_classes.hpp"
#include "SDK/FL84_SolarTCPSocket_parameters.hpp"
#include "SDK/FL84_Paper2D_structs.hpp"
#include "SDK/FL84_Paper2D_classes.hpp"
#include "SDK/FL84_Paper2D_parameters.hpp"
#include "SDK/FL84_NativizedAssets_structs.hpp"
#include "SDK/FL84_NativizedAssets_classes.hpp"
#include "SDK/FL84_NativizedAssets_parameters.hpp"
#include "SDK/FL84_Synthesis_structs.hpp"
#include "SDK/FL84_Synthesis_classes.hpp"
#include "SDK/FL84_Synthesis_parameters.hpp"
#include "SDK/FL84_KawaiiPhysics_structs.hpp"
#include "SDK/FL84_KawaiiPhysics_classes.hpp"
#include "SDK/FL84_KawaiiPhysics_parameters.hpp"
#include "SDK/FL84_ImgMedia_structs.hpp"
#include "SDK/FL84_ImgMedia_classes.hpp"
#include "SDK/FL84_ImgMedia_parameters.hpp"
#include "SDK/FL84_Solarland_structs.hpp"
#include "SDK/FL84_Solarland_classes.hpp"
#include "SDK/FL84_Solarland_parameters.hpp"
#include "SDK/FL84_RawInput_structs.hpp"
#include "SDK/FL84_RawInput_classes.hpp"
#include "SDK/FL84_RawInput_parameters.hpp"
#include "SDK/FL84_MeshWidget_structs.hpp"
#include "SDK/FL84_MeshWidget_classes.hpp"
#include "SDK/FL84_MeshWidget_parameters.hpp"
#include "SDK/FL84_RichtapTools_structs.hpp"
#include "SDK/FL84_RichtapTools_classes.hpp"
#include "SDK/FL84_RichtapTools_parameters.hpp"
#include "SDK/FL84_RichtapToolsLib_structs.hpp"
#include "SDK/FL84_RichtapToolsLib_classes.hpp"
#include "SDK/FL84_RichtapToolsLib_parameters.hpp"
#include "SDK/FL84_UI_Root_structs.hpp"
#include "SDK/FL84_UI_Root_classes.hpp"
#include "SDK/FL84_UI_Root_parameters.hpp"
#include "SDK/FL84_UI_Update_structs.hpp"
#include "SDK/FL84_UI_Update_classes.hpp"
#include "SDK/FL84_UI_Update_parameters.hpp"
#include "SDK/FL84_AndroidPermission_structs.hpp"
#include "SDK/FL84_AndroidPermission_classes.hpp"
#include "SDK/FL84_AndroidPermission_parameters.hpp"
#include "SDK/FL84_OnlineSubsystem_structs.hpp"
#include "SDK/FL84_OnlineSubsystem_classes.hpp"
#include "SDK/FL84_OnlineSubsystem_parameters.hpp"
#include "SDK/FL84_UI_LoadingBase_structs.hpp"
#include "SDK/FL84_UI_LoadingBase_classes.hpp"
#include "SDK/FL84_UI_LoadingBase_parameters.hpp"
#include "SDK/FL84_OnlineSubsystemUtils_structs.hpp"
#include "SDK/FL84_OnlineSubsystemUtils_classes.hpp"
#include "SDK/FL84_OnlineSubsystemUtils_parameters.hpp"
#include "SDK/FL84_OnlineSubsystemEOS_structs.hpp"
#include "SDK/FL84_OnlineSubsystemEOS_classes.hpp"
#include "SDK/FL84_OnlineSubsystemEOS_parameters.hpp"
#include "SDK/FL84_OnlineSubsystemSteam_structs.hpp"
#include "SDK/FL84_OnlineSubsystemSteam_classes.hpp"
#include "SDK/FL84_OnlineSubsystemSteam_parameters.hpp"
#include "SDK/FL84_LimNative_structs.hpp"
#include "SDK/FL84_LimNative_classes.hpp"
#include "SDK/FL84_LimNative_parameters.hpp"
#include "SDK/FL84_LLHSDK_structs.hpp"
#include "SDK/FL84_LLHSDK_classes.hpp"
#include "SDK/FL84_LLHSDK_parameters.hpp"
#include "SDK/FL84_LimNativeWidget_structs.hpp"
#include "SDK/FL84_LimNativeWidget_classes.hpp"
#include "SDK/FL84_LimNativeWidget_parameters.hpp"
#include "SDK/FL84_VariantManagerContent_structs.hpp"
#include "SDK/FL84_VariantManagerContent_classes.hpp"
#include "SDK/FL84_VariantManagerContent_parameters.hpp"
#include "SDK/FL84_DatasmithContent_structs.hpp"
#include "SDK/FL84_DatasmithContent_classes.hpp"
#include "SDK/FL84_DatasmithContent_parameters.hpp"
#include "SDK/FL84_ProceduralMeshComponent_structs.hpp"
#include "SDK/FL84_ProceduralMeshComponent_classes.hpp"
#include "SDK/FL84_ProceduralMeshComponent_parameters.hpp"
#include "SDK/FL84_WebBrowserWidget_structs.hpp"
#include "SDK/FL84_WebBrowserWidget_classes.hpp"
#include "SDK/FL84_WebBrowserWidget_parameters.hpp"
#include "SDK/FL84_EditableMesh_structs.hpp"
#include "SDK/FL84_EditableMesh_classes.hpp"
#include "SDK/FL84_EditableMesh_parameters.hpp"
#include "SDK/FL84_GeometryCollectionTracks_structs.hpp"
#include "SDK/FL84_GeometryCollectionTracks_classes.hpp"
#include "SDK/FL84_GeometryCollectionTracks_parameters.hpp"
#include "SDK/FL84_MotionWarping_structs.hpp"
#include "SDK/FL84_MotionWarping_classes.hpp"
#include "SDK/FL84_MotionWarping_parameters.hpp"
#include "SDK/FL84_HoudiniEngineRuntime_structs.hpp"
#include "SDK/FL84_HoudiniEngineRuntime_classes.hpp"
#include "SDK/FL84_HoudiniEngineRuntime_parameters.hpp"
#include "SDK/FL84_AvfMediaFactory_structs.hpp"
#include "SDK/FL84_AvfMediaFactory_classes.hpp"
#include "SDK/FL84_AvfMediaFactory_parameters.hpp"
#include "SDK/FL84_UIServerList_Item_structs.hpp"
#include "SDK/FL84_UIServerList_Item_classes.hpp"
#include "SDK/FL84_UIServerList_Item_parameters.hpp"
#include "SDK/FL84_UI_UpdateLoadingBase_structs.hpp"
#include "SDK/FL84_UI_UpdateLoadingBase_classes.hpp"
#include "SDK/FL84_UI_UpdateLoadingBase_parameters.hpp"
#include "SDK/FL84_BP_SolarGameSettingsRange_PC_structs.hpp"
#include "SDK/FL84_BP_SolarGameSettingsRange_PC_classes.hpp"
#include "SDK/FL84_BP_SolarGameSettingsRange_PC_parameters.hpp"
#include "SDK/FL84_UIParticleSystem_structs.hpp"
#include "SDK/FL84_UIParticleSystem_classes.hpp"
#include "SDK/FL84_UIParticleSystem_parameters.hpp"
#include "SDK/FL84_BlockoutToolsPlugin_structs.hpp"
#include "SDK/FL84_BlockoutToolsPlugin_classes.hpp"
#include "SDK/FL84_BlockoutToolsPlugin_parameters.hpp"
#include "SDK/FL84_BP_LobbyGameState_structs.hpp"
#include "SDK/FL84_BP_LobbyGameState_classes.hpp"
#include "SDK/FL84_BP_LobbyGameState_parameters.hpp"
#include "SDK/FL84_SolarGameInstance_structs.hpp"
#include "SDK/FL84_SolarGameInstance_classes.hpp"
#include "SDK/FL84_SolarGameInstance_parameters.hpp"
#include "SDK/FL84_UnLua_structs.hpp"
#include "SDK/FL84_UnLua_classes.hpp"
#include "SDK/FL84_UnLua_parameters.hpp"
#include "SDK/FL84_AnimationBudgetAllocator_structs.hpp"
#include "SDK/FL84_AnimationBudgetAllocator_classes.hpp"
#include "SDK/FL84_AnimationBudgetAllocator_parameters.hpp"

enum bones : int
{
	Root = 0,
	Bip001 = 1,
	pelvis = 2,
	spine_01 = 3,
	spine_02 = 4,
	spine_03 = 5,
	clavicle_l = 6,
	upperarm_l = 7,
	lowerarm_l = 8,
	hand_l = 9,
	thumb_01_l = 10,
	thumb_02_l = 11,
	thumb_03_l = 12,
	index_01_l = 13,
	index_02_l = 14,
	index_03_l = 15,
	middle_01_l = 16,
	middle_02_l = 17,
	middle_03_l = 18,
	ring_01_l = 19,
	ring_02_l = 20,
	ring_03_l = 21,
	pinky_01_l = 22,
	pinky_02_l = 23,
	pinky_03_l = 24,
	clavicle_r = 25,
	upperarm_r = 26,
	lowerarm_r = 27,
	hand_r = 28,
	thumb_01_r = 29,
	thumb_02_r = 30,
	thumb_03_r = 31,
	index_01_r = 32,
	index_02_r = 33,
	index_03_r = 34,
	middle_01_r = 35,
	middle_02_r = 36,
	middle_03_r = 37,
	ring_01_r = 38,
	ring_02_r = 39,
	ring_03_r = 40,
	pinky_01_r = 41,
	pinky_02_r = 42,
	pinky_03_r = 43,
	RightHandWeaponAttach = 44,
	neck_01 = 45,
	head = 46,
	BackpackAttach = 47,
	thigh_l = 48,
	calf_l = 49,
	foot_l = 50,
	ball_l = 51,
	thigh_r = 52,
	calf_r = 53,
	foot_r = 54,
	ball_r = 55,
	VB_spine_03_RightHandWeaponAttach = 56,
	VB_VB_spine_03_RightHandWeaponAttach_hand_r = 57,
	VB_VB_VB_spine_03_RightHandWeaponAttach_hand_r_lowerarm_r = 58,
};

static inline void memcpy_(void* _Dst, void const* _Src, size_t _Size)
{
	auto csrc = (char*)_Src;
	auto cdest = (char*)_Dst;

	for (int i = 0; i < _Size; i++)
	{
		cdest[i] = csrc[i];
	}
}

static inline void SwapVtable(void* obj, uint32_t index, void* hook) {
	auto currVt = *(void**)(obj);

	auto vtable = *(void***)(obj);
	int i = 0;

	for (; vtable[i]; i++)
		__noop();

	auto newVt = new uintptr_t[i];

	memcpy_(newVt, currVt, i * 0x8);

	newVt[index] = (uintptr_t)hook;

	*(uintptr_t**)(obj) = newVt;
}

uintptr_t FindPattern(HMODULE module, const unsigned char* pattern, const char* mask);
uintptr_t FindPattern(uintptr_t start, size_t length, const unsigned char* pattern, const char* mask);

class unrealengine {
public:
	static inline SDK::UWorld** GWorld = NULL;
	static inline SDK::UWorld* World = NULL;
	static inline SDK::FMinimalViewInfo* Camera;
	static inline SDK::APlayerController* PlayerController = NULL;
	static inline SDK::ULocalPlayer* LocalPlayer = NULL;
	static inline SDK::UKismetMathLibrary* MathLib = NULL;
	static inline SDK::UKismetSystemLibrary* KismetSystemLib = NULL;
	static inline SDK::UGameplayStatics* GPStatics = NULL;
	static inline SDK::UFont* Font = NULL;

	static bool SetObjects()
	{
		//set MathLib for math functions
		if (!MathLib) MathLib = (SDK::UKismetMathLibrary*)SDK::UKismetMathLibrary::StaticClass();

		//set SystemLib for math functions
		if (!KismetSystemLib) KismetSystemLib = (SDK::UKismetSystemLibrary*)SDK::UKismetSystemLibrary::StaticClass();

		//Set GPStatics for game functions
		if (!GPStatics) GPStatics = (SDK::UGameplayStatics*)SDK::UGameplayStatics::StaticClass();
		if (!GPStatics) return false;

		//set world
		World = *GWorld;

		//check world
		if (!World) return false;

		//Set local player 
		if (World->OwningGameInstance && World->OwningGameInstance->LocalPlayers.IsValidIndex(0)) LocalPlayer = World->OwningGameInstance->LocalPlayers[0];
		if (!LocalPlayer) return false;

		//Set player contoller
		if (LocalPlayer) PlayerController = LocalPlayer->PlayerController;
		if (!PlayerController) return false;

		//Everything went well
		return true;
	}

	void DrawLine(SDK::UCanvas* Canvas, SDK::FVector2D position1, SDK::FVector2D position2, SDK::FLinearColor color, int thickness = 1)
	{
		Canvas->K2_DrawLine(position1, position2, thickness, color);
	}



	inline void SetAim(SDK::APlayerCameraManager* MyCamera, SDK::ASolarCharacter* Target)
	{
		SDK::FVector CamLocation = MyCamera->GetCameraLocation();
		SDK::FRotator CamRotation = MyCamera->GetCameraRotation();
		SDK::FVector AimLocation;
		SDK::FRotator AimRotation, CurrentRotation;

		AimLocation = Target->Mesh->GetSocketLocation(Target->Mesh->GetBoneName(head));

		//get aim rotation
		AimRotation = MathLib->STATIC_FindLookAtRotation(CamLocation, AimLocation);

		//set aim
		PlayerController->SetControlRotation(AimRotation);
	}

	void DrawCorneredBox(SDK::UCanvas* Canvas, SDK::FVector2D position, SDK::FVector2D size, int thickness, SDK::FLinearColor color) {
		float lineW = (size.X / 5);
		float lineH = (size.Y / 4);

		//corners
		DrawLine(Canvas, SDK::FVector2D(position.X, position.Y), SDK::FVector2D(position.X, position.Y + lineH), color, thickness);
		DrawLine(Canvas, SDK::FVector2D(position.X, position.Y), SDK::FVector2D(position.X + lineW, position.Y), color, thickness);
		DrawLine(Canvas, SDK::FVector2D(position.X + size.X - lineW, position.Y), SDK::FVector2D(position.X + size.X, position.Y), color, thickness);
		DrawLine(Canvas, SDK::FVector2D(position.X + size.X, position.Y), SDK::FVector2D(position.X + size.X, position.Y + lineH), color, thickness);
		DrawLine(Canvas, SDK::FVector2D(position.X, position.Y + size.Y - lineH), SDK::FVector2D(position.X, position.Y + size.Y), color, thickness);
		DrawLine(Canvas, SDK::FVector2D(position.X, position.Y + size.Y), SDK::FVector2D(position.X + lineW, position.Y + size.Y), color, thickness);
		DrawLine(Canvas, SDK::FVector2D(position.X + size.X - lineW, position.Y + size.Y), SDK::FVector2D(position.X + size.X, position.Y + size.Y), color, thickness);
		DrawLine(Canvas, SDK::FVector2D(position.X + size.X, position.Y + size.Y - lineH), SDK::FVector2D(position.X + size.X, position.Y + size.Y), color, thickness);
	}

	inline void Box2D(SDK::UCanvas* Canvas, SDK::ASolarCharacter* actor, SDK::FVector2D Bottom, SDK::FVector2D Top, SDK::FLinearColor col)
	{
		SDK::FVector WorldOrigin, WorldBoxExtent;
		actor->GetActorBounds(bool(PlayerController->AcknowledgedPawn), false, &WorldOrigin, &WorldBoxExtent);

		WorldBoxExtent.X *= 2.f;
		WorldBoxExtent.Y *= 2.f;
		WorldBoxExtent.Z *= 2.f;

		WorldOrigin.X -= WorldBoxExtent.X / 2.f;
		WorldOrigin.Y -= WorldBoxExtent.Y / 2.f;
		WorldOrigin.Z -= WorldBoxExtent.Z / 2.f;

		SDK::FVector one = WorldOrigin;
		SDK::FVector two = WorldOrigin; two.X += WorldBoxExtent.X;
		SDK::FVector three = WorldOrigin; three.X += WorldBoxExtent.X; three.Y += WorldBoxExtent.Y;
		SDK::FVector four = WorldOrigin; four.Y += WorldBoxExtent.Y;

		SDK::FVector five = one; five.Z += WorldBoxExtent.Z;
		SDK::FVector six = two; six.Z += WorldBoxExtent.Z;
		SDK::FVector seven = three; seven.Z += WorldBoxExtent.Z;
		SDK::FVector eight = four; eight.Z += WorldBoxExtent.Z;

		SDK::FVector2D s1, s2, s3, s4, s5, s6, s7, s8;
		PlayerController->ProjectWorldLocationToScreen(one, false, &s1);
		PlayerController->ProjectWorldLocationToScreen(two, false, &s2);
		PlayerController->ProjectWorldLocationToScreen(three, false, &s3);
		PlayerController->ProjectWorldLocationToScreen(four, false, &s4);
		PlayerController->ProjectWorldLocationToScreen(five, false, &s5);
		PlayerController->ProjectWorldLocationToScreen(six, false, &s6);
		PlayerController->ProjectWorldLocationToScreen(seven, false, &s7);
		PlayerController->ProjectWorldLocationToScreen(eight, false, &s8);

		int x_array[8] = { s1.X, s2.X, s3.X, s4.X, s5.X, s6.X, s7.X, s8.X };
		int right = x_array[0], left = x_array[0];

		for (int right_idx = 0; right_idx < 8; right_idx++)
		{
			if (x_array[right_idx] > right)
				right = x_array[right_idx];
		}

		for (int left_idx = 0; left_idx < 8; left_idx++)
		{
			if (x_array[left_idx] < left)
				left = x_array[left_idx];
		}

		float Width = right - left;
		float Height = Bottom.Y - Top.Y;

		SDK::FVector2D min, max, size;
		min.X = left;
		min.Y = Bottom.Y;

		max.X = right;
		max.Y = Top.Y;

		size.X = min.X - max.X;
		size.Y = min.Y - max.Y;

		DrawCorneredBox(Canvas, max, size, 1.5, col);
	}
};

inline unrealengine* ue = new unrealengine;

typedef void (*PostRender_t)(SDK::UObject* pObject, SDK::UCanvas* pCanvas);
static inline PostRender_t origin_renderer;