#ifndef OBJ_TITLELOGO_H
#define OBJ_TITLELOGO_H

#include "../SonicMania.h"

// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectTitleLogo;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntityTitleLogo;

// Object Struct
extern ObjectTitleLogo *TitleLogo;

// Standard Entity Events
void TitleLogo_Update();
void TitleLogo_LateUpdate();
void TitleLogo_StaticUpdate();
void TitleLogo_Draw();
void TitleLogo_Create(void* data);
void TitleLogo_StageLoad();
void TitleLogo_EditorDraw();
void TitleLogo_EditorLoad();
void TitleLogo_Serialize();

// Extra Entity Functions


#endif //!OBJ_TITLELOGO_H