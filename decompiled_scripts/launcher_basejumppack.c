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
	Local_45 = { 500f, 500f, 500f };
	iLocal_96 = -1;
	iLocal_97 = 2050;
	iLocal_98 = -1;
	iLocal_99 = -1;
	sLocal_101 = "CC_SUBSTR";
	fLocal_102 = 125f;
	iLocal_103 = 1;
	iLocal_105 = 263;
	fLocal_117 = 4f;
	Local_90 = { ScriptParam_0.f_1[0] };
	Local_90 = { Local_90 };
	uLocal_86 = uLocal_86;
	Local_69 = { Local_69 };
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(114))
	{
		func_141(1);
	}
	uLocal_85 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_95 = 0;
	func_139(&Global_110289, 0);
	func_133();
	MISC::_0x6F2135B6129620C1(1);
	if (func_132(uLocal_94, 1))
	{
		iLocal_100 = 10;
	}
	else
	{
		iLocal_100 = 9;
	}
	while (!Global_37199)
	{
		SYSTEM::WAIT(0);
	}
	if (!func_132(uLocal_94, 8))
	{
		if (!func_130(iLocal_100))
		{
			if (func_129(0, iLocal_99))
			{
				func_141(0);
			}
			else
			{
				func_141(1);
			}
		}
	}
	if (iLocal_99 != -1)
	{
		if (!func_129(0, iLocal_99))
		{
			func_141(1);
		}
	}
	if (func_132(uLocal_94, 8388608))
	{
		func_141(1);
	}
	if (func_132(uLocal_94, 524288) && (func_128() && !func_127()))
	{
		func_141(1);
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_132(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_126(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_125(10);
	}
	while (true)
	{
		if (Global_3)
		{
			func_141(1);
		}
		uLocal_85 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (func_132(uLocal_94, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(uLocal_85, 0))
			{
				func_141(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_85) && !ENTITY::IS_ENTITY_DEAD(iLocal_85, 0))
		{
			Local_87 = { ENTITY::GET_ENTITY_COORDS(iLocal_85, 1) };
			uLocal_93 = SYSTEM::VDIST2(Local_87, ScriptParam_0.f_1[0]);
			uLocal_93 = uLocal_93;
			Local_111 = { Local_87 };
			Local_114 = { ScriptParam_0.f_1[0] };
			Local_111.z = 0f;
			Local_114.z = 0f;
			fLocal_110 = SYSTEM::VDIST2(Local_111, Local_114);
			switch (iLocal_95)
			{
				case 0:
					if (func_130(iLocal_100) || (func_132(uLocal_94, 16) && !func_132(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_121();
						func_125(1);
					}
					else
					{
						if (fLocal_110 > (fLocal_102 * fLocal_102))
						{
							if (iLocal_105 != 263)
							{
								func_126(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_125(10);
						}
						if ((Local_87.z - ScriptParam_0.f_1[0].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_119())
					{
						iLocal_103 = iLocal_103;
						func_125(3);
					}
					else
					{
						func_121();
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_141(1);
						return;
					}
					if (!func_130(iLocal_100))
					{
						if (!func_132(uLocal_94, 8))
						{
							bVar1 = true;
							if (MISC::ARE_STRINGS_EQUAL(&(Global_98744.f_3), &Local_69))
							{
								Local_69 = { Local_53 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_141(0);
								break;
							}
						}
					}
					if (!func_132(uLocal_94, 4))
					{
						func_116();
						func_115(&uLocal_94, 4);
					}
					if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_98778)
					{
						if (iLocal_105 != 263)
						{
							if (func_114(6) && !func_113(iLocal_105))
							{
							}
							else
							{
								func_126(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
						}
						func_125(10);
					}
					else
					{
						Local_69 = { Local_53 };
						bVar2 = !func_132(uLocal_94, 64);
						func_139(&uLocal_94, 128);
						if (!func_112(3) && !Global_98778)
						{
							if (func_132(uLocal_94, 2097152))
							{
								if ((!func_132(uLocal_94, 1) || !ENTITY::DOES_ENTITY_EXIST(func_111())) && !Global_98778)
								{
									func_125(10);
									break;
								}
							}
						}
						if (func_132(uLocal_94, 524288) && (func_128() && !func_127()))
						{
							func_141(1);
						}
						if (func_110())
						{
							func_141(1);
						}
						if ((!func_102(6) || Global_110685) || func_101())
						{
							bVar2 = false;
						}
						if (func_132(uLocal_94, 1))
						{
							if (!func_100())
							{
								func_98(&uLocal_94, 128);
								bVar2 = false;
							}
						}
						if (func_97(1))
						{
							bVar2 = false;
						}
						if (Global_76622)
						{
							bVar2 = false;
						}
						if (func_96())
						{
							bVar2 = false;
						}
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							bVar2 = false;
						}
						if (func_95() || func_94(8, -1))
						{
							bVar2 = false;
						}
						if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
						{
							bVar2 = false;
						}
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							bVar2 = false;
						}
						if (func_93(0) || func_92())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_85, ScriptParam_0.f_1[0], fLocal_117, fLocal_117, 2f, 0, 1, iLocal_103))
							{
								bVar2 = false;
							}
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								PAD::SET_INPUT_EXCLUSIVE(0, 51);
								if (func_91(uLocal_86))
								{
									if (iLocal_96 == -1)
									{
										func_90(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
										func_98(&uLocal_94, 2048);
									}
									else if (!func_132(uLocal_94, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_89(&iLocal_96);
										func_139(&uLocal_94, 2048);
									}
									if (func_87(iLocal_96, 1))
									{
										sLocal_101 = sLocal_101;
										func_89(&iLocal_96);
										func_139(&uLocal_94, 2048);
										SCRIPT::REQUEST_SCRIPT(&Local_69);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
										func_125(5);
									}
								}
								else
								{
									sLocal_101 = sLocal_101;
									func_89(&iLocal_96);
									func_139(&uLocal_94, 2048);
									SCRIPT::REQUEST_SCRIPT(&Local_69);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
									func_125(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_96 != -1)
							{
								func_89(&iLocal_96);
								func_139(&uLocal_94, 2048);
								HUD::CLEAR_HELP(0);
							}
						}
					}
					func_84();
					break;
				
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(0, 51);
					if (SCRIPT::HAS_SCRIPT_LOADED(&Local_69))
					{
						if (iLocal_96 != -1)
						{
							func_89(&iLocal_96);
						}
						iVar3 = 2;
						bVar0 = false;
						if (func_132(uLocal_94, 1))
						{
							if (func_114(6) || func_114(7))
							{
								iVar3 = 1;
								bVar0 = true;
							}
						}
						if (iVar3 != 1)
						{
							iVar3 = func_81(&iLocal_98, 6, iLocal_100, 0, 0);
						}
						if (iVar3 == 1)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							}
							func_80();
							if (Global_42596)
							{
								func_71(PLAYER::PLAYER_PED_ID());
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 56);
							uLocal_52 = func_24();
							func_98(&uLocal_94, 2);
							func_125(6);
							func_20(&uLocal_107);
							if (iLocal_99 != -1)
							{
								func_19(iLocal_99);
								func_16(func_18(iLocal_99), 0, 0);
							}
						}
						else if (iVar3 == 2)
						{
							func_15();
						}
						else if (iVar3 == 0)
						{
							func_125(10);
						}
					}
					else
					{
						func_15();
					}
					break;
				
				case 6:
					if (func_132(Global_110289, 262144))
					{
						func_139(&Global_110289, 262144);
						func_14();
					}
					if (func_132(uLocal_94, 2097152))
					{
						if (!func_112(3) && !SCRIPT::IS_THREAD_ACTIVE(uLocal_52))
						{
							func_125(10);
						}
					}
					if (!SCRIPT::IS_THREAD_ACTIVE(uLocal_52))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_10(&uLocal_107) * 1000f)), iLocal_99, 0);
						func_9(&uLocal_107);
						func_139(&uLocal_94, 256);
						func_8();
						if (bVar0)
						{
							func_139(&uLocal_94, 2);
						}
						else if (func_132(uLocal_94, 2))
						{
							if (func_132(Global_110289, 0))
							{
								func_7(&iLocal_98);
								iLocal_98 = -1;
								func_139(&uLocal_94, 2);
							}
							else
							{
								func_7(&iLocal_98);
								iLocal_98 = -1;
								func_139(&uLocal_94, 2);
							}
						}
						func_125(0);
						if (iLocal_99 != -1)
						{
							if (func_132(Global_110289, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_18(iLocal_99), 0, Global_98781, 0);
								func_6(func_18(iLocal_99), 0, Global_98781, 1, 0);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_18(iLocal_99), 0, Global_98781, 0);
								func_6(func_18(iLocal_99), 0, Global_98781, 0, 0);
							}
						}
						func_5();
						func_139(&Global_110289, 0);
						if (func_132(uLocal_94, 16777216))
						{
							func_141(1);
						}
						if (iLocal_99 != -1)
						{
							if (Global_111638.f_9080)
							{
								if (!func_129(0, iLocal_99))
								{
									func_141(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_125(0);
					break;
				
				case 10:
					func_141(1);
					break;
				
				case 9:
					if (fLocal_110 > (fLocal_102 * fLocal_102))
					{
						if (iLocal_105 != 263)
						{
							func_126(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_125(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_105 != 263)
					{
						func_126(iLocal_105, 0, 0);
					}
					if (iLocal_96 != -1)
					{
						func_89(&iLocal_96);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_101))
					{
						if (func_1(sLocal_101))
						{
							HUD::CLEAR_HELP(1);
						}
					}
					func_125(4);
					break;
				
				case 4:
					if ((iLocal_104 % 150) == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_106 == 2)
							{
								if (iLocal_106 == 2)
								{
									if (func_130(iLocal_100) && func_129(0, iLocal_99))
									{
										func_133();
										if (iLocal_105 != 263)
										{
											func_126(iLocal_105, 1, 0);
										}
										func_125(0);
									}
								}
							}
							else if (iLocal_106 == 0)
							{
								if (fLocal_110 > (fLocal_102 * fLocal_102))
								{
									if (iLocal_105 != 263)
									{
										func_126(iLocal_105, 1, 0);
										iLocal_105 = 263;
									}
									func_125(10);
								}
							}
							else if (iLocal_106 == 1)
							{
								if (fLocal_110 > ((80f + 5f) * (80f + 5f)))
								{
									func_133();
									if (iLocal_105 != 263)
									{
										func_126(iLocal_105, 1, 0);
									}
									func_125(0);
								}
							}
						}
						else
						{
							func_126(iLocal_105, 1, 0);
						}
					}
					else
					{
						iLocal_104++;
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

bool func_1(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2()
{
	func_3(&uLocal_118);
	func_3(&uLocal_120);
	STREAMING::REMOVE_ANIM_DICT("pickup_object");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@basejump@ig_15");
}

void func_3(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()
{
}

void func_5()
{
}

void func_6(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_95814))
	{
		return;
	}
	if (MISC::COMPARE_STRINGS(sParam0, &Global_95814, 0, -1) != 0)
	{
		return;
	}
	STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, iParam3, iParam4, Global_92921);
	StringCopy(&Global_95814, "", 64);
}

void func_7(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_41393)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_41392 = 0;
	Global_41394 = 0;
	Global_41431 = 15;
	Global_61509 = 0;
	Global_61510 = 0;
}

void func_8()
{
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &cVar0);
	}
}

void func_9(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_10(var uParam0)
{
	if (func_13(uParam0))
	{
		if (func_12(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_11(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_11(bool bParam0)
{
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_12(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

bool func_13(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

int func_14()
{
	return 1;
}

void func_15()
{
}

void func_16(char* sParam0, int iParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_95814))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_95814, 0, 0, 0, 1, 0);
		StringCopy(&Global_95814, "", 64);
	}
	StringCopy(&Global_95814, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_17(0));
}

bool func_17(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

char* func_18(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_19(int iParam0)
{
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &cVar1);
	}
}

void func_20(var uParam0)
{
	if (!func_13(uParam0))
	{
		func_23(uParam0);
	}
	else
	{
		func_21(uParam0);
	}
}

void func_21(var uParam0)
{
	func_22(uParam0, 0f);
}

void func_22(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_11(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_23(var uParam0)
{
	if (!func_13(uParam0))
	{
		func_21(uParam0);
	}
}

var func_24()
{
	Global_111638.f_18962 = iLocal_122;
	switch (iLocal_122)
	{
		case 4:
		case 8:
			func_25(1);
			break;
		
		case 5:
		case 12:
		case 6:
			func_25(0);
			break;
		
		default:
			break;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
	}
	uVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&Local_53, &Local_123, 170, iLocal_97);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_53);
	return uVar0;
}

void func_25(bool bParam0)
{
	Var12 = { func_70(iLocal_122) };
	Var12 = { func_69(SYSTEM::COS(Var12.z), SYSTEM::SIN(Var12.z), MISC::TAN(Var12.x)) };
	STREAMING::NEW_LOAD_SCENE_START(func_68(iLocal_122), Var12, 5000f, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
	HUD::DISPLAY_HUD(0);
	HUD::DISPLAY_RADAR(0);
	func_66(1);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 1);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.3f)
		{
			TASK::TASK_STAND_STILL(PLAYER::PLAYER_PED_ID(), -1);
			while (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.3f)
			{
				SYSTEM::WAIT(0);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_297))
		{
			Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(iLocal_297, 0) };
			Var6.z = 0f;
			fVar15 = SYSTEM::VMAG(Var6);
			TASK::OPEN_SEQUENCE_TASK(&uVar3);
			if (fVar15 > 0.8f)
			{
				Var6 = { Var6 * FtoV((0.78f / fVar15)) };
				Var9 = { ENTITY::GET_ENTITY_COORDS(iLocal_297, 0) + Var6 };
				if (iLocal_122 == 12)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var9, 1f, 20000, 1048576000, 0, func_65(Var9, ENTITY::GET_ENTITY_COORDS(iLocal_297, 0)));
				}
				else
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var9, 1f, -1, func_65(Var9, ENTITY::GET_ENTITY_COORDS(iLocal_297, 0)), 1056964608);
				}
			}
			else if (fVar15 > 0.15f)
			{
				TASK::TASK_ACHIEVE_HEADING(0, func_65(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_297, 0)), 0);
			}
			TASK::TASK_PLAY_ANIM(0, "pickup_object", "pickup_low", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uVar3);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar3);
			}
			TASK::CLEAR_SEQUENCE_TASK(&uVar3);
			func_66(1);
		}
	}
	func_23(&uLocal_293);
	while ((func_10(&uLocal_293) < 6f && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "pickup_object", "pickup_low", 3))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "pickup_object", "pickup_low", 3))
	{
		ENTITY::SET_ENTITY_ANIM_SPEED(PLAYER::PLAYER_PED_ID(), "pickup_object", "pickup_low", 0.8f);
		bVar16 = true;
	}
	while ((func_10(&uLocal_293) < 6f && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "pickup_object", "pickup_low") < 0.22f)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
		if (!bVar16 && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "pickup_object", "pickup_low", 3))
		{
			ENTITY::SET_ENTITY_ANIM_SPEED(PLAYER::PLAYER_PED_ID(), "pickup_object", "pickup_low", 0.8f);
			bVar16 = true;
		}
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!bVar16 && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "pickup_object", "pickup_low", 3))
		{
			ENTITY::SET_ENTITY_ANIM_SPEED(PLAYER::PLAYER_PED_ID(), "pickup_object", "pickup_low", 0.7f);
			bVar16 = true;
		}
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
	}
	func_9(&uLocal_293);
	func_41();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_35() == 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 5, 0, 0);
		}
		else if (func_35() == 1)
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 1, 0, 0);
		}
		else if (func_35() == 2)
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 3, 0, 0);
		}
	}
	if (bParam0)
	{
		if (!func_33(func_34(iLocal_122)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), func_34(iLocal_122), 1f, -1, 1048576000, 0, 1193033728);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_297))
		{
			OBJECT::DELETE_OBJECT(&iLocal_297);
		}
		uVar4 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, func_32(iLocal_122), func_31(iLocal_122), func_30(iLocal_122), 1, 2);
		uVar5 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, func_29(iLocal_122), func_28(iLocal_122), func_27(iLocal_122), 0, 2);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
		CAM::SHAKE_SCRIPT_GLOBAL("HAND_SHAKE", 0.2f);
		func_23(&uVar0);
		while (func_10(&uVar0) < 1.5f)
		{
			SYSTEM::WAIT(0);
		}
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uVar5, uVar4, func_26(iLocal_122), 1, 1);
		func_21(&uVar0);
		while (func_10(&uVar0) < ((SYSTEM::TO_FLOAT(func_26(iLocal_122)) / 1000f) + 0.3f))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
			}
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		Local_123.z = iLocal_297;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
	}
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 8:
			return 3500;
			break;
	}
	return 0;
}

float func_27(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_28(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 58.4197f, 0f, -47.9402f;
		
		case 8:
			return 47.6798f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_29(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

float func_30(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_31(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -4.0151f, 0f, -47.5544f;
		
		case 8:
			return 2.5127f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_32(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_33(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.y == 0f) && Param0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_34(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -83.4741f, -835.4191f, 39.5575f;
		
		case 8:
			return -772.8513f, 312.9656f, 84.6996f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_35()
{
	func_36();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_36()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_39(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_38(PLAYER::PLAYER_PED_ID());
			if (func_37(iVar0) && (!func_114(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_37(Global_111638.f_2358.f_539.f_4321))
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

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

int func_38(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)
{
	if (func_37(iParam0))
	{
		return func_40(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_40(int iParam0)
{
	return Global_1798[iParam0];
}

void func_41()
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_297))
	{
		OBJECT::DELETE_OBJECT(&iLocal_297);
	}
	func_49(0, 0, 1);
	iLocal_297 = OBJECT::CREATE_OBJECT_NO_OFFSET(1269906701, func_48(iLocal_122), 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_297, func_47(iLocal_122), 2, 1);
	func_42(&Var0, &uVar3);
	Var4 = { 0f, 0f, uVar3 };
	uVar7 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var4, 2);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_297, uVar7, "puton_parachute_bag", "oddjobs@basejump@ig_15", 1000f, -1000f, 1, 1148846080);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uVar7, "oddjobs@basejump@ig_15", "puton_parachute", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Grab_Parachute", "BASEJUMPS_SOUNDS", 1);
	uVar8 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
	CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uVar8, uVar7, "puton_parachute_cam", "oddjobs@basejump@ig_15");
	CAM::SET_CAM_ACTIVE(uVar8, 1);
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	while (PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar7) < 0.6f)
	{
		SYSTEM::WAIT(0);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
}

void func_42(var uParam0, var uParam1)
{
	*uParam0 = { func_46(iLocal_122) };
	switch (iLocal_122)
	{
		case 5:
			*uParam1 = -1.8f;
			break;
		
		case 4:
			*uParam1 = func_45(func_65(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_44(*uParam1, 111.6f);
			}
			else
			{
				*uParam1 = func_43(*uParam1, -104.04f);
			}
			break;
		
		case 8:
			*uParam1 = func_45(func_65(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_44(*uParam1, 79.28f);
			}
			else
			{
				*uParam1 = func_43(*uParam1, -8f);
			}
			break;
		
		case 6:
			*uParam1 = func_45(func_65(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), *uParam0), -180f, 180f);
			break;
		
		case 12:
			*uParam1 = func_45(func_65(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), *uParam0), -180f, 180f);
			break;
	}
}

float func_43(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_44(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_45(float fParam0, float fParam1, float fParam2)
{
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

Vector3 func_46(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -829.3729f, -1289.817f, 4.0005f;
		
		case 1:
			return 1208.2f, 174.3914f, 80.1245f;
		
		case 2:
			return 2463.793f, 1509.956f, 35.0349f;
		
		case 3:
			return -274.6549f, 6633.898f, 7.1166f;
		
		case 4:
			return -92.35f, -854.3f, 39.571f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 7:
			return -742.5269f, 4493.315f, 75.1444f;
		
		case 8:
			return -801.3582f, 298.8532f, 84.949f;
		
		case 9:
			return -1367.595f, 4381.943f, 41.132f;
		
		case 10:
			return 2517.931f, 4971.752f, 44.7082f;
		
		case 11:
			return 1054.534f, -179.6562f, 70.3066f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_47(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 12f, 0f, 12.77f;
		
		case 5:
			return 10f, 0f, -134.58f;
		
		case 6:
			return 76f, 0f, -89.95f;
		
		case 8:
			return 12f, 0f, 89.56f;
		
		case 12:
			return 0f, 75f, -22f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_48(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -92.25f, -854.28f, 39.85f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 8:
			return -801.57f, 298.85f, 85.25f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_49(int iParam0, int iParam1, int iParam2)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 15f);
	}
	CUTSCENE::_0xC61B86C9F61EB404(iParam1);
	func_61(0);
	func_51(1, 1, iParam2, 0, 0, 0);
	HUD::DISPLAY_RADAR(0);
	HUD::DISPLAY_HUD(0);
	func_50(23, 1);
}

void func_50(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_31015, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_31015, iParam0);
	}
}

void func_51(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_60(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_59())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_58(1, iParam3, uParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_60(0);
		HUD::THEFEED_RESUME();
		Global_61518 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_58(0, iParam3, uParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_56(PLAYER::PLAYER_ID())) && !func_53(PLAYER::PLAYER_ID(), 0)) && !func_52()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_56(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_76620 = 0;
	}
}

bool func_52()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 14);
}

bool func_53(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_54(-1, 0) == 8;
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

int func_54(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_55();
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

int func_55()
{
	return Global_1312745;
}

int func_56(int iParam0)
{
	if (func_53(iParam0, 0))
	{
		return 1;
	}
	if (func_57())
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

bool func_57()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_58(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_59()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_60(int iParam0)
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

void func_61(int iParam0)
{
	if (func_64())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_63())
		{
			func_62(1, 1);
		}
		else
		{
			func_62(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 30);
	}
	if (!func_59())
	{
		Global_19486.f_1 = 3;
	}
}

void func_62(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_93(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19423);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
}

bool func_63()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

bool func_64()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

float func_65(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_66(bool bParam0)
{
	if (bParam0)
	{
		func_67();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			MISC::SET_BIT(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_93(0))
		{
			func_61(0);
		}
	}
	else if (Global_19486.f_1 == 1)
	{
		if (!Global_19486.f_1 == 0)
		{
			Global_19486.f_1 = 3;
		}
	}
}

void func_67()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

Vector3 func_68(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1143.586f, -1859.747f, 208.3878f;
		
		case 1:
			return 877.5864f, -436.3322f, 536.9036f;
		
		case 2:
			return 2041.231f, 1978.98f, 585.9358f;
		
		case 3:
			return 405.2326f, 5705.887f, 697.2318f;
		
		case 4:
			return -103.8901f, -870.8046f, 298.7574f;
		
		case 5:
			return -118.2569f, -975.1133f, 297.3781f;
		
		case 6:
			return -1237.465f, 4526.661f, 181.7929f;
		
		case 7:
			return -357.7932f, 4107.914f, 314.8059f;
		
		case 8:
			return -809.6324f, 331.3331f, 233.2818f;
		
		case 9:
			return -1286.926f, 3660.203f, 1076.051f;
		
		case 10:
			return 1022.178f, 3975.738f, 1362.533f;
		
		case 11:
			return 1608.553f, -434.5186f, 1321.916f;
		
		case 12:
			return -756.3533f, 4341.521f, 143.8134f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_69(struct<3> Param0)
{
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.y = 0f;
		Param0.z = 0f;
	}
	return Param0;
}

Vector3 func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -21.7965f, -0.0328f, 70.0438f;
		
		case 1:
			return -26.5541f, 0.0092f, -86.4416f;
		
		case 2:
			return -11.2825f, 0.0213f, 148.5283f;
		
		case 3:
			return -39.935f, 0f, 12.8174f;
		
		case 4:
			return 0.9749f, 0f, -5.2236f;
		
		case 5:
			return -12.889f, 0f, 1.6227f;
		
		case 6:
			return -48.5605f, 0f, 160.4909f;
		
		case 7:
			return -37.0509f, 0.0324f, 24.0288f;
		
		case 8:
			return -17.4118f, 0f, 117.7175f;
		
		case 9:
			return -15.4633f, 0.0328f, -5.1142f;
		
		case 10:
			return -20.9567f, 0f, 170.5743f;
		
		case 11:
			return 1.9344f, 0f, -55.2084f;
		
		case 12:
			return -46.0342f, 0f, 37.5935f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_71(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_79(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42383[iVar0];
		func_74(1, iVar1, 1);
		return;
	}
	iVar2 = func_73(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_72(iVar2);
}

void func_72(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_42357[iParam0].f_1 == 0)
	{
		if (Global_42357[iParam0].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_42594 = 0;
		}
	}
	Global_42357[iParam0] = 13;
	Global_42357[iParam0].f_1 = 0;
	Global_42357[iParam0].f_2 = 0;
	Global_42357[iParam0].f_3 = 0;
	Global_42357[iParam0].f_4 = 0;
	Global_42355 = (Global_42355 - 1);
	if (Global_42355 < 0)
	{
		Global_42355 = 0;
	}
}

int func_73(int iParam0)
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

void func_74(int iParam0, int iParam1, int iParam2)
{
	func_75(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_75(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_77(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_76();
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

int func_76()
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

int func_77(int iParam0, int iParam1, int iParam2)
{
	if (func_78(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0, int iParam1, int iParam2)
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

int func_79(int iParam0)
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

void func_80()
{
	if (Global_8161[0][0].f_259 == 2)
	{
		Global_8161[0][0].f_259 = 0;
	}
	if (Global_8161[1][0].f_259 == 2)
	{
		Global_8161[1][0].f_259 = 0;
	}
	if (Global_8161[2][0].f_259 == 2)
	{
		Global_8161[2][0].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_7356, 25);
	MISC::SET_BIT(&Global_7357, 11);
}

int func_81(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_83(0))
		{
			return 0;
		}
		Global_41395++;
		*iParam0 = Global_41395;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_41431 = iParam2;
		Global_41393 = *iParam0;
		Global_41394 = iParam4;
		Global_41392 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_41392 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41392)
			{
				if (Global_41398[iVar0] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41393 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_130(iParam2))
		{
			return 0;
		}
		if (Global_41392 == 8)
		{
			return 0;
		}
		Global_41395++;
		*iParam0 = Global_41395;
		Global_41398[Global_41392] = Global_41395;
		Global_41398[Global_41392].f_1 = iParam1;
		Global_41398[Global_41392].f_2 = iParam2;
		Global_41398[Global_41392].f_3 = 0;
		Global_41392++;
		if (iParam4 != 0)
		{
			func_82(iParam0, iParam4);
		}
	}
	return 2;
}

void func_82(var uParam0, int iParam1)
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

int func_83(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_130(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_84()
{
	switch (iLocal_122)
	{
		case 4:
		case 5:
		case 6:
		case 8:
		case 12:
			func_85();
			break;
		
		default:
			break;
	}
}

void func_85()
{
	uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(uVar0))
	{
		Local_123.y = iVar0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_297))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_297, 1) };
		if (SYSTEM::VDIST2(Var1, Local_90) > 25f)
		{
			func_86(0);
		}
	}
}

void func_86(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_106 = iParam0;
	iLocal_104 = 0;
	iLocal_95 = 7;
}

int func_87(int iParam0, bool bParam1)
{
	iVar0 = func_88(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_93(0))
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

int func_88(int iParam0)
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

void func_89(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_88(*iParam0);
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

void func_90(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1974937116) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_89(iParam0);
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
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
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

int func_91(var uParam0)
{
	return 1;
}

var func_92()
{
	return Global_73825;
}

int func_93(int iParam0)
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

bool func_94(int iParam0, int iParam1)
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

bool func_95()
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_96()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_97(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

void func_98(var uParam0, int iParam1)
{
	func_99(uParam0, iParam1);
}

void func_99(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_100()
{
	return 1;
}

bool func_101()
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == -1569615261) || iVar0 == -1833087301) || iVar0 == -72657034)
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return ((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 69)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 70))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 68))) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
	}
	return (((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 24)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 25))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 47))) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
}

int func_102(int iParam0)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_35();
				if (!func_37(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_109()) || Global_110685) || Global_30770) || func_108()) || func_94(8, -1)) || func_107()) || func_106()) || func_105()) || func_96()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_109()) || Global_30770) || func_108()) || func_94(8, -1)) || func_105()) || func_107()) || func_106()) || func_96()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_109()) || Global_110685) || Global_30770) || func_108()) || func_94(8, -1)) || func_105()) || func_107()) || func_106()) || func_96()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_109()) || Global_110685) || Global_30770) || func_108()) || func_94(8, -1)) || func_107()) || func_106()) || func_96()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_109() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_94(8, -1)) || func_96()) || func_104()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_94(8, -1) || func_107()) || func_106()) || func_104()) || func_103())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_109()) || Global_30770) || func_108()) || func_94(8, -1)) || func_106()) || func_105()) || func_96()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_109()) || func_106()) || Global_110685) || Global_30770) || func_108()) || Global_42596) || func_94(8, -1)) || func_105()) || func_104()) || func_96()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_109()) || Global_110685) || Global_30770) || func_108()) || func_94(8, -1)) || func_105()) || func_104()) || func_107()) || func_106()) || func_96())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_103()
{
	return Global_98783.f_1;
}

int func_104()
{
	if (Global_95666 != -1)
	{
		return MISC::IS_BIT_SET(Global_89532[Global_95666].f_15, 13);
	}
	return 0;
}

int func_105()
{
	if (Global_76882)
	{
		return 1;
	}
	else if (Global_61506 && !Global_61512)
	{
		return 1;
	}
	return 0;
}

bool func_106()
{
	return Global_98796.f_346 > 0;
}

bool func_107()
{
	return Global_98796.f_345 > 0;
}

var func_108()
{
	return Global_1312877;
}

int func_109()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_110()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1196127390) > 0)
	{
		return 1;
	}
	return 0;
}

var func_111()
{
	return Global_94576;
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_114(6) || func_114(7))
			{
				return 1;
			}
			else
			{
				return func_112(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_130(5))
			{
				if (func_102(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_113(int iParam0)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return HUD::DOES_BLIP_EXIST(Global_31146[iVar0].f_19);
}

bool func_114(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_115(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_116()
{
	if (bLocal_296)
	{
		switch (iLocal_122)
		{
			case 4:
			case 5:
			case 8:
				iLocal_297 = OBJECT::CREATE_OBJECT_NO_OFFSET(1269906701, func_48(iLocal_122), 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(iLocal_297, func_47(iLocal_122), 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_297, 1);
				break;
			
			case 6:
			case 12:
				iLocal_297 = OBJECT::CREATE_OBJECT_NO_OFFSET(1269906701, func_48(iLocal_122), 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(iLocal_297, func_47(iLocal_122), 2, 1);
				OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(iLocal_297);
				Var0 = { func_118(iLocal_122) };
				if (!func_33(Var0))
				{
					uLocal_298 = VEHICLE::CREATE_VEHICLE(-114291515, Var0, func_117(iLocal_122), 1, 1, 0);
					uLocal_298 = uLocal_298;
				}
				break;
			
			default:
				break;
			}
	}
}

float func_117(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 165.0425f;
		
		default:
	}
	return 0f;
}

Vector3 func_118(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return -1243.606f, 4543.016f, 185.9527f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_119()
{
	switch (iLocal_122)
	{
		case 5:
		case 4:
		case 8:
		case 6:
			return (((STREAMING::HAS_ANIM_DICT_LOADED("pickup_object") && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@basejump@ig_15")) && func_120(&uLocal_118)) && func_120(&uLocal_120));
			break;
		
		case 12:
			return ((STREAMING::HAS_ANIM_DICT_LOADED("pickup_object") && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@basejump@ig_15")) && func_120(&uLocal_118));
			break;
		
		default:
			break;
	}
	return (func_120(&uLocal_118) && func_120(&uLocal_120));
}

int func_120(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_121()
{
	switch (iLocal_122)
	{
		case 5:
		case 8:
			func_123(&uLocal_118, 1269906701);
			STREAMING::REQUEST_ANIM_DICT("pickup_object");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@basejump@ig_15");
			break;
		
		case 4:
		case 6:
			func_123(&uLocal_118, 1269906701);
			func_123(&uLocal_120, -114291515);
			STREAMING::REQUEST_ANIM_DICT("pickup_object");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@basejump@ig_15");
			break;
		
		case 12:
			func_123(&uLocal_118, 1269906701);
			STREAMING::REQUEST_ANIM_DICT("pickup_object");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@basejump@ig_15");
			break;
		
		default:
			break;
	}
	func_122(&uLocal_118);
	func_122(&uLocal_120);
}

void func_122(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_123(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_124(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_124(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_125(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_126(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = MISC::IS_BIT_SET(Global_31146[iVar0].f_11, 15);
		if (iVar1 == bParam1)
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

int func_127()
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

int func_128()
{
	if (Global_95666 != -1)
	{
		return MISC::IS_BIT_SET(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

bool func_129(int iParam0, int iParam1)
{
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = MISC::IS_BIT_SET(Global_111638.f_9080.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

bool func_130(int iParam0)
{
	return func_131(iParam0, Global_41431);
}

int func_131(int iParam0, int iParam1)
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

bool func_132(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_133()
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		func_98(&uLocal_94, 8388608);
		return;
	}
	StringCopy(&Local_53, "bj", 64);
	iLocal_122 = func_137(Local_90, 0);
	switch (iLocal_122)
	{
		case 4:
			iLocal_105 = 129;
			break;
		
		case 5:
			iLocal_105 = 130;
			break;
		
		case 6:
			iLocal_105 = 131;
			break;
		
		case 8:
			iLocal_105 = 133;
			break;
		
		case 12:
			iLocal_105 = 137;
			break;
		
		default:
			break;
	}
	if (iLocal_105 == 129)
	{
		if (func_136(19))
		{
			func_135(iLocal_105);
		}
	}
	func_98(&uLocal_94, 4194304);
	iLocal_99 = 0;
	fLocal_102 = (SYSTEM::TO_FLOAT(func_134(iLocal_105)) + 5f);
	fLocal_117 = 1.1f;
	sLocal_101 = "PLAY_BASEJUMP_G";
	if (iLocal_105 != 263)
	{
		if (!func_129(0, iLocal_99))
		{
			bLocal_296 = false;
			func_135(iLocal_105);
		}
		else
		{
			bLocal_296 = true;
		}
	}
	else
	{
		bLocal_296 = false;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1810417259) > 0)
	{
		func_98(&uLocal_94, 8);
	}
	else
	{
		func_139(&uLocal_94, 8);
	}
	if (func_114(12))
	{
		func_98(&uLocal_94, 8);
	}
	iLocal_97 = 35000;
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

void func_135(int iParam0)
{
	if (iLocal_95 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_126(iParam0, 0, 0);
		}
		iLocal_105 = 263;
		func_89(&iLocal_96);
		iLocal_95 = 9;
	}
}

bool func_136(int iParam0)
{
	return Global_110725[iParam0].f_1;
}

int func_137(struct<3> Param0, int iParam3)
{
	fVar0 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 13)
	{
		if (iParam3 == func_138(iVar3))
		{
			fVar1 = SYSTEM::VDIST2(Param0, func_46(iVar3));
			if (fVar0 > fVar1)
			{
				fVar0 = fVar1;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 7:
		case 9:
		case 10:
		case 11:
			return 1;
			break;
	}
	return 0;
}

void func_139(var uParam0, int iParam1)
{
	func_140(uParam0, iParam1);
}

void func_140(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_141(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_105 != 263)
		{
			func_126(iLocal_105, 0, 0);
		}
	}
	func_89(&iLocal_96);
	if (func_132(uLocal_94, 2))
	{
		func_5();
		func_139(&uLocal_94, 2);
		func_7(&iLocal_98);
	}
	iLocal_98 = -1;
	func_142();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_142()
{
	func_139(&uLocal_94, 4);
	func_143();
	if (SCRIPT::IS_THREAD_ACTIVE(uLocal_52))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(uLocal_52, 3);
	}
	if (!MISC::IS_STRING_NULL(&Local_69))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&Local_69) != 0)
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_69);
		}
	}
}

void func_143()
{
}

