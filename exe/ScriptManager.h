/*
 * Class:     com_example_ScriptManager
 * Method:    nativeAddFurnaceRecipe
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeAddFurnaceRecipe
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeAddItemChest
 * Signature: (IIIIIII)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeAddItemChest
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeAddItemCreativeInv
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeAddItemCreativeInv
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeAddItemFurnace
 * Signature: (IIIIIII)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeAddItemFurnace
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeAddItemInventory
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeAddItemInventory
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeAddShapedRecipe
 * Signature: (III[Ljava/lang/String;[I)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeAddShapedRecipe
  (JNIEnv *, jclass, jint, jint, jint, jobjectArray, jintArray);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeArmorAddQueuedTextures
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeArmorAddQueuedTextures
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeBiomeIdToName
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_ScriptManager_nativeBiomeIdToName
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeBlockGetDestroyTime
 * Signature: (II)F
 */
JNIEXPORT jfloat JNICALL Java_com_example_ScriptManager_nativeBlockGetDestroyTime
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeBlockGetFriction
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_com_example_ScriptManager_nativeBlockGetFriction
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeBlockGetSecondPart
 * Signature: (IIII)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeBlockGetSecondPart
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeBlockSetCollisionEnabled
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeBlockSetCollisionEnabled
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeBlockSetColor
 * Signature: (I[I)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeBlockSetColor
  (JNIEnv *, jclass, jint, jintArray);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeBlockSetDestroyTime
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeBlockSetDestroyTime
  (JNIEnv *, jclass, jint, jfloat);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeBlockSetExplosionResistance
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeBlockSetExplosionResistance
  (JNIEnv *, jclass, jint, jfloat);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeBlockSetFriction
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeBlockSetFriction
  (JNIEnv *, jclass, jint, jfloat);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeBlockSetLightLevel
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeBlockSetLightLevel
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeBlockSetLightOpacity
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeBlockSetLightOpacity
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeBlockSetRedstoneConsumer
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeBlockSetRedstoneConsumer
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeBlockSetRenderLayer
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeBlockSetRenderLayer
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeBlockSetShape
 * Signature: (IFFFFFFI)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeBlockSetShape
  (JNIEnv *, jclass, jint, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeBlockSetStepSound
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeBlockSetStepSound
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeClearCapes
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeClearCapes
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeClearSlotInventory
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeClearSlotInventory
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeClientMessage
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeClientMessage
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeCloseScreen
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeCloseScreen
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeDefineArmor
 * Signature: (ILjava/lang/String;ILjava/lang/String;Ljava/lang/String;III)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeDefineArmor
  (JNIEnv *, jclass, jint, jstring, jint, jstring, jstring, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeDefineBlock
 * Signature: (ILjava/lang/String;[Ljava/lang/String;[IIZII)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeDefineBlock
  (JNIEnv *, jclass, jint, jstring, jobjectArray, jintArray, jint, jboolean, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeDefineFoodItem
 * Signature: (ILjava/lang/String;IILjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeDefineFoodItem
  (JNIEnv *, jclass, jint, jstring, jint, jint, jstring, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeDefineItem
 * Signature: (ILjava/lang/String;ILjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeDefineItem
  (JNIEnv *, jclass, jint, jstring, jint, jstring, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeDefinePlaceholderBlocks
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeDefinePlaceholderBlocks
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeDestroyBlock
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeDestroyBlock
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeDropItem
 * Signature: (FFFFIII)J
 */
JNIEXPORT jlong JNICALL Java_com_example_ScriptManager_nativeDropItem
  (JNIEnv *, jclass, jfloat, jfloat, jfloat, jfloat, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeDumpVtable
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeDumpVtable
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeEntityGetMobSkin
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_ScriptManager_nativeEntityGetMobSkin
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeEntityGetNameTag
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_ScriptManager_nativeEntityGetNameTag
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeEntityGetRenderType
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeEntityGetRenderType
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeEntityGetRider
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeEntityGetRider
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeEntityGetRiding
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeEntityGetRiding
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeEntityGetUUID
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_com_example_ScriptManager_nativeEntityGetUUID
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeEntityHasCustomSkin
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_ScriptManager_nativeEntityHasCustomSkin
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeEntitySetNameTag
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeEntitySetNameTag
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeEntitySetSize
 * Signature: (JFF)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeEntitySetSize
  (JNIEnv *, jclass, jlong, jfloat, jfloat);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeExplode
 * Signature: (FFFFZ)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeExplode
  (JNIEnv *, jclass, jfloat, jfloat, jfloat, jfloat, jboolean);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeExtinguishFire
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeExtinguishFire
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeForceCrash
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeForceCrash
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetAllEntities
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeGetAllEntities
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetAnimalAge
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeGetAnimalAge
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetArch
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeGetArch
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetBlockRenderShape
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeGetBlockRenderShape
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetBrightness
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeGetBrightness
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetCarriedItem
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeGetCarriedItem
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetData
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeGetData
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetEntityLoc
 * Signature: (JI)F
 */
JNIEXPORT jfloat JNICALL Java_com_example_ScriptManager_nativeGetEntityLoc
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetEntityTypeId
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeGetEntityTypeId
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetEntityVel
 * Signature: (JI)F
 */
JNIEXPORT jfloat JNICALL Java_com_example_ScriptManager_nativeGetEntityVel
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetGameType
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeGetGameType
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetI18NString
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_ScriptManager_nativeGetI18NString
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetItemChest
 * Signature: (IIII)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeGetItemChest
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetItemCountChest
 * Signature: (IIII)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeGetItemCountChest
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetItemCountFurnace
 * Signature: (IIII)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeGetItemCountFurnace
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetItemDataChest
 * Signature: (IIII)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeGetItemDataChest
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetItemDataFurnace
 * Signature: (IIII)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeGetItemDataFurnace
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetItemEntityItem
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeGetItemEntityItem
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetItemFurnace
 * Signature: (IIII)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeGetItemFurnace
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetItemIdCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeGetItemIdCount
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetItemName
 * Signature: (IIZ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_ScriptManager_nativeGetItemName
  (JNIEnv *, jclass, jint, jint, jboolean);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetLanguageName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_ScriptManager_nativeGetLanguageName
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetLevel
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_example_ScriptManager_nativeGetLevel
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetMobHealth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeGetMobHealth
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetMobMaxHealth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeGetMobMaxHealth
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetPitch
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_example_ScriptManager_nativeGetPitch
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetPlayerEnt
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_example_ScriptManager_nativeGetPlayerEnt
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetPlayerLoc
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_com_example_ScriptManager_nativeGetPlayerLoc
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetPlayerName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_ScriptManager_nativeGetPlayerName
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetSelectedSlotId
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeGetSelectedSlotId
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetSignText
 * Signature: (IIII)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_ScriptManager_nativeGetSignText
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetSlotInventory
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeGetSlotInventory
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetTextureCoordinatesForItem
 * Signature: (II[F)Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_ScriptManager_nativeGetTextureCoordinatesForItem
  (JNIEnv *, jclass, jint, jint, jfloatArray);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetTile
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeGetTile
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetTime
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_example_ScriptManager_nativeGetTime
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeGetYaw
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_example_ScriptManager_nativeGetYaw
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeHurtTo
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeHurtTo
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeIsSneaking
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_ScriptManager_nativeIsSneaking
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeIsValidCommand
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_ScriptManager_nativeIsValidCommand
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeIsValidItem
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_ScriptManager_nativeIsValidItem
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeItemGetUseAnimation
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeItemGetUseAnimation
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeItemSetProperties
 * Signature: (ILjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_ScriptManager_nativeItemSetProperties
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeItemSetStackedByData
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeItemSetStackedByData
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeItemSetUseAnimation
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeItemSetUseAnimation
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeJoinServer
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeJoinServer
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeLeaveGame
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeLeaveGame
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeLevelAddParticle
 * Signature: (IFFFFFFI)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeLevelAddParticle
  (JNIEnv *, jclass, jint, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeLevelCanSeeSky
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_ScriptManager_nativeLevelCanSeeSky
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeLevelGetBiome
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeLevelGetBiome
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeLevelGetBiomeName
 * Signature: (II)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_ScriptManager_nativeLevelGetBiomeName
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeLevelGetDifficulty
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeLevelGetDifficulty
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeLevelGetGrassColor
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeLevelGetGrassColor
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeLevelGetLightningLevel
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_example_ScriptManager_nativeLevelGetLightningLevel
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeLevelGetRainLevel
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_example_ScriptManager_nativeLevelGetRainLevel
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeLevelIsRemote
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_ScriptManager_nativeLevelIsRemote
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeLevelSetBiome
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeLevelSetBiome
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeLevelSetDifficulty
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeLevelSetDifficulty
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeLevelSetGrassColor
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeLevelSetGrassColor
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeLevelSetLightningLevel
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeLevelSetLightningLevel
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeLevelSetRainLevel
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeLevelSetRainLevel
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeMobAddEffect
 * Signature: (JIIIZZ)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeMobAddEffect
  (JNIEnv *, jclass, jlong, jint, jint, jint, jboolean, jboolean);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeMobGetArmor
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeMobGetArmor
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeMobRemoveAllEffects
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeMobRemoveAllEffects
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeMobRemoveEffect
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeMobRemoveEffect
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeMobSetArmor
 * Signature: (JIII)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeMobSetArmor
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeModPESetDesktopGui
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeModPESetDesktopGui
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeOnGraphicsReset
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeOnGraphicsReset
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlaySound
 * Signature: (FFFLjava/lang/String;FF)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativePlaySound
  (JNIEnv *, jclass, jfloat, jfloat, jfloat, jstring, jfloat, jfloat);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlayerAddExperience
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativePlayerAddExperience
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlayerCanFly
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_ScriptManager_nativePlayerCanFly
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlayerEnchant
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_ScriptManager_nativePlayerEnchant
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlayerGetDimension
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativePlayerGetDimension
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlayerGetEnchantments
 * Signature: (I)[I
 */
JNIEXPORT jintArray JNICALL Java_com_example_ScriptManager_nativePlayerGetEnchantments
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlayerGetExhaustion
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_example_ScriptManager_nativePlayerGetExhaustion
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlayerGetExperience
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_example_ScriptManager_nativePlayerGetExperience
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlayerGetHunger
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_example_ScriptManager_nativePlayerGetHunger
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlayerGetItemCustomName
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_ScriptManager_nativePlayerGetItemCustomName
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlayerGetLevel
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativePlayerGetLevel
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlayerGetPointedBlock
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativePlayerGetPointedBlock
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlayerGetPointedEntity
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_example_ScriptManager_nativePlayerGetPointedEntity
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlayerGetPointedVec
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_com_example_ScriptManager_nativePlayerGetPointedVec
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlayerGetSaturation
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_example_ScriptManager_nativePlayerGetSaturation
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlayerIsFlying
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_ScriptManager_nativePlayerIsFlying
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlayerSetCanFly
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativePlayerSetCanFly
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlayerSetExhaustion
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativePlayerSetExhaustion
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlayerSetExperience
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativePlayerSetExperience
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlayerSetFlying
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativePlayerSetFlying
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlayerSetHunger
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativePlayerSetHunger
  (JNIEnv *, jclass, jlong, jfloat);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlayerSetItemCustomName
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativePlayerSetItemCustomName
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlayerSetLevel
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativePlayerSetLevel
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlayerSetSaturation
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativePlayerSetSaturation
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePrePatch
 * Signature: (ZLcom/mojang/minecraftpe/MainActivity;Z)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativePrePatch
  (JNIEnv *, jclass, jboolean, jobject, jboolean);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePreventDefault
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativePreventDefault
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeRecipeSetAnyAuxValue
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeRecipeSetAnyAuxValue
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeRemoveEntity
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeRemoveEntity
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeRemoveItemBackground
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeRemoveItemBackground
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeRequestFrameCallback
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeRequestFrameCallback
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeRideAnimal
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeRideAnimal
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeScreenChooserSetScreen
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeScreenChooserSetScreen
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSelectLevel
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSelectLevel
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSendChat
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSendChat
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetAllowEnchantments
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetAllowEnchantments
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetAnimalAge
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetAnimalAge
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetBlockRenderShape
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetBlockRenderShape
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetCameraEntity
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetCameraEntity
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetCape
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetCape
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetCarriedItem
 * Signature: (JIII)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetCarriedItem
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetEntityRenderType
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_ScriptManager_nativeSetEntityRenderType
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetExitEnabled
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetExitEnabled
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetFov
 * Signature: (FZ)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetFov
  (JNIEnv *, jclass, jfloat, jboolean);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetGameSpeed
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetGameSpeed
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetGameType
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetGameType
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetHandEquipped
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetHandEquipped
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetI18NString
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetI18NString
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetInventorySlot
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetInventorySlot
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetIsRecording
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetIsRecording
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetItemCategory
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetItemCategory
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetItemMaxDamage
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetItemMaxDamage
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetMobHealth
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetMobHealth
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetMobMaxHealth
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetMobMaxHealth
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetMobSkin
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetMobSkin
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetNightMode
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetNightMode
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetOnFire
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetOnFire
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetPosition
 * Signature: (JFFF)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetPosition
  (JNIEnv *, jclass, jlong, jfloat, jfloat, jfloat);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetPlayerPosition
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetPlayerPosition
  (JNIEnv *, jclass, jfloat, jfloat, jfloat);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetPositionRelative
 * Signature: (JFFF)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetPositionRelative
  (JNIEnv *, jclass, jlong, jfloat, jfloat, jfloat);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetRot
 * Signature: (JFF)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetRot
  (JNIEnv *, jclass, jlong, jfloat, jfloat);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetSelectedSlotId
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetSelectedSlotId
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetSignText
 * Signature: (IIIILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetSignText
  (JNIEnv *, jclass, jint, jint, jint, jint, jstring);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetSneaking
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetSneaking
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetSpawn
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetSpawn
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetStonecutterItem
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetStonecutterItem
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetTextParseColorCodes
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetTextParseColorCodes
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetTile
 * Signature: (IIIII)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetTile
  (JNIEnv *, jclass, jint, jint, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetTime
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetTime
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetUseController
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetUseController
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetVel
 * Signature: (JFI)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetVel
  (JNIEnv *, jclass, jlong, jfloat, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetupHooks
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetupHooks
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeShowProgressScreen
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeShowProgressScreen
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeShowTipMessage
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeShowTipMessage
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSpawnEntity
 * Signature: (FFFILjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_example_ScriptManager_nativeSpawnEntity
  (JNIEnv *, jclass, jfloat, jfloat, jfloat, jint, jstring);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSpawnerGetEntityType
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_com_example_ScriptManager_nativeSpawnerGetEntityType
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSpawnerSetEntityType
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSpawnerSetEntityType
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeZombieIsBaby
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_ScriptManager_nativeZombieIsBaby
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeZombieSetBaby
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeZombieSetBaby
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlayerSetSpeed
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativePlayerSetSpeed
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativePlayerGetSpeed
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_example_ScriptManager_nativePlayerGetSpeed
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeSetDieNoFall
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeSetDieNoFall
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeIsDieNoFall
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_ScriptManager_nativeIsDieNoFall
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeIsEnterGame
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_ScriptManager_nativeIsEnterGame
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeTest
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeTest
  (JNIEnv *, jclass);

/*
 * Class:     com_example_ScriptManager
 * Method:    nativeAppQuit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeAppQuit
  (JNIEnv *, jclass);
