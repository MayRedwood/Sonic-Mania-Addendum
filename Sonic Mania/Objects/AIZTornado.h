#ifndef OBJ_AIZTORNADO_H
#define OBJ_AIZTORNADO_H

#include "../SonicMania.h"

// Object Class
typedef struct {
    RSDK_OBJECT
    int value1[5]; // = { -131072, -65536, 0, 65536, 131072 };
    ushort value2;
} ObjectAIZTornado;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntityAIZTornado;

// Object Struct
extern ObjectAIZTornado *AIZTornado;

// Standard Entity Events
void AIZTornado_Update();
void AIZTornado_LateUpdate();
void AIZTornado_StaticUpdate();
void AIZTornado_Draw();
void AIZTornado_Create(void* data);
void AIZTornado_StageLoad();
void AIZTornado_EditorDraw();
void AIZTornado_EditorLoad();
void AIZTornado_Serialize();

// Extra Entity Functions


#endif //!OBJ_AIZTORNADO_H