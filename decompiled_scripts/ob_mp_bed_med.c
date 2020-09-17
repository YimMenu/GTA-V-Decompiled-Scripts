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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_37 = 1;
	Local_286 = { 0f, 0f, 0f };
	Local_289 = { 0f, 0f, 0f };
	fLocal_294 = 80f;
	fLocal_295 = 140f;
	fLocal_296 = 180f;
	iLocal_300 = 3;
	iLocal_304 = 1;
	iLocal_305 = 65;
	iLocal_306 = 49;
	iLocal_307 = 64;
	fLocal_311 = ((0.05f + 0.275f) - 0.01f);
	iLocal_333 = -1;
	sLocal_334 = "mp_bedmid";
	sLocal_335 = "f_getin_l_bighouse";
	sLocal_336 = "f_sleep_l_loop_bighouse";
	sLocal_337 = "f_getout_l_bighouse";
	fLocal_341 = 43.8287f;
	Local_342 = { 349f, -997.3587f, -100.5f };
	Local_345 = { 351.74f, -997.3587f, -97f };
	Local_348 = { 349.66f, -996.183f, -99.764f };
	Local_351 = { 0f, 0f, -3.96f };
	Local_338 = { ScriptParam_0.f_1[0] };
	Local_338 = { 349.9853f, -997.8344f, -99.1952f };
	if ((PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18) || func_83()) || Global_2537071.f_1852)
	{
		func_82();
	}
	if (func_79(9) || (func_78() && !func_77()))
	{
		func_82();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
		func_74(0, -1, 0);
		GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || func_73() == 5)) && !func_61())
		{
			if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Local_338, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) < 3f)
			{
				switch (iLocal_326)
				{
					case 0:
						if (func_60())
						{
							iLocal_326 = 1;
						}
						break;
					
					case 1:
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							func_2();
							if (GAMEPLAY::IS_BIT_SET(uLocal_325, 0))
							{
								func_1();
							}
						}
						break;
					
					case 2:
						break;
				}
			}
			else if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Local_338, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) > 6f)
			{
				func_82();
			}
		}
		else
		{
			func_82();
		}
	}
}

void func_1()
{
	uLocal_332 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(uLocal_331);
	switch (iLocal_327)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_332))
			{
				func_82();
			}
			break;
		
		case 4:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_332))
			{
				func_82();
			}
			break;
		
		case 5:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_332))
			{
				func_82();
			}
			break;
		
		case 6:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_332))
			{
				func_82();
			}
			break;
		
		case 7:
			break;
		
		case 8:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_332))
			{
				func_82();
			}
			break;
		
		case 9:
			break;
	}
}

void func_2()
{
	Var0 = { 1.5f, 1.5f, 1.5f };
	switch (iLocal_327)
	{
		case 0:
			if (Global_1573337 == 9)
			{
				Global_1573337 = -1;
			}
			if (func_73() == 5)
			{
				GAMEPLAY::CLEAR_BIT(&uLocal_325, 0);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					iLocal_330 = 1;
				}
				uLocal_331 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_348, Local_351, 2, 0, 1, 1065353216, 0, 1065353216);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, sLocal_334, sLocal_336, 8f, -2f, 261, 0, 1148846080, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uLocal_331);
				iLocal_327 = 7;
			}
			else if (func_54(9))
			{
				if ((((func_50(Local_338, Var0) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(Local_338)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_342, Local_345, 2f, 0, 1, 0)) && func_49()) && !func_46(PLAYER::PLAYER_ID()))
				{
					if (iLocal_333 == -1)
					{
						func_45(&iLocal_333, 3, "SA_BED_IN", 0, 0, 0, 0);
					}
					iLocal_327 = 1;
				}
			}
			break;
		
		case 1:
			Local_354 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
			if (func_44(1, 0, 1))
			{
				if ((((((func_50(Local_338, Var0) && Local_354.z < (Local_338.z + 1f)) && func_54(9)) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(Local_338)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_342, Local_345, 2f, 0, 1, 0)) && func_49()) && !func_46(PLAYER::PLAYER_ID()))
				{
					if (func_42(iLocal_333, 1))
					{
						func_40(&iLocal_333);
						func_39();
						if (func_38("SA_BED_IN"))
						{
							UI::CLEAR_HELP(1);
						}
						func_37();
						GAMEPLAY::CLEAR_AREA_OF_PROJECTILES(Local_338, 3f, 0);
						Global_1573337 = 9;
						func_27(PLAYER::PLAYER_ID(), 0, 256, 0);
						iLocal_36 = 1;
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 1);
						func_17(1, 1, 1, 0, 0, 0);
						Local_338 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_334, sLocal_335, Local_348, Local_351, 0, 2) };
						Var3 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_334, sLocal_335, Local_348, Local_351, 0, 2) };
						fLocal_341 = Var3.z;
						AI::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Local_338, 1f, 5000, fLocal_341, 0.05f);
						if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 && ENTITY::DOES_ENTITY_EXIST(iLocal_41))
						{
							PED::SET_PED_DESIRED_HEADING(PLAYER::PLAYER_PED_ID(), func_16(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_41, 1)));
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1063765679, 0, 0, 0);
							PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 69, 1);
						}
						iLocal_327 = 2;
					}
				}
				else
				{
					func_40(&iLocal_333);
					if (func_38("SA_BED_IN"))
					{
						UI::CLEAR_HELP(1);
					}
					iLocal_327 = 0;
				}
			}
			break;
		
		case 2:
			func_15();
			func_12(1);
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 && ENTITY::DOES_ENTITY_EXIST(iLocal_41))
			{
				PED::SET_PED_DESIRED_HEADING(PLAYER::PLAYER_PED_ID(), func_16(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_41, 1)));
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 69, 1);
			}
			if (AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 1)
			{
				GAMEPLAY::CLEAR_BIT(&uLocal_325, 0);
				uLocal_331 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_348, Local_351, 2, 0, 0, 1065353216, 0, 1065353216);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, sLocal_334, sLocal_335, 4f, -2f, 261, 0, 1148846080, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uLocal_331);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					iLocal_330 = 1;
				}
				iLocal_327 = 3;
			}
			break;
		
		case 3:
			func_15();
			func_12(1);
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (iLocal_330 == 1)
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			uLocal_332 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(uLocal_331);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_332))
			{
				GAMEPLAY::SET_BIT(&uLocal_325, 0);
				iLocal_327 = 4;
			}
			break;
		
		case 4:
			func_15();
			func_12(1);
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (iLocal_330 == 1)
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_332) > 0.9f)
			{
				GAMEPLAY::CLEAR_BIT(&uLocal_325, 0);
				uLocal_331 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_348, Local_351, 2, 0, 1, 1065353216, 0, 1065353216);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, sLocal_334, sLocal_336, 8f, -2f, 261, 0, 1148846080, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uLocal_331);
				iLocal_327 = 5;
			}
			break;
		
		case 5:
			func_15();
			func_12(1);
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (iLocal_330 == 1)
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			uLocal_332 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(uLocal_331);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_332))
			{
				GAMEPLAY::SET_BIT(&uLocal_325, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_332, 1);
				if (!func_38("SA_BED_OUT"))
				{
					func_11("SA_BED_OUT");
				}
				iLocal_327 = 6;
			}
			break;
		
		case 6:
			func_15();
			func_12(1);
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (iLocal_330 == 1)
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			if (!func_10(1))
			{
				if (!func_38("SA_BED_OUT"))
				{
					func_11("SA_BED_OUT");
				}
			}
			else if (func_38("SA_BED_OUT"))
			{
				UI::CLEAR_HELP(1);
			}
			if (!func_46(PLAYER::PLAYER_ID()) && CONTROLS::IS_CONTROL_JUST_PRESSED(2, 222))
			{
				if (func_38("SA_BED_OUT"))
				{
					UI::CLEAR_HELP(1);
				}
				func_9();
				GAMEPLAY::CLEAR_BIT(&uLocal_325, 0);
				uLocal_331 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_348, Local_351, 2, 0, 0, 1065353216, 0, 1065353216);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, sLocal_334, sLocal_337, 2f, -2f, 261, 0, 1148846080, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uLocal_331);
				iLocal_327 = 8;
			}
			break;
		
		case 7:
			if ((!func_8() && INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_338))) && iLocal_330 == 1)
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			if (((INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_338)) && !func_8()) && !func_6()) && Global_1312467.f_8 == 0)
			{
				bLocal_329 = true;
				GAMEPLAY::CLEAR_BIT(&uLocal_325, 0);
				uLocal_331 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_348, Local_351, 2, 0, 0, 1065353216, 0, 1065353216);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, sLocal_334, sLocal_337, 1000f, -2f, 261, 0, 1148846080, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uLocal_331);
				iLocal_327 = 8;
			}
			break;
		
		case 8:
			if (iLocal_330 == 1)
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			if (!bLocal_329)
			{
				func_15();
				func_12(1);
				UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			}
			uLocal_332 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(uLocal_331);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_332))
			{
				GAMEPLAY::SET_BIT(&uLocal_325, 0);
				func_5(5);
				iLocal_327 = 9;
			}
			break;
		
		case 9:
			func_15();
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (iLocal_330 == 1)
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_332))
			{
				GAMEPLAY::CLEAR_BIT(&uLocal_325, 0);
				func_4();
				if (iLocal_36)
				{
					func_27(PLAYER::PLAYER_ID(), 1, 0, 0);
					iLocal_36 = 0;
				}
				func_3(0);
				func_17(0, 1, 1, 0, 0, 0);
				iLocal_327 = 0;
				Global_1573337 = -1;
				iLocal_330 = 0;
			}
			break;
	}
}

void func_3(int iParam0)
{
	if (!Global_2409287 == iParam0)
	{
		Global_2409287.f_1 = 0;
	}
	Global_2409287 = iParam0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2409287.f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_4()
{
	Global_2439138.f_1156.f_10 = 0;
}

void func_5(int iParam0)
{
	if (iParam0 == func_73())
	{
		Global_2409287.f_19 = 1;
	}
}

int func_6()
{
	if (func_7() == 1 || func_7() == 4)
	{
		return 1;
	}
	return 0;
}

int func_7()
{
	return Global_1312467.f_18;
}

int func_8()
{
	if (func_7() == 3 || func_7() == 2)
	{
		return 1;
	}
	return 0;
}

void func_9()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (iLocal_357 == 1)
		{
			CONTROLS::_0x643ED62D5EA3BEBD();
			iLocal_357 = 0;
		}
	}
}

bool func_10(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

void func_11(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

void func_12(bool bParam0)
{
	if (bParam0)
	{
		func_14();
	}
	func_13(4, -1);
	func_13(6, -1);
	func_13(7, -1);
	func_13(3, -1);
	func_13(1, -1);
	func_13(2, -1);
	func_13(11, -1);
	func_13(13, -1);
	func_13(14, -1);
	func_13(16, -1);
}

void func_13(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1377170.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1377170.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_14()
{
	Global_2537071.f_4532 = 0;
}

void func_15()
{
	Global_22211.f_6 = 1;
}

var func_16(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return GAMEPLAY::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_17(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_26(1);
		UI::_0xA8FDB297A8D25FBA();
		UI::_0xFDB423997FA30340();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_25())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_24(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_26(0);
		UI::_0xE1CD1E48E025E661();
		Global_61518 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_24(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_22(PLAYER::PLAYER_ID())) && !func_19(PLAYER::PLAYER_ID(), 0)) && !func_18()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_22(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_76620 = 0;
	}
}

bool func_18()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 14);
}

bool func_19(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_20(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_20(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_21();
	}
	if (Global_1312857[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_21()
{
	return Global_1312745;
}

int func_22(int iParam0)
{
	if (func_19(iParam0, 0))
	{
		return 1;
	}
	if (func_23())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_23()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

int func_24(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = 0;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_25()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_26(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_7356, 13);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_7356, 13);
	}
}

void func_27(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (SCRIPT::_GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (func_36())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_35())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0))
			{
				return;
			}
			uVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else if (bVar14 || (!func_19(PLAYER::PLAYER_ID(), 0) && !func_23()))
				{
					ENTITY::SET_ENTITY_VISIBLE(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_2425662[iParam0].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_32(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_31(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(uVar27, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(uVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(uVar27, false);
					}
					ENTITY::_SET_ENTITY_REGISTER(uVar27, 1);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(uVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(uVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				unk_0x6BC97F4F4BB3C04B(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(uVar27) && PED::_0x7350823473013C02(uVar27))
				{
					PED::_0x4668D80430D6C299(uVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(uVar27, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_30();
					func_29();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2425662[iParam0].f_245 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405072.f_2672)
				{
					Global_2405072.f_2672 = 0;
				}
			}
			else
			{
				if (!func_31(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(uVar27, !bVar15, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(uVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(uVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_REGISTER(uVar27, 1);
						}
					}
					if (func_28(Global_4456448.f_232883))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uVar27, true);
					}
				}
				if (Global_1312854)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(uVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(uVar27) && !PED::IS_PED_IN_ANY_VEHICLE(uVar27, 0))
					{
						AI::CLEAR_PED_TASKS_IMMEDIATELY(uVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_28(int iParam0)
{
	return iParam0 == 17;
}

void func_29()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { Var0 };
}

void func_30()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[PLAYER::PLAYER_ID()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_31(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = AI::GET_SCRIPT_TASK_STATUS(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_32(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::_NETWORK_GET_PED_PLAYER(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_34();
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_2359302.f_67, 1))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::_0x2A2173E46DAECD12(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				GAMEPLAY::SET_BIT(&(Global_2359302.f_67), 1);
			}
		}
		if (func_19(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::_0x419594E137637120(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		UI::KEY_HUD_COLOUR(iParam0, iParam1);
		func_33(-2008016205, iParam0);
	}
}

void func_33(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_34()
{
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = CAM::_0xEE778F8C7E1142E2(iVar0);
				iVar0++;
			}
			GAMEPLAY::SET_BIT(&(Global_2359302.f_67), 2);
			GAMEPLAY::SET_BIT(&(Global_2359302.f_67), 0);
		}
	}
}

int func_35()
{
	if (func_7() == 0)
	{
		return 1;
	}
	return 0;
}

int func_36()
{
	if (Global_1590535[PLAYER::PLAYER_ID()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

void func_37()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (iLocal_357 == 0)
		{
			CONTROLS::_0x3D42B92563939375("SAFEHOUSE ACTIVITY");
			iLocal_357 = 1;
		}
	}
}

bool func_38(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_39()
{
	Global_2439138.f_1156.f_10 = 1;
}

void func_40(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_41(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0])
		{
			Global_42151[iVar0].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_41(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42151[iVar0].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_42(int iParam0, bool bParam1)
{
	iVar0 = func_41(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_43(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0] == 1 && Global_42151[iVar0].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42151[iVar0].f_29)
				{
					return 0;
				}
			}
			Global_42151[iVar0].f_5 = 1;
			Global_42151[iVar0].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42151[iVar0] == 0)
			{
			}
			if (Global_42151[iVar0].f_7)
			{
			}
		}
	}
	return 0;
}

int func_43(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_7356, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_44(bool bParam0, bool bParam1, bool bParam2)
{
	if (GAMEPLAY::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_45(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(1974937116) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_40(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42151[iVar0])
		{
			Global_42151[iVar0] = 1;
			Global_42151[iVar0].f_1 = Global_42352;
			Global_42352++;
			Global_42151[iVar0].f_4 = 0;
			Global_42151[iVar0].f_29 = 0;
			Global_42151[iVar0].f_5 = 0;
			Global_42151[iVar0].f_2 = iParam1;
			StringCopy(&(Global_42151[iVar0].f_8), sParam2, 16);
			Global_42151[iVar0].f_6 = iParam3;
			Global_42151[iVar0].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_42151[iVar0].f_7 = 0;
			Global_42151[iVar0].f_3 = iParam5;
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_42151[iVar0].f_12 = 1;
				StringCopy(&(Global_42151[iVar0].f_13), sParam4, 64);
				Global_42151[iVar0].f_30 = iParam6;
			}
			else
			{
				Global_42151[iVar0].f_12 = 0;
				Global_42151[iVar0].f_30 = 0;
			}
			*iParam0 = Global_42151[iVar0].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_46(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1377170.f_241.f_136[func_48(9)][iParam0], func_47(9));
}

int func_47(int iParam0)
{
	return (iParam0 % 32);
}

int func_48(int iParam0)
{
	return (iParam0 / 32);
}

int func_49()
{
	iVar9 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
	if (iVar9 > 0)
	{
		iVar10 = 0;
		while (iVar10 <= 7)
		{
			if (!PED::IS_PED_INJURED(uVar0[iVar10]))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uVar0[iVar10], Local_342, Local_345, 2f, 0, 1, 0))
				{
					return 0;
				}
			}
			iVar10++;
		}
	}
	return 1;
}

int func_50(struct<3> Param0, float fParam3, var uParam4, var uParam5)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (!FIRE::IS_EXPLOSION_IN_SPHERE(-1, Param0, 2f))
			{
				if ((((CAM::IS_GAMEPLAY_CAM_RENDERING() && !CUTSCENE::IS_CUTSCENE_PLAYING()) && !CAM::IS_CINEMATIC_CAM_RENDERING()) && !func_43(0)) && !func_53())
				{
					if ((Global_95672 && Global_95673) || func_52())
					{
						return 0;
					}
					if (func_51(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0, fParam3, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_51(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (GAMEPLAY::ABSF((Param0.x - Param3.x)) <= fParam6)
		{
			if (GAMEPLAY::ABSF((Param0.y - Param3.y)) <= fParam6)
			{
				if (GAMEPLAY::ABSF((Param0.z - Param3.z)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (GAMEPLAY::ABSF((Param0.x - Param3.x)) <= fParam6)
	{
		if (GAMEPLAY::ABSF((Param0.y - Param3.y)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_52()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

int func_53()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar2, -1);
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!PED::IS_PED_INJURED(uVar2[iVar1]))
		{
			if (bLocal_35)
			{
				if (ENTITY::GET_ENTITY_MODEL(uVar2[iVar1]) == 225514697)
				{
					if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uVar2[iVar1], 1), 1) < 3f)
					{
						return 1;
					}
				}
			}
			if (!bLocal_35 && !bLocal_34)
			{
				if (ENTITY::GET_ENTITY_MODEL(uVar2[iVar1]) == -1692214353)
				{
					if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uVar2[iVar1], 1), 1) < 3f)
					{
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_54(int iParam0)
{
	if ((((((GAMEPLAY::IS_BIT_SET(Global_1573336, iParam0) || Global_1573337 != -1) || func_59()) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID())) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())) || func_58()) || func_55(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_55(int iParam0)
{
	if (func_56())
	{
		return 1;
	}
	return 0;
}

int func_56()
{
	if (func_57() != -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_57()
{
	return Global_2460709;
}

int func_58()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_59()
{
	if (Global_4254512.f_910 == 1)
	{
		return 1;
	}
	return 0;
}

int func_60()
{
	STREAMING::REQUEST_ANIM_DICT(sLocal_334);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_334))
	{
		return 0;
	}
	iLocal_328 = 1;
	return 1;
}

int func_61()
{
	func_69(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_68())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_67())
	{
		return 1;
	}
	if (func_66(159))
	{
		if (!func_65())
		{
			return 1;
		}
	}
	if (func_66(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_62() != 0)
	{
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_62()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_62()
{
	switch (func_64())
	{
		case 0:
			return func_63();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_63()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_64()
{
	return Global_30768;
}

bool func_65()
{
	return Global_2450632.f_598;
}

int func_66(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_67()
{
	return Global_2460680;
}

bool func_68()
{
	return Global_2450632.f_593;
}

void func_69(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_70(iVar0);
					break;
				
				case 589125870:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 4);
					if (Var4.z == 653923311)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_70(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_72(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_71(uVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(uVar4, Var0.z);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_71(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_72(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2439138.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_73()
{
	return Global_2409287;
}

int func_74(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_76();
			}
			else
			{
				return 0;
			}
		}
		if (!func_75())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_76();
					}
					else
					{
						return 0;
					}
				}
				if (func_68())
				{
					if (!bParam2)
					{
						func_76();
					}
					else
					{
						return 0;
					}
				}
				if (func_66(157))
				{
					if (!bParam2)
					{
						func_76();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_76();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_76();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_76();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_75()
{
	return Global_1312854;
}

void func_76()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_77()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (GAMEPLAY::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_78()
{
	if (Global_95666 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

int func_79(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_80(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_80(int iParam0)
{
	return func_81(iParam0, Global_41431);
}

int func_81(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_82()
{
	if (iLocal_333 > -1)
	{
		func_40(&iLocal_333);
	}
	if (func_38("SA_BED_IN") || func_38("SA_BED_OUT"))
	{
		UI::CLEAR_HELP(1);
	}
	func_9();
	AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
	if (iLocal_328)
	{
		STREAMING::REMOVE_ANIM_DICT(sLocal_334);
	}
	func_4();
	if (!func_22(PLAYER::PLAYER_ID()) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		func_27(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	func_76();
}

int func_83()
{
	if (func_84())
	{
		return 0;
	}
	return 1;
}

bool func_84()
{
	return Global_2391056 == 0;
}

