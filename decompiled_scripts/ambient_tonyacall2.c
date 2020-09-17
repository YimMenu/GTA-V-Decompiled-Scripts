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
	fLocal_41 = 50f;
	fLocal_42 = 2500f;
	Local_43 = { 409.1539f, -1626.677f, 28.2928f };
	Local_49 = { 409.2747f, -1623.022f, 28.29278f };
	fLocal_52 = 202.6928f;
	Local_53 = { 415.6071f, -1647.604f, 28.2928f };
	fLocal_56 = 85.7173f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_33();
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-333035279) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
		if (func_32(0, 14))
		{
			func_33();
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			Local_46 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
		if (SYSTEM::VDIST2(Local_46, Local_43) > fLocal_42)
		{
			func_33();
		}
		switch (iLocal_37)
		{
			case 0:
				if (func_28())
				{
					iLocal_37 = 1;
				}
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@enter");
				STREAMING::REQUEST_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@base");
				STREAMING::REQUEST_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@exit");
				STREAMING::REQUEST_MODEL(413312110);
				if (((STREAMING::HAS_MODEL_LOADED(413312110) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_stand_mobile@female@standing@call@enter")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_stand_mobile@female@standing@call@base")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_stand_mobile@female@standing@call@exit"))
				{
					iLocal_37 = 2;
				}
				break;
			
			case 2:
				if (func_1())
				{
					iLocal_37 = 3;
				}
				break;
			
			case 3:
				func_33();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

int func_1()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_38, 0))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(uLocal_38, 1) };
	}
	else
	{
		Var3 = { 408.5002f, -1624.583f, 29.2928f };
	}
	if ((SYSTEM::VDIST2(Var0, Var3) > 10000f || ENTITY::IS_ENTITY_DEAD(uLocal_38, 0)) || func_27())
	{
		return 1;
	}
	switch (iLocal_40)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_38) && !ENTITY::IS_ENTITY_DEAD(uLocal_38, 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(uLocal_38, Local_57, 1f, 1f, 1f, 0, 1, 0))
				{
					TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					TASK::OPEN_SEQUENCE_TASK(&uVar7);
					TASK::TASK_ACHIEVE_HEADING(0, fLocal_60, 0);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 4f, -4f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_mobile@female@standing@call@base", "base", 4f, -4f, -1, 1, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar7);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_38, uVar7);
					TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					iLocal_40 = 1;
				}
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_38) && !ENTITY::IS_ENTITY_DEAD(uLocal_38, 0))
			{
				if (TASK::GET_SEQUENCE_PROGRESS(uLocal_38) == 1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uLocal_39))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 3))
						{
							fVar8 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter");
							if (fVar8 >= 0.157f)
							{
								uLocal_39 = OBJECT::CREATE_OBJECT(413312110, 1f, 1f, 1f, 1, 1, 0);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_39, uLocal_38, PED::GET_PED_BONE_INDEX(uLocal_38, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
							}
						}
					}
				}
				else if (TASK::GET_SEQUENCE_PROGRESS(uLocal_38) == 2)
				{
					iVar6 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2);
					if (iVar6 == 0)
					{
						if (func_4(&uLocal_63, "TOWAUD", "TONYA_CALL3", 8, 0, 0, 0))
						{
							iLocal_40 = 2;
						}
					}
					else if (func_4(&uLocal_63, "TOWAUD", "TONYA_CALL4", 8, 0, 0, 0))
					{
						iLocal_40 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_38, 0))
			{
				if (!func_3())
				{
					TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					TASK::OPEN_SEQUENCE_TASK(&uVar7);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_mobile@female@standing@call@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", -1, 1);
					TASK::CLOSE_SEQUENCE_TASK(uVar7);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_38, uVar7);
					TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					iLocal_40 = 3;
				}
			}
			break;
		
		case 3:
			func_2();
			if (SYSTEM::VDIST2(Var0, Var3) < 25f)
			{
				if (CAM::_0xEE778F8C7E1142E2(0) != 4)
				{
					if (func_4(&uLocal_63, "TOWAUD", "TOW_MESS2", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_40 = 4;
					}
				}
			}
			break;
		
		case 4:
			func_2();
			if (SYSTEM::TIMERA() > 10000)
			{
				iLocal_40 = 3;
			}
			break;
	}
	return 0;
}

void func_2()
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_38) && !ENTITY::IS_ENTITY_DEAD(uLocal_38, 0))
	{
		if (TASK::GET_SEQUENCE_PROGRESS(uLocal_38) == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_39))
			{
				OBJECT::DELETE_OBJECT(&uLocal_39);
				TASK::TASK_LOOK_AT_ENTITY(uLocal_38, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_38) && !ENTITY::IS_ENTITY_DEAD(uLocal_38, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_39))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_38, 993674639) == 1)
			{
				OBJECT::DELETE_OBJECT(&uLocal_39);
			}
		}
	}
}

int func_3()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
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
					func_25();
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
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_23();
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
				func_15();
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
				if (func_14())
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
			if (func_13())
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
			func_12();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_11();
		func_6();
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
		func_25();
	}
	return 0;
}

void func_6()
{
	if (!func_7())
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

int func_7()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_10())
	{
		return 0;
	}
	if (func_8(PLAYER::PLAYER_ID()))
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

bool func_8(int iParam0)
{
	return func_9(iParam0, 20);
}

bool func_9(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_10()
{
	return -1;
}

void func_11()
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

void func_12()
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

int func_13()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_14()
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

void func_15()
{
	if (func_22(14))
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
		Global_19486 = func_16();
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

var func_16()
{
	func_17();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_17()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_20(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_19(PLAYER::PLAYER_PED_ID());
			if (func_18(iVar0) && (!func_22(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_18(Global_111638.f_2358.f_539.f_4321))
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

bool func_18(int iParam0)
{
	return iParam0 < 3;
}

int func_19(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_20(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_20(int iParam0)
{
	if (func_18(iParam0))
	{
		return func_21(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_21(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_22(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_23()
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

bool func_24(int iParam0, int iParam1)
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

void func_25()
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

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_27()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(uLocal_38, 0))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_38) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_39))
			{
				ENTITY::DETACH_ENTITY(uLocal_39, 1, 1);
			}
			AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_38, 1805844857) != 1)
			{
				PED::SET_PED_KEEP_TASK(uLocal_38, 1);
				TASK::TASK_SMART_FLEE_PED(uLocal_38, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_28()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	PED::GET_CLOSEST_PED(Var0, fLocal_41, 1, 1, &uVar3, 0, 1, -1);
	if (ENTITY::DOES_ENTITY_EXIST(uVar3) && !ENTITY::IS_ENTITY_DEAD(uVar3, 0))
	{
		iVar4 = ENTITY::GET_ENTITY_MODEL(uVar3);
		if (iVar4 == -892841148)
		{
			uLocal_38 = uVar3;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_38, 1, 0);
			PED::SET_PED_MONEY(uLocal_38, 0);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_38, 0);
			PED::SET_PED_NAME_DEBUG(uLocal_38, "TONYA");
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_38, 1862763509);
			func_31(&uLocal_63, 3, uLocal_38, "TONYA", 1, 1);
			func_30();
			if (!func_29(Local_57))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_38, 713668775) != 1)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_38, Local_57, 1f, -1, 0.25f, 0, fLocal_60);
					PED::SET_PED_KEEP_TASK(uLocal_38, 1);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_29(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.y == 0f) && Param0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_30()
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_38) && !ENTITY::IS_ENTITY_DEAD(uLocal_38, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(uLocal_38, 1) };
		if (func_29(Local_57))
		{
			fLocal_61 = SYSTEM::VDIST(Var0, Local_49);
			fLocal_62 = SYSTEM::VDIST(Var0, Local_53);
			if (fLocal_61 < fLocal_62)
			{
				Local_57 = { Local_49 };
				fLocal_60 = fLocal_52;
			}
			else
			{
				Local_57 = { Local_53 };
				fLocal_60 = fLocal_56;
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 407.4285f, -1626.572f, 27.29278f, 412.8245f, -1620.167f, 33.29278f, 6f, 0, 1, 0))
				{
					Local_57 = { Local_53 };
					fLocal_60 = fLocal_56;
				}
			}
		}
	}
}

void func_31(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
	}
	(*uParam0)[iParam1] = uParam2;
	StringCopy(&(uParam0[iParam1]->f_1), sParam3, 24);
	uParam0[iParam1]->f_7 = 1;
	uParam0[iParam1]->f_8 = iParam4;
	uParam0[iParam1]->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if (uParam0[iParam1]->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if (uParam0[iParam1]->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 1);
			}
		}
	}
}

int func_32(int iParam0, int iParam1)
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

void func_33()
{
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@enter");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@base");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@exit");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(413312110);
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_38))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_38))
		{
			PED::DELETE_PED(&uLocal_38);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_38);
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

