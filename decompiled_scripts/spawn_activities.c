#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = -1;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
#endregion

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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_379())
		{
			func_376();
		}
		if (func_366())
		{
			func_376();
		}
		switch (iLocal_118)
		{
			case 0:
				if (Global_2409287.f_27 && Global_1316769 == -1)
				{
				}
				else
				{
					if (!Global_2409287.f_16)
					{
						func_53();
					}
					if (!Global_2409287.f_15)
					{
						func_26();
					}
					if (func_19())
					{
						iLocal_118 = 1;
					}
				}
				break;
			
			case 1:
				if (func_1())
				{
					func_376();
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_1()
{
	int iVar0;
	
	if (Global_2409287.f_16)
	{
		if (((!NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !CUTSCENE::IS_CUTSCENE_PLAYING()) && !func_18()) && !func_13(PLAYER::PLAYER_ID()))
		{
			NETWORK::SET_LOCAL_PLAYER_VISIBLE_LOCALLY(false);
		}
		if (func_12())
		{
			if (!iLocal_119)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				}
				else
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
						ENTITY::APPLY_FORCE_TO_ENTITY(iVar0, 1, 0f, 0f, -1f, 0f, 0f, 0f, 0, true, true, true, false, true);
						TASK::TASK_VEHICLE_DRIVE_WANDER(PLAYER::PLAYER_PED_ID(), iVar0, 20f, 786603);
						iLocal_121 = 1;
					}
				}
				iLocal_119 = 1;
			}
		}
		func_9();
		if (func_8(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (!Global_2409287.f_31)
			{
				Global_2409287.f_32 = NETWORK::GET_NETWORK_TIME();
				Global_2409287.f_31 = 1;
			}
			switch (Global_2409287)
			{
				case 0:
					if (!Global_2409287.f_17)
					{
						Global_2409287.f_32 = NETWORK::GET_NETWORK_TIME();
						Global_2409287.f_17 = 1;
					}
					if (func_6() || func_5())
					{
						if (Global_2409287.f_27)
						{
							if (CAM::DOES_CAM_EXIST(iLocal_116))
							{
								CAM::_RENDER_FIRST_PERSON_CAM(false, 0f, 3, 0);
							}
							if (CAM::DOES_CAM_EXIST(iLocal_116))
							{
								CAM::DESTROY_CAM(iLocal_116, true);
							}
						}
						return 1;
					}
					break;
				
				case 1:
					if ((func_6() || !func_4(-258271821)) || func_5())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, true);
						}
						Global_2409287.f_10 = 1;
						iLocal_121 = 0;
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						return 1;
					}
					break;
				
				case 2:
					if ((func_6() || !func_4(-1146898486)) || func_5())
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						iLocal_121 = 0;
						return 1;
					}
					else if (Global_2409287.f_30 > 0)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							TASK::SET_NEXT_DESIRED_MOVE_STATE(1f);
							TASK::TASK_WANDER_STANDARD(PLAYER::PLAYER_PED_ID(), 40000f, 0);
						}
					}
					break;
				
				case 7:
					STREAMING::REQUEST_ANIM_DICT("GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED");
					STREAMING::REQUEST_ANIM_DICT("get_up@directional@movement@from_seated@standard");
					if (STREAMING::HAS_ANIM_DICT_LOADED("GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED"))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front", 3))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "get_up@directional@movement@from_seated@standard", "get_up_l_0", 3))
							{
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front", 8f, -8f, -1, 2, 0f, false, false, false);
							}
							else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "get_up@directional@movement@from_seated@standard", "get_up_l_0") > 0.85f)
							{
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								STREAMING::REMOVE_ANIM_DICT("GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED");
								STREAMING::REMOVE_ANIM_DICT("get_up@directional@movement@from_seated@standard");
								iLocal_121 = 0;
								if (Global_2409287.f_21)
								{
									CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(4);
									Global_2409287.f_21 = 0;
								}
								func_3(10000);
								if (Global_2405072.f_2911)
								{
									func_2();
									Global_2405072.f_2911 = 0;
								}
								return 1;
							}
						}
						else if ((ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front") > 0.85f && STREAMING::HAS_ANIM_DICT_LOADED("get_up@directional@movement@from_seated@standard")) && !CAM::IS_SCREEN_FADED_OUT())
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "get_up@directional@movement@from_seated@standard", "get_up_l_0", 8f, -8f, -1, 2, 0f, false, false, false);
						}
					}
					break;
				
				case 3:
					return 1;
					break;
				
				case 4:
				case 5:
					if (Global_2409287.f_19)
					{
						return 1;
					}
					break;
				
				default:
					return 1;
					break;
				}
			}
	}
	return 0;
}

void func_2()
{
	struct<28> Var0;
	
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2413899.f_6))
	{
		if (!Global_2413899.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413899 = { Var0 };
	Global_2413899.f_6 = -1;
}

void func_3(int iParam0)
{
	int iVar0;
	
	if (!Global_42562)
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	Global_42564 = (iVar0 + iParam0);
	Global_42565 = iParam0;
}

int func_4(int iParam0)
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), iParam0);
	if (!iVar0 == 7)
	{
		return 1;
	}
	return 0;
}

int func_5()
{
	if (Global_2409287.f_31)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2409287.f_32)) > 6000)
		{
			return 1;
		}
	}
	return 0;
}

int func_6()
{
	if (func_7(0))
	{
		return 1;
	}
	return 0;
}

int func_7(int iParam0)
{
	if (PAD::_0xD7D22F5592AED8BA(iParam0) < 2000)
	{
		return 1;
	}
	return 0;
}

int func_8(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
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

void func_9()
{
	if (Global_2409287 == 0)
	{
		if (Global_2409287.f_27)
		{
			if (func_11())
			{
				if (!CAM::DOES_CAM_EXIST(iLocal_116))
				{
					if (CAM::DOES_CAM_EXIST(iLocal_117))
					{
						CAM::DESTROY_CAM(iLocal_117, false);
					}
					iLocal_116 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					func_10(Global_2409287.f_26, iLocal_116);
					CAM::SHAKE_CAM(iLocal_116, "HAND_SHAKE", 0.2f);
					CAM::SET_CAM_ACTIVE(iLocal_116, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
			}
		}
	}
}

void func_10(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			CAM::SET_CAM_COORD(iParam1, -1589.074f, -3015.353f, -74.8535f);
			CAM::SET_CAM_ROT(iParam1, -15.8449f, 0f, 78.0001f, 2);
			CAM::SET_CAM_FOV(iParam1, 25.1368f);
			break;
		
		case 2:
			CAM::SET_CAM_COORD(iParam1, -1589.807f, -3008.426f, -74.9934f);
			CAM::SET_CAM_ROT(iParam1, -17.1168f, 0f, 104.7282f, 2);
			CAM::SET_CAM_FOV(iParam1, 34.7654f);
			break;
		
		case 4:
			CAM::SET_CAM_COORD(iParam1, -1592.237f, -3008.188f, -78.166f);
			CAM::SET_CAM_ROT(iParam1, -3.025f, 0f, 121.1804f, 2);
			CAM::SET_CAM_FOV(iParam1, 35.9f);
			break;
	}
}

int func_11()
{
	switch (Global_2409287.f_26)
	{
		case 0:
		case 2:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_12()
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		return 0;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() > 9)
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_13(int iParam0)
{
	if (func_15(iParam0, 0))
	{
		return 1;
	}
	if (func_14())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_14()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_15(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_16(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0 /*876*/].f_211 == 8;
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

int func_16(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_17();
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

int func_17()
{
	return Global_1312745;
}

bool func_18()
{
	return Global_98796.f_346 > 0;
}

int func_19()
{
	if (Global_2409287.f_18)
	{
		func_25();
		return 1;
	}
	if (func_24() || func_23())
	{
		func_25();
		return 1;
	}
	if (((((func_22() && Global_2409287 != 6) && Global_2409287 != 7) && !Global_2409287.f_27) && !Global_2409287.f_28) && !Global_2409287.f_29)
	{
		func_21(0);
		func_25();
		return 1;
	}
	if (Global_2409287.f_16 && Global_2409287.f_15)
	{
		return 1;
	}
	else if (!Global_2409287.f_20)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("spawn_activities")) == 0)
		{
			if (func_20("spawn_activities", 1424))
			{
				Global_2409287.f_20 = 1;
			}
		}
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("spawn_activities")) == 0)
	{
		func_25();
		return 1;
	}
	if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2409287.f_3)) > 120000)
	{
		func_25();
		return 1;
	}
	MISC::SET_BIT(&(Global_1671196[1]), 22);
	return 0;
}

int func_20(char* sParam0, int iParam1)
{
	int iVar0;
	
	if (SCRIPT::DOES_SCRIPT_EXIST(sParam0))
	{
		SCRIPT::REQUEST_SCRIPT(sParam0);
		if (SCRIPT::HAS_SCRIPT_LOADED(sParam0))
		{
			if (iParam1 <= 0)
			{
				iParam1 = 512;
			}
			iVar0 = SYSTEM::START_NEW_SCRIPT(sParam0, iParam1);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
			return 1;
		}
	}
	return 0;
}

void func_21(int iParam0)
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

var func_22()
{
	return Global_2450632.f_745;
}

var func_23()
{
	return Global_2461933;
}

var func_24()
{
	return Global_1312873;
}

void func_25()
{
	Global_2409287.f_23 = -1;
	Global_2409287.f_24 = -1;
}

void func_26()
{
	if (!Global_2409287.f_23 > -1 || !Global_2409287.f_24 > -1)
	{
		Global_2409287.f_15 = 1;
	}
	else
	{
		if (Global_2409287.f_25 == 0)
		{
			if ((!func_45(Global_2409287.f_23, Global_2409287.f_24) || func_43(func_44(Global_2409287.f_23, Global_2409287.f_24), -1, 0) > 0) || Global_2409287.f_27)
			{
				if (func_45(Global_2409287.f_23, Global_2409287.f_24))
				{
					if (func_43(func_44(Global_2409287.f_23, Global_2409287.f_24), -1, 0) < 0)
					{
						func_41(func_44(Global_2409287.f_23, Global_2409287.f_24), 0, -1, 1, 0);
					}
				}
				if (Global_2409287.f_27)
				{
					if (func_40())
					{
						func_37();
					}
					func_28(Global_2409287.f_23, Global_2409287.f_24, 1, 1, func_36(), 1, 0, 0, 0, 0, 0, 1);
				}
				else
				{
					func_28(Global_2409287.f_23, Global_2409287.f_24, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1);
				}
				Global_2409287.f_25++;
			}
			else
			{
				Global_2409287.f_15 = 1;
			}
		}
		if (Global_2409287.f_25 == 1)
		{
			if ((func_27() || (Global_4254512 == -1 && Global_4254512.f_1 == -1)) || Global_4254512.f_3 == 0)
			{
				Global_2409287.f_25++;
				Global_2409287.f_15 = 1;
			}
		}
	}
}

int func_27()
{
	if (Global_4254512.f_910 == 1)
	{
		return 1;
	}
	return 0;
}

void func_28(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	func_35(iParam0, iParam1);
	if (bParam3)
	{
		if (func_34(&Global_4254512))
		{
			func_33(&Global_4254512);
		}
	}
	Global_4254512.f_3 = 1;
	if (iParam4 || func_32(iParam0, iParam1))
	{
		Global_4254512.f_4 = 1;
	}
	Global_4254512.f_9 = iParam2;
	Global_4254512.f_13 = iParam5;
	Global_4254512.f_14 = iParam6;
	Global_4254512.f_15 = iParam9;
	Global_4254512.f_19 = iParam7;
	Global_4254512.f_16 = iParam10;
	Global_4254512.f_976 = iParam8;
	Global_4254512.f_17 = bParam11;
	if (MISC::IS_BIT_SET(Global_7358, 3))
	{
		Global_4254512.f_5 = 1;
	}
	if (bParam11)
	{
		if (func_30(iParam0, iParam1))
		{
			func_29(&Global_2513746);
		}
	}
}

void func_29(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_30(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 55:
					if (func_31(&Global_2513746))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

bool func_31(var uParam0)
{
	return uParam0->f_1;
}

int func_32(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return 0;
					break;
				
				default:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_33(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_43(func_44(2, 58), -1, 0);
	iVar1 = func_43(func_44(2, 57), -1, 0);
	iVar2 = func_43(func_44(2, 56), -1, 0);
	if (iVar0 > 0)
	{
		uParam0->f_1 = 58;
	}
	else if (iVar1 > 0)
	{
		uParam0->f_1 = 57;
	}
	else if (iVar2 > 0)
	{
		uParam0->f_1 = 56;
	}
}

int func_34(var uParam0)
{
	if (*uParam0 == 2)
	{
		if ((uParam0->f_1 == 56 || uParam0->f_1 == 57) || uParam0->f_1 == 58)
		{
			return 1;
		}
	}
	return 0;
}

void func_35(var uParam0, var uParam1)
{
	Global_4254512 = uParam0;
	Global_4254512.f_1 = uParam1;
}

int func_36()
{
	switch (Global_2409287.f_26)
	{
		case 0:
		case 2:
			return 0;
		
		case 1:
		case 3:
			return 1;
		
		case 4:
			switch (Global_1316767)
			{
				case 3:
				case 4:
					return 1;
				
				default:
			}
		
		default:
	}
	return 0;
}

void func_37()
{
	int iVar0;
	
	switch (Global_2409287.f_26)
	{
		case 0:
		case 2:
			Global_2409287.f_24 = 36;
			break;
		
		case 4:
			switch (Global_1316767)
			{
				case 0:
				case 1:
					Global_2409287.f_24 = 36;
					break;
				
				case 2:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_39());
					switch (iVar0)
					{
						case 0:
							Global_2409287.f_24 = 30;
							break;
						
						case 1:
							Global_2409287.f_24 = 32;
							break;
						
						case 2:
							Global_2409287.f_24 = 33;
							break;
						
						case 3:
							Global_2409287.f_24 = 35;
							break;
						
						case 4:
							Global_2409287.f_24 = 37;
							break;
						
						case 5:
							Global_2409287.f_24 = 38;
							break;
					}
					break;
				
				case 3:
				case 4:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_38());
					switch (iVar0)
					{
						case 0:
							Global_2409287.f_24 = 36;
							break;
						
						case 1:
							Global_2409287.f_24 = 30;
							break;
						
						case 2:
							Global_2409287.f_24 = 32;
							break;
						
						case 3:
							Global_2409287.f_24 = 33;
							break;
						
						case 4:
							Global_2409287.f_24 = 35;
							break;
						
						case 5:
							Global_2409287.f_24 = 37;
							break;
						
						case 6:
							Global_2409287.f_24 = 38;
							break;
					}
					break;
			}
			break;
	}
}

int func_38()
{
	int iVar0;
	
	iVar0 = 7;
	return iVar0;
}

int func_39()
{
	int iVar0;
	
	iVar0 = 6;
	return iVar0;
}

int func_40()
{
	if (Global_2409287.f_24 == 2)
	{
		switch (Global_2409287.f_24)
		{
			case 30:
			case 32:
			case 33:
			case 34:
			case 35:
			case 36:
			case 37:
			case 38:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_41(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_42(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_42(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_17();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2548146 = 1;
		}
	}
	return iVar0;
}

int func_43(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_42(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_44(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return 1097;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 52:
					return 1097;
					break;
				
				case 53:
					return 62;
					break;
				
				case 54:
					return 63;
					break;
				
				case 55:
					return 7867;
					break;
				
				case 56:
					return 1275;
					break;
				
				case 57:
					return 1276;
					break;
				
				case 58:
					return 1277;
					break;
			}
			break;
	}
	return 0;
}

int func_45(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 52:
					if ((func_51(PLAYER::PLAYER_ID()) != -1 && func_49(func_51(PLAYER::PLAYER_ID()), 11)) && func_47() == 0)
					{
						return !func_46(PLAYER::PLAYER_ID());
					}
					return 1;
					break;
				
				case 53:
				case 54:
				case 55:
				case 56:
				case 57:
				case 58:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_46(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310.f_3, 13);
}

int func_47()
{
	return func_48(PLAYER::PLAYER_ID());
}

int func_48(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2425662[iParam0 /*421*/].f_310.f_3, 28, 31);
}

bool func_49(int iParam0, int iParam1)
{
	return func_50(iParam0) == iParam1;
}

int func_50(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("MPSV_LP0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
	}
	return -1;
}

int func_51(int iParam0)
{
	if (iParam0 != func_52())
	{
		if (func_8(iParam0, 1, 1))
		{
			return Global_2425662[iParam0 /*421*/].f_310.f_5;
		}
		else if (((Global_1312877 || Global_2405072.f_2671) && iParam0 == PLAYER::PLAYER_ID()) && func_8(iParam0, 1, 0))
		{
			return Global_2425662[iParam0 /*421*/].f_310.f_5;
		}
	}
	return -1;
}

int func_52()
{
	return -1;
}

void func_53()
{
	int iVar0;
	
	if (!Global_2409287 > -1)
	{
		Global_2409287.f_16 = 1;
	}
	else
	{
		switch (Global_2409287)
		{
			case 0:
				switch (Global_2409287.f_1)
				{
					case 0:
						if (func_8(PLAYER::PLAYER_ID(), 0, 0))
						{
							Global_2409287.f_16 = 1;
						}
						break;
				}
				break;
			
			case 1:
				if (Global_2409287.f_1 == 0)
				{
					if (func_327())
					{
						Global_2409287.f_2 = 0;
						Global_2409287.f_8 = 1;
						Global_2409287.f_11 = 1;
						Global_2409287.f_12 = 1;
						Global_2409287.f_9 = 1;
						Global_2409287.f_1++;
					}
					else
					{
						Global_2409287.f_16 = 1;
					}
				}
				if (Global_2409287.f_1 == 1)
				{
					if (func_327())
					{
						if (func_8(PLAYER::PLAYER_ID(), 0, 0))
						{
							if (func_325(0))
							{
								Global_2409287.f_1++;
							}
						}
					}
					else
					{
						Global_2409287.f_16 = 1;
					}
				}
				if (Global_2409287.f_1 == 2)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						Global_2409287.f_16 = 1;
					}
				}
				break;
			
			case 2:
				if (func_8(PLAYER::PLAYER_ID(), 0, 0))
				{
					if (Global_2409287.f_30 > 0)
					{
						TASK::SET_NEXT_DESIRED_MOVE_STATE(2f);
						TASK::TASK_WANDER_STANDARD(PLAYER::PLAYER_PED_ID(), 40000f, 0);
					}
					else
					{
						TASK::TASK_WANDER_STANDARD(PLAYER::PLAYER_PED_ID(), 40000f, 0);
					}
					iLocal_121 = 1;
					Global_2409287.f_16 = 1;
				}
				break;
			
			case 7:
				if (Global_2409287.f_39)
				{
					iLocal_121 = 1;
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(160f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					Global_2409287.f_16 = 1;
					Global_2409287.f_39 = 0;
				}
				else
				{
					if (Global_2405072.f_2908)
					{
						if (!Global_2405072.f_2909 && !Global_2405072.f_2910)
						{
							if ((func_324() && func_322() == 0) && func_157(PLAYER::PLAYER_ID(), 243, 0) == -1)
							{
								func_142(10);
								Global_2405072.f_2909 = 1;
							}
							else
							{
								Global_2405072.f_2910 = 1;
							}
						}
						else
						{
							if (!Global_2405072.f_2910)
							{
								if (func_141(PLAYER::PLAYER_ID()) == 243)
								{
									iVar0 = -1;
									switch (func_140(PLAYER::PLAYER_ID()))
									{
										case 31:
											iVar0 = 0;
											break;
										
										case 32:
											iVar0 = 1;
											break;
										
										case 33:
											iVar0 = 2;
											break;
										
										case 34:
											iVar0 = 3;
											break;
									}
									func_128(&(Global_2405072.f_2678), iVar0);
									func_109(PLAYER::PLAYER_PED_ID(), 0, 3);
								}
								else if (!func_107(PLAYER::PLAYER_ID(), 243))
								{
									func_128(&(Global_2405072.f_2678), -1);
								}
								else
								{
									return;
								}
							}
							else
							{
								func_128(&(Global_2405072.f_2678), MISC::GET_RANDOM_INT_IN_RANGE(0, 4));
							}
							Global_2405072.f_2910 = 0;
							Global_2405072.f_2908 = 0;
							Global_2405072.f_2909 = 0;
						}
					}
					if (func_8(PLAYER::PLAYER_ID(), 0, 0))
					{
						STREAMING::REQUEST_ANIM_DICT("GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED");
						if (STREAMING::HAS_ANIM_DICT_LOADED("GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED"))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front", 3))
							{
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front", 1000f, -8f, -1, 2, 0.1f, false, false, false);
								iLocal_121 = 1;
							}
							else
							{
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(160f);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
								Global_2409287.f_16 = 1;
							}
						}
					}
				}
				break;
			
			case 3:
			case 4:
			case 5:
			case 6:
				if (func_8(PLAYER::PLAYER_ID(), 0, 0))
				{
					if (Global_2409287.f_1 == 0)
					{
						func_106(Global_2409287);
						if ((!Global_2405072.f_2671 && !func_105()) && !func_104())
						{
							Global_2405072.f_2668 = 1;
						}
						iLocal_122 = NETWORK::GET_NETWORK_TIME();
						Global_2409287.f_1++;
					}
					if (Global_2409287.f_1 == 1)
					{
						if (!func_102(Global_2409287) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_122) > 20000)
						{
							Global_1676377.f_4410 = -1;
							Global_2409287.f_16 = 1;
							func_101();
						}
						else
						{
							Global_1315808 = 1;
							if ((!Global_2405072.f_2671 && !func_105()) && !func_104())
							{
								func_54();
							}
							if (!iLocal_120)
							{
								BRAIN::ENABLE_SCRIPT_BRAIN_SET(8);
								BRAIN::ENABLE_SCRIPT_BRAIN_SET(2);
								iLocal_120 = 1;
							}
						}
					}
				}
				break;
			
			default:
				break;
			}
	}
}

void func_54()
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 19400;
	if ((((((MISC::IS_BIT_SET(Global_1590184.f_22, 5) || MISC::IS_BIT_SET(Global_1590184.f_22, 6)) || MISC::IS_BIT_SET(Global_1590184.f_22, 8)) || MISC::IS_BIT_SET(Global_1590184.f_22, 7)) || MISC::IS_BIT_SET(Global_1590184.f_22, 9)) || MISC::IS_BIT_SET(Global_1590184.f_22, 20)) || func_100())
	{
		if (!MISC::IS_BIT_SET(Global_1048576.f_8, 0))
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_property_int")) <= 0 && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_PROPERTY_INT", Global_1048576.f_1304, true, 0))
			{
				SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
				if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
				{
					SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
					MISC::SET_BIT(&(Global_1048576.f_8), 0);
				}
			}
		}
	}
	else if (Global_2405072.f_2668)
	{
		if (!MISC::IS_BIT_SET(Global_1048576.f_8, 0))
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_property_int")) <= 0 && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_PROPERTY_INT", Global_1048576.f_1304, true, 0))
			{
				SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
				if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
				{
					SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
					MISC::SET_BIT(&(Global_1048576.f_8), 0);
				}
			}
		}
	}
	else if (Global_1590184.f_19 != 0 && func_99(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (!MISC::IS_BIT_SET(Global_1048576.f_8, 0))
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_property_int")) <= 0 && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_PROPERTY_INT", Global_1048576.f_1304, true, 0))
			{
				SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
				if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
				{
					SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
					MISC::SET_BIT(&(Global_1048576.f_8), 0);
				}
			}
		}
	}
	else if (Global_2461152)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_property_int")) <= 0 && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_PROPERTY_INT", Global_1048576.f_1304, true, 0))
		{
			SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
			if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
			{
				SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
				MISC::SET_BIT(&(Global_1048576.f_8), 0);
				Global_2461152 = 0;
			}
		}
	}
	else if (((((((!MISC::IS_BIT_SET(Global_1048576.f_8, 0) && !MISC::IS_BIT_SET(Global_2537071.f_393.f_5, 3)) && (!Global_2405071 || (Global_2405071 && Global_2451426.f_1.f_2828.f_13 > 0))) && !func_98()) && !func_93()) && !func_92()) && !func_91()) && !Global_1312806)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_property_int")) <= 0 && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_PROPERTY_INT", Global_1048576.f_1304, true, 0))
		{
			if (!func_90())
			{
				if (func_86())
				{
					SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
					if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
					{
						SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
						SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
						MISC::SET_BIT(&(Global_1048576.f_8), 0);
						MISC::SET_BIT(&(Global_1590184.f_22), 12);
						return;
					}
					return;
				}
			}
			else
			{
				if (!func_85(Global_1048576.f_1303) && MISC::GET_DISTANCE_BETWEEN_COORDS(func_84(PLAYER::PLAYER_ID()), func_83(Global_1048576.f_1303), true) <= 30f)
				{
					if (func_81(&(Global_1049922[Global_1048576.f_1303 /*1951*/]), 1, 0))
					{
						if (!Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_746)
						{
							SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
							if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
							{
								SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
								SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
								MISC::SET_BIT(&(Global_1048576.f_8), 0);
								MISC::SET_BIT(&(Global_1590184.f_22), 12);
								return;
							}
							return;
						}
					}
					else
					{
						Var1 = { func_84(PLAYER::PLAYER_ID()) };
					}
				}
				if (func_77(Global_1048576.f_1303, 0, 0))
				{
					if (func_68(Global_1048576.f_1303, PLAYER::PLAYER_ID(), 0, 1) || func_81(&(Global_1049922[Global_1048576.f_1303 /*1951*/]), 1, 0))
					{
						if (!Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_746)
						{
							SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
							if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
							{
								SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
								SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
								MISC::SET_BIT(&(Global_1048576.f_8), 0);
								MISC::SET_BIT(&(Global_1590184.f_22), 12);
								return;
							}
							return;
						}
					}
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_84(PLAYER::PLAYER_ID()), func_67(2), true) <= 30f)
				{
					func_66(&Var1, 2);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var1, Var1.f_3, Var1.f_6, false, true, 0))
					{
						if (!Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_746)
						{
							SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
							if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
							{
								SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
								SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
								MISC::SET_BIT(&(Global_1048576.f_8), 0);
								MISC::SET_BIT(&(Global_1590184.f_22), 12);
								return;
							}
							return;
						}
					}
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_84(PLAYER::PLAYER_ID()), func_67(6), true) <= 30f)
				{
					func_66(&Var1, 6);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var1, Var1.f_3, Var1.f_6, false, true, 0))
					{
						if (!Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_746)
						{
							SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
							if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
							{
								SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
								SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
								MISC::SET_BIT(&(Global_1048576.f_8), 0);
								MISC::SET_BIT(&(Global_1590184.f_22), 12);
								return;
							}
							return;
						}
					}
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_84(PLAYER::PLAYER_ID()), func_67(10), true) <= 30f)
				{
					func_66(&Var1, 10);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var1, Var1.f_3, Var1.f_6, false, true, 0))
					{
						if (!Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_746)
						{
							SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
							if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
							{
								SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
								SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
								MISC::SET_BIT(&(Global_1048576.f_8), 0);
								MISC::SET_BIT(&(Global_1590184.f_22), 12);
								return;
							}
							return;
						}
					}
				}
				Global_1048576.f_1303++;
				if (Global_1048576.f_1303 > 126 || MISC::IS_BIT_SET(Global_1048576.f_8, 10))
				{
					Global_1048576.f_1303 = 0;
					Global_1048576.f_1305 = 0;
					if (MISC::IS_BIT_SET(Global_1048576.f_8, 10))
					{
						MISC::CLEAR_BIT(&(Global_1048576.f_8), 10);
					}
					if (Global_2451426.f_1.f_2828.f_13 != 0)
					{
						if ((!func_65() && !func_64()) && !NETWORK::NETWORK_IS_IN_TRANSITION())
						{
							if ((!func_63() && !func_62()) && !func_61())
							{
								if ((!func_60() && !func_59()) && !func_58())
								{
									if (!func_57())
									{
										if (!func_56())
										{
											if (!Global_2451426.f_2846.f_157)
											{
												func_55();
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_55()
{
	Global_2451426.f_1.f_2828.f_13 = 0;
	Global_2451426.f_1.f_2828 = 0;
	Global_2451426.f_1.f_2828.f_1 = 0;
	Global_2451426.f_1.f_2828.f_2 = 0;
	Global_2451426.f_1.f_2828.f_3 = 0;
	Global_2451426.f_1.f_2828.f_4 = 0;
	Global_2451426.f_1.f_2828.f_5 = 0;
	Global_2451426.f_1.f_2828.f_6 = 0;
	Global_2451426.f_1.f_2828.f_7 = 0;
	Global_2451426.f_1.f_2828.f_8 = 0;
	Global_2451426.f_1.f_2828.f_9 = 0;
	Global_2451426.f_1.f_2828.f_10 = 0;
	Global_2451426.f_1.f_2828.f_11 = 0;
	Global_2451426.f_1.f_2828.f_12 = 0;
}

bool func_56()
{
	return Global_2450632.f_648;
}

bool func_57()
{
	return Global_2450632.f_746;
}

bool func_58()
{
	return MISC::IS_BIT_SET(Global_2450632, 20);
}

bool func_59()
{
	return MISC::IS_BIT_SET(Global_2450632, 2);
}

bool func_60()
{
	return MISC::IS_BIT_SET(Global_2450632, 1);
}

bool func_61()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_196 != 0;
}

bool func_62()
{
	return Global_1653538.f_3;
}

bool func_63()
{
	return Global_2450632.f_640;
}

bool func_64()
{
	return Global_2450632.f_591;
}

bool func_65()
{
	return Global_2450632.f_592;
}

struct<8> func_66(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			*uParam0 = { 175.0434f, -998.7965f, -100.2256f };
			uParam0->f_3 = { 175.0878f, -1009.004f, -95.99992f };
			uParam0->f_6 = 14f;
			break;
		
		case 6:
			*uParam0 = { 212.9084f, -999.6776f, -99.99996f };
			uParam0->f_3 = { 189.6844f, -1000.068f, -95.2507f };
			uParam0->f_6 = 16.75f;
			break;
		
		case 10:
			*uParam0 = { 230.0094f, -1009.124f, -100.6539f };
			uParam0->f_3 = { 230.5939f, -964.022f, -94.53618f };
			uParam0->f_6 = 23.5f;
			break;
	}
	return *uParam0;
}

Vector3 func_67(int iParam0)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 2:
			Var0 = { 172.7787f, -1003.21f, -99.9999f };
			break;
		
		case 6:
			Var0 = { 198.6071f, -1000.536f, -100f };
			break;
		
		case 10:
			Var0 = { 227.8602f, -991.1093f, -99.9999f };
			break;
	}
	return Var0;
}

int func_68(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<6> Var0[2];
	
	if (func_76(iParam0) || func_77(iParam0, 0, 0))
	{
		if (func_8(iParam1, 1, 1))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_1049922[iParam0 /*1951*/].f_146.f_47, func_84(PLAYER::PLAYER_ID()), !bParam2) <= 75f)
			{
				func_70(iParam0, 971, &(Var0[0 /*6*/]), func_75(iParam0), 1);
				func_70(iParam0, 972, &(Var0[1 /*6*/]), func_75(iParam0), 1);
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYER_PED(iParam1), Var0[0 /*6*/], Var0[1 /*6*/], Var0[0 /*6*/].f_3.f_2, false, true, 0))
				{
					return 1;
				}
				else if (bParam3)
				{
					return 0;
				}
				if (bParam2)
				{
					if (Var0[0 /*6*/].f_2 < Var0[1 /*6*/].f_2)
					{
						Var0[0 /*6*/].f_2 = (Var0[0 /*6*/].f_2 - 1000f);
					}
					else
					{
						Var0[1 /*6*/].f_2 = (Var0[1 /*6*/].f_2 - 1000f);
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYER_PED(iParam1), Var0[0 /*6*/], Var0[1 /*6*/], 30f, false, true, 0))
					{
						return 1;
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						return 1;
					}
				}
				if (func_69(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_69(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_196, 5);
}

void func_70(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<6> Var0[2];
	struct<3> Var1;
	
	Var0[0 /*6*/] = { func_74(iParam3, bParam4) };
	Var0[1 /*6*/] = { func_74(iParam0, bParam4) };
	*uParam2 = { func_72(iParam1, iParam3) };
	Var1 = { *uParam2 - Var0[0 /*6*/] };
	Var1 = { func_71(Var1, -Var0[0 /*6*/].f_3.f_2) };
	Var1 = { func_71(Var1, Var0[1 /*6*/].f_3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0[1 /*6*/], 0f, Var1) };
	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("MPSV_LP0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 153:
		case 154:
		case 155:
		case 157:
		case 234:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 235:
		case 149:
		case 150:
		case 151:
		case 152:
		case 172:
		case 187:
		case 173:
		case 201:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 300:
		case 301:
		case 302:
		case 303:
		case 304:
		case 306:
		case 305:
		case 308:
		case 309:
		case 312:
		case 313:
		case 314:
		case 315:
		case 316:
		case 317:
		case 318:
		case 319:
		case 320:
		case 321:
		case 322:
		case 323:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 307:
		case 331:
		case 332:
		case 333:
		case 334:
		case 310:
		case 335:
		case 336:
		case 337:
		case 338:
		case 339:
		case 311:
		case 340:
		case 435:
		case 436:
		case 437:
		case 470:
		case 477:
		case 504:
		case 507:
		case 510:
		case 513:
		case 528:
		case 531:
		case 534:
		case 537:
		case 540:
		case 547:
		case 445:
		case 446:
		case 447:
		case 448:
		case 449:
		case 450:
		case 471:
		case 472:
		case 478:
		case 479:
		case 505:
		case 506:
		case 508:
		case 509:
		case 511:
		case 512:
		case 514:
		case 515:
		case 529:
		case 530:
		case 532:
		case 533:
		case 535:
		case 536:
		case 538:
		case 539:
		case 541:
		case 542:
		case 548:
		case 549:
		case 432:
		case 433:
		case 434:
		case 451:
		case 452:
		case 453:
		case 454:
		case 455:
		case 456:
		case 459:
		case 460:
		case 461:
		case 462:
		case 463:
		case 464:
		case 560:
		case 546:
		case 587:
		case 588:
		case 589:
		case 590:
		case 591:
		case 592:
		case 501:
		case 502:
		case 500:
		case 616:
		case 615:
		case 612:
		case 629:
		case 630:
		case 631:
		case 714:
		case 633:
		case 634:
		case 635:
		case 636:
		case 637:
		case 638:
		case 639:
		case 640:
		case 643:
		case 644:
		case 641:
		case 642:
		case 646:
		case 645:
		case 647:
		case 648:
		case 649:
		case 650:
		case 666:
		case 667:
		case 668:
		case 669:
		case 670:
		case 671:
		case 673:
		case 674:
		case 675:
		case 676:
		case 677:
		case 689:
		case 690:
		case 691:
		case 692:
		case 693:
		case 694:
		case 695:
		case 696:
		case 697:
		case 698:
		case 699:
		case 700:
		case 701:
		case 702:
		case 703:
		case 704:
		case 705:
		case 706:
		case 707:
		case 708:
		case 709:
		case 710:
		case 711:
		case 712:
		case 713:
		case 632:
		case 738:
		case 739:
		case 740:
		case 741:
		case 742:
		case 743:
		case 744:
		case 745:
		case 746:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 715:
		case 716:
		case 717:
		case 718:
		case 719:
		case 720:
		case 721:
		case 722:
		case 723:
		case 724:
		case 725:
		case 726:
		case 727:
		case 728:
		case 729:
		case 730:
		case 731:
		case 732:
		case 733:
		case 734:
		case 735:
		case 736:
		case 737:
		case 747:
		case 748:
		case 749:
		case 750:
		case 751:
		case 752:
		case 753:
		case 754:
		case 755:
		case 756:
		case 757:
		case 758:
		case 759:
		case 760:
		case 761:
		case 762:
		case 763:
		case 764:
		case 765:
		case 766:
		case 767:
		case 768:
		case 769:
		case 770:
		case 771:
		case 772:
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
		case 789:
		case 790:
		case 791:
		case 792:
		case 793:
		case 794:
		case 795:
		case 796:
		case 797:
		case 798:
		case 799:
		case 800:
		case 802:
		case 801:
		case 803:
		case 804:
		case 805:
		case 806:
		case 807:
		case 808:
		case 809:
		case 678:
		case 679:
		case 680:
		case 681:
		case 682:
		case 683:
		case 684:
		case 685:
		case 810:
		case 811:
		case 812:
		case 813:
		case 814:
		case 815:
		case 817:
		case 816:
		case 819:
		case 818:
		case 820:
		case 821:
		case 822:
		case 823:
		case 824:
		case 825:
		case 826:
		case 827:
		case 828:
		case 829:
		case 830:
		case 831:
		case 832:
		case 833:
		case 834:
		case 835:
		case 836:
		case 837:
		case 838:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
		case 844:
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 686:
		case 687:
		case 688:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 865:
		case 866:
		case 867:
		case 868:
		case 869:
		case 870:
		case 871:
		case 872:
		case 873:
		case 874:
		case 875:
		case 876:
		case 877:
		case 878:
		case 879:
		case 880:
		case 881:
		case 882:
		case 883:
		case 884:
		case 888:
		case 889:
		case 890:
		case 891:
		case 651:
		case 652:
		case 653:
		case 654:
		case 655:
		case 656:
		case 657:
		case 658:
		case 659:
		case 660:
		case 661:
		case 662:
		case 663:
		case 664:
		case 665:
		case 887:
		case 894:
		case 895:
		case 896:
		case 897:
		case 898:
		case 899:
		case 900:
		case 901:
		case 902:
		case 903:
		case 904:
		case 905:
		case 906:
		case 907:
		case 908:
		case 911:
		case 913:
		case 914:
		case 915:
		case 916:
		case 917:
		case 918:
		case 919:
		case 920:
		case 921:
		case 922:
		case 923:
		case 924:
		case 925:
		case 926:
		case 927:
		case 928:
		case 929:
		case 930:
		case 931:
		case 932:
		case 954:
		case 955:
		case 956:
		case 957:
		case 958:
		case 959:
		case 968:
		case 969:
		case 970:
		case 973:
		case 974:
		case 975:
		case 976:
		case 977:
		case 978:
		case 979:
		case 980:
		case 981:
		case 982:
		case 983:
		case 984:
		case 985:
		case 986:
		case 987:
		case 988:
		case 989:
		case 990:
		case 1008:
		case 1009:
		case 1010:
		case 991:
		case 992:
		case 993:
		case 994:
		case 995:
		case 996:
		case 997:
		case 998:
		case 999:
		case 960:
		case 961:
		case 962:
		case 963:
		case 964:
		case 965:
		case 966:
		case 967:
		case 1000:
		case 1001:
		case 1002:
		case 1003:
		case 1004:
		case 1005:
		case 1006:
		case 1007:
		case 1011:
		case 1012:
		case 1013:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
}

Vector3 func_71(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	Var0.x = ((Param0.x * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.x * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_72(int iParam0, int iParam1)
{
	struct<6> Var0;
	bool bVar1;
	int iVar2;
	
	iVar2 = 0;
	if (func_73(iParam1, &bVar1))
	{
		iVar2 = 1;
	}
	if (iVar2 && MISC::_GET_BASE_ELEMENT_METADATA(&Var0, &(Var0.f_3), iParam0, bVar1))
	{
		return Var0;
	}
	return Var0;
}

int func_73(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case -1:
		case 1:
			*uParam1 = 0;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap", 64);
			return 1;
			break;
		
		case 61:
			*uParam1 = 1;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap_HighApt", 64);
			return 1;
			break;
		
		case 73:
			*uParam1 = 2;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap1", 64);
			return 1;
			break;
		
		case 77:
			*uParam1 = 3;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap2", 64);
			return 1;
			break;
		
		case 83:
			*uParam1 = 4;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap3", 64);
			return 1;
			break;
		
		case 86:
			*uParam1 = 5;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap4", 64);
			return 1;
			break;
		
		case 88:
			*uParam1 = 6;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap5", 64);
			return 1;
			break;
		
		case 91:
			*uParam1 = 7;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap6", 64);
			return 1;
			break;
		
		case 97:
			*uParam1 = 8;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap7", 64);
			return 1;
			break;
		
		case 109:
			*uParam1 = 9;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap8", 64);
			return 1;
			break;
	}
	return 0;
}

struct<6> func_74(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case joaat("MPSV_LP0_31"):
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 69:
		case 68:
		case 66:
		case 67:
			return 8;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			return 17;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 61;
			break;
		
		case 73:
		case 74:
		case 75:
		case 76:
			return 73;
			break;
		
		case 77:
		case 78:
		case joaat("MPSV_LP0_31"):
		case 80:
		case 81:
		case 82:
			return 77;
			break;
		
		case 83:
		case 84:
		case 85:
			return 83;
			break;
		
		case 86:
			return 86;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			return 88;
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			return 91;
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 97;
			break;
		
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 109;
			break;
	}
	return -1;
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_77(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_78(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_78(PLAYER::PLAYER_ID(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_78(int iParam0, bool bParam1)
{
	if (Global_1590373 != func_52())
	{
		if (!func_80(Global_1590373))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1590373)
			{
				if (MISC::IS_BIT_SET(Global_2425662[Global_1590373 /*421*/].f_195, 24) || func_79(Global_1590373))
				{
					return 1;
				}
			}
		}
	}
	return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_195, 24);
}

int func_79(int iParam0)
{
	if (iParam0 != func_52())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_195, 9);
	}
	return 0;
}

int func_80(int iParam0)
{
	if (iParam0 != func_52())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_351, 2);
	}
	return 0;
}

int func_81(var uParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	
	if (iParam1 == 2 && !func_82(uParam0->f_31, -1))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_84(PLAYER::PLAYER_ID()), uParam0->f_1742.f_150, true) <= 30f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(func_84(PLAYER::PLAYER_ID()), uParam0->f_1742.f_153, uParam0->f_1742.f_153.f_3, uParam0->f_1742.f_153.f_6, false, true))
			{
				return 1;
			}
		}
	}
	else
	{
		Var0 = { func_84(PLAYER::PLAYER_ID()) };
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_84(PLAYER::PLAYER_ID()), uParam0->f_146.f_47, true) <= 40f)
		{
			if ((OBJECT::IS_POINT_IN_ANGLED_AREA(func_84(PLAYER::PLAYER_ID()), uParam0->f_146.f_57[0 /*8*/], uParam0->f_146.f_57[0 /*8*/].f_3, uParam0->f_146.f_57[0 /*8*/].f_6, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(func_84(PLAYER::PLAYER_ID()), uParam0->f_146.f_57[1 /*8*/], uParam0->f_146.f_57[1 /*8*/].f_3, uParam0->f_146.f_57[1 /*8*/].f_6, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(func_84(PLAYER::PLAYER_ID()), uParam0->f_146.f_57[2 /*8*/], uParam0->f_146.f_57[2 /*8*/].f_3, uParam0->f_146.f_57[2 /*8*/].f_6, false, true))
			{
				return 1;
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, uParam0->f_146.f_1592, true) < (uParam0->f_146.f_1595 + fParam2) && (Var0.f_2 > uParam0->f_146.f_57[2 /*8*/].f_2 && Var0.f_2 < uParam0->f_146.f_57[2 /*8*/].f_3.f_2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_82(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

Vector3 func_83(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			Var1 = { Global_1049922[iParam0 /*1951*/].f_146.f_47 };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var1 = { 348.132f, -997.2031f, -100.1741f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var1 = { 264.3808f, -997.7274f, -100.0087f };
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			Var1 = { Global_1049922[iParam0 /*1951*/].f_146.f_47 };
			break;
		
		case 73:
		case 74:
		case 75:
		case 76:
			Var1 = { Global_1049922[iParam0 /*1951*/].f_146.f_47 };
			break;
		
		case 77:
		case 78:
		case joaat("MPSV_LP0_31"):
		case 80:
		case 81:
		case 82:
			Var1 = { Global_1049922[iParam0 /*1951*/].f_146.f_47 };
			break;
		
		case 83:
		case 84:
		case 85:
			Var1 = { Global_1049922[iParam0 /*1951*/].f_146.f_47 };
			break;
		
		case 86:
			func_70(iParam0, 3, &Var0, 86, 0);
			Var1 = { Var0 };
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			Var1 = { Global_1049922[iParam0 /*1951*/].f_146.f_47 };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var1 = { Global_1049922[iParam0 /*1951*/].f_146.f_47 };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var1 = { Global_1049922[iParam0 /*1951*/].f_146.f_47 };
			break;
	}
	return Var1;
}

Vector3 func_84(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_85(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("MPSV_LP0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 0;
		
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
			return 1;
		
		default:
	}
	return 0;
}

int func_86()
{
	if (func_88(Global_1048576.f_1305))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_84(PLAYER::PLAYER_ID()), Global_3934119[Global_1048576.f_1305 /*2012*/].f_146.f_47, true) <= 30f)
		{
			if (func_87(PLAYER::PLAYER_ID(), 0, 0))
			{
				if (!Global_2405072.f_2668 && !Global_2405072.f_2670)
				{
					return 0;
				}
			}
			if (func_81(&(Global_3934119[Global_1048576.f_1305 /*2012*/]), 1, 0))
			{
				if (!Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_746)
				{
					return 1;
				}
			}
		}
	}
	Global_1048576.f_1305++;
	if (Global_1048576.f_1305 >= 37)
	{
		Global_1048576.f_1305 = -1;
	}
	return 0;
}

int func_87(int iParam0, bool bParam1, int iParam2)
{
	if (Global_2425662[iParam0 /*421*/].f_222 == 99)
	{
		if ((iParam2 && Global_2425662[iParam0 /*421*/].f_225 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2425662[iParam0 /*421*/].f_222 == 13)
		{
			return 0;
		}
	}
	return 1;
}

int func_88(int iParam0)
{
	if (func_89(iParam0))
	{
		return Global_2546219.f_2[iParam0];
	}
	return 0;
}

int func_89(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 37)
	{
		return 1;
	}
	return 0;
}

int func_90()
{
	if (Global_1048576.f_1305 == -1)
	{
		return 1;
	}
	return 0;
}

bool func_91()
{
	return MISC::IS_BIT_SET(Global_1048576.f_8, 11);
}

bool func_92()
{
	return Global_1676377.f_474;
}

int func_93()
{
	if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() && ((func_64() || func_65()) || (func_61() && func_97() <= 21))) && func_94())
	{
		return 1;
	}
	return 0;
}

int func_94()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_96();
	}
	return func_95(Global_4456448.f_194990);
}

int func_95(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4990[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_96()
{
	return Global_2450632.f_15;
}

int func_97()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_196;
}

int func_98()
{
	if (Global_2451426.f_6191 && !Global_2461151)
	{
		return 1;
	}
	return 0;
}

int func_99(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_52())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_26, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

var func_100()
{
	return Global_2451426.f_1.f_2842;
}

void func_101()
{
	Global_2409287.f_14 = 0;
}

int func_102(int iParam0)
{
	if (iParam0 == func_103())
	{
		return Global_2409287.f_14;
	}
	return 0;
}

int func_103()
{
	return Global_2409287;
}

int func_104()
{
	if (Global_1676377.f_4410 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_105()
{
	return Global_1676377.f_460 != -1;
}

void func_106(int iParam0)
{
	if (iParam0 == func_103())
	{
		Global_2409287.f_14 = 1;
	}
}

int func_107(int iParam0, int iParam1)
{
	if (func_108(iParam0, 0))
	{
		if (Global_1628237[iParam0 /*615*/].f_11.f_32 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_108(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_32 != -1 || (iParam1 && Global_1628237[iParam0 /*615*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_109(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (MISC::IS_BIT_SET(Global_42599, 8))
	{
		MISC::SET_BIT(&Global_42599, 9);
	}
	if ((func_127(iParam0) + iParam2) > 15)
	{
		iParam2 = (15 - func_127(iParam0));
	}
	iVar0 = 20000;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 *= 3;
	}
	else if (MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "ob_drinking_shots"))
	{
		iVar0 *= 2;
	}
	if (!func_125(iParam0))
	{
		func_123(iParam0, iVar0, 0);
		func_120(iVar0, iVar0, 0.3f, func_121(), iParam1, 0);
		iVar1 = func_119(iParam0);
		if (iVar1 == -1)
		{
			iVar2 = func_118(iVar1);
			if (!iVar2 == -1)
			{
				Global_42383[iVar2 /*5*/].f_3 = (Global_42383[iVar2 /*5*/].f_3 + iParam2);
			}
		}
	}
	else
	{
		iVar3 = func_119(iParam0);
		iVar4 = -1;
		if (iVar3 == -1)
		{
			iVar4 = func_118(iVar3);
			if (!iVar4 == -1)
			{
				Global_42383[iVar4 /*5*/].f_3 = (Global_42383[iVar4 /*5*/].f_3 + iParam2);
			}
		}
		if (Global_42564 == 0 || Global_42564 <= MISC::GET_GAME_TIMER())
		{
			func_120(iVar0, iVar0, 0.3f, func_121(), iParam1, 0);
		}
		else
		{
			Global_42564 = (Global_42564 + iVar0);
			func_115(iParam0, iVar0);
		}
	}
	if (func_127(iParam0) >= 2)
	{
		Global_42569 = 0.25f;
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_42570))
		{
			StringCopy(&Global_42570, "DRUNK", 16);
		}
	}
	iVar5 = func_119(iParam0);
	if (iVar5 == -1)
	{
		iVar6 = func_118(iVar5);
		if (!iVar6 == -1)
		{
		}
		return;
	}
	func_110(1, iVar5, 3, iParam0, iParam2);
}

void func_110(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_111(iParam0, iParam1, iParam2, iParam3, 0, iParam4);
}

void func_111(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_113(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_112();
	if (iVar0 == -1)
	{
		return;
	}
	Global_42464[iVar0 /*6*/] = iParam0;
	Global_42464[iVar0 /*6*/].f_1 = iParam1;
	Global_42464[iVar0 /*6*/].f_2 = iParam2;
	Global_42464[iVar0 /*6*/].f_3 = iParam3;
	Global_42464[iVar0 /*6*/].f_4 = iParam4;
	Global_42464[iVar0 /*6*/].f_5 = iParam5;
}

int func_112()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42464[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_113(int iParam0, int iParam1, int iParam2)
{
	if (func_114(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_114(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_42464[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_42464[iVar0 /*6*/])
			{
				if (iParam1 == Global_42464[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_115(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	iVar0 = func_119(iParam0);
	iVar1 = -1;
	if (iVar0 == -1)
	{
		iVar1 = func_117(iParam0);
		if (!iVar1 == -1)
		{
			Global_42357[iVar1 /*5*/].f_3 = (Global_42357[iVar1 /*5*/].f_3 + iParam1);
			Global_42357[iVar1 /*5*/].f_2 = (Global_42357[iVar1 /*5*/].f_2 + iParam1);
		}
		return;
	}
	func_116(1, iVar0, 2, iParam1);
}

void func_116(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_111(iParam0, iParam1, iParam2, 0, iParam3, 1);
}

int func_117(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42357[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_118(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42383[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_119(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42383[iVar0 /*5*/].f_1)
		{
			return Global_42383[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_120(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, bool bParam5)
{
	int iVar0;
	
	if (Global_3)
	{
		return;
	}
	if (Global_42562)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", fParam3);
	}
	if (!CAM::IS_CINEMATIC_CAM_SHAKING())
	{
		CAM::SHAKE_CINEMATIC_CAM("DRUNK_SHAKE", (fParam3 * Global_42561));
	}
	if (CAM::DOES_CAM_EXIST(iParam4))
	{
		CAM::SHAKE_CAM(iParam4, "DRUNK_SHAKE", fParam3);
		Global_42563 = iParam4;
	}
	else
	{
		Global_42563 = 0;
	}
	Global_42562 = 1;
	iVar0 = MISC::GET_GAME_TIMER();
	Global_42564 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_42564 = -1;
		}
	}
	Global_42565 = iParam1;
	Global_42566 = fParam2;
	Global_42568 = fParam3;
	Global_42567 = fParam3;
}

float func_121()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 0.1f;
	iVar1 = func_127(PLAYER::PLAYER_PED_ID());
	iVar2 = func_122(PLAYER::PLAYER_PED_ID());
	if (iVar2 == 0)
	{
		if (iVar1 == 0)
		{
			fVar0 = 0.1f;
		}
		else
		{
			fVar0 = (SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(10));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 == 0)
	{
		fVar0 = 0.1f;
	}
	else
	{
		fVar0 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(5));
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
	}
	return fVar0;
}

int func_122(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_119(iParam0);
	iVar1 = func_118(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42383[iVar1 /*5*/].f_4;
}

int func_123(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_119(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_117(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_124();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_42357[iVar2 /*5*/] = 0;
	Global_42357[iVar2 /*5*/].f_1 = iParam0;
	Global_42357[iVar2 /*5*/].f_2 = iParam1;
	Global_42357[iVar2 /*5*/].f_3 = iParam1;
	Global_42357[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		Global_42594 = 1;
	}
	Global_42355++;
	return 1;
}

int func_124()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42357[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_125(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_126(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_126(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42383[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_42383[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_127(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_119(iParam0);
	iVar1 = func_118(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42383[iVar1 /*5*/].f_3;
}

void func_128(var uParam0, int iParam1)
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	
	if (func_103() == 7)
	{
		if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
		{
			CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(1);
			Global_2409287.f_21 = 1;
		}
		else
		{
			Global_2409287.f_21 = 0;
		}
		*uParam0 = 11;
		if (iParam1 != -1)
		{
			switch (iParam1)
			{
				case 0:
					Var0 = { 799.4338f, 4489.434f, 50.1044f };
					fVar1 = 234.7151f;
					break;
				
				case 1:
					Var0 = { -1780.224f, -898.138f, 5.523f };
					fVar1 = 0f;
					break;
				
				case 2:
					Var0 = { 548.493f, 2675.173f, 42.1963f };
					fVar1 = -29.16f;
					break;
				
				case 3:
					Var0 = { -2510.704f, 1715.879f, 153.946f };
					fVar1 = 0f;
					break;
			}
		}
		else
		{
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
			switch (iVar2)
			{
				case 0:
					Var0 = { 1095.78f, 42.0084f, 79.8909f };
					fVar1 = 4.1868f;
					break;
				
				case 1:
					Var0 = { 1234.744f, 348.742f, 80.9909f };
					fVar1 = 64.0722f;
					break;
				
				case 2:
					Var0 = { 1078.318f, 203.7619f, 86.9908f };
					fVar1 = 287.8687f;
					break;
				
				case 3:
					Var0 = { 882.1516f, -280.3958f, 65.4134f };
					fVar1 = 322.2067f;
					break;
				
				case 4:
					Var0 = { 1101.12f, -706.6118f, 55.8202f };
					fVar1 = 302.1545f;
					break;
				
				case 5:
					Var0 = { 958.2682f, 72.5168f, 111.554f };
					fVar1 = 235.6346f;
					break;
				
				case 6:
					Var0 = { 919.9286f, 23.3805f, 113.1937f };
					fVar1 = 128.1919f;
					break;
				}
		}
		func_129(Var0, fVar1, 50f, 1, 0f, 1, 0, 65f, 1, 1, 0, 1, -1082130432);
	}
	else if (func_103() == 0)
	{
		*uParam0 = 23;
	}
	else if (func_103() == 5)
	{
		*uParam0 = 46;
	}
	else
	{
		*uParam0 = 45;
	}
}

void func_129(struct<3> Param0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2413899.f_6))
	{
		if (!Global_2413899.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (SYSTEM::VMAG(Param0) == 0f)
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2413899.f_6))
	{
		Global_2413899.f_6 = SCRIPT::GET_ID_OF_THIS_THREAD();
	}
	Var0.f_6 = Global_2413899.f_6;
	Var0 = { Param0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam7;
	Var0.f_22 = iParam8;
	if (func_130(PLAYER::PLAYER_ID()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam9;
	Var0.f_26 = iParam10;
	Var0.f_27 = iParam12;
	Global_2413899 = { Var0 };
}

int func_130(int iParam0)
{
	if (((func_134(iParam0, 1) || func_133(iParam0)) || func_132(iParam0, 0)) || func_131(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_131(int iParam0)
{
	if (!func_8(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590535[iParam0 /*876*/].f_35;
}

int func_132(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_133(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0 /*615*/] != -1;
	}
	return 0;
}

bool func_134(int iParam0, bool bParam1)
{
	if (func_139() != 0)
	{
		return func_138(iParam0) != 0;
	}
	return func_135(iParam0, bParam1, 0);
}

int func_135(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_136(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0 /*876*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_136(int iParam0)
{
	return func_137(iParam0);
}

bool func_137(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_13.f_1, 0);
}

int func_138(int iParam0)
{
	if (func_8(iParam0, 0, 1))
	{
		return Global_2425662[iParam0 /*421*/].f_1;
	}
	return 0;
}

int func_139()
{
	return Global_30768;
}

int func_140(int iParam0)
{
	if (func_132(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_192;
	}
	return -1;
}

int func_141(int iParam0)
{
	if (func_132(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

void func_142(int iParam0)
{
	if (!func_156(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (iParam0 != -1)
	{
		func_155(iParam0);
	}
	func_143(243, -1);
}

void func_143(int iParam0, int iParam1)
{
	if (func_324() || !func_152(1))
	{
		if (!func_150(PLAYER::PLAYER_ID(), 0))
		{
			func_149(iParam0);
			func_144(iParam0, func_148(1, 1), func_147(), func_146(), func_145(), iParam1);
		}
	}
}

void func_144(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<7> Var0;
	
	Var0 = 848786118;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = uParam4;
	Var0.f_6 = uParam5;
	if (!iParam1 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 7, iParam1);
	}
}

var func_145()
{
	return Global_2537071.f_5124.f_341;
}

var func_146()
{
	return Global_2537071.f_5124.f_340;
}

var func_147()
{
	return Global_2537071.f_5124.f_339;
}

int func_148(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_8(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_15(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_149(var uParam0)
{
	Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_32 = uParam0;
}

int func_150(int iParam0, int iParam1)
{
	if (func_132(iParam0, 0))
	{
		return func_151(Global_1628237[iParam0 /*615*/].f_11.f_33) == iParam1;
	}
	return 0;
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
		case 24:
		case 26:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

bool func_152(bool bParam0)
{
	return func_153(PLAYER::PLAYER_ID(), bParam0);
}

bool func_153(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_154(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0 /*615*/].f_11 != func_52();
}

int func_154(int iParam0)
{
	if (iParam0 != func_52())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_52())
		{
			return Global_1628237[iParam0 /*615*/].f_11 == iParam0;
		}
	}
	return 0;
}

void func_155(int iParam0)
{
	if (Global_2537071.f_5124.f_339 != iParam0)
	{
		Global_2537071.f_5124.f_339 = iParam0;
	}
}

bool func_156(int iParam0)
{
	return Global_1590535[iParam0 /*876*/].f_274.f_369 != 0;
}

int func_157(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (!func_191(func_294(iParam1, -1, -1, -1), func_251(iParam1, -1, 1, -1, -1, iParam0), func_200(iParam1, -1, -1, -1, -1, iParam0), 0, 1))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (func_189(iParam0))
	{
		if (iParam1 == 153)
		{
			iVar0 = 211;
		}
	}
	if (func_187(iParam1) >= func_186(iVar0))
	{
		return 5;
	}
	if (func_185(iParam0))
	{
		return 6;
	}
	if (func_184(iParam0))
	{
		return 14;
	}
	iVar1 = func_179(iParam0);
	if (iVar1 != -1)
	{
		return iVar1;
	}
	if (func_151(iParam1) == 1)
	{
		if ((func_178() || func_177()) || ((!bParam2 && func_176() != 0) && func_151(iParam1) == 1))
		{
			return 2;
		}
	}
	else if (func_151(iParam1) == 2)
	{
		if (!func_173(iParam1))
		{
			return 3;
		}
		if (!bParam2)
		{
			if (Global_1628237[iParam0 /*615*/].f_11.f_34 != func_52())
			{
				return 9;
			}
		}
		if (func_172(iParam0))
		{
			return 10;
		}
	}
	else if (func_170(iParam1))
	{
		if (func_168(iParam0) <= 0)
		{
			return 4;
		}
	}
	if (func_167(iParam1))
	{
		if (func_166())
		{
			return 13;
		}
		if (func_164())
		{
			return 12;
		}
	}
	if (func_168(iParam0) + 1 < func_163(iVar0))
	{
		return 4;
	}
	switch (iParam1)
	{
		case 157:
			break;
		
		case 152:
		case 164:
		case 173:
		case 170:
		case 201:
		case 200:
			if (!func_159(iParam0, 0))
			{
				return 1;
			}
			break;
		
		case 189:
			if (func_158(iParam0, 21) || func_158(iParam0, 25))
			{
				return 0;
			}
			break;
	}
	return -1;
}

bool func_158(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_208, iParam1);
}

int func_159(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (!func_161(iVar1, iParam0, 1))
			{
				if (iParam1 || !func_160(iVar1, 31))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_160(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_161(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_52())
	{
		if (!bParam2)
		{
			if (func_162(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628237[iParam0 /*615*/].f_11 != func_52())
		{
			return iParam1 == Global_1628237[iParam0 /*615*/].f_11;
		}
	}
	return 0;
}

int func_162(int iParam0, int iParam1)
{
	if (iParam1 != func_52())
	{
		if (iParam0 != func_52())
		{
			if (Global_1628237[iParam0 /*615*/].f_11 != func_52())
			{
				if (Global_1628237[iParam0 /*615*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_163(int iParam0)
{
	switch (iParam0)
	{
		case 180:
			return Global_262145.f_18163;
		
		case 183:
			return Global_262145.f_18171;
		
		case 185:
			return Global_262145.f_18180;
		
		case 182:
			return Global_262145.f_18191;
		
		case 186:
			return Global_262145.f_18200;
		
		case 195:
			return Global_262145.f_18218;
		
		case 198:
			return Global_262145.f_18228;
		
		case 197:
			return Global_262145.f_18240;
		
		case 207:
			return Global_262145.f_18248;
		
		case 209:
			return Global_262145.f_18261;
		
		case 208:
			return Global_262145.f_18269;
		
		case 201:
			return Global_262145.f_18302;
		
		case 211:
			return Global_262145.f_18370;
		
		case 193:
			return Global_262145.f_18393;
		
		case 205:
			return Global_262145.f_18411;
		
		case 189:
			return Global_262145.f_18376;
		
		case 216:
			return 2;
		
		case 220:
			return 2;
		
		default:
	}
	return 1;
}

int func_164()
{
	if (func_165())
	{
		return 1;
	}
	return Global_2450632.f_644;
}

bool func_165()
{
	return Global_1312837 == 10;
}

bool func_166()
{
	return Global_262145.f_15220;
}

int func_167(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_168(int iParam0)
{
	if (func_169(iParam0) == func_52())
	{
		return 0;
	}
	return Global_1628237[iParam0 /*615*/].f_11.f_19;
}

int func_169(int iParam0)
{
	if (iParam0 != func_52())
	{
		return Global_1628237[iParam0 /*615*/].f_11;
	}
	return func_52();
}

int func_170(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_171(iParam0, 0);
	return 0;
}

int func_171(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_172(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if ((Global_1628237[iParam0 /*615*/].f_11.f_34 != func_52() && Global_1628237[iParam0 /*615*/].f_11.f_34 == iVar1) && Global_1628237[iVar1 /*615*/].f_11.f_34 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_173(int iParam0)
{
	switch (iParam0)
	{
		case 179:
			if (func_175() < 2)
			{
				return 0;
			}
			break;
		
		case 148:
			if (func_174() < 2)
			{
				return 0;
			}
			break;
		
		default:
			if (func_174() < 2)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_174()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (func_154(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_175()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (func_189(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_176()
{
	return Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_102;
}

bool func_177()
{
	return Global_1650640.f_11.f_144 != -1;
}

bool func_178()
{
	return Global_1650640.f_11.f_143 != -1;
}

int func_179(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_181())
	{
		iVar1 = Global_1628237[iParam0 /*615*/].f_11.f_11[iVar0];
		if (iVar1 != func_52())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (func_185(iVar1))
				{
					return 7;
				}
				if (func_184(iVar1))
				{
					return 15;
				}
				if (func_180(iVar1))
				{
					return 16;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_180(int iParam0)
{
	if (iParam0 == func_52())
	{
		return 0;
	}
	if (((((MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310.f_4, 2) || MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310.f_4, 3)) || MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310.f_4, 5)) || MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310.f_4, 6)) || MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310.f_4, 7)) || MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_369.f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_181()
{
	return (func_182() - 1);
}

int func_182()
{
	return func_183(PLAYER::PLAYER_ID());
}

int func_183(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1628237[iParam0 /*615*/].f_11;
	if (iVar0 != func_52() && Global_1628237[iVar0 /*615*/].f_11.f_450 == 1)
	{
		return 8;
	}
	return 4;
}

int func_184(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2513889;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_185(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628237[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

int func_186(int iParam0)
{
	switch (iParam0)
	{
		case 162:
			return Global_262145.f_12566;
		
		case 155:
			return Global_262145.f_12591;
		
		case 153:
			return Global_262145.f_12555;
		
		case 163:
			return Global_262145.f_12531;
		
		case 160:
			return Global_262145.f_12544;
		
		case 154:
			return Global_262145.f_12601;
		
		case 169:
			return 1;
		
		case 171:
			return Global_262145.f_15047;
		
		case 172:
			return Global_262145.f_15066;
		
		case 148:
			return Global_262145.f_18277;
		
		case 179:
			return Global_262145.f_18285;
		
		case 201:
			return Global_262145.f_18299;
		
		case 200:
			return Global_262145.f_18339;
		
		case 211:
			return Global_262145.f_18368;
		
		case 194:
			return Global_262145.f_18380;
		
		case 193:
			return Global_262145.f_18391;
		
		case 210:
			return Global_262145.f_18403;
		
		case 205:
			return Global_262145.f_18409;
		
		case 199:
			return Global_262145.f_18422;
		
		case 249:
			return 1;
		
		case 238:
			return 1;
		
		default:
	}
	return 2147483647;
}

int func_187(int iParam0)
{
	return Global_1650640.f_11.f_147[func_188(iParam0)];
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return 0;
		
		case 152:
			return 1;
		
		case 151:
			return 2;
		
		case 142:
			return 3;
		
		case 157:
			return 4;
		
		case 159:
			return 5;
		
		case 164:
			return 6;
		
		case 160:
			return 7;
		
		case 162:
			return 8;
		
		case 163:
			return 9;
		
		case 154:
			return 10;
		
		case 155:
			return 11;
		
		case 153:
			return 12;
		
		case 166:
			return 13;
		
		case 167:
			return 14;
		
		case 168:
			return 15;
		
		case 169:
			return 16;
		
		case 170:
			return 17;
		
		case 171:
			return 18;
		
		case 172:
			return 19;
		
		case 173:
			return 20;
		
		case 178:
			return 21;
		
		case 179:
			return 22;
		
		case 180:
			return 23;
		
		case 181:
			return 24;
		
		case 182:
			return 25;
		
		case 183:
			return 26;
		
		case 185:
			return 27;
		
		case 186:
			return 28;
		
		case 189:
			return 31;
		
		case 190:
			return 32;
		
		case 191:
			return 33;
		
		case 192:
			return 34;
		
		case 193:
			return 35;
		
		case 194:
			return 36;
		
		case 195:
			return 37;
		
		case 197:
			return 39;
		
		case 198:
			return 40;
		
		case 199:
			return 41;
		
		case 200:
			return 42;
		
		case 201:
			return 43;
		
		case 205:
			return 44;
		
		case 207:
			return 45;
		
		case 208:
			return 46;
		
		case 209:
			return 47;
		
		case 210:
			return 48;
		
		case 214:
			return 49;
		
		case 215:
			return 50;
		
		case 216:
			return 51;
		
		case 217:
			return 52;
		
		case 218:
			return 53;
		
		case 219:
			return 54;
		
		case 220:
			return 55;
		
		case 221:
			return 56;
		
		case 188:
			return 30;
		
		case 225:
			return 57;
		
		case 226:
			return 58;
		
		case 227:
			return 59;
		
		case 229:
			return 60;
		
		case 230:
			return 61;
		
		case 233:
			return 62;
		
		case 237:
			return 63;
		
		case 238:
			return 64;
		
		case 239:
			return 65;
		
		case 240:
			return 66;
		
		case 241:
			return 67;
		
		case 242:
			return 68;
		
		case 244:
			return 69;
		
		case 248:
			return 70;
		
		case 249:
			return 71;
		
		case 250:
			return 72;
		
		case 243:
			return 73;
		
		case 158:
			return 74;
		
		case 24:
			return 75;
		
		case 26:
			return 76;
		
		default:
	}
	return -1;
}

bool func_189(int iParam0)
{
	return func_190(iParam0, 1);
}

int func_190(int iParam0, int iParam1)
{
	if (iParam0 != func_52())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_52())
		{
			if (Global_1628237[iParam0 /*615*/].f_11 == iParam0 && Global_1628237[iParam0 /*615*/].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_191(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_199(iParam0, bParam3, bParam4) || func_198(iParam1, bParam3, bParam4)) || func_192(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_192(int iParam0, bool bParam1, bool bParam2)
{
	return func_193(2, iParam0, 0, bParam1, bParam2);
}

int func_193(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(Global_1389296, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_197(iParam0) - func_196(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_196(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_197(iParam0) - func_195(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_196(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_197(iParam0) - func_196(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[PLAYER::PLAYER_ID() /*876*/] != 3)
		{
			iVar1 = (iVar1 - func_194(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_195(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389296.f_1;
			break;
		
		case 1:
			return Global_1389296.f_2;
			break;
		
		case 2:
			return Global_1389296.f_3;
			break;
	}
	return 0;
}

int func_196(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425662[iVar0 /*421*/].f_209;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425662[iVar0 /*421*/].f_210;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425662[iVar0 /*421*/].f_211;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389304;
			break;
		
		case 1:
			return Global_1389305;
			break;
		
		case 2:
			return Global_1389306;
			break;
	}
	return 0;
}

int func_198(int iParam0, bool bParam1, bool bParam2)
{
	return func_193(1, iParam0, 0, bParam1, bParam2);
}

int func_199(int iParam0, bool bParam1, bool bParam2)
{
	return func_193(0, iParam0, 0, bParam1, bParam2);
}

int func_200(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 159:
		case 142:
			return 1;
		
		case 167:
			return func_250(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 9;
		
		case 173:
			return 0;
		
		case 168:
			return 5;
		
		case 178:
		case 188:
			return func_248(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_242(iParam1, iParam2, iParam3, iParam4);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_230(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 233:
			return func_223(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 179:
			return 0;
		
		case 182:
			return 7;
		
		case 185:
			return 6;
		
		case 186:
			return 2;
		
		case 180:
			return 9;
		
		case 190:
			return 8;
		
		case 191:
			return 0;
		
		case 192:
			return func_216(iParam1, iParam2);
		
		case 193:
			return 0;
		
		case 194:
			return 0;
		
		case 199:
			return 0;
		
		case 195:
			return 9;
		
		case 201:
			return 16;
		
		case 198:
			return 12;
		
		case 205:
			return 8;
		
		case 207:
			return 0;
		
		case 208:
			return 15;
		
		case 209:
			return 0;
		
		case 210:
			return 0;
		
		case 214:
			return 9;
		
		case 215:
			return 0;
		
		case 216:
			return 16;
		
		case 217:
			return 0;
		
		case 218:
			return 0;
		
		case 219:
			return 0;
		
		case 220:
			return 30;
		
		case 221:
			return 30;
		
		case 237:
		case 250:
			return func_213(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_212(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 1;
		
		case 241:
			return 1;
		
		case 242:
			return 1;
		
		case 244:
			return 4;
		
		case 248:
			return 5;
		
		case 243:
			return func_208(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 158:
			return func_204(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 181:
			return func_201(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		default:
	}
	return 0;
}

int func_201(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_203(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_202(iParam0, iParam2));
	return iVar0;
}

int func_202(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 5;
		
		default:
	}
	return 1;
}

int func_203(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_204(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_207(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_205(iParam0, iParam2));
	return iVar0;
}

int func_205(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	switch (iParam0)
	{
		case 4:
		case 2:
		case 1:
		case 3:
		case 30:
		case 31:
		case 32:
		case 28:
		case 29:
		case 52:
		case 37:
			return 0;
		
		case 19:
		case 20:
			return 1;
		
		case 38:
		case 8:
		case 14:
		case 17:
		case 11:
		case 18:
		case 21:
		case 22:
		case 7:
		case 34:
		case 23:
		case 41:
		case 49:
		case 48:
		case 27:
		case 15:
		case 50:
		case 24:
		case 6:
		case 9:
		case 10:
		case 47:
		case 42:
		case 26:
		case 25:
			return 2;
		
		case 43:
			return 3;
		
		case 16:
			return 4;
		
		case 12:
		case 13:
			if (func_153(iParam1, 1))
			{
				Var0 = { func_206(iParam1) };
			}
			if (Var0.f_1 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 33:
			return 5;
	}
	return 1;
}

Vector3 func_206(int iParam0)
{
	return Global_1628237[iParam0 /*615*/].f_11.f_301;
}

int func_207(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 24:
			return 1;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					return 11;
				
				case 31:
				case 32:
					return 9;
				
				default:
			}
			break;
		
		case 36:
			return 0;
		
		case 38:
			return 3;
		
		case 40:
			return 4;
		
		case 41:
			return 4;
		
		case 8:
			return 13;
		
		case 13:
			switch (iParam1)
			{
				case 38:
				case 39:
					return 10;
				
				case 40:
					return 11;
				
				default:
			}
			break;
		
		case 35:
			return 5;
		
		case 46:
			return 2;
		
		case 9:
			return 8;
		
		case 4:
			return 7;
		
		case 14:
			return 11;
		
		case 17:
			return 8;
		
		case 47:
			return 11;
		
		case 11:
			return 9;
		
		case 18:
			return 13;
		
		case 6:
			return 17;
		
		case 48:
			return 21;
		
		case 33:
			return 5;
		
		case 44:
			return 2;
		
		case 21:
			return 22;
		
		case 22:
			return 12;
		
		case 7:
			return 10;
		
		case 2:
			return 0;
		
		case 34:
			switch (iParam1)
			{
				case 91:
					return 16;
				
				case 92:
					return 14;
				
				default:
			}
			break;
		
		case 27:
			return 12;
		
		case 23:
			return 17;
		
		case 31:
			return 3;
		
		case 12:
			return 4;
		
		case 3:
			return 2;
		
		case 49:
			return 15;
		
		case 19:
			return 14;
		
		case 50:
			return 12;
		
		case 20:
			return 12;
		
		case 32:
			return 15;
		
		case 30:
			return 6;
		
		case 16:
			return 12;
		
		case 39:
			return 5;
		
		case 42:
			return 3;
		
		case 37:
			return 19;
		
		case 52:
			return 6;
		
		case 15:
			return 2;
		
		case 25:
			switch (iParam1)
			{
				case 69:
					return 11;
				
				case 70:
					return 12;
				
				default:
			}
			break;
	}
	return 0;
}

int func_208(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_211(iParam0, iParam1, iParam3);
	if (!func_210(iParam0))
	{
		iVar0 = (iVar0 + func_209(iParam0, iParam2));
	}
	return iVar0;
}

int func_209(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 14:
		case 5:
		case 0:
		case 3:
		case 2:
			return 0;
		
		case 6:
			if (func_168(iParam1) + 1 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_210(int iParam0)
{
	return 0;
}

int func_211(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 13:
			return 3;
		
		case 5:
			switch (iParam1)
			{
				case 15:
					return 17;
				
				case 16:
					return 12;
				
				case 17:
					return 12;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
				case 36:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					return 3;
				
				default:
			}
			break;
		
		case 12:
			return 15;
		
		case 0:
			return 1;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 0;
						
						case 2:
							return 3;
						
						default:
					}
					break;
				
				case 29:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 2;
						
						case 2:
							return 0;
						
						default:
					}
					break;
				
				case 30:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 0;
						
						case 2:
							return 0;
						
						default:
					}
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 10:
					return 6;
				
				default:
			}
			return 5;
		
		case 2:
			switch (iParam1)
			{
				case 6:
					return 22;
				
				case 7:
					return 23;
				
				case 8:
					return 25;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return 3;
				
				case 26:
					return 8;
				
				case 27:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

int func_212(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 0;
		
		case 4:
			return 3;
		
		case 5:
			return 0;
		
		default:
	}
	return 0;
}

int func_213(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_215(iParam0, iParam1);
	if (func_214(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_214(int iParam0)
{
	return 1;
}

int func_215(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			return 3;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					return 3;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
					return 2;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 102:
				case 103:
				case 104:
					return 4;
				
				default:
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 133:
				case 135:
					return 1;
				
				case 136:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			return 10;
		
		case 18:
			return 3;
		
		case 3:
			return 4;
		
		case 21:
			return 2;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 9;
				
				case 1:
					return 9;
				
				case 2:
					return 8;
				
				case 3:
					return 6;
				
				case 4:
					return 8;
				
				case 5:
					return 8;
				
				case 6:
					return 8;
				
				case 7:
					return 8;
				
				case 8:
					return 8;
				
				case 9:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_216(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_222(iParam0, iParam1);
	if (!func_221(iParam0))
	{
		iVar0 = (iVar0 + func_217(iParam0, func_322() + 1));
	}
	if (iParam0 == 14 || ((((func_221(iParam0) && iParam0 != 9) && iParam0 != 16) && iParam0 != 7) && iParam0 != 17))
	{
		iVar0 = (iVar0 + func_217(iParam0, func_322() + 1));
	}
	if (iParam0 == 7)
	{
		iVar0 += 6;
	}
	if (iParam0 == 17)
	{
		iVar0 += 2;
	}
	return iVar0;
}

int func_217(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_220(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_219(iParam0, iParam1);
			iVar2 = func_218(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_221(iParam0))
		{
			if (iVar0 > Global_262145.f_17914)
			{
				iVar0 = Global_262145.f_17914;
			}
		}
		else
		{
			if (iVar0 < Global_262145.f_17913)
			{
				iVar0 = Global_262145.f_17913;
			}
			if (iVar0 > Global_262145.f_17912)
			{
				iVar0 = Global_262145.f_17912;
			}
		}
	}
	return iVar0;
}

int func_218(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_17951;
		
		case 10:
			return Global_262145.f_17976;
		
		default:
	}
	return 1;
}

int func_219(int iParam0, int iParam1)
{
	if (func_221(iParam0))
	{
		if (iParam1 >= Global_262145.f_17915)
		{
			return 2;
		}
		return 1;
	}
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_17952;
		
		case 10:
			return Global_262145.f_17977;
		
		default:
	}
	return 8;
}

int func_220(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_221(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 32:
		case 0:
		case 2:
		case 4:
		case 18:
		case 6:
		case 5:
		case 10:
		case 12:
		case 13:
			return 0;
		
		default:
	}
	return 1;
}

int func_222(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 32:
			switch (iParam1)
			{
				case 195:
					return 3;
				
				case 196:
					return 3;
				
				case 197:
					return 3;
				
				case 198:
					return 3;
				
				case 199:
					return 3;
				
				default:
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 231:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					return 9;
				
				case 8:
					return 8;
				
				case 9:
					return 7;
				
				case 10:
					return 4;
				
				case 11:
					return 5;
				
				case 12:
					return 6;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					return 10;
				
				case 2:
					return 10;
				
				case 3:
					return 8;
				
				case 4:
					return 10;
				
				case 5:
					return 10;
				
				case 6:
					return 10;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					return 10;
				
				case 14:
					return 8;
				
				case 15:
					return 8;
				
				case 16:
					return 8;
				
				case 17:
					return 10;
				
				case 18:
					return 9;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					return 5;
				
				case 20:
					return 8;
				
				case 21:
					return 4;
				
				case 22:
					return 0;
				
				case 23:
					return 10;
				
				case 24:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					return 20;
				
				case 26:
					return 15;
				
				case 27:
					return 13;
				
				case 28:
					return 16;
				
				case 29:
					return 14;
				
				case 30:
					return 14;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					return 7;
				
				case 75:
					return 5;
				
				case 76:
					return 5;
				
				case 77:
					return 4;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 64:
					return 1;
				
				case 67:
					return 1;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					return 6;
				
				case 39:
					return 6;
				
				case 40:
					return 7;
				
				case 41:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_223(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = func_229(iParam0, iParam1, iParam2, iParam4);
	if (!func_228(iParam0))
	{
		if (iParam3 != func_52())
		{
			iVar0 = (iVar0 + func_225(iParam0, func_168(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_224(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_224(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 5:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_225(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	switch (iParam0)
	{
		case 5:
		case 7:
		case 6:
		case 4:
		case 10:
			iVar0 = 1;
			break;
		
		case 8:
			iVar0 = 2;
			break;
		
		case 3:
		case 2:
			iVar0 = 4;
			break;
		
		default:
			if (func_228(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_227(iParam0))
	{
		iVar0 = func_227(iParam0);
	}
	else if (iVar0 < func_226(iParam0))
	{
		iVar0 = func_226(iParam0);
	}
	return iVar0;
}

int func_226(int iParam0)
{
	return 1;
}

int func_227(int iParam0)
{
	return 4;
}

int func_228(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_229(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 5;
		
		case 3:
			iVar0 = 1;
			switch (iParam1)
			{
				case 26:
					return iVar0 + 1;
				
				case 34:
					return iVar0 + 1;
				
				default:
			}
			return iVar0;
			break;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 8:
			return 7;
		
		case 12:
			switch (iParam1)
			{
				case 125:
					return 6;
				
				default:
			}
			return 2;
			break;
		
		case 9:
			return 0;
		
		case 13:
			return 1;
		
		case 10:
			return 12;
	}
	return 0;
}

int func_230(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = func_241(iParam0, iParam1, iParam2, iParam4);
	if (!func_240(iParam0))
	{
		if (iParam3 != func_52())
		{
			iVar0 = (iVar0 + func_232(iParam0, func_168(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_231(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_231(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			return 1;
		
		default:
	}
	return 0;
}

int func_232(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_239(iParam0))
	{
		iVar1 = func_238(iParam3);
		switch (iParam0)
		{
			case 21:
				iVar0 = 1;
				break;
			
			case 23:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 2;
						break;
				}
				break;
			
			case 15:
				switch (iVar1)
				{
					case 1:
						iVar0 = 3;
						break;
					
					case 2:
						iVar0 = 6;
						break;
					
					case 3:
						iVar0 = 8;
						break;
				}
				break;
			
			case 20:
			case 24:
			case 22:
			case 16:
			case 17:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
			
			case 25:
				switch (iVar1)
				{
					case 1:
						iVar0 = 2;
						break;
					
					case 2:
						iVar0 = 3;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
		}
		return iVar0;
	}
	else if (func_237(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_236(iParam2))
		{
			iVar0 = func_236(iParam2);
		}
	}
	if (iVar0 > func_234(iParam0))
	{
		iVar0 = func_234(iParam0);
	}
	else if (iVar0 < func_233(iParam0))
	{
		iVar0 = func_233(iParam0);
	}
	return iVar0;
}

int func_233(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_234(int iParam0)
{
	if (!func_239(iParam0))
	{
		if (func_240(iParam0))
		{
			if (func_235(iParam0))
			{
				return 2;
			}
			return 3;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 21:
				return 1;
			
			case 23:
				return 2;
			
			case 15:
				return 9;
			
			default:
		}
		return 3;
	}
	return 4;
}

int func_235(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_236(int iParam0)
{
	if (iParam0 == func_52() || Global_1590535[iParam0 /*876*/].f_274.f_264 == 0)
	{
		return 50;
	}
	return (50 - Global_1590535[iParam0 /*876*/].f_274.f_264.f_3);
}

int func_237(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_238(int iParam0)
{
	if (iParam0 > 25)
	{
		return 3;
	}
	else if (iParam0 > 10)
	{
		return 2;
	}
	return 1;
}

int func_239(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 1;
		
		default:
	}
	return 0;
}

int func_240(int iParam0)
{
	if (func_239(iParam0) || func_237(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_241(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 12;
		
		case 11:
			return 1;
		
		case 5:
			return 10;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 3;
				
				case 2:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					return 17;
				
				case 35:
					return 20;
				
				case 36:
					return 22;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					return 9;
				
				case 7:
					return 0;
				
				case 8:
					return 5;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam2)
			{
				case 1:
					return 7;
				
				case 2:
					return 14;
				
				case 3:
					return 14;
				
				case 4:
					return 14;
				
				default:
			}
			break;
		
		case 8:
			return 2;
		
		case 23:
			return (2 * iParam2);
		
		case 24:
			return (2 * iParam2);
		
		case 26:
			return 2;
	}
	return 0;
}

int func_242(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_247(iParam0, iParam1, iParam2, iParam3);
	if (!func_246(iParam0))
	{
		iVar0 = (iVar0 + func_244(iParam0, func_322() + 1, -1, iParam2));
	}
	if (func_243(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_243(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 12:
		case 6:
		case 14:
		case 15:
		case 16:
		case 17:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_244(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_245(iParam0))
	{
		if (iParam2 <= Global_262145.f_21206)
		{
			iVar0 = 1;
			if (iParam0 == 15)
			{
				iVar0 = 2;
			}
		}
		else if (iParam2 <= Global_262145.f_21207)
		{
			iVar0 = 2;
			if (iParam0 == 18)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 3;
			if (iParam0 == 18)
			{
				iVar0 = 2;
			}
			else if (iParam0 == 19 || iParam0 == 2)
			{
				iVar0 = 4;
			}
		}
	}
	else if (iParam0 == 8)
	{
		if (iParam1 < 4)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if (iParam0 == 0 || iParam0 == 20)
	{
		iVar0 = 1;
	}
	else if (func_246(iParam0))
	{
		if (iParam1 < Global_262145.f_21166)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else
	{
		iVar0 = iParam1;
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_245(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_246(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 6:
		case 7:
		case 10:
		case 11:
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 19:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_247(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 6;
				
				case 2:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					return 0;
				
				case 4:
					return 0;
				
				case 5:
					return 0;
				
				case 6:
					return 0;
				
				case 7:
					return 0;
				
				case 8:
					return 0;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					return 0;
				
				case 10:
					return 0;
				
				case 11:
					return 0;
				
				case 12:
					return 0;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					return 10;
				
				case 15:
					return 12;
				
				case 13:
					return 2;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 16:
					return 0;
				
				case 17:
					return 0;
				
				case 18:
					return 0;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					return 15;
				
				case 20:
					return 15;
				
				case 21:
					return 11;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					return 10;
				
				case 23:
					return 7;
				
				case 24:
					return 6;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return (6 + iParam2 * 2);
				
				case 26:
					return (7 + iParam2 * 2);
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 9;
				
				case 28:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					return 6;
				
				case 30:
					return 6;
				
				case 31:
					return 6;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					return 8;
				
				case 33:
					return 8;
				
				case 34:
					return 8;
				
				default:
			}
			break;
		
		case 12:
			return 0;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					return 18;
				
				case 36:
					return 9;
				
				case 37:
					return 0;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam3)
			{
				case 0:
					return 9;
				
				case 1:
					return 16;
				
				case 2:
					return 6;
				
				case 3:
					return 3;
				
				case 4:
					return 9;
				
				case 5:
					return 6;
				
				case 6:
					return 6;
				
				case 7:
					return 3;
				
				case 8:
					return 3;
				
				case 9:
					return 3;
				
				case 10:
					return 0;
				
				case 11:
					return 9;
				
				case 12:
					return 3;
				
				default:
			}
			break;
		
		case 15:
			return iParam2;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 13;
	}
	return 0;
}

int func_248(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_249(iParam0, iParam1);
	if (iParam0 == 15)
	{
		iVar0++;
	}
	return iVar0;
}

int func_249(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
			switch (iParam1)
			{
				case 18:
					return 9;
				
				case 19:
					return 7;
				
				case 20:
					return 8;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 1;
				
				case 28:
					return 1;
				
				case 29:
					return 1;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					return 2;
				
				case 22:
					return 2;
				
				case 23:
					return 2;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					return 8;
				
				case 37:
					return 7;
				
				case 38:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					return 8;
				
				case 40:
					return 6;
				
				case 41:
					return 2;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					return 5;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					return 1;
				
				case 43:
					return 1;
				
				case 44:
					return 1;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					return 12;
				
				case 46:
					return 12;
				
				case 47:
					return 12;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					return 7;
				
				case 49:
					return 7;
				
				case 50:
					return 7;
				
				default:
			}
			break;
		
		case 12:
			return 3;
	}
	return 0;
}

int func_250(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 3;
		
		case 13:
			return 0;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 1;
		
		case 17:
			return 3;
		
		case 19:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 1;
}

int func_251(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 157:
			return 4;
		
		case 167:
			return func_293(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 5;
		
		case 173:
			return 14;
		
		case 168:
			return 8;
		
		case 178:
		case 188:
			return func_289(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_285(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_279(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
		
		case 233:
			return func_273(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_272(iParam1, iParam3);
		
		case 179:
			return 0;
		
		case 183:
			return 5;
		
		case 182:
			return 14;
		
		case 185:
			return 24;
		
		case 186:
			return 13;
		
		case 180:
			return 6;
		
		case 193:
			return 6;
		
		case 194:
			return 0;
		
		case 197:
			return 4;
		
		case 199:
			return 0;
		
		case 195:
			return 20;
		
		case 201:
			return 0;
		
		case 198:
			return 8;
		
		case 205:
			return 1;
		
		case 207:
			return 8;
		
		case 208:
			return 2;
		
		case 209:
			return 6;
		
		case 210:
			return 0;
		
		case 214:
			return 5;
		
		case 215:
			return 11;
		
		case 216:
			return 8;
		
		case 217:
			return 24;
		
		case 218:
			return 23;
		
		case 219:
			return 1;
		
		case 220:
			return 4;
		
		case 221:
			return 4;
		
		case 237:
		case 250:
			return func_271(iParam1, iParam3, iParam4);
		
		case 238:
		case 249:
			return func_270(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 11;
		
		case 241:
			return 3;
		
		case 242:
			return 5;
		
		case 244:
			return 4;
		
		case 248:
			return 1;
		
		case 243:
			return func_264(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		case 158:
			return func_258(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		case 181:
			return func_252(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		default:
	}
	return 0;
}

int func_252(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_257(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_256(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_255(func_168(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_254(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_253(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_253(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_254(int iParam0, int iParam1)
{
	return func_253(iParam0, iParam1) > 0;
}

int func_255(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

int func_256(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_257(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		default:
	}
	return 0;
}

int func_258(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0++;
			break;
		
		case 24:
			iVar0++;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 89:
					iVar0++;
					break;
				
				case 90:
					iVar0 += 2;
					break;
			}
			break;
		
		case 36:
			iVar0 += 2;
			break;
		
		case 37:
			iVar0 += 2;
			break;
		
		case 38:
			iVar0++;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 38:
					iVar0 += 3;
					break;
				
				case 39:
					iVar0 += 3;
					break;
				
				case 40:
					iVar0 += 4;
					break;
			}
			break;
		
		case 16:
			iVar0 += 12;
			break;
		
		case 35:
			iVar0 += 4;
			break;
		
		case 4:
			iVar0 += 16;
			break;
		
		case 46:
			iVar0++;
			break;
		
		case 9:
			iVar0 += 7;
			break;
		
		case 14:
			iVar0 += 7;
			break;
		
		case 17:
			iVar0 += 7;
			break;
		
		case 47:
			iVar0 += 2;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 6:
			iVar0 += 11;
			break;
		
		case 48:
			iVar0 += 2;
			break;
		
		case 44:
			iVar0 += 2;
			break;
		
		case 21:
			iVar0 += 8;
			break;
		
		case 22:
			iVar0 += 3;
			break;
		
		case 7:
			iVar0 += 7;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 2:
			iVar0++;
			break;
		
		case 34:
			iVar0 += 5;
			break;
		
		case 27:
			iVar0 += 9;
			break;
		
		case 26:
			iVar0 += 3;
			break;
		
		case 31:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 21;
			break;
		
		case 12:
			iVar0 += 20;
			break;
		
		case 41:
			iVar0 += 11;
			break;
		
		case 49:
			iVar0 += 3;
			break;
		
		case 29:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 50:
			iVar0 += 4;
			break;
		
		case 23:
			iVar0 += 4;
			break;
		
		case 20:
			iVar0 += 3;
			break;
		
		case 32:
			iVar0 = iVar0;
			break;
		
		case 51:
			iVar0 += 4;
			break;
		
		case 52:
			iVar0 += 6;
			break;
		
		case 39:
			iVar0 += 2;
			break;
		
		case 40:
			iVar0++;
			break;
		
		case 25:
			iVar0 += 3;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_263(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_262(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_261(func_168(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_260(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_259(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_259(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 27:
		case 49:
		case 48:
		case 6:
		case 50:
		case 7:
		case 16:
		case 47:
		case 5:
		case 25:
		case 26:
		case 22:
		case 11:
		case 17:
		case 14:
			return 2;
		
		default:
	}
	return 0;
}

bool func_260(int iParam0, int iParam1)
{
	return func_259(iParam0, iParam1) > 0;
}

int func_261(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	switch (iParam1)
	{
		case 43:
			return 3;
		
		case 17:
		case 18:
		case 15:
			return 2;
		
		case 12:
		case 13:
			if (iParam2 != func_52())
			{
				if (func_153(iParam2, 1))
				{
					Var0 = { func_206(iParam2) };
				}
			}
			else
			{
				return 4;
			}
			if (Var0.f_1 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 53:
			if (iParam0 == 1)
			{
			}
			break;
	}
	return 1;
}

int func_262(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 96:
		case 97:
		case 98:
		case 108:
		case 109:
		case 110:
		case 118:
		case 119:
		case 120:
		case 105:
		case 106:
		case 107:
			return 0;
		
		case 66:
		case 67:
		case 68:
		case 30:
		case 31:
		case 32:
		case 121:
		case 122:
		case 123:
			return 1;
		
		case 93:
		case 94:
		case 95:
			return 3;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		case 116:
		case 117:
			return 2;
		
		case 20:
			return 9;
		
		case 21:
			return 5;
		
		case 27:
		case 28:
		case 29:
			return 7;
		
		case 114:
		case 115:
			return iParam0;
		
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 4;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 38:
		case 39:
		case 40:
			switch (iParam0)
			{
				case 0:
					return 3;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 6;
				
				default:
			}
			break;
		
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 5;
				
				case 1:
					return 6;
				
				default:
			}
			break;
		
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 7;
				
				case 1:
					return 8;
				
				default:
			}
			break;
		
		case 33:
		case 34:
		case 35:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 51:
		case 52:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 36:
		case 37:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				case 1:
					return 21;
				
				case 2:
					return 22;
				
				case 3:
					return 23;
				
				default:
			}
			break;
		
		case 17:
		case 18:
		case 19:
			return 3;
		
		case 131:
			return 4;
	}
	return -1;
}

int func_263(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 53:
			return 0;
		
		default:
	}
	return 0;
}

int func_264(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 13:
			iVar0 += 4;
			break;
		
		case 1:
			iVar0 += 10;
			break;
		
		case 15:
			iVar0 += 21;
			break;
		
		case 14:
			iVar0 += 2;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 4;
					break;
				
				case 36:
					iVar0 += 5;
					break;
				
				case 37:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 += 5;
					break;
				
				case 1:
					iVar0 += 5;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0++;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 3;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 4;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 29:
					switch (iParam4)
					{
						case 0:
							iVar0 += 4;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 30:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
			}
			break;
		
		case 3:
			iVar0 += 6;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 7;
					break;
				
				case 13:
					iVar0 += 10;
					break;
				
				case 14:
					iVar0 += 8;
					break;
			}
			break;
		
		case 2:
			iVar0 += 3;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_210(iParam0))
		{
			iVar0 = (iVar0 + func_209(iParam0, iParam2));
		}
		iVar0 = (iVar0 + func_269(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_268(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_267(func_168(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (func_266(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_265(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_265(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

bool func_266(int iParam0, int iParam1)
{
	return func_265(iParam0, iParam1) > 0;
}

int func_267(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 6:
			if (iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_268(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				default:
			}
			break;
		
		case 35:
		case 36:
		case 37:
			return 0;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 0;
		
		case 28:
		case 29:
		case 30:
			return 0;
		
		case 18:
		case 19:
		case 20:
		case 21:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 31:
		case 32:
		case 33:
		case 34:
			return 0;
		
		case 38:
		case 39:
		case 40:
			return 0;
		
		case 12:
			return 6;
		
		case 13:
			return 9;
		
		case 14:
			return 7;
		
		case 22:
		case 23:
		case 24:
			return 0;
		
		case 25:
		case 26:
		case 27:
			return 0;
	}
	return -1;
}

int func_269(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		default:
	}
	return 0;
}

int func_270(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 4;
		
		case 2:
			return 6;
		
		case 3:
			return 1;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_271(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			switch (iParam1)
			{
				case 80:
					iVar0++;
					break;
				
				case 81:
					iVar0++;
					break;
				
				case 82:
					iVar0++;
					break;
			}
			break;
		
		case 22:
			iVar0 += 4;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 3;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case joaat("MPSV_LP0_31"):
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0++;
			break;
		
		case 20:
			iVar0 += 4;
			break;
		
		case 17:
			iVar0++;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 16:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 8;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 8;
			break;
		
		case 4:
		case 24:
		case 2:
			iVar0++;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 0:
			iVar0 += 3;
			break;
	}
	if (func_214(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_272(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 = iVar0;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 7;
					break;
				
				case 2:
					iVar0 += 6;
					break;
				
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 3;
					break;
				
				case 6:
					iVar0 += 2;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 4;
					break;
				
				case 9:
					iVar0 += 2;
					break;
				
				case 10:
					iVar0 += 2;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 2;
					break;
				
				case 14:
					iVar0 += 4;
					break;
				
				case 15:
					iVar0 += 6;
					break;
				
				case 16:
					iVar0 += 3;
					break;
				
				case 17:
					iVar0 += 3;
					break;
				
				case 18:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 5;
					break;
				
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 3;
					break;
				
				case 34:
					iVar0 += 5;
					break;
				
				case 35:
					iVar0 += 5;
					break;
				
				case 36:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0++;
					break;
				
				case 75:
					iVar0++;
					break;
				
				case 76:
					iVar0++;
					break;
				
				case 77:
					iVar0++;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 = iVar0;
					break;
				
				case joaat("MPSV_LP0_31"):
					iVar0 = iVar0;
					break;
				
				case 80:
					iVar0 = iVar0;
					break;
				
				case 81:
					iVar0 = iVar0;
					break;
				
				case 82:
					iVar0 = iVar0;
					break;
				
				case 83:
					iVar0 = iVar0;
					break;
				
				case 84:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 7:
			iVar0 += 4;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 6;
					break;
				
				case 63:
					iVar0 += 6;
					break;
				
				case 64:
					iVar0 += 6;
					break;
				
				case 65:
					iVar0 += 6;
					break;
				
				case 66:
					iVar0 += 6;
					break;
				
				case 67:
					iVar0 += 6;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 = iVar0;
					break;
				
				case 86:
					iVar0 = iVar0;
					break;
				
				case 87:
					iVar0 = iVar0;
					break;
				
				case 88:
					iVar0 = iVar0;
					break;
				
				case 89:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 4;
					break;
				
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 4;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if ((func_221(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_217(iParam0, func_322() + 1));
	}
	return iVar0;
}

int func_273(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 3:
			iVar0++;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 8:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0++;
			break;
		
		case 12:
			iVar0 += 2;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 = iVar0;
			break;
		
		case 13:
			iVar0 += 2;
			break;
		
		case 10:
			iVar0 += 4;
			break;
	}
	if (!bParam5)
	{
		if (func_228(iParam0))
		{
			if (iParam3 != func_52())
			{
				iVar0 = (iVar0 + func_225(iParam0, func_168(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_52())
		{
			iVar0 = (iVar0 + func_278(iParam0, func_168(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_277(0, iParam1) != -1)
		{
			if (iParam3 != func_52())
			{
				iVar0 = (iVar0 + func_276(func_168(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_275(iParam0))
		{
			iVar0 = (iVar0 + func_274(iParam0));
		}
	}
	return iVar0;
}

int func_274(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 8:
		case 1:
		case 12:
		case 10:
		case 11:
		case 13:
			return 2;
		
		default:
	}
	return 0;
}

bool func_275(int iParam0)
{
	return func_274(iParam0) > 0;
}

int func_276(var uParam0, int iParam1)
{
	return 2;
}

int func_277(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 136:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
	}
	return -1;
}

int func_278(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 8:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 1:
			iVar0 = func_43(5326, -1, 0);
			if (MISC::IS_BIT_SET(iVar0, 7))
			{
				if (iParam1 > 4)
				{
					return 4;
				}
				return iParam1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_279(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 11:
			iVar0 += 9;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 4:
			iVar0 += 10;
			break;
		
		case 8:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					iVar0++;
					break;
				
				case 1:
					iVar0++;
					break;
				
				case 2:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 5;
					break;
			}
			break;
		
		case 3:
			if (iParam2 >= 4)
			{
				iVar0 += 10;
			}
			else if (iParam2 == 3)
			{
				iVar0 += 8;
			}
			else if (iParam2 == 2)
			{
				iVar0 += 7;
			}
			else if (iParam2 == 1)
			{
				iVar0 += 6;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					iVar0++;
					break;
				
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 2;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 16:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 17:
			iVar0 += 5;
			break;
		
		case 26:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_240(iParam0))
		{
			if (iParam3 != func_52())
			{
				iVar0 = (iVar0 + func_232(iParam0, func_168(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_52())
		{
			iVar0 = (iVar0 + func_284(iParam0, func_168(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_283(0, iParam1) != -1)
		{
			if (iParam3 != func_52())
			{
				iVar0 = (iVar0 + func_282(func_168(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_281(iParam0))
		{
			iVar0 = (iVar0 + func_280(iParam0));
		}
	}
	return iVar0;
}

int func_280(int iParam0)
{
	switch (iParam0)
	{
		case 12:
		case 11:
		case 1:
		case 2:
		case 14:
		case 4:
		case 10:
		case 7:
		case 3:
		case 8:
		case 0:
		case 5:
			return 2;
		
		case 21:
		case 16:
		case 17:
			return 2;
		
		default:
	}
	return 0;
}

bool func_281(int iParam0)
{
	return func_280(iParam0) > 0;
}

int func_282(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (func_235(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_235(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_235(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_235(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_235(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_235(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_235(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_235(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_283(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					return 4;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 48:
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 28:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 0:
					return 6;
				
				case 1:
					return 7;
				
				case 2:
					return 8;
				
				case 3:
					return 9;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 40:
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 0;
				
				case 3:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_284(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 14:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 7:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 2:
		case 4:
		case 3:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 10:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 9:
			return 1;
		
		case 0:
			if (iParam1 > 1)
			{
				return 2;
			}
			return 1;
		
		case 8:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 5:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		case 13:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 11:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		default:
	}
	return SYSTEM::CEIL((IntToFloat(iParam1) / 2f));
}

int func_285(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 3;
					break;
				
				case 1:
					iVar0 += 3;
					break;
				
				case 2:
					iVar0 += 3;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 3;
					break;
				
				case 10:
					iVar0 += 3;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					iVar0 += 2;
					break;
				
				case 15:
					iVar0 += 4;
					break;
				
				case 13:
					iVar0 += 2;
					break;
			}
			break;
		
		case 5:
			iVar0 += 4;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 5;
					break;
				
				case 21:
					iVar0 += 5;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 4;
					break;
				
				case 23:
					iVar0 += 3;
					break;
				
				case 24:
					iVar0 += 3;
					break;
			}
			if (func_244(iParam0, func_322() + 1, -1, iParam2) == 1)
			{
				iVar0++;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 5;
					break;
				
				case 26:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 2;
					break;
				
				case 28:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
					iVar0 += 4;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 3;
					break;
				
				case 36:
					iVar0 += 3;
					break;
				
				case 37:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
	}
	if (!bParam4)
	{
		if (func_246(iParam0))
		{
			iVar0 = (iVar0 + func_244(iParam0, func_322() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_288(iParam0, func_322() + 1));
	}
	if (!bParam3)
	{
		if (func_287(iParam0))
		{
			iVar0 = (iVar0 + func_286(iParam0));
		}
	}
	return iVar0;
}

int func_286(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 19:
		case 8:
			return 2;
		
		default:
	}
	return 0;
}

bool func_287(int iParam0)
{
	return func_286(iParam0) > 0;
}

int func_288(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 == 1)
			{
				return 1;
			}
			return SYSTEM::FLOOR((IntToFloat(iParam1) / 1.5f));
		
		case 5:
			if (iParam1 == 1)
			{
				return 1;
			}
			return SYSTEM::FLOOR((IntToFloat(iParam1) / 2f));
		
		default:
	}
	return 0;
}

int func_289(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 = iVar0;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 13:
			iVar0 = iVar0;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 2;
					break;
				
				case 2:
					iVar0 += 2;
					break;
				
				case 3:
					iVar0 += 2;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 2;
					break;
				
				case 19:
					iVar0 += 2;
					break;
				
				case 20:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 7;
					break;
				
				case 22:
					iVar0 += 7;
					break;
				
				case 23:
					iVar0 += 7;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 = iVar0;
					break;
				
				case 28:
					iVar0 = iVar0;
					break;
				
				case 29:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 2;
					break;
				
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 7;
					break;
				
				case 38:
					iVar0 += 7;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 6;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 2;
					break;
				
				case 43:
					iVar0 += 2;
					break;
				
				case 44:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 6;
					break;
				
				case 46:
					iVar0 += 6;
					break;
				
				case 47:
					iVar0 += 6;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 2;
					break;
				
				case 49:
					iVar0 += 2;
					break;
				
				case 50:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 11;
			break;
	}
	iVar0 = (iVar0 + func_292(iParam0, func_322() + 1, iParam2));
	iVar0 = (iVar0 + func_290(iParam0));
	return iVar0;
}

int func_290(int iParam0)
{
	if (func_291(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_291(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_292(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	if (iVar0 == 0)
	{
		if (iParam0 == 8)
		{
			iVar0 = iParam2;
		}
		else
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_293(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			return 3;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 10:
			return 3;
		
		case 11:
			return 3;
		
		case 12:
			return 2;
		
		case 13:
			return 1;
		
		case 14:
			return 3;
		
		case 15:
			return 5;
		
		case 16:
			return 6;
		
		case 17:
			return 2;
		
		case 19:
			return 4;
		
		case 18:
			return 5;
		
		default:
	}
	return 2;
}

int func_294(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 167:
			return func_321(iParam1);
		
		case 168:
			return 12;
		
		case 170:
			return 4;
		
		case 171:
			return 0;
		
		case 172:
			return 0;
		
		case 173:
			return 4;
		
		case 178:
		case 188:
			return func_318(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_315(iParam1, iParam2, iParam3, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_312(iParam1, iParam2, iParam3, 0);
		
		case 233:
			return func_309(iParam1, iParam2, iParam3, 0);
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_308(iParam1, iParam2);
		
		case 179:
			return 0;
		
		case 183:
			return 15;
		
		case 182:
			return 20;
		
		case 185:
			return 21;
		
		case 186:
			return 36;
		
		case 180:
			return 10;
		
		case 193:
			return 10;
		
		case 194:
			return 0;
		
		case 197:
			return 12;
		
		case 199:
			return 6;
		
		case 195:
			return 15;
		
		case 201:
			return 0;
		
		case 198:
			return 18;
		
		case 205:
			return 1;
		
		case 207:
			return 24;
		
		case 208:
			return 14;
		
		case 209:
			return 11;
		
		case 210:
			return 0;
		
		case 214:
			return 12;
		
		case 215:
			return 20;
		
		case 216:
			return 20;
		
		case 217:
			return func_307();
		
		case 218:
			return func_306();
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		case 237:
		case 250:
			return func_305(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_304(iParam1, iParam2);
		
		case 239:
			return 6;
		
		case 240:
			return 11;
		
		case 241:
			return 14;
		
		case 242:
			return 14;
		
		case 244:
			return 9;
		
		case 248:
			return 10;
		
		case 243:
			return func_301(iParam1, iParam2, 0, -1);
		
		case 158:
			return func_298(iParam1, iParam2, 0, -1);
		
		case 181:
			return func_295(iParam1, iParam2, 0, -1);
		
		default:
	}
	return 0;
}

int func_295(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 2:
			iVar0 += 6;
			break;
	}
	if (!bParam2)
	{
		if (func_254(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_296(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_296(int iParam0, var uParam1)
{
	if (func_254(iParam0, uParam1))
	{
		return (func_253(iParam0, uParam1) + func_297(iParam0, uParam1));
	}
	return 0;
}

int func_297(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_298(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 += 6;
			break;
		
		case 24:
			iVar0 += 2;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 12;
					break;
				
				case 31:
				case 32:
					iVar0 += 10;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 88:
					iVar0 += 10;
					break;
				
				case 89:
					iVar0 += 9;
					break;
				
				case 90:
					iVar0 += 10;
					break;
			}
			break;
		
		case 36:
			iVar0 += 9;
			break;
		
		case 43:
			iVar0 += 6;
			break;
		
		case 38:
			iVar0 += 6;
			break;
		
		case 40:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 += 16;
			break;
		
		case 16:
			iVar0 += 14;
			break;
		
		case 35:
			iVar0 += 13;
			break;
		
		case 4:
			iVar0 += 32;
			break;
		
		case 45:
			iVar0 += 2;
			break;
		
		case 46:
			iVar0 += 9;
			break;
		
		case 9:
			iVar0 += 15;
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 17:
			iVar0 += 14;
			break;
		
		case 47:
			iVar0 += 13;
			break;
		
		case 11:
			iVar0 += 11;
			break;
		
		case 18:
			iVar0 += 24;
			break;
		
		case 6:
			iVar0 += 14;
			break;
		
		case 48:
			iVar0 += 15;
			break;
		
		case 44:
			iVar0 += 9;
			break;
		
		case 21:
			iVar0 += 20;
			break;
		
		case 22:
			iVar0 += 14;
			break;
		
		case 7:
			iVar0 += 22;
			break;
		
		case 15:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 34:
			iVar0 += 18;
			break;
		
		case 27:
			iVar0 += 16;
			break;
		
		case 26:
			iVar0 += 10;
			break;
		
		case 23:
			iVar0 += 10;
			break;
		
		case 31:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 14;
			break;
		
		case 12:
			iVar0 += 7;
			break;
		
		case 41:
			iVar0 += 10;
			break;
		
		case 49:
			iVar0 += 30;
			break;
		
		case 19:
			iVar0 += 15;
			break;
		
		case 5:
			iVar0 += 7;
			break;
		
		case 30:
			iVar0++;
			break;
		
		case 13:
			iVar0 += 20;
			break;
		
		case 29:
			iVar0 += 9;
			break;
		
		case 50:
			iVar0 += 24;
			break;
		
		case 20:
			iVar0 += 26;
			break;
		
		case 32:
			iVar0 += 30;
			break;
		
		case 28:
			iVar0 += 3;
			break;
		
		case 42:
			iVar0 += 13;
			break;
		
		case 52:
			iVar0 += 12;
			break;
		
		case 39:
			iVar0 += 5;
			break;
		
		case 37:
			iVar0 += 6;
			break;
		
		case 25:
			iVar0 += 6;
			break;
		
		case 51:
			iVar0 += 20;
			break;
	}
	if (!bParam2)
	{
		if (func_260(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_299(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_299(int iParam0, int iParam1)
{
	if (func_260(iParam0, iParam1))
	{
		return (func_259(iParam0, iParam1) + func_300(iParam0, iParam1));
	}
	return 0;
}

int func_300(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 49:
		case 48:
		case 7:
		case 16:
		case 5:
		case 26:
		case 22:
		case 25:
		case 11:
		case 17:
		case 14:
			return 2;
		
		case 6:
		case 50:
		case 47:
			return 4;
		
		case 27:
			return 2;
		
		default:
	}
	return 0;
}

int func_301(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 13:
			iVar0 += 8;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 2:
					iVar0 += 10;
					break;
				
				case 3:
					iVar0 += 10;
					break;
				
				case 4:
					iVar0 += 14;
					break;
				
				case 5:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			iVar0 += 20;
			break;
		
		case 14:
			iVar0 += 19;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 6;
					break;
				
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 17;
					break;
			}
			break;
		
		case 6:
			iVar0 += 8;
			break;
		
		case 5:
			iVar0 += 11;
			break;
		
		case 0:
			iVar0 += 12;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0++;
					break;
				
				case 32:
					iVar0 += 7;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 12:
			iVar0 += 30;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					iVar0 += 10;
					break;
				
				case 29:
					iVar0 += 8;
					break;
				
				case 30:
					iVar0 += 9;
					break;
			}
			break;
		
		case 3:
			iVar0 += 19;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 12;
					break;
				
				case 13:
					iVar0 += 14;
					break;
				
				case 14:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam2)
	{
		if (func_266(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_302(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_302(int iParam0, int iParam1)
{
	if (func_266(iParam0, iParam1))
	{
		return (func_265(iParam0, iParam1) + func_303(iParam0, iParam1));
	}
	return 0;
}

int func_303(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

int func_304(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 14;
		
		case 1:
			return 7;
		
		case 2:
			return 27;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			switch (iParam1)
			{
				case 0:
				case 2:
					return 11;
				
				case 1:
					return 9;
				
				default:
			}
			break;
	}
	return 0;
}

int func_305(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					iVar0 += 19;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case joaat("MPSV_LP0_31"):
					iVar0 += 2;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 9;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 80:
				case 81:
				case 82:
					iVar0 += 3;
					break;
			}
			break;
		
		case 22:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0 += 3;
			break;
		
		case 20:
			iVar0 += 12;
			break;
		
		case 18:
			iVar0 += 20;
			break;
		
		case 17:
			iVar0 += 9;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 5;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 17;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 1:
			iVar0 += 30;
			break;
		
		case 2:
			iVar0 += 4;
			break;
		
		case 5:
			iVar0 += 16;
			break;
	}
	return iVar0;
}

int func_306()
{
	int iVar0;
	
	iVar0 = 32;
	return iVar0;
}

int func_307()
{
	int iVar0;
	
	iVar0 = 8;
	return iVar0;
}

int func_308(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 16;
					break;
				
				case 2:
					iVar0 += 14;
					break;
				
				case 3:
					iVar0 += 13;
					break;
				
				case 4:
					iVar0 += 12;
					break;
				
				case 5:
					iVar0 += 12;
					break;
				
				case 6:
					iVar0 += 12;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 12;
					break;
				
				case 8:
					iVar0 += 12;
					break;
				
				case 9:
					iVar0 += 12;
					break;
				
				case 10:
					iVar0 += 12;
					break;
				
				case 11:
					iVar0 += 12;
					break;
				
				case 12:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 17;
					break;
				
				case 14:
					iVar0 += 12;
					break;
				
				case 15:
					iVar0 += 13;
					break;
				
				case 16:
					iVar0 += 14;
					break;
				
				case 17:
					iVar0 += 12;
					break;
				
				case 18:
					iVar0 += 14;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 14;
					break;
				
				case 20:
					iVar0 += 14;
					break;
				
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
				
				case 24:
					iVar0 += 14;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					iVar0 += 4;
					break;
				
				case 26:
					iVar0 += 4;
					break;
				
				case 27:
					iVar0 += 4;
					break;
				
				case 28:
					iVar0 += 4;
					break;
				
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 13;
					break;
				
				case 32:
					iVar0 += 13;
					break;
				
				case 33:
					iVar0 += 13;
					break;
				
				case 34:
					iVar0 += 13;
					break;
				
				case 35:
					iVar0 += 13;
					break;
				
				case 36:
					iVar0 += 13;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0 += 10;
					break;
				
				case 75:
					iVar0 += 10;
					break;
				
				case 76:
					iVar0 += 10;
					break;
				
				case 77:
					iVar0 += 10;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 += 3;
					break;
				
				case joaat("MPSV_LP0_31"):
					iVar0 += 3;
					break;
				
				case 80:
					iVar0 += 3;
					break;
				
				case 81:
					iVar0 += 3;
					break;
				
				case 82:
					iVar0 += 5;
					break;
				
				case 83:
					iVar0 += 3;
					break;
				
				case 84:
					iVar0 += 3;
					break;
			}
			break;
		
		case 7:
			iVar0 += 8;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 8;
					break;
				
				case 63:
					iVar0 += 8;
					break;
				
				case 64:
					iVar0 += 8;
					break;
				
				case 65:
					iVar0 += 8;
					break;
				
				case 66:
					iVar0 += 8;
					break;
				
				case 67:
					iVar0 += 8;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 += 3;
					break;
				
				case 86:
					iVar0 += 3;
					break;
				
				case 87:
					iVar0 += 3;
					break;
				
				case 88:
					iVar0 += 3;
					break;
				
				case 89:
					iVar0 += 3;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 18;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 8;
					break;
				
				case 39:
					iVar0 += 8;
					break;
				
				case 40:
					iVar0 += 8;
					break;
				
				case 41:
					iVar0 += 8;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if (iParam0 == 12 || iParam0 == 9)
	{
		iVar0 = (iVar0 + func_217(iParam0, func_322() + 1));
	}
	return iVar0;
}

int func_309(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 14;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 3:
			iVar0 += 23;
			break;
		
		case 4:
			iVar0 += 20;
			break;
		
		case 5:
			iVar0 += 5;
			break;
		
		case 8:
			iVar0 += 11;
			break;
		
		case 6:
			iVar0 += 7;
			break;
		
		case 12:
			iVar0 += 8;
			break;
		
		case 7:
			iVar0 += 18;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 12;
			break;
		
		case 13:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 16;
			break;
	}
	if (!bParam3)
	{
		if (func_275(iParam0))
		{
			iVar0 = (iVar0 + func_310(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_310(int iParam0, var uParam1)
{
	if (func_275(iParam0))
	{
		return (func_274(iParam0) + func_311(iParam0, uParam1));
	}
	return 0;
}

int func_311(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		
		case 2:
		case 12:
		case 1:
		case 11:
		case 10:
			return 2;
		
		case 8:
			return 4;
		
		default:
	}
	return 0;
}

int func_312(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			iVar0 += 16;
			break;
		
		case 11:
			iVar0 += 21;
			break;
		
		case 1:
			iVar0 += 4;
			break;
		
		case 14:
			iVar0 += 15;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 15;
			break;
		
		case 4:
			iVar0 += 9;
			break;
		
		case 10:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 7;
			break;
		
		case 8:
			iVar0 += 2;
			break;
		
		case 5:
			iVar0 += 10;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 7:
					iVar0 += 17;
					break;
				
				default:
					iVar0 += 16;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 10;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 26:
			iVar0 += 2;
			break;
	}
	if (!bParam3)
	{
		if (func_281(iParam0))
		{
			iVar0 = (iVar0 + func_313(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_313(int iParam0, int iParam1)
{
	if (func_281(iParam0))
	{
		return (func_280(iParam0) + func_314(iParam0, iParam1));
	}
	return 0;
}

int func_314(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
		case 14:
		case 2:
		case 10:
		case 5:
			return 2;
		
		case 1:
		case 0:
			return 4;
		
		case 4:
			return 1;
		
		case 12:
			switch (iParam1)
			{
				case 2:
					return 2;
				
				default:
			}
			break;
		
		case 21:
			return 2;
		
		case 17:
			return 4;
	}
	return 0;
}

int func_315(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 18;
					break;
				
				case 1:
					iVar0 += 18;
					break;
				
				case 2:
					iVar0 += 18;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 4;
					break;
				
				case 10:
					iVar0 += 4;
					break;
				
				case 11:
					iVar0 += 4;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 13:
					iVar0 += 20;
					break;
				
				case 14:
					iVar0 += 20;
					break;
				
				case 15:
					iVar0 += 20;
					break;
			}
			break;
		
		case 5:
			iVar0 += 12;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 24;
					break;
				
				case 20:
					iVar0 += 24;
					break;
				
				case 21:
					iVar0 += 24;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 12;
					break;
				
				case 23:
					iVar0 += 12;
					break;
				
				case 24:
					iVar0 += 12;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 16;
					break;
				
				case 26:
					iVar0 += 15;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 25;
					break;
				
				case 28:
					iVar0 += 25;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 15;
					break;
				
				case 30:
					iVar0 += 15;
					break;
				
				case 31:
					iVar0 += 15;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 12;
					break;
				
				case 33:
					iVar0 += 12;
					break;
				
				case 34:
					iVar0 += 12;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 22;
					break;
				
				case 36:
					iVar0 += 22;
					break;
				
				case 37:
					iVar0 += 22;
					break;
			}
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 20:
			iVar0 += 22;
			break;
	}
	if (!bParam3)
	{
		if (func_287(iParam0))
		{
			iVar0 = (iVar0 + func_316(iParam0));
		}
	}
	return iVar0;
}

int func_316(int iParam0)
{
	if (func_287(iParam0))
	{
		return (func_286(iParam0) + func_317(iParam0));
	}
	return 0;
}

int func_317(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 12:
		case 13:
		case 17:
		case 11:
			return 2;
		
		case 15:
		case 16:
		case 19:
			return 3;
		
		case 10:
		case 8:
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_318(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 6;
			break;
		
		case 2:
			iVar0 += 10;
			break;
		
		case 12:
			iVar0 += 11;
			break;
		
		case 13:
			iVar0 += 10;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 12;
					break;
				
				case 2:
					iVar0 += 12;
					break;
				
				case 3:
					iVar0 += 12;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 8;
					break;
				
				case 19:
					iVar0 += 8;
					break;
				
				case 20:
					iVar0 += 8;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 14;
					break;
				
				case 28:
					iVar0 += 14;
					break;
				
				case 29:
					iVar0 += 14;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 3;
					break;
				
				case 31:
					iVar0 += 3;
					break;
				
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 18;
					break;
				
				case 37:
					iVar0 += 18;
					break;
				
				case 38:
					iVar0 += 18;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 10;
					break;
				
				case 43:
					iVar0 += 10;
					break;
				
				case 44:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 17;
					break;
				
				case 46:
					iVar0 += 17;
					break;
				
				case 47:
					iVar0 += 17;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 11;
					break;
				
				case 49:
					iVar0 += 11;
					break;
				
				case 50:
					iVar0 += 11;
					break;
			}
			break;
	}
	iVar0 = (iVar0 + func_319(iParam0));
	return iVar0;
}

int func_319(int iParam0)
{
	if (func_291(iParam0))
	{
		if (func_320(iParam0))
		{
			return 4;
		}
		return 2;
	}
	return 0;
}

int func_320(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_321(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 5;
		
		case 4:
			return 12;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 2;
		
		case 8:
			return 12;
		
		case 9:
			return 12;
		
		case 10:
			return 9;
		
		case 11:
			return 8;
		
		case 12:
			return 7;
		
		case 13:
			return 5;
		
		case 14:
			return 12;
		
		case 15:
			return 13;
		
		case 16:
			return 5;
		
		case 17:
			return 15;
		
		case 19:
			return 4;
		
		case 18:
			return 11;
		
		default:
	}
	return 8;
}

int func_322()
{
	if (func_323() == func_52())
	{
		return 0;
	}
	return func_168(func_323());
}

int func_323()
{
	return Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11;
}

int func_324()
{
	return func_154(PLAYER::PLAYER_ID());
}

int func_325(int iParam0)
{
	if (func_327())
	{
		if (Global_2409287.f_2 == 0)
		{
			Global_2409287.f_6 = 1;
			Global_2409287.f_4 = iParam0;
			Global_2409287.f_2++;
		}
		if (Global_2409287.f_2 == 1)
		{
			if (!Global_2409287.f_6)
			{
				Global_2409287.f_2 = 0;
				func_326();
				return 1;
			}
		}
	}
	return 0;
}

void func_326()
{
	Global_2409287.f_8 = 1;
	Global_2409287.f_11 = 0;
	Global_2409287.f_12 = 0;
	Global_2409287.f_4 = 1;
	Global_2409287.f_9 = 0;
	Global_2409287.f_2 = 0;
}

int func_327()
{
	int iVar0;
	
	iVar0 = func_364();
	if ((((((iVar0 > -1 && !Global_1323615[iVar0 /*141*/].f_66 == 0) && !MISC::IS_BIT_SET(Global_1323615[iVar0 /*141*/].f_102, 1)) && !MISC::IS_BIT_SET(Global_1323615[iVar0 /*141*/].f_102, 6)) && !func_363(0)) && !func_363(31)) && func_328())
	{
		return 1;
	}
	return 0;
}

int func_328()
{
	int iVar0;
	
	iVar0 = func_362();
	if (((((((((((((((((((((((((((func_361() || func_360()) || func_349()) || (func_348() && !func_346())) || (func_61() && !func_345())) || func_344(PLAYER::PLAYER_ID())) || func_343(PLAYER::PLAYER_ID())) || func_342(PLAYER::PLAYER_ID())) || func_341()) || func_338()) || func_337()) || func_336()) || func_335()) || (func_334() && !func_345())) || (func_14() && !func_8(PLAYER::PLAYER_ID(), 1, 0))) || func_15(PLAYER::PLAYER_ID(), 0)) || Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 10) || Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 11) || Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 12) || Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 13) || Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 14) || Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 15) || Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 1) || Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 3) || Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 8) || Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 122) || func_333()) || (func_332() && (func_331() || func_329())))
	{
		return 0;
	}
	else if (iVar0 != -1)
	{
		if (((((((((Global_1590535[iVar0 /*876*/] == 10 || Global_1590535[iVar0 /*876*/] == 11) || Global_1590535[iVar0 /*876*/] == 12) || Global_1590535[iVar0 /*876*/] == 13) || Global_1590535[iVar0 /*876*/] == 14) || Global_1590535[iVar0 /*876*/] == 15) || Global_1590535[iVar0 /*876*/] == 1) || Global_1590535[iVar0 /*876*/] == 3) || Global_1590535[iVar0 /*876*/] == 8) || Global_1590535[iVar0 /*876*/] == 122)
		{
			return 0;
		}
	}
	return 1;
}

int func_329()
{
	if (func_330() == 1 || func_330() == 4)
	{
		return 1;
	}
	return 0;
}

int func_330()
{
	return Global_1312467.f_18;
}

int func_331()
{
	if (func_330() == 3 || func_330() == 2)
	{
		return 1;
	}
	return 0;
}

bool func_332()
{
	return MISC::IS_BIT_SET(Global_2451426.f_1.f_2809, 5);
}

int func_333()
{
	if (((Global_1662006 && !Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 6) && !Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_551 >= 0) && !Global_1662008)
	{
		return 1;
	}
	return 0;
}

var func_334()
{
	return Global_2450632.f_726;
}

var func_335()
{
	return Global_2450632.f_621;
}

bool func_336()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_39.f_18, 14);
}

var func_337()
{
	return Global_1574410;
}

int func_338()
{
	if (func_340(PLAYER::PLAYER_ID()) || func_339(PLAYER::PLAYER_ID()))
	{
		if (func_97() == 26)
		{
			return 1;
		}
	}
	return 0;
}

bool func_339(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

bool func_340(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_341()
{
	return MISC::IS_BIT_SET(Global_2450632.f_569.f_1, 0);
}

bool func_342(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 4;
}

bool func_343(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 6;
}

bool func_344(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 5;
}

bool func_345()
{
	return Global_2450632.f_39.f_57;
}

int func_346()
{
	if (func_347())
	{
		return 1;
	}
	if ((Global_2405072.f_26.f_7 > 0 && !Global_2405072.f_26.f_8) && !Global_2405072.f_26.f_4)
	{
		return 1;
	}
	return 0;
}

bool func_347()
{
	return Global_1312854;
}

var func_348()
{
	return Global_2405072.f_26.f_1;
}

int func_349()
{
	if (func_359())
	{
		return 1;
	}
	return func_350(func_364());
}

int func_350(int iParam0)
{
	if (iParam0 > -1)
	{
		if (((func_340(PLAYER::PLAYER_ID()) || func_339(PLAYER::PLAYER_ID())) || (func_356() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || MISC::IS_BIT_SET(Global_4456448.f_34, 21))
		{
			if ((func_355(Global_1323615[iParam0 /*141*/].f_66) || (func_353(Global_1323615[iParam0 /*141*/].f_66) && func_352(Global_1323615[iParam0 /*141*/].f_66))) || func_351(Global_1323615[iParam0 /*141*/].f_66))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_351(int iParam0)
{
	switch (iParam0)
	{
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("imperator"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("zr380"):
		case joaat("zr3802"):
		case joaat("zr3803"):
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
		case joaat("minitank"):
			return 1;
			break;
	}
	return 0;
}

int func_352(int iParam0)
{
	switch (iParam0)
	{
		case joaat("apc"):
			return Global_262145.f_21254;
		
		case joaat("ardent"):
			return Global_262145.f_21255;
		
		case joaat("nightshark"):
			return Global_262145.f_21256;
		
		case joaat("insurgent3"):
			return Global_262145.f_21257;
		
		case joaat("technical3"):
			return Global_262145.f_21258;
		
		case joaat("halftrack"):
			return Global_262145.f_21259;
		
		case joaat("trailersmall2"):
			return Global_262145.f_21260;
		
		case joaat("tampa3"):
			return Global_262145.f_21261;
		
		case joaat("dune3"):
			return Global_262145.f_21262;
		
		case joaat("oppressor"):
			return Global_262145.f_21263;
		
		case joaat("vigilante"):
			return Global_262145.f_22342;
		
		case joaat("thruster"):
			return Global_262145.f_22908;
		
		case joaat("deluxo"):
			return Global_262145.f_22909;
			break;
		
		case joaat("stromberg"):
			return Global_262145.f_22910;
		
		case joaat("riot2"):
			return Global_262145.f_22911;
		
		case joaat("chernobog"):
			return Global_262145.f_22912;
		
		case joaat("barrage"):
			return Global_262145.f_22913;
		
		case joaat("khanjali"):
			return Global_262145.f_22914;
		
		case joaat("comet4"):
			return Global_262145.f_22915;
		
		case joaat("savestra"):
			return Global_262145.f_22916;
		
		case joaat("revolter"):
			return Global_262145.f_22918;
		
		case joaat("avenger"):
			return Global_262145.f_22919;
		
		case joaat("volatol"):
			return Global_262145.f_22920;
		
		case joaat("akula"):
			return Global_262145.f_22921;
		
		case joaat("oppressor2"):
			return Global_262145.f_22922;
		
		case joaat("scramjet"):
			return Global_262145.f_22923;
	}
	if (iParam0 == joaat("viseris"))
	{
		return Global_262145.f_22917;
	}
	return 0;
}

int func_353(int iParam0)
{
	switch (iParam0)
	{
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("oppressor"):
		case joaat("tampa3"):
		case joaat("trailersmall2"):
		case joaat("trailerlarge"):
		case joaat("technical3"):
		case joaat("insurgent3"):
		case joaat("phantom3"):
		case joaat("ardent"):
		case joaat("nightshark"):
		case joaat("hauler2"):
		case joaat("caddy3"):
		case joaat("vigilante"):
		case joaat("thruster"):
		case joaat("deluxo"):
		case joaat("stromberg"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("barrage"):
		case joaat("khanjali"):
		case joaat("avenger"):
		case joaat("volatol"):
		case joaat("akula"):
		case joaat("caracara"):
		case joaat("menacer"):
		case joaat("scramjet"):
		case joaat("oppressor2"):
		case joaat("paragon2"):
			return 1;
		
		default:
	}
	if (func_354(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_354(int iParam0)
{
	switch (iParam0)
	{
		case joaat("scarab"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("monster3"):
		case joaat("dominator4"):
		case joaat("impaler2"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("deathbike"):
		case joaat("zr380"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
			return 1;
		
		default:
	}
	return 0;
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case joaat("voltic2"):
		case joaat("ruiner2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("phantom2"):
		case joaat("technical2"):
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("rcbandito"):
			return 1;
		
		default:
	}
	return 0;
}

int func_356()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_358();
	}
	return func_357(Global_4456448.f_194990);
}

int func_357(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_358()
{
	return Global_2450632.f_17;
}

bool func_359()
{
	return Global_2405072.f_26;
}

var func_360()
{
	return Global_1661978;
}

var func_361()
{
	return Global_2439138.f_502.f_64;
}

var func_362()
{
	return Global_2450632.f_663;
}

bool func_363(int iParam0)
{
	if (iParam0 < 32)
	{
		return MISC::IS_BIT_SET(Global_2439138.f_502.f_1, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2439138.f_502.f_2, (iParam0 - 32));
}

int func_364()
{
	if (Global_2097152[func_365() /*10930*/].f_6174.f_2 >= 307)
	{
		Global_2097152[func_365() /*10930*/].f_6174.f_2 = -1;
		return -1;
	}
	return Global_2097152[func_365() /*10930*/].f_6174.f_2;
}

int func_365()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_366()
{
	var uVar0;
	
	func_373(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_372())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_371())
	{
		return 1;
	}
	if (func_370(159))
	{
		if (!func_369())
		{
			return 1;
		}
	}
	if (func_370(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_367() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_367()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_367()
{
	switch (func_139())
	{
		case 0:
			return func_368();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_368()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_369()
{
	return Global_2450632.f_598;
}

int func_370(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_371()
{
	return Global_2460680;
}

bool func_372()
{
	return Global_2450632.f_593;
}

void func_373(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
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
					func_374(iVar0);
					break;
				
				case 589125870:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var3, 4);
					if (Var3.f_2 == 653923311)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_374(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_8(Var0.f_1, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_375(iVar2, &bVar3))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, Var0.f_2);
						}
						if (bVar3)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_375(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_376()
{
	func_377();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_377()
{
	Global_4254512.f_9 = 0;
	func_378();
	if (CAM::DOES_CAM_EXIST(iLocal_116))
	{
		CAM::DESTROY_CAM(iLocal_116, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_117))
	{
		CAM::DESTROY_CAM(iLocal_117, false);
	}
	if (iLocal_121)
	{
		if (func_8(PLAYER::PLAYER_ID(), 0, 1))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
}

void func_378()
{
	struct<40> Var0;
	
	Var0.f_4 = 1;
	Var0.f_5 = 1;
	Var0.f_18 = 1;
	Var0.f_22 = 1125515264;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_26 = -1;
	Global_2409287 = { Var0 };
}

bool func_379()
{
	return Global_1312758;
}

