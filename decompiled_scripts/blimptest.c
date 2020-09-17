void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_41 = -150975354;
	iLocal_44 = -163714847;
	iLocal_46 = 788747387;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_18();
	}
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		HUD::SET_TEXT_SCALE(0.75f, 0.9f);
		HUD::SET_TEXT_WRAP(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		HUD::SET_TEXT_SCALE(0.4f, 0.45f);
		HUD::SET_TEXT_WRAP(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_40))
	{
		if ((ENTITY::IS_ENTITY_DEAD(uLocal_40, 0) || ENTITY::GET_ENTITY_HEALTH(uLocal_40) <= 0) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uLocal_40) <= 0f)
		{
			func_9(&uLocal_42);
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_40))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_40);
			}
			if (iLocal_47 == 1)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(uLocal_40, 0) };
				func_8(Var0);
			}
			if (iLocal_47 == 1)
			{
				func_7(&uLocal_43);
				func_4(&uLocal_40);
			}
			else
			{
				func_3(&uLocal_43, 1, 0, 1);
				func_2(&uLocal_40);
			}
		}
		else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_40))
		{
			VEHICLE::SET_PLAYBACK_SPEED(uLocal_40, 0.25f);
		}
	}
}

void func_2(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*uParam0, 0);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
}

void func_3(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
			}
			PED::SET_PED_KEEP_TASK(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
			}
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
	}
}

void func_4(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
		}
		if (func_6(*uParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1))
			{
				if (func_5(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
						return;
					}
				}
				VEHICLE::DELETE_VEHICLE(uParam0);
			}
		}
		else
		{
			if (func_5(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
					return;
				}
			}
			VEHICLE::DELETE_VEHICLE(uParam0);
		}
	}
}

int func_5(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_6(var uParam0)
{
	if (func_5(uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0, 0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0, 1);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
		}
		PED::DELETE_PED(uParam0);
	}
}

void func_8(struct<3> Param0)
{
	iVar1 = 12;
	Var2[0] = { 5f, 0f, 0f };
	Var2[1] = { 0f, 5f, 0f };
	Var2[2] = { 0f, 0f, 5f };
	Var2[3] = { 5f, 5f, 0f };
	Var2[4] = { 5f, 0f, 5f };
	Var2[5] = { 0f, 5f, 5f };
	Var2[6] = { 20f, 0f, 0f };
	Var2[7] = { 0f, 20f, 0f };
	Var2[8] = { 0f, 0f, 20f };
	Var2[9] = { 20f, 20f, 0f };
	Var2[10] = { 20f, 0f, 20f };
	Var2[11] = { 0f, 20f, 20f };
	FIRE::ADD_EXPLOSION(Param0, 8, 1f, 1, 0, 1065353216, 0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		FIRE::ADD_EXPLOSION(Param0 + Var2[iVar0], 8, 1f, 1, 0, 1065353216, 0);
		iVar0++;
	}
}

void func_9(var uParam0)
{
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		HUD::SET_BLIP_ROUTE(*uParam0, 0);
		HUD::REMOVE_BLIP(uParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&uLocal_45);
	STREAMING::REQUEST_MODEL(iLocal_46);
	while (!STREAMING::HAS_MODEL_LOADED(iLocal_46))
	{
		SYSTEM::WAIT(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_45 = VEHICLE::CREATE_VEHICLE(iLocal_46, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_40, 50f, 0f, 15f), 0f, 1, 1, 0);
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(uLocal_45);
		func_12(uLocal_45, uLocal_40);
		if (func_5(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_45, -1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 500f, 1, 0, 0, 0);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_46);
}

void func_12(var uParam0, var uParam1)
{
	uVar0 = func_13(ENTITY::GET_ENTITY_COORDS(uParam0, 1), ENTITY::GET_ENTITY_COORDS(uParam1, 1), 1);
	ENTITY::SET_ENTITY_HEADING(uParam0, uVar0);
}

float func_13(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5, int iParam6)
{
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_14()
{
	func_9(&uLocal_42);
	if (func_6(uLocal_40))
	{
		uLocal_42 = func_15(uLocal_40, 1, 5);
	}
}

int func_15(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (func_5(uParam0))
	{
		iVar0 = HUD::ADD_BLIP_FOR_ENTITY(uParam0);
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, iParam1);
		HUD::SET_BLIP_PRIORITY(iVar0, iParam2);
		HUD::SET_BLIP_SCALE(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	STREAMING::REQUEST_MODEL(iLocal_44);
	while (!STREAMING::HAS_MODEL_LOADED(iLocal_44))
	{
		SYSTEM::WAIT(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_43 = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_40, 26, iLocal_44, -1, 1, 1);
		if (func_5(uLocal_43))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_43, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_43, 118, 0);
			PED::SET_PED_CONFIG_FLAG(uLocal_43, 29, 0);
			PED::SET_PED_CONFIG_FLAG(uLocal_43, 116, 0);
		}
	}
	if (func_6(uLocal_40))
	{
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_40, 1, "Blimp_City", 1);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_44);
}

void func_17()
{
	if (func_6(uLocal_40) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_40))
	{
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_40);
	}
	func_9(&uLocal_42);
	func_7(&uLocal_43);
	func_4(&uLocal_40);
	STREAMING::REQUEST_MODEL(iLocal_41);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Blimp_City");
	while (!STREAMING::HAS_MODEL_LOADED(iLocal_41) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Blimp_City"))
	{
		SYSTEM::WAIT(0);
	}
	Var0 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "Blimp_City"), 0f) };
	uLocal_40 = VEHICLE::CREATE_VEHICLE(iLocal_41, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "Blimp_City"), 0f), Var0.z, 1, 1, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_41);
}

void func_18()
{
	if (func_6(uLocal_40) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_40))
	{
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_40);
	}
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "Blimp_city");
	func_9(&uLocal_42);
	func_3(&uLocal_43, 1, 0, 1);
	func_2(&uLocal_40);
	func_2(&uLocal_45);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_44);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_41);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_46);
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	SCRIPT::TERMINATE_THIS_THREAD();
}

