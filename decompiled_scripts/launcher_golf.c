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
	iLocal_118 = 6;
	iLocal_119 = 18;
	Local_90 = { ScriptParam_0.f_1[0] };
	Local_90 = { Local_90 };
	uLocal_86 = uLocal_86;
	cLocal_69 = { cLocal_69 };
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_94(1);
	}
	uLocal_85 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_95 = 0;
	func_92(&Global_110289, 0);
	func_89();
	if (func_88(uLocal_94, 1))
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
	if (!func_88(uLocal_94, 8))
	{
		if (!func_86(iLocal_100))
		{
			if (func_85(0, iLocal_99))
			{
				func_94(0);
			}
			else
			{
				func_94(1);
			}
		}
	}
	if (iLocal_99 != -1)
	{
		if (!func_85(0, iLocal_99))
		{
			func_94(1);
		}
	}
	if (func_88(uLocal_94, 8388608))
	{
		func_94(1);
	}
	if (func_88(uLocal_94, 524288) && (func_84() && !func_83()))
	{
		func_94(1);
	}
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_88(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_82(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_81(10);
	}
	while (true)
	{
		uLocal_85 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (func_88(uLocal_94, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(uLocal_85, 0))
			{
				func_94(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_85) && !ENTITY::IS_ENTITY_DEAD(iLocal_85, 0))
		{
			Local_87 = { ENTITY::GET_ENTITY_COORDS(iLocal_85, 1) };
			fLocal_93 = SYSTEM::VDIST2(Local_87, ScriptParam_0.f_1[0]);
			fLocal_93 = fLocal_93;
			Local_111 = { Local_87 };
			Local_114 = { ScriptParam_0.f_1[0] };
			Local_111.z = 0f;
			Local_114.z = 0f;
			fLocal_110 = SYSTEM::VDIST2(Local_111, Local_114);
			switch (iLocal_95)
			{
				case 0:
					if (func_86(iLocal_100) || (func_88(uLocal_94, 16) && !func_88(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_80();
						func_81(1);
					}
					else
					{
						if (fLocal_110 > (fLocal_102 * fLocal_102))
						{
							if (iLocal_105 != 263)
							{
								func_82(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_81(10);
						}
						if ((Local_87.z - ScriptParam_0.f_1[0].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_79())
					{
						iLocal_103 = iLocal_103;
						func_81(3);
					}
					else
					{
						func_80();
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_94(1);
						return;
					}
					if (!func_86(iLocal_100))
					{
						if (!func_88(uLocal_94, 8))
						{
							bVar1 = true;
							if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_98744.f_3), &cLocal_69))
							{
								cLocal_69 = { Local_53 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_94(0);
								break;
							}
						}
					}
					if (!func_88(uLocal_94, 4))
					{
						func_78();
						func_77(&uLocal_94, 4);
					}
					if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_98778)
					{
						if (iLocal_105 != 263)
						{
							if (func_76(6) && !func_75(iLocal_105))
							{
							}
							else
							{
								func_82(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
						}
						func_81(10);
					}
					else
					{
						cLocal_69 = { Local_53 };
						bVar2 = !func_88(uLocal_94, 64);
						func_92(&uLocal_94, 128);
						if (!func_74(3) && !Global_98778)
						{
							if (func_88(uLocal_94, 2097152))
							{
								if ((!func_88(uLocal_94, 1) || !ENTITY::DOES_ENTITY_EXIST(func_73())) && !Global_98778)
								{
									func_81(10);
									break;
								}
							}
						}
						if (func_88(uLocal_94, 524288) && (func_84() && !func_83()))
						{
							func_94(1);
						}
						if (func_72())
						{
							func_94(1);
						}
						if ((!func_64(6) || Global_110685) || func_63())
						{
							bVar2 = false;
						}
						if (func_88(uLocal_94, 1))
						{
							if (!func_62())
							{
								func_60(&uLocal_94, 128);
								bVar2 = false;
							}
						}
						if (func_59(1))
						{
							bVar2 = false;
						}
						if (Global_76622)
						{
							bVar2 = false;
						}
						if (func_58())
						{
							bVar2 = false;
						}
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							bVar2 = false;
						}
						if (func_57() || func_56(8, -1))
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
						if (func_55(0) || func_54())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_85, 0))
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(PED::GET_VEHICLE_PED_IS_IN(iLocal_85, 0), ScriptParam_0.f_1[0], fLocal_117, fLocal_117, 20f, 0, 0, iLocal_103))
								{
									bVar2 = false;
								}
							}
							else if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_85, ScriptParam_0.f_1[0], fLocal_117, fLocal_117, 2f, 0, 1, iLocal_103))
							{
								bVar2 = false;
							}
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_85, ScriptParam_0.f_1[0], fLocal_117, fLocal_117, 2f, 0, 1, 0))
							{
								func_60(&uLocal_94, 128);
								bVar2 = false;
							}
							iVar3 = TIME::GET_CLOCK_HOURS();
							if (iLocal_118 > iLocal_119)
							{
								if (iVar3 < iLocal_118 && iVar3 >= iLocal_119)
								{
									func_60(&uLocal_94, 128);
									bVar2 = false;
									if (fLocal_93 < ((fLocal_117 * fLocal_117) + 4f))
									{
										if (!func_88(uLocal_94, 134217728))
										{
											func_53("MG_NA_TIME", iLocal_118, iLocal_119);
											func_60(&uLocal_94, 134217728);
										}
									}
									else
									{
										func_92(&uLocal_94, 134217728);
									}
								}
							}
							else if (iVar3 < iLocal_118 || iVar3 >= iLocal_119)
							{
								func_60(&uLocal_94, 128);
								bVar2 = false;
								if (fLocal_93 < ((fLocal_117 * fLocal_117) + 4f))
								{
									if (!func_88(uLocal_94, 134217728))
									{
										func_53("MG_NA_TIME", iLocal_118, iLocal_119);
										func_60(&uLocal_94, 134217728);
									}
								}
								else
								{
									func_92(&uLocal_94, 134217728);
								}
							}
							if (bVar2 && func_46(func_47()) < iLocal_120)
							{
								func_60(&uLocal_94, 128);
								bVar2 = false;
								if (!func_88(uLocal_94, 33554432))
								{
									func_45("MG_YOU_IS_BROKE", iLocal_120, -1);
									func_60(&uLocal_94, 33554432);
								}
							}
							else
							{
								func_92(&uLocal_94, 33554432);
							}
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								CONTROLS::SET_INPUT_EXCLUSIVE(0, 51);
								if (func_44(uLocal_86))
								{
									if (iLocal_96 == -1)
									{
										if (iLocal_120 > 0)
										{
											func_43(&iLocal_96, 4, "", 1, 0, 0, 0);
											func_42(sLocal_101, iLocal_120);
											func_60(&uLocal_94, 2048);
										}
										else
										{
											func_43(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
											func_60(&uLocal_94, 2048);
										}
									}
									else if (!func_88(uLocal_94, 2048) || !UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_41(&iLocal_96);
										func_92(&uLocal_94, 2048);
									}
									if (func_39(iLocal_96, 1))
									{
										sLocal_101 = sLocal_101;
										func_41(&iLocal_96);
										func_92(&uLocal_94, 2048);
										if (func_88(uLocal_94, 2048))
										{
											if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
											{
												func_92(&uLocal_94, 2048);
												UI::CLEAR_HELP(0);
											}
										}
										SCRIPT::REQUEST_SCRIPT(&cLocal_69);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
										func_81(5);
									}
								}
								else
								{
									sLocal_101 = sLocal_101;
									func_41(&iLocal_96);
									func_92(&uLocal_94, 2048);
									if (func_88(uLocal_94, 2048))
									{
										if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											func_92(&uLocal_94, 2048);
											UI::CLEAR_HELP(0);
										}
									}
									SCRIPT::REQUEST_SCRIPT(&cLocal_69);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
									func_81(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_96 != -1)
							{
								if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									func_41(&iLocal_96);
									func_92(&uLocal_94, 2048);
									UI::CLEAR_HELP(0);
								}
							}
						}
					}
					func_37();
					break;
				
				case 5:
					CONTROLS::SET_INPUT_EXCLUSIVE(0, 51);
					if (SCRIPT::HAS_SCRIPT_LOADED(&cLocal_69))
					{
						if (iLocal_96 != -1)
						{
							func_41(&iLocal_96);
						}
						iVar4 = 2;
						bVar0 = false;
						if (func_88(uLocal_94, 1))
						{
							if (func_76(6) || func_76(7))
							{
								iVar4 = 1;
								bVar0 = true;
							}
						}
						if (iVar4 != 1)
						{
							iVar4 = func_34(&iLocal_98, 6, iLocal_100, 0, 0);
						}
						if (iVar4 == 1)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							}
							func_33();
							if (Global_42596)
							{
								func_24(PLAYER::PLAYER_PED_ID());
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 56);
							uLocal_52 = SYSTEM::START_NEW_SCRIPT(&cLocal_69, iLocal_97);
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cLocal_69);
							Local_53 = { cLocal_69 };
							StringCopy(&cLocal_69, "", 64);
							func_92(&uLocal_94, 4);
							func_23();
							func_60(&uLocal_94, 2);
							func_81(6);
							func_19(&uLocal_107);
							if (iLocal_99 != -1)
							{
								func_18(iLocal_99);
								func_15(func_17(iLocal_99), 0, 0);
							}
						}
						else if (iVar4 == 2)
						{
							func_14();
						}
						else if (iVar4 == 0)
						{
							func_81(10);
						}
					}
					else
					{
						func_14();
					}
					break;
				
				case 6:
					if (func_88(Global_110289, 262144))
					{
						func_92(&Global_110289, 262144);
						func_13();
					}
					if (func_88(uLocal_94, 2097152))
					{
						if (!func_74(3) && !SCRIPT::IS_THREAD_ACTIVE(uLocal_52))
						{
							func_81(10);
						}
					}
					if (!SCRIPT::IS_THREAD_ACTIVE(uLocal_52))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_9(&uLocal_107) * 1000f)), iLocal_99, 0);
						func_8(&uLocal_107);
						func_92(&uLocal_94, 256);
						func_7();
						if (bVar0)
						{
							func_92(&uLocal_94, 2);
						}
						else if (func_88(uLocal_94, 2))
						{
							if (func_88(Global_110289, 0))
							{
								func_6(&iLocal_98);
								iLocal_98 = -1;
								func_92(&uLocal_94, 2);
							}
							else
							{
								func_6(&iLocal_98);
								iLocal_98 = -1;
								func_92(&uLocal_94, 2);
							}
						}
						func_81(0);
						if (iLocal_99 != -1)
						{
							if (func_88(Global_110289, 0))
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
						func_92(&Global_110289, 0);
						if (func_88(uLocal_94, 16777216))
						{
							func_94(1);
						}
						if (iLocal_99 != -1)
						{
							if (Global_111638.f_9080)
							{
								if (!func_85(0, iLocal_99))
								{
									func_94(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_81(0);
					break;
				
				case 10:
					func_94(1);
					break;
				
				case 9:
					if (fLocal_110 > (fLocal_102 * fLocal_102))
					{
						if (iLocal_105 != 263)
						{
							func_82(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_81(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_105 != 263)
					{
						func_82(iLocal_105, 0, 0);
					}
					if (iLocal_96 != -1)
					{
						func_41(&iLocal_96);
					}
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sLocal_101))
					{
						if (func_1(sLocal_101))
						{
							UI::CLEAR_HELP(1);
						}
					}
					func_81(4);
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
									if (func_86(iLocal_100) && func_85(0, iLocal_99))
									{
										func_89();
										if (iLocal_105 != 263)
										{
											func_82(iLocal_105, 1, 0);
										}
										func_81(0);
									}
								}
							}
							else if (iLocal_106 == 0)
							{
								if (fLocal_110 > (fLocal_102 * fLocal_102))
								{
									if (iLocal_105 != 263)
									{
										func_82(iLocal_105, 1, 0);
										iLocal_105 = 263;
									}
									func_81(10);
								}
							}
							else if (iLocal_106 == 1)
							{
								if (fLocal_110 > ((80f + 5f) * (80f + 5f)))
								{
									func_89();
									if (iLocal_105 != 263)
									{
										func_82(iLocal_105, 1, 0);
									}
									func_81(0);
								}
							}
						}
						else
						{
							func_82(iLocal_105, 1, 0);
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
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2()
{
}

void func_3()
{
}

void func_4()
{
}

void func_5(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Global_95814))
	{
		return;
	}
	if (GAMEPLAY::COMPARE_STRINGS(sParam0, &Global_95814, 0, -1) != 0)
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
	if (GAMEPLAY::IS_XBOX360_VERSION() || GAMEPLAY::IS_DURANGO_VERSION())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (GAMEPLAY::IS_PS3_VERSION() || GAMEPLAY::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		NETWORK::_0x3E200C2BCF4164EB(0, &cVar0);
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
			return (func_10(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_10(bool bParam0)
{
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER());
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
	return (SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER()) / 1000f);
}

bool func_11(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

bool func_12(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 1);
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
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Global_95814))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_95814, 0, 0, 0, 1, 0);
		StringCopy(&Global_95814, "", 64);
	}
	StringCopy(&Global_95814, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_16(0));
}

bool func_16(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_76870, 0);
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
	if (GAMEPLAY::IS_XBOX360_VERSION() || GAMEPLAY::IS_DURANGO_VERSION())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (GAMEPLAY::IS_PS3_VERSION() || GAMEPLAY::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::_0x3E200C2BCF4164EB(8, &cVar1);
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
	uParam0->f_1 = (func_10(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - fParam1);
	GAMEPLAY::SET_BIT(uParam0, 1);
	GAMEPLAY::CLEAR_BIT(uParam0, 2);
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
	if (PED::GET_CLOSEST_PED(-1370.625f, 56.1227f, 52.7033f, 100f, 1, 1, &uVar0, 0, 0, -1))
	{
		if (!PED::IS_PED_INJURED(uVar0))
		{
			iVar102 = PED::GET_PED_NEARBY_PEDS(iVar0, &uVar1, -1);
			AI::CLEAR_PED_TASKS(iVar0);
		}
		if (iVar102 == 0)
		{
		}
		iVar103 = 0;
		iVar103 = 0;
		while (iVar103 < iVar102)
		{
			if (!PED::IS_PED_INJURED(uVar1[iVar103]))
			{
				AI::CLEAR_PED_TASKS(uVar1[iVar103]);
			}
			iVar103++;
		}
	}
}

void func_24(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_32(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42383[iVar0];
		func_27(1, iVar1, 1);
		return;
	}
	iVar2 = func_26(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_25(iVar2);
}

void func_25(int iParam0)
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

int func_26(int iParam0)
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

void func_27(int iParam0, int iParam1, int iParam2)
{
	func_28(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_28(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_30(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_29();
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

int func_29()
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

int func_30(int iParam0, int iParam1, int iParam2)
{
	if (func_31(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_31(int iParam0, int iParam1, int iParam2)
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

int func_32(int iParam0)
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

void func_33()
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
	GAMEPLAY::CLEAR_BIT(&Global_7356, 25);
	GAMEPLAY::SET_BIT(&Global_7357, 11);
}

int func_34(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_36(0))
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
		if (!func_86(iParam2))
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
			func_35(iParam0, iParam4);
		}
	}
	return 2;
}

void func_35(var uParam0, int iParam1)
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

int func_36(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_86(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_37()
{
	if (ENTITY::IS_ENTITY_AT_COORD(iLocal_85, Local_90, fLocal_117, fLocal_117, 2f, 0, 1, iLocal_103))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 46, 1);
	}
	if (iLocal_120 > 0)
	{
		if (func_38(8) == func_47())
		{
			iLocal_120 = 0;
			sLocal_101 = "PLAY_GOLF";
		}
	}
}

int func_38(int iParam0)
{
	return Global_111638.f_24899[iParam0];
}

int func_39(int iParam0, bool bParam1)
{
	iVar0 = func_40(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_55(0))
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

int func_40(int iParam0)
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

void func_41(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_40(*iParam0);
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

void func_42(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

void func_43(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(1974937116) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_41(iParam0);
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

int func_44(var uParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (!ENTITY::IS_ENTITY_IN_AIR(uParam0) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_45(char* sParam0, int iParam1, int iParam2)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam2);
}

int func_46(int iParam0)
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

int func_47()
{
	func_48();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_48()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_51(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_50(PLAYER::PLAYER_PED_ID());
			if (func_49(iVar0) && (!func_76(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_49(Global_111638.f_2358.f_539.f_4321))
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

bool func_49(int iParam0)
{
	return iParam0 < 3;
}

int func_50(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_51(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_51(int iParam0)
{
	if (func_49(iParam0))
	{
		return func_52(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_52(int iParam0)
{
	return Global_1798[iParam0];
}

void func_53(char* sParam0, int iParam1, int iParam2)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, -1);
}

var func_54()
{
	return Global_73825;
}

int func_55(int iParam0)
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

bool func_56(int iParam0, int iParam1)
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

bool func_57()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_58()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_59(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

void func_60(var uParam0, int iParam1)
{
	func_61(uParam0, iParam1);
}

void func_61(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_62()
{
	if (func_76(6) || func_76(7))
	{
		return func_75(68);
	}
	return 1;
}

bool func_63()
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
		return ((((bVar1 && CONTROLS::IS_CONTROL_PRESSED(0, 69)) || (bVar1 && CONTROLS::IS_CONTROL_PRESSED(0, 70))) || (bVar1 && CONTROLS::IS_CONTROL_PRESSED(0, 68))) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
	}
	return (((((bVar1 && CONTROLS::IS_CONTROL_PRESSED(0, 24)) || (bVar1 && CONTROLS::IS_CONTROL_PRESSED(0, 25))) || (bVar1 && CONTROLS::IS_CONTROL_PRESSED(0, 47))) || PED::_0xDCCA191DF9980FD7(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
}

int func_64(int iParam0)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_47();
				if (!func_49(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_71()) || Global_110685) || Global_30770) || func_70()) || func_56(8, -1)) || func_69()) || func_68()) || func_67()) || func_58()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_71()) || Global_30770) || func_70()) || func_56(8, -1)) || func_67()) || func_69()) || func_68()) || func_58()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_71()) || Global_110685) || Global_30770) || func_70()) || func_56(8, -1)) || func_67()) || func_69()) || func_68()) || func_58()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_71()) || Global_110685) || Global_30770) || func_70()) || func_56(8, -1)) || func_69()) || func_68()) || func_58()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_71() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_56(8, -1)) || func_58()) || func_66()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_56(8, -1) || func_69()) || func_68()) || func_66()) || func_65())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_71()) || Global_30770) || func_70()) || func_56(8, -1)) || func_68()) || func_67()) || func_58()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_71()) || func_68()) || Global_110685) || Global_30770) || func_70()) || Global_42596) || func_56(8, -1)) || func_67()) || func_66()) || func_58()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_71()) || Global_110685) || Global_30770) || func_70()) || func_56(8, -1)) || func_67()) || func_66()) || func_69()) || func_68()) || func_58())
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

var func_65()
{
	return Global_98783.f_1;
}

int func_66()
{
	if (Global_95666 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_89532[Global_95666].f_15, 13);
	}
	return 0;
}

int func_67()
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

bool func_68()
{
	return Global_98796.f_346 > 0;
}

bool func_69()
{
	return Global_98796.f_345 > 0;
}

var func_70()
{
	return Global_1312877;
}

int func_71()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_72()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1196127390) > 0)
	{
		return 1;
	}
	return 0;
}

var func_73()
{
	return Global_94576;
}

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_76(6) || func_76(7))
			{
				return 1;
			}
			else
			{
				return func_74(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_86(5))
			{
				if (func_64(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_75(int iParam0)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return UI::DOES_BLIP_EXIST(Global_31146[iVar0].f_19);
}

bool func_76(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_77(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_78()
{
}

int func_79()
{
	return 1;
}

void func_80()
{
}

void func_81(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_82(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = GAMEPLAY::IS_BIT_SET(Global_31146[iVar0].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != GAMEPLAY::IS_BIT_SET(Global_31146[iVar0].f_11, 0))
	{
		GAMEPLAY::SET_BIT(&(Global_31146[iVar0].f_11), 18);
		if (Global_31143 == 1)
		{
			Global_31144 = 1;
		}
		Global_31143 = 1;
	}
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_31146[iVar0].f_11), 0);
		GAMEPLAY::SET_BIT(&(Global_31146[iVar0].f_11), 15);
		GAMEPLAY::SET_BIT(&(Global_31146[iVar0].f_11), 3);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_31146[iVar0].f_11), 0);
		GAMEPLAY::CLEAR_BIT(&(Global_31146[iVar0].f_11), 15);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_31146[iVar0].f_11, 0))
	{
		if (UI::DOES_BLIP_EXIST(Global_31146[iVar0].f_19))
		{
			GAMEPLAY::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
			UI::REMOVE_BLIP(&(Global_31146[iVar0].f_19));
			GAMEPLAY::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
		}
	}
}

int func_83()
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

int func_84()
{
	if (Global_95666 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

bool func_85(int iParam0, int iParam1)
{
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = GAMEPLAY::IS_BIT_SET(Global_111638.f_9080.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

bool func_86(int iParam0)
{
	return func_87(iParam0, Global_41431);
}

int func_87(int iParam0, int iParam1)
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

bool func_88(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_89()
{
	StringCopy(&Local_53, "golf", 64);
	iLocal_99 = 2;
	fLocal_117 = 7f;
	func_77(&uLocal_94, 1);
	if (func_76(6) || func_76(7))
	{
		iLocal_103 = 0;
	}
	if (func_38(8) == func_47())
	{
		iLocal_120 = 0;
		sLocal_101 = "PLAY_GOLF";
	}
	else
	{
		iLocal_120 = func_91(ENTITY::DOES_ENTITY_EXIST(func_73()));
		sLocal_101 = "PAY_PLAY_GOLF";
	}
	iLocal_105 = 68;
	fLocal_102 = (SYSTEM::TO_FLOAT(func_90(iLocal_105)) + 5f);
	iLocal_97 = 35000;
}

int func_90(int iParam0)
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

int func_91(bool bParam0)
{
	if (bParam0)
	{
		return 200;
	}
	return 100;
}

void func_92(var uParam0, int iParam1)
{
	func_93(uParam0, iParam1);
}

void func_93(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_94(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_105 != 263)
		{
			func_82(iLocal_105, 0, 0);
		}
	}
	func_41(&iLocal_96);
	if (func_88(uLocal_94, 2048))
	{
		if (func_97(sLocal_101, iLocal_120))
		{
			func_92(&uLocal_94, 2048);
			UI::CLEAR_HELP(0);
		}
	}
	if (func_88(uLocal_94, 2))
	{
		func_4();
		func_92(&uLocal_94, 2);
		func_6(&iLocal_98);
	}
	iLocal_98 = -1;
	func_95();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_95()
{
	func_92(&uLocal_94, 4);
	func_96();
	if (SCRIPT::IS_THREAD_ACTIVE(uLocal_52))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(uLocal_52, 3);
	}
	if (!GAMEPLAY::IS_STRING_NULL(&cLocal_69))
	{
		if (UI::GET_LENGTH_OF_LITERAL_STRING(&cLocal_69) != 0)
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cLocal_69);
		}
	}
}

void func_96()
{
}

bool func_97(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

