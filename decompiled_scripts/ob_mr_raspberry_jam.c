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
	iLocal_296 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	func_76();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		func_74();
	}
	if (func_71(9))
	{
		func_74();
	}
	if (func_70() && !func_69())
	{
		func_74();
	}
	if (ENTITY::DOES_ENTITY_EXIST(uScriptParam_0))
	{
		iLocal_41 = iScriptParam_0;
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_41, 1);
		iLocal_40 = ENTITY::GET_ENTITY_MODEL(iLocal_41);
	}
	func_68(&uLocal_108, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_41))
		{
			if (((((BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iLocal_41) && !ENTITY::IS_ENTITY_DEAD(iLocal_41, 0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && func_63()) && func_62(0)) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				switch (iLocal_292)
				{
					case 0:
						if (func_60() && func_58())
						{
							iLocal_292 = 1;
						}
						break;
					
					case 1:
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							func_1();
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_74();
			}
		}
		else
		{
			func_74();
		}
	}
}

void func_1()
{
	Var0 = { func_57() };
	Var3 = { 1.2f, 1.2f, 1.2f };
	fVar6 = 0f;
	switch (iLocal_293)
	{
		case 0:
			if (func_52(Var0, Var3) && PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_41, 1), 90f))
			{
				func_76();
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_SAFEHOUSE_ACTIVITIES_SCENE"))
				{
					AUDIO::START_AUDIO_SCENE("TREVOR_SAFEHOUSE_ACTIVITIES_SCENE");
				}
				func_50(func_51());
				iLocal_293 = 1;
			}
			break;
		
		case 1:
			if (func_49(1, 0, 1))
			{
				if (func_52(Var0, Var3))
				{
					if ((!PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && !PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())) && PAD::IS_CONTROL_PRESSED(2, 51))
					{
						func_76();
						func_40(1, 1, 1, 0, 0, 0);
						if (func_39(func_51()))
						{
							HUD::CLEAR_HELP(1);
						}
						MISC::CLEAR_AREA_OF_PROJECTILES(Var0, 3f, 0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
						iLocal_36 = 1;
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 1);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_41, 0);
						func_40(1, 1, 1, 0, 0, 0);
						iLocal_293 = 2;
					}
				}
				else
				{
					if (func_39(func_51()))
					{
						HUD::CLEAR_HELP(1);
					}
					iLocal_293 = 0;
				}
			}
			break;
		
		case 2:
			func_38();
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			PAD::DISABLE_CONTROL_ACTION(1, 0, 1);
			uLocal_294 = PED::CREATE_SYNCHRONIZED_SCENE(func_37(), func_36(), 2);
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_294, func_35(), func_34(iLocal_296), 8f, -2f, 0, 0, 1148846080, 0);
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_41, uLocal_294, func_33(iLocal_296), func_35(), 8f, -2f, 0, 1148846080);
			if (PED::IS_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_294))
			{
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_294, 0);
			}
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				uLocal_295 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_295, uLocal_294, func_30(iLocal_296), func_35());
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			else
			{
				CAM::DESTROY_ALL_CAMS(0);
			}
			iLocal_299 = 0;
			iLocal_300 = (MISC::GET_GAME_TIMER() + func_29());
			iLocal_293 = 3;
			break;
		
		case 3:
			func_38();
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			PAD::DISABLE_CONTROL_ACTION(1, 0, 1);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_294))
			{
				func_27();
				if (iLocal_297)
				{
					fVar6 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_294);
					if (ENTITY::FIND_ANIM_EVENT_PHASE(func_35(), func_34(iLocal_296), "WalkInterruptible", &fVar7, &fVar8))
					{
						if (fVar6 >= fVar7 && fVar6 <= fVar8)
						{
							iLocal_293 = 5;
						}
					}
				}
				if (!iLocal_299 && MISC::GET_GAME_TIMER() > iLocal_300)
				{
					if (func_3(&uLocal_108, "RASPAUD", func_26(), 7, 0, 0, 0))
					{
						iLocal_299 = 1;
					}
				}
			}
			else
			{
				iLocal_293 = 5;
			}
			break;
		
		case 4:
			PAD::DISABLE_CONTROL_ACTION(1, 0, 1);
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_294))
			{
				iLocal_293 = 5;
			}
			break;
		
		case 5:
			if (func_2(uLocal_295))
			{
				CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
			}
			AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
			if (STATS::STAT_GET_INT(-234727160, &iLocal_301, -1))
			{
				STATS::STAT_SET_INT(-234727160, iLocal_301 + 1, 1);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			iLocal_36 = 0;
			iLocal_296++;
			if (iLocal_296 > 3)
			{
				iLocal_296 = 0;
			}
			iLocal_297 = 0;
			if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < (PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()) - 10))
			{
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) + 10, 0);
			}
			func_40(0, 1, 1, 0, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_41, 1);
			iLocal_293 = 0;
			break;
	}
}

int func_2(var uParam0)
{
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4 && CAM::DOES_CAM_EXIST(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_3(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_25(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_4(sParam2, iParam3, 0);
}

int func_4(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_24();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_23(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_22();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			MISC::CLEAR_BIT(&Global_7356, 20);
			MISC::CLEAR_BIT(&Global_7357, 17);
			MISC::CLEAR_BIT(&Global_7358, 0);
			if (bParam2)
			{
				func_14();
				if (Global_8161[Global_19486][0].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_13())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), -72657034))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_12())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_7356, 9))
				{
					return 0;
				}
			}
			func_11();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_10();
		func_5();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_24();
	}
	return 0;
}

void func_5()
{
	if (!func_6())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703108.f_1), {Global_20424}, 4);
		Global_1703108 = Global_6671;
		Global_1703108.f_6 = Global_20815;
	}
}

int func_6()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_9())
	{
		return 0;
	}
	if (func_7(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID()].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_7(int iParam0)
{
	return func_8(iParam0, 20);
}

bool func_8(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_9()
{
	return -1;
}

void func_10()
{
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_20805 = 1;
}

void func_11()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	MISC::CLEAR_BIT(&Global_7357, 16);
}

int func_12()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_13()
{
	if (Global_76622)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == 100416529 || iVar1 == 205991906) || iVar1 == 856002082)
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_14()
{
	if (func_21(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[0])
			{
				Global_19486 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[1])
			{
				Global_19486 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[2])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_15();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76622)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

int func_15()
{
	func_16();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_16()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_19(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_18(PLAYER::PLAYER_PED_ID());
			if (func_17(iVar0) && (!func_21(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_17(Global_111638.f_2358.f_539.f_4321))
				{
					Global_111638.f_2358.f_539.f_4322 = Global_111638.f_2358.f_539.f_4321;
				}
				Global_111638.f_2358.f_539.f_4323 = iVar0;
				Global_111638.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111638.f_2358.f_539.f_4321 != 145)
			{
				Global_111638.f_2358.f_539.f_4323 = Global_111638.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111638.f_2358.f_539.f_4321 = 145;
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_19(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_19(int iParam0)
{
	if (func_17(iParam0))
	{
		return func_20(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_20(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_21(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_22()
{
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0] = 0;
		StringCopy(&(Global_20094[iVar0].f_1), "", 24);
		Global_20094[iVar0].f_7 = 0;
		Global_20094[iVar0].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_23(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1377170.f_1048, iParam0);
}

void func_24()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_20805 = 6;
		return;
	}
}

void func_25(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = uParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

char* func_26()
{
	switch (iLocal_296)
	{
		case 0:
			sVar0 = "SHRJ_0";
			break;
		
		case 1:
			sVar0 = "SHRJ_1";
			break;
		
		case 2:
			sVar0 = "SHRJ_2";
			break;
		
		case 3:
			sVar0 = "SHRJ_3";
			break;
	}
	return sVar0;
}

void func_27()
{
	if (iLocal_297 == 0)
	{
		func_28(&iVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((iVar0 < -64 || iVar0 > 64) || iVar1 < -64) || iVar1 > 64)
		{
			iLocal_297 = 1;
		}
	}
}

void func_28(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

int func_29()
{
	switch (iLocal_296)
	{
		case 0:
			return 3600;
			break;
		
		case 1:
			return 4000;
			break;
		
		case 2:
			return 3000;
			break;
		
		case 3:
			return 5500;
			break;
		
		default:
			break;
	}
	return 0;
}

char* func_30(int iParam0)
{
	sVar0 = "";
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
			{
				sVar0 = "bong_cam";
			}
			else
			{
				sVar0 = "short_cam";
			}
			break;
		
		case -1620762220:
			sVar0 = "enter_cam";
			break;
		
		case 948080762:
			sVar0 = "ig_8_huff_gas_cam";
			break;
		
		case 1022578470:
			switch (iParam0)
			{
				case 0:
					sVar0 = "ig_7_howcouldisayno_cam";
					break;
				
				case 1:
					sVar0 = "ig_7_ifuwanttodothat_cam";
					break;
				
				case 2:
					sVar0 = "ig_7_lookatu_cam";
					break;
				
				case 3:
					sVar0 = "ig_7_smelllikeasea_cam";
					break;
			}
			break;
		
		case 469594741:
			sVar0 = "ig_2_wheatgrassdrink_cam";
			break;
		
		case -35679191:
			sVar0 = func_31();
			break;
	}
	return sVar0;
}

char* func_31()
{
	func_32();
	sVar0 = "";
	Var1 = { CAM::GET_GAMEPLAY_CAM_COORD() };
	fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Local_273[0], 1);
	fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Local_273[1], 1);
	if (fVar4 < fVar5)
	{
		sVar0 = "drinking_wine_cam2";
		Local_286 = { -8.9f, 515.6f, 175.4f };
		Local_289 = { -17.1f, 0.5f, 6.5f };
	}
	else
	{
		sVar0 = "drinking_wine_cam3";
		Local_286 = { -10.1f, 516f, 175.3f };
		Local_289 = { -13.5f, 0.5f, -56f };
	}
	return sVar0;
}

void func_32()
{
	Local_273[0] = { -10.1749f, 517.8317f, 175.192f };
	Local_273[1] = { -7.694f, 516.4619f, 175.2034f };
	Local_273[2] = { -8.0344f, 518.4184f, 175.1866f };
	Local_273[3] = { -9.7451f, 515.6803f, 175.1711f };
}

char* func_33(int iParam0)
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
			{
				sVar0 = "bong_bong";
			}
			else
			{
				sVar0 = "bong_short";
			}
			break;
		
		case -1620762220:
			sVar0 = "enter_bottle";
			break;
		
		case 1022578470:
			switch (iParam0)
			{
				case 0:
					sVar0 = "ig_7_howcouldisayno_raspjam";
					break;
				
				case 1:
					sVar0 = "ig_7_ifuwanttodothat_raspjam";
					break;
				
				case 2:
					sVar0 = "ig_7_lookatu_raspjam";
					break;
				
				case 3:
					sVar0 = "ig_7_smelllikeasea_raspjam";
					break;
			}
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (bLocal_35)
			{
				sVar0 = "enter_shotglass";
			}
			else
			{
				sVar0 = "enter_glass";
			}
			break;
		
		case 948080762:
			sVar0 = "ig_8_huff_gas_rag";
			break;
		
		case 2057223314:
			if (bLocal_35)
			{
				sVar0 = "enter_beer";
			}
			else
			{
				sVar0 = "enter_bottle";
			}
			break;
		
		case 469594741:
			sVar0 = "ig_2_wheatgrassdrink_glass";
			break;
		
		case -35679191:
			sVar0 = "drinking_wine_glass";
			break;
	}
	return sVar0;
}

char* func_34(int iParam0)
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
			{
				sVar0 = "bong_FRA";
			}
			else
			{
				sVar0 = "michael_short";
			}
			break;
		
		case -693032058:
			sVar0 = "cigar_enter_michael";
			break;
		
		case -1620762220:
			sVar0 = "enter";
			break;
		
		case 788975200:
		case -1533900808:
			if (bLocal_35)
			{
				sVar0 = "enter_trevor";
			}
			else
			{
				sVar0 = "enter";
			}
			break;
		
		case 948080762:
			sVar0 = "ig_8_huff_gas_player";
			break;
		
		case 1022578470:
			switch (iParam0)
			{
				case 0:
					sVar0 = "ig_7_howcouldisayno";
					break;
				
				case 1:
					sVar0 = "ig_7_ifuwanttodothat";
					break;
				
				case 2:
					sVar0 = "ig_7_lookatu";
					break;
				
				case 3:
					sVar0 = "ig_7_smelllikeasea";
					break;
			}
			break;
		
		case 2057223314:
			if (bLocal_35)
			{
				sVar0 = "enter";
			}
			else
			{
				sVar0 = "enter_michael";
			}
			break;
		
		case 469594741:
			sVar0 = "ig_2_wheatgrassdrink_michael";
			break;
		
		case -35679191:
			sVar0 = "drinking_wine";
			break;
	}
	return sVar0;
}

char* func_35()
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
			{
				sVar0 = "safe@franklin@ig_10";
			}
			else
			{
				sVar0 = "safe@michael@ig_4";
			}
			break;
		
		case -693032058:
			sVar0 = "safe@michael@ig_3";
			break;
		
		case -1620762220:
			sVar0 = "safe@franklin@ig_9";
			break;
		
		case -1630172026:
			sVar0 = "safe@franklin@ig_13";
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (!Global_76622)
			{
				if (bLocal_35)
				{
					sVar0 = "safe@trevor@ig_6";
				}
				else
				{
					sVar0 = "safe@michael@ig_1";
				}
			}
			else
			{
				sVar0 = "MP_SAFEHOUSEWHISKEY@";
			}
			break;
		
		case 948080762:
			sVar0 = "safe@trevor@ig_8";
			break;
		
		case 1022578470:
			sVar0 = "safe@trevor@ig_7";
			break;
		
		case 2057223314:
			if (bLocal_35)
			{
				sVar0 = "safe@trevor@ig_5";
			}
			else
			{
				sVar0 = "safe@michael@ig_5";
			}
			break;
		
		case 469594741:
			sVar0 = "safe@michael@ig_2";
			break;
		
		case -35679191:
			sVar0 = "safe@franklin@ig_11";
			break;
	}
	return sVar0;
}

Vector3 func_36()
{
	Var0 = { 0f, 0f, 0f };
	switch (iLocal_40)
	{
		case -257549932:
			if (!bLocal_34)
			{
				Var0 = { 0f, 0f, -68.75494f };
			}
			else
			{
				Var0 = { 0f, 0f, -179.9088f };
			}
			break;
		
		case -693032058:
			Var0 = { 0f, 0f, 21.1994f };
			break;
		
		case -1620762220:
			Var0 = { 0f, 0f, -128.34f };
			break;
		
		case -1630172026:
			Var0 = { 0f, 0f, 0.5729f };
			break;
		
		case 948080762:
			Var0 = { 0f, 0f, 2.8647f };
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (bLocal_35)
			{
				Var0 = { 0f, 0f, 34.9504f };
			}
			else
			{
				Var0 = { 0f, 0f, 21.1994f };
			}
			break;
		
		case 1022578470:
			Var0 = { 0f, 0f, 72.76564f };
			break;
		
		case 2057223314:
			Var0 = { 0f, 0f, -9.1673f };
			break;
		
		case 469594741:
			Var0 = { 0f, 0f, 21.1994f };
			break;
		
		case -35679191:
			Var0 = { 0f, 0f, -29.793f };
			break;
	}
	return Var0;
}

Vector3 func_37()
{
	Var0 = { 0f, 0f, 0f };
	switch (iLocal_40)
	{
		case -257549932:
			if (!bLocal_34)
			{
				Var0 = { -806.82f, 170.03f, 75.74f };
			}
			else
			{
				Var0 = { 10.22f, 527.73f, 174.11f };
			}
			break;
		
		case -693032058:
			Var0 = { -805.17f, 173.99f, 72.69f };
			break;
		
		case -1620762220:
			Var0 = { -9.66f, -1429.48f, 31.21f };
			break;
		
		case -1630172026:
			Var0 = { -10.07f, -1440.64f, 30.36f };
			break;
		
		case 948080762:
			Var0 = { 1972.852f, 3812.42f, 33.28f };
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (bLocal_35)
			{
				Var0 = { -1153.829f, -1523.314f, 10.56f };
			}
			else
			{
				Var0 = { -800.68f, 184.18f, 72.55f };
			}
			break;
		
		case 1022578470:
			Var0 = { -1146.284f, -1514.13f, 10.8468f };
			break;
		
		case 2057223314:
			Var0 = { 1976.75f, 3822.76f, 33.28f };
			break;
		
		case 469594741:
			Var0 = { -804.87f, 185.69f, 72.75f };
			break;
		
		case -35679191:
			Var0 = { -9.1f, 516.83f, 173.62f };
			break;
	}
	return Var0;
}

void func_38()
{
	Global_22211.f_6 = 1;
}

bool func_39(var uParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_40(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_48(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_12())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_47(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_48(0);
		HUD::THEFEED_RESUME();
		Global_61518 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_47(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_45(PLAYER::PLAYER_ID())) && !func_42(PLAYER::PLAYER_ID(), 0)) && !func_41()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_45(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_76620 = 0;
	}
}

bool func_41()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 14);
}

bool func_42(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_43(-1, 0) == 8;
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

int func_43(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_44();
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

int func_44()
{
	return Global_1312745;
}

int func_45(int iParam0)
{
	if (func_42(iParam0, 0))
	{
		return 1;
	}
	if (func_46())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2425662[iParam0].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_46()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_47(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_48(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 13);
	}
}

int func_49(bool bParam0, bool bParam1, bool bParam2)
{
	if (MISC::IS_MINIGAME_IN_PROGRESS())
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

void func_50(var uParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

char* func_51()
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
			{
				sVar0 = "SA_BONG2";
			}
			else
			{
				sVar0 = "SA_BONG";
			}
			break;
		
		case -693032058:
			sVar0 = "SA_CIGAR";
			break;
		
		case -1620762220:
			sVar0 = "SA_BEER";
			break;
		
		case -1630172026:
			sVar0 = "SA_SPLFF";
			break;
		
		case 788975200:
			sVar0 = "SA_WHSKY";
			break;
		
		case -1533900808:
			sVar0 = "SA_WHSKY";
			break;
		
		case 1384562503:
			sVar0 = "SA_WHSKY";
			break;
		
		case 948080762:
			sVar0 = "SA_GAS";
			break;
		
		case 1022578470:
			sVar0 = "SA_MRJAM";
			break;
		
		case 2057223314:
			sVar0 = "SA_BEER";
			break;
		
		case 469594741:
			sVar0 = "SA_WHEAT";
			break;
		
		case -35679191:
			sVar0 = "SA_WINE";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_52(struct<3> Param0, float fParam3, var uParam4, var uParam5)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (!FIRE::IS_EXPLOSION_IN_SPHERE(-1, Param0, 2f))
			{
				if ((((CAM::IS_GAMEPLAY_CAM_RENDERING() && !CUTSCENE::IS_CUTSCENE_PLAYING()) && !CAM::IS_CINEMATIC_CAM_RENDERING()) && !func_56(0)) && !func_55())
				{
					if ((Global_95672 && Global_95673) || func_54())
					{
						return 0;
					}
					if (func_53(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0, fParam3, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_53(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((Param0.x - Param3.x)) <= fParam6)
		{
			if (MISC::ABSF((Param0.y - Param3.y)) <= fParam6)
			{
				if (MISC::ABSF((Param0.z - Param3.z)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.x - Param3.x)) <= fParam6)
	{
		if (MISC::ABSF((Param0.y - Param3.y)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_54()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

int func_55()
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
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uVar2[iVar1], 1), 1) < 3f)
					{
						return 1;
					}
				}
			}
			if (!bLocal_35 && !bLocal_34)
			{
				if (ENTITY::GET_ENTITY_MODEL(uVar2[iVar1]) == -1692214353)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uVar2[iVar1], 1), 1) < 3f)
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

int func_56(int iParam0)
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

Vector3 func_57()
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
			{
				Var0 = { 9.95f, 528.9f, 173.6282f };
			}
			else
			{
				Var0 = { -807.5781f, 171.357f, 75.7407f };
			}
			break;
		
		case -693032058:
			Var0 = { -805.881f, 173.8548f, 71.8347f };
			break;
		
		case -1620762220:
			Var0 = { -9.66f, -1429.48f, 31.21f };
			break;
		
		case -1630172026:
			Var0 = { -10.6378f, -1441.314f, 30.1015f };
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (bLocal_35)
			{
				Var0 = { -1154.343f, -1522.6f, 9.6327f };
			}
			else
			{
				Var0 = { -800.4056f, 183.4856f, 71.6055f };
			}
			break;
		
		case 948080762:
			Var0 = { 1972.142f, 3813.243f, 32.4271f };
			break;
		
		case 1022578470:
			Var0 = { -1145.91f, -1514.944f, 9.6327f };
			break;
		
		case 2057223314:
			Var0 = { 1976.94f, 3821.242f, 33.3266f };
			break;
		
		case 469594741:
			Var0 = { -804.2254f, 184.3325f, 72.6042f };
			break;
		
		case -35679191:
			Var0 = { -8.8011f, 515.7225f, 173.6282f };
			break;
	}
	return Var0;
}

int func_58()
{
	if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK(func_59(), 0, -1))
	{
		return 1;
	}
	return 0;
}

char* func_59()
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
			{
				sVar0 = "SAFEHOUSE_FRANKLIN_USE_BONG";
			}
			else
			{
				sVar0 = "SAFEHOUSE_MICHAEL_USE_BONG";
			}
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (bLocal_35)
			{
				sVar0 = "SAFEHOUSE_TREVOR_DRINK_WHISKEY";
			}
			else
			{
				sVar0 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
			}
			break;
		
		case 2057223314:
			if (bLocal_35)
			{
				sVar0 = "SAFEHOUSE_TREVOR_DRINK_BEER";
			}
			else
			{
				sVar0 = "SAFEHOUSE_MICHAEL_DRINK_BEER";
			}
			break;
		
		case -1620762220:
			sVar0 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
			break;
		
		case 948080762:
			sVar0 = "SAFEHOUSE_TREVOR_GAS";
			break;
		
		case 1022578470:
			sVar0 = "SAFEHOUSE_TREVOR_RASBERRY";
			break;
		
		case 469594741:
			sVar0 = "SAFEHOUSE_MICHAEL_DRINK_WHEATGRASS";
			break;
		
		case -35679191:
			sVar0 = "SAFEHOUSE_FRANKLIN_DRINK_WINE";
			break;
		
		case -693032058:
			sVar0 = "SAFEHOUSE_MICHAEL_SIT_SOFA";
			break;
		
		case -1630172026:
			sVar0 = "SAFEHOUSE_FRANKLIN_SOFA";
			break;
	}
	return sVar0;
}

int func_60()
{
	if (func_61())
	{
		iLocal_298 = 1;
		return 1;
	}
	return 0;
}

int func_61()
{
	uVar0 = func_35();
	STREAMING::REQUEST_ANIM_DICT(uVar0);
	while (!STREAMING::HAS_ANIM_DICT_LOADED(uVar0))
	{
		SYSTEM::WAIT(0);
	}
	return 1;
}

int func_62(int iParam0)
{
	if (Global_76622)
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (iLocal_40 == 948080762)
		{
			if (func_53(ENTITY::GET_ENTITY_COORDS(iLocal_41, 0), func_57(), 5f, 0))
			{
				return 1;
			}
		}
		else if (iLocal_40 == 469594741)
		{
			if (func_53(ENTITY::GET_ENTITY_COORDS(iLocal_41, 0), func_57(), 5f, 0))
			{
				return 1;
			}
		}
		else if (iLocal_40 == 1022578470)
		{
			if (func_53(ENTITY::GET_ENTITY_COORDS(iLocal_41, 0), func_57(), 5f, 0))
			{
				return 1;
			}
		}
		else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_63()
{
	switch (iLocal_40)
	{
		case -693032058:
			if (func_15() == 0)
			{
				return 1;
			}
			break;
		
		case -257549932:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				return 1;
			}
			if (func_15() == 1)
			{
				bLocal_34 = true;
				return 1;
			}
			if (func_15() == 0)
			{
				if (!iLocal_33)
				{
					iLocal_33 = 1;
				}
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-645501366) > 0)
				{
					return 0;
				}
				if (func_67())
				{
					return 0;
				}
				if (((((Global_93750[0] == 5 || Global_93750[0] == 21) || Global_93750[0] == 20) || Global_93750[0] == 16) || Global_93750[0] == 18) || Global_93750[0] == 9)
				{
					return 0;
				}
				if (((((Global_93750[0] == 6 || Global_93750[0] == 7) || Global_93750[0] == 11) || Global_93750[0] == 17) || Global_93750[0] == 140) || Global_93750[0] == 141)
				{
					return 1;
				}
				return 1;
			}
			break;
		
		case -1620762220:
			if (Global_76622)
			{
				return 1;
			}
			if (func_15() == 1)
			{
				if (!iLocal_32)
				{
					iLocal_32 = 1;
				}
				return 1;
			}
			break;
		
		case -1630172026:
			if (func_15() == 1)
			{
				return 1;
			}
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (Global_76622)
			{
				iLocal_31 = 1;
				return 1;
			}
			if (func_15() == 0)
			{
				iLocal_31 = 1;
				return 1;
			}
			if (func_15() == 2 && func_66(20))
			{
				if (!iLocal_30)
				{
					iLocal_30 = 1;
				}
				iLocal_31 = 1;
				bLocal_35 = true;
				return 1;
			}
			break;
		
		case 948080762:
			if (func_15() == 2 || Global_76622)
			{
				return 1;
			}
			break;
		
		case 1022578470:
			if (Global_111638.f_7256.f_227[145] == 1)
			{
				if (func_15() == 2)
				{
					if (((((Global_93750[13] != 127 && Global_93750[13] != 135) && Global_93766 != 127) && Global_93766 != 135) && !func_65()) && !func_67())
					{
						return 1;
					}
				}
			}
			break;
		
		case 2057223314:
			iLocal_31 = 1;
			if ((Global_38796[78] != 1 && Global_93750[9] != 117) && Global_93750[11] != 117)
			{
				if (func_15() == 2)
				{
					bLocal_35 = true;
					return 1;
				}
				if ((func_15() == 0 && func_64(130)) && !func_64(131))
				{
					return 1;
				}
			}
			break;
		
		case 469594741:
			if (Global_76622)
			{
				return 1;
			}
			if (func_15() == 0)
			{
				if (Global_93750[0] != 17 && Global_93750[2] != 73)
				{
					return 1;
				}
			}
			break;
		
		case -35679191:
			if (Global_76622)
			{
				return 1;
			}
			if (func_15() == 1)
			{
				bLocal_34 = true;
				iLocal_32 = 1;
				if (!iLocal_31)
				{
					iLocal_31 = 1;
				}
				return 1;
			}
			break;
	}
	return 0;
}

int func_64(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

int func_65()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

int func_66(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0];
}

int func_67()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

void func_68(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
	}
	(*uParam0)[iParam1] = iParam2;
	StringCopy(&(uParam0[iParam1]->f_1), sParam3, 24);
	uParam0[iParam1]->f_7 = 1;
	uParam0[iParam1]->f_8 = iParam4;
	uParam0[iParam1]->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (uParam0[iParam1]->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (uParam0[iParam1]->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

int func_69()
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_70()
{
	if (Global_95666 != -1)
	{
		return MISC::IS_BIT_SET(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

int func_71(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_72(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_72(int iParam0)
{
	return func_73(iParam0, Global_41431);
}

int func_73(int iParam0, int iParam1)
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

void func_74()
{
	func_76();
	AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_SAFEHOUSE_ACTIVITIES_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_SAFEHOUSE_ACTIVITIES_SCENE");
	}
	if (func_39(func_51()))
	{
		HUD::CLEAR_HELP(1);
	}
	if (iLocal_298)
	{
		STREAMING::REMOVE_ANIM_DICT(func_35());
	}
	func_75();
	func_76();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_75()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if ((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && func_49(1, 0, 1)) && iLocal_36)
		{
			func_40(0, 1, 1, 0, 0, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		}
	}
}

void func_76()
{
	switch (iLocal_40)
	{
		case -693032058:
			break;
		
		case -257549932:
			break;
		
		case -1620762220:
			break;
		
		case 788975200:
			break;
		
		case -1533900808:
			break;
		
		case 1384562503:
			break;
		
		case 948080762:
			break;
		
		case 1022578470:
			break;
		
		case 2057223314:
			if (bLocal_35)
			{
			}
			break;
		
		case 469594741:
			break;
		
		case -35679191:
			break;
	}
}

