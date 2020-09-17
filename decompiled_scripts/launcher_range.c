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
	bLocal_118 = true;
	bLocal_133 = true;
	Local_90 = { ScriptParam_0.f_1[0] };
	Local_90 = { Local_90 };
	uLocal_86 = uLocal_86;
	Local_69 = { Local_69 };
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_104(1);
	}
	uLocal_85 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_95 = 0;
	func_102(&Global_110289, 0);
	func_99();
	if (func_98(uLocal_94, 1))
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
	if (!func_98(uLocal_94, 8))
	{
		if (!func_96(iLocal_100))
		{
			if (func_95(0, iLocal_99))
			{
				func_104(0);
			}
			else
			{
				func_104(1);
			}
		}
	}
	if (iLocal_99 != -1)
	{
		if (!func_95(0, iLocal_99))
		{
			bLocal_118 = false;
		}
	}
	if (func_98(uLocal_94, 8388608))
	{
		func_104(1);
	}
	if (func_98(uLocal_94, 524288) && (func_94() && !func_93()))
	{
		func_104(1);
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_98(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_92(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_91(10);
	}
	while (true)
	{
		uLocal_85 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (func_98(uLocal_94, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(uLocal_85, 0))
			{
				func_104(1);
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
					if (func_96(iLocal_100) || (func_98(uLocal_94, 16) && !func_98(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_90();
						func_91(1);
					}
					else
					{
						if (fLocal_110 > (fLocal_102 * fLocal_102))
						{
							if (iLocal_105 != 263)
							{
								func_92(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_91(10);
						}
						if ((Local_87.z - ScriptParam_0.f_1[0].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_88())
					{
						iLocal_103 = iLocal_103;
						func_91(3);
					}
					else
					{
						func_90();
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_104(1);
						return;
					}
					if (!func_96(iLocal_100))
					{
						if (!func_98(uLocal_94, 8))
						{
							bVar1 = true;
							if (MISC::ARE_STRINGS_EQUAL(&(Global_98744.f_3), &Local_69))
							{
								Local_69 = { Local_53 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_104(0);
								break;
							}
						}
					}
					if (!func_98(uLocal_94, 4))
					{
						func_85();
						func_84(&uLocal_94, 4);
					}
					if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_98778)
					{
						if (iLocal_105 != 263)
						{
							if (func_83(6) && !func_82(iLocal_105))
							{
							}
							else
							{
								func_92(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
						}
						func_91(10);
					}
					else
					{
						Local_69 = { Local_53 };
						bVar2 = !func_98(uLocal_94, 64);
						func_102(&uLocal_94, 128);
						if (!func_81(3) && !Global_98778)
						{
							if (func_98(uLocal_94, 2097152))
							{
								if ((!func_98(uLocal_94, 1) || !ENTITY::DOES_ENTITY_EXIST(func_80())) && !Global_98778)
								{
									func_91(10);
									break;
								}
							}
						}
						if (func_98(uLocal_94, 524288) && (func_94() && !func_93()))
						{
							func_104(1);
						}
						if (func_79())
						{
							func_104(1);
						}
						if ((!func_71(6) || Global_110685) || func_70())
						{
							bVar2 = false;
						}
						if (!bLocal_118)
						{
							func_68(&uLocal_94, 128);
							bVar2 = false;
						}
						if (func_98(uLocal_94, 1))
						{
							if (!func_67())
							{
								func_68(&uLocal_94, 128);
								bVar2 = false;
							}
						}
						if (func_66(1))
						{
							bVar2 = false;
						}
						if (Global_76622)
						{
							bVar2 = false;
						}
						if (func_65())
						{
							bVar2 = false;
						}
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							bVar2 = false;
						}
						if (func_64() || func_63(8, -1))
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
						if (func_62(0) || func_61())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_85, ScriptParam_0.f_1[0], fLocal_117, fLocal_117, 2f, 0, 1, iLocal_103))
							{
								bVar2 = false;
							}
							if (bVar2 && func_54(func_55()) < iLocal_119)
							{
								func_68(&uLocal_94, 128);
								bVar2 = false;
								if (!func_98(uLocal_94, 33554432))
								{
									func_53("MG_YOU_IS_BROKE", iLocal_119, -1);
									func_68(&uLocal_94, 33554432);
								}
							}
							else
							{
								func_102(&uLocal_94, 33554432);
							}
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								PAD::SET_INPUT_EXCLUSIVE(0, 51);
								if (func_52(uLocal_86))
								{
									if (iLocal_96 == -1)
									{
										if (iLocal_119 > 0)
										{
											func_51(&iLocal_96, 4, "", 1, 0, 0, 0);
											func_50(sLocal_101, iLocal_119);
											func_68(&uLocal_94, 2048);
										}
										else
										{
											func_51(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
											func_68(&uLocal_94, 2048);
										}
									}
									else if (!func_98(uLocal_94, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_49(&iLocal_96);
										func_102(&uLocal_94, 2048);
									}
									if (func_47(iLocal_96, 1))
									{
										sLocal_101 = sLocal_101;
										func_49(&iLocal_96);
										func_102(&uLocal_94, 2048);
										if (func_98(uLocal_94, 2048))
										{
											if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
											{
												func_102(&uLocal_94, 2048);
												HUD::CLEAR_HELP(0);
											}
										}
										SCRIPT::REQUEST_SCRIPT(&Local_69);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
										func_91(5);
									}
								}
								else
								{
									sLocal_101 = sLocal_101;
									func_49(&iLocal_96);
									func_102(&uLocal_94, 2048);
									if (func_98(uLocal_94, 2048))
									{
										if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											func_102(&uLocal_94, 2048);
											HUD::CLEAR_HELP(0);
										}
									}
									SCRIPT::REQUEST_SCRIPT(&Local_69);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
									func_91(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_96 != -1)
							{
								if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									func_49(&iLocal_96);
									func_102(&uLocal_94, 2048);
									HUD::CLEAR_HELP(0);
								}
							}
						}
					}
					func_38();
					break;
				
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(0, 51);
					if (SCRIPT::HAS_SCRIPT_LOADED(&Local_69))
					{
						if (iLocal_96 != -1)
						{
							func_49(&iLocal_96);
						}
						iVar3 = 2;
						bVar0 = false;
						if (func_98(uLocal_94, 1))
						{
							if (func_83(6) || func_83(7))
							{
								iVar3 = 1;
								bVar0 = true;
							}
						}
						if (iVar3 != 1)
						{
							iVar3 = func_35(&iLocal_98, 6, iLocal_100, 0, 0);
						}
						if (iVar3 == 1)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							}
							func_34();
							if (Global_42596)
							{
								func_25(PLAYER::PLAYER_PED_ID());
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 56);
							uLocal_52 = func_24();
							func_102(&uLocal_94, 4);
							func_23();
							func_68(&uLocal_94, 2);
							func_91(6);
							func_19(&uLocal_107);
							if (iLocal_99 != -1)
							{
								func_18(iLocal_99);
								func_15(func_17(iLocal_99), 0, 0);
							}
						}
						else if (iVar3 == 2)
						{
							func_14();
						}
						else if (iVar3 == 0)
						{
							func_91(10);
						}
					}
					else
					{
						func_14();
					}
					break;
				
				case 6:
					if (!func_98(uLocal_94, 256))
					{
						if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_IN())
						{
							PAD::SET_INPUT_EXCLUSIVE(0, 51);
						}
						else if (CAM::IS_SCREEN_FADED_OUT())
						{
							func_68(&uLocal_94, 256);
						}
					}
					if (func_98(Global_110289, 262144))
					{
						func_102(&Global_110289, 262144);
						func_13();
					}
					if (func_98(uLocal_94, 2097152))
					{
						if (!func_81(3) && !SCRIPT::IS_THREAD_ACTIVE(uLocal_52))
						{
							func_91(10);
						}
					}
					if (!SCRIPT::IS_THREAD_ACTIVE(uLocal_52))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_9(&uLocal_107) * 1000f)), iLocal_99, 0);
						func_8(&uLocal_107);
						func_102(&uLocal_94, 256);
						func_7();
						if (bVar0)
						{
							func_102(&uLocal_94, 2);
						}
						else if (func_98(uLocal_94, 2))
						{
							if (func_98(Global_110289, 0))
							{
								func_6(&iLocal_98);
								iLocal_98 = -1;
								func_102(&uLocal_94, 2);
							}
							else
							{
								func_6(&iLocal_98);
								iLocal_98 = -1;
								func_102(&uLocal_94, 2);
							}
						}
						func_91(0);
						if (iLocal_99 != -1)
						{
							if (func_98(Global_110289, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_17(iLocal_99), 0, Global_98781, 0);
								func_5(func_17(iLocal_99), 0, Global_98781, 1, 0);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_17(iLocal_99), 0, Global_98781, 0);
								func_5(func_17(iLocal_99), 0, Global_98781, 0, 0);
							}
						}
						func_4();
						func_102(&Global_110289, 0);
						if (func_98(uLocal_94, 16777216))
						{
							func_104(1);
						}
						if (iLocal_99 != -1)
						{
							if (Global_111638.f_9080)
							{
								if (!func_95(0, iLocal_99))
								{
									func_104(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_91(0);
					break;
				
				case 10:
					func_104(1);
					break;
				
				case 9:
					if (fLocal_110 > (fLocal_102 * fLocal_102))
					{
						if (iLocal_105 != 263)
						{
							func_92(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_91(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_105 != 263)
					{
						func_92(iLocal_105, 0, 0);
					}
					if (iLocal_96 != -1)
					{
						func_49(&iLocal_96);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_101))
					{
						if (func_1(sLocal_101))
						{
							HUD::CLEAR_HELP(1);
						}
					}
					func_91(4);
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
									if (func_96(iLocal_100) && func_95(0, iLocal_99))
									{
										func_99();
										if (iLocal_105 != 263)
										{
											func_92(iLocal_105, 1, 0);
										}
										func_91(0);
									}
								}
							}
							else if (iLocal_106 == 0)
							{
								if (fLocal_110 > (fLocal_102 * fLocal_102))
								{
									if (iLocal_105 != 263)
									{
										func_92(iLocal_105, 1, 0);
										iLocal_105 = 263;
									}
									func_91(10);
								}
							}
							else if (iLocal_106 == 1)
							{
								if (fLocal_110 > ((80f + 5f) * (80f + 5f)))
								{
									func_99();
									if (iLocal_105 != 263)
									{
										func_92(iLocal_105, 1, 0);
									}
									func_91(0);
								}
							}
						}
						else
						{
							func_92(iLocal_105, 1, 0);
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
	if (bLocal_133)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(1581199790);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-2011860718);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-1625479312);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-121801331);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(1806541954);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(1074322985);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-22604388);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(1169744207);
	}
}

void func_3()
{
}

void func_4()
{
}

void func_5(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_6(int iParam0)
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

void func_7()
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

void func_8(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_9(var uParam0)
{
	if (func_12(uParam0))
	{
		if (func_11(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_10(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_10(bool bParam0)
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

bool func_11(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

bool func_12(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

int func_13()
{
	return 1;
}

void func_14()
{
}

void func_15(char* sParam0, int iParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_95814))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_95814, 0, 0, 0, 1, 0);
		StringCopy(&Global_95814, "", 64);
	}
	StringCopy(&Global_95814, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_16(0));
}

bool func_16(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

char* func_17(int iParam0)
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

void func_18(int iParam0)
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

void func_19(var uParam0)
{
	if (!func_12(uParam0))
	{
		func_22(uParam0);
	}
	else
	{
		func_20(uParam0);
	}
}

void func_20(var uParam0)
{
	func_21(uParam0, 0f);
}

void func_21(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_10(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_22(var uParam0)
{
	if (!func_12(uParam0))
	{
		func_20(uParam0);
	}
}

void func_23()
{
	if (iLocal_132)
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uLocal_126);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uLocal_127);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uLocal_128);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uLocal_129);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uLocal_130);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uLocal_131);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			OBJECT::DELETE_OBJECT(&(Local_140[iVar0].f_1));
			OBJECT::DELETE_OBJECT(&(Local_140[iVar0].f_4));
			OBJECT::DELETE_OBJECT(&(Local_140[iVar0].f_3));
			OBJECT::DELETE_OBJECT(&(Local_140[iVar0].f_2));
			OBJECT::DELETE_OBJECT(&(Local_140[iVar0]));
			OBJECT::DELETE_OBJECT(&(Local_140[iVar0].f_5));
			iVar0++;
		}
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_139);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_120);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_121);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_122);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(1581199790);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-2011860718);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-1625479312);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-121801331);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(1806541954);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(1074322985);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-22604388);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(1169744207);
	}
	iLocal_132 = 0;
}

var func_24()
{
	Var0.f_1 = iLocal_123;
	Var0.f_2 = iLocal_124;
	Var0.f_3 = iLocal_125;
	Var0.f_4 = uLocal_126;
	Var0.f_5 = uLocal_127;
	Var0.f_6 = uLocal_128;
	Var0.f_7 = uLocal_129;
	Var0.f_8 = uLocal_130;
	Var0.f_9 = uLocal_131;
	Var0 = iLocal_138;
	uVar10 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&Local_53, &Var0, 10, iLocal_97);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_53);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_123) && !ENTITY::IS_ENTITY_DEAD(iLocal_123, 0))
	{
		PED::SET_PED_KEEP_TASK(iLocal_123, 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_123);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_124) && !ENTITY::IS_ENTITY_DEAD(iLocal_124, 0))
	{
		PED::SET_PED_KEEP_TASK(iLocal_124, 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_124);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_125) && !ENTITY::IS_ENTITY_DEAD(iLocal_125, 0))
	{
		PED::SET_PED_KEEP_TASK(iLocal_125, 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_125);
	}
	return uVar10;
}

void func_25(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_33(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42383[iVar0];
		func_28(1, iVar1, 1);
		return;
	}
	iVar2 = func_27(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_26(iVar2);
}

void func_26(int iParam0)
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

int func_27(int iParam0)
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

void func_28(int iParam0, int iParam1, int iParam2)
{
	func_29(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_29(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_31(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_30();
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

int func_30()
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

int func_31(int iParam0, int iParam1, int iParam2)
{
	if (func_32(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_32(int iParam0, int iParam1, int iParam2)
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

int func_33(int iParam0)
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

void func_34()
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

int func_35(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_37(0))
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
		if (!func_96(iParam2))
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
			func_36(iParam0, iParam4);
		}
	}
	return 2;
}

void func_36(var uParam0, int iParam1)
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

int func_37(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_96(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_38()
{
	GRAPHICS::DRAW_DEBUG_SPHERE(17.325f, -1094.09f, 31.58f, 0.2f, 255, 0, 0, 255);
	GRAPHICS::DRAW_DEBUG_SPHERE(12.617f, -1092.35f, 31.58f, 0.2f, 0, 255, 0, 255);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_123) && !PED::IS_PED_INJURED(iLocal_123))
	{
		PED::SET_PED_RESET_FLAG(iLocal_123, 71, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_124) && !PED::IS_PED_INJURED(iLocal_124))
	{
		PED::SET_PED_RESET_FLAG(iLocal_124, 71, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_125) && !PED::IS_PED_INJURED(iLocal_125))
	{
		PED::SET_PED_RESET_FLAG(iLocal_125, 71, 1);
	}
	if (bLocal_133)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_123, 0))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_123, 0);
			PED::SET_PED_RESET_FLAG(iLocal_123, 62, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_124, 0))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_124, 0);
			PED::SET_PED_RESET_FLAG(iLocal_124, 62, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_125, 0))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_125, 0);
			PED::SET_PED_RESET_FLAG(iLocal_125, 62, 1);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
		fVar3 = SYSTEM::VDIST2(Var0, Local_90);
		if (fVar3 < 400f)
		{
			if (!iLocal_134)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_140[0].f_1) && ENTITY::DOES_ENTITY_EXIST(iLocal_123)) && !PED::IS_PED_DEAD_OR_DYING(iLocal_123, 1))
				{
					PED::SET_PED_ACCURACY(iLocal_123, 20);
					PED::SET_PED_STRAFE_CLIPSET(iLocal_123, "move_ped_strafing");
					if (iLocal_138 == 0)
					{
						Var5 = { ENTITY::GET_ENTITY_COORDS(Local_140[0].f_1, 1) - Vector(0.75f, 0f, 0f) };
					}
					else
					{
						Var5 = { ENTITY::GET_ENTITY_COORDS(Local_140[0].f_1, 1) - Vector(0.77f, 0f, 0f) };
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar4);
					TASK::TASK_AIM_GUN_AT_COORD(0, Var5, 3000, 0, 0);
					TASK::TASK_SHOOT_AT_COORD(0, Var5, 2000, -687903391);
					TASK::SET_SEQUENCE_TO_REPEAT(uVar4, 1);
					TASK::CLOSE_SEQUENCE_TASK(uVar4);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_123, uVar4);
					TASK::CLEAR_SEQUENCE_TASK(&uVar4);
					iLocal_134 = 1;
				}
			}
			if (!iLocal_135)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_140[1].f_1) && ENTITY::DOES_ENTITY_EXIST(iLocal_124)) && !PED::IS_PED_DEAD_OR_DYING(iLocal_124, 1))
				{
					PED::SET_PED_ACCURACY(iLocal_124, 20);
					PED::SET_PED_STRAFE_CLIPSET(iLocal_124, "move_ped_strafing");
					if (iLocal_138 == 0)
					{
						Var5 = { ENTITY::GET_ENTITY_COORDS(Local_140[1].f_1, 1) - Vector(0.7f, 0f, 0f) };
					}
					else
					{
						Var5 = { ENTITY::GET_ENTITY_COORDS(Local_140[1].f_1, 1) - Vector(0.7f, 0f, 0f) };
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar4);
					TASK::TASK_AIM_GUN_AT_COORD(0, Var5, 4000, 0, 0);
					TASK::TASK_SHOOT_AT_COORD(0, Var5, 1000, -687903391);
					TASK::SET_SEQUENCE_TO_REPEAT(uVar4, 1);
					TASK::CLOSE_SEQUENCE_TASK(uVar4);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_124, uVar4);
					TASK::CLEAR_SEQUENCE_TASK(&uVar4);
					iLocal_135 = 1;
				}
			}
			if (!iLocal_136)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_140[2].f_1) && ENTITY::DOES_ENTITY_EXIST(iLocal_125)) && !PED::IS_PED_DEAD_OR_DYING(iLocal_125, 1))
				{
					PED::SET_PED_ACCURACY(iLocal_125, 20);
					PED::SET_PED_STRAFE_CLIPSET(iLocal_125, "move_ped_strafing");
					if (iLocal_138 == 0)
					{
						Var5 = { ENTITY::GET_ENTITY_COORDS(Local_140[2].f_1, 1) - Vector(0.8f, 0f, 0f) };
					}
					else
					{
						Var5 = { ENTITY::GET_ENTITY_COORDS(Local_140[2].f_1, 1) - Vector(0.68f, 0f, 0f) };
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar4);
					TASK::TASK_AIM_GUN_AT_COORD(0, Var5, 2000, 0, 0);
					TASK::TASK_SHOOT_AT_COORD(0, Var5, 1500, -687903391);
					TASK::SET_SEQUENCE_TO_REPEAT(uVar4, 1);
					TASK::CLOSE_SEQUENCE_TASK(uVar4);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_125, uVar4);
					TASK::CLEAR_SEQUENCE_TASK(&uVar4);
					iLocal_136 = 1;
				}
			}
		}
		else
		{
			if (iLocal_134)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_123, 0))
				{
					TASK::TASK_STAND_STILL(iLocal_123, -1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_123, 1);
				}
				iLocal_134 = 0;
			}
			if (iLocal_135)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_124, 0))
				{
					TASK::TASK_STAND_STILL(iLocal_124, -1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_124, 1);
				}
				iLocal_135 = 0;
			}
			if (iLocal_136)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_125, 0))
				{
					TASK::TASK_STAND_STILL(iLocal_125, -1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_125, 1);
				}
				iLocal_136 = 0;
			}
		}
	}
	if (iLocal_138 == 0)
	{
		iVar8 = INTERIOR::GET_INTERIOR_AT_COORDS(13f, -1098f, 30f);
		if (func_98(uLocal_94, 128))
		{
			if (func_82(91))
			{
				func_92(91, 0, 0);
			}
		}
		else if (!func_82(91))
		{
			func_92(91, 1, 0);
		}
	}
	else
	{
		iVar8 = INTERIOR::GET_INTERIOR_AT_COORDS(821f, -2162f, 30f);
		if (func_98(uLocal_94, 128))
		{
			if (func_82(92))
			{
				func_92(92, 0, 0);
			}
		}
		else if (!func_82(92))
		{
			func_92(92, 1, 0);
		}
	}
	iVar9 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
	if (iVar9 != iVar8)
	{
		func_68(&uLocal_94, 128);
	}
	if (func_40(28) || func_40(38))
	{
		func_39();
		func_68(&uLocal_94, 64);
		func_68(&uLocal_94, 128);
	}
}

void func_39()
{
	if (iLocal_137)
	{
		return;
	}
	iLocal_137 = 1;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_123) && !PED::IS_PED_DEAD_OR_DYING(iLocal_123, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_123, 0);
		TASK::TASK_COMBAT_PED(iLocal_123, PLAYER::PLAYER_PED_ID(), 0, 16);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_124) && !PED::IS_PED_DEAD_OR_DYING(iLocal_124, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_124, 0);
		TASK::TASK_COMBAT_PED(iLocal_124, PLAYER::PLAYER_PED_ID(), 0, 16);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_125) && !PED::IS_PED_DEAD_OR_DYING(iLocal_125, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_125, 0);
		TASK::TASK_COMBAT_PED(iLocal_125, PLAYER::PLAYER_PED_ID(), 0, 16);
	}
}

int func_40(int iParam0)
{
	return func_41(iParam0, 1, 1);
}

int func_41(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_98796.f_1357[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_46() == 0)
		{
			return MISC::IS_BIT_SET(func_42(func_45(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_42(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_43(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_43(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_44();
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

var func_44()
{
	return Global_1312745;
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 9977;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 52:
			return 8912;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 11511;
}

int func_46()
{
	return Global_30768;
}

int func_47(int iParam0, bool bParam1)
{
	iVar0 = func_48(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_62(0))
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

int func_48(int iParam0)
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

void func_49(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_48(*iParam0);
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

void func_50(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

void func_51(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1974937116) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_49(iParam0);
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

int func_52(var uParam0)
{
	return 1;
}

void func_53(char* sParam0, int iParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam2);
}

int func_54(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(52740893, &uVar0, -1);
			return uVar0;
		
		case 1:
			STATS::STAT_GET_INT(1153264002, &uVar0, -1);
			return uVar0;
		
		case 2:
			STATS::STAT_GET_INT(-1921710979, &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_55()
{
	func_56();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_56()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_59(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_58(PLAYER::PLAYER_PED_ID());
			if (func_57(iVar0) && (!func_83(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_57(Global_111638.f_2358.f_539.f_4321))
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

bool func_57(int iParam0)
{
	return iParam0 < 3;
}

int func_58(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_59(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_59(int iParam0)
{
	if (func_57(iParam0))
	{
		return func_60(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_60(int iParam0)
{
	return Global_1798[iParam0];
}

var func_61()
{
	return Global_73825;
}

int func_62(int iParam0)
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

bool func_63(int iParam0, int iParam1)
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

bool func_64()
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_65()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_66(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_67()
{
	return 1;
}

void func_68(var uParam0, int iParam1)
{
	func_69(uParam0, iParam1);
}

void func_69(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_70()
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

int func_71(int iParam0)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_55();
				if (!func_57(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_78()) || Global_110685) || Global_30770) || func_77()) || func_63(8, -1)) || func_76()) || func_75()) || func_74()) || func_65()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_78()) || Global_30770) || func_77()) || func_63(8, -1)) || func_74()) || func_76()) || func_75()) || func_65()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_78()) || Global_110685) || Global_30770) || func_77()) || func_63(8, -1)) || func_74()) || func_76()) || func_75()) || func_65()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_78()) || Global_110685) || Global_30770) || func_77()) || func_63(8, -1)) || func_76()) || func_75()) || func_65()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_78() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_63(8, -1)) || func_65()) || func_73()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_63(8, -1) || func_76()) || func_75()) || func_73()) || func_72())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_78()) || Global_30770) || func_77()) || func_63(8, -1)) || func_75()) || func_74()) || func_65()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_78()) || func_75()) || Global_110685) || Global_30770) || func_77()) || Global_42596) || func_63(8, -1)) || func_74()) || func_73()) || func_65()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_78()) || Global_110685) || Global_30770) || func_77()) || func_63(8, -1)) || func_74()) || func_73()) || func_76()) || func_75()) || func_65())
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

var func_72()
{
	return Global_98783.f_1;
}

int func_73()
{
	if (Global_95666 != -1)
	{
		return MISC::IS_BIT_SET(Global_89532[Global_95666].f_15, 13);
	}
	return 0;
}

int func_74()
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

bool func_75()
{
	return Global_98796.f_346 > 0;
}

bool func_76()
{
	return Global_98796.f_345 > 0;
}

var func_77()
{
	return Global_1312877;
}

int func_78()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_79()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1196127390) > 0)
	{
		return 1;
	}
	return 0;
}

var func_80()
{
	return Global_94576;
}

int func_81(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_83(6) || func_83(7))
			{
				return 1;
			}
			else
			{
				return func_81(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_96(5))
			{
				if (func_71(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_82(int iParam0)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return HUD::DOES_BLIP_EXIST(Global_31146[iVar0].f_19);
}

bool func_83(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_84(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_85()
{
	if (bLocal_133)
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		fVar3 = SYSTEM::VDIST2(Var0, Local_90);
		if (fVar3 > 225f)
		{
			if (iLocal_138 == 0)
			{
				uVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(8.4083f, -1095.428f, 28.8554f);
			}
			else
			{
				uVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(824.3015f, -2162.983f, 30.906f);
			}
			if (INTERIOR::IS_VALID_INTERIOR(uVar4))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(uVar4);
				while (!INTERIOR::IS_INTERIOR_READY(uVar4))
				{
					SYSTEM::WAIT(0);
				}
				INTERIOR::UNPIN_INTERIOR(uVar4);
			}
			if (iLocal_138 == 0)
			{
				iLocal_123 = PED::CREATE_PED(26, iLocal_120, 8.4083f, -1095.428f, 28.8554f, 336.03f, 1, 1);
				iLocal_124 = PED::CREATE_PED(26, iLocal_121, 10.1096f, -1096.135f, 28.8554f, 336.03f, 1, 1);
				iLocal_125 = PED::CREATE_PED(26, iLocal_122, 13.7f, -1097.7f, 28.9f, 336.03f, 1, 1);
			}
			else
			{
				iLocal_123 = PED::CREATE_PED(26, iLocal_120, 817.0285f, -2163.657f, 28.6569f, 178.1556f, 1, 1);
				iLocal_124 = PED::CREATE_PED(26, iLocal_121, 819.0791f, -2163.743f, 28.6568f, 187.0609f, 1, 1);
				iLocal_125 = PED::CREATE_PED(26, iLocal_122, 821.4587f, -2163.616f, 28.6567f, 179.3586f, 1, 1);
			}
			func_87(iLocal_123, &uLocal_126, &uLocal_129);
			func_87(iLocal_124, &uLocal_127, &uLocal_130);
			func_87(iLocal_125, &uLocal_128, &uLocal_131);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_123, 453432689, -1, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_124, 1593441988, -1, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_125, 453432689, -1, 1, 1);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_123, 1, 0);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_124, 1, 0);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_125, 1, 0);
			PED::ADD_RELATIONSHIP_GROUP("range_IGNORE", &iLocal_139);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_123, iLocal_139);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_124, iLocal_139);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_125, iLocal_139);
			PED::SET_PED_ACCURACY(iLocal_123, 20);
			PED::SET_PED_ACCURACY(iLocal_124, 10);
			PED::SET_PED_ACCURACY(iLocal_125, 15);
			PED::SET_PED_STRAFE_CLIPSET(iLocal_123, "move_ped_strafing");
			PED::SET_PED_STRAFE_CLIPSET(iLocal_124, "move_ped_strafing");
			PED::SET_PED_STRAFE_CLIPSET(iLocal_125, "move_ped_strafing");
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 45677184, iLocal_139);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1191392768, iLocal_139);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, -1533126372, iLocal_139);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_139, 45677184);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_139, 1191392768);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_139, -1533126372);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_123, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_124, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_125, 1);
			func_86(0);
			func_86(1);
			func_86(2);
			TASK::TASK_STAND_STILL(iLocal_123, -1);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_123, 1);
			iLocal_134 = 0;
			TASK::TASK_STAND_STILL(iLocal_124, -1);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_124, 1);
			iLocal_135 = 0;
			TASK::TASK_STAND_STILL(iLocal_125, -1);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_125, 1);
			iLocal_136 = 0;
			PED::SET_PED_RESET_FLAG(iLocal_123, 71, 1);
			PED::SET_PED_RESET_FLAG(iLocal_124, 71, 1);
			PED::SET_PED_RESET_FLAG(iLocal_125, 71, 1);
			iLocal_132 = 1;
		}
		else
		{
			iLocal_132 = 0;
		}
	}
	else
	{
		iLocal_132 = 0;
	}
}

void func_86(int iParam0)
{
	fVar0 = 0.4f;
	fVar1 = 0.2f;
	fVar2 = 0.5f;
	if (iLocal_138 == 0)
	{
		fVar3 = -0.5f;
		fVar4 = -0.2f;
		fVar5 = 0.5f;
		Var12 = { Vector(31.58f, -1081.513f, 16.475f) - Vector(31.58f, -1092.35f, 12.617f) };
		Var15 = { Vector(31.58f, -1094.09f, 17.325f) - Vector(31.58f, -1092.35f, 12.617f) };
		Var18 = { Vector(31.58f, -1092.35f, 12.617f) + Var15 * Vector(fVar3, fVar3, fVar3) };
		Var21 = { Vector(31.58f, -1092.35f, 12.617f) + Var15 * Vector(fVar4, fVar4, fVar4) };
		Var24 = { Vector(31.58f, -1092.35f, 12.617f) + Var15 * Vector(fVar5, fVar5, fVar5) };
	}
	else
	{
		fVar3 = 1.35f;
		fVar4 = 1.05f;
		fVar5 = 0.5f;
		Var12 = { Vector(31.347f, -2179.773f, 824.3217f) - Vector(31.347f, -2168.039f, 824.2375f) };
		Var15 = { Vector(32.3f, -2168.008f, 819.2051f) - Vector(32.3f, -2168.039f, 824.2375f) };
		Var18 = { Vector(31.347f, -2168.039f, 824.2375f) + Var15 * Vector(fVar3, fVar3, fVar3) };
		Var21 = { Vector(31.347f, -2168.039f, 824.2375f) + Var15 * Vector(fVar4, fVar4, fVar4) };
		Var24 = { Vector(31.347f, -2168.039f, 824.2375f) + Var15 * Vector(fVar5, fVar5, fVar5) };
	}
	if (iParam0 == 0)
	{
		Var6 = { Var12 * Vector(fVar0, fVar0, fVar0) };
		Var9 = { Var18 + Var6 };
	}
	else if (iParam0 == 1)
	{
		Var6 = { Var12 * Vector(fVar1, fVar1, fVar1) };
		Var9 = { Var21 + Var6 };
	}
	else
	{
		Var6 = { Var12 * Vector(fVar2, fVar2, fVar2) };
		Var9 = { Var24 + Var6 };
	}
	Local_140[iParam0] = OBJECT::CREATE_OBJECT_NO_OFFSET(-121801331, Var9, 1, 1, 0);
	Local_140[iParam0].f_1 = OBJECT::CREATE_OBJECT_NO_OFFSET(1806541954, Var9, 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_140[iParam0].f_1, Local_140[iParam0], 0, 0f, -0.04f, -0.41f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	Local_140[iParam0].f_2 = OBJECT::CREATE_OBJECT_NO_OFFSET(1074322985, Var9, 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_140[iParam0].f_2, Local_140[iParam0], 0, 0f, -0.04f, -0.41f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	Local_140[iParam0].f_3 = OBJECT::CREATE_OBJECT_NO_OFFSET(-22604388, Var9, 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_140[iParam0].f_3, Local_140[iParam0], 0, 0f, -0.04f, -0.41f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	Local_140[iParam0].f_4 = OBJECT::CREATE_OBJECT_NO_OFFSET(1169744207, Var9, 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_140[iParam0].f_4, Local_140[iParam0], 0, 0f, -0.04f, -0.41f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	Local_140[iParam0].f_5 = OBJECT::CREATE_OBJECT_NO_OFFSET(-1625479312, Var9, 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_140[iParam0], Local_140[iParam0].f_5, 0, 0f, 0.007f, -0.76f, 0f, 0f, 180f, 0, 0, 0, 0, 2, 1);
	if (iLocal_138 == 0)
	{
		ENTITY::SET_ENTITY_ROTATION(Local_140[iParam0].f_5, 0f, 0f, 160f, 2, 1);
	}
	else
	{
		ENTITY::SET_ENTITY_ROTATION(Local_140[iParam0].f_5, 0f, 0f, 359f, 2, 1);
	}
	ENTITY::FREEZE_ENTITY_POSITION(Local_140[iParam0].f_5, 1);
	ENTITY::SET_ENTITY_INVINCIBLE(Local_140[iParam0], 1);
	ENTITY::SET_ENTITY_INVINCIBLE(Local_140[iParam0].f_1, 1);
	ENTITY::SET_ENTITY_INVINCIBLE(Local_140[iParam0].f_2, 1);
	ENTITY::SET_ENTITY_INVINCIBLE(Local_140[iParam0].f_3, 1);
	ENTITY::SET_ENTITY_INVINCIBLE(Local_140[iParam0].f_4, 1);
	ENTITY::SET_ENTITY_INVINCIBLE(Local_140[iParam0].f_5, 1);
}

void func_87(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = OBJECT::CREATE_OBJECT(1581199790, ENTITY::GET_ENTITY_COORDS(uParam0, 1), 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(*uParam1, iParam0, PED::GET_PED_BONE_INDEX(iParam0, 31086), 0.111f, 0f, 0f, 0f, 90f, 0f, 0, 0, 0, 0, 2, 1);
	*uParam2 = OBJECT::CREATE_OBJECT(-2011860718, ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(*uParam2, iParam0, PED::GET_PED_BONE_INDEX(iParam0, 31086), 0.059f, 0.067f, 0f, 180f, 90f, 0f, 0, 0, 0, 0, 2, 1);
}

int func_88()
{
	if (bLocal_133)
	{
		return func_89();
	}
	return 1;
}

int func_89()
{
	iLocal_120 = -9308122;
	iLocal_121 = -9308122;
	iLocal_122 = -9308122;
	STREAMING::REQUEST_MODEL(iLocal_120);
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_120))
	{
		return 0;
	}
	STREAMING::REQUEST_MODEL(iLocal_121);
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_121))
	{
		return 0;
	}
	STREAMING::REQUEST_MODEL(iLocal_122);
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_122))
	{
		return 0;
	}
	STREAMING::REQUEST_MODEL(1581199790);
	if (!STREAMING::HAS_MODEL_LOADED(1581199790))
	{
		return 0;
	}
	STREAMING::REQUEST_MODEL(-2011860718);
	if (!STREAMING::HAS_MODEL_LOADED(-2011860718))
	{
		return 0;
	}
	STREAMING::REQUEST_MODEL(-1625479312);
	if (!STREAMING::HAS_MODEL_LOADED(-1625479312))
	{
		return 0;
	}
	STREAMING::REQUEST_MODEL(-121801331);
	if (!STREAMING::HAS_MODEL_LOADED(-121801331))
	{
		return 0;
	}
	STREAMING::REQUEST_MODEL(1806541954);
	if (!STREAMING::HAS_MODEL_LOADED(1806541954))
	{
		return 0;
	}
	STREAMING::REQUEST_MODEL(1074322985);
	if (!STREAMING::HAS_MODEL_LOADED(1074322985))
	{
		return 0;
	}
	STREAMING::REQUEST_MODEL(-22604388);
	if (!STREAMING::HAS_MODEL_LOADED(-22604388))
	{
		return 0;
	}
	STREAMING::REQUEST_MODEL(1169744207);
	if (!STREAMING::HAS_MODEL_LOADED(1169744207))
	{
		return 0;
	}
	return 1;
}

void func_90()
{
	if (bLocal_133)
	{
		func_89();
	}
}

void func_91(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_92(int iParam0, bool bParam1, bool bParam2)
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

int func_93()
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

int func_94()
{
	if (Global_95666 != -1)
	{
		return MISC::IS_BIT_SET(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

bool func_95(int iParam0, int iParam1)
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

bool func_96(int iParam0)
{
	return func_97(iParam0, Global_41431);
}

int func_97(int iParam0, int iParam1)
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

bool func_98(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_99()
{
	StringCopy(&Local_53, "range_modern", 64);
	sLocal_101 = "PLAY_RANGE";
	fLocal_117 = 2f;
	fLocal_102 = (SYSTEM::TO_FLOAT(func_101(91)) + 5f);
	iLocal_99 = 11;
	if (func_95(0, iLocal_99))
	{
		func_92(91, 1, 0);
		func_92(92, 1, 0);
		bLocal_133 = true;
	}
	else
	{
		bLocal_133 = false;
	}
	if (SYSTEM::VDIST(6.594f, -1100.162f, 28.797f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) < 50f)
	{
		iLocal_138 = 0;
		if (!func_100(28))
		{
			bLocal_133 = false;
		}
	}
	else
	{
		iLocal_138 = 1;
		if (!func_100(38))
		{
			bLocal_133 = false;
		}
	}
	iLocal_119 = 14;
	iLocal_97 = 35000;
}

bool func_100(int iParam0)
{
	return func_41(iParam0, 0, 1);
}

int func_101(int iParam0)
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

void func_102(var uParam0, int iParam1)
{
	func_103(uParam0, iParam1);
}

void func_103(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_104(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_105 != 263)
		{
			func_92(iLocal_105, 0, 0);
		}
	}
	func_49(&iLocal_96);
	if (func_98(uLocal_94, 2048))
	{
		if (func_107(sLocal_101, iLocal_119))
		{
			func_102(&uLocal_94, 2048);
			HUD::CLEAR_HELP(0);
		}
	}
	if (func_98(uLocal_94, 2))
	{
		func_4();
		func_102(&uLocal_94, 2);
		func_6(&iLocal_98);
	}
	iLocal_98 = -1;
	func_105();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_105()
{
	func_102(&uLocal_94, 4);
	func_106();
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

void func_106()
{
}

bool func_107(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

