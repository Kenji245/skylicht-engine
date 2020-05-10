#pragma once

#include "ViewManager/CView.h"
#include "Emscripten/CGetFileURL.h"
#include "Graphics2D/SpriteFrame/CSpriteAtlas.h"

class CViewInit : public CView
{
public:
	enum EInitState
	{
		DownloadBundles,
		InitScene,
		Error,
		Finished
	};

protected:
	CGetFileURL *m_getFile;

	CSpriteAtlas *m_sprite;
	io::IFileArchive *m_spriteArchive;

	EInitState m_initState;
	unsigned int m_downloaded;

protected:
	io::path getBuiltInPath(const char *name);

public:
	CViewInit();

	virtual ~CViewInit();

	virtual void onInit();

	virtual void onDestroy();

	virtual void onUpdate();

	virtual void onRender();

protected:

	void initScene();
};