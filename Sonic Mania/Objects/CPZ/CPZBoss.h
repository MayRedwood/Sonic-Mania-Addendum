#ifndef OBJ_CPZBOSS_H
#define OBJ_CPZBOSS_H

#include "SonicMania.h"

// Object Class
typedef struct {
    RSDK_OBJECT
    Hitbox hitbox;
    Entity* managers[2];
    ushort hudSlotID;
    ushort aniFrames;
    ushort playerFrames;
    ushort sfxExplosion;
} ObjectCPZBoss;

// Entity Class
typedef struct {
    RSDK_ENTITY
    StateMachine(state);
    byte type;
    int timer;
    Vector2 startPos;
    int field_6C;
    int field_70;
    Animator animator1;
    Animator playerAnimator;
    Animator animator2;
} EntityCPZBoss;

// Object Struct
extern ObjectCPZBoss *CPZBoss;

// Standard Entity Events
void CPZBoss_Update(void);
void CPZBoss_LateUpdate(void);
void CPZBoss_StaticUpdate(void);
void CPZBoss_Draw(void);
void CPZBoss_Create(void* data);
void CPZBoss_StageLoad(void);
void CPZBoss_EditorDraw(void);
void CPZBoss_EditorLoad(void);
void CPZBoss_Serialize(void);

// Extra Entity Functions
void CPZBoss_DrawLayerCB_1(void);
void CPZBoss_DrawLayerCB_2(void);

bool32 CPZBoss_Unknown1(void);

void CPZBoss_State_SetupPlayer(void);
void CPZBoss_State_Unknown1(void);
void CPZBoss_State_Unknown2(void);
void CPZBoss_State_Unknown3(void);
void CPZBoss_State_SetupMatch(void);
void CPZBoss_State_HandleBossMatch(void);
void CPZBoss_State_HandlePlayerMatch(void);
void CPZBoss_State_HandlePlayerMatchFinish(void);
void CPZBoss_State_PlayerWin(void);
void CPZBoss_State_HandleBossMatchFinish(void);
void CPZBoss_State_Unknown10(void);
void CPZBoss_State_Unknown11(void);
void CPZBoss_State_Unknown12(void);

#endif //!OBJ_CPZBOSS_H