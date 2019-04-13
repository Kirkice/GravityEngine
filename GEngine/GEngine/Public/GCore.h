
#pragma once

#include "GDxRenderer.h"
//#include "MathHelper.h"
//#include "UploadBuffer.h"
//#include "GeometryGenerator.h"
//#include "Camera.h"
//#include "FrameResource.h"
//#include "ShadowMap.h"
//#include "Ssao.h"

using Microsoft::WRL::ComPtr;
using namespace DirectX;
using namespace DirectX::PackedVector;

//typedef void(__stdcall * VoidFuncPointerType)(void);

class GCore// : public GRenderer
{
public:
	GCore(const GCore& rhs) = delete;
	GCore& operator=(const GCore& rhs) = delete;
	~GCore();

	static GCore& GetCore();

	//virtual bool Initialize(HWND OutputWindow, double width, double height)override;

	/*
#pragma region export

	virtual void MsgProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)override;

	int GetSceneObjectNum();

	const char* GetSceneObjectName(int index);

	void SetSetSceneObjectsCallback(VoidFuncPointerType pSetSceneObjectsCallback);

	void GetSceneObjectTransform(char* objName, float* trans);

	void SetSceneObjectTransform(char* objName, float* trans);

#pragma endregion
	*/

private:
	//void Update(const GameTimer& gt);
	//void Draw(const GameTimer& gt);

	//void SetWorkDirectory();
	//void LoadTextures();

	//Util
	//std::vector<std::wstring> GetAllFilesInFolder(std::wstring path, bool bCheckFormat, std::vector<std::wstring> format);
	//std::vector<std::wstring> GetAllFilesUnderFolder(std::wstring path, bool bCheckFormat, std::vector<std::wstring> format);

private:

	GCore();

	std::unique_ptr<GRiRenderer> mRenderer;

	//std::wstring WorkDirectory;

	/*
#pragma region Export-Related

	VoidFuncPointerType mSetSceneObjectsCallback;

	void SetSceneObjectsCallback();

#pragma endregion
	*/

};