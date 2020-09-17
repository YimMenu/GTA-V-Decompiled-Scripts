void __EntryFunction__()
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_19 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	Local_60 = { -1124.392f, -514.7001f, 33.21493f };
	fLocal_63 = 200f;
	Local_64 = { 2490f, 3777f, 2402.879f };
	Local_67 = { -2052f, 3237f, 1450.078f };
	iLocal_159 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_62(1);
	}
	iLocal_155 = 2;
	if (func_61(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(func_60(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 40000f)
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					Global_111638.f_25068.f_8 = 1;
				}
			}
		}
	}
	MISC::_0x6F2135B6129620C1(1);
	while (true)
	{
		if (!func_61(PLAYER::PLAYER_PED_ID()))
		{
			return;
		}
		func_56();
		switch (iLocal_154)
		{
			case 0:
				func_23();
				break;
			
			case 1:
				func_13();
				break;
			
			case 2:
				func_11();
				break;
			
			case 3:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	if (func_10())
	{
		func_8();
		func_6(Global_111638.f_25068);
	}
	Global_111638.f_25068.f_8 = 1;
	func_5(65, 0, 0);
	func_4();
	func_2();
	iLocal_154 = 0;
}

int func_2()
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_98783.f_8)
	{
		if (Global_98783.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98783.f_10 > 1)
	{
		return 0;
	}
	Global_98783.f_10++;
	return 1;
}

bool func_3(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

void func_4()
{
	Global_111635 = 0;
}

void func_5(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = MISC::IS_BIT_SET(Global_31146[iVar0].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != MISC::IS_BIT_SET(Global_31146[iVar0].f_11, 0))
	{
		MISC::SET_BIT(&(Global_31146[iVar0].f_11), 18);
		if (Global_31143 == 1)
		{
			Global_31144 = 1;
		}
		Global_31143 = 1;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_31146[iVar0].f_11), 0);
		MISC::SET_BIT(&(Global_31146[iVar0].f_11), 15);
		MISC::SET_BIT(&(Global_31146[iVar0].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_31146[iVar0].f_11), 0);
		MISC::CLEAR_BIT(&(Global_31146[iVar0].f_11), 15);
	}
	if (!MISC::IS_BIT_SET(Global_31146[iVar0].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_31146[iVar0].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
			HUD::REMOVE_BLIP(&(Global_31146[iVar0].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
		}
	}
}

void func_6(int iParam0)
{
	func_7(iParam0);
	switch (iParam0)
	{
		case 0:
			Global_111638.f_25068 = 1;
			Global_111638.f_25068.f_3 = 1;
			break;
		
		case 1:
			Global_111638.f_25068 = 2;
			Global_111638.f_25068.f_4 = 1;
			break;
		
		case 2:
			Global_111638.f_25068 = 3;
			Global_111638.f_25068.f_5 = 1;
			break;
		
		case 3:
			Global_111638.f_25068 = 4;
			Global_111638.f_25068.f_6 = 1;
			break;
		
		case 4:
			Global_111638.f_25068 = 0;
			Global_111638.f_25068.f_7 = 1;
			break;
	}
}

void func_7(int iParam0)
{
	iVar0 = 0;
	STATS::STAT_GET_INT(442880504, &iVar0, -1);
	if (iVar0 < iParam0 + 1)
	{
		STATS::STAT_SET_INT(442880504, iParam0 + 1, 1);
	}
}

void func_8()
{
	HUD::CLEAR_HELP(1);
	StringCopy(&cVar0, "CRACEWIN", 16);
	StringIntConCat(&cVar0, Global_111638.f_25068 + 1, 16);
	func_9(&cVar0, -1);
}

void func_9(char[4] cParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

bool func_10()
{
	return Global_111635;
}

void func_11()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(2037466602) == 0)
	{
		func_12(&Global_111636);
		Global_111636 = -1;
		iLocal_155 = 2;
		iLocal_154 = 3;
	}
}

void func_12(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41393)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41392 = 0;
	Global_41394 = 0;
	Global_41431 = 15;
	Global_61509 = 0;
	Global_61510 = 0;
}

void func_13()
{
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_22();
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	SCRIPT::REQUEST_SCRIPT("Country_Race");
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	MISC::CLEAR_AREA_OF_PROJECTILES(func_60(), 20f, 0);
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(2037466602) == 0)
	{
		if (SCRIPT::HAS_SCRIPT_LOADED("Country_Race"))
		{
			if (iLocal_155 == 2)
			{
				iLocal_155 = func_17(&Global_111636, 2, 9, 0, 0);
			}
			else if (iLocal_155 == 1)
			{
				func_15(&uLocal_157, 0);
				func_14(&uLocal_156, 0);
				SYSTEM::START_NEW_SCRIPT("Country_Race", 4500);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("Country_Race");
				iLocal_154 = 2;
			}
			else if (iLocal_155 == 0)
			{
				func_62(0);
			}
		}
	}
}

void func_14(var uParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
			}
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam0, -8f, 1);
			if (ENTITY::IS_ENTITY_ATTACHED(*uParam0))
			{
				ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
			}
		}
		if (bParam1)
		{
			VEHICLE::DELETE_VEHICLE(uParam0);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
}

void func_15(var uParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(*uParam0))
			{
				if ((ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(*uParam0) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0)) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(*uParam0))
				{
					ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
				}
				ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
			{
				ENTITY::SET_ENTITY_COLLISION(*uParam0, 1, 0);
			}
			if (PED::IS_PED_GROUP_MEMBER(*uParam0, func_16()))
			{
				PED::REMOVE_PED_FROM_GROUP(*uParam0);
			}
			if (!bParam1)
			{
				PED::SET_PED_KEEP_TASK(*uParam0, 1);
			}
		}
		if (bParam1)
		{
			PED::DELETE_PED(uParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
}

var func_16()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_17(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96222.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_21(0))
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_41431 = iParam2;
		Global_41393 = *uParam0;
		Global_41394 = iParam4;
		Global_41392 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41392 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41392)
			{
				if (Global_41398[iVar0] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41393 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_19(iParam2))
		{
			return 0;
		}
		if (Global_41392 == 8)
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		Global_41398[Global_41392] = Global_41395;
		Global_41398[Global_41392].f_1 = iParam1;
		Global_41398[Global_41392].f_2 = iParam2;
		Global_41398[Global_41392].f_3 = 0;
		Global_41392++;
		if (iParam4 != 0)
		{
			func_18(uParam0, iParam4);
		}
	}
	return 2;
}

void func_18(var uParam0, int iParam1)
{
	if (Global_41392 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41392)
	{
		if (Global_41398[iVar0] == *uParam0)
		{
			Global_41398[iVar0].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_19(int iParam0)
{
	return func_20(iParam0, Global_41431);
}

int func_20(int iParam0, int iParam1)
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

int func_21(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_19(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_22()
{
	Global_22211.f_6 = 1;
}

void func_23()
{
	if (func_43())
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_60(), 5f, 5f, 5f, 1, 1, 0))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
			PED::SET_IK_TARGET(uLocal_157, 1, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 0, 150, 400);
			if (func_41())
			{
				if (func_38())
				{
					func_35();
					func_33();
					func_32();
					if (((!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !func_31(1)) && !func_30(0)) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1779901043) == 0)
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 51))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							HUD::CLEAR_HELP(1);
							MISC::CLEAR_AREA_OF_PROJECTILES(func_60(), 20f, 0);
							ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
							ENTITY::SET_ENTITY_INVINCIBLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
							HUD::HIDE_HELP_TEXT_THIS_FRAME();
							iLocal_154 = 1;
						}
					}
				}
				else
				{
					func_28();
					func_27();
				}
			}
			else
			{
				func_24();
				func_27();
			}
		}
		else
		{
			func_24();
			func_27();
		}
	}
	else
	{
		func_24();
		func_27();
	}
}

void func_24()
{
	Var0 = { func_26() };
	if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("C_RACE", 3) && (func_25(&Var0) || func_25("CRACECAR")))
	{
		HUD::CLEAR_HELP(1);
	}
}

bool func_25(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

struct<4> func_26()
{
	StringCopy(&Var0, "CRACEHELP", 16);
	StringIntConCat(&Var0, Global_111638.f_25068 + 1, 16);
	return Var0;
}

void func_27()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(0);
	}
	iLocal_159 = 1;
}

void func_28()
{
	if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("C_RACE", 3))
	{
		if (!func_25("CRACECAR") && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1779901043) == 0)
		{
			HUD::CLEAR_HELP(1);
			func_29("CRACECAR", 1, 1, -1);
		}
	}
}

void func_29(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, iParam1, iParam2, iParam3);
}

int func_30(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7356, 14))
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_31(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

void func_32()
{
	if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("C_RACE", 3))
	{
		Var0 = { func_26() };
		if (!func_25(&Var0) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1779901043) == 0)
		{
			HUD::CLEAR_HELP(1);
			func_29(&Var0, 1, 1, -1);
		}
	}
}

void func_33()
{
	if (((((CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 3 && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 4) && !CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND()) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && func_34(uLocal_157)) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 20f)
	{
		if (iLocal_159)
		{
			if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(uLocal_157, 0f, 0f, 0f, 1, 2000, 2000, 2000, 0);
				iLocal_159 = 0;
			}
		}
	}
	else
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(0);
		}
		iLocal_159 = 1;
	}
}

int func_34(var uParam0)
{
	if (func_61(uParam0))
	{
		if (!PED::IS_PED_INJURED(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_35()
{
	if (MISC::GET_GAME_TIMER() > iLocal_158 + 5000)
	{
		func_36(uLocal_157, "PRERACE_CHAT", 11);
		iLocal_158 = MISC::GET_GAME_TIMER();
	}
}

void func_36(var uParam0, char* sParam1, int iParam2)
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, sParam1, func_37(iParam2), 1);
}

int func_37(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_38()
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		if (func_40(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE());
			if (func_39(iVar0))
			{
				return 0;
			}
			if (((((((iVar0 == -1973172295 || iVar0 == -1536924937) || iVar0 == -1779120616) || iVar0 == 1127131465) || iVar0 == -1647941228) || iVar0 == 469291905) || iVar0 == -1683328900) || iVar0 == 1922257928)
			{
				return 0;
			}
			if (((VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0) || VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0)) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
			{
				return 0;
			}
			iVar2[0] = 1171614426;
			iVar2[1] = 2053223216;
			iVar2[2] = 850991848;
			iVar2[3] = -713569950;
			iVar2[4] = 1938952078;
			iVar2[5] = 1491375716;
			iVar2[6] = 904750859;
			iVar2[7] = -1050465301;
			iVar2[8] = 569305213;
			iVar2[9] = -2137348917;
			iVar2[10] = 1783355638;
			iVar2[11] = 1747439474;
			iVar2[12] = 400514754;
			iVar2[13] = -1660661558;
			iVar2[14] = 353883353;
			iVar2[15] = 1560980623;
			iVar2[16] = 741586030;
			iVar2[17] = 837858166;
			iVar2[18] = 1033245328;
			iVar2[19] = 2046537925;
			iVar2[20] = -845979911;
			iVar2[21] = 1917016601;
			iVar2[22] = -1346687836;
			iVar2[23] = -119658072;
			iVar2[24] = -810318068;
			iVar2[25] = -1043459709;
			iVar2[26] = 788045382;
			iVar2[27] = 1560980623;
			iVar2[28] = 1951180813;
			iVar2[29] = -823509173;
			iVar2[30] = 627094268;
			iVar2[31] = -2128233223;
			iVar2[32] = -48031959;
			iVar2[33] = -1435919434;
			iVar2[34] = -233098306;
			iVar2[35] = 1886712733;
			iVar2[36] = 1147287684;
			iVar2[37] = -537896628;
			iVar2[38] = 1876516712;
			iVar2[39] = 48339065;
			iVar2[40] = 1941029835;
			iVar2[41] = -1323100960;
			iVar2[42] = -442313018;
			iVar2[43] = 1641462412;
			iVar2[44] = -2076478498;
			iVar2[45] = 516990260;
			iVar2[46] = 887537515;
			iVar2[47] = 2132890591;
			iVar2[48] = -667151410;
			iVar2[49] = 1770332643;
			iVar2[50] = -884690486;
			iVar2[51] = -2130482718;
			iVar2[52] = -1745203402;
			iVar2[53] = 444583674;
			iVar2[54] = 1518533038;
			iVar2[55] = -120287622;
			iVar2[56] = -1098802077;
			iVar2[57] = -784816453;
			iVar2[58] = 782665360;
			iVar2[59] = -1006919392;
			iVar2[60] = 2112052861;
			iVar2[61] = -947761570;
			iVar2[62] = 475220373;
			iVar2[63] = -1705304628;
			iVar2[64] = -1700801569;
			iVar2[65] = -1207431159;
			iVar2[66] = 1074326203;
			iVar2[67] = 1283517198;
			iVar2[68] = -2072933068;
			iVar2[69] = -2007026063;
			iVar2[70] = -1205689942;
			iVar2[71] = 121658888;
			iVar2[72] = -214455498;
			iVar2[73] = 1353720154;
			iVar2[74] = -1987130134;
			iVar2[75] = -907477130;
			iVar2[76] = -1743316013;
			iVar2[77] = 893081117;
			iVar2[78] = 1162065741;
			iVar2[79] = 728614474;
			iVar2[80] = -150975354;
			iVar2[81] = -613725916;
			iVar2[82] = 771711535;
			iVar2[83] = -1066334226;
			iVar2[84] = -1269889662;
			iVar2[85] = 943752001;
			iVar2[86] = -1776615689;
			iVar2[87] = -956048545;
			iVar2[88] = MISC::GET_HASH_KEY("RATLOADER2");
			iVar2[89] = MISC::GET_HASH_KEY("SLAMVAN");
			iVar2[90] = 0;
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (iVar0 == iVar2[iVar1])
				{
					return 0;
				}
				iVar1++;
			}
			return 1;
		}
	}
	return 0;
}

int func_39(int iParam0)
{
	switch (iParam0)
	{
		case 2046537925:
		case -1627000575:
		case 1912215274:
		case -1973172295:
		case 353883353:
		case -34623805:
		case 456714581:
		case -1779120616:
		case -1536924937:
		case -1683328900:
		case 1922257928:
			return 1;
			break;
	}
	return 0;
}

int func_40(var uParam0)
{
	if (func_61(uParam0))
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

int func_41()
{
	if (func_42())
	{
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-95143158) != 0)
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(uVar0) == 0)
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_42()
{
	if (Global_30918)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_43()
{
	if ((!Global_111638.f_25068.f_9 && !Global_111638.f_25068.f_8) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_60()) < 84100f)
	{
		Global_111638.f_25068.f_9 = func_54();
		func_51();
		if (!Global_111638.f_25068.f_9)
		{
			if (func_61(uLocal_157) && func_61(uLocal_156))
			{
				if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("C_RACE", 3) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-131607125) <= 0)
				{
					HUD::REQUEST_ADDITIONAL_TEXT("C_RACE", 3);
				}
				return 1;
			}
			else
			{
				func_44(0);
			}
		}
	}
	else
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_60()) > 90000f)
		{
			func_15(&uLocal_157, 1);
			func_14(&uLocal_156, 1);
			if (Global_111638.f_25068.f_9)
			{
				Global_111638.f_25068.f_9 = 0;
			}
			if (Global_111638.f_25068.f_8)
			{
				Global_111638.f_25068.f_8 = 0;
			}
		}
		if (Global_111638.f_25068.f_9)
		{
			func_15(&uLocal_157, 0);
			func_14(&uLocal_156, 0);
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_60(), 5f, 5f, 5f, 1, 1, 0))
			{
				if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("C_RACE", 3))
				{
					if (!func_25("CRACEDISRUPT") && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1779901043) == 0)
					{
						HUD::CLEAR_HELP(1);
						func_29("CRACEDISRUPT", 1, 1, -1);
					}
				}
			}
			else if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("C_RACE", 3) && func_25("CRACEDISRUPT"))
			{
				HUD::CLEAR_HELP(1);
			}
		}
		else if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("C_RACE", 3) && func_25("CRACEDISRUPT"))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	return 0;
}

void func_44(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_156) && !ENTITY::DOES_ENTITY_EXIST(uLocal_157))
	{
		STREAMING::REQUEST_MODEL(func_50());
		STREAMING::REQUEST_MODEL(2007797722);
		if (bParam0)
		{
			while (!STREAMING::HAS_MODEL_LOADED(func_50()))
			{
				SYSTEM::WAIT(0);
			}
			while (!STREAMING::HAS_MODEL_LOADED(2007797722))
			{
				SYSTEM::WAIT(0);
			}
		}
		if (STREAMING::HAS_MODEL_LOADED(func_50()) && STREAMING::HAS_MODEL_LOADED(2007797722))
		{
			uLocal_156 = VEHICLE::CREATE_VEHICLE(func_50(), func_49(), func_48(), 1, 1, 0);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_156, 1084227584);
			if (Global_111638.f_25068 == 4)
			{
				VEHICLE::SET_VEHICLE_LIVERY(uLocal_156, 0);
				VEHICLE::SET_VEHICLE_COLOURS(uLocal_156, 44, 83);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uLocal_156, 111, 111);
			}
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_156, 3);
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(uLocal_156, 0, 0);
			VEHICLE::SET_VEHICLE_DISABLE_TOWING(uLocal_156, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_50());
			uLocal_157 = PED::CREATE_PED(26, 2007797722, func_47(), func_46(), 1, 1);
			func_45(uLocal_157);
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_157, "A_M_Y_RACER_01_WHITE_MINI_01");
			TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_157, "WORLD_HUMAN_STAND_IMPATIENT", -1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(2007797722);
		}
	}
}

void func_45(var uParam0)
{
	switch (Global_111638.f_25068)
	{
		case 0:
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 10, 0, 0, 0);
			break;
		
		case 1:
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 3, 0, 7, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 6, 0, 4, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 10, 0, 1, 0);
			break;
		
		case 2:
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 0, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 3, 0, 5, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 6, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 10, 0, 2, 0);
			break;
		
		case 3:
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 6, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 10, 0, 0, 0);
			break;
		
		case 4:
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 3, 0, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 6, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 10, 0, 0, 0);
			break;
	}
}

float func_46()
{
	return 294.2507f;
}

Vector3 func_47()
{
	return 1965.248f, 3114.886f, 46.1663f;
}

float func_48()
{
	return 194.8257f;
}

Vector3 func_49()
{
	return 1964.038f, 3114.635f, 46.1319f;
}

int func_50()
{
	switch (Global_111638.f_25068)
	{
		case 0:
			return -401643538;
			break;
		
		case 1:
			return 349315417;
			break;
		
		case 2:
			return -915704871;
			break;
		
		case 3:
			return 237764926;
			break;
		
		case 4:
			return 1233534620;
			break;
	}
	return 237764926;
}

void func_51()
{
	if (func_61(uLocal_157))
	{
		if ((!PED::IS_PED_FLEEING(uLocal_157) && !PED::IS_PED_IN_COMBAT(uLocal_157, 0)) && !PED::IS_PED_RAGDOLL(uLocal_157))
		{
			if (!func_53(uLocal_157, 993674639, 1))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_157, "WORLD_HUMAN_STAND_IMPATIENT", -1, 1);
			}
			if (func_52(uLocal_156) || Global_111638.f_25068.f_9)
			{
				PED::_0xF1C03A5352243A30(uLocal_157);
				TASK::TASK_COMBAT_PED(uLocal_157, PLAYER::PLAYER_PED_ID(), 0, 16);
			}
			fLocal_160 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
		}
		else if (PED::IS_PED_RAGDOLL(uLocal_157))
		{
			if (!func_53(uLocal_157, 780511057, 1))
			{
				PED::_0xF1C03A5352243A30(uLocal_157);
				TASK::TASK_COMBAT_PED(uLocal_157, PLAYER::PLAYER_PED_ID(), 0, 16);
			}
		}
	}
}

int func_52(var uParam0)
{
	uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (func_61(uParam0))
	{
		if ((func_61(uVar0) && fLocal_160 != 0f) && fLocal_160 >= 9f)
		{
			fVar1 = ENTITY::GET_ENTITY_SPEED(uVar0);
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0, uVar0) && fVar1 <= (fLocal_160 * 0.5f))
			{
				return 1;
			}
		}
		if (ENTITY::GET_ENTITY_HEALTH(uParam0) + 100 < ENTITY::GET_ENTITY_MAX_HEALTH(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_53(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(uParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_54()
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_157))
	{
		if (ENTITY::IS_ENTITY_DEAD(uLocal_157, 0))
		{
			return 1;
		}
		else if (PED::IS_PED_FLEEING(uLocal_157))
		{
			return 1;
		}
		else if (PED::IS_PED_IN_COMBAT(uLocal_157, 0))
		{
			return 1;
		}
		else if (PED::IS_PED_RAGDOLL(uLocal_157))
		{
			return 1;
		}
		else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_156))
	{
		if (ENTITY::IS_ENTITY_DEAD(uLocal_156, 0))
		{
			return 1;
		}
		else
		{
			if (func_55(uLocal_156, func_49(), 1) > 2f)
			{
				return 1;
			}
			if (WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), uLocal_156, 0, -1))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_55(var uParam0, struct<3> Param1, int iParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, iParam4);
}

void func_56()
{
	if (!func_59(0, 19))
	{
		Global_111638.f_25068.f_8 = 1;
		func_62(0);
	}
	if (func_21(9) && iLocal_154 == 0)
	{
		Global_111638.f_25068.f_8 = 1;
		func_62(0);
	}
	if (func_58(13))
	{
		Global_111638.f_25068.f_8 = 1;
		func_62(0);
	}
	if (!func_57())
	{
		Global_111638.f_25068.f_8 = 1;
		func_62(0);
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(2037466602) == 0)
	{
		if (SYSTEM::VDIST2(func_60(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 160000f)
		{
			func_62(0);
		}
	}
}

int func_57()
{
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(1571103992, &uVar0, -1);
				MISC::SET_BIT(&uVar0, 2);
				MISC::SET_BIT(&uVar0, 4);
				MISC::SET_BIT(&uVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(1571103992, uVar0, 1);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					uVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&uVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150472 == 2)
	{
		return 1;
	}
	else if (Global_150472 == 3)
	{
		return 0;
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_58(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_92729[iParam0])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_89496)
	{
		if (Global_89496[iVar0] != -1)
		{
			if (Global_76891.f_109[Global_89496[iVar0]] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_59(int iParam0, int iParam1)
{
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	uVar0 = MISC::IS_BIT_SET(Global_111638.f_9080.f_99.f_219[iParam0], iParam1);
	return uVar0;
}

Vector3 func_60()
{
	return 1967.042f, 3116.005f, 45.8901f;
}

int func_61(var uParam0)
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

void func_62(bool bParam0)
{
	func_12(&Global_111636);
	if (func_61(uLocal_157))
	{
		if (func_53(uLocal_157, -1098463898, 1) || func_53(uLocal_157, 993674639, 1))
		{
			TASK::TASK_WANDER_STANDARD(uLocal_157, 1193033728, 0);
		}
	}
	func_15(&uLocal_157, bParam0);
	func_14(&uLocal_156, bParam0);
	if (bParam0)
	{
		MISC::CLEAR_AREA(func_60(), 100f, 1, 0, 0, 0);
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(0);
	}
	iLocal_159 = 1;
	Var0 = { func_26() };
	if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("C_RACE", 3))
	{
		if ((func_25("CRACEDISRUPT") || func_25("CRACECAR")) || func_25(&Var0))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("Country_Race");
	SCRIPT::TERMINATE_THIS_THREAD();
}

