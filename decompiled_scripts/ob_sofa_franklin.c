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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_52 = 1;
	Local_301 = { 0f, 0f, 0f };
	Local_304 = { 0f, 0f, 0f };
	iLocal_309 = 1;
	sLocal_335 = "safe@franklin@ig_13";
	Local_339 = { -11.3259f, -1441.471f, 30.5788f };
	Local_342 = { -0.025f, 0.13f, 0f };
	Local_345 = { -0.025f, 0.12f, 0f };
	Local_348 = { 0f, 90f, 0f };
	Local_351 = { -10.1f, -1440.7f, 31.1f };
	Local_354 = { -4f, 0f, 121.2f };
	fLocal_357 = 31f;
	Local_358 = { -12.1f, -1440.7f, 31.3f };
	Local_361 = { -5.3f, 0f, -117.8f };
	fLocal_364 = 40f;
	Local_365 = { -10.1f, -1438.5f, 31.5f };
	Local_368 = { 0.3f, 0f, 159f };
	fLocal_371 = 50f;
	Local_372 = { -9.4f, -1439.6f, 30.9f };
	Local_375 = { 2.3f, 0f, 142.8f };
	fLocal_378 = 25.9f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		func_111();
	}
	if (func_108(9))
	{
		func_111();
	}
	if (func_107() && !func_106())
	{
		func_111();
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		func_111();
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		func_111();
	}
	Local_336 = { ScriptParam_0.f_1[0] };
	Local_336 = { -11.3888f, -1441.325f, 30.1f };
	iLocal_55 = -1630172026;
	while (true)
	{
		SYSTEM::WAIT(0);
		if ((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_100() == 1) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
		{
			if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Local_336, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) < 3f)
			{
				if (iLocal_51)
				{
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
				}
				switch (iLocal_307)
				{
					case 0:
						if (func_94())
						{
							iLocal_307 = 1;
						}
						break;
					
					case 1:
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							func_22();
							func_1();
						}
						break;
					
					case 2:
						break;
					}
			}
		}
		else
		{
			func_111();
		}
	}
}

void func_1()
{
	iVar0 = 10;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		switch (iLocal_55)
		{
			case -257549932:
			case -1630172026:
				func_2();
				break;
			
			case 1022578470:
			case 469594741:
				if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < (PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()) - iVar0))
				{
					ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) + iVar0), 0);
				}
				else
				{
					ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()), 0);
				}
				break;
			}
	}
}

void func_2()
{
	if (iLocal_54 > 0)
	{
		if (!iLocal_44)
		{
			iLocal_53 = GAMEPLAY::GET_GAME_TIMER() + 5000;
			iLocal_44 = 1;
		}
		else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_53)
		{
			func_3();
			iLocal_44 = 0;
			iLocal_54 = 0;
		}
	}
}

void func_3()
{
	if (func_100() == 0)
	{
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 10);
		func_21(&uLocal_123, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
		{
			AUDIO::START_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");
		}
		switch (iVar0)
		{
			case 0:
				func_4(&uLocal_123, "WEEDAUD", "M_WD1", 4, 0, 0, 0);
				break;
			
			case 1:
				func_4(&uLocal_123, "WEEDAUD", "M_WD2", 4, 0, 0, 0);
				break;
			
			case 2:
				func_4(&uLocal_123, "WEEDAUD", "M_WD3", 4, 0, 0, 0);
				break;
			
			case 3:
				func_4(&uLocal_123, "WEEDAUD", "M_WD4", 4, 0, 0, 0);
				break;
			
			case 4:
				func_4(&uLocal_123, "WEEDAUD", "M_WD5", 4, 0, 0, 0);
				break;
			
			case 5:
				func_4(&uLocal_123, "WEEDAUD", "M_WD6", 4, 0, 0, 0);
				break;
			
			case 6:
				func_4(&uLocal_123, "WEEDAUD", "M_WD7", 4, 0, 0, 0);
				break;
			
			case 7:
				func_4(&uLocal_123, "WEEDAUD", "M_WD8", 4, 0, 0, 0);
				break;
			
			case 8:
				func_4(&uLocal_123, "WEEDAUD", "M_WD9", 4, 0, 0, 0);
				break;
			
			case 9:
				func_4(&uLocal_123, "WEEDAUD", "M_WD10", 4, 0, 0, 0);
				break;
		}
	}
	else if (func_100() == 1)
	{
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(0);
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 11);
		func_21(&uLocal_123, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		switch (iVar0)
		{
			case 0:
				func_4(&uLocal_123, "WEEDAUD", "F_WD1", 3, 0, 0, 0);
				break;
			
			case 1:
				func_4(&uLocal_123, "WEEDAUD", "F_WD2", 3, 0, 0, 0);
				break;
			
			case 2:
				func_4(&uLocal_123, "WEEDAUD", "F_WD3", 3, 0, 0, 0);
				break;
			
			case 3:
				func_4(&uLocal_123, "WEEDAUD", "F_WD4", 3, 0, 0, 0);
				break;
			
			case 4:
				func_4(&uLocal_123, "WEEDAUD", "F_WD5", 3, 0, 0, 0);
				break;
			
			case 5:
				func_4(&uLocal_123, "WEEDAUD", "F_WD6", 3, 0, 0, 0);
				break;
			
			case 6:
				func_4(&uLocal_123, "WEEDAUD", "F_WD7", 3, 0, 0, 0);
				break;
			
			case 7:
				func_4(&uLocal_123, "WEEDAUD", "F_WD8", 3, 0, 0, 0);
				break;
			
			case 8:
				func_4(&uLocal_123, "WEEDAUD", "F_WD9", 3, 0, 0, 0);
				break;
			
			case 9:
				func_4(&uLocal_123, "WEEDAUD", "F_WD10", 3, 0, 0, 0);
				break;
			
			case 10:
				func_4(&uLocal_123, "WEEDAUD", "F_WD11", 3, 0, 0, 0);
				break;
		}
	}
	else
	{
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 8);
		func_21(&uLocal_123, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		switch (iVar0)
		{
			case 0:
				func_4(&uLocal_123, "WEEDAUD", "T_WD1", 4, 0, 0, 0);
				break;
			
			case 1:
				func_4(&uLocal_123, "WEEDAUD", "T_WD3", 4, 0, 0, 0);
				break;
			
			case 2:
				func_4(&uLocal_123, "WEEDAUD", "T_WD4", 4, 0, 0, 0);
				break;
			
			case 3:
				func_4(&uLocal_123, "WEEDAUD", "T_WD5", 4, 0, 0, 0);
				break;
			
			case 4:
				func_4(&uLocal_123, "WEEDAUD", "T_WD6", 4, 0, 0, 0);
				break;
			
			case 5:
				func_4(&uLocal_123, "WEEDAUD", "T_WD8", 4, 0, 0, 0);
				break;
			
			case 6:
				func_4(&uLocal_123, "WEEDAUD", "T_WD9", 4, 0, 0, 0);
				break;
			
			case 7:
				func_4(&uLocal_123, "WEEDAUD", "T_WD10", 4, 0, 0, 0);
				break;
			}
	}
}

int func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_20(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
					func_19();
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
		if (func_18(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_17();
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
			GAMEPLAY::CLEAR_BIT(&Global_7356, 20);
			GAMEPLAY::CLEAR_BIT(&Global_7357, 17);
			GAMEPLAY::CLEAR_BIT(&Global_7358, 0);
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
				if (AI::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
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
				if (GAMEPLAY::IS_BIT_SET(Global_7356, 9))
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
		func_19();
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
	if (GAMEPLAY::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID()].f_1, 7))
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
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
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
	GAMEPLAY::CLEAR_BIT(&Global_7357, 16);
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
	if (func_16(14))
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
		Global_19486 = func_100();
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

bool func_16(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_17()
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

bool func_18(int iParam0, int iParam1)
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
	return GAMEPLAY::IS_BIT_SET(Global_1377170.f_1048, iParam0);
}

void func_19()
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

void func_20(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_21(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_22()
{
	Var0 = { 1.5f, 1.5f, 1.5f };
	fVar3 = 0f;
	switch (iLocal_308)
	{
		case 0:
			if (((func_89(Local_336, Var0) && !func_88()) && PED::_0xFCF37A457CB96DC0(PLAYER::PLAYER_PED_ID(), Local_339, 90f)) && func_87())
			{
				func_86("TV_HLP0");
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_SAFEHOUSE_ACTIVITIES_SCENE"))
				{
					AUDIO::START_AUDIO_SCENE("FRANKLIN_SAFEHOUSE_ACTIVITIES_SCENE");
				}
				iLocal_308 = 1;
			}
			break;
		
		case 1:
			if (func_85(1, 0, 1))
			{
				if (func_89(Local_336, Var0))
				{
					if (((!PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && !PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())) && CONTROLS::IS_CONTROL_PRESSED(2, 51)) && func_87())
					{
						if (func_84("TV_HLP0"))
						{
							UI::CLEAR_HELP(1);
						}
						GAMEPLAY::CLEAR_AREA_OF_PROJECTILES(Local_339, 3f, 0);
						if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
						}
						else
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
						}
						iLocal_51 = 1;
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 1);
						func_75(1, 1, 1, 0, 0, 0);
						GRAPHICS::ENABLE_MOVIE_SUBTITLES(1);
						CONTROLS::_0x3D42B92563939375("SOFA ACTIVITY");
						iLocal_326 = 1;
						iLocal_308 = 2;
					}
				}
				else
				{
					if (func_84("TV_HLP0"))
					{
						UI::CLEAR_HELP(1);
					}
					iLocal_308 = 0;
				}
			}
			break;
		
		case 2:
			func_74();
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				iLocal_327 = CAM::CREATE_CAMERA(26379945, 0);
				if (Global_30828[0].f_2)
				{
					CAM::SET_CAM_PARAMS(iLocal_327, Local_358, Local_361, fLocal_364, 0, 1, 1, 2);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TV_FRANKLINS_HOUSE_SOCEN"))
					{
						AUDIO::START_AUDIO_SCENE("TV_FRANKLINS_HOUSE_SOCEN");
					}
				}
				else
				{
					CAM::SET_CAM_PARAMS(iLocal_327, Local_351, Local_354, fLocal_357, 0, 1, 1, 2);
				}
			}
			else
			{
				CAM::DESTROY_ALL_CAMS(0);
			}
			if (func_73(iLocal_327))
			{
				CAM::SET_CAM_ACTIVE(iLocal_327, 1);
				CAM::SHAKE_CAM(iLocal_327, "HAND_SHAKE", (0.2f / 3f));
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			uLocal_330 = PED::CREATE_SYNCHRONIZED_SCENE(func_72(), func_71(), 2);
			AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_330, sLocal_335, "enter", 1000f, -4f, 0, 0, 1148846080, 0);
			if (func_73(iLocal_327))
			{
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_330, 0.278f);
			}
			else
			{
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_330, 0f);
			}
			if (PED::_0x7F2F4F13AC5257EF(uLocal_330))
			{
				PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(uLocal_330, 0);
			}
			PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
			iLocal_308 = 3;
			break;
		
		case 3:
			func_74();
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (func_73(iLocal_327))
			{
				if (Global_30828[0].f_2)
				{
					func_69(iLocal_327, Local_361);
				}
				else
				{
					func_69(iLocal_327, Local_354);
				}
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_330))
			{
				uLocal_330 = PED::CREATE_SYNCHRONIZED_SCENE(func_72(), func_71(), 2);
				if (!Global_30828[0].f_2)
				{
					func_67();
					AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_330, sLocal_335, "base", 4f, -8f, 64, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_66(), uLocal_330, "base_remote", sLocal_335, 4f, -8f, 64, 1148846080);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_330, 1);
				}
				else
				{
					AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_330, sLocal_335, "tv_enter", 4f, -8f, 0, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_66(), uLocal_330, "tv_enter_remote", sLocal_335, 4f, -8f, 0, 1148846080);
					if (PED::_0x7F2F4F13AC5257EF(uLocal_330))
					{
						PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(uLocal_330, 0);
					}
				}
				Global_30813 = 1;
				iLocal_308 = 4;
			}
			break;
		
		case 4:
			func_74();
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (!Global_30828[0].f_2)
			{
				func_86("TV_HLP3");
				if (func_73(iLocal_327))
				{
					CAM::SHAKE_CAM(iLocal_327, "HAND_SHAKE", (0.2f / 3f));
				}
				iLocal_308 = 5;
			}
			else
			{
				if (func_84("TV_HLP3"))
				{
					UI::CLEAR_HELP(1);
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_330) > 0.2f)
				{
					if (!func_84("TV_HLP4"))
					{
						func_86("TV_HLP4");
					}
					if (func_73(iLocal_327))
					{
						CAM::SHAKE_CAM(iLocal_327, "HAND_SHAKE", (0.2f / 3f));
					}
					iLocal_308 = 6;
				}
			}
			break;
		
		case 5:
			func_74();
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			func_64();
			if (func_73(iLocal_327))
			{
				func_69(iLocal_327, Local_354);
			}
			if (!func_84("TV_HLP3"))
			{
				func_86("TV_HLP3");
			}
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 51))
			{
				if (!iLocal_324)
				{
					if (STATS::STAT_GET_INT(-1019679016, &iLocal_333, -1))
					{
						STATS::STAT_SET_INT(-1019679016, iLocal_333 + 1, 1);
						iLocal_324 = 1;
					}
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TV_FRANKLINS_HOUSE_SOCEN"))
				{
					AUDIO::START_AUDIO_SCENE("TV_FRANKLINS_HOUSE_SOCEN");
				}
				uLocal_330 = PED::CREATE_SYNCHRONIZED_SCENE(func_72(), func_71(), 2);
				AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_330, sLocal_335, "tv_enter", 8f, -8f, 0, 0, 1148846080, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_66(), uLocal_330, "tv_enter_remote", sLocal_335, 8f, -8f, 0, 1148846080);
				if (PED::_0x7F2F4F13AC5257EF(uLocal_330))
				{
					PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(uLocal_330, 0);
				}
				iLocal_308 = 6;
			}
			else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 222))
			{
				func_63();
				uLocal_330 = PED::CREATE_SYNCHRONIZED_SCENE(func_72(), func_71(), 2);
				AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_330, sLocal_335, "exit", 8f, -8f, 0, 0, 1148846080, 0);
				if (PED::_0x7F2F4F13AC5257EF(uLocal_330))
				{
					PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(uLocal_330, 0);
				}
				iLocal_308 = 12;
			}
			break;
		
		case 6:
			func_74();
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_330) > 0.6f)
			{
				uLocal_330 = PED::CREATE_SYNCHRONIZED_SCENE(func_72(), func_71(), 2);
				AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_330, sLocal_335, "tv_base", 4f, -8f, 64, 0, 1148846080, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_66(), uLocal_330, "tv_base_remote", sLocal_335, 4f, -8f, 0, 1148846080);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_330, 1);
				if (func_73(iLocal_327))
				{
					CAM::SET_CAM_PARAMS(iLocal_327, Local_358, Local_361, fLocal_364, 0, 1, 1, 2);
					CAM::SHAKE_CAM(iLocal_327, "HAND_SHAKE", (0.2f / 3f));
				}
				iLocal_308 = 7;
			}
			else if (!Global_30828[0].f_2)
			{
				if (func_73(iLocal_327))
				{
					func_69(iLocal_327, Local_354);
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_330) > 0.5f)
				{
					func_59(0, 0, 1, 0, 0);
					func_86("TV_HLP4");
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TV_FRANKLINS_HOUSE_SOCEN"))
					{
						AUDIO::START_AUDIO_SCENE("TV_FRANKLINS_HOUSE_SOCEN");
					}
				}
			}
			break;
		
		case 7:
			func_74();
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			func_64();
			if (func_73(iLocal_327))
			{
				func_69(iLocal_327, Local_361);
			}
			func_58(0, 1);
			GRAPHICS::_0xD1C55B110E4DF534(PLAYER::PLAYER_PED_ID());
			if (!func_57())
			{
				GRAPHICS::ENABLE_MOVIE_SUBTITLES(1);
			}
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 51))
			{
				uLocal_330 = PED::CREATE_SYNCHRONIZED_SCENE(func_72(), func_71(), 2);
				AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_330, sLocal_335, "tv_exit", 8f, -8f, 0, 0, 1148846080, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_66(), uLocal_330, "tv_exit_remote", sLocal_335, 8f, -8f, 0, 1148846080);
				if (PED::_0x7F2F4F13AC5257EF(uLocal_330))
				{
					PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(uLocal_330, 0);
				}
				iLocal_318 = 1;
				iLocal_308 = 9;
			}
			else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 222))
			{
				func_63();
				uLocal_330 = PED::CREATE_SYNCHRONIZED_SCENE(func_72(), func_71(), 2);
				AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_330, sLocal_335, "tv_exit", 8f, -8f, 0, 0, 1148846080, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_66(), uLocal_330, "tv_exit_remote", sLocal_335, 8f, -8f, 0, 1148846080);
				if (PED::_0x7F2F4F13AC5257EF(uLocal_330))
				{
					PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(uLocal_330, 0);
				}
				iLocal_308 = 11;
			}
			else if (func_56(0))
			{
				uLocal_330 = PED::CREATE_SYNCHRONIZED_SCENE(func_72(), func_71(), 2);
				AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_330, sLocal_335, "tv_idle_a", 8f, -8f, 0, 0, 1148846080, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_66(), uLocal_330, "tv_idle_a_remote", sLocal_335, 8f, -8f, 0, 1148846080);
				if (PED::_0x7F2F4F13AC5257EF(uLocal_330))
				{
					PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(uLocal_330, 0);
				}
				iLocal_319 = 1;
				iLocal_308 = 8;
			}
			break;
		
		case 8:
			func_74();
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (func_73(iLocal_327))
			{
				func_69(iLocal_327, Local_361);
			}
			GRAPHICS::_0xD1C55B110E4DF534(PLAYER::PLAYER_PED_ID());
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_330))
			{
				if (iLocal_319)
				{
					fVar3 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_330);
					if (fVar3 > 0.3f)
					{
						if (GRAPHICS::GET_TV_CHANNEL() == 0)
						{
							GRAPHICS::SET_TV_CHANNEL(1);
						}
						else
						{
							GRAPHICS::SET_TV_CHANNEL(0);
						}
						iLocal_319 = 0;
					}
				}
			}
			else
			{
				uLocal_330 = PED::CREATE_SYNCHRONIZED_SCENE(func_72(), func_71(), 2);
				AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_330, sLocal_335, "tv_base", 8f, -8f, 64, 0, 1148846080, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_66(), uLocal_330, "tv_base_remote", sLocal_335, 8f, -8f, 64, 1148846080);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_330, 1);
				iLocal_308 = 7;
			}
			break;
		
		case 9:
			func_74();
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_330) < 0.9f)
			{
				if (iLocal_318)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_330) > 0.5f)
					{
						func_55(0);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TV_FRANKLINS_HOUSE_SOCEN"))
						{
							AUDIO::STOP_AUDIO_SCENE("TV_FRANKLINS_HOUSE_SOCEN");
						}
						if (func_84("TV_HLP4"))
						{
							UI::CLEAR_HELP(1);
						}
						iLocal_318 = 0;
					}
				}
			}
			else
			{
				uLocal_330 = PED::CREATE_SYNCHRONIZED_SCENE(func_72(), func_71(), 2);
				AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_330, sLocal_335, "base", 8f, -8f, 64, 0, 1148846080, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_66(), uLocal_330, "base_remote", sLocal_335, 8f, -8f, 64, 1148846080);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_330, 1);
				if (func_73(iLocal_327))
				{
					CAM::SET_CAM_PARAMS(iLocal_327, Local_351, Local_354, fLocal_357, 0, 1, 1, 2);
				}
				iLocal_308 = 4;
			}
			break;
		
		case 10:
			func_74();
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (Global_30828[0].f_2)
			{
				if (func_73(iLocal_327))
				{
					func_69(iLocal_327, Local_361);
				}
				GRAPHICS::_0xD1C55B110E4DF534(PLAYER::PLAYER_PED_ID());
			}
			else if (func_73(iLocal_327))
			{
				func_69(iLocal_327, Local_375);
			}
			switch (iLocal_309)
			{
				case 0:
					if (func_84("TV_HLP4") || func_84("TV_HLP3"))
					{
						UI::CLEAR_HELP(1);
					}
					uLocal_330 = PED::CREATE_SYNCHRONIZED_SCENE(func_72(), func_71(), 2);
					AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_330, sLocal_335, "tv_exit", 8f, -8f, 0, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_66(), uLocal_330, "tv_exit_remote", sLocal_335, 8f, -8f, 0, 1148846080);
					if (PED::_0x7F2F4F13AC5257EF(uLocal_330))
					{
						PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(uLocal_330, 0);
					}
					iLocal_309 = 1;
					break;
				
				case 1:
					if (func_84("TV_HLP4") || func_84("TV_HLP3"))
					{
						UI::CLEAR_HELP(1);
					}
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_330) || iLocal_314)
					{
						uLocal_330 = PED::CREATE_SYNCHRONIZED_SCENE(func_72(), func_71(), 2);
						AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_330, sLocal_335, "blunt_enter", 8f, -8f, 0, 0, 1148846080, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_54(), uLocal_330, "blunt_enter_joint", sLocal_335, 1000f, -1000f, 0, 1148846080);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_52(), uLocal_330, "blunt_enter_lighter", sLocal_335, 8f, -8f, 0, 1148846080);
						if (!Global_30828[0].f_2)
						{
							if (func_73(iLocal_327))
							{
								CAM::SET_CAM_PARAMS(iLocal_327, Local_372, Local_375, fLocal_378, 0, 1, 1, 2);
							}
						}
						if (PED::_0x7F2F4F13AC5257EF(uLocal_330))
						{
							PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(uLocal_330, 0);
						}
						iLocal_314 = 0;
						iLocal_309 = 2;
					}
					break;
				
				case 2:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_330))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_330) > 0.55f)
						{
							if (func_57())
							{
								func_50();
							}
						}
						func_49(0);
					}
					else
					{
						uLocal_330 = PED::CREATE_SYNCHRONIZED_SCENE(func_72(), func_71(), 2);
						bLocal_320 = func_48();
						if (bLocal_320)
						{
							AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_330, sLocal_335, "blunt_idle_a", 8f, -8f, 0, 0, 1148846080, 0);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_54(), uLocal_330, "blunt_idle_a_joint", sLocal_335, 1000f, -1000f, 0, 1148846080);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_52(), uLocal_330, "blunt_idle_a_lighter", sLocal_335, 8f, -8f, 0, 1148846080);
						}
						else
						{
							AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_330, sLocal_335, "blunt_idle_b", 8f, -8f, 0, 0, 1148846080, 0);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_54(), uLocal_330, "blunt_idle_b_joint", sLocal_335, 1000f, -1000f, 0, 1148846080);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_52(), uLocal_330, "blunt_idle_b_lighter", sLocal_335, 8f, -8f, 0, 1148846080);
						}
						if (PED::_0x7F2F4F13AC5257EF(uLocal_330))
						{
							PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(uLocal_330, 0);
						}
						func_47();
						iLocal_309 = 3;
					}
					break;
				
				case 3:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_330))
					{
						func_45();
						if (bLocal_320)
						{
							func_49(1);
						}
						else
						{
							func_49(2);
						}
						if (iLocal_315)
						{
							if (!iLocal_316)
							{
								fVar3 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_330);
								if (iLocal_331 == 0)
								{
									if (ENTITY::FIND_ANIM_EVENT_PHASE(func_44(), "blunt_idle_a", func_43(), &fVar4, &fVar5))
									{
										if (fVar3 >= fVar4 && fVar3 <= fVar5)
										{
											iLocal_316 = 1;
										}
									}
								}
								else if (ENTITY::FIND_ANIM_EVENT_PHASE(func_44(), "blunt_idle_b", func_43(), &fVar4, &fVar5))
								{
									if (fVar3 >= fVar4 && fVar3 <= fVar5)
									{
										iLocal_316 = 1;
									}
								}
							}
							else
							{
								uLocal_330 = PED::CREATE_SYNCHRONIZED_SCENE(func_72(), func_71(), 2);
								AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_330, sLocal_335, "blunt_interrupt", 8f, -8f, 0, 0, 1148846080, 0);
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_54(), uLocal_330, "blunt_interrupt_joint", sLocal_335, 1000f, -1000f, 0, 1148846080);
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_52(), uLocal_330, "blunt_interrupt_lighter", sLocal_335, 8f, -8f, 0, 1148846080);
								if (PED::_0x7F2F4F13AC5257EF(uLocal_330))
								{
									PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(uLocal_330, 0);
								}
								if (!iLocal_323)
								{
									if (func_73(iLocal_327))
									{
										func_24(PLAYER::PLAYER_PED_ID(), iLocal_327, 1);
									}
									else
									{
										func_24(PLAYER::PLAYER_PED_ID(), 0, 1);
									}
									iLocal_54++;
									iLocal_323 = 1;
								}
								iLocal_315 = 0;
								iLocal_308 = 12;
							}
						}
					}
					else
					{
						func_47();
						uLocal_330 = PED::CREATE_SYNCHRONIZED_SCENE(func_72(), func_71(), 2);
						AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_330, sLocal_335, "blunt_exit", 8f, -8f, 0, 0, 1148846080, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_54(), uLocal_330, "blunt_exit_joint", sLocal_335, 1000f, -1000f, 0, 1148846080);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_52(), uLocal_330, "blunt_exit_lighter", sLocal_335, 8f, -8f, 0, 1148846080);
						if (PED::_0x7F2F4F13AC5257EF(uLocal_330))
						{
							PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(uLocal_330, 0);
						}
						if (!iLocal_323)
						{
							if (func_73(iLocal_327))
							{
								func_24(PLAYER::PLAYER_PED_ID(), iLocal_327, 1);
							}
							else
							{
								func_24(PLAYER::PLAYER_PED_ID(), 0, 1);
							}
							iLocal_54++;
							iLocal_323 = 1;
						}
						if (Global_30828[0].f_2)
						{
							iLocal_309 = 4;
						}
						else
						{
							iLocal_309 = 5;
						}
					}
					break;
				
				case 4:
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_330))
					{
						uLocal_330 = PED::CREATE_SYNCHRONIZED_SCENE(func_72(), func_71(), 2);
						AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_330, sLocal_335, "tv_enter", 8f, -8f, 0, 0, 1148846080, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_66(), uLocal_330, "tv_enter_remote", sLocal_335, 8f, -8f, 0, 1148846080);
						if (PED::_0x7F2F4F13AC5257EF(uLocal_330))
						{
							PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(uLocal_330, 0);
						}
						iLocal_309 = 5;
					}
					else
					{
						func_49(3);
					}
					break;
				
				case 5:
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_330))
					{
						func_47();
						iLocal_323 = 0;
						uLocal_330 = PED::CREATE_SYNCHRONIZED_SCENE(func_72(), func_71(), 2);
						if (Global_30828[0].f_2)
						{
							AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_330, sLocal_335, "tv_base", 8f, -8f, 64, 0, 1148846080, 0);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_66(), uLocal_330, "tv_base_remote", sLocal_335, 8f, -8f, 64, 1148846080);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_330, 1);
							func_86("TV_HLP4");
							iLocal_308 = 7;
						}
						else
						{
							AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_330, sLocal_335, "base", 8f, -8f, 64, 0, 1148846080, 0);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_66(), uLocal_330, "base_remote", sLocal_335, 8f, -8f, 64, 1148846080);
							if (func_73(iLocal_327))
							{
								CAM::SET_CAM_PARAMS(iLocal_327, Local_351, Local_354, fLocal_357, 0, 1, 1, 2);
							}
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_330, 1);
							func_86("TV_HLP3");
							iLocal_308 = 5;
						}
					}
					else
					{
						func_49(3);
					}
					break;
			}
			break;
		
		case 11:
			func_74();
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_330))
			{
				func_63();
				uLocal_330 = PED::CREATE_SYNCHRONIZED_SCENE(func_72(), func_71(), 2);
				AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_330, sLocal_335, "exit", 8f, -8f, 0, 0, 1148846080, 0);
				if (PED::_0x7F2F4F13AC5257EF(uLocal_330))
				{
					PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(uLocal_330, 0);
				}
				iLocal_308 = 12;
			}
			break;
		
		case 12:
			func_74();
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TV_FRANKLINS_HOUSE_SOCEN"))
			{
				AUDIO::STOP_AUDIO_SCENE("TV_FRANKLINS_HOUSE_SOCEN");
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_330) > 0.95f)
			{
				iLocal_308 = 13;
			}
			else
			{
				func_49(3);
				func_45();
				if (!iLocal_317)
				{
					if (func_73(iLocal_327))
					{
						CAM::_0xC819F3CBB62BF692(0, 0, 3, 0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
					iLocal_317 = 1;
				}
				if (iLocal_315)
				{
					fVar3 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_330);
					if (ENTITY::FIND_ANIM_EVENT_PHASE(func_44(), "exit", "WalkInterruptible", &fVar6, &fVar7) || ENTITY::FIND_ANIM_EVENT_PHASE(func_44(), "exit_drunk", "WalkInterruptible", &fVar6, &fVar7))
					{
						if (fVar3 >= fVar6 && fVar3 <= fVar7)
						{
							AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							iLocal_308 = 13;
						}
					}
				}
			}
			break;
		
		case 13:
			BRAIN::_0x6D6840CEE8845831("chop");
			if (!iLocal_317 && func_73(iLocal_327))
			{
				CAM::_0xC819F3CBB62BF692(0, 0, 3, 0);
			}
			if (STATS::STAT_GET_INT(-1256798071, &iLocal_334, -1))
			{
				STATS::STAT_SET_INT(-1256798071, iLocal_334 + 1, 1);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			iLocal_51 = 0;
			if (Global_30828[0].f_2)
			{
				func_23(0);
			}
			if (iLocal_326)
			{
				CONTROLS::_0x643ED62D5EA3BEBD();
				iLocal_326 = 0;
			}
			Global_30813 = 0;
			iLocal_315 = 0;
			iLocal_316 = 0;
			iLocal_323 = 0;
			iLocal_324 = 0;
			iLocal_317 = 0;
			func_75(0, 1, 1, 0, 0, 0);
			iLocal_308 = 0;
			break;
	}
}

void func_23(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_30828[iParam0].f_5 = 0;
		if (Global_30828[iParam0].f_2 && Global_30828[iParam0].f_7 == 0)
		{
			Global_30828[iParam0].f_7 = 1;
		}
		Global_30828[iParam0].f_8 = 0;
	}
}

void func_24(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if ((func_42(iParam0) + iParam2) > 10)
	{
		iParam2 = (10 - func_42(iParam0));
	}
	iVar0 = 20000;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 *= 3;
	}
	if (!func_40(iParam0))
	{
		func_38(iParam0, iVar0, 0);
		func_35(iVar0, iVar0, 0.3f, func_36(), iParam1, 0);
		iVar1 = func_34(iParam0);
		if (iVar1 == -1)
		{
			iVar2 = func_33(iVar1);
			if (!iVar2 == -1)
			{
				Global_42383[iVar2].f_4 = (Global_42383[iVar2].f_4 + iParam2);
			}
		}
	}
	else
	{
		iVar3 = func_34(iParam0);
		iVar4 = -1;
		if (iVar3 == -1)
		{
			iVar4 = func_33(iVar3);
			if (!iVar4 == -1)
			{
				Global_42383[iVar4].f_4 = (Global_42383[iVar4].f_4 + iParam2);
			}
		}
		if (Global_42564 == 0 || Global_42564 <= GAMEPLAY::GET_GAME_TIMER())
		{
			func_35(iVar0, iVar0, 0.3f, func_36(), iParam1, 0);
		}
		else
		{
			Global_42564 = (Global_42564 + iVar0);
			func_30(iParam0, iVar0);
		}
	}
	Global_42569 = 0.25f;
	StringCopy(&Global_42570, "STONED", 16);
	iVar5 = func_34(iParam0);
	if (iVar5 == -1)
	{
		iVar6 = func_33(iVar5);
		if (!iVar6 == -1)
		{
		}
		return;
	}
	func_25(1, iVar5, 4, iParam0, iParam2);
}

void func_25(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_26(iParam0, iParam1, iParam2, iParam3, 0, iParam4);
}

void func_26(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
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
	if (func_28(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_27();
	if (iVar0 == -1)
	{
		return;
	}
	Global_42464[iVar0] = iParam0;
	Global_42464[iVar0].f_1 = iParam1;
	Global_42464[iVar0].f_2 = iParam2;
	Global_42464[iVar0].f_3 = iParam3;
	Global_42464[iVar0].f_4 = iParam4;
	Global_42464[iVar0].f_5 = iParam5;
}

int func_27()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42464[iVar0].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_28(int iParam0, int iParam1, int iParam2)
{
	if (func_29(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_42464[iVar0].f_2)
		{
			if (iParam0 == Global_42464[iVar0])
			{
				if (iParam1 == Global_42464[iVar0].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_30(int iParam0, int iParam1)
{
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
	iVar0 = func_34(iParam0);
	iVar1 = -1;
	if (iVar0 == -1)
	{
		iVar1 = func_32(iParam0);
		if (!iVar1 == -1)
		{
			Global_42357[iVar1].f_3 = (Global_42357[iVar1].f_3 + iParam1);
			Global_42357[iVar1].f_2 = (Global_42357[iVar1].f_2 + iParam1);
		}
		return;
	}
	func_31(1, iVar0, 2, iParam1);
}

void func_31(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_26(iParam0, iParam1, iParam2, 0, iParam3, 1);
}

int func_32(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42357[iVar0].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_33(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42383[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_34(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42383[iVar0].f_1)
		{
			return Global_42383[iVar0];
		}
		iVar0++;
	}
	return -1;
}

void func_35(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, bool bParam5)
{
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
	if (CAM::DOES_CAM_EXIST(uParam4))
	{
		CAM::SHAKE_CAM(uParam4, "DRUNK_SHAKE", fParam3);
		Global_42563 = iParam4;
	}
	else
	{
		Global_42563 = 0;
	}
	Global_42562 = 1;
	iVar0 = GAMEPLAY::GET_GAME_TIMER();
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

float func_36()
{
	fVar0 = 0.1f;
	iVar1 = func_37(PLAYER::PLAYER_PED_ID());
	iVar2 = func_42(PLAYER::PLAYER_PED_ID());
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

int func_37(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_34(iParam0);
	iVar1 = func_33(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42383[iVar1].f_3;
}

int func_38(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_34(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_32(iParam0);
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
	iVar2 = func_39();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_42357[iVar2] = 0;
	Global_42357[iVar2].f_1 = iParam0;
	Global_42357[iVar2].f_2 = iParam1;
	Global_42357[iVar2].f_3 = iParam1;
	Global_42357[iVar2].f_4 = 0;
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		Global_42594 = 1;
	}
	Global_42355++;
	return 1;
}

int func_39()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42357[iVar0] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_40(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_41(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_41(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42383[iVar0] == -1)
		{
			if (iParam0 == Global_42383[iVar0].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_34(iParam0);
	iVar1 = func_33(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42383[iVar1].f_4;
}

char* func_43()
{
	sVar0 = "ScriptEvent";
	return sVar0;
}

char* func_44()
{
	switch (iLocal_55)
	{
		case -257549932:
			if (bLocal_49)
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
				if (bLocal_50)
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
			if (bLocal_50)
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

void func_45()
{
	if (!iLocal_315)
	{
		func_46(&iVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((iVar0 < -64 || iVar0 > 64) || iVar1 < -64) || iVar1 > 64)
		{
			iLocal_315 = 1;
		}
	}
}

void func_46(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = SYSTEM::FLOOR((CONTROLS::GET_CONTROL_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((CONTROLS::GET_CONTROL_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((CONTROLS::GET_CONTROL_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((CONTROLS::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

void func_47()
{
	iLocal_310 = 0;
	iLocal_311 = 0;
	iLocal_325 = 0;
	iLocal_312 = 0;
	iLocal_313 = 0;
}

int func_48()
{
	if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_49(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!iLocal_311 && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_330) > 0.25f)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_sh_lighter_sparks", func_52(), 0f, 0f, 0.05f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				iLocal_311 = 1;
			}
			if (!iLocal_310 && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_330) > 0.255f)
			{
				uLocal_329 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sh_lighter_flame", func_52(), 0f, 0f, 0.05f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				iLocal_310 = 1;
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_329) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_330) > 0.45f)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_329, 0);
			}
			if (!iLocal_325 && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_330) > 0.346f)
			{
				uLocal_328 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sh_cig_smoke", func_54(), -0.09f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				iLocal_325 = 1;
			}
			if (!iLocal_312 && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_330) > 0.82f)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_sh_cig_exhale_mouth", PLAYER::PLAYER_PED_ID(), Local_342, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
				iLocal_312 = 1;
			}
			if (!iLocal_313 && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_330) > 0.876f)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_sh_cig_exhale_nose", PLAYER::PLAYER_PED_ID(), Local_345, Local_348, 31086, 1065353216, 0, 0, 0);
				iLocal_313 = 1;
			}
			break;
		
		case 1:
			if (!iLocal_313 && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_330) > 0.42f)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_sh_cig_exhale_nose", PLAYER::PLAYER_PED_ID(), Local_345, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
				iLocal_313 = 1;
			}
			if (!iLocal_312 && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_330) > 0.7f)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_sh_cig_exhale_mouth", PLAYER::PLAYER_PED_ID(), Local_342, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
				iLocal_312 = 1;
			}
			break;
		
		case 2:
			if (!iLocal_313 && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_330) > 0.48f)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_sh_cig_exhale_nose", PLAYER::PLAYER_PED_ID(), Local_345, Local_348, 31086, 1065353216, 0, 0, 0);
				iLocal_313 = 1;
			}
			break;
		
		case 3:
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_328) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_330) > 0.27f)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_328, 0);
			}
			if (!iLocal_312 && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_330) > 0.45f)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_sh_cig_exhale_mouth", PLAYER::PLAYER_PED_ID(), Local_342, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
				iLocal_312 = 1;
			}
			if (!iLocal_313 && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_330) > 0.45f)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_sh_cig_exhale_nose", PLAYER::PLAYER_PED_ID(), Local_345, Local_348, 31086, 1065353216, 0, 0, 0);
				iLocal_313 = 1;
			}
			break;
	}
}

void func_50()
{
	Global_19671 = 0;
	func_51();
}

void func_51()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_20805 = 6;
	}
}

var func_52()
{
	switch (iLocal_55)
	{
		case -257549932:
		case -693032058:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_53(), 5f, -680040094, 0, 0, 1);
			break;
		
		case -1630172026:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_53(), 2f, -680040094, 0, 0, 1);
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_53(), 5f, 488156118, 0, 0, 1);
			break;
		
		case -35679191:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_53(), 5f, 21833643, 0, 0, 1);
			break;
		
		case 2057223314:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_53(), 5f, -1296774200, 0, 0, 1);
			break;
	}
	return uVar0;
}

Vector3 func_53()
{
	switch (iLocal_55)
	{
		case -257549932:
			if (bLocal_49)
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
			if (bLocal_50)
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

var func_54()
{
	switch (iLocal_55)
	{
		case -693032058:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_53(), 5f, -693032058, 0, 0, 1);
			break;
		
		case -1620762220:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_53(), 2.5f, -1620762220, 0, 0, 1);
			break;
		
		case 788975200:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_53(), 5f, 788975200, 0, 0, 1);
			break;
		
		case -1533900808:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_53(), 5f, -1533900808, 0, 0, 1);
			break;
		
		case 1384562503:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_53(), 5f, 1384562503, 0, 0, 1);
			break;
		
		case -1630172026:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_53(), 5f, -1630172026, 0, 0, 1);
			break;
		
		case 2057223314:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_53(), 3f, -1620762220, 0, 0, 1);
			break;
		
		case 469594741:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_53(), 5f, 469594741, 0, 0, 1);
			break;
		
		case -35679191:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_53(), 5f, -35679191, 0, 0, 1);
			break;
	}
	return uVar0;
}

void func_55(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_30828[iParam0].f_4 = 1;
	}
}

int func_56(int iParam0)
{
	iVar0 = 64;
	iVar1 = (CONTROLS::GET_CONTROL_VALUE(2, 218) - 127);
	if (iParam0 || SYSTEM::TIMERA() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			SYSTEM::SETTIMERA(0);
			return 1;
		}
	}
	return 0;
}

int func_57()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_58(bool bParam0, bool bParam1)
{
	iVar0 = 64;
	if (bParam0)
	{
		if (func_56(0))
		{
			if (!iLocal_36)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (GRAPHICS::GET_TV_CHANNEL() == 0)
				{
					GRAPHICS::SET_TV_CHANNEL(1);
				}
				else
				{
					GRAPHICS::SET_TV_CHANNEL(0);
				}
				iLocal_36 = 1;
			}
		}
		else if (iLocal_36)
		{
			iLocal_36 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (CONTROLS::GET_CONTROL_VALUE(2, 219) - 127);
		if (!iLocal_37)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = GRAPHICS::GET_TV_VOLUME();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				GRAPHICS::SET_TV_VOLUME(fVar2);
				iLocal_38 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_37 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = GRAPHICS::GET_TV_VOLUME();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				GRAPHICS::SET_TV_VOLUME(fVar2);
				iLocal_38 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_37 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_39 = 1;
			}
			else if (iLocal_39)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_39 = 0;
				}
			}
		}
		if (iLocal_37)
		{
			if (iVar1 == 0 || GAMEPLAY::GET_GAME_TIMER() > iLocal_38 + 24)
			{
				iLocal_37 = 0;
			}
		}
	}
}

void func_59(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam0 != -1)
	{
		if (!func_62(iParam0))
		{
			return;
		}
		Global_30828[iParam0].f_5 = 1;
		Global_30828[iParam0] = iParam1;
		Global_30828[iParam0].f_1 = iParam2;
		Global_30828[iParam0].f_9 = iParam4;
		Global_30828[iParam0].f_7 = iParam3;
		if (func_61(iParam0))
		{
			GRAPHICS::SET_TV_CHANNEL(-1);
			GRAPHICS::_0xF7B38B8305F1FE8B(iParam1, func_60(iParam2), iParam4);
			GRAPHICS::SET_TV_CHANNEL(iParam1);
		}
	}
	StringCopy(&Global_30906, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
}

char* func_60(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

int func_61(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_30828[iParam0].f_2)
		{
			return 1;
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_30828[iParam0].f_6)
		{
			return 1;
		}
	}
	return 0;
}

void func_63()
{
	if (func_73(iLocal_327))
	{
		CAM::SET_CAM_PARAMS(iLocal_327, Local_365, Local_368, fLocal_371, 0, 1, 1, 2);
	}
	if (func_84("TV_HLP4") || func_84("TV_HLP3"))
	{
		UI::CLEAR_HELP(1);
	}
	if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}

void func_64()
{
	if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 224))
	{
		func_65(202, 1);
		if (func_84("TV_HLP4") || func_84("TV_HLP3"))
		{
			UI::CLEAR_HELP(1);
		}
		if (Global_30828[0].f_2)
		{
			iLocal_309 = 0;
		}
		else
		{
			iLocal_314 = 1;
			iLocal_309 = 1;
		}
		if (STATS::STAT_GET_INT(-457571384, &iLocal_332, -1))
		{
			STATS::STAT_SET_INT(-457571384, iLocal_332 + 1, 1);
		}
		iLocal_308 = 10;
	}
}

void func_65(int iParam0, int iParam1)
{
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57254[iParam0].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_57254[iParam0])
	{
		STATS::STAT_GET_INT(Global_57254[iParam0].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_57254[iParam0].f_1, iVar0, 1);
	}
}

var func_66()
{
	uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_53(), 10f, 542291840, 0, 0, 1);
	return uVar0;
}

void func_67()
{
	GRAPHICS::_0xF7B38B8305F1FE8B(0, func_60(1), 0);
	if (func_68(22))
	{
		GRAPHICS::_0xF7B38B8305F1FE8B(1, func_60(12), 0);
	}
	else
	{
		GRAPHICS::_0xF7B38B8305F1FE8B(1, func_60(2), 0);
	}
}

int func_68(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0];
}

void func_69(var uParam0, struct<3> Param1)
{
	if (CAM::DOES_CAM_EXIST(uParam0))
	{
		Var0 = { CAM::GET_CAM_ROT(uParam0, 2) };
		Var3 = { Param1 };
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			fVar9 = CONTROLS::GET_CONTROL_NORMAL(2, 240);
			fVar10 = CONTROLS::GET_CONTROL_NORMAL(2, 239);
			fVar11 = ((fVar9 - 0.5f) * (-6.5f * 2f));
			fVar12 = ((fVar10 - 0.5f) * (-12.5f * 2f));
			Var3.x = (Var3.x + fVar11);
			Var3.z = (Var3.z + fVar12);
			while (Var3.z < -180f)
			{
				Var3.z = (Var3.z + 360f);
			}
			while (Var3.z > 180f)
			{
				Var3.z = (Var3.z - 360f);
			}
			while (Var3.x < -180f)
			{
				Var3.x = (Var3.x + 360f);
			}
			while (Var3.x > 180f)
			{
				Var3.x = (Var3.x - 360f);
			}
			fVar13 = (Var3.z - Var0.z);
			fVar14 = func_70(fVar13, -180f, 180f);
			Var6 = { Var0 + Var3 - Var0 * Vector(0.25f, 0.25f, 0.25f) };
			Var6.z = (Var0.z + (fVar14 * 0.25f));
		}
		else
		{
			func_46(&uVar15, &uVar16, &iVar17, &iVar18, 0);
			if ((iVar17 < 32 && iVar17 > -32) && (iVar18 < 32 && iVar18 > -32))
			{
				if (iVar17 < 32 && iVar17 > -32)
				{
					iVar17 = 0;
				}
				else if (iVar17 < 0)
				{
					iVar17 = (iVar17 - 32);
				}
				else
				{
					iVar17 += 32;
				}
				if (iVar18 < 32 && iVar18 > -32)
				{
					iVar18 = 0;
				}
				else if (iVar18 < 0)
				{
					iVar18 = (iVar18 - 32);
				}
				else
				{
					iVar18 += 32;
				}
			}
			iVar17 = (iVar17 * -1);
			iVar18 = (iVar18 * -1);
			if (CONTROLS::IS_LOOK_INVERTED())
			{
				iVar18 = (iVar18 * -1);
			}
			Var3.x = (Var3.x + (IntToFloat(iVar18) * 0.05f));
			Var3.z = (Var3.z + (IntToFloat(iVar17) * 0.1f));
			while (Var3.z < -180f)
			{
				Var3.z = (Var3.z + 360f);
			}
			while (Var3.z > 180f)
			{
				Var3.z = (Var3.z - 360f);
			}
			while (Var0.z < -180f)
			{
				Var0.z = (Var0.z + 360f);
			}
			while (Var0.z > 180f)
			{
				Var0.z = (Var0.z - 360f);
			}
			fVar19 = (Var3.z - Var0.z);
			fVar20 = func_70(fVar19, -180f, 180f);
			Var6 = { Var0 + Var3 - Var0 * Vector(0.25f, 0.25f, 0.25f) };
			Var6.z = (Var0.z + (fVar20 * 0.25f));
		}
		while (Var6.z < -180f)
		{
			Var6.z = (Var6.z + 360f);
		}
		while (Var6.z > 180f)
		{
			Var6.z = (Var6.z - 360f);
		}
		CAM::SET_CAM_ROT(uParam0, Var6, 2);
	}
}

float func_70(float fParam0, float fParam1, float fParam2)
{
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fVar1 = SYSTEM::TO_FLOAT(SYSTEM::FLOOR(((fParam0 - fParam1) / fVar0)));
	return (fParam0 - (fVar1 * fVar0));
}

Vector3 func_71()
{
	Var0 = { 0f, 0f, 0f };
	switch (iLocal_55)
	{
		case -257549932:
			if (!bLocal_49)
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
			if (bLocal_50)
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

Vector3 func_72()
{
	Var0 = { 0f, 0f, 0f };
	switch (iLocal_55)
	{
		case -257549932:
			if (!bLocal_49)
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
			if (bLocal_50)
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

int func_73(int iParam0)
{
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4 && CAM::DOES_CAM_EXIST(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_74()
{
	Global_22211.f_6 = 1;
}

void func_75(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_83(1);
		UI::_0xA8FDB297A8D25FBA();
		UI::_0xFDB423997FA30340();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_13())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_82(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_83(0);
		UI::_0xE1CD1E48E025E661();
		Global_61518 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_82(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_80(PLAYER::PLAYER_ID())) && !func_77(PLAYER::PLAYER_ID(), 0)) && !func_76()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_80(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_76620 = 0;
	}
}

bool func_76()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 14);
}

bool func_77(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_78(-1, 0) == 8;
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

int func_78(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_79();
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

int func_79()
{
	return Global_1312745;
}

int func_80(int iParam0)
{
	if (func_77(iParam0, 0))
	{
		return 1;
	}
	if (func_81())
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

bool func_81()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

int func_82(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_83(int iParam0)
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

bool func_84(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_85(bool bParam0, bool bParam1, bool bParam2)
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

void func_86(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

int func_87()
{
	switch (iLocal_55)
	{
		case -693032058:
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-805.17f, 173.98f, 72.69f, 0.1f, -693032058, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-805.17f, 173.98f, 72.69f, 0.1f, -693032058, 0, 0, 1), 1);
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-805.13f, 173.86f, 72.68f, 0.1f, -680040094, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-805.13f, 173.86f, 72.68f, 0.1f, -680040094, 0, 0, 1), 1);
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-805.09f, 173.83f, 72.68f, 0.1f, 996113921, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-805.13f, 173.86f, 72.68f, 0.1f, 996113921, 0, 0, 1), 1);
						if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-804.45f, 172.78f, 72.33f, 0.1f, 542291840, 0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-804.45f, 172.78f, 72.33f, 0.1f, 542291840, 0, 0, 1), 1);
							return 1;
						}
					}
				}
			}
			break;
		
		case -1620762220:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
			{
				return 1;
			}
			break;
		
		case -35679191:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_56) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-8.9f, 517.01f, 174f, 1f, 21833643, 0))
			{
				return 1;
			}
			break;
		
		case -1630172026:
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-10.3f, -1440.94f, 30.62f, 0.5f, -1630172026, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-10.3f, -1440.94f, 30.62f, 0.5f, -1630172026, 0, 0, 1), 1);
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-10.3f, -1440.94f, 30.62f, 0.5f, -680040094, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-10.3f, -1440.94f, 30.62f, 0.5f, -680040094, 0, 0, 1), 1);
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-10.3f, -1440.94f, 30.62f, 0.5f, 996113921, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-10.3f, -1440.94f, 30.62f, 0.5f, 996113921, 0, 0, 1), 1);
						return 1;
					}
				}
			}
			break;
		
		case 788975200:
			if (bLocal_50)
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1153.82f, -1523.31f, 10.51f, 0.5f, 788975200, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1153.82f, -1523.31f, 10.51f, 0.5f, 788975200, 0, 0, 1), 1);
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1153.82f, -1523.31f, 10.51f, 0.5f, 488156118, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1153.82f, -1523.31f, 10.51f, 0.5f, 488156118, 0, 0, 1), 1);
						return 1;
					}
				}
			}
			else if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-800.68f, 184.18f, 72.57f, 0.5f, 788975200, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-800.68f, 184.18f, 72.57f, 0.5f, 788975200, 0, 0, 1), 1);
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-800.68f, 184.18f, 72.55f, 0.5f, 488156118, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-800.68f, 184.18f, 72.55f, 0.5f, 488156118, 0, 0, 1), 1);
					return 1;
				}
			}
			break;
		
		case -1533900808:
			if (bLocal_50)
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1153.82f, -1523.31f, 10.51f, 0.5f, -1533900808, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1153.82f, -1523.31f, 10.51f, 0.5f, -1533900808, 0, 0, 1), 1);
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1153.82f, -1523.31f, 10.51f, 0.5f, 488156118, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1153.82f, -1523.31f, 10.51f, 0.5f, 488156118, 0, 0, 1), 1);
						return 1;
					}
				}
			}
			else if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-800.68f, 184.18f, 72.55f, 0.5f, -1533900808, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-800.68f, 184.18f, 72.55f, 0.5f, -1533900808, 0, 0, 1), 1);
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-800.68f, 184.18f, 72.55f, 0.5f, 488156118, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-800.68f, 184.18f, 72.55f, 0.5f, 488156118, 0, 0, 1), 1);
					return 1;
				}
			}
			break;
		
		case 1384562503:
			if (bLocal_50)
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1153.82f, -1523.31f, 10.51f, 0.5f, 1384562503, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1153.82f, -1523.31f, 10.51f, 0.5f, 1384562503, 0, 0, 1), 1);
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1153.82f, -1523.31f, 10.51f, 0.5f, 488156118, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1153.82f, -1523.31f, 10.51f, 0.5f, 488156118, 0, 0, 1), 1);
						return 1;
					}
				}
			}
			else if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-800.68f, 184.18f, 72.55f, 0.5f, -1533900808, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-800.68f, 184.18f, 72.55f, 0.5f, -1533900808, 0, 0, 1), 1);
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-800.68f, 184.18f, 72.55f, 0.5f, 488156118, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-800.68f, 184.18f, 72.55f, 0.5f, 488156118, 0, 0, 1), 1);
					return 1;
				}
			}
			break;
		
		case 2057223314:
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(1976.92f, 3821.21f, 33.32f, 0.5f, -1620762220, 0))
			{
				return 1;
			}
			break;
		
		case 469594741:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_56, 1);
				return 1;
			}
			break;
	}
	return 0;
}

int func_88()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_89(struct<3> Param0, float fParam3, var uParam4, var uParam5)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (!FIRE::IS_EXPLOSION_IN_SPHERE(-1, Param0, 2f))
			{
				if ((((CAM::IS_GAMEPLAY_CAM_RENDERING() && !CUTSCENE::IS_CUTSCENE_PLAYING()) && !CAM::IS_CINEMATIC_CAM_RENDERING()) && !func_93(0)) && !func_92())
				{
					if ((Global_95672 && Global_95673) || func_91())
					{
						return 0;
					}
					if (func_90(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0, fParam3, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_90(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
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

int func_91()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

int func_92()
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
			if (bLocal_50)
			{
				if (ENTITY::GET_ENTITY_MODEL(uVar2[iVar1]) == 225514697)
				{
					if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uVar2[iVar1], 1), 1) < 3f)
					{
						return 1;
					}
				}
			}
			if (!bLocal_50 && !bLocal_49)
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

int func_93(int iParam0)
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

int func_94()
{
	if ((func_99() && func_98()) && func_96())
	{
		return 1;
	}
	if (!func_99())
	{
	}
	if (!func_95())
	{
	}
	if (!func_98())
	{
	}
	if (!func_96())
	{
	}
	return 0;
}

int func_95()
{
	STREAMING::REQUEST_PTFX_ASSET();
	if (STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		iLocal_322 = 1;
		return 1;
	}
	return 0;
}

int func_96()
{
	if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK(func_97(), 0, -1))
	{
		return 1;
	}
	return 0;
}

char* func_97()
{
	switch (iLocal_55)
	{
		case -257549932:
			if (bLocal_49)
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
			if (bLocal_50)
			{
				sVar0 = "SAFEHOUSE_TREVOR_DRINK_WHISKEY";
			}
			else
			{
				sVar0 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
			}
			break;
		
		case 2057223314:
			if (bLocal_50)
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

int func_98()
{
	iVar0 = func_66();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_99()
{
	STREAMING::REQUEST_ANIM_DICT(sLocal_335);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_335))
	{
		return 0;
	}
	iLocal_321 = 1;
	return 1;
}

int func_100()
{
	func_101();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_101()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_104(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_103(PLAYER::PLAYER_PED_ID());
			if (func_102(iVar0) && (!func_16(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_102(Global_111638.f_2358.f_539.f_4321))
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

bool func_102(int iParam0)
{
	return iParam0 < 3;
}

int func_103(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_104(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_104(int iParam0)
{
	if (func_102(iParam0))
	{
		return func_105(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_105(int iParam0)
{
	return Global_1798[iParam0];
}

int func_106()
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

int func_107()
{
	if (Global_95666 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

int func_108(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_109(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_109(int iParam0)
{
	return func_110(iParam0, Global_41431);
}

int func_110(int iParam0, int iParam1)
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

void func_111()
{
	func_116();
	if (((((func_84(func_115()) || func_84("TV_HLP0")) || func_84("TV_HLP1")) || func_84("TV_HLP2")) || func_84("TV_HLP3")) || func_84("TV_HLP4"))
	{
		UI::CLEAR_HELP(1);
	}
	AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_SAFEHOUSE_ACTIVITIES_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("FRANKLIN_SAFEHOUSE_ACTIVITIES_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TV_FRANKLINS_HOUSE_SOCEN"))
	{
		AUDIO::STOP_AUDIO_SCENE("TV_FRANKLINS_HOUSE_SOCEN");
	}
	GRAPHICS::ENABLE_MOVIE_SUBTITLES(0);
	if (iLocal_321)
	{
		STREAMING::REMOVE_ANIM_DICT(func_44());
	}
	if (iLocal_322)
	{
		STREAMING::REMOVE_PTFX_ASSET();
	}
	if (CAM::DOES_CAM_EXIST(iLocal_327))
	{
		CAM::DESTROY_CAM(iLocal_327, 0);
	}
	func_114();
	func_113(&uLocal_123, 0);
	func_113(&uLocal_123, 1);
	if (iLocal_51)
	{
		BRAIN::_0x6D6840CEE8845831("chop");
	}
	func_112();
	if (iLocal_326)
	{
		CONTROLS::_0x643ED62D5EA3BEBD();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_112()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if ((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && func_85(1, 0, 1)) && iLocal_51)
		{
			func_75(0, 1, 1, 0, 0, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		}
	}
}

void func_113(var uParam0, int iParam1)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
		uParam0[iParam1]->f_7 = 0;
	}
}

void func_114()
{
	iLocal_54 = 0;
}

char* func_115()
{
	switch (iLocal_55)
	{
		case -257549932:
			if (bLocal_49)
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

void func_116()
{
	switch (iLocal_55)
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
			if (bLocal_50)
			{
			}
			break;
		
		case 469594741:
			break;
		
		case -35679191:
			break;
	}
}

