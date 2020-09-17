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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_68 = -1;
	iLocal_69 = -1;
	iLocal_70 = 21;
	iLocal_72 = 2;
	iLocal_80 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	GAMEPLAY::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	iLocal_105 = GAMEPLAY::GET_GAME_TIMER();
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_543())
		{
		}
		else
		{
			func_539();
			func_498();
			func_497();
			switch (iLocal_71)
			{
				case 0:
					func_496();
					break;
				
				case 1:
					func_194();
					func_189();
					func_29(&uLocal_153);
					func_26();
					func_10();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						func_2();
					}
					break;
				
				case 2:
					func_1();
					break;
				}
		}
	}
}

void func_1()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_2()
{
	if (!func_9(&uLocal_321))
	{
		func_8(&uLocal_321, 0, 0);
	}
	else if (func_7(&uLocal_321, 7200000, 0))
	{
		if (func_6(0))
		{
			if (func_5(PLAYER::PLAYER_ID()))
			{
				if (!func_4())
				{
					func_3(&uLocal_321);
					UI::_SET_NOTIFICATION_TEXT_ENTRY("SC_PLAY_REM");
					UI::_DRAW_NOTIFICATION(0, 1);
				}
			}
		}
	}
}

void func_3(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_4()
{
	return Global_1312877;
}

bool func_5(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_142, 6);
}

bool func_6(int iParam0)
{
	return Global_1662155.f_16[iParam0].f_4;
}

int func_7(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_8(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(GAMEPLAY::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_8(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = GAMEPLAY::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_9(var uParam0)
{
	return uParam0->f_1;
}

void func_10()
{
	switch (iLocal_325)
	{
		case 0:
			if ((Global_108336 && !iLocal_323) && !Global_262145.f_10125)
			{
				iLocal_326 = -1;
				iVar0 = 0;
				while (iVar0 < Global_108324)
				{
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_108324[iVar0])))
					{
						iLocal_326 = iVar0;
					}
					iVar0++;
				}
				if (iLocal_326 != -1)
				{
					iLocal_325++;
				}
				else
				{
					Global_108336 = 0;
				}
			}
			if (((!Global_108336 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && func_23(3763, -1, -1)) && (!iLocal_328 || GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_329)) > 25000))
			{
				uLocal_330[0] = func_20(1362, -1, -1);
				uLocal_330[1] = func_20(1363, -1, -1);
				uLocal_330[2] = func_20(1364, -1, -1);
				uLocal_330[3] = func_20(1365, -1, -1);
				uLocal_330[4] = func_20(1366, -1, -1);
				uLocal_330[5] = func_20(1367, -1, -1);
				uLocal_330[6] = func_20(1368, -1, -1);
				uLocal_330[7] = func_20(1369, -1, -1);
				func_19(&sVar1, &uLocal_330, -1);
				func_16(&sVar1);
				iLocal_328 = 0;
			}
			break;
		
		case 1:
			if (iLocal_327 == 0)
			{
				SOCIALCLUB::_0x0F73393BAC7E6730(&(Global_108324[iLocal_326]), &iLocal_327);
			}
			else if (!SOCIALCLUB::_0xD302E99EDF0449CF(iLocal_327))
			{
				switch (SOCIALCLUB::_0x5C4EBFFA98BDB41C(iLocal_327))
				{
					case 0:
						bVar7 = false;
						iVar5 = Global_108172;
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_108172[iVar6])))
							{
								if (GAMEPLAY::GET_HASH_KEY(&(Global_108172[iVar6])) == GAMEPLAY::GET_HASH_KEY(&(Global_108324[iLocal_326])))
								{
									bVar7 = true;
									iVar6 = iVar5 + 1;
								}
							}
							iVar6++;
						}
						if (bVar7)
						{
							iLocal_325 = 3;
						}
						else
						{
							iLocal_325 = 2;
						}
						break;
					
					default:
						StringCopy(&(Global_108324[iLocal_326]), "", 16);
						if (SOCIALCLUB::_0x5C4EBFFA98BDB41C(iLocal_327) == 2)
						{
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								func_14(3763, 0, -1, 1);
							}
						}
						iLocal_325 = 0;
						break;
				}
				iLocal_327 = 0;
			}
			break;
		
		case 2:
			if (iLocal_327 == 0)
			{
				StringCopy(&Var8, "", 64);
				if (Global_108333[iLocal_326])
				{
					func_13(&Var8, "SPPlate", 0);
					func_13(&Var8, "MPPlate", 1);
				}
				else
				{
					func_13(&Var8, "SPPlate", 1);
				}
				SOCIALCLUB::_0x1989C6E6F67E76A8(&(Global_108324[iLocal_326]), &Var8, &iLocal_327);
			}
			else if (!SOCIALCLUB::_0x07C61676E5BB52CD(iLocal_327))
			{
				switch (SOCIALCLUB::_0x8147FFF6A718E1AD(iLocal_327))
				{
					case 0:
						iLocal_323 = 1;
						iLocal_325 = 0;
						StringCopy(&(Global_108324[iLocal_326]), "", 16);
						iLocal_327 = 0;
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							func_14(3763, 0, -1, 1);
						}
						break;
					
					default:
						iLocal_327 = 0;
						iLocal_325 = 0;
						StringCopy(&(Global_108324[iLocal_326]), "", 16);
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							iLocal_328 = 1;
							uLocal_329 = NETWORK::GET_NETWORK_TIME();
						}
						break;
				}
				iLocal_327 = 0;
			}
			break;
		
		case 3:
			if (SOCIALCLUB::_0xF22CA0FD74B80E7A(iLocal_327))
			{
				if (!SOCIALCLUB::_0x9237E334F6E43156(iLocal_327))
				{
					iVar24 = -1;
					iVar25 = SOCIALCLUB::_0x700569DBA175A77C(iLocal_327);
					iVar26 = 0;
					while (iVar26 < iVar25)
					{
						sVar27 = SOCIALCLUB::_0x1D4446A62D35B0D0(iLocal_327, iVar26);
						if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sVar27) && GAMEPLAY::GET_HASH_KEY(sVar27) == GAMEPLAY::GET_HASH_KEY(&(Global_108324[iLocal_326])))
						{
							iVar24 = iVar26;
							iVar26 = iVar25 + 1;
						}
						iVar26++;
					}
					if (iVar24 != -1)
					{
						StringCopy(&Var28, SOCIALCLUB::_0x2E89990DDFF670C3(iLocal_327, iVar24), 64);
						if (Global_108333[iLocal_326])
						{
							func_13(&Var28, "SPPlate", 0);
							func_13(&Var28, "MPPlate", 1);
						}
						else if (!func_11(&Var28, "MPPlate"))
						{
							func_13(&Var28, "SPPlate", 1);
						}
						SOCIALCLUB::_0xD0EE05FE193646EA(sVar27, sVar27, &Var28);
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							func_14(3763, 0, -1, 1);
						}
					}
					else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						iLocal_328 = 1;
						uLocal_329 = NETWORK::GET_NETWORK_TIME();
					}
					iLocal_323 = 1;
					iLocal_325 = 0;
					StringCopy(&(Global_108324[iLocal_326]), "", 16);
					iLocal_327 = 0;
				}
			}
			else
			{
				SOCIALCLUB::_0xF6BAAAF762E1BF40("TEST", &iLocal_327);
			}
			break;
	}
}

int func_11(char* sParam0, char* sParam1)
{
	func_12(sParam0, &Var0);
	iVar82 = GAMEPLAY::GET_HASH_KEY(sParam1);
	iVar81 = 0;
	while (iVar81 < Var0)
	{
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Var0[iVar81])))
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Var0[iVar81])) == iVar82)
			{
				return 1;
			}
		}
		iVar81++;
	}
	return 0;
}

void func_12(char* sParam0, var uParam1)
{
	iVar0 = 0;
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		iVar0 = UI::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	}
	StringCopy(&cVar4, "", 32);
	bVar12 = iVar0 != false;
	iVar14 = 0;
	while (iVar14 < *uParam1)
	{
		StringCopy(uParam1[iVar14], "", 32);
		iVar14++;
	}
	while (bVar12)
	{
		StringCopy(&cVar2, UI::_GET_TEXT_SUBSTRING(sParam0, iVar1, iVar1 + 1), 8);
		iVar1++;
		if (GAMEPLAY::GET_HASH_KEY(&cVar2) == 625527429 || iVar1 >= iVar0)
		{
			if (GAMEPLAY::GET_HASH_KEY(&cVar2) != 625527429)
			{
				StringConCat(&cVar4, &cVar2, 32);
			}
			if (iVar13 < *uParam1)
			{
				*uParam1[iVar13] = { cVar4 };
				iVar13++;
			}
			StringCopy(&cVar4, "", 32);
		}
		else
		{
			StringConCat(&cVar4, &cVar2, 32);
		}
		if (iVar1 >= iVar0)
		{
			bVar12 = false;
		}
	}
}

void func_13(char* sParam0, char* sParam1, bool bParam2)
{
	if (bParam2)
	{
	}
	func_12(sParam0, &Var0);
	StringCopy(sParam0, "", 64);
	iVar82 = GAMEPLAY::GET_HASH_KEY(sParam1);
	iVar81 = 0;
	while (iVar81 < Var0)
	{
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Var0[iVar81])))
		{
			iVar83 = GAMEPLAY::GET_HASH_KEY(&(Var0[iVar81]));
			if (iVar83 != iVar82)
			{
				if (bVar84)
				{
					StringConCat(sParam0, ",", 64);
					bVar84 = false;
				}
				StringConCat(sParam0, &(Var0[iVar81]), 64);
				bVar84 = true;
			}
		}
		iVar81++;
	}
	if (bParam2)
	{
		if (bVar84)
		{
			StringConCat(sParam0, ",", 64);
			bVar84 = false;
		}
		StringConCat(sParam0, sParam1, 64);
		bVar84 = true;
	}
}

int func_14(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_15();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		uVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		uVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		uVar23 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30227)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		uVar24 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_15()
{
	return Global_1312745;
}

int func_16(char* sParam0)
{
	iVar11 = UI::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	iVar0 = 0;
	while (iVar0 < Global_108324)
	{
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_108324[iVar0])))
		{
			StringCopy(&(Global_108324[iVar0]), sParam0, 16);
			Global_108333[iVar0] = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
			Global_108336 = 1;
			Global_108337 = 1;
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar10 = 0;
				while (iVar10 < 8)
				{
					if (iVar10 < iVar11)
					{
						uVar1[iVar10] = func_18(UI::_GET_TEXT_SUBSTRING(sParam0, iVar10, iVar10 + 1));
					}
					else
					{
						uVar1[iVar10] = func_18("");
					}
					iVar10++;
				}
				func_17(1362, uVar1[0], -1, 1);
				func_17(1363, uVar1[1], -1, 1);
				func_17(1364, uVar1[2], -1, 1);
				func_17(1365, uVar1[3], -1, 1);
				func_17(1366, uVar1[4], -1, 1);
				func_17(1367, uVar1[5], -1, 1);
				func_17(1368, uVar1[6], -1, 1);
				func_17(1369, uVar1[7], -1, 1);
				func_14(3763, 1, -1, 1);
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_108324)
	{
		iVar0++;
	}
	return 0;
}

var func_17(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_15();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - STATS::_0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - STATS::_0x94F12ABF9C79E339((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - STATS::_0x94F12ABF9C79E339((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_18(char* sParam0)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 37;
	}
	if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("A"))
	{
		return 0;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("B"))
	{
		return 1;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("C"))
	{
		return 2;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("D"))
	{
		return 3;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("E"))
	{
		return 4;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("F"))
	{
		return 5;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("G"))
	{
		return 6;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("H"))
	{
		return 7;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("I"))
	{
		return 8;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("J"))
	{
		return 9;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("K"))
	{
		return 10;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("L"))
	{
		return 11;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("M"))
	{
		return 12;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("N"))
	{
		return 13;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("O"))
	{
		return 14;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("P"))
	{
		return 15;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("Q"))
	{
		return 16;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("R"))
	{
		return 17;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("S"))
	{
		return 18;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("T"))
	{
		return 19;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("U"))
	{
		return 20;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("V"))
	{
		return 21;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("W"))
	{
		return 22;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("X"))
	{
		return 23;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("Y"))
	{
		return 24;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("Z"))
	{
		return 25;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("0"))
	{
		return 26;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("1"))
	{
		return 27;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("2"))
	{
		return 28;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("3"))
	{
		return 29;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("4"))
	{
		return 30;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("5"))
	{
		return 31;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("6"))
	{
		return 32;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("7"))
	{
		return 33;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("8"))
	{
		return 34;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY("9"))
	{
		return 35;
	}
	else if (GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY(" "))
	{
		return 36;
	}
	return 37;
}

void func_19(char* sParam0, var uParam1, int iParam2)
{
	StringCopy(sParam0, "", 16);
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (iVar0 == iParam2 && SYSTEM::SIN(SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER())) > 0f)
		{
			StringConCat(sParam0, " ", 16);
		}
		else
		{
			switch ((*uParam1)[iVar0])
			{
				case 0:
					StringConCat(sParam0, "A", 16);
					break;
				
				case 1:
					StringConCat(sParam0, "B", 16);
					break;
				
				case 2:
					StringConCat(sParam0, "C", 16);
					break;
				
				case 3:
					StringConCat(sParam0, "D", 16);
					break;
				
				case 4:
					StringConCat(sParam0, "E", 16);
					break;
				
				case 5:
					StringConCat(sParam0, "F", 16);
					break;
				
				case 6:
					StringConCat(sParam0, "G", 16);
					break;
				
				case 7:
					StringConCat(sParam0, "H", 16);
					break;
				
				case 8:
					StringConCat(sParam0, "I", 16);
					break;
				
				case 9:
					StringConCat(sParam0, "J", 16);
					break;
				
				case 10:
					StringConCat(sParam0, "K", 16);
					break;
				
				case 11:
					StringConCat(sParam0, "L", 16);
					break;
				
				case 12:
					StringConCat(sParam0, "M", 16);
					break;
				
				case 13:
					StringConCat(sParam0, "N", 16);
					break;
				
				case 14:
					StringConCat(sParam0, "O", 16);
					break;
				
				case 15:
					StringConCat(sParam0, "P", 16);
					break;
				
				case 16:
					StringConCat(sParam0, "Q", 16);
					break;
				
				case 17:
					StringConCat(sParam0, "R", 16);
					break;
				
				case 18:
					StringConCat(sParam0, "S", 16);
					break;
				
				case 19:
					StringConCat(sParam0, "T", 16);
					break;
				
				case 20:
					StringConCat(sParam0, "U", 16);
					break;
				
				case 21:
					StringConCat(sParam0, "V", 16);
					break;
				
				case 22:
					StringConCat(sParam0, "W", 16);
					break;
				
				case 23:
					StringConCat(sParam0, "X", 16);
					break;
				
				case 24:
					StringConCat(sParam0, "Y", 16);
					break;
				
				case 25:
					StringConCat(sParam0, "Z", 16);
					break;
				
				case 26:
					StringConCat(sParam0, "0", 16);
					break;
				
				case 27:
					StringConCat(sParam0, "1", 16);
					break;
				
				case 28:
					StringConCat(sParam0, "2", 16);
					break;
				
				case 29:
					StringConCat(sParam0, "3", 16);
					break;
				
				case 30:
					StringConCat(sParam0, "4", 16);
					break;
				
				case 31:
					StringConCat(sParam0, "5", 16);
					break;
				
				case 32:
					StringConCat(sParam0, "6", 16);
					break;
				
				case 33:
					StringConCat(sParam0, "7", 16);
					break;
				
				case 34:
					StringConCat(sParam0, "8", 16);
					break;
				
				case 35:
					StringConCat(sParam0, "9", 16);
					break;
				
				case 36:
					StringConCat(sParam0, " ", 16);
					break;
				
				default:
					StringConCat(sParam0, "", 16);
					break;
				}
		}
		iVar0++;
	}
}

int func_20(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_15();
	}
	iVar0 = 0;
	iVar1 = func_22(iParam0, iParam1);
	uVar2 = func_21(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_21(int iParam0)
{
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - STATS::_0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - STATS::_0x94F12ABF9C79E339((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - STATS::_0x94F12ABF9C79E339((iParam0 - 28483)) * 8) * 8;
	}
	return iVar0;
}

int func_22(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_15();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	return iVar0;
}

int func_23(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_15();
	}
	iVar1 = func_25(iParam0, iParam1);
	uVar2 = func_24(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_24(int iParam0)
{
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_25(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_15();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

void func_26()
{
	if (Global_108337 && !iLocal_323)
	{
		iLocal_323 = 1;
		Global_108337 = 0;
	}
	if ((((iLocal_323 && iLocal_325 == 0) && !bLocal_84) && !Global_262145.f_10124) && iLocal_71 != 0)
	{
		iVar0 = 0;
		unk_0xEBD5716567F1D347("car");
		unk_0xB5B7B792811308A7("appdata");
		iVar0 = (iVar0 + func_27("orderCount_sp0"));
		iVar0 = (iVar0 + func_27("orderCount_sp1"));
		iVar0 = (iVar0 + func_27("orderCount_sp2"));
		iVar0 = (iVar0 + func_27("orderCount_mp0"));
		iVar0 = (iVar0 + func_27("orderCount_mp1"));
		iVar0 = (iVar0 + func_27("orderCount_mp2"));
		iVar0 = (iVar0 + func_27("orderCount_mp3"));
		iVar0 = (iVar0 + func_27("orderCount_mp4"));
		unk_0x98C61465A1232E0E();
		unk_0xFE0C6A4F9007749F();
		iVar0 = iVar0;
		if (SOCIALCLUB::_0xF22CA0FD74B80E7A(iLocal_327))
		{
			if (!SOCIALCLUB::_0x9237E334F6E43156(iLocal_327))
			{
				iVar2 = Global_108172;
				iVar1 = 0;
				while (iVar1 < iVar2)
				{
					StringCopy(&(Global_108172[iVar1]), "", 16);
					Global_108293[iVar1] = 0;
					iVar1++;
				}
				iVar2 = SOCIALCLUB::_0x700569DBA175A77C(iLocal_327);
				Global_108338 = iVar2 >= Global_108172;
				iVar1 = 0;
				while (iVar1 < iVar2)
				{
					if (iVar1 < Global_108172)
					{
						StringCopy(&(Global_108172[iVar1]), SOCIALCLUB::_0x1D4446A62D35B0D0(iLocal_327, iVar1), 16);
						StringCopy(&Var3, SOCIALCLUB::_0x2E89990DDFF670C3(iLocal_327, iVar1), 64);
						if ((func_11(&Var3, "MPPlate") || func_11(&Var3, "NoDelete")) || iVar1 == 0)
						{
							Global_108293[iVar1] = 1;
						}
					}
					iVar1++;
				}
				iLocal_327 = 0;
				iLocal_323 = 0;
				Global_108339 = 1;
			}
		}
		else
		{
			SOCIALCLUB::_0xF6BAAAF762E1BF40("TEST", &iLocal_327);
		}
	}
}

int func_27(char* sParam0)
{
	return APP::APP_GET_INT(func_28(sParam0));
}

char* func_28(char* sParam0)
{
	iVar0 = GAMEPLAY::GET_HASH_KEY(uParam0);
	if (GAMEPLAY::GET_HASH_KEY("uid") == iVar0)
	{
		return "0";
	}
	if (GAMEPLAY::GET_HASH_KEY("carModel") == iVar0)
	{
		return "1";
	}
	if (GAMEPLAY::GET_HASH_KEY("playerSlot") == iVar0)
	{
		return "2";
	}
	if (GAMEPLAY::GET_HASH_KEY("playerRank") == iVar0)
	{
		return "3";
	}
	if (GAMEPLAY::GET_HASH_KEY("playerGangR") == iVar0)
	{
		return "4";
	}
	if (GAMEPLAY::GET_HASH_KEY("playerGangG") == iVar0)
	{
		return "5";
	}
	if (GAMEPLAY::GET_HASH_KEY("playerGangB") == iVar0)
	{
		return "6";
	}
	if (GAMEPLAY::GET_HASH_KEY("carColour1") == iVar0)
	{
		return "7";
	}
	if (GAMEPLAY::GET_HASH_KEY("carColour2") == iVar0)
	{
		return "8";
	}
	if (GAMEPLAY::GET_HASH_KEY("carPlateBack") == iVar0)
	{
		return "9";
	}
	if (GAMEPLAY::GET_HASH_KEY("windowTint") == iVar0)
	{
		return "10";
	}
	if (GAMEPLAY::GET_HASH_KEY("bulletProofTyres") == iVar0)
	{
		return "11";
	}
	if (GAMEPLAY::GET_HASH_KEY("carEngine") == iVar0)
	{
		return "12";
	}
	if (GAMEPLAY::GET_HASH_KEY("carBrakes") == iVar0)
	{
		return "13";
	}
	if (GAMEPLAY::GET_HASH_KEY("carExhaust") == iVar0)
	{
		return "14";
	}
	if (GAMEPLAY::GET_HASH_KEY("carWheel") == iVar0)
	{
		return "15";
	}
	if (GAMEPLAY::GET_HASH_KEY("carHorn1") == iVar0)
	{
		return "16";
	}
	if (GAMEPLAY::GET_HASH_KEY("carHorn2") == iVar0)
	{
		return "17";
	}
	if (GAMEPLAY::GET_HASH_KEY("carHorn3") == iVar0)
	{
		return "18";
	}
	if (GAMEPLAY::GET_HASH_KEY("carHorn4") == iVar0)
	{
		return "19";
	}
	if (GAMEPLAY::GET_HASH_KEY("carHorn5") == iVar0)
	{
		return "20";
	}
	if (GAMEPLAY::GET_HASH_KEY("carHorn6") == iVar0)
	{
		return "21";
	}
	if (GAMEPLAY::GET_HASH_KEY("carHorn7") == iVar0)
	{
		return "22";
	}
	if (GAMEPLAY::GET_HASH_KEY("carHorn8") == iVar0)
	{
		return "23";
	}
	if (GAMEPLAY::GET_HASH_KEY("carHorn9") == iVar0)
	{
		return "24";
	}
	if (GAMEPLAY::GET_HASH_KEY("tyreSmoke") == iVar0)
	{
		return "25";
	}
	if (GAMEPLAY::GET_HASH_KEY("tyreSmokeColourRed") == iVar0)
	{
		return "26";
	}
	if (GAMEPLAY::GET_HASH_KEY("tyreSmokeColourGreen") == iVar0)
	{
		return "27";
	}
	if (GAMEPLAY::GET_HASH_KEY("tyreSmokeColourBlue") == iVar0)
	{
		return "28";
	}
	if (GAMEPLAY::GET_HASH_KEY("carHorn") == iVar0)
	{
		return "29";
	}
	if (GAMEPLAY::GET_HASH_KEY("carArmour") == iVar0)
	{
		return "30";
	}
	if (GAMEPLAY::GET_HASH_KEY("carTurbo") == iVar0)
	{
		return "31";
	}
	if (GAMEPLAY::GET_HASH_KEY("carSuspension") == iVar0)
	{
		return "32";
	}
	if (GAMEPLAY::GET_HASH_KEY("carXenonLights") == iVar0)
	{
		return "33";
	}
	if (GAMEPLAY::GET_HASH_KEY("carWheelType") == iVar0)
	{
		return "34";
	}
	if (GAMEPLAY::GET_HASH_KEY("carUnlocked") == iVar0)
	{
		return "35";
	}
	if (GAMEPLAY::GET_HASH_KEY("carColour1Unlocked") == iVar0)
	{
		return "36";
	}
	if (GAMEPLAY::GET_HASH_KEY("carColour2Unlocked") == iVar0)
	{
		return "37";
	}
	if (GAMEPLAY::GET_HASH_KEY("tyreSmokeColourEnabled") == iVar0)
	{
		return "38";
	}
	if (GAMEPLAY::GET_HASH_KEY("carEngineCount") == iVar0)
	{
		return "39";
	}
	if (GAMEPLAY::GET_HASH_KEY("carBrakesCount") == iVar0)
	{
		return "40";
	}
	if (GAMEPLAY::GET_HASH_KEY("carExhaustCount") == iVar0)
	{
		return "41";
	}
	if (GAMEPLAY::GET_HASH_KEY("carWheelCount") == iVar0)
	{
		return "42";
	}
	if (GAMEPLAY::GET_HASH_KEY("carHornCount") == iVar0)
	{
		return "43";
	}
	if (GAMEPLAY::GET_HASH_KEY("carArmourCount") == iVar0)
	{
		return "44";
	}
	if (GAMEPLAY::GET_HASH_KEY("carSuspensionCount") == iVar0)
	{
		return "45";
	}
	if (GAMEPLAY::GET_HASH_KEY("carColoursUnlocked0") == iVar0)
	{
		return "46";
	}
	if (GAMEPLAY::GET_HASH_KEY("carColoursUnlocked1") == iVar0)
	{
		return "47";
	}
	if (GAMEPLAY::GET_HASH_KEY("carColoursUnlocked2") == iVar0)
	{
		return "48";
	}
	if (GAMEPLAY::GET_HASH_KEY("carColoursUnlocked3") == iVar0)
	{
		return "49";
	}
	if (GAMEPLAY::GET_HASH_KEY("carColoursUnlocked4") == iVar0)
	{
		return "50";
	}
	if (GAMEPLAY::GET_HASH_KEY("carColoursUnlocked5") == iVar0)
	{
		return "51";
	}
	if (GAMEPLAY::GET_HASH_KEY("carPriceModifier") == iVar0)
	{
		return "52";
	}
	if (GAMEPLAY::GET_HASH_KEY("carType") == iVar0)
	{
		return "53";
	}
	if (GAMEPLAY::GET_HASH_KEY("playerGang") == iVar0)
	{
		return "54";
	}
	if (GAMEPLAY::GET_HASH_KEY("unlockBitset1") == iVar0)
	{
		return "55";
	}
	if (GAMEPLAY::GET_HASH_KEY("unlockBitset2") == iVar0)
	{
		return "56";
	}
	if (GAMEPLAY::GET_HASH_KEY("orderCount_sp0") == iVar0)
	{
		return "57";
	}
	if (GAMEPLAY::GET_HASH_KEY("orderCount_sp1") == iVar0)
	{
		return "58";
	}
	if (GAMEPLAY::GET_HASH_KEY("orderCount_sp2") == iVar0)
	{
		return "59";
	}
	if (GAMEPLAY::GET_HASH_KEY("orderCount_mp0") == iVar0)
	{
		return "60";
	}
	if (GAMEPLAY::GET_HASH_KEY("orderCount_mp1") == iVar0)
	{
		return "61";
	}
	if (GAMEPLAY::GET_HASH_KEY("orderCount_mp2") == iVar0)
	{
		return "62";
	}
	if (GAMEPLAY::GET_HASH_KEY("orderCount_mp3") == iVar0)
	{
		return "63";
	}
	if (GAMEPLAY::GET_HASH_KEY("orderCount_mp4") == iVar0)
	{
		return "64";
	}
	if (GAMEPLAY::GET_HASH_KEY("spDiscount") == iVar0)
	{
		return "65";
	}
	if (GAMEPLAY::GET_HASH_KEY("mpDiscount") == iVar0)
	{
		return "66";
	}
	if (GAMEPLAY::GET_HASH_KEY("carColour1Group") == iVar0)
	{
		return "67";
	}
	if (GAMEPLAY::GET_HASH_KEY("carColour2Group") == iVar0)
	{
		return "68";
	}
	if (GAMEPLAY::GET_HASH_KEY("unlockBitset3") == iVar0)
	{
		return "69";
	}
	if (GAMEPLAY::GET_HASH_KEY("playerName") == iVar0)
	{
		return "70";
	}
	if (GAMEPLAY::GET_HASH_KEY("newItemUnlocks") == iVar0)
	{
		return "72";
	}
	if (GAMEPLAY::GET_HASH_KEY("playerNameSP") == iVar0)
	{
		return "73";
	}
	if (GAMEPLAY::GET_HASH_KEY("playerNameMP") == iVar0)
	{
		return "74";
	}
	return sParam0;
}

void func_29(var uParam0)
{
	bVar0 = false;
	if (!func_9(&(uParam0->f_10)))
	{
		func_8(&(uParam0->f_10), 0, 0);
	}
	else if (func_7(&(uParam0->f_10), func_188(), 0))
	{
		if (!uParam0->f_166)
		{
			bVar0 = true;
		}
	}
	func_54(uParam0, bVar0);
	if (func_53() && func_52())
	{
		func_30(uParam0);
	}
	if (bVar0)
	{
		if (uParam0->f_166)
		{
			func_3(&(uParam0->f_10));
			uParam0->f_166 = 0;
		}
	}
}

void func_30(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam0 = 0;
		return;
	}
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (uParam0->f_1 != func_15())
	{
		*uParam0 = 0;
	}
	switch (*uParam0)
	{
		case 0:
			if (uParam0->f_1 != func_15())
			{
				uParam0->f_2 = func_51(1079, -1, 0);
				uParam0->f_3 = func_51(149, -1, 0);
				uParam0->f_4 = func_51(150, -1, 0);
				uParam0->f_5 = func_51(112, -1, 0);
				uParam0->f_6 = func_50(11, -1);
				uParam0->f_7 = func_49(32, -1);
				uParam0->f_8 = func_49(0, -1);
				if (func_46(10))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
				}
				if (func_43(10))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 1);
				}
				if (func_40(10))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 2);
				}
				if (func_37(10))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 3);
				}
				if (func_46(11))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 4);
				}
				if (func_43(11))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 5);
				}
				if (func_40(11))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
				}
				if (func_37(11))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
				}
				if (func_46(60))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
				}
				if (func_43(60))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 9);
				}
				if (func_40(60))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
				}
				if (func_37(60))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 11);
				}
				if (func_31(23))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 15);
				}
				if (func_46(61))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 16);
				}
				if (func_43(61))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 17);
				}
				if (func_40(61))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 18);
				}
				if (func_37(61))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 19);
				}
				if (func_46(62))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
				}
				if (func_43(62))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
				}
				if (func_40(62))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 22);
				}
				if (func_37(62))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
				}
				if (func_46(63))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
				}
				if (func_43(63))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 25);
				}
				if (func_40(63))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
				}
				if (func_37(63))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 27);
				}
				uParam0->f_1 = func_15();
				*uParam0++;
			}
			break;
		
		case 1:
			if (!GAMEPLAY::IS_BIT_SET(uParam0->f_9, 0))
			{
				if (func_46(10))
				{
					STATS::_0x11FF1C80276097ED(-745862657, func_50(10, -1), 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(uParam0->f_9, 1))
			{
				if (func_43(10))
				{
					STATS::_0x11FF1C80276097ED(-745862657, func_50(10, -1), 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 1);
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(uParam0->f_9, 2))
			{
				if (func_40(10))
				{
					STATS::_0x11FF1C80276097ED(-745862657, func_50(10, -1), 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 2);
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(uParam0->f_9, 3))
			{
				if (func_37(10))
				{
					STATS::_0x11FF1C80276097ED(-745862657, func_50(10, -1), 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 3);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(uParam0->f_9, 4))
			{
				if (func_46(11))
				{
					STATS::_0x11FF1C80276097ED(-1908477769, func_50(11, -1), 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 4);
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(uParam0->f_9, 5))
			{
				if (func_43(11))
				{
					STATS::_0x11FF1C80276097ED(-1908477769, func_50(11, -1), 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 5);
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(uParam0->f_9, 6))
			{
				if (func_40(11))
				{
					STATS::_0x11FF1C80276097ED(-1908477769, func_50(11, -1), 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(uParam0->f_9, 7))
			{
				if (func_37(11))
				{
					STATS::_0x11FF1C80276097ED(-1908477769, func_50(11, -1), 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(uParam0->f_9, 8))
			{
				if (func_46(60))
				{
					STATS::_0x11FF1C80276097ED(649704142, func_50(60, -1), 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(uParam0->f_9, 9))
			{
				if (func_43(60))
				{
					STATS::_0x11FF1C80276097ED(649704142, func_50(60, -1), 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 9);
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(uParam0->f_9, 10))
			{
				if (func_40(60))
				{
					STATS::_0x11FF1C80276097ED(649704142, func_50(60, -1), 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(uParam0->f_9, 11))
			{
				if (func_37(60))
				{
					STATS::_0x11FF1C80276097ED(649704142, func_50(60, -1), 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 11);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(uParam0->f_9, 15))
			{
				if (func_31(23))
				{
					STATS::_0x30A6614C1F7799B8(-2053753774, func_49(32, -1), 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 15);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(uParam0->f_9, 16))
			{
				if (func_46(61))
				{
					STATS::_0x11FF1C80276097ED(636291230, func_50(61, -1), 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 16);
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(uParam0->f_9, 17))
			{
				if (func_43(61))
				{
					STATS::_0x11FF1C80276097ED(636291230, func_50(61, -1), 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 17);
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(uParam0->f_9, 18))
			{
				if (func_40(61))
				{
					STATS::_0x11FF1C80276097ED(636291230, func_50(61, -1), 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 18);
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(uParam0->f_9, 19))
			{
				if (func_37(61))
				{
					STATS::_0x11FF1C80276097ED(636291230, func_50(61, -1), 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 19);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(uParam0->f_9, 20))
			{
				if (func_46(62))
				{
					STATS::_0x11FF1C80276097ED(120821777, func_50(62, -1), 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(uParam0->f_9, 21))
			{
				if (func_43(62))
				{
					STATS::_0x11FF1C80276097ED(120821777, func_50(62, -1), 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(uParam0->f_9, 22))
			{
				if (func_40(62))
				{
					STATS::_0x11FF1C80276097ED(120821777, func_50(62, -1), 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 22);
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(uParam0->f_9, 23))
			{
				if (func_37(62))
				{
					STATS::_0x11FF1C80276097ED(120821777, func_50(62, -1), 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(uParam0->f_9, 24))
			{
				if (func_46(63))
				{
					STATS::_0x11FF1C80276097ED(-155774932, func_50(63, -1), 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(uParam0->f_9, 25))
			{
				if (func_43(63))
				{
					STATS::_0x11FF1C80276097ED(-155774932, func_50(63, -1), 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 25);
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(uParam0->f_9, 26))
			{
				if (func_40(63))
				{
					STATS::_0x11FF1C80276097ED(-155774932, func_50(63, -1), 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(uParam0->f_9, 27))
			{
				if (func_37(63))
				{
					STATS::_0x11FF1C80276097ED(-155774932, func_50(63, -1), 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_9), 27);
				}
			}
			break;
	}
}

bool func_31(int iParam0)
{
	uVar0 = func_33(iParam0);
	iVar1 = iParam0;
	return GAMEPLAY::IS_BIT_SET(uVar0, func_32(iVar1));
}

int func_32(int iParam0)
{
	return (iParam0 % 32);
}

int func_33(var uParam0)
{
	switch (func_35(uParam0))
	{
		case 764:
			return Global_1388072[func_34(-1)];
		
		case 765:
			return Global_1388078[func_34(-1)];
		
		case 766:
			return Global_1388084[func_34(-1)];
		
		case 8731:
			return Global_1388090[func_34(-1)];
		
		default:
	}
	return 0;
}

int func_34(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_15();
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

int func_35(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = func_36(iVar0);
	switch (iVar1)
	{
		case 0:
			return 764;
			break;
		
		case 1:
			return 765;
			break;
		
		case 2:
			return 766;
			break;
		
		case 3:
			return 8731;
			break;
	}
	return 11511;
}

int func_36(int iParam0)
{
	return (iParam0 / 32);
}

bool func_37(int iParam0)
{
	uVar0 = func_38(iParam0);
	iVar1 = iParam0;
	return GAMEPLAY::IS_BIT_SET(uVar0, func_32(iVar1));
}

int func_38(var uParam0)
{
	switch (func_39(uParam0))
	{
		case 757:
			return Global_1388018[func_34(-1)];
		
		case 758:
			return Global_1388024[func_34(-1)];
		
		case 759:
			return Global_1388030[func_34(-1)];
		
		case 760:
			return Global_1388036[func_34(-1)];
		
		case 8732:
			return Global_1388042[func_34(-1)];
		
		default:
	}
	return 0;
}

int func_39(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = func_36(iVar0);
	switch (iVar1)
	{
		case 0:
			return 757;
			break;
		
		case 1:
			return 758;
			break;
		
		case 2:
			return 759;
			break;
		
		case 3:
			return 760;
			break;
		
		case 4:
			return 8732;
			break;
	}
	return 11511;
}

bool func_40(int iParam0)
{
	uVar0 = func_41(iParam0);
	iVar1 = iParam0;
	return GAMEPLAY::IS_BIT_SET(uVar0, func_32(iVar1));
}

int func_41(var uParam0)
{
	switch (func_42(uParam0))
	{
		case 767:
			return Global_1387928[func_34(-1)];
		
		case 768:
			return Global_1387934[func_34(-1)];
		
		case 769:
			return Global_1387940[func_34(-1)];
		
		case 770:
			return Global_1387946[func_34(-1)];
		
		case 8730:
			return Global_1387952[func_34(-1)];
		
		default:
	}
	return 0;
}

int func_42(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = func_36(iVar0);
	switch (iVar1)
	{
		case 0:
			return 767;
			break;
		
		case 1:
			return 768;
			break;
		
		case 2:
			return 769;
			break;
		
		case 3:
			return 770;
			break;
		
		case 4:
			return 8730;
			break;
	}
	return 11511;
}

bool func_43(int iParam0)
{
	uVar0 = func_44(iParam0);
	iVar1 = iParam0;
	return GAMEPLAY::IS_BIT_SET(uVar0, func_32(iVar1));
}

int func_44(var uParam0)
{
	switch (func_45(uParam0))
	{
		case 777:
			return Global_1387958[func_34(-1)];
		
		case 778:
			return Global_1387964[func_34(-1)];
		
		case 779:
			return Global_1387970[func_34(-1)];
		
		case 780:
			return Global_1387976[func_34(-1)];
		
		case 8728:
			return Global_1387982[func_34(-1)];
		
		default:
	}
	return 0;
}

int func_45(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = func_36(iVar0);
	switch (iVar1)
	{
		case 0:
			return 777;
			break;
		
		case 1:
			return 778;
			break;
		
		case 2:
			return 779;
			break;
		
		case 3:
			return 780;
			break;
		
		case 4:
			return 8728;
			break;
	}
	return 11511;
}

bool func_46(int iParam0)
{
	uVar0 = func_47(iParam0);
	iVar1 = iParam0;
	return GAMEPLAY::IS_BIT_SET(uVar0, func_32(iVar1));
}

int func_47(var uParam0)
{
	switch (func_48(uParam0))
	{
		case 787:
			return Global_1387988[func_34(-1)];
		
		case 788:
			return Global_1387994[func_34(-1)];
		
		case 789:
			return Global_1388000[func_34(-1)];
		
		case 790:
			return Global_1388006[func_34(-1)];
		
		case 8726:
			return Global_1388012[func_34(-1)];
		
		default:
	}
	return 0;
}

int func_48(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = func_36(iVar0);
	switch (iVar1)
	{
		case 0:
			return 787;
			break;
		
		case 1:
			return 788;
			break;
		
		case 2:
			return 789;
			break;
		
		case 3:
			return 790;
			break;
		
		case 4:
			return 8726;
			break;
	}
	return 11511;
}

float func_49(int iParam0, int iParam1)
{
	uVar0 = Global_2582968[iParam0][func_34(iParam1)];
	if (STATS::STAT_GET_FLOAT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_50(int iParam0, int iParam1)
{
	uVar0 = Global_2585280[iParam0][func_34(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_34(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_52()
{
	if (NETWORK::_0x66B59CFFD78467AF() == 0)
	{
		return 0;
	}
	if (GAMEPLAY::IS_PS3_VERSION())
	{
		if (NETWORK::_0xAEEF48CDF5B6CE7C(1, -1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (GAMEPLAY::IS_ORBIS_VERSION())
	{
		if (NETWORK::_0x72D918C99BCACC54(1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (GAMEPLAY::IS_XBOX360_VERSION() || GAMEPLAY::IS_DURANGO_VERSION())
	{
		if (NETWORK::_0x595F028698072DD9(0, -3, 1))
		{
			return 1;
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (NETWORK::_0xAEEF48CDF5B6CE7C(0, -1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_53()
{
	if (GAMEPLAY::IS_PS3_VERSION() && NETWORK::_0x9614B71F8ADB982B() == 3)
	{
		return 1;
	}
	if (GAMEPLAY::IS_XBOX360_VERSION() && NETWORK::_0x9614B71F8ADB982B() == 3)
	{
		return 1;
	}
	if (GAMEPLAY::IS_ORBIS_VERSION() && NETWORK::_0x1353F87E89946207() == 0)
	{
		return 1;
	}
	if (GAMEPLAY::IS_DURANGO_VERSION() && NETWORK::_0x1353F87E89946207() == 0)
	{
		return 1;
	}
	if (GAMEPLAY::IS_PC_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	return 0;
}

void func_54(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 200:
				func_187(iVar0);
				func_181(iVar0, uParam0, bParam1);
				break;
			
			case 218:
				func_179(iVar0, uParam0, bParam1);
				break;
			
			case 202:
				break;
			
			case 189:
				break;
			
			case 190:
				func_178(iVar0, uParam0, bParam1);
				break;
			
			case 191:
				break;
			
			case 211:
				func_177(iVar0, uParam0, bParam1);
				break;
			
			case 221:
				func_176(uParam0, bParam1);
				break;
		}
		iVar0++;
	}
	if (!Global_76622)
	{
		if (Global_111581 > 0)
		{
			func_166();
		}
	}
	func_55(uParam0, bParam1);
}

void func_55(var uParam0, bool bParam1)
{
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (func_4())
	{
		return;
	}
	iVar0 = SOCIALCLUB::_GET_TOTAL_SC_INBOX_IDS();
	iVar1 = 0;
	Var71.f_17 = 1;
	Var71.f_21 = -1;
	Var71.f_22 = -1;
	Var71.f_23 = 2;
	Var71.f_36 = 2;
	Var165.f_65 = -1;
	Var165.f_66 = -1;
	Var165.f_67 = 2;
	iVar253 = 0;
	switch (uParam0->f_167)
	{
		case 0:
			if (bParam1)
			{
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (!SOCIALCLUB::_IS_SC_INBOX_VALID(iVar1))
					{
						if (func_53() && func_52())
						{
							iVar2 = SOCIALCLUB::_SC_INBOX_MESSAGE_INIT(iVar1);
							if (func_165(iVar2))
							{
								switch (iVar2)
								{
									case -877581966:
										if (GAMEPLAY::GET_PROFILE_SETTING(802) == 1)
										{
											SOCIALCLUB::_SC_INBOX_MESSAGE_PUSH(iVar1);
											if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iVar1, "msg", &uVar3))
											{
											}
											SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
										}
										break;
									
									case 1988401830:
										func_164(iVar1, 0);
										break;
									}
							}
						}
						else
						{
							SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
						}
					}
					iVar1++;
				}
			}
			uParam0->f_167++;
			break;
		
		case 1:
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				if (!SOCIALCLUB::_IS_SC_INBOX_VALID(iVar1))
				{
					iVar2 = SOCIALCLUB::_SC_INBOX_MESSAGE_INIT(iVar1);
					switch (iVar2)
					{
						case -877581966:
							if (bParam1)
							{
								if (func_53() && func_52())
								{
									if (GAMEPLAY::GET_PROFILE_SETTING(802) == 1)
									{
										SOCIALCLUB::_SC_INBOX_MESSAGE_PUSH(iVar1);
										if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iVar1, "msg", &uVar3))
										{
										}
										SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
									}
								}
								else
								{
									SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
								}
							}
							break;
						
						case -302691102:
							break;
						
						case -1940449706:
							if (bParam1)
							{
								if (!uParam0->f_166)
								{
									if (func_161())
									{
										if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
										{
											if (func_160(PLAYER::PLAYER_ID(), 0, 1))
											{
												if (func_53() && func_52())
												{
													SOCIALCLUB::_SC_INBOX_MESSAGE_PUSH(iVar1);
													func_114(0, "XPT_MISSVER", 663093519, 475954354, 5000, 1, -1, 0);
													if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iVar1, "msg", &uVar3))
													{
													}
													SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
												}
												else
												{
													SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
												}
												uParam0->f_166 = 1;
											}
										}
									}
								}
							}
							break;
						
						case 1894043873:
							if ((func_53() && func_52()) && Global_262145.f_24737)
							{
								SOCIALCLUB::_SC_INBOX_MESSAGE_PUSH(iVar1);
								if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iVar1, "msg", &uVar3))
								{
								}
								SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
							}
							else
							{
								SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
							}
							break;
						
						case 563149281:
							if (bParam1)
							{
								if (!uParam0->f_166)
								{
									if (func_53() && func_52())
									{
										if (((((((((((((((((func_113() == 0 && !func_112()) && !func_111()) && !func_110()) && !func_109()) && !func_108()) && !func_107()) && !func_106()) && !func_105()) && (func_161() && func_101())) && Global_1590535[PLAYER::PLAYER_ID()].f_98 != 8) && Global_1590535[PLAYER::PLAYER_ID()].f_98 != 9) && !func_99(PLAYER::PLAYER_ID())) && !func_98()) && !func_96(PLAYER::PLAYER_ID(), 1, 0)) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_95()) && !Global_1652616)
										{
											if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_UGCDATA(iVar1, &(uParam0->f_13)))
											{
												if (func_81(&Var71, &(uParam0->f_13), &Var165, &iVar253))
												{
													if (Var71)
													{
														if (uParam0->f_13.f_58)
														{
														}
														func_78(&(uParam0->f_13.f_10), uParam0->f_13.f_8, uParam0->f_13.f_55, uParam0->f_13.f_56, &(Var165.f_22));
														SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
														uParam0->f_166 = 1;
													}
													else
													{
														SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
													}
												}
											}
										}
									}
									else
									{
										SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
									}
								}
								else
								{
									SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
								}
							}
							break;
						
						case -89752472:
							if (bParam1)
							{
								if (!uParam0->f_166)
								{
									if (func_53() && func_52())
									{
										if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iVar1, "mn", &cVar35))
										{
											if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iVar1, "gtag", &sVar19))
											{
												func_77("SC_PUBLISH", &sVar19, &cVar35, 0, 0);
												SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
												uParam0->f_166 = 1;
											}
										}
									}
									else
									{
										SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
									}
								}
								else
								{
									SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
								}
							}
							break;
						
						case 1662919852:
							SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
							break;
						
						case -323664079:
							if (bParam1)
							{
								if (!uParam0->f_166)
								{
									SOCIALCLUB::_0x87E0052F08BD64E6(iVar1, &Var51);
									if (GAMEPLAY::IS_BIT_SET(Var51.f_16, 2))
									{
										if (func_53() && func_52())
										{
											func_75("FM_TXT_BNTY7", &Var51, Var51.f_17, 0, 0);
										}
										func_68("LESTER", "3", 12, "CT_AUD", "MPCT_BNTFL");
									}
									else if (GAMEPLAY::IS_BIT_SET(Var51.f_16, 0))
									{
										func_68("LESTER", "3", 12, "CT_AUD", "MPCT_BNTSuc");
										if (func_53() && func_52())
										{
											func_65("FM_TXT_BNTY5", &Var51, &(Var51.f_8), Var51.f_17, 0);
										}
									}
									SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
									uParam0->f_166 = 1;
								}
								else
								{
									SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
								}
							}
							break;
						
						case -775483672:
							if (func_53() && func_52())
							{
								if (bParam1)
								{
									if (!uParam0->f_166)
									{
										func_58("SC_WON_TOURN");
									}
								}
							}
							func_56(151, 1, -1, 1);
							SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
							break;
						
						case 1988401830:
							func_164(iVar1, 0);
							break;
						
						default:
							if (bParam1)
							{
								if (GAMEPLAY::GET_HASH_KEY(SOCIALCLUB::_SC_INBOX_MESSAGE_GET_STRING(iVar1)) != -1879562593)
								{
									SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
								}
							}
							break;
						}
				}
				iVar1++;
			}
			if (uParam0->f_166)
			{
				uParam0->f_167 = 0;
			}
			break;
	}
}

void func_56(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_57())
	{
		iVar0 = Global_2583656[iParam0][func_34(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_57()
{
	return 1;
	return 0;
}

int func_58(char* sParam0)
{
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	func_59(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_59(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	if ((!func_64() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_62(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_60(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1670846.f_5[iVar0] = iParam0;
		Global_1670846.f_5[iVar0].f_1 = iParam2;
		StringCopy(&(Global_1670846.f_5[iVar0].f_8), sParam1, 16);
		Global_1670846.f_5[iVar0].f_2[0] = iParam4;
		Global_1670846.f_5[iVar0].f_2[1] = iParam5;
		Global_1670846.f_5[iVar0].f_2[2] = iParam6;
		Global_1670846.f_5[iVar0].f_7 = iParam7;
		Global_1670846.f_5[iVar0].f_6 = iParam8;
		StringCopy(&(Global_1670846.f_5[iVar0].f_12), sParam3, 64);
		StringCopy(&(Global_1670846.f_5[iVar0].f_28[0]), sParam9, 24);
		StringCopy(&(Global_1670846.f_5[iVar0].f_28[1]), sParam10, 24);
		StringCopy(&(Global_1670846.f_5[iVar0].f_28[2]), sParam11, 24);
	}
}

int func_60(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0].f_1)
		{
			func_61(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1670846++;
	if (Global_1670846 > 5)
	{
		Global_1670846 = 5;
		return Global_1670846;
	}
	return (Global_1670846 - 1);
}

void func_61(int iParam0)
{
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0] = { Global_1670846.f_5[(iVar0 - 1)] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_62(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_63(-1, 0) == 8;
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

int func_63(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_15();
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

bool func_64()
{
	return DLC2::IS_DLC_PRESENT(-1762644250);
}

int func_65(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_66(sParam1));
	if (!iParam4 == 0)
	{
		UI::_SET_NOTIFACTION_COLOR_NEXT(iParam4);
	}
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_66(sParam2));
	if (!iParam4 == 0)
	{
		UI::_SET_NOTIFACTION_COLOR_NEXT(iParam4);
	}
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	func_59(42, sParam0, 1, sParam1, iParam3, 0, 0, 0f, 1, sParam2, 0, 0);
	return iVar0;
}

var func_66(char* sParam0)
{
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_67(&cVar0);
}

var func_67(char[4] cParam0)
{
	return cParam0;
}

void func_68(char* sParam0, char* sParam1, int iParam2, char* sParam3, char* sParam4)
{
	func_69(sParam0, sParam1, iParam2, sParam3, sParam4, "");
}

void func_69(char* sParam0, char* sParam1, var uParam2, char* sParam3, char* sParam4, char* sParam5)
{
	iVar0 = 0;
	if (func_70(iVar0, sParam0, sParam1, uParam2, sParam3, sParam4, sParam5, 0))
	{
		return;
	}
}

int func_70(int iParam0, char* sParam1, char* sParam2, var uParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		return 0;
	}
	if (UI::_0x43E4111189E54F0E(sParam1) > 23)
	{
		return 0;
	}
	if (UI::_0x43E4111189E54F0E(sParam2) > 1)
	{
		return 0;
	}
	if (UI::_0x43E4111189E54F0E(sParam4) > 7)
	{
		return 0;
	}
	if (UI::_0x43E4111189E54F0E(sParam5) > 15)
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		return 0;
	}
	if (iParam7 < 0)
	{
		iParam7 = 0;
	}
	iVar0 = iParam0;
	if (func_74(iVar0))
	{
		return 0;
	}
	func_73(iVar0, 0);
	StringCopy(&(Global_1370527.f_15[iVar0].f_1), sParam1, 24);
	StringCopy(&(Global_1370527.f_15[iVar0].f_7), sParam2, 8);
	Global_1370527.f_15[iVar0].f_9 = uParam3;
	StringCopy(&(Global_1370527.f_15[iVar0].f_10), sParam4, 8);
	StringCopy(&(Global_1370527.f_15[iVar0].f_12), sParam5, 16);
	StringCopy(&(Global_1370527.f_15[iVar0].f_18), sParam6, 24);
	func_72(iVar0, iParam7);
	func_71(iVar0);
	return 1;
}

void func_71(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1370527.f_15[iParam0]), 0);
}

void func_72(int iParam0, int iParam1)
{
	Global_1370527.f_15[iParam0].f_16 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam1);
	Global_1370527.f_15[iParam0].f_17 = 1;
}

void func_73(int iParam0, bool bParam1)
{
	Global_1370527.f_15[iParam0] = 0;
	StringCopy(&(Global_1370527.f_15[iParam0].f_1), "", 24);
	StringCopy(&(Global_1370527.f_15[iParam0].f_7), "", 8);
	Global_1370527.f_15[iParam0].f_9 = 145;
	StringCopy(&(Global_1370527.f_15[iParam0].f_10), "", 8);
	StringCopy(&(Global_1370527.f_15[iParam0].f_12), "", 16);
	StringCopy(&(Global_1370527.f_15[iParam0].f_18), "", 24);
	Global_1370527.f_15[iParam0].f_17 = 0;
	if (bParam1)
	{
		return;
	}
}

bool func_74(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1370527.f_15[iParam0], 1);
}

int func_75(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_66(sParam1));
	if (!iParam3 == 0)
	{
		UI::_SET_NOTIFACTION_COLOR_NEXT(iParam3);
	}
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	if (bParam4)
	{
		Var1 = { func_76(sParam1) };
		iVar0 = UI::_SET_NOTIFICATION_MESSAGE("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &Var1, 0);
	}
	else
	{
		iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	}
	func_59(29, sParam0, 1, sParam1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

struct<16> func_76(char* sParam0)
{
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

int func_77(char* sParam0, char* sParam1, char* sParam2, int iParam3, bool bParam4)
{
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_66(sParam1));
	if (!iParam3 == 0)
	{
		UI::_SET_NOTIFACTION_COLOR_NEXT(iParam3);
	}
	UI::_ADD_TEXT_COMPONENT_SCALEFORM(sParam2);
	if (bParam4)
	{
		Var1 = { func_76(sParam1) };
		iVar0 = UI::_SET_NOTIFICATION_MESSAGE("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &Var1, 0);
	}
	else
	{
		iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	}
	func_59(31, sParam0, 1, sParam2, 0, 0, 0, 0f, 0, sParam1, 0, 0);
	return iVar0;
}

void func_78(char* sParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	switch (iParam2)
	{
		case 3:
			func_80("SC_BTRSCR_SUR", sParam0, sParam4, iParam1, 0, 0);
			break;
		
		case 1:
			switch (iParam3)
			{
				case 0:
				case 3:
					func_80("SC_BTRSCR_DMN", sParam0, sParam4, iParam1, 0, 0);
					break;
				
				case 1:
				case 4:
					func_80("SC_BTRSCR_DMT", sParam0, sParam4, iParam1, 0, 0);
					break;
				
				case 2:
					func_80("SC_BTRSCR_DMV", sParam0, sParam4, iParam1, 0, 0);
					break;
			}
			break;
		
		case 2:
			switch (iParam3)
			{
				case 0:
					func_79("SC_BTRSCR_RACN", sParam0, iParam1, sParam4, 0);
					break;
				
				case 1:
					func_79("SC_BTRSCR_RACG", sParam0, iParam1, sParam4, 0);
					break;
				
				case 2:
					func_79("SC_BTRSCR_RACR", sParam0, iParam1, sParam4, 0);
					break;
				
				case 3:
					func_79("SC_BTRSCR_RACN", sParam0, iParam1, sParam4, 0);
					break;
			}
			break;
		
		case 8:
			func_79("SC_BTRSCR_BJP", sParam0, iParam1, sParam4, 0);
			break;
		
		case 0:
			func_80("SC_BTRSCR_SUR", sParam0, sParam4, iParam1, 0, 0);
			break;
	}
}

int func_79(char* sParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4)
{
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_66(sParam1));
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 7);
	if (bParam4)
	{
		Var1 = { func_76(sParam1) };
		iVar0 = UI::_SET_NOTIFICATION_MESSAGE("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &Var1, 0);
	}
	else
	{
		iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	}
	func_59(18, sParam0, 1, sParam1, iParam2, 0, 0, 0f, 0, sParam3, 0, 0);
	return iVar0;
}

int func_80(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_66(sParam1));
	if (!iParam4 == 0)
	{
		UI::_SET_NOTIFACTION_COLOR_NEXT(iParam4);
	}
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	if (bParam5)
	{
		Var1 = { func_76(sParam1) };
		iVar0 = UI::_SET_NOTIFICATION_MESSAGE("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &Var1, 0);
	}
	else
	{
		iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	}
	func_59(30, sParam0, 1, sParam1, iParam3, 0, 0, 0f, 0, sParam2, 0, 0);
	return iVar0;
}

int func_81(var uParam0, var uParam1, char* sParam2, int iParam3)
{
	switch (uParam0->f_4)
	{
		case 0:
			*uParam0 = 0;
			if (func_98())
			{
				return 0;
			}
			func_94();
			func_93();
			if (func_92())
			{
				*uParam0 = 0;
				return 1;
			}
			else
			{
				NETWORK::_0xF98DDE0A8ED09323(0);
			}
			func_91(uParam0, 1);
			break;
		
		case 1:
			if (NETWORK::SET_BALANCE_ADD_MACHINE(uParam1, func_90(0)))
			{
				func_91(uParam0, 3);
			}
			break;
		
		case 3:
			if (NETWORK::_0x02ADA21EA2F6918F())
			{
				uParam0->f_41 = NETWORK::_0xEDF7F927136C224B();
				if (NETWORK::_0x941E5306BCD7C2C7())
				{
				}
				else
				{
					func_89(uParam0, 1, 1);
					uParam0->f_41 = NETWORK::_0xEDF7F927136C224B();
					*uParam0 = 0;
					return 1;
				}
				if (NETWORK::_0xE0A6138401BCB837() > 0)
				{
					if (DATAFILE::_0xA69AC4ADE82B57A4(0))
					{
						func_82(sParam2, 0, iParam3);
						func_89(uParam0, 1, 1);
						*uParam0 = 1;
						return 1;
					}
				}
				else
				{
					func_89(uParam0, 1, 1);
					*uParam0 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_82(char* sParam0, int iParam1, var uParam2)
{
	iVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
	iVar1 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iVar0, "mission");
	iVar2 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iVar1, "gen");
	StringCopy(sParam0, NETWORK::_GET_CONTENT_ID(iParam1), 24);
	StringCopy(&(sParam0->f_6), NETWORK::_GET_CONTENT_USER_ID(iParam1), 64);
	StringCopy(&(sParam0->f_22), NETWORK::_0xBF09786A7FCAB582(iParam1), 64);
	sParam0->f_56 = { func_88(iVar2) };
	sParam0->f_59 = { func_87(iVar2, "cam") };
	sParam0->f_62 = { func_86(iVar2) };
	sParam0->f_65 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "type");
	sParam0->f_68 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "subtype");
	sParam0->f_80 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "adverm");
	sParam0->f_79 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "testcomplete");
	sParam0->f_69 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "min");
	sParam0->f_70 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "rank");
	sParam0->f_71 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "num");
	sParam0->f_73 = func_85(NETWORK::_0x1ACCFBA3D8DAB2EE(iParam1, 0), NETWORK::_0x759299C5BB31D2A9(iParam1, 0));
	sParam0->f_74 = 0;
	sParam0->f_75 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "charcon");
	*uParam2 = GAMEPLAY::GET_HASH_KEY(NETWORK::_GET_ROOT_CONTENT_ID(0));
	if (func_84(*uParam2))
	{
		sParam0->f_68 = 8;
	}
	if (func_83() != 2)
	{
		if (sParam0->f_71 > Global_262145.f_4578)
		{
			sParam0->f_71 = Global_262145.f_4578;
		}
		if (sParam0->f_69 > Global_262145.f_4578)
		{
			sParam0->f_69 = Global_262145.f_4578;
		}
	}
	if (!func_92())
	{
		uVar3 = NETWORK::_0x32DD916F3F7C9672(iParam1);
		if (NETWORK::_0xF53E48461B71EECB(uVar3))
		{
			sParam0->f_54 = NETWORK::_GET_CONTENT_DESCRIPTION_HASH(iParam1);
		}
		else
		{
			sParam0->f_54 = -1;
		}
	}
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar2, "ltm") == 2)
	{
		sParam0->f_78 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "ltm");
	}
	GAMEPLAY::SET_BIT(&(sParam0->f_76), 13);
	func_93();
}

int func_83()
{
	return Global_30768;
}

int func_84(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_9027[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_85(float fParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return -1;
	}
	iVar0 = SYSTEM::ROUND((fParam0 * 100f));
	if (iVar0 < 0)
	{
		iVar0 = -1;
	}
	return iVar0;
}

Vector3 func_86(int iParam0)
{
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "camp") == 3)
	{
		Var0.x = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iParam0, "camp");
	}
	else if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "camp") == 2)
	{
		Var0.x = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(iParam0, "camp"));
	}
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "camh") == 3)
	{
		Var0.z = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iParam0, "camh");
	}
	else if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "camh") == 2)
	{
		Var0.z = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(iParam0, "camh"));
	}
	return Var0;
}

Vector3 func_87(int iParam0, char* sParam1)
{
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, sParam1) == 5)
	{
		Var0 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iParam0, sParam1) };
	}
	else if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, sParam1) == 6)
	{
		uVar3 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, sParam1);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(uVar3, "x") == 2)
		{
			Var0.x = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar3, "x"));
		}
		else
		{
			Var0.x = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar3, "x");
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar3, "y") == 2)
		{
			Var0.y = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar3, "y"));
		}
		else
		{
			Var0.y = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar3, "y");
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar3, "z") == 2)
		{
			Var0.z = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar3, "z"));
		}
		else
		{
			Var0.z = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar3, "z");
		}
	}
	return Var0;
}

Vector3 func_88(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0f, 0f, 0f;
	}
	Var0 = { func_87(iParam0, "start") };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -2233.327f, 2436.134f, -14.65155f, -2229.56f, 2399.576f, 11.99761f, 24f, 0, 1))
	{
		Var0 = { -2303.54f, 2428.09f, 2.02f };
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 603.6218f, 5573.046f, 694.484f, 594.2379f, 5542.792f, 727.479f, 33.5f, 0, 1))
	{
		Var0 = { 502.6f, 5537.06f, 777.05f };
	}
	return Var0;
}

void func_89(var uParam0, bool bParam1, bool bParam2)
{
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_12 = 0;
	uParam0->f_32 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_17 = 1;
	uParam0->f_17 = 1;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	uParam0->f_21 = -1;
	uParam0->f_3 = 0;
	uParam0->f_28 = 0;
	uParam0->f_29 = 0;
	uParam0->f_30 = 0;
	Global_1573299[0] = 0;
	Global_1573299[1] = 0;
	uParam0->f_41 = 0;
	if (bParam2)
	{
		uParam0->f_42 = { Var0 };
	}
	if (bParam1)
	{
		func_91(uParam0, 0);
	}
}

char* func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "gta5mission";
		
		case 1:
			return "playlist";
		
		case 2:
			return "lifeinvaderpost";
		
		case 3:
			return "photo";
		
		case 4:
			return "challenge";
		
		default:
	}
	return "gta5mission";
}

void func_91(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

bool func_92()
{
	return Global_1573282.f_4;
}

void func_93()
{
	if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
	{
		DATAFILE::DATAFILE_DELETE();
	}
}

void func_94()
{
	if (func_92())
	{
		NETWORK::_0x61A885D3F7CFEE9A();
	}
	else
	{
		NETWORK::_0xBA96394A0EECFA65();
	}
}

bool func_95()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632.f_2, 11);
}

int func_96(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_97())
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2425662[iParam0].f_310.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_97()
{
	return -1;
}

int func_98()
{
	if (NETWORK::_0x9FEDF86898F100E9())
	{
		return 1;
	}
	else if (NETWORK::_0xD53ACDBEF24A46E8())
	{
		return 1;
	}
	else if (NETWORK::_0x45E816772E93A9DB())
	{
		return 1;
	}
	return 0;
}

bool func_99(int iParam0)
{
	return func_100(iParam0);
}

bool func_100(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_13.f_1, 0);
}

int func_101()
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_104())
	{
		return 1;
	}
	if (func_103())
	{
		return 1;
	}
	return func_102(120, -1);
}

int func_102(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_34(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_103()
{
	return Global_1312865;
}

bool func_104()
{
	return Global_1312867;
}

int func_105()
{
	if ((!Global_2394836 && !Global_2394836.f_1) && !Global_2394836.f_2)
	{
		return 0;
	}
	if (!Global_2394836.f_23)
	{
		return 1;
	}
	return 0;
}

bool func_106()
{
	return Global_1310987.f_5;
}

bool func_107()
{
	return Global_1590535[PLAYER::PLAYER_ID()].f_35;
}

bool func_108()
{
	return Global_2450632.f_606;
}

bool func_109()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632, 21);
}

bool func_110()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632, 19);
}

bool func_111()
{
	return Global_2458936.f_1;
}

bool func_112()
{
	return Global_2450632.f_591;
}

int func_113()
{
	return Global_1590535[PLAYER::PLAYER_ID()].f_196;
}

var func_114(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_115(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_115(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	uVar0 = func_116(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_116(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	if (func_159(PLAYER::PLAYER_ID()) || func_158(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9635 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9635;
		}
	}
	else if (func_155() || func_151(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22774 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22774;
		}
	}
	else if (Global_262145.f_6635 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6635;
	}
	if (func_150(uParam2))
	{
	}
	if (func_149())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_147(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_146(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_143(0, &iVar1);
					break;
				
				case 3:
					func_143(1, &iVar1);
					break;
				
				case 1:
					func_139(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1686714)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_137(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_127((func_136(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590535[PLAYER::PLAYER_ID()].f_39.f_2 != -1)
				{
					func_137(1165, iVar1, -1);
				}
				func_121(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_117((func_119(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_117((func_119(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_117(int iParam0)
{
	if (func_149())
	{
		Global_1590535[PLAYER::PLAYER_ID()].f_211.f_5 = iParam0;
		func_118(-1804740956, iParam0);
	}
}

void func_118(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_119(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_160(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_120(-1804740956);
			}
			else
			{
				return Global_1590535[iParam0].f_211.f_5;
			}
		}
		else
		{
			return func_120(-1804740956);
		}
	}
	return 0;
}

int func_120(int iParam0)
{
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_121(int iParam0)
{
	Var0 = { func_126(PLAYER::PLAYER_ID()) };
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_124(func_125(&Var0));
			if (iVar13 == 0)
			{
				func_123(&Global_1387915, iParam0);
				func_122(-1446982891, Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_123(&Global_1387916, iParam0);
				func_122(-1676857426, Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_123(&Global_1387917, iParam0);
				func_122(1280806976, Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_123(&Global_1387918, iParam0);
				func_122(-1096682281, Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_123(&Global_1387919, iParam0);
				func_122(1894078811, Global_1387919);
			}
		}
	}
}

void func_122(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case 406381289:
			Global_1387910 = iParam1;
			break;
		
		case 1669900865:
			Global_1387912 = iParam1;
			break;
		
		case 54164875:
			Global_1387912 = iParam1;
			break;
		
		case -842450336:
			Global_1387913 = iParam1;
			break;
		
		case -1576871964:
			Global_1387914 = iParam1;
			break;
		
		case -1446982891:
			Global_1387915 = iParam1;
			break;
		
		case -1676857426:
			Global_1387916 = iParam1;
			break;
		
		case 1280806976:
			Global_1387917 = iParam1;
			break;
		
		case -1096682281:
			Global_1387918 = iParam1;
			break;
		
		case 1894078811:
			Global_1387919 = iParam1;
			break;
		
		case -1566025259:
			Global_1387920 = iParam1;
			break;
		
		case -621080327:
			Global_1387921 = iParam1;
			break;
		
		case 1021002722:
			Global_1387922 = iParam1;
			break;
		
		case -1670771646:
			Global_1387923 = iParam1;
			break;
		
		case -1992420464:
			Global_1387924 = iParam1;
			break;
		
		case -386175531:
			Global_1387925 = iParam1;
			break;
		
		case -203536263:
			Global_1387926 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_123(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_124(int iParam0)
{
	if (iParam0 == Global_1387910)
	{
		return 0;
	}
	else if (iParam0 == Global_1387911)
	{
		return 1;
	}
	else if (iParam0 == Global_1387912)
	{
		return 2;
	}
	else if (iParam0 == Global_1387913)
	{
		return 3;
	}
	else if (iParam0 == Global_1387914)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_125(var uParam0)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2460605;
		}
	}
	return Global_2460605;
}

struct<13> func_126(int iParam0)
{
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_127(int iParam0, int iParam1, int iParam2)
{
	if (func_149())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_34(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_34(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_135(PLAYER::PLAYER_ID()))
		{
			Global_1590535[PLAYER::PLAYER_ID()].f_211.f_1 = iParam0;
			Global_1590535[PLAYER::PLAYER_ID()].f_211.f_6 = func_133(iParam0, 1);
		}
		func_132(639, iParam0, -1, 1);
		func_131(640, func_133(iParam0, 1), -1, 1, 0);
		Global_1388060[func_34(-1)] = iParam0;
		func_128(-1109644434, 7, 0);
	}
}

void func_128(int iParam0, int iParam1, int iParam2)
{
	if (func_130(iParam1, iParam2))
	{
		iVar0 = func_129();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_129()
{
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2460557[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_130(int iParam0, var uParam1)
{
	if (Global_1312865)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312877) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_34(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_132(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = Global_2548434[iParam0][func_34(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_34(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_34(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_34(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_34(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_34(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_34(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_34(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_34(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_34(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_34(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_34(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_34(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_34(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_34(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_34(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_34(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_34(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_34(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_34(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_34(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_34(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_34(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_34(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_34(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0][func_34(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1][func_34(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2][func_34(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3][func_34(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_34(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_34(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_34(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_34(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_34(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_34(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0][func_34(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1][func_34(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2][func_34(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3][func_34(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4][func_34(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0][func_34(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1][func_34(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2][func_34(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3][func_34(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4][func_34(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0][func_34(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1][func_34(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2][func_34(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3][func_34(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4][func_34(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5][func_34(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4][func_34(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_34(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_34(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_34(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_34(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_34(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_34(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_34(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6][func_34(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5][func_34(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7][func_34(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6][func_34(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8][func_34(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7][func_34(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9][func_34(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8][func_34(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10][func_34(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9][func_34(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11][func_34(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10][func_34(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12][func_34(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11][func_34(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13][func_34(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12][func_34(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14][func_34(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13][func_34(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15][func_34(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14][func_34(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16][func_34(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15][func_34(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17][func_34(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16][func_34(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17][func_34(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18][func_34(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19][func_34(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20][func_34(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_34(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_34(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_34(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_34(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_34(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_34(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_34(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_34(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_34(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_34(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_34(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_34(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_34(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_34(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21][func_34(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23][func_34(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22][func_34(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24][func_34(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23][func_34(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_133(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_134(iParam0, 0);
}

int func_134(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_291133[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_291133[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_135(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_2439138.f_1, iParam0);
	}
	return 1;
}

int func_136(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1388060[func_34(-1)];
			}
			else if (func_135(iParam0))
			{
				return Global_1590535[iParam0].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_34(-1)];
	}
	return 0;
}

void func_137(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_51(iParam0, func_34(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_138(iParam0))
	{
		func_131(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_132(iParam0, iVar0, iParam2, 1);
	}
}

int func_138(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8726:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8728:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8730:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8732:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8731:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 10016:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
			case 8975:
			case 8977:
			case 8978:
			case 8980:
				return 1;
				break;
			}
	}
	return 0;
}

void func_139(int iParam0)
{
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_142(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_141(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_140(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_140(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_140(int iParam0, int iParam1)
{
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_141(int iParam0, int iParam1)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2513218 = { func_126(iParam0) };
		Global_2513231 = { func_126(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2513218))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2513231))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513148, 35, &Global_2513218);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513183, 35, &Global_2513231);
				if (Global_2513148 == Global_2513183)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_142(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 0);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 1);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 2);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 4);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 5);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 6);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 8);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 9);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 10);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 12);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 13);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 14);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_143(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_160(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_141(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_160(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_144(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_141(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_140(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_140(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_144(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_145(iParam0), func_145(iParam1));
	return 0f;
}

Vector3 func_145(var uParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

int func_146(int iParam0)
{
	if (CONTROLS::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_140(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_147(int iParam0)
{
	if (iParam0 < 0)
	{
		if (GAMEPLAY::ABSI(iParam0) > func_136(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_136(PLAYER::PLAYER_ID());
		}
	}
	if (func_148(8000, 0, 0) > 0)
	{
		if (func_148(8000, 0, 0) < (iParam0 + func_136(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_148(8000, 0, 0) - func_136(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_148(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_291133[iParam0];
}

int func_149()
{
	return 1;
}

int func_150(var uParam0)
{
	if (GAMEPLAY::IS_STRING_NULL(uParam0))
	{
		return 1;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "") || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_151(int iParam0)
{
	return func_152(func_153(iParam0));
}

int func_152(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_153(int iParam0)
{
	if (func_154(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_154(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_155()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_157();
	}
	return func_156(Global_4456448.f_194990);
}

int func_156(int iParam0)
{
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

var func_157()
{
	return Global_2450632.f_17;
}

bool func_158(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

bool func_159(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

int func_160(int iParam0, bool bParam1, bool bParam2)
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

int func_161()
{
	if (func_163() && func_162(0))
	{
		return 1;
	}
	return 0;
}

var func_162(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_163()
{
	return func_162(func_15() + 1);
}

void func_164(int iParam0, int iParam1)
{
	iVar0 = 0;
	iVar1 = 0;
	StringCopy(&Global_2461954, "", 64);
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_INT(iParam0, "awardAmount", &iVar2);
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iParam0, "awardType", &uVar3);
	iVar19 = SOCIALCLUB::_SC_INBOX_MESSAGE_GET_DATA_BOOL(iParam0, "fullRefresh");
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iParam0, "awardLabel", &Global_2461954);
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iParam0, "items", &uVar20);
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_INT(iParam0, "userScreen", &iVar36);
	SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iParam0);
	if (iVar2 != 0)
	{
		if (iVar2 == -99)
		{
			Global_2461936 = -99;
			Global_2461935 = iVar2;
		}
		else if (iVar2 < 0)
		{
			Global_2461936 = -1;
			Global_2461935 = iVar2;
		}
		else if (iVar2 > 0)
		{
			Global_2461936 = 1;
			Global_2461935 = iVar2;
		}
		iVar1 = 1;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(&uVar20, "[]") == 0)
	{
		Global_2461972 = 1;
	}
	if (iVar36 > 0)
	{
		Global_2461973 = iVar36;
	}
	if (iParam1 == 0)
	{
		if (func_83() == 0)
		{
			if (iVar19 == 1)
			{
				UNK3::_0x897433D292B44130(&iVar37, &uVar38);
				if (iVar37 == 8)
				{
					UNK3::_0x35A1B3E1D1315CFA(iVar0, iVar1);
				}
			}
		}
	}
}

int func_165(int iParam0)
{
	if (iParam0 == -877581966)
	{
		return 1;
	}
	if (iParam0 == 1988401830)
	{
		return 1;
	}
	return 0;
}

void func_166()
{
	Global_111579 = GAMEPLAY::GET_GAME_TIMER();
	if ((Global_111579 - Global_111580) > Global_111385)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_111573[iVar0] == 1)
			{
				Global_111581 = (Global_111581 - 1);
				if (Global_111581 < 0)
				{
					Global_111581 = 0;
				}
				Global_111573[iVar0] = 0;
				func_167(Global_111386[iVar0], Global_111567[iVar0]);
				iVar0 = 5;
				Global_111580 = GAMEPLAY::GET_GAME_TIMER();
			}
			iVar0++;
		}
	}
}

void func_167(struct<36> Param0, int iParam36)
{
	iParam36 = func_174(Param0);
	if (iParam36 != -1)
	{
		if (GAMEPLAY::GET_PROFILE_SETTING(803) == 1)
		{
			if (func_53())
			{
				func_170(Param0, iParam36);
			}
		}
	}
	else
	{
		switch (Param0)
		{
			case 1215094015:
				if (GAMEPLAY::GET_PROFILE_SETTING(803) == 1)
				{
					if (func_53())
					{
						UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_FEED_F100PC_COMP");
						StringCopy(&cVar0, "<C>", 64);
						StringConCat(&cVar0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
						StringConCat(&cVar0, &(Param0.f_1), 64);
						StringConCat(&cVar0, "...", 64);
						StringConCat(&cVar0, "</C>", 64);
						UI::_SET_NOTIFICATION_MESSAGE("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &cVar0, 0);
						Global_111580 = GAMEPLAY::GET_GAME_TIMER();
					}
				}
				break;
			
			case -370389551:
				if (Param0.f_17 == 200)
				{
					Global_111579 = GAMEPLAY::GET_GAME_TIMER();
					if ((Global_111579 - Global_111580) > Global_111385)
					{
						if (GAMEPLAY::GET_PROFILE_SETTING(803) == 1)
						{
							if (func_53())
							{
								UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_FEED_DRIVEN_ALL_VEH");
								StringCopy(&cVar16, "<C>", 64);
								StringConCat(&cVar16, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
								StringConCat(&cVar16, &(Param0.f_1), 64);
								StringConCat(&cVar16, "...", 64);
								StringConCat(&cVar16, "</C>", 64);
								UI::_SET_NOTIFICATION_MESSAGE("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &cVar16, 0);
								Global_111580 = GAMEPLAY::GET_GAME_TIMER();
							}
						}
					}
					else
					{
						func_169(Param0, -1);
					}
				}
				break;
			
			case -2122623864:
				Global_111579 = GAMEPLAY::GET_GAME_TIMER();
				if ((Global_111579 - Global_111580) > Global_111385)
				{
					if (GAMEPLAY::GET_PROFILE_SETTING(803) == 1)
					{
						if (func_53())
						{
							UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_FEED_RNDEV_COMP");
							StringCopy(&cVar32, "<C>", 64);
							StringConCat(&cVar32, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
							StringConCat(&cVar32, &(Param0.f_1), 64);
							StringConCat(&cVar32, "...", 64);
							StringConCat(&cVar32, "</C>", 64);
							UI::_SET_NOTIFICATION_MESSAGE("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &cVar32, 0);
							Global_111580 = GAMEPLAY::GET_GAME_TIMER();
						}
					}
				}
				else
				{
					func_169(Param0, -1);
				}
				break;
			
			case -2044299740:
				if (Param0.f_17 == 50)
				{
					func_168(Param0, "CELL_FEED_LETTER_SCRAPS");
				}
				break;
			
			case 86701099:
				if (Param0.f_17 == 50)
				{
					func_168(Param0, "CELL_FEED_SPACESHIP_PARTS");
				}
				break;
			
			case -375571184:
				if (Param0.f_17 == 50)
				{
					func_168(Param0, "CELL_FEED_SONAR_COLL");
				}
				break;
			
			case -1396655885:
				if (Param0.f_18 == 500f)
				{
					func_168(Param0, "CELL_FEED_DRIVEN_500");
				}
				if (Param0.f_18 == 5000f)
				{
					func_168(Param0, "CELL_FEED_DRIVEN_5000");
				}
				if (Param0.f_18 == 50000f)
				{
					func_168(Param0, "CELL_FEED_DRIVEN_50000");
				}
				break;
			
			case -1060082655:
				if (Param0.f_18 == 500f)
				{
					func_168(Param0, "CELL_FEED_FLOWN_500");
				}
				if (Param0.f_18 == 5000f)
				{
					func_168(Param0, "CELL_FEED_FLOWN_5000");
				}
				if (Param0.f_18 == 50000f)
				{
					func_168(Param0, "CELL_FEED_FLOWN_50000");
				}
				break;
			
			case -1572521718:
				if (Param0.f_18 == 50f)
				{
					func_168(Param0, "CELL_FEED_RAN_50");
				}
				if (Param0.f_18 == 100f)
				{
					func_168(Param0, "CELL_FEED_RAN_100");
				}
				if (Param0.f_18 == 1000f)
				{
					func_168(Param0, "CELL_FEED_RAN_1000");
				}
				break;
			
			case 1159456811:
				if (Param0.f_18 == 50f)
				{
					func_168(Param0, "CELL_FEED_SWAM_50");
				}
				if (Param0.f_18 == 100f)
				{
					func_168(Param0, "CELL_FEED_SWAM_100");
				}
				if (Param0.f_18 == 1000f)
				{
					func_168(Param0, "CELL_FEED_SWAM_1000");
				}
				break;
			
			case 1342605706:
				if (Param0.f_17 == 10)
				{
					func_168(Param0, "CELL_FEED_BUSTED_10");
				}
				if (Param0.f_17 == 25)
				{
					func_168(Param0, "CELL_FEED_BUSTED_25");
				}
				if (Param0.f_17 == 50)
				{
					func_168(Param0, "CELL_FEED_BUSTED_50");
				}
				if (Param0.f_17 == 100)
				{
					func_168(Param0, "CELL_FEED_BUSTED_100");
				}
				if (Param0.f_17 == 250)
				{
					func_168(Param0, "CELL_FEED_BUSTED_250");
				}
				break;
			
			case -1442808891:
				if (Param0.f_17 == 10)
				{
					func_168(Param0, "CELL_FEED_WASTED_10");
				}
				if (Param0.f_17 == 25)
				{
					func_168(Param0, "CELL_FEED_WASTED_25");
				}
				if (Param0.f_17 == 50)
				{
					func_168(Param0, "CELL_FEED_WASTED_50");
				}
				if (Param0.f_17 == 100)
				{
					func_168(Param0, "CELL_FEED_WASTED_100");
				}
				if (Param0.f_17 == 250)
				{
					func_168(Param0, "CELL_FEED_WASTED_250");
				}
				break;
			
			case -669750575:
				if (Param0.f_17 == 1000000)
				{
					func_168(Param0, "CELL_FEED_SHOTS_1ML");
				}
				if (Param0.f_17 == 2000000)
				{
					func_168(Param0, "CELL_FEED_SHOTS_2ML");
				}
				if (Param0.f_17 == 3000000)
				{
					func_168(Param0, "CELL_FEED_SHOTS_3ML");
				}
				if (Param0.f_17 == 4000000)
				{
					func_168(Param0, "CELL_FEED_SHOTS_4ML");
				}
				if (Param0.f_17 == 5000000)
				{
					func_168(Param0, "CELL_FEED_SHOTS_5ML");
				}
				break;
			
			case -1561446148:
				if (Param0.f_17 == 5)
				{
					func_168(Param0, "CELL_FEED_5STARS_WL");
				}
				break;
			
			case -750967068:
				if (Param0.f_17 == 10)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10189.f_3856, 0))
					{
						func_168(Param0, "CELL_FEED_WEB_CAR");
						GAMEPLAY::SET_BIT(&(Global_111638.f_10189.f_3856), 0);
					}
				}
				if (Param0.f_17 == 20)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10189.f_3856, 1))
					{
						func_168(Param0, "CELL_FEED_WEB_RHINO");
						GAMEPLAY::SET_BIT(&(Global_111638.f_10189.f_3856), 1);
					}
				}
				if (Param0.f_17 == 30)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10189.f_3856, 2))
					{
						func_168(Param0, "CELL_FEED_WEB_BUZZARD");
						GAMEPLAY::SET_BIT(&(Global_111638.f_10189.f_3856), 2);
					}
				}
				break;
			
			case -1902257903:
				if (Param0.f_17 == 10)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10189.f_3856, 3))
					{
						func_168(Param0, "CELL_FEED_STOCK_INV");
						GAMEPLAY::SET_BIT(&(Global_111638.f_10189.f_3856), 3);
					}
				}
				if (Param0.f_17 == 20)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10189.f_3856, 4))
					{
						func_168(Param0, "CELL_FEED_STOCK_WIN");
						GAMEPLAY::SET_BIT(&(Global_111638.f_10189.f_3856), 4);
					}
				}
				if (Param0.f_17 == 30)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10189.f_3856, 5))
					{
						func_168(Param0, "CELL_FEED_STOCK_LOSS");
						GAMEPLAY::SET_BIT(&(Global_111638.f_10189.f_3856), 5);
					}
				}
				break;
			
			case -381761104:
				if (Param0.f_17 == 25)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10189.f_3856, 10))
					{
						func_168(Param0, "CELL_FEED_STNJ_25");
						GAMEPLAY::SET_BIT(&(Global_111638.f_10189.f_3856), 10);
					}
				}
				if (Param0.f_17 == 50)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10189.f_3856, 11))
					{
						func_168(Param0, "CELL_FEED_STNJ_50");
						GAMEPLAY::SET_BIT(&(Global_111638.f_10189.f_3856), 11);
					}
				}
				if (Param0.f_17 == 75)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10189.f_3856, 12))
					{
						func_168(Param0, "CELL_FEED_STNJ_75");
						GAMEPLAY::SET_BIT(&(Global_111638.f_10189.f_3856), 12);
					}
				}
				if (Param0.f_17 == 100)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10189.f_3856, 13))
					{
						func_168(Param0, "CELL_FEED_STNJ_100");
						GAMEPLAY::SET_BIT(&(Global_111638.f_10189.f_3856), 13);
					}
				}
				break;
			
			case 1488317176:
				if (Param0.f_17 == 25)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10189.f_3856, 6))
					{
						func_168(Param0, "CELL_FEED_UTB_25");
						GAMEPLAY::SET_BIT(&(Global_111638.f_10189.f_3856), 6);
					}
				}
				if (Param0.f_17 == 50)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10189.f_3856, 7))
					{
						func_168(Param0, "CELL_FEED_UTB_50");
						GAMEPLAY::SET_BIT(&(Global_111638.f_10189.f_3856), 7);
					}
				}
				if (Param0.f_17 == 75)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10189.f_3856, 8))
					{
						func_168(Param0, "CELL_FEED_UTB_75");
						GAMEPLAY::SET_BIT(&(Global_111638.f_10189.f_3856), 8);
					}
				}
				if (Param0.f_17 == 100)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10189.f_3856, 9))
					{
						func_168(Param0, "CELL_FEED_UTB_100");
						GAMEPLAY::SET_BIT(&(Global_111638.f_10189.f_3856), 9);
					}
				}
				break;
			}
	}
}

void func_168(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, char* sParam36)
{
	if (GAMEPLAY::GET_PROFILE_SETTING(803) == 1)
	{
		if (func_53())
		{
			Global_111579 = GAMEPLAY::GET_GAME_TIMER();
			if ((Global_111579 - Global_111580) > Global_111385)
			{
				UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam36);
				StringCopy(&cVar0, "<C>", 64);
				StringConCat(&cVar0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar0, &(Param0.f_1), 64);
				StringConCat(&cVar0, "...", 64);
				StringConCat(&cVar0, "</C>", 64);
				UI::_SET_NOTIFICATION_MESSAGE("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &cVar0, 0);
				Global_111580 = GAMEPLAY::GET_GAME_TIMER();
			}
		}
	}
}

void func_169(struct<36> Param0, int iParam36)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_111573[iVar0] == 0)
		{
			Global_111386[iVar0] = { Param0 };
			Global_111567[iVar0] = iParam36;
			Global_111573[iVar0] = 1;
			Global_111581++;
			if (Global_111581 > 5)
			{
				Global_111581 = 5;
			}
			iVar0 = 5;
		}
		iVar0++;
	}
}

void func_170(struct<36> Param0, int iParam36)
{
	if (func_53())
	{
		MemCopy(&uVar1, {func_173(iParam36)}, 16);
		StringCopy(&cVar17, "NO_BLURB_REQ", 24);
		switch (iParam36)
		{
			case 53:
				StringCopy(&cVar17, "CELL_F_PROLOGUE", 24);
				break;
			
			case 44:
				StringCopy(&cVar17, "CELL_F_LESTER1", 24);
				break;
			
			case 20:
				StringCopy(&cVar17, "CELL_F_FAMILY4", 24);
				break;
			
			case 75:
				StringCopy(&cVar17, "CELL_F_DOCKH2B", 24);
				break;
			
			case 38:
				StringCopy(&cVar17, "CELL_F_FIB4", 24);
				break;
			
			case 93:
				StringCopy(&cVar17, "CELL_F_RURALH2", 24);
				break;
			
			case 69:
				StringCopy(&cVar17, "CELL_F_AGENCYH3A", 24);
				break;
			
			case 70:
				StringCopy(&cVar17, "CELL_F_AGENCYH3B", 24);
				break;
			
			case 47:
				StringCopy(&cVar17, "CELL_F_MICHAEL2", 24);
				break;
			
			case 42:
				StringCopy(&cVar17, "CELL_F_FRANKLIN2", 24);
				break;
			
			case 84:
				StringCopy(&cVar17, "CELL_F_FINALEH2A", 24);
				break;
			
			case 85:
				StringCopy(&cVar17, "CELL_F_FINALEH2B", 24);
				break;
			
			case 24:
				StringCopy(&cVar17, "CELL_F_ENDCHOICE", 24);
				break;
			
			case 25:
				StringCopy(&cVar17, "CELL_F_ENDCHOICE", 24);
				break;
			
			case 27:
				StringCopy(&cVar17, "CELL_F_ENDCHOICE", 24);
				break;
		}
		Global_111579 = GAMEPLAY::GET_GAME_TIMER();
		if ((Global_111579 - Global_111580) > Global_111385)
		{
			if (!GAMEPLAY::ARE_STRINGS_EQUAL(&cVar17, "NO_BLURB_REQ"))
			{
				UI::_SET_NOTIFICATION_TEXT_ENTRY(&cVar17);
				StringCopy(&cVar23, "<C>", 64);
				StringConCat(&cVar23, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar23, &(Param0.f_1), 64);
				StringConCat(&cVar23, "...", 64);
				StringConCat(&cVar23, "</C>", 64);
				UI::_SET_NOTIFICATION_MESSAGE("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &cVar23, 0);
			}
			else if (func_172(iParam36))
			{
				iVar0 = func_171(iParam36);
				if (Param0.f_17 > iVar0)
				{
					UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_FEED_BEAT_MIS_SCORE");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&uVar1);
					StringCopy(&cVar39, "<C>", 64);
					StringConCat(&cVar39, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
					StringConCat(&cVar39, &(Param0.f_1), 64);
					StringConCat(&cVar39, "...", 64);
					StringConCat(&cVar39, "</C>", 64);
					UI::_SET_NOTIFICATION_MESSAGE("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &cVar39, 0);
				}
			}
			Global_111580 = GAMEPLAY::GET_GAME_TIMER();
		}
		else
		{
			func_169(Param0, iParam36);
		}
	}
}

var func_171(int iParam0)
{
	return Global_111638.f_9080.f_330[iParam0].f_4;
}

int func_172(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0];
}

struct<2> func_173(int iParam0)
{
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_89532[iParam0].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_111638.f_9080.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

int func_174(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 94)
	{
		iVar1 = iVar0;
		if (!GAMEPLAY::IS_BIT_SET(Global_89532[iVar1].f_15, 6))
		{
			if (func_175(iVar1) == iParam0)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_175(int iParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(Global_89532[iParam0].f_15, 7))
	{
		StringCopy(&cVar0, "FL_CO_", 16);
		StringConCat(&cVar0, &(Global_89532[iParam0].f_8), 16);
		if (iParam0 == 90)
		{
			if (Global_111638.f_9080.f_99.f_205[7] == 2)
			{
				StringConCat(&cVar0, "B", 16);
			}
			else
			{
				StringConCat(&cVar0, "A", 16);
			}
		}
		return GAMEPLAY::GET_HASH_KEY(&cVar0);
	}
	return -131107923;
}

void func_176(var uParam0, bool bParam1)
{
	if (!func_53())
	{
		return;
	}
	if (!bParam1)
	{
		return;
	}
	if (GAMEPLAY::GET_PROFILE_SETTING(803) == 1 && uParam0->f_166 == 0)
	{
		uParam0->f_166 = 1;
	}
	else
	{
		if (GAMEPLAY::GET_PROFILE_SETTING(803) != 1)
		{
		}
		if (uParam0->f_166 == 1)
		{
		}
	}
}

void func_177(int iParam0, var uParam1, bool bParam2)
{
	if (!func_53() || !func_52())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 2))
	{
		if (!bParam2)
		{
			return;
		}
		if (GAMEPLAY::GET_PROFILE_SETTING(803) == 1 && uParam1->f_166 == 0)
		{
			if (Var0.f_1)
			{
				UI::_SET_NOTIFICATION_TEXT_ENTRY("CREWKICK_TA");
				UI::_DRAW_NOTIFICATION_4(0, 1);
			}
			else
			{
				UI::_SET_NOTIFICATION_TEXT_ENTRY("CREWKICK_TI");
				UI::_DRAW_NOTIFICATION_4(0, 1);
			}
		}
	}
}

void func_178(int iParam0, var uParam1, bool bParam2)
{
	if (!func_53() || !func_52())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 2))
	{
		if (!bParam2)
		{
			return;
		}
		if (GAMEPLAY::GET_PROFILE_SETTING(803) == 1 && uParam1->f_166 == 0)
		{
			if (Var0.f_1)
			{
				UI::_SET_NOTIFICATION_TEXT_ENTRY("CREWLEFT_TA");
				UI::_DRAW_NOTIFICATION(0, 1);
			}
			else
			{
				UI::_SET_NOTIFICATION_TEXT_ENTRY("CREWLEFT_TA");
				UI::_DRAW_NOTIFICATION(0, 1);
			}
		}
	}
}

void func_179(int iParam0, var uParam1, bool bParam2)
{
	if (!func_53() || !func_52())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var35, 11))
	{
		if (!bParam2)
		{
			return;
		}
		if (GAMEPLAY::GET_PROFILE_SETTING(803) == 1 && uParam1->f_166 == 0)
		{
			iVar46 = NETWORK::_GET_NUM_MEMBERSHIP_DESC();
			iVar47 = 0;
			while (iVar47 < iVar46)
			{
				NETWORK::NETWORK_CLAN_GET_MEMBERSHIP_DESC(&Var0, iVar47);
				if (Var0 == Var35)
				{
					if (Var35.f_2)
					{
						StringCopy(&Var48, UI::_GET_LABEL_TEXT("HIGHER_RANK"), 32);
					}
					else
					{
						StringCopy(&Var48, UI::_GET_LABEL_TEXT("LOWER_RANK"), 32);
					}
					if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Var35.f_3), "Rank4"))
					{
						StringCopy(&Var48, UI::_GET_LABEL_TEXT("CREW_RANK4"), 32);
					}
					if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Var35.f_3), "Rank3"))
					{
						StringCopy(&Var48, UI::_GET_LABEL_TEXT("CREW_RANK3"), 32);
					}
					if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Var35.f_3), "Rank2"))
					{
						StringCopy(&Var48, UI::_GET_LABEL_TEXT("CREW_RANK2"), 32);
					}
					if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Var35.f_3), "Rank1"))
					{
						StringCopy(&Var48, UI::_GET_LABEL_TEXT("CREW_RANK1"), 32);
					}
					if (Var35.f_2)
					{
						func_180("CREWPROM", &Var48, &(Var0.f_1));
					}
					else
					{
						func_180("CREWDEMO", &Var48, &(Var0.f_1));
					}
					uParam1->f_166 = 1;
				}
				iVar47++;
			}
		}
	}
}

int func_180(char* sParam0, char* sParam1, char* sParam2)
{
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
	iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	func_59(33, sParam0, 1, sParam1, 0, 0, 0, 0f, 0, sParam2, 0, 0);
	return iVar0;
}

void func_181(int iParam0, var uParam1, bool bParam2)
{
	if (!func_53())
	{
		return;
	}
	if (!func_161())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var1, 36))
	{
		if (!bParam2)
		{
			return;
		}
		if (GAMEPLAY::GET_PROFILE_SETTING(803) == 1 && uParam1->f_166 == 0)
		{
			switch (Var1)
			{
				case -745862657:
				case -359724405:
					iVar0 = func_50(10, -1);
					if (Var1.f_17 > iVar0)
					{
						if (Var1.f_17 > 1)
						{
							func_186("SCFEED_13", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						else
						{
							func_186("SCFEED_13b", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						uParam1->f_166 = 1;
					}
					break;
				
				case -1908477769:
				case 492032003:
					iVar0 = func_50(11, -1);
					if (Var1.f_17 > iVar0)
					{
						if (Var1.f_17 > 1)
						{
							func_186("SCFEED_10", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						else
						{
							func_186("SCFEED_10b", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						uParam1->f_166 = 1;
					}
					break;
				
				case 649704142:
				case 152091680:
					iVar0 = func_50(60, -1);
					if (Var1.f_17 > iVar0)
					{
						func_186("SCFEED_4", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						uParam1->f_166 = 1;
					}
					break;
				
				case -2053753774:
				case -697117252:
					iVar0 = SYSTEM::ROUND(func_49(32, -1));
					if (Var1.f_17 > iVar0)
					{
						if (func_185(PLAYER::PLAYER_ID()) == 133 && func_184(PLAYER::PLAYER_ID()) == 4)
						{
						}
						else
						{
							if (GAMEPLAY::_0xD3D15555431AB793())
							{
								func_186("SCFEED_5", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
							}
							else
							{
								func_186("SCFEED_5b", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
							}
							uParam1->f_166 = 1;
						}
					}
					break;
				
				case 636291230:
				case 1588199577:
					iVar0 = func_50(61, -1);
					if (Var1.f_17 > iVar0)
					{
						func_186("SCFEED_6", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						uParam1->f_166 = 1;
					}
					break;
				
				case 120821777:
				case -1388534882:
					iVar0 = func_50(62, -1);
					if (Var1.f_17 > iVar0)
					{
						if (Var1.f_17 > 1)
						{
							func_186("SCFEED_7", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						else
						{
							func_186("SCFEED_7b", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						uParam1->f_166 = 1;
					}
					break;
				
				case -155774932:
				case 1550693290:
					iVar0 = func_50(63, -1);
					if (Var1.f_17 > iVar0)
					{
						if (Var1.f_17 > 1)
						{
							func_186("SCFEED_8", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						else
						{
							func_186("SCFEED_8b", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						uParam1->f_166 = 1;
					}
					break;
				
				case 1904946840:
				case -834940261:
					if (((((((((((((((func_113() == 0 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_112()) && !func_111()) && !func_110()) && !func_109()) && !func_108()) && !func_107()) && !func_106()) && !func_105()) && (func_161() && func_101())) && Global_1590535[PLAYER::PLAYER_ID()].f_98 != 8) && Global_1590535[PLAYER::PLAYER_ID()].f_98 != 9) && !func_99(PLAYER::PLAYER_ID())) && !func_98()) && !func_96(PLAYER::PLAYER_ID(), 1, 0))
					{
						Var37.f_17 = 1;
						Var37.f_21 = -1;
						Var37.f_22 = -1;
						Var37.f_23 = 2;
						Var37.f_36 = 2;
						Var131.f_65 = -1;
						Var131.f_66 = -1;
						Var131.f_67 = 2;
						if (func_81(&Var37, &(Var1.f_20), &Var131, &uVar219))
						{
							if (Var37)
							{
								func_183("SCFEED_11", &(Var1.f_1), Var1.f_17, &(Var131.f_22), 1, 2f);
								if (!func_182())
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
								}
								uParam1->f_166 = 1;
							}
						}
					}
					break;
				}
		}
	}
}

bool func_182()
{
	return Global_1312854;
}

int func_183(char* sParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4, float fParam5)
{
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_66(sParam1));
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2, 2055);
	if (bParam4)
	{
		Var1 = { func_76(sParam1) };
		iVar0 = UI::_0x1E6611149DB3DB6B("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &Var1, "", fParam5);
	}
	else
	{
		iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	}
	func_59(18, sParam0, 1, sParam1, iParam2, 0, 0, 0f, 0, sParam3, 0, 0);
	return iVar0;
}

int func_184(int iParam0)
{
	if (func_185(iParam0) == 133)
	{
		return Global_2537071.f_5045;
	}
	return -1;
}

int func_185(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0];
	}
	return -1;
}

int func_186(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_66(sParam1));
	if (!iParam4 == 0)
	{
		UI::_SET_NOTIFACTION_COLOR_NEXT(iParam4);
	}
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	if (!iParam4 == 0)
	{
		UI::_SET_NOTIFACTION_COLOR_NEXT(iParam4);
	}
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	if (bParam5)
	{
		Var1 = { func_76(sParam1) };
		iVar0 = UI::_SET_NOTIFICATION_MESSAGE("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &Var1, 0);
	}
	else
	{
		UI::_DRAW_NOTIFICATION(0, 1);
	}
	func_59(40, sParam0, 1, sParam1, iParam2, iParam3, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_187(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 36))
	{
		func_167(Var0, iVar36);
	}
}

int func_188()
{
	switch (GAMEPLAY::GET_PROFILE_SETTING(807))
	{
		case 0:
			return 0;
		
		case 1:
			return 60000;
		
		case 2:
			return 120000;
		
		case 3:
			return 180000;
		
		case 4:
			return 240000;
		
		case 5:
			return 300000;
		
		case 6:
			return 600000;
		
		case 7:
			return 900000;
		
		case 8:
			return 1800000;
		
		case 9:
			return 3600000;
		
		default:
	}
	return 300000;
}

void func_189()
{
	if (!iLocal_127)
	{
		if (SOCIALCLUB::_SC_HAS_CHECK_STRING_TASK_COMPLETED(iLocal_125))
		{
			if (!SOCIALCLUB::_SC_GET_CHECK_STRING_STATUS(iLocal_125))
			{
				if (SOCIALCLUB::_0x85535ACF97FC0969(iLocal_125))
				{
					iLocal_125 = 0;
					iLocal_127 = 1;
				}
				else
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						Global_2097152[func_191()].f_6086.f_56 = { func_192() };
					}
					else
					{
						Global_111638.f_20113.f_267 = { func_192() };
					}
					iLocal_125 = 0;
					iLocal_127 = 1;
				}
			}
		}
		else if (func_190(&uLocal_121, &uLocal_126))
		{
			SOCIALCLUB::_SC_START_CHECK_STRING_TASK(&uLocal_121, &iLocal_125);
		}
		else
		{
			iLocal_125 = 0;
			iLocal_127 = 1;
		}
	}
}

int func_190(var uParam0, var uParam1)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else if (Global_111638.f_20113.f_261)
	{
		*uParam0 = { Global_111638.f_20113.f_267 };
		*uParam1 = Global_111638.f_20113.f_271;
		return 1;
	}
	return 0;
}

int func_191()
{
	iVar0 = 0;
	return iVar0;
}

struct<4> func_192()
{
	StringCopy(&Var0, "", 16);
	iVar5 = 0;
	while (iVar5 <= 7)
	{
		if (iVar5 < 2)
		{
			iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 10);
			StringConCat(&Var0, func_193(iVar4), 16);
		}
		else if (iVar5 < 5)
		{
			iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(10, 36);
			StringConCat(&Var0, func_193(iVar4), 16);
		}
		else
		{
			iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 10);
			StringConCat(&Var0, func_193(iVar4), 16);
		}
		iVar5++;
	}
	return Var0;
}

char* func_193(int iParam0)
{
	if (iParam0 == 0)
	{
		return "0";
	}
	if (iParam0 == 1)
	{
		return "1";
	}
	if (iParam0 == 2)
	{
		return "2";
	}
	if (iParam0 == 3)
	{
		return "3";
	}
	if (iParam0 == 4)
	{
		return "4";
	}
	if (iParam0 == 5)
	{
		return "5";
	}
	if (iParam0 == 6)
	{
		return "6";
	}
	if (iParam0 == 7)
	{
		return "7";
	}
	if (iParam0 == 8)
	{
		return "8";
	}
	if (iParam0 == 9)
	{
		return "9";
	}
	if (iParam0 == 10)
	{
		return "A";
	}
	if (iParam0 == 11)
	{
		return "B";
	}
	if (iParam0 == 12)
	{
		return "C";
	}
	if (iParam0 == 13)
	{
		return "D";
	}
	if (iParam0 == 14)
	{
		return "E";
	}
	if (iParam0 == 15)
	{
		return "F";
	}
	if (iParam0 == 16)
	{
		return "G";
	}
	if (iParam0 == 17)
	{
		return "H";
	}
	if (iParam0 == 18)
	{
		return "I";
	}
	if (iParam0 == 19)
	{
		return "J";
	}
	if (iParam0 == 20)
	{
		return "K";
	}
	if (iParam0 == 21)
	{
		return "L";
	}
	if (iParam0 == 22)
	{
		return "M";
	}
	if (iParam0 == 23)
	{
		return "N";
	}
	if (iParam0 == 24)
	{
		return "O";
	}
	if (iParam0 == 25)
	{
		return "P";
	}
	if (iParam0 == 26)
	{
		return "Q";
	}
	if (iParam0 == 27)
	{
		return "R";
	}
	if (iParam0 == 28)
	{
		return "S";
	}
	if (iParam0 == 29)
	{
		return "T";
	}
	if (iParam0 == 30)
	{
		return "U";
	}
	if (iParam0 == 31)
	{
		return "V";
	}
	if (iParam0 == 32)
	{
		return "W";
	}
	if (iParam0 == 33)
	{
		return "X";
	}
	if (iParam0 == 34)
	{
		return "Y";
	}
	if (iParam0 == 35)
	{
		return "Z";
	}
	return "A";
}

void func_194()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_495(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (iLocal_85 == 0)
	{
		func_494();
		if (bLocal_81)
		{
			return;
		}
		func_493();
	}
	func_463();
	if (bLocal_84)
	{
		return;
	}
	func_445();
	func_443();
	bVar0 = iLocal_83;
	bVar1 = ((iLocal_73 == 0 && !bLocal_84) && !bLocal_81);
	if (iLocal_83)
	{
		iLocal_83 = 0;
	}
	else
	{
		iLocal_73 = (iLocal_73 + 1 % 30);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iLocal_73 < 20)
		{
			if (!bVar0)
			{
				iLocal_74++;
				if (iLocal_74 >= 10)
				{
					iLocal_74 = 0;
					bLocal_77 = !bLocal_77;
				}
			}
			iLocal_76 = (Global_2097152[func_191()].f_6086.f_63[iLocal_74] - 1);
			if (bLocal_77)
			{
				if (func_442(iLocal_76, &iLocal_75))
				{
					func_201(3);
				}
			}
			else if (Global_2097152[func_191()].f_6086.f_63[iLocal_74] == 0)
			{
				func_200(iLocal_74);
			}
		}
	}
	else
	{
		switch (iLocal_73)
		{
			case 0:
				func_201(0);
				break;
			
			case 1:
				func_201(1);
				break;
			
			case 2:
				func_201(2);
				break;
			
			case 3:
				func_195();
				break;
			}
	}
	if (bVar1)
	{
		if (iLocal_101)
		{
			if (SYSTEM::TIMERA() > 5000)
			{
				unk_0xEBD5716567F1D347("car");
				unk_0x9B1B988780CBC954();
				unk_0xFE0C6A4F9007749F();
				iLocal_101 = 0;
			}
		}
	}
}

void func_195()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (func_199())
	{
		return;
	}
	if (Global_30913)
	{
		if (!iLocal_99)
		{
			unk_0xEBD5716567F1D347("dog");
			unk_0xB5B7B792811308A7("saveData");
			func_198("chopKilled", GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 65535));
			unk_0x9B1B988780CBC954();
			unk_0x98C61465A1232E0E();
			unk_0xFE0C6A4F9007749F();
			iLocal_99 = 1;
		}
	}
	else
	{
		iLocal_99 = 0;
	}
	unk_0xEBD5716567F1D347("dog");
	unk_0xB5B7B792811308A7("saveData");
	if (APP::APP_DATA_VALID())
	{
		iVar0 = APP::APP_GET_INT("happinessTimer");
		if (iVar0 == 0)
		{
			iVar0 = 450;
		}
		iVar1 = APP::APP_GET_INT("happinessDecrement");
		if (iVar1 == 0)
		{
			iVar1 = 1;
		}
		iVar2 = APP::APP_GET_INT("time_stamp");
		iVar3 = NETWORK::_GET_POSIX_TIME();
		if (iVar3 == 0)
		{
			iVar3 = iVar2;
		}
		iVar4 = APP::APP_GET_INT("happiness");
		iVar5 = (iVar3 - iVar2);
		iVar6 = ((iVar5 / iVar0) * iVar1);
		iVar7 = func_197((iVar4 - iVar6), 0, 100);
		Global_111638.f_20113.f_254 = SYSTEM::TO_FLOAT(iVar7);
		Global_111638.f_20113.f_254.f_1 = APP::APP_GET_FLOAT("cleanliness");
		Global_111638.f_20113.f_254.f_2 = APP::APP_GET_FLOAT("hunger");
		Global_111638.f_20113.f_254.f_3 = func_27("trainingLevel");
		Global_111638.f_20113.f_254.f_4 = func_27("collar");
		Global_111638.f_20113.f_254.f_5 = 1;
		if (Global_111638.f_20113.f_254 > 50f)
		{
		}
		if (Global_111638.f_20113.f_254.f_2 > 50f)
		{
		}
		Global_111638.f_20113.f_263 = func_27("usedApp") != 0;
		if (STATS::STAT_GET_BOOL(-690557990, &bVar8, -1))
		{
			if (!bVar8)
			{
				if (Global_111638.f_20113.f_263)
				{
					STATS::STAT_SET_BOOL(-690557990, 1, 1);
				}
			}
		}
	}
	unk_0x98C61465A1232E0E();
	unk_0xFE0C6A4F9007749F();
	if (Global_111638.f_20113.f_264)
	{
		unk_0xEBD5716567F1D347("dog");
		unk_0xB5B7B792811308A7("saveData");
		if (func_196(6))
		{
			func_198("chopSafeHouse", 1);
		}
		else
		{
			func_198("chopSafeHouse", 0);
		}
		unk_0x9B1B988780CBC954();
		unk_0x98C61465A1232E0E();
		unk_0xFE0C6A4F9007749F();
		Global_111638.f_20113.f_264 = 0;
	}
}

bool func_196(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_111638.f_7224[iParam0], 0);
}

int func_197(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_198(char* sParam0, int iParam1)
{
	unk_0x53B80405411BCB9F(func_28(sParam0), iParam1);
}

int func_199()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

void func_200(int iParam0)
{
	if (!Global_2097152[func_191()].f_6086.f_41[iParam0])
	{
		unk_0xEBD5716567F1D347("car");
		StringCopy(&cVar0, "multiplayer", 16);
		StringIntConCat(&cVar0, func_15(), 16);
		unk_0xB5B7B792811308A7(&cVar0);
		StringCopy(&cVar0, "vehicle", 16);
		StringIntConCat(&cVar0, iParam0, 16);
		unk_0xB5B7B792811308A7(&cVar0);
		func_198("carUnlocked", 0);
		unk_0x98C61465A1232E0E();
		iLocal_101 = 1;
		SYSTEM::SETTIMERA(0);
		unk_0x98C61465A1232E0E();
		unk_0xFE0C6A4F9007749F();
		Global_2097152[func_191()].f_6086.f_41[iParam0] = 1;
	}
}

void func_201(int iParam0)
{
	Var26.f_33 = 5;
	if (iParam0 == 0)
	{
		iVar2 = 0;
		StringCopy(&Var8, "singleplayer0", 24);
		StringCopy(&cVar14, "sp0_order", 24);
		Var26 = { Global_111638.f_20113[0] };
		Var69 = { Global_111638.f_20113.f_130[0] };
	}
	else if (iParam0 == 1)
	{
		iVar2 = 1;
		StringCopy(&Var8, "singleplayer1", 24);
		StringCopy(&cVar14, "sp1_order", 24);
		Var26 = { Global_111638.f_20113[1] };
		Var69 = { Global_111638.f_20113.f_130[1] };
	}
	else if (iParam0 == 2)
	{
		iVar2 = 2;
		StringCopy(&Var8, "singleplayer2", 24);
		StringCopy(&cVar14, "sp2_order", 24);
		Var26 = { Global_111638.f_20113[2] };
		Var69 = { Global_111638.f_20113.f_130[2] };
	}
	else if (iParam0 == 3)
	{
		iVar3 = func_15();
		iVar2 = (3 + iVar3);
		StringCopy(&Var8, "multiplayer", 24);
		StringIntConCat(&Var8, iVar3, 24);
		StringCopy(&cVar14, "mp", 24);
		StringIntConCat(&cVar14, iVar3, 24);
		StringConCat(&cVar14, "_order", 24);
		if (func_441(iLocal_75, &iVar110))
		{
			func_440(&Var26, iVar110);
		}
		else
		{
			func_440(&Var26, 0);
		}
		Var69 = { Global_2097152[func_191()].f_6086 };
		StringCopy(&Var20, "vehicle", 24);
		StringIntConCat(&Var20, iLocal_74, 24);
	}
	else
	{
		return;
	}
	if (iLocal_100 || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iLocal_78))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_100 = 0;
		}
		else
		{
			unk_0xEBD5716567F1D347("car");
			unk_0xB5B7B792811308A7("singleplayer0");
			func_198("carUnlocked", 0);
			unk_0x98C61465A1232E0E();
			unk_0xB5B7B792811308A7("singleplayer2");
			func_198("carUnlocked", 0);
			unk_0x98C61465A1232E0E();
			unk_0xFE0C6A4F9007749F();
			if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				unk_0xEBD5716567F1D347("car");
				unk_0xB5B7B792811308A7("appdata");
				func_198("playerName", GAMEPLAY::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
				unk_0x98C61465A1232E0E();
				unk_0xFE0C6A4F9007749F();
			}
			iVar111 = 0;
			while (iVar111 < Global_111638.f_20113)
			{
				if (!Global_111638.f_20113[iVar111].f_41)
				{
					Global_111638.f_20113[iVar111].f_40 = 0;
					if (Global_111638.f_20113[iVar111] != 0 && Global_111638.f_20113[iVar111].f_29 != 0)
					{
						Global_111638.f_20113[iVar111].f_40 = 1;
					}
					else
					{
						Global_111638.f_20113.f_273[iVar111] = 0;
					}
				}
				iVar111++;
			}
			iLocal_100 = 0;
		}
		if (iParam0 >= 2)
		{
			iLocal_100 = 0;
			iLocal_78 = 0;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!Global_111638.f_20113.f_273[iParam0])
		{
			if (((!func_439(0) && !func_439(3)) && !func_439(2)) || !func_172(0))
			{
				if ((iParam0 == 1 || (((iParam0 == 0 && func_172(0)) && func_438(iParam0)) && !Global_111638.f_9080.f_99.f_58[135])) || (((iParam0 == 2 && func_172(0)) && func_438(iParam0)) && !Global_111638.f_9080.f_99.f_58[136]))
				{
					unk_0xEBD5716567F1D347("car");
					unk_0xB5B7B792811308A7(&Var8);
					unk_0x07A1A3A04807E104();
					Var112.f_11 = 12;
					Var112.f_31 = 49;
					Var112.f_81 = 2;
					func_437(iParam0, &Var112, 1);
					func_436(Var112.f_5, Var112.f_7, -1, 1, &iVar210);
					func_436(Var112.f_6, -1, -1, 0, &iVar211);
					func_198("carUnlocked", 1);
					func_198("carModel", Var112);
					func_198("tyreSmokeColourEnabled", 1);
					func_198("tyreSmokeColourRed", 255);
					func_198("tyreSmokeColourGreen", 255);
					func_198("tyreSmokeColourBlue", 255);
					if (Var112 == 736902334)
					{
						func_435("carType", "sport");
						func_198("carEngineCount", 5);
						func_198("carBrakesCount", 4);
						func_198("carExhaustCount", 6);
						func_198("carWheelCount", 26);
						func_198("carHornCount", 5);
						func_198("carArmourCount", 6);
						func_198("carSuspensionCount", 5);
						func_198("carHorn1", 1748384362);
						func_198("carHorn2", 1766676233);
						func_198("carHorn3", -1390777827);
						func_198("carHorn4", -1751761149);
						func_198("carHorn5", 1732399718);
						func_434("carPriceModifier", 3.25f);
						func_198("carColour1", iVar210);
						func_198("carColour2", iVar211);
						func_198("carColour1Unlocked", 1);
						func_198("carColour2Unlocked", 1);
					}
					else if (Var112 == -1435919434)
					{
						func_435("carType", "car");
						func_198("carEngineCount", 5);
						func_198("carBrakesCount", 4);
						func_198("carExhaustCount", 1);
						func_198("carWheelCount", 26);
						func_198("carHornCount", 5);
						func_198("carArmourCount", 6);
						func_198("carSuspensionCount", 1);
						func_198("carHorn1", -1512308941);
						func_198("carHorn2", 1766676233);
						func_198("carHorn3", -1390777827);
						func_198("carHorn4", -1751761149);
						func_198("carHorn5", 1732399718);
						func_434("carPriceModifier", 1f);
						func_198("carColour1", iVar210);
						func_198("carColour1Unlocked", 1);
					}
					else if (Var112 == -1008861746)
					{
						func_435("carType", "car");
						func_198("carEngineCount", 5);
						func_198("carBrakesCount", 5);
						func_198("carExhaustCount", 5);
						func_198("carWheelCount", 26);
						func_198("carHornCount", 5);
						func_198("carArmourCount", 6);
						func_198("carSuspensionCount", 5);
						func_198("carHorn1", 36213993);
						func_198("carHorn2", 1766676233);
						func_198("carHorn3", -1390777827);
						func_198("carHorn4", -1751761149);
						func_198("carHorn5", 1732399718);
						func_434("carPriceModifier", 1f);
						func_198("carColour1", iVar210);
						func_198("carColour2", iVar211);
						func_198("carColour1Unlocked", 1);
						func_198("carColour2Unlocked", 1);
					}
					unk_0x98C61465A1232E0E();
					Local_87 = { Var8 };
					Local_93 = { Var20 };
					iLocal_86 = Var112;
					bLocal_84 = true;
					iLocal_101 = 1;
					SYSTEM::SETTIMERA(0);
					unk_0xFE0C6A4F9007749F();
					Global_111638.f_20113.f_273[iParam0] = 1;
				}
			}
		}
		else if ((iParam0 == 0 && Global_111638.f_9080.f_99.f_58[135]) || (iParam0 == 2 && Global_111638.f_9080.f_99.f_58[136]))
		{
			Global_111638.f_20113[iParam0].f_41 = 1;
			Global_111638.f_20113.f_273[iParam0] = 0;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar212 = 0;
		if (iLocal_129 == 0)
		{
			iVar212 = func_433(1125086042);
		}
		else if (iLocal_129 == 1)
		{
			iVar212 = func_433(-1351791596);
		}
		else if (iLocal_129 == 2)
		{
			iVar212 = func_433(-516083789);
		}
		else if (iLocal_129 == 3)
		{
			iVar212 = func_433(-866974241);
		}
		else if (iLocal_129 == 4)
		{
			iVar212 = func_433(-107618204);
		}
		if (iVar212 && !func_432(iLocal_129))
		{
			unk_0xEBD5716567F1D347("car");
			StringCopy(&cVar213, "multiplayer", 16);
			StringIntConCat(&cVar213, iLocal_129, 16);
			unk_0xB5B7B792811308A7(&cVar213);
			iVar217 = 0;
			while (iVar217 < 10)
			{
				StringCopy(&cVar213, "vehicle", 16);
				StringIntConCat(&cVar213, iVar217, 16);
				unk_0xB5B7B792811308A7(&cVar213);
				func_198("carUnlocked", 0);
				unk_0x98C61465A1232E0E();
				iVar217++;
			}
			unk_0x98C61465A1232E0E();
			iLocal_101 = 1;
			SYSTEM::SETTIMERA(0);
			unk_0xFE0C6A4F9007749F();
			if (iLocal_129 == 0)
			{
				func_431(1125086042, 0);
			}
			else if (iLocal_129 == 1)
			{
				func_431(-1351791596, 0);
			}
			else if (iLocal_129 == 2)
			{
				func_431(-516083789, 0);
			}
			else if (iLocal_129 == 3)
			{
				func_431(-866974241, 0);
			}
			else if (iLocal_129 == 4)
			{
				func_431(-107618204, 0);
			}
		}
		iLocal_129++;
		if (iLocal_129 > 4)
		{
			iLocal_129 = 0;
		}
	}
	if (!bLocal_84)
	{
		if (Var26.f_42)
		{
			Local_87 = { Var8 };
			Local_93 = { Var20 };
			iLocal_86 = Var26;
			bLocal_84 = true;
			iLocal_101 = 1;
			SYSTEM::SETTIMERA(0);
			Var26.f_42 = 0;
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_2097152[func_191()].f_6086.f_52 = 0;
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_160(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (SYSTEM::TIMERB() > 5000)
			{
				bVar218 = false;
				if (iLocal_130 == 0)
				{
					func_430(&iVar219);
					bVar218 = iVar219 != iLocal_132[0];
					iLocal_130++;
					SYSTEM::SETTIMERB(0);
				}
				else if (iLocal_130 == 1)
				{
					func_404(&iVar220);
					bVar218 = iVar220 != iLocal_132[1];
					iLocal_130++;
					SYSTEM::SETTIMERB(0);
				}
				else if (iLocal_130 == 2)
				{
					if (func_396(&iVar221, iLocal_131) == -1)
					{
						iLocal_131 = 0;
						iLocal_130++;
						SYSTEM::SETTIMERB(0);
					}
					else
					{
						bVar218 = GAMEPLAY::IS_BIT_SET(iVar221[(iLocal_131 / 32)], (iLocal_131 % 32)) != GAMEPLAY::IS_BIT_SET(uLocal_144[(iLocal_131 / 32)], (iLocal_131 % 32));
						iLocal_131++;
						SYSTEM::SETTIMERB(4900);
					}
				}
				if (bVar218)
				{
					Local_87 = { Var8 };
					Local_93 = { Var20 };
					iLocal_86 = Var26;
					bLocal_84 = true;
					iLocal_101 = 1;
					SYSTEM::SETTIMERA(0);
				}
				if (iLocal_130 > 2)
				{
					iLocal_130 = 0;
				}
			}
		}
	}
	if (Var69.f_33)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_83() == 0)
			{
				iVar228 = Global_2097152[func_191()].f_6086.f_62;
				if (Global_1323615[iVar228].f_66 == Var69)
				{
					if (Var69.f_37)
					{
						Var69.f_38 = 0;
						if (iLocal_104 == 0)
						{
							if (SOCIALCLUB::_SC_HAS_CHECK_STRING_TASK_COMPLETED(iLocal_102))
							{
								if (!SOCIALCLUB::_SC_GET_CHECK_STRING_STATUS(iLocal_102))
								{
									if (SOCIALCLUB::_0x85535ACF97FC0969(iLocal_102))
									{
										iLocal_102 = 0;
										Var69.f_37 = 0;
									}
									else
									{
										Var69.f_38 = 1;
										iLocal_102 = 0;
										Var69.f_37 = 0;
									}
								}
							}
							else
							{
								SOCIALCLUB::_SC_START_CHECK_STRING_TASK(&(Global_2097152[func_191()].f_6086.f_28), &iLocal_102);
							}
						}
						else if (iLocal_104 == 1)
						{
							if (iLocal_103 == 0)
							{
								SOCIALCLUB::_0x0F73393BAC7E6730(&(Global_2097152[func_191()].f_6086.f_28), &iLocal_103);
							}
							else if (!SOCIALCLUB::_0xD302E99EDF0449CF(iLocal_103))
							{
								switch (SOCIALCLUB::_0x5C4EBFFA98BDB41C(iLocal_103))
								{
									case 0:
										iLocal_103 = 0;
										Var69.f_37 = 0;
										break;
									
									default:
										Var69.f_38 = 1;
										iLocal_103 = 0;
										Var69.f_37 = 0;
										break;
									}
								}
						}
					}
					else if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
					}
					else if (func_395(PLAYER::PLAYER_ID(), 1, 0))
					{
					}
					else if (!func_161())
					{
					}
					else if (Var69.f_38)
					{
						if (func_394(96, "SOCIAL_CARAPP2", 0, 0))
						{
							Var69.f_33 = 0;
							Var69.f_36 = 0;
							Var69.f_35 = 0;
							Var69.f_34 = 0;
						}
					}
					else if (iLocal_118)
					{
						Var69.f_39 = 0;
						if (iLocal_120)
						{
							if (!func_383(&Var69, iVar228))
							{
								iLocal_118 = 0;
							}
							iLocal_120 = 0;
						}
						else if (Var69.f_27 > 0 && !NETWORKCASH::NETWORK_CAN_SPEND_MONEY(Var69.f_27, 0, 1, 0, -1, 0))
						{
							Var69.f_39 = 1;
							iLocal_118 = 0;
						}
						else
						{
							if (!iLocal_119)
							{
								func_381(&Var69, 0);
								GAMEPLAY::SET_BIT(&(Global_1323615[iVar228].f_102), 14);
								iLocal_119 = 1;
								func_362(iVar228, &(Global_1323615[iVar228]), 1, -1, 0, 0);
								func_128(407109726, 3, 0);
							}
							if (func_285(96, "SOCIAL_CARAPP1", VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Var69), 0, -99, 0, 0, 0, 0))
							{
								bVar229 = NETWORKCASH::NETWORK_GET_VC_BANK_BALANCE() >= Var69.f_27;
								bVar230 = (!bVar229 && NETWORKCASH::NETWORK_GET_VC_BANK_BALANCE() > 0);
								if (Var69.f_27 > 0)
								{
									NETWORKCASH::NETWORK_BUY_ITEM(Var69.f_27, Var69, 8, 1, bVar229, "CMOD_MAIN_0", GAMEPLAY::GET_HASH_KEY(func_284(39, 0)), GAMEPLAY::GET_HASH_KEY("CMOD_MAIN_0"), 0, bVar230);
								}
								Var69.f_33 = 0;
								Var69.f_36 = 1;
								Var69.f_35 = 1;
								iLocal_118 = 0;
								func_381(&Var69, 1);
								func_283(&Var69, 3);
								GAMEPLAY::SET_BIT(&(Global_1323615[iVar228].f_102), 14);
								func_362(iVar228, &(Global_1323615[iVar228]), 1, -1, 0, 0);
								func_128(407109726, 3, 0);
							}
						}
					}
					else if (Var69.f_39)
					{
						if (func_285(96, "SOCIAL_CARAPP3", VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Var69), 0, -99, 0, 0, 0, 0))
						{
							Var69.f_33 = 0;
							Var69.f_36 = 1;
							Var69.f_35 = 0;
							Var69.f_34 = 0;
						}
					}
					else if (func_285(96, "SOCIAL_CARAPP", VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Var69), 0, -99, 0, 0, 0, 0))
					{
						Var69.f_33 = 0;
						Var69.f_36 = 1;
						Var69.f_35 = 0;
					}
					iLocal_83 = 1;
				}
				else
				{
					Var69.f_33 = 0;
					Var69.f_36 = 0;
					Var69.f_35 = 0;
					Var69.f_34 = 0;
				}
			}
		}
		else if (iParam0 == func_278())
		{
			if ((((((Global_111638.f_2358.f_539.f_2407[0][iParam0] == Var69 || Global_111638.f_2358.f_539.f_2407[1][iParam0] == Var69) || Global_111638.f_2358.f_539.f_2407[2][iParam0] == Var69) || Global_111638.f_2358.f_539.f_2407[3][iParam0] == Var69) || ((iParam0 == 1 && Var69 == 736902334) && !Global_111638.f_20113.f_281[iParam0])) || ((iParam0 == 0 && Var69 == -1008861746) && !Global_111638.f_20113.f_281[iParam0])) || ((iParam0 == 2 && Var69 == -1435919434) && !Global_111638.f_20113.f_281[iParam0]))
			{
				if (Var69.f_37)
				{
					Var69.f_38 = 0;
					if (iLocal_104 == 0)
					{
						if (SOCIALCLUB::_SC_HAS_CHECK_STRING_TASK_COMPLETED(iLocal_102))
						{
							if (!SOCIALCLUB::_SC_GET_CHECK_STRING_STATUS(iLocal_102))
							{
								if (SOCIALCLUB::_0x85535ACF97FC0969(iLocal_102))
								{
									iLocal_102 = 0;
									Var69.f_37 = 0;
								}
								else
								{
									Var69.f_38 = 1;
									iLocal_102 = 0;
									Var69.f_37 = 0;
								}
							}
						}
						else
						{
							SOCIALCLUB::_SC_START_CHECK_STRING_TASK(&(Global_111638.f_20113.f_130[iParam0].f_28), &iLocal_102);
						}
					}
					else if (iLocal_104 == 1)
					{
						if (iLocal_103 == 0)
						{
							SOCIALCLUB::_0x0F73393BAC7E6730(&(Global_111638.f_20113.f_130[iParam0].f_28), &iLocal_103);
						}
						else if (!SOCIALCLUB::_0xD302E99EDF0449CF(iLocal_103))
						{
							switch (SOCIALCLUB::_0x5C4EBFFA98BDB41C(iLocal_103))
							{
								case 0:
									iLocal_103 = 0;
									Var69.f_37 = 0;
									break;
								
								default:
									Var69.f_38 = 1;
									iLocal_103 = 0;
									Var69.f_37 = 0;
									break;
								}
							}
					}
				}
				else if (Var69.f_38)
				{
					if ((!func_439(0) && !func_439(3)) && !func_439(2))
					{
						if (func_277(96, "SOCIAL_CARAPP2", 2, 0, 0, 0, 0, 1, 0, 1))
						{
							Var69.f_33 = 0;
							Var69.f_36 = 0;
							Var69.f_35 = 0;
							Var69.f_34 = 0;
						}
					}
				}
				else if (iLocal_106[iParam0])
				{
					iLocal_106[iParam0] = 0;
					Var69.f_39 = 0;
					Var69.f_34 = 0;
					if (!func_273(Var69.f_27) && (iParam0 != 1 || Global_111638.f_20113.f_281[iParam0]))
					{
						Var69.f_39 = 1;
					}
					else
					{
						Var69.f_33 = 0;
						Var69.f_36 = 1;
						Var69.f_35 = 1;
						Var69.f_34 = iLocal_110[iParam0];
					}
					iLocal_110[iParam0] = 0;
				}
				else if (Var69.f_39)
				{
					if ((!func_439(0) && !func_439(3)) && !func_439(2))
					{
						if (func_256(96, "SOCIAL_CARAPP3", 2, UI::_GET_LABEL_TEXT(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_111638.f_20113.f_130[iParam0])), -99, "NULL", 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0))
						{
							Var69.f_33 = 0;
							Var69.f_36 = 1;
							Var69.f_35 = 0;
							Var69.f_34 = 0;
						}
					}
				}
				else if ((!func_439(0) && !func_439(3)) && !func_439(2))
				{
					StringCopy(&Var231, "SOCIAL_CARAPP", 16);
					if (iParam0 == 1 && !Global_111638.f_20113.f_281[iParam0])
					{
						StringCopy(&Var231, "SOCIAL_FREE", 16);
					}
					if (func_256(96, &Var231, 2, UI::_GET_LABEL_TEXT(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_111638.f_20113.f_130[iParam0])), -99, "NULL", 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0))
					{
						Var69.f_33 = 0;
						Var69.f_36 = 1;
						Var69.f_35 = 0;
						Var69.f_34 = 0;
						func_255();
					}
				}
				iLocal_83 = 1;
			}
			else
			{
				Var69.f_33 = 0;
				Var69.f_36 = 0;
				Var69.f_35 = 0;
				Var69.f_34 = 0;
			}
		}
	}
	iVar235 = 1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (((iParam0 != 3 || !func_252(39)) || func_251()) || func_96(PLAYER::PLAYER_ID(), 1, 0))
		{
			iVar235 = 0;
		}
	}
	else if (!func_250(iParam0) || func_251())
	{
		iVar235 = 0;
	}
	if (iVar235 && !Var69.f_33)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (iVar1 == 0)
			{
				unk_0xEBD5716567F1D347("car");
				unk_0xB5B7B792811308A7(&cVar14);
				if (APP::APP_DATA_VALID())
				{
					iVar236 = func_27("uid");
					if (((iVar236 != 0 && iVar236 != Var69.f_26) && func_27("character") == iVar2) && (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || func_27("vehicle") == iLocal_74))
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
						}
						Var69.f_26 = iVar236;
						Var69 = func_27("carModel");
						if (!STREAMING::IS_MODEL_A_VEHICLE(Var69))
						{
							if (iParam0 == 0)
							{
								Var69 = func_249(0, 1);
							}
							else if (iParam0 == 1)
							{
								Var69 = func_249(1, 1);
							}
							else if (iParam0 == 2)
							{
								Var69 = func_249(2, 1);
							}
							else
							{
								Var69 = 736902334;
							}
						}
						Var69.f_27 = func_27("cost");
						Var69.f_1 = func_27("carColour1");
						Var69.f_2 = func_27("carColour2");
						Var69.f_3 = func_27("carColour1Group");
						Var69.f_4 = func_27("carColour2Group");
						Var69.f_5 = func_27("windowTint");
						Var69.f_18 = func_248(func_27("bulletProofTyres"));
						Var69.f_9 = func_27("carEngine");
						Var69.f_10 = func_27("carBrakes");
						Var69.f_13 = func_27("carExhaust");
						Var69.f_11 = func_27("carWheel");
						Var69.f_6 = func_27("tyreSmokeColourRed");
						Var69.f_7 = func_27("tyreSmokeColourGreen");
						Var69.f_8 = func_27("tyreSmokeColourBlue");
						Var69.f_16 = func_27("carHorn");
						Var69.f_15 = func_27("carArmour");
						Var69.f_19 = func_27("carTurbo");
						Var69.f_14 = func_27("carSuspension");
						Var69.f_17 = func_27("carXenonLights");
						Var69.f_20 = func_27("tyreSmoke");
						Var69.f_12 = Var26.f_10;
						iVar0 = 1;
						if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							if (!iLocal_114[iParam0] && (GAMEPLAY::GET_GAME_TIMER() - iLocal_105) < 20000)
							{
								iLocal_106[iParam0] = 1;
							}
							else if (((!func_172(0) && func_247(1, 0) == 0) && (Global_111638.f_9080 || func_246(0))) && (GAMEPLAY::IS_BIT_SET(Global_111638.f_9080.f_2[27], 1) || func_246(0)))
							{
								iLocal_106[iParam0] = 1;
								iLocal_110[iParam0] = 1;
							}
							else if ((((iParam0 == 0 && Var69 == -1008861746) || (iParam0 == 1 && Var69 == 736902334)) || (iParam0 == 1 && Var69 == -2140431165)) || (iParam0 == 2 && Var69 == -1435919434))
							{
								if (func_247(iParam0, Var69) == 0)
								{
									iLocal_106[iParam0] = 1;
									iLocal_110[iParam0] = 1;
								}
							}
							if (!iLocal_106[iParam0])
							{
							}
						}
					}
					if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						iLocal_114[iParam0] = 1;
					}
				}
				unk_0x98C61465A1232E0E();
				unk_0xFE0C6A4F9007749F();
			}
			else if (iVar1 == 1 && iVar0)
			{
				unk_0xEBD5716567F1D347("car");
				unk_0xB5B7B792811308A7("plate");
				if (APP::APP_DATA_VALID())
				{
					Var69.f_32 = func_27("carPlateBack");
					if (Var69.f_32 > 4)
					{
						Var69.f_32 = 0;
						Var69.f_32 = func_27("carPlateBack");
					}
					StringCopy(&(Var69.f_28), func_245("carPlateText"), 16);
				}
				unk_0x98C61465A1232E0E();
				unk_0xFE0C6A4F9007749F();
				Var69.f_33 = 1;
				Var69.f_37 = 1;
				Var69.f_39 = 0;
				Var69.f_35 = 0;
				Var69.f_40 = 0;
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					STATS::STAT_SET_BOOL(1399858614, 1, 1);
					func_244(135, 1);
					Global_111638.f_20113.f_262 = 1;
				}
				else
				{
					Global_2097152[func_191()].f_6086.f_62 = iLocal_76;
					func_56(99, 1, -1, 1);
				}
				iLocal_323 = 1;
			}
			iVar1++;
		}
	}
	if ((!Var26.f_41 && iVar235) && Var26.f_40)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!func_242(&Var26))
			{
				iLocal_83 = 1;
				return;
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
		}
		unk_0xEBD5716567F1D347("car");
		unk_0xB5B7B792811308A7("appdata");
		iVar237 = func_241();
		if (iVar237 == 0)
		{
			iVar237 = func_241();
		}
		func_198("appUID", iVar237);
		Global_111638.f_20113.f_272 = iVar237;
		iVar238 = 0;
		iVar239 = 0;
		if (func_161())
		{
			if (func_213())
			{
				iVar239 = (iVar239 + Global_262145.f_122);
			}
		}
		func_434("spDiscount", (1f - (SYSTEM::TO_FLOAT(iVar238) / 100f)));
		func_434("mpDiscount", (1f - (SYSTEM::TO_FLOAT(iVar239) / 100f)));
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_198("playerName", GAMEPLAY::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				func_198("playerNameMP", GAMEPLAY::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
			}
			else
			{
				func_198("playerNameSP", GAMEPLAY::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
			}
		}
		unk_0x98C61465A1232E0E();
		unk_0xB5B7B792811308A7(&Var8);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			unk_0xB5B7B792811308A7(&Var20);
		}
		if (!func_212(Var26))
		{
			func_198("carUnlocked", 0);
		}
		else
		{
			func_198("carUnlocked", 1);
			if ((((Var26 == 788045382 || Var26 == 55628203) || Var26 == -1661854193) || Var26 == 1126868326) || !func_211(Var26.f_10))
			{
				Var26.f_27 = 0;
			}
			if (func_210(Var26, 1))
			{
				Var26.f_30 = 0;
			}
			if (Var26 == 640818791 || Var26 == -1353081087)
			{
				Var26.f_28 = 0;
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (Var26 == -808457413)
				{
					Var26.f_26 = 0;
				}
				if (Var26 == -1450650718)
				{
					if (Var26.f_26 > 1)
					{
						Var26.f_26 = 1;
					}
				}
			}
			if (Var26.f_15 > 1)
			{
				Var26.f_15 = 0;
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				func_198("playerSlot", iVar3);
				func_198("playerRank", func_209(PLAYER::PLAYER_ID()));
				switch (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
				{
					case 1885233650:
					case -1667301416:
						func_435("playerGang", "None");
						UI::GET_HUD_COLOUR(116, &iVar4, &iVar5, &iVar6, &uVar7);
						break;
				}
				func_198("playerGangR", iVar4);
				func_198("playerGangG", iVar5);
				func_198("playerGangB", iVar6);
			}
			if (!STREAMING::IS_MODEL_A_VEHICLE(Var26))
			{
				func_198("carModel", -1);
				func_198("carUnlocked", 0);
			}
			else
			{
				func_198("carModel", Var26);
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (Var26.f_39)
				{
					case 0:
						if (VEHICLE::IS_THIS_MODEL_A_CAR(Var26))
						{
							func_435("carType", "car");
						}
						else
						{
							func_435("carType", "bike");
						}
						break;
					
					case 1:
						func_435("carType", "sport");
						break;
					
					case 2:
						func_435("carType", "suv");
						break;
					
					case 3:
						func_435("carType", "special");
						break;
				}
			}
			else
			{
				iVar240 = func_204(Var26);
				switch (iVar240)
				{
					case 0:
						func_435("carType", "car");
						break;
					
					case 1:
						func_435("carType", "sport");
						break;
					
					case 2:
						func_435("carType", "suv");
						break;
					
					case 3:
						func_435("carType", "special");
						break;
					
					case 4:
						func_435("carType", "bike");
						break;
					
					case 5:
						func_435("carType", "special");
						break;
					
					case 6:
						func_435("carType", "car");
						break;
					
					case 7:
						func_435("carType", "special");
						break;
					
					case 10:
						func_435("carType", "special");
						break;
					
					case 11:
						func_435("carType", "car");
						break;
					
					case 28:
						func_435("carType", "car");
						break;
					
					case 26:
						func_435("carType", "special");
						break;
					
					case 27:
						func_435("carType", "special");
						break;
					
					case 29:
						func_435("carType", "special");
						break;
					
					case 30:
						func_435("carType", "special");
						break;
					
					case 31:
						func_435("carType", "special");
						break;
					
					case 32:
						func_435("carType", "special");
						break;
					
					default:
						func_435("carType", "special");
						break;
					}
			}
			func_198("carColour1", Var26.f_1);
			func_198("carColour2", Var26.f_2);
			func_198("windowTint", Var26.f_3);
			func_198("bulletProofTyres", func_203(Var26.f_16));
			func_198("carEngine", Var26.f_7);
			func_198("carBrakes", Var26.f_8);
			func_198("carExhaust", Var26.f_11);
			func_198("carWheel", Var26.f_9);
			func_198("tyreSmokeColourRed", Var26.f_4);
			func_198("tyreSmokeColourGreen", Var26.f_5);
			func_198("tyreSmokeColourBlue", Var26.f_6);
			func_198("carHorn", Var26.f_14);
			func_198("carArmour", Var26.f_13);
			func_198("carTurbo", Var26.f_17);
			func_198("carSuspension", Var26.f_12);
			func_198("carXenonLights", Var26.f_15);
			func_198("tyreSmoke", Var26.f_18);
			func_198("tyreSmoke", Var26.f_18);
			func_198("carWheelType", Var26.f_10);
			func_198("carEngineCount", Var26.f_24);
			func_198("carBrakesCount", Var26.f_25);
			func_198("carExhaustCount", Var26.f_26);
			func_198("carWheelCount", Var26.f_27);
			func_198("carHornCount", Var26.f_28);
			func_198("carArmourCount", Var26.f_29);
			func_198("carSuspensionCount", Var26.f_30);
			func_198("carHorn1", Var26.f_33[0]);
			func_198("carHorn2", Var26.f_33[1]);
			func_198("carHorn3", Var26.f_33[2]);
			func_198("carHorn4", Var26.f_33[3]);
			func_198("carHorn5", Var26.f_33[4]);
			func_434("carPriceModifier", Var26.f_31);
			if (!GAMEPLAY::IS_BIT_SET(Var26.f_32, 0) || Var26 == 743478836)
			{
				func_198("carColour1Unlocked", 0);
			}
			else
			{
				func_198("carColour1Unlocked", 1);
			}
			if (!GAMEPLAY::IS_BIT_SET(Var26.f_32, 1) || Var26 == 743478836)
			{
				func_198("carColour2Unlocked", 0);
			}
			else
			{
				func_198("carColour2Unlocked", 1);
			}
			iVar241 = 0;
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || GAMEPLAY::IS_BIT_SET(Global_1323615[iLocal_76].f_102, 17))
			{
				GAMEPLAY::SET_BIT(&iVar241, 0);
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || GAMEPLAY::IS_BIT_SET(Global_1323615[iLocal_76].f_102, 18))
			{
				GAMEPLAY::SET_BIT(&iVar241, 1);
			}
			func_198("newItemUnlocks", iVar241);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			unk_0x98C61465A1232E0E();
		}
		unk_0x98C61465A1232E0E();
		Local_87 = { Var8 };
		Local_93 = { Var20 };
		iLocal_86 = Var26;
		bLocal_84 = true;
		unk_0xB5B7B792811308A7("plate");
		func_198("carPlateBack", Var26.f_23);
		unk_0x98C61465A1232E0E();
		unk_0xFE0C6A4F9007749F();
		Var26.f_40 = 0;
		iLocal_101 = 1;
		SYSTEM::SETTIMERA(0);
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			Global_111638.f_20113.f_277[iParam0] = 1;
		}
		else
		{
			if (iVar3 == 0)
			{
				func_431(1125086042, 1);
			}
			else if (iVar3 == 1)
			{
				func_431(-1351791596, 1);
			}
			else if (iVar3 == 2)
			{
				func_431(-516083789, 1);
			}
			else if (iVar3 == 3)
			{
				func_431(-866974241, 1);
			}
			else if (iVar3 == 4)
			{
				func_431(-107618204, 1);
			}
			Global_2097152[func_191()].f_6086.f_41[iLocal_74] = 0;
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_111638.f_20113[iParam0] = { Var26 };
			Global_111638.f_20113.f_130[iParam0] = { Var69 };
			break;
		
		case 3:
			func_202(&Var26);
			Global_2097152[func_191()].f_6086 = { Var69 };
			break;
	}
}

void func_202(var uParam0)
{
	if (uParam0->f_40)
	{
		GAMEPLAY::SET_BIT(&(Global_1323615[iLocal_76].f_102), 25);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1323615[iLocal_76].f_102), 25);
	}
	if (uParam0->f_41)
	{
		GAMEPLAY::SET_BIT(&(Global_1323615[iLocal_76].f_102), 26);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1323615[iLocal_76].f_102), 26);
	}
}

int func_203(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case -899509638:
			return 10;
			break;
		
		case 1119641113:
			return 11;
			break;
	}
	switch (iParam0)
	{
		case -295689028:
			return 6;
			break;
		
		case 633712403:
			return 7;
			break;
	}
	switch (iParam0)
	{
		case -602287871:
			return 5;
			break;
	}
	switch (iParam0)
	{
		case -2039755226:
			return 3;
			break;
		
		case -1126264336:
			return 0;
			break;
		
		case 223258115:
			return 0;
			break;
		
		case 1119641113:
			return 0;
			break;
		
		case -1797613329:
			return 0;
			break;
		
		case -899509638:
			return 3;
			break;
		
		case 16646064:
			return 3;
			break;
	}
	switch (iParam0)
	{
		case 627535535:
			return 0;
			break;
		
		case -239841468:
			return 0;
			break;
		
		case 1790834270:
			return 28;
			break;
		
		case -757735410:
			return 28;
			break;
		
		case -2048333973:
			return 3;
			break;
		
		case 1886268224:
			return 3;
			break;
		
		case 1034187331:
			return 3;
			break;
		
		case -482719877:
			return 27;
			break;
		
		case 1074745671:
			return 27;
			break;
		
		case 1093792632:
			return 27;
			break;
		
		case -2022483795:
			return 26;
			break;
		
		case 196747873:
			return 26;
			break;
		
		case 1802742206:
			return 27;
			break;
		
		case -2122646867:
			return 27;
			break;
		
		case 1717532765:
			return 27;
			break;
		
		case 1107404867:
			return 27;
			break;
		
		case 67753863:
			return 27;
			break;
		
		case -913589546:
			return 27;
			break;
	}
	switch (iParam0)
	{
		case 562680400:
			return 29;
			break;
		
		case -32236122:
			return 29;
			break;
		
		case -1881846085:
			return 29;
			break;
		
		case 1483171323:
			return 29;
			break;
		
		case 886810209:
			return 29;
			break;
		
		case 1254014755:
			return 29;
			break;
		
		case 1897744184:
			return 30;
			break;
		
		case -1924433270:
			return 30;
			break;
		
		case -1210451983:
			return 30;
			break;
		
		case 1356124575:
			return 30;
			break;
		
		case 884483972:
			return 31;
			break;
		
		case 2069146067:
			return 31;
			break;
		
		case 177270108:
			return 32;
			break;
		
		case 387748548:
			return 32;
			break;
		
		case 1502869817:
			return 32;
			break;
		
		case -212993243:
			return 35;
			break;
		
		case 1945374990:
			return 37;
			break;
		
		case 219613597:
			return 36;
			break;
		
		case 1653666139:
			return 36;
			break;
		
		case -286046740:
			return 39;
			break;
		
		case -1254331310:
			return 36;
			break;
		
		case 394110044:
			return 36;
			break;
	}
	if (func_208(iParam0))
	{
		return 33;
	}
	else if (func_207(iParam0))
	{
		return 34;
	}
	else if (func_206(iParam0))
	{
		return 38;
	}
	switch (iParam0)
	{
		case -1242608589:
			return 31;
			break;
	}
	if (func_205(iParam0))
	{
		return 3;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0))
	{
		return 4;
	}
	switch (iParam0)
	{
		case -1216765807:
			return 3;
			break;
		
		case 1283517198:
			return 0;
			break;
		
		case 1672195559:
			return 4;
			break;
		
		case 767087018:
			return 3;
			break;
		
		case 837858166:
			return 0;
			break;
		
		case -1809822327:
			return 0;
			break;
		
		case -1903012613:
			return 0;
			break;
		
		case 142944341:
			return 2;
			break;
		
		case -1041692462:
			return 3;
			break;
		
		case -823509173:
			return 0;
			break;
		
		case -114291515:
			return 4;
			break;
		
		case -891462355:
			return 4;
			break;
		
		case 1824333165:
			return 0;
			break;
		
		case 1126868326:
			return 0;
			break;
		
		case -349601129:
			return 0;
			break;
		
		case -16948145:
			return 2;
			break;
		
		case -1205801634:
			return 3;
			break;
		
		case -2128233223:
			return 0;
			break;
		
		case -1269889662:
			return 0;
			break;
		
		case 1131912276:
			return 0;
			break;
		
		case 1069929536:
			return 2;
			break;
		
		case -1435919434:
			return 0;
			break;
		
		case 117401876:
			return 0;
			break;
		
		case -304802106:
			return 0;
			break;
		
		case 736902334:
			return 1;
			break;
		
		case -1696146015:
			return 3;
			break;
		
		case -713569950:
			return 0;
			break;
		
		case 788747387:
			return 0;
			break;
		
		case 2072687711:
			return 3;
			break;
		
		case 11251904:
			return 3;
			break;
		
		case 2006918058:
			return 2;
			break;
		
		case -789894171:
			return 2;
			break;
		
		case -1311154784:
			return 3;
			break;
		
		case -2072933068:
			return 0;
			break;
		
		case 330661258:
			return 3;
			break;
		
		case -1045541610:
			return 3;
			break;
		
		case 108773431:
			return 3;
			break;
		
		case 1011753235:
			return 1;
			break;
		
		case 448402357:
			return 0;
			break;
		
		case 321739290:
			return 0;
			break;
		
		case -644710429:
			return 0;
			break;
		
		case -1130810103:
			return 0;
			break;
		
		case 1682114128:
			return 0;
			break;
		
		case 80636076:
			return 1;
			break;
		
		case -915704871:
			return 1;
			break;
		
		case -1670998136:
			return 4;
			break;
		
		case -1237253773:
			return 3;
			break;
		
		case -2130482718:
			return 0;
			break;
		
		case -1661854193:
			return 0;
			break;
		
		case 970356638:
			return 0;
			break;
		
		case -566387422:
			return 3;
			break;
		
		case -1291952903:
			return 3;
			break;
		
		case -5153954:
			return 3;
			break;
		
		case -591610296:
			return 1;
			break;
		
		case 55628203:
			return 4;
			break;
		
		case -391594584:
			return 0;
			break;
		
		case -89291282:
			return 0;
			break;
		
		case -1995326987:
			return 3;
			break;
		
		case 744705981:
			return 0;
			break;
		
		case 1949211328:
			return 0;
			break;
		
		case 1909141499:
			return 0;
			break;
		
		case 499169875:
			return 1;
			break;
		
		case -1800170043:
			return 0;
			break;
		
		case 349315417:
			return 0;
			break;
		
		case 75131841:
			return 3;
			break;
		
		case -1775728740:
			return 2;
			break;
		
		case -1543762099:
			return 2;
			break;
		
		case 301427732:
			return 4;
			break;
		
		case 37348240:
			return 3;
			break;
		
		case 486987393:
			return 1;
			break;
		
		case 970385471:
			return 0;
			break;
		
		case 418536135:
			return 3;
			break;
		
		case -1289722222:
			return 0;
			break;
		
		case 886934177:
			return 0;
			break;
		
		case -1177863319:
			return 0;
			break;
		
		case -624529134:
			return 1;
			break;
		
		case 1051415893:
			return 3;
			break;
		
		case -1297672541:
			return 3;
			break;
		
		case -1106353882:
			return 3;
			break;
		
		case 861409633:
			return 0;
			break;
		
		case -120287622:
			return 0;
			break;
		
		case 92612664:
			return 0;
			break;
		
		case 544021352:
			return 3;
			break;
		
		case 1269098716:
			return 2;
			break;
		
		case 621481054:
			return 0;
			break;
		
		case -1746576111:
			return 0;
			break;
		
		case -1043459709:
			return 0;
			break;
		
		case -142942670:
			return 3;
			break;
		
		case -631760477:
			return 3;
			break;
		
		case -1660661558:
			return 0;
			break;
		
		case 914654722:
			return 2;
			break;
		
		case -748008636:
			return 2;
			break;
		
		case -2064372143:
			return 2;
			break;
		
		case 165154707:
			return 0;
			break;
		
		case -310465116:
			return 0;
			break;
		
		case -433375717:
			return 3;
			break;
		
		case -845961253:
			return 0;
			break;
		
		case 904750859:
			return 0;
			break;
		
		case -1050465301:
			return 0;
			break;
		
		case -2052737935:
			return 0;
			break;
	}
	switch (iParam0)
	{
		case -634879114:
			return 4;
			break;
		
		case 1032823388:
			return 3;
			break;
		
		case -1461482751:
			return 3;
			break;
		
		case 1348744438:
			return 1;
			break;
		
		case -511601230:
			return 1;
			break;
		
		case -431692672:
			return 3;
			break;
		
		case 1488164764:
			return 0;
			break;
		
		case -909201658:
			return 4;
			break;
		
		case -377465520:
			return 1;
			break;
		
		case 1507916787:
			return 0;
			break;
		
		case 1078682497:
			return 3;
			break;
		
		case -1883869285:
			return 0;
			break;
		
		case -1150599089:
			return 0;
			break;
		
		case -1651067813:
			return 0;
			break;
		
		case 1645267888:
			return 2;
			break;
		
		case 1933662059:
			return 2;
			break;
		
		case -1934452204:
			return 3;
			break;
		
		case -667151410:
			return 2;
			break;
		
		case -589178377:
			return 2;
			break;
		
		case -1207771834:
			return 2;
			break;
		
		case -2045594037:
			return 2;
			break;
		
		case -14495224:
			return 0;
			break;
		
		case -1098802077:
			return 0;
			break;
		
		case 841808271:
			return 3;
			break;
		
		case 782665360:
			return 0;
			break;
		
		case 2136773105:
			return 2;
			break;
		
		case -893578776:
			return 4;
			break;
		
		case 1162065741:
			return 0;
			break;
		
		case -599568815:
			return 2;
			break;
		
		case 788045382:
			return 4;
			break;
		
		case -1453280962:
			return 4;
			break;
		
		case -1189015600:
			return 2;
			break;
		
		case 989381445:
			return 2;
			break;
		
		case -1255452397:
			return 1;
			break;
		
		case -746882698:
			return 1;
			break;
		
		case -186537451:
			return 0;
			break;
		
		case -1030275036:
			return 0;
			break;
		
		case 1221512915:
			return 2;
			break;
		
		case 1349725314:
			return 1;
			break;
		
		case 873639469:
			return 1;
			break;
		
		case -1214505995:
			return 0;
			break;
		
		case 743478836:
			return 4;
			break;
		
		case 231083307:
			return 0;
			break;
		
		case 400514754:
			return 0;
			break;
		
		case -1477580979:
			return 0;
			break;
		
		case 1545842587:
			return 3;
			break;
		
		case -2098947590:
			return 3;
			break;
		
		case 1723137093:
			return 0;
			break;
		
		case -1961627517:
			return 0;
			break;
		
		case -2122757008:
			return 0;
			break;
		
		case -282946103:
			return 0;
			break;
		
		case 1123216662:
			return 3;
			break;
		
		case 384071873:
			return 3;
			break;
		
		case 699456151:
			return 0;
			break;
		
		case -1894894188:
			return 0;
			break;
		
		case -1008861746:
			return 0;
			break;
		
		case 1836027715:
			return 4;
			break;
		
		case 1981688531:
			return 0;
			break;
		
		case 1127861609:
			return 4;
			break;
		
		case -1233807380:
			return 4;
			break;
		
		case -400295096:
			return 4;
			break;
		
		case 290013743:
			return 0;
			break;
		
		case 408192225:
			return 3;
			break;
		
		case 338562499:
			return 3;
			break;
		
		case -140902153:
			return 4;
			break;
		
		case -1600252419:
			return 0;
			break;
		
		case -1673356438:
			return 0;
			break;
		
		case 1341619767:
			return 0;
			break;
		
		case -825837129:
			return 1;
			break;
		
		case -1622444098:
			return 3;
			break;
		
		case 1373123368:
			return 3;
			break;
		
		case 1777363799:
			return 0;
			break;
		
		case 65402552:
			return 2;
			break;
		
		case -1403128555:
			return 3;
			break;
		
		case -1122289213:
			return 1;
			break;
		
		case -1193103848:
			return 1;
			break;
		
		case 758895617:
			return 3;
			break;
		
		case -339587598:
			return 0;
			break;
		
		case -159126838:
			return 4;
			break;
		
		case 1265391242:
			return 4;
			break;
		
		case -1089039904:
			return 0;
			break;
		
		case -1372848492:
			return 3;
			break;
		
		case 1039032026:
			return 0;
			break;
		
		case -591651781:
			return 0;
			break;
		
		case 237764926:
			return 1;
			break;
		
		case -901163259:
			return 0;
			break;
		
		case 80636076:
			return 1;
			break;
		
		case -915704871:
			return 1;
			break;
		
		case 723973206:
			return 1;
			break;
		
		case -326143852:
			return 0;
			break;
		
		case 1233534620:
			return 0;
			break;
		
		case 1923400478:
			return 0;
			break;
		
		case -401643538:
			return 0;
			break;
		
		case 771711535:
			return 0;
			break;
		
		case -1066334226:
			return 0;
			break;
	}
	switch (iParam0)
	{
		case -2140431165:
			return 4;
			break;
		
		case -808831384:
			return 2;
			break;
		
		case 850565707:
			return 2;
			break;
		
		case -344943009:
			return 0;
			break;
		
		case 1039032026:
			return 0;
			break;
		
		case -682211828:
			return 0;
			break;
		
		case 2006142190:
			return 4;
			break;
		
		case 1770332643:
			return 0;
			break;
		
		case -1137532101:
			return 0;
			break;
		
		case 884422927:
			return 0;
			break;
		
		case -2124201592:
			return 0;
			break;
		
		case -808457413:
			return 2;
			break;
		
		case 1830407356:
			return 0;
			break;
		
		case -2095439403:
			return 0;
			break;
		
		case -1450650718:
			return 0;
			break;
		
		case -1685021548:
			return 0;
			break;
		
		case 1337041428:
			return 2;
			break;
		
		case -810318068:
			return 0;
			break;
		
		case 728614474:
			return 0;
			break;
		
		case 523724515:
			return 0;
			break;
		
		case 627094268:
			return 0;
			break;
		
		case -1311240698:
			return 0;
			break;
		
		case -1883002148:
			return 0;
			break;
		
		case -394074634:
			return 2;
			break;
		
		case -48031959:
			return 0;
			break;
		
		case -511601230:
			return 1;
			break;
		
		case -789894171:
			return 2;
			break;
		
		case 1177543287:
			return 2;
			break;
		
		case 1737773231:
			return 1;
			break;
		
		case 444171386:
			return 0;
			break;
		
		case 914654722:
			return 2;
			break;
	}
	switch (iParam0)
	{
		case 1581459400:
		case 1987142870:
		case -1566741232:
		case -498054846:
			return 3;
			break;
		
		case -2119578145:
		case -1790546981:
		case 1896491931:
		case 525509695:
			return 3;
			break;
		
		case -1013450936:
		case -1361687965:
		case -2040426790:
		case 2006667053:
			return 0;
			break;
		
		case -831834716:
		case 2068293287:
			return 3;
			break;
		
		case -777172681:
		case 1887331236:
		case 1549126457:
		case 101905590:
		case -663299102:
		case 390201602:
		case 86520421:
		case -2103821244:
		case -1071380347:
		case 741090084:
		case 2067820283:
		case -1232836011:
		case 482197771:
		case 819197656:
		case 159274291:
		case 223240013:
		case 1504306544:
		case 1939284556:
		case 917809321:
			return 3;
			break;
		
		case 683047626:
			return 2;
			break;
		
		case -1210451983:
		case 562680400:
		case -32236122:
		case 1897744184:
		case -1881846085:
		case -1924433270:
		case 1356124575:
		case 1104234922:
		case -1532697517:
			return 3;
			break;
		
		case 1909189272:
		case 931280609:
		case 500482303:
		case -420911112:
		case 2044532910:
		case -54332285:
		case 321186144:
		case -638562243:
		case -1988428699:
		case -1566607184:
		case 1591739866:
		case 1279262537:
		case -2096690334:
		case -1146969353:
		case -507495760:
		case -1168952148:
		case -49115651:
		case 1456744817:
		case 1721676810:
		case 1009171724:
		case 668439077:
		case -801550069:
		case -688189648:
		case 444994115:
		case 628003514:
		case -331467772:
		case -27326686:
		case -2061049099:
		case 540101442:
		case 2139203625:
		case 469291905:
		case -48031959:
		case 1938952078:
		case -907477130:
		case -1987130134:
		case 1747439474:
		case 1118611807:
		case 409049982:
		case 340154634:
		case -1132721664:
		case -834353991:
		case 1717532765:
		case 83136452:
		case 987469656:
		case 1802742206:
		case 1284356689:
		case 1456336509:
		case -1756021720:
		case 872704284:
		case 394110044:
		case 408825843:
		case 301304410:
		case 740289177:
		case -1960756985:
		case 960812448:
		case 1693751655:
		case 2031587082:
		case -1254331310:
		case -2122646867:
		case -2098954619:
		case 2134119907:
		case 1107404867:
		case 67753863:
		case -913589546:
		case -631322662:
		case -838099166:
		case -1810806490:
		case -1358197432:
		case 1492612435:
		case -1728685474:
		case 1181339704:
			return 3;
			break;
	}
	return 0;
}

int func_205(int iParam0)
{
	switch (iParam0)
	{
		case -1216765807:
		case -1041692462:
		case -1696146015:
		case 2072687711:
		case 11251904:
		case -1311154784:
		case 330661258:
		case -1045541610:
		case 108773431:
		case -566387422:
		case -1291952903:
		case -5153954:
		case -1995326987:
		case 37348240:
		case 418536135:
		case 1051415893:
		case 544021352:
		case -433375717:
		case 1032823388:
		case -1461482751:
		case -1934452204:
		case 1737773231:
		case 1545842587:
		case -2098947590:
		case 1123216662:
		case 384071873:
		case 338562499:
		case -1622444098:
		case 758895617:
		case -1237253773:
		case -1205801634:
		case 75131841:
		case 841808271:
		case 1373123368:
		case -431692672:
		case 1078682497:
		case 941800958:
		case 410882957:
		case 640818791:
		case -1860900134:
		case 2071877360:
		case -2096818938:
			return 1;
			break;
		
		case 1581459400:
		case 1987142870:
		case -1566741232:
		case -498054846:
			return 1;
			break;
		
		case -2119578145:
		case -1790546981:
		case 525509695:
		case 1896491931:
			return 1;
			break;
		
		case -2039755226:
		case -899509638:
			return 1;
			break;
		
		case 1878062887:
		case 634118882:
		case -2030171296:
		case 906642318:
		case -114627507:
		case -1660945322:
		case -1943285540:
		case -1485523546:
		case 1489967196:
		case 1102544804:
			return 1;
			break;
		
		case 972671128:
			return 1;
			break;
		
		case 633712403:
			return 1;
			break;
		
		case 1274868363:
		case -305727417:
		case 1426219628:
		case -1295027632:
		case -1829802492:
		case 2123327359:
		case 1475773103:
		case -1757836725:
		case -2100640717:
		case -1845487887:
		case -1930048799:
		case 1203490606:
		case -432008408:
		case 234062309:
			return 1;
			break;
		
		case -777172681:
		case 1887331236:
		case 1549126457:
		case 101905590:
		case -663299102:
		case 390201602:
		case 86520421:
		case -2103821244:
		case -1071380347:
		case 741090084:
		case 2067820283:
		case -1232836011:
		case 482197771:
		case 819197656:
			return 1;
			break;
		
		case -2115793025:
		case 822018448:
		case -1606187161:
		case -1009268949:
		case -570033273:
		case 6774487:
		case 2035069708:
		case 1873600305:
		case -255678177:
		case -1404136503:
		case -405626514:
		case -674927303:
		case -440768424:
		case 1491277511:
		case -609625092:
		case -1523428744:
		case -1558399629:
		case 1026149675:
		case -618617997:
		case -1289178744:
		case -1842748181:
			return 1;
			break;
		
		case -1590337689:
		case 682434785:
		case -2022483795:
		case -239841468:
		case 1790834270:
		case -827162039:
		case -312295511:
		case 627535535:
		case -757735410:
		case -2048333973:
		case 1034187331:
		case -1758137366:
		case -1649536104:
		case 941494461:
		case 1180875963:
		case 272929391:
		case 989294410:
		case -1912017790:
		case 196747873:
		case -482719877:
		case 1093792632:
		case 777714999:
		case 1886268224:
		case 1074745671:
			return 1;
			break;
		
		case 1234311532:
		case 719660200:
		case -1405937764:
		case -982130927:
			return 1;
			break;
		
		case 159274291:
		case 1939284556:
		case 223240013:
		case 433954513:
		case 1504306544:
		case 917809321:
		case -1210451983:
		case 562680400:
		case -32236122:
		case 1897744184:
		case -1881846085:
		case -1924433270:
		case 1356124575:
		case 177270108:
		case 387748548:
			return 1;
			break;
		
		case 1392481335:
		case 2049897956:
		case 1841130506:
		case -998177792:
		case -1242608589:
			return 1;
			break;
		
		case 1483171323:
		case 886810209:
		case -1693015116:
		case -692292317:
		case -1435527158:
		case 1181327175:
		case 1489874736:
		case -2118308144:
		case -212993243:
		case 447548909:
		case 1561920505:
		case -1848994066:
		case 1741861769:
		case 1104234922:
		case 1871995513:
		case 1352136073:
		case -313185164:
		case -2079788230:
		case 600450546:
		case -410205223:
		case 867799010:
		case -1529242755:
		case 903794909:
		case -1532697517:
		case 15219735:
		case 661493923:
		case 838982985:
		case -391595372:
		case -121446169:
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 1909189272:
		case 931280609:
		case -1267543371:
		case 1617472902:
		case 1046206681:
		case -1259134696:
		case 1115909093:
		case 1031562256:
		case -376434238:
		case -986944621:
		case -1134706562:
		case -2120700196:
		case -214906006:
		case -988501280:
		case 1254014755:
		case -726768679:
		case -1566607184:
		case 1591739866:
		case 1279262537:
		case -2096690334:
		case -1146969353:
		case -507495760:
		case -1168952148:
		case -49115651:
		case 1456744817:
		case 1721676810:
		case 1009171724:
		case 668439077:
		case -801550069:
		case -688189648:
		case 444994115:
		case 628003514:
		case -331467772:
		case -27326686:
		case -2061049099:
		case 2139203625:
		case 1637620610:
		case -755532233:
		case -1374500452:
		case -1812949672:
		case -1924800695:
		case -1890996696:
		case -1694081890:
		case 373261600:
		case 1537277726:
		case 840387324:
		case 1542143200:
		case 679453769:
		case -1375060657:
		case -1106120762:
		case -1744505657:
		case 2038858402:
		case -2042350822:
		case 1742022738:
		case 1239571361:
		case -715746948:
		case -579747861:
		case 1909700336:
		case -1293924613:
		case -1478704292:
		case -286046740:
		case -1349095620:
		case 686471183:
		case 310284501:
		case 722226637:
		case 1934384720:
		case -362150785:
		case 1854776567:
		case -664141241:
		case -941272559:
		case -882629065:
		case -1620126302:
		case -1829436850:
		case -324618589:
		case 1044193113:
		case 1862507111:
		case -682108547:
		case 1323778901:
		case -1804415708:
		case 916547552:
		case -208911803:
		case -447711397:
		case 1416466158:
		case 833469436:
		case 1118611807:
		case 409049982:
		case 340154634:
		case -1132721664:
		case -834353991:
		case 1717532765:
		case 83136452:
		case 987469656:
		case 1802742206:
		case 1284356689:
		case 1456336509:
		case -1756021720:
		case 872704284:
		case 394110044:
		case 408825843:
		case 301304410:
		case 740289177:
		case -1960756985:
		case -1254331310:
		case -2122646867:
		case 2134119907:
		case -2098954619:
		case 1107404867:
		case -913589546:
		case -631322662:
		case -838099166:
		case -1810806490:
		case -1358197432:
		case 1492612435:
		case -1728685474:
		case 1181339704:
			return 1;
			break;
	}
	return 0;
}

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case -1146969353:
		case 668439077:
		case -801550069:
		case 1721676810:
		case -688189648:
		case 1009171724:
		case 444994115:
		case 628003514:
		case -27326686:
		case 540101442:
		case -2061049099:
		case 2139203625:
		case 1637620610:
		case -755532233:
		case -1374500452:
		case -1812949672:
		case -1924800695:
		case -1890996696:
		case -1694081890:
		case 373261600:
		case 1537277726:
		case 840387324:
		case 1542143200:
		case 679453769:
		case -1375060657:
		case -1106120762:
		case -1744505657:
		case 2038858402:
		case -2042350822:
		case 1742022738:
		case 1239571361:
		case -715746948:
		case -579747861:
		case 1909700336:
		case -1293924613:
		case -1478704292:
			return 1;
		
		default:
	}
	return 0;
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case -42959138:
		case -32878452:
		case 447548909:
		case 1181327175:
		case -1435527158:
		case 1692272545:
			return 1;
			break;
	}
	return 0;
}

int func_208(int iParam0)
{
	switch (iParam0)
	{
		case -1984275979:
		case -1763555241:
		case -749299473:
		case -975345305:
		case -392675425:
		case 1043222410:
		case -1386191424:
		case -1523619738:
		case -1007528109:
		case -1700874274:
		case 1565978651:
		case 1036591958:
		case -644710429:
		case -2118308144:
		case 1489874736:
		case -1693015116:
		case -692292317:
		case 447548909:
		case -726768679:
			return 1;
			break;
	}
	return 0;
}

int func_209(int iParam0)
{
	iVar0 = func_136(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_134(iVar0, 0);
}

int func_210(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1790546981:
		case -1013450936:
		case -1361687965:
		case 1896491931:
		case -2040426790:
		case 2006667053:
			return 1;
			break;
		
		case 223258115:
			if (!Global_262145.f_14219)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1797613329:
			if (!Global_262145.f_14220)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -899509638:
			if (!Global_262145.f_14218)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1126264336:
			if (!Global_262145.f_14221)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1119641113:
			if (!Global_262145.f_14223)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -2039755226:
			if (!Global_262145.f_14222)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -295689028:
		case 633712403:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -2022483795:
			if (Global_262145.f_18669)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1790834270:
			if (Global_262145.f_18671)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -757735410:
			if (Global_262145.f_18675)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 196747873:
			if (Global_262145.f_18672)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1093792632:
			if (Global_262145.f_18679)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -482719877:
			if (Global_262145.f_18677)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1074745671:
			if (Global_262145.f_18682)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_262145.f_20625)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_262145.f_20626)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -2061049099:
		case 373261600:
		case 1742022738:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 628003514:
		case 1537277726:
		case 1239571361:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1009171724:
		case -1924800695:
		case -1744505657:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -27326686:
		case -1812949672:
		case -1374500452:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1721676810:
		case 840387324:
		case -715746948:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -688189648:
		case -1375060657:
		case -1293924613:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 668439077:
		case -1694081890:
		case -2042350822:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1802742206:
		case -2122646867:
		case 67753863:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1717532765:
		case 1107404867:
		case -913589546:
			return 1;
			break;
	}
	return 0;
}

int func_211(int iParam0)
{
	switch (iParam0)
	{
		case -1:
		case 8:
		case 9:
			return 0;
			break;
	}
	return 1;
}

int func_212(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 2046537925:
		case -1536924937:
		case -1779120616:
		case -1627000575:
		case 1912215274:
		case -1973172295:
		case 1127131465:
		case -1647941228:
		case 353883353:
		case -34623805:
		case 456714581:
		case -1205689942:
		case -1683328900:
		case 741586030:
		case 1171614426:
		case 1938952078:
		case -956048545:
		case 469291905:
		case -845979911:
		case 1682114128:
		case 1283517198:
		case 1560980623:
		case -1346687836:
		case -1776615689:
		case -810318068:
		case 728614474:
		case -186537451:
		case 1131912276:
		case 448402357:
		case -836512833:
		case 1147287684:
		case 1491375716:
		case -537896628:
		case 321739290:
		case 1127861609:
		case -1233807380:
		case -400295096:
		case 1641462412:
		case -2076478498:
		case 1783355638:
		case -2033222435:
		case -884690486:
		case -1961627517:
		case 2072156101:
		case 1739845664:
		case 2053223216:
		case 2112052861:
		case 771711535:
		case -845961253:
		case -2096818938:
		case -1649536104:
		case -1912017790:
		case 682434785:
		case -1988428699:
		case 219613597:
		case 1945374990:
		case 1653666139:
			return 0;
			break;
		
		default:
			if (func_206(iParam0))
			{
				return 0;
			}
			break;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_213()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return 0;
	}
	if (func_161())
	{
		if (func_216())
		{
			iVar0 = func_215();
			iVar1 = func_214();
			fVar2 = ((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_262145.f_121) && iVar0 >= 8)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_214()
{
	iVar0 = (iVar0 + Global_1387921);
	iVar0 = (iVar0 + Global_1387924);
	return iVar0;
}

int func_215()
{
	iVar0 = (iVar0 + Global_1387922);
	iVar0 = (iVar0 + Global_1387923);
	iVar0 = (iVar0 + Global_1387921);
	iVar0 = (iVar0 + Global_1387924);
	iVar0 = (iVar0 + Global_1387926);
	iVar0 = (iVar0 + Global_1387925);
	iVar0 = (iVar0 + func_120(-1619412469));
	iVar0 = (iVar0 + func_120(1659604058));
	iVar0 = (iVar0 + func_120(242250445));
	iVar0 = (iVar0 + func_120(-1440509968));
	iVar0 = (iVar0 + func_120(55646841));
	iVar0 = (iVar0 + func_120(995519836));
	iVar0 = (iVar0 + func_120(915369945));
	iVar0 = (iVar0 + func_120(-1029657896));
	iVar0 = (iVar0 + func_120(1938637151));
	return iVar0;
}

int func_216()
{
	TIME::GET_POSIX_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var7 = { func_240(-77337635) };
	if (func_217(Var7, Var0, 7))
	{
		return 1;
	}
	return 0;
}

int func_217(struct<7> Param0, struct<7> Param7, int iParam14)
{
	iVar0 = func_238(Param7);
	iVar1 = func_228(Param0, iParam14);
	if (iVar1 == -15)
	{
		return 0;
	}
	if (func_218(iVar0, iVar1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_218(int iParam0, int iParam1)
{
	if (!func_226(iParam1) || !func_226(iParam0))
	{
		return 1;
	}
	iVar0 = func_224(iParam0);
	iVar1 = func_224(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_223(iParam0);
	iVar1 = func_223(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_222(iParam0);
	iVar1 = func_222(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_221(iParam0);
	iVar1 = func_221(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_220(iParam0);
	iVar1 = func_220(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_219(iParam0);
	iVar1 = func_219(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_219(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_220(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_221(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_222(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_223(int iParam0)
{
	return iParam0 & 15;
}

var func_224(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_225(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_225(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_226(int iParam0)
{
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_219(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_220(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_221(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_224(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_223(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_222(iParam0);
	if (iVar5 < 1 || iVar5 > func_227(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_227(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_228(struct<7> Param0, int iParam7)
{
	if (func_237(Param0) == 0)
	{
		uVar0 = func_238(Param0);
		uVar1 = uVar0;
		func_229(&uVar1, 0, 0, 0, iParam7, 0, 0);
		if (iParam7 == 0)
		{
			uVar1 = uVar0;
		}
		return uVar1;
	}
	return uVar2;
}

void func_229(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_224(*uParam0);
	iVar1 = func_223(*uParam0);
	iVar2 = func_222(*uParam0);
	iVar3 = func_221(*uParam0);
	iVar4 = func_220(*uParam0);
	iVar5 = func_219(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_227(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_227(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_230(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_230(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_236(uParam0, iParam1);
	func_235(uParam0, iParam2);
	func_234(uParam0, iParam3);
	func_233(uParam0, iParam5);
	func_232(uParam0, iParam4);
	func_231(uParam0, iParam6);
}

void func_231(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_232(var uParam0, int iParam1)
{
	iVar0 = func_223(*uParam0);
	iVar1 = func_224(*uParam0);
	if (iParam1 < 1 || iParam1 > func_227(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_233(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_234(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_235(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_236(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_237(struct<7> Param0)
{
	if ((((((Param0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
	{
		return 1;
	}
	return 0;
}

var func_238(struct<6> Param0, var uParam6)
{
	if (Param0 > 0)
	{
		func_231(&uVar0, Param0);
	}
	if (Param0.f_1 > 0)
	{
		func_233(&uVar0, func_239(Param0.f_1));
	}
	if (Param0.f_2 > 0)
	{
		func_232(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0)
	{
		func_234(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0)
	{
		func_235(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0)
	{
		func_236(&uVar0, Param0.f_5);
	}
	return uVar0;
}

int func_239(int iParam0)
{
	if (iParam0 < 1)
	{
		return 0;
	}
	if (iParam0 > 12)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
	}
	return 0;
}

struct<7> func_240(int iParam0)
{
	uVar0 = iParam0;
	if (STATS::STAT_GET_DATE(uVar0, &Var8, 7, -1))
	{
		return Var8;
	}
	return Var1;
}

int func_241()
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
		{
			GAMEPLAY::SET_BIT(&uVar0, iVar1);
		}
		iVar1++;
	}
	return uVar0;
}

int func_242(var uParam0)
{
	if (!func_212(*uParam0))
	{
		return 1;
	}
	if (iLocal_152)
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_151)) < 1500)
		{
			return 0;
		}
	}
	iLocal_152 = 0;
	STREAMING::REQUEST_MODEL(*uParam0);
	if (!STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(*uParam0, (660.3092f + IntToFloat(PLAYER::PLAYER_ID() * 10)), 4977.608f, 1222.024f, 0f, 0, 0, 0);
	}
	else
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(*uParam0, 660.3092f, 4977.608f, 1222.024f, 0f, 0, 0, 0);
	}
	if (VEHICLE::GET_NUM_MOD_KITS(iVar0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iVar0, 0);
	}
	VEHICLE::SET_VEHICLE_WHEEL_TYPE(iVar0, Global_1323615[iLocal_76].f_69);
	uParam0->f_33[0] = AUDIO::_0xACB5DCCA1EC76840(iVar0);
	uParam0->f_33[1] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(iVar0, 14, 0);
	uParam0->f_33[2] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(iVar0, 14, 1);
	uParam0->f_33[3] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(iVar0, 14, 2);
	uParam0->f_33[4] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(iVar0, 14, 3);
	uParam0->f_24 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 11) + 1;
	uParam0->f_25 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 12) + 1;
	uParam0->f_26 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 4) + 1;
	uParam0->f_28 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 14) + 1;
	uParam0->f_29 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 16) + 1;
	uParam0->f_30 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 15) + 1;
	uParam0->f_31 = func_243(iVar0);
	uParam0->f_32 = VEHICLE::_0xEEBFC7A7EFDC35B4(iVar0);
	uParam0->f_39 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iVar0);
	uParam0->f_27 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 23) + 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (*uParam0 == -808457413)
		{
			uParam0->f_26 = 0;
		}
		if (*uParam0 == -1450650718)
		{
			if (uParam0->f_26 > 1)
			{
				uParam0->f_26 = 1;
			}
		}
	}
	VEHICLE::DELETE_VEHICLE(&iVar0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam0);
	iLocal_152 = 1;
	uLocal_151 = NETWORK::GET_NETWORK_TIME();
	SYSTEM::SETTIMERA(0);
	return 1;
}

float func_243(int iParam0)
{
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0)
	{
		if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 0)
		{
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
	return fVar6;
}

void func_244(int iParam0, int iParam1)
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

var func_245(char* sParam0)
{
	return APP::APP_GET_STRING(func_28(sParam0));
}

bool func_246(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_76870, 0);
}

int func_247(int iParam0, int iParam1)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96075[iVar1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96075[iVar1], 0))
		{
			if (Global_96085[iVar1] == iParam0)
			{
				if (iParam1 == 0 || iParam1 == ENTITY::GET_ENTITY_MODEL(Global_96075[iVar1]))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_248(int iParam0)
{
	return iParam0 == 1;
}

int func_249(int iParam0, int iParam1)
{
	if (func_250(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_437(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_250(int iParam0)
{
	return iParam0 < 3;
}

bool func_251()
{
	return Global_98796.f_346 > 0;
}

bool func_252(int iParam0)
{
	return func_253(iParam0, 0, 0);
}

int func_253(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return GAMEPLAY::IS_BIT_SET(Global_98796.f_1357[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_83() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_51(func_254(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_254(int iParam0)
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

int func_255()
{
	if (func_246(0))
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

int func_256(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	GAMEPLAY::CLEAR_BIT(&Global_7356, 10);
	iVar0 = 3;
	if (func_258(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			Global_7966[3] = { func_257(iParam0) };
			Global_8043 = iParam0;
			StringCopy(&Global_8044, sParam5, 64);
			GAMEPLAY::SET_BIT(&Global_7356, 1);
			GAMEPLAY::SET_BIT(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_257(int iParam0)
{
	return Global_1798[iParam0].f_3;
}

int func_258(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	if (iParam13 > 99)
	{
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_272();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19486 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_111638.f_14046[Global_19486].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-757906387) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-757906387) > 0)
		{
			return 0;
		}
	}
	if (func_271() == 0)
	{
		func_269();
		return 0;
	}
	func_268(Global_21872);
	StringCopy(&(Global_111638.f_14136[Global_21872]), sParam1, 64);
	Global_111638.f_14136[Global_21872].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_111638.f_14136[Global_21872].f_24 = iParam2;
	}
	Global_111638.f_14136[Global_21872].f_25 = iParam7;
	Global_111638.f_14136[Global_21872].f_26 = uParam8;
	Global_111638.f_14136[Global_21872].f_29 = uParam9;
	Global_111638.f_14136[Global_21872].f_30 = uParam12;
	Global_111638.f_14136[Global_21872].f_31 = uParam11;
	Global_111638.f_14136[Global_21872].f_28 = 0;
	Global_111638.f_14136[Global_21872].f_32 = iParam3;
	StringCopy(&(Global_111638.f_14136[Global_21872].f_33), sParam4, 64);
	Global_111638.f_14136[Global_21872].f_49 = iParam6;
	StringCopy(&(Global_111638.f_14136[Global_21872].f_50), sParam5, 64);
	Global_111638.f_14136[Global_21872].f_66 = iParam13;
	StringCopy(&(Global_111638.f_14136[Global_21872].f_67), sParam14, 64);
	StringCopy(&(Global_111638.f_14136[Global_21872].f_83), sParam15, 64);
	if (GAMEPLAY::IS_BIT_SET(Global_7356, 10))
	{
		Global_111638.f_14136[Global_21872].f_99[0] = 1;
		Global_111638.f_14136[Global_21872].f_99[1] = 1;
		Global_111638.f_14136[Global_21872].f_99[2] = 1;
		Global_8062 = 4;
		func_267(0);
		func_267(2);
		func_267(1);
	}
	else
	{
		func_272();
		switch (iParam16)
		{
			case 3:
				Global_111638.f_14136[Global_21872].f_99[Global_19486] = 1;
				break;
			
			case 0:
				Global_111638.f_14136[Global_21872].f_99[0] = 1;
				break;
			
			case 2:
				Global_111638.f_14136[Global_21872].f_99[2] = 1;
				break;
			
			case 1:
				Global_111638.f_14136[Global_21872].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19486)
			{
				case 0:
					func_267(0);
					Global_8062 = 0;
					break;
				
				case 1:
					func_267(1);
					Global_8062 = 1;
					break;
				
				case 2:
					func_267(2);
					Global_8062 = 2;
					break;
				
				case 3:
					func_267(3);
					Global_8062 = 3;
					break;
				
				default:
					Global_8062 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_7356, 10))
		{
			Global_111638.f_14046[0].f_17 = 1;
			Global_111638.f_14046[1].f_17 = 1;
			Global_111638.f_14046[2].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_111638.f_14046[Global_19486].f_17 = 1;
					break;
				
				case 0:
					Global_111638.f_14046[0].f_17 = 1;
					break;
				
				case 2:
					Global_111638.f_14046[2].f_17 = 1;
					break;
				
				case 1:
					Global_111638.f_14046[1].f_17 = 1;
					break;
				}
			}
	}
	Global_21874[Global_21872] = 0;
	if (bParam10)
	{
		func_272();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8161[Global_19486][0].f_259 == 1)
		{
			if (!func_4())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_266(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_263(1);
			func_266(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_259(uParam0, sParam1);
	return 1;
}

void func_259(var uParam0, char* sParam1)
{
	if (!func_260())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, 1654525105, GAMEPLAY::GET_HASH_KEY(sParam1), 0);
}

int func_260()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_97())
	{
		return 0;
	}
	if (func_261(PLAYER::PLAYER_ID()))
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

bool func_261(int iParam0)
{
	return func_262(iParam0, 20);
}

bool func_262(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

void func_263(int iParam0)
{
	Global_21873 = 0;
	Global_7961 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_7925[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_439(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1].f_11)
				{
					if (iVar0 == Global_7363[iVar1].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_7357, 3))
								{
									iVar2 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19668 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_265(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar2);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_264(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1].f_11)
				{
					if (iVar0 == Global_7363[iVar1].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111638.f_14136[iVar3].f_24 != 0)
									{
										if (Global_111638.f_14136[iVar3].f_28 == 0)
										{
											if (Global_111638.f_14136[iVar3].f_99[Global_19486] == 1)
											{
												Global_21873++;
											}
										}
									}
									iVar3++;
								}
								func_264(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76622)
								{
									iVar4 = 0;
									iVar4 = Global_4268499;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268500[iVar5].f_24 != 0)
										{
											if (Global_4268500[iVar5].f_28 == 0)
											{
												if (Global_4268500[iVar5].f_99[Global_19486] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_264(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19486)
									{
										case 0:
											iVar6 = Global_42607;
											break;
										
										case 1:
											iVar6 = Global_42608;
											break;
										
										case 2:
											iVar6 = Global_42609;
											break;
										
										default:
											break;
									}
									func_264(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_264(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_265(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7362);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 2)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_7357, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_265(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar7);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_7357, 3))
								{
									iVar8 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19668 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_265(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar8);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_265(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if ((iVar1 == 23 && GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_7363[iVar1]), "CELL_BENWEB")) && GAMEPLAY::IS_BIT_SET(Global_7357, 6))
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_265(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (Global_7363[iVar1].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_264(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else
							{
								func_264(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_264(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, sParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam6));
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_265(sParam7);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_265(sParam8);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_265(sParam9);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_265(sParam10);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_265(sParam11);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_265(char* sParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

void func_266(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, sParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_267(int iParam0)
{
	uVar0 = Global_111638.f_14046[iParam0].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_268(int iParam0)
{
	uVar0 = TIME::GET_CLOCK_SECONDS();
	uVar1 = TIME::GET_CLOCK_MINUTES();
	uVar2 = TIME::GET_CLOCK_HOURS();
	uVar3 = TIME::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = TIME::GET_CLOCK_MONTH() + 1;
	uVar5 = TIME::GET_CLOCK_YEAR();
	Global_111638.f_14136[iParam0].f_18 = uVar0;
	Global_111638.f_14136[iParam0].f_18.f_1 = uVar1;
	Global_111638.f_14136[iParam0].f_18.f_2 = uVar2;
	Global_111638.f_14136[iParam0].f_18.f_3 = uVar3;
	Global_111638.f_14136[iParam0].f_18.f_4 = uVar4;
	Global_111638.f_14136[iParam0].f_18.f_5 = uVar5;
}

void func_269()
{
	if (Global_76622)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111638.f_14136[Global_21872].f_18 = -1;
	Global_111638.f_14136[Global_21872].f_18.f_1 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_2 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_3 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_270(Global_111638.f_14136[iVar2].f_18, Global_111638.f_14136[Global_21872].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111638.f_14136[Global_21872].f_24 = 1;
}

int func_270(struct<6> Param0, struct<6> Param6)
{
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_271()
{
	if (Global_76622)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_111638.f_14136[iVar2].f_24 == 0)
		{
			Global_21872 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111638.f_14136[Global_21872].f_18 = -1;
	Global_111638.f_14136[Global_21872].f_18.f_1 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_2 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_3 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_111638.f_14136[iVar2].f_24 == 0 || Global_111638.f_14136[iVar2].f_24 == 1)
		{
			if (!func_270(Global_111638.f_14136[iVar2].f_18, Global_111638.f_14136[Global_21872].f_18))
			{
				Global_21872 = iVar2;
			}
		}
		if (Global_111638.f_14136[iVar2].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_21872 == 34)
	{
		return 0;
	}
	Global_111638.f_14136[Global_21872].f_99[0] = 0;
	Global_111638.f_14136[Global_21872].f_99[1] = 0;
	Global_111638.f_14136[Global_21872].f_99[2] = 0;
	return 1;
}

void func_272()
{
	if (func_439(14))
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
		Global_19486 = func_278();
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

int func_273(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	if (func_275(1))
	{
		if (Global_76622)
		{
			if (NETWORKCASH::NETWORK_CAN_SPEND_MONEY(iParam0, 0, 1, 0, -1, 0))
			{
				return 1;
			}
		}
		else if (func_274(func_278()) >= iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_274(int iParam0)
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

bool func_275(bool bParam0)
{
	if (Global_76622)
	{
		return func_160(PLAYER::PLAYER_ID(), bParam0, !func_276(1));
	}
	return !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
}

bool func_276(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2450632.f_684.f_28 && GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_2450632.f_684.f_31);
	}
	return Global_2450632.f_684.f_28;
}

int func_277(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	GAMEPLAY::CLEAR_BIT(&Global_7356, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_258(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3] = { func_257(iParam0) };
			Global_8043 = iParam0;
			GAMEPLAY::SET_BIT(&Global_7356, 1);
			GAMEPLAY::SET_BIT(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

int func_278()
{
	func_279();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_279()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_281(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_280(PLAYER::PLAYER_PED_ID());
			if (func_250(iVar0) && (!func_439(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_250(Global_111638.f_2358.f_539.f_4321))
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

int func_280(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_281(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_281(int iParam0)
{
	if (func_250(iParam0))
	{
		return func_282(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_282(int iParam0)
{
	return Global_1798[iParam0];
}

void func_283(var uParam0, int iParam1)
{
	uParam0->f_36 = 0;
	uParam0->f_35 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2097152[func_191()].f_6086.f_54 = 1;
		Global_2097152[func_191()].f_6086.f_55 = 1;
		Global_2097152[func_191()].f_6086.f_60 = uParam0->f_32;
		Global_2097152[func_191()].f_6086.f_56 = { uParam0->f_28 };
		Global_2097152[func_191()].f_6086.f_61++;
	}
	else
	{
		Global_111638.f_20113.f_265 = 1;
		Global_111638.f_20113.f_266 = iParam1;
		Global_111638.f_20113.f_261 = 1;
		Global_111638.f_20113.f_271 = uParam0->f_32;
		Global_111638.f_20113.f_267 = { uParam0->f_28 };
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			Global_111638.f_20113.f_281[iParam1] = 1;
			Global_111638.f_20113.f_285[iParam1]++;
			STATS::STAT_INCREMENT(887148679, 1f);
		}
	}
}

char* func_284(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
			break;
		
		case 0:
			return "S_H_01";
			break;
		
		case 1:
			return "S_H_02";
			break;
		
		case 2:
			return "S_H_03";
			break;
		
		case 3:
			return "S_H_04";
			break;
		
		case 4:
			return "S_H_05";
			break;
		
		case 5:
			return "S_H_06";
			break;
		
		case 6:
			return "S_H_07";
			break;
		
		case 7:
			return "S_CL_01";
			break;
		
		case 8:
			return "S_CL_02";
			break;
		
		case 9:
			return "S_CL_03";
			break;
		
		case 10:
			return "S_CL_04";
			break;
		
		case 11:
			return "S_CL_05";
			break;
		
		case 12:
			return "S_CL_06";
			break;
		
		case 13:
			return "S_CL_07";
			break;
		
		case 14:
			return "S_CM_01";
			break;
		
		case 15:
			return "S_CM_03";
			break;
		
		case 16:
			return "S_CM_04";
			break;
		
		case 17:
			return "S_CM_05";
			break;
		
		case 18:
			return "S_CH_01";
			break;
		
		case 19:
			return "S_CH_02";
			break;
		
		case 20:
			return "S_CH_03";
			break;
		
		case 21:
			return "S_CA_01";
			break;
		
		case 22:
			return "S_T_01";
			break;
		
		case 23:
			return "S_T_02";
			break;
		
		case 24:
			return "S_T_03";
			break;
		
		case 25:
			return "S_T_04";
			break;
		
		case 26:
			return "S_T_05";
			break;
		
		case 27:
			return "S_T_06";
			break;
		
		case 28:
			return "S_G_01";
			break;
		
		case 29:
			return "S_G_02";
			break;
		
		case 30:
			return "S_G_03";
			break;
		
		case 31:
			return "S_G_04";
			break;
		
		case 32:
			return "S_G_05";
			break;
		
		case 33:
			return "S_G_06";
			break;
		
		case 34:
			return "S_G_07";
			break;
		
		case 35:
			return "S_G_08";
			break;
		
		case 36:
			return "S_G_09";
			break;
		
		case 37:
			return "S_G_10";
			break;
		
		case 38:
			return "S_G_11";
			break;
		
		case 39:
			return "S_MO_01";
			break;
		
		case 40:
			return "S_MO_05";
			break;
		
		case 41:
			return "S_MO_06";
			break;
		
		case 42:
			return "S_MO_07";
			break;
		
		case 43:
			return "S_MO_08";
			break;
		
		case 44:
			return "S_MO_09";
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
				case 5:
					return "S_MO_10";
				
				case 11:
					return "S_MO_B";
				
				case 10:
					return "S_MO_T";
				
				case 12:
					return "S_MO_HA";
				
				case 13:
					return "S_MO_AOC";
				
				case 14:
					return "S_MO_AOC";
					break;
				
				case 15:
					return "S_MO_AOC";
					break;
				
				case 16:
					return "S_MO_AOC";
					break;
				
				case 17:
					return "S_MO_AOC";
					break;
			}
			return "S_MO_11";
			break;
		
		case 46:
			return "S_G_12";
			break;
		
		case 47:
			return "S_G_13";
			break;
		
		case 48:
			return "S_G_14";
			break;
		
		case 49:
			return "S_G_15";
			break;
		
		case 52:
			return "S_G_16";
			break;
		
		case 50:
			return "S_H_08";
			break;
		
		case 51:
			return "S_CL_09";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

bool func_285(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, int iParam8)
{
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_286(&uVar0, iParam0, func_361(), sParam1, iVar165, 3, iParam8, sParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_286(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (UI::_0x43E4111189E54F0E(sParam2) > 7)
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (UI::_0x43E4111189E54F0E(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = func_360(sParam2, sParam3);
	iVar2 = 0;
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = GAMEPLAY::GET_HASH_KEY(sParam7);
	}
	if (func_359(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_353(uParam6))
	{
		return 0;
	}
	if (func_350(iVar0, iVar1, iVar2))
	{
		if (func_349())
		{
			return 0;
		}
		func_348();
		return func_293(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_292(iParam4))
	{
		return 0;
	}
	func_287(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_287(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1370527.f_40.f_1 = iParam0;
	Global_1370527.f_40.f_2 = iParam1;
	Global_1370527.f_40.f_3 = iParam2;
	StringCopy(&(Global_1370527.f_40.f_4), sParam3, 16);
	Global_1370527.f_40.f_8 = iParam4;
	Global_1370527.f_40.f_9 = iParam5;
	Global_1370527.f_40.f_14 = uParam6;
	func_288(iParam4);
	func_348();
	Global_1370527.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_288(int iParam0)
{
	if (func_291(iParam0))
	{
		func_290();
		return;
	}
	func_289();
}

void func_289()
{
	Global_1370527.f_40.f_10 = 0;
}

void func_290()
{
	Global_1370527.f_40.f_10 = 1;
}

int func_291(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_292(int iParam0)
{
	return iParam0 > Global_1370527.f_40.f_8;
}

int func_293(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	func_347();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_344(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_341(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_344(uParam0, sParam3, sParam4);
		}
		return func_323(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_322(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_319(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_318(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_294(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_294(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	func_317();
	bVar0 = true;
	if (func_296(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_295(120000);
		return 1;
	}
	return 0;
}

void func_295(int iParam0)
{
	Global_1370527.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1370527.f_40.f_12 = 1;
}

int func_296(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	iVar0 = func_97();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_311(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1370527.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_310(uParam5, bParam6, &iVar3);
	uVar5 = func_308(iParam7, &iVar3);
	iVar6 = 0;
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (GAMEPLAY::IS_BIT_SET(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_307(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_300(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(iParam4, 0))
	{
		func_299();
	}
	func_317();
	func_298();
	func_297();
	return 1;
}

void func_297()
{
	Global_1370527.f_57 = 0;
	Global_1370527.f_57.f_1 = 0;
}

void func_298()
{
	Global_1370527.f_40 = 3;
}

void func_299()
{
	GAMEPLAY::SET_BIT(&Global_7356, 8);
}

int func_300(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_301(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			GAMEPLAY::SET_BIT(&Global_4269765, 0);
		}
		return 1;
	}
	return 0;
}

int func_301(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	if (iParam13 > 99)
	{
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_272();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19486 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_4269750 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1870099198) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1346140115) > 0)
		{
			return 0;
		}
	}
	if (func_306() == 0)
	{
		func_304();
		return 0;
	}
	func_303(Global_4269749);
	StringCopy(&(Global_4268500[Global_4269749]), sParam1, 64);
	Global_4268500[Global_4269749].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4268500[Global_4269749].f_24 = iParam2;
	}
	Global_4268500[Global_4269749].f_25 = iParam7;
	Global_4268500[Global_4269749].f_26 = uParam8;
	Global_4268500[Global_4269749].f_29 = uParam9;
	Global_4268500[Global_4269749].f_30 = uParam12;
	Global_4268500[Global_4269749].f_31 = uParam11;
	Global_4268500[Global_4269749].f_28 = 0;
	Global_4268500[Global_4269749].f_32 = iParam3;
	StringCopy(&(Global_4268500[Global_4269749].f_33), sParam4, 64);
	Global_4268500[Global_4269749].f_49 = iParam6;
	StringCopy(&(Global_4268500[Global_4269749].f_50), sParam5, 64);
	Global_4268500[Global_4269749].f_66 = iParam13;
	StringCopy(&(Global_4268500[Global_4269749].f_67), sParam14, 64);
	StringCopy(&(Global_4268500[Global_4269749].f_83), sParam15, 64);
	func_272();
	switch (iParam16)
	{
		case 3:
			Global_4268500[Global_4269749].f_99[Global_19486] = 1;
			break;
		
		case 0:
			Global_4268500[Global_4269749].f_99[0] = 1;
			break;
		
		case 2:
			Global_4268500[Global_4269749].f_99[2] = 1;
			break;
		
		case 1:
			Global_4268500[Global_4269749].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_19486)
		{
			case 0:
				func_267(0);
				break;
			
			case 1:
				func_267(1);
				break;
			
			case 2:
				func_267(2);
				break;
			
			case 3:
				func_267(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4269750 = 1;
				break;
			
			case 0:
				Global_4269750 = 1;
				break;
			
			case 2:
				Global_4269750 = 1;
				break;
			
			case 1:
				Global_4269750 = 1;
				break;
			}
	}
	Global_21874[Global_4269749] = 0;
	if (bParam10)
	{
		func_272();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8161[Global_19486][0].f_259 == 1)
		{
			if (!func_4())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_266(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_263(1);
			func_266(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_302(uParam0, sParam1);
	return 1;
}

void func_302(var uParam0, char* sParam1)
{
	if (!func_260())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, -1180597171, GAMEPLAY::GET_HASH_KEY(sParam1), 0);
}

void func_303(int iParam0)
{
	uVar0 = TIME::GET_CLOCK_SECONDS();
	uVar1 = TIME::GET_CLOCK_MINUTES();
	uVar2 = TIME::GET_CLOCK_HOURS();
	uVar3 = TIME::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = TIME::GET_CLOCK_MONTH() + 1;
	uVar5 = TIME::GET_CLOCK_YEAR();
	Global_4268500[iParam0].f_18 = uVar0;
	Global_4268500[iParam0].f_18.f_1 = uVar1;
	Global_4268500[iParam0].f_18.f_2 = uVar2;
	Global_4268500[iParam0].f_18.f_3 = uVar3;
	Global_4268500[iParam0].f_18.f_4 = uVar4;
	Global_4268500[iParam0].f_18.f_5 = uVar5;
}

void func_304()
{
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4269749 = 11;
	Global_4268500[Global_4269749].f_18 = -1;
	Global_4268500[Global_4269749].f_18.f_1 = 0;
	Global_4268500[Global_4269749].f_18.f_2 = 0;
	Global_4268500[Global_4269749].f_18.f_3 = 0;
	Global_4268500[Global_4269749].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_305(Global_4268500[iVar2].f_18, Global_4268500[Global_4269749].f_18))
		{
			Global_4269749 = iVar2;
		}
		iVar2++;
	}
	Global_4268500[Global_4269749].f_24 = 1;
}

int func_305(struct<6> Param0, struct<6> Param6)
{
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_306()
{
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4268500[iVar2].f_24 == 0)
		{
			Global_4269749 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4269749 = 11;
	Global_4268500[Global_4269749].f_18 = -1;
	Global_4268500[Global_4269749].f_18.f_1 = 0;
	Global_4268500[Global_4269749].f_18.f_2 = 0;
	Global_4268500[Global_4269749].f_18.f_3 = 0;
	Global_4268500[Global_4269749].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4268500[iVar2].f_24 == 0 || Global_4268500[iVar2].f_24 == 1)
		{
			if (!func_305(Global_4268500[iVar2].f_18, Global_4268500[Global_4269749].f_18))
			{
				Global_4269749 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4269749 == 11)
	{
		return 0;
	}
	Global_4268500[Global_4269749].f_99[0] = 0;
	Global_4268500[Global_4269749].f_99[1] = 0;
	Global_4268500[Global_4269749].f_99[2] = 0;
	return 1;
}

int func_307(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_301(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			GAMEPLAY::SET_BIT(&Global_4269765, 0);
		}
		return 1;
	}
	return 0;
}

int func_308(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_309(2, iParam1);
	return iParam0;
}

void func_309(int iParam0, var uParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_310(char* sParam0, bool bParam1, int iParam2)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return sLocal_21;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, sLocal_21))
	{
		return sLocal_21;
	}
	func_309(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return UI::_GET_LABEL_TEXT(sParam0);
}

int func_311(int iParam0)
{
	iVar0 = func_314(iParam0);
	if (iVar0 == -1)
	{
		func_312(iParam0, 1);
		return 0;
	}
	Global_1389078[iVar0].f_4 = 1;
	return Global_1389078[iVar0].f_2;
}

void func_312(int iParam0, bool bParam1)
{
	if (!func_160(iParam0, 0, 1))
	{
		return;
	}
	if (func_314(iParam0) != -1)
	{
		return;
	}
	if (Global_1389241)
	{
		if (iParam0 == Global_1389241.f_1)
		{
			return;
		}
	}
	if (func_313(iParam0))
	{
		return;
	}
	if (Global_1389279 >= 32)
	{
		return;
	}
	Global_1389246[Global_1389279] = iParam0;
	Global_1389279++;
	if (bParam1)
	{
	}
}

int func_313(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389279)
	{
		if (Global_1389246[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_314(int iParam0)
{
	if (!func_160(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389239 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389239)
	{
		if (Global_1389078[iVar0].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1389078[iVar0].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1389078[iVar0].f_2))
			{
				return iVar0;
			}
			func_315(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_315(int iParam0)
{
	if (iParam0 >= Global_1389239)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1389078[iParam0].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389078[iParam0].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1389078[iParam0].f_2), 64);
			UI::_0x317EBA71D7543F52(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1389078[iParam0].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389239)
	{
		Global_1389078[iVar32] = { Global_1389078[iVar33] };
		iVar32++;
		iVar33++;
	}
	func_316(&(Global_1389078[iVar32]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_316(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_97();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_317()
{
	Global_1370527.f_40.f_9 = 4;
}

int func_318(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	func_317();
	bVar0 = false;
	return func_296(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_319(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bVar0 = false;
	return func_320(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_320(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	iVar0 = func_97();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_311(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1370527.f_40.f_13))
			{
				return 0;
			}
		}
		Global_21866 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_310(uParam5, bParam6, &iVar3);
	uVar5 = func_308(iParam7, &iVar3);
	iVar6 = 0;
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (GAMEPLAY::IS_BIT_SET(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_256(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_277(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(iParam4, 0))
	{
		func_299();
	}
	func_321();
	func_298();
	func_297();
	return 1;
}

void func_321()
{
	Global_1370527.f_40.f_9 = 3;
}

int func_322(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (AI::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_321();
	bVar0 = true;
	if (func_320(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_295(120000);
		return 1;
	}
	return 0;
}

int func_323(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (AI::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (GAMEPLAY::IS_BIT_SET(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (GAMEPLAY::IS_BIT_SET(iParam4, 4))
	{
		bVar0 = func_340(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_329(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (GAMEPLAY::IS_BIT_SET(iParam4, 3))
		{
			func_328(1);
		}
		if (GAMEPLAY::IS_BIT_SET(iParam4, 5))
		{
			func_327(1);
		}
		func_326();
		func_298();
		func_325();
		func_324();
		return 1;
	}
	return 0;
}

void func_324()
{
	Global_2546572 = 0;
}

void func_325()
{
	Global_1370527.f_57 = 1;
	Global_1370527.f_57.f_1 = 0;
}

void func_326()
{
	Global_1370527.f_40.f_9 = 1;
}

void func_327(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_7358, 0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_7358, 0);
	}
}

void func_328(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_7356, 20);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_7356, 20);
	}
}

int func_329(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_339(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_330(sParam3, iParam4, bParam7);
}

int func_330(char* sParam0, int iParam1, bool bParam2)
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
					func_338();
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
		if (func_337(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_336();
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
				func_272();
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
				if (func_335())
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
			if (func_334())
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
			func_333();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_332();
		func_331();
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
		func_338();
	}
	return 0;
}

void func_331()
{
	if (!func_260())
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

void func_332()
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

void func_333()
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

int func_334()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_335()
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

void func_336()
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

bool func_337(int iParam0, int iParam1)
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

void func_338()
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

void func_339(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
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

int func_340(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_339(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_20853 = 1;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_330(sParam3, iParam4, bParam7);
}

int func_341(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (AI::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_343(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_342();
		func_326();
		func_298();
		func_325();
		func_324();
		return 1;
	}
	return 0;
}

void func_342()
{
	Global_21823 = 0;
}

bool func_343(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_339(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 1;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 1;
	Global_20859 = 0;
	StringCopy(&Global_20953, sParam5, 24);
	Global_2621441 = 0;
	return func_330(sParam3, iParam4, bParam8);
}

int func_344(var uParam0, char* sParam1, char* sParam2)
{
	if (func_346(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_345();
		func_298();
		func_325();
		return 1;
	}
	return 0;
}

void func_345()
{
	Global_1370527.f_40.f_9 = 2;
}

bool func_346(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_339(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_330(sParam2, iParam3, 0);
}

void func_347()
{
	Global_1370527.f_55 = Global_1370527.f_40.f_1;
	Global_1370527.f_55.f_1 = Global_1370527.f_40.f_10;
}

void func_348()
{
	Global_1370527.f_40 = 1;
}

bool func_349()
{
	return Global_1370527.f_40 == 1;
}

int func_350(int iParam0, int iParam1, int iParam2)
{
	if (!func_351(iParam0))
	{
		return 0;
	}
	if (Global_1370527.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1370527.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_351(int iParam0)
{
	if (!func_352())
	{
		return 0;
	}
	if (!Global_1370527.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_352()
{
	if (Global_1370527.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_353(int iParam0)
{
	if (func_358())
	{
		return 0;
	}
	if (func_357())
	{
		return 0;
	}
	if (func_356(0))
	{
		return 0;
	}
	if (Global_1312467.f_18 != 0)
	{
		return 0;
	}
	if (Global_1662006 || func_355())
	{
		return 0;
	}
	if (!GAMEPLAY::IS_BIT_SET(uParam0, 6))
	{
		if (func_354())
		{
			return 0;
		}
	}
	return 1;
}

bool func_354()
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1387714);
}

int func_355()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_356(int iParam0)
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

bool func_357()
{
	return Global_1370527.f_40 == 3;
}

bool func_358()
{
	return func_334();
}

int func_359(int iParam0, int iParam1, int iParam2)
{
	if (!func_357())
	{
		return 0;
	}
	return func_350(iParam0, iParam1, iParam2);
}

int func_360(char* sParam0, char* sParam1)
{
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return GAMEPLAY::GET_HASH_KEY(&cVar0);
}

char* func_361()
{
	return "TXTMSG";
}

int func_362(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam2)
	{
		if (!bParam4)
		{
		}
		Global_2097152[func_191()].f_6174.f_1274 = NETWORK::_GET_POSIX_TIME();
	}
	if (!bParam4)
	{
	}
	iVar1 = func_380(1411, iParam0);
	func_17(iVar1, uParam1->f_137, iParam3, 1);
	if (!bParam4)
	{
	}
	iVar1 = func_380(1412, iParam0);
	func_17(iVar1, uParam1->f_138, iParam3, 1);
	if (!bParam4)
	{
	}
	if (func_379(iParam0))
	{
	}
	else
	{
		iVar1 = func_380(1413, iParam0);
		func_17(iVar1, *uParam1, iParam3, 1);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (iVar0 < 25)
			{
				iVar1 = (func_380(1414, iParam0) + iVar0);
				func_17(iVar1, uParam1->f_9[iVar0], iParam3, 1);
			}
			else
			{
				iVar1 = (func_378(iParam0) + (iVar0 - 25));
				func_17(iVar1, uParam1->f_9[iVar0], iParam3, 1);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = (func_380(1439, iParam0) + iVar0);
			func_17(iVar1, uParam1->f_59[iVar0], iParam3, 1);
			iVar0++;
		}
	}
	iVar1 = func_380(1441, iParam0);
	func_17(iVar1, uParam1->f_62, iParam3, 1);
	iVar1 = func_380(1442, iParam0);
	func_17(iVar1, uParam1->f_63, iParam3, 1);
	iVar1 = func_380(1443, iParam0);
	func_17(iVar1, uParam1->f_64, iParam3, 1);
	if (func_379(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_380(1444, iParam0);
		func_17(iVar1, uParam1->f_65, iParam3, 1);
	}
	iVar1 = func_380(1445, iParam0);
	func_17(iVar1, uParam1->f_67, iParam3, 1);
	if (func_379(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_380(1446, iParam0);
		func_17(iVar1, uParam1->f_68, iParam3, 1);
	}
	iVar1 = func_380(1447, iParam0);
	func_17(iVar1, uParam1->f_69, iParam3, 1);
	iVar1 = func_380(1448, iParam0);
	func_17(iVar1, uParam1->f_70, -1, 1);
	iVar1 = func_380(1449, iParam0);
	func_17(iVar1, uParam1->f_71, iParam3, 1);
	iVar1 = func_380(1450, iParam0);
	func_17(iVar1, uParam1->f_72, iParam3, 1);
	iVar1 = func_380(1451, iParam0);
	func_17(iVar1, uParam1->f_73, iParam3, 1);
	iVar1 = func_380(1452, iParam0);
	func_17(iVar1, uParam1->f_5, iParam3, 1);
	iVar1 = func_380(1453, iParam0);
	func_17(iVar1, uParam1->f_6, iParam3, 1);
	iVar1 = func_380(1454, iParam0);
	func_17(iVar1, uParam1->f_7, iParam3, 1);
	iVar1 = func_380(1455, iParam0);
	func_17(iVar1, uParam1->f_8, iParam3, 1);
	if (func_379(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_380(3880, iParam0);
		func_17(iVar1, uParam1->f_74, iParam3, 1);
		iVar1 = func_380(3881, iParam0);
		func_17(iVar1, uParam1->f_75, iParam3, 1);
		iVar1 = func_380(3882, iParam0);
		func_17(iVar1, uParam1->f_76, iParam3, 1);
		iVar1 = func_377(iParam0);
		func_17(iVar1, uParam1->f_97, iParam3, 1);
		iVar1 = func_376(iParam0);
		func_17(iVar1, uParam1->f_99, iParam3, 1);
		iVar1 = func_365(iParam0);
		func_17(iVar1, uParam1->f_98, iParam3, 1);
	}
	uVar2 = Global_2097152[func_191()].f_6174.f_1274;
	if (bParam5)
	{
		uVar2 = NETWORK::_GET_POSIX_TIME();
	}
	func_131(1628, uVar2, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_131(func_364(1, iParam0), uParam1->f_102, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_131(func_364(2, iParam0), uParam1->f_103, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_131(func_364(3, iParam0), uParam1->f_104, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_131(func_364(4, iParam0), uParam1->f_66, iParam3, 1, 0);
	func_131(func_364(5, iParam0), uParam1->f_77, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_131(func_364(7, iParam0), uParam1->f_139, iParam3, 1, 0);
	if (!func_379(iParam0))
	{
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1)))
		{
			func_363(func_364(6, iParam0), &(uParam1->f_1), iParam3);
			if (!bParam4)
			{
			}
		}
		else if (!bParam4)
		{
		}
	}
	if (!bParam4)
	{
	}
	return 1;
}

void func_363(int iParam0, var uParam1, int iParam2)
{
	iVar0 = Global_2548434[iParam0][func_34(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_LICENSE_PLATE(iVar0, uParam1);
	}
}

int func_364(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case 79:
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				
				case 232:
					return 7296;
				
				case 233:
					return 7303;
				
				case 234:
					return 7310;
				
				case 235:
					return 7317;
				
				case 236:
					return 7324;
				
				case 237:
					return 7331;
				
				case 238:
					return 7338;
				
				case 239:
					return 7345;
				
				case 240:
					return 7352;
				
				case 241:
					return 7359;
				
				case 242:
					return 7366;
				
				case 243:
					return 7373;
				
				case 244:
					return 7380;
				
				case 245:
					return 7387;
				
				case 246:
					return 7394;
				
				case 247:
					return 7401;
				
				case 248:
					return 7408;
				
				case 249:
					return 7415;
				
				case 250:
					return 7422;
				
				case 251:
					return 7429;
				
				case 252:
					return 7436;
				
				case 253:
					return 7443;
				
				case 254:
					return 7450;
				
				case 255:
					return 7457;
				
				case 256:
					return 7464;
				
				case 257:
					return 7471;
				
				case 258:
					return 7478;
				
				case 259:
					return 7485;
				
				case 260:
					return 7492;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8012;
				
				case 262:
					return 8019;
				
				case 263:
					return 8026;
				
				case 264:
					return 8033;
				
				case 265:
					return 8040;
				
				case 266:
					return 8047;
				
				case 267:
					return 8054;
				
				case 268:
					return 8061;
				
				case 269:
					return 8068;
				
				case 270:
					return 8075;
				
				case 271:
					return 8536;
				
				case 272:
					return 8543;
				
				case 273:
					return 8550;
				
				case 274:
					return 8557;
				
				case 275:
					return 8564;
				
				case 276:
					return 8571;
				
				case 277:
					return 8578;
				
				case 278:
					return 8585;
				
				case 279:
					return 8592;
				
				case 280:
					return 8599;
				
				case 281:
					return 8981;
				
				case 282:
					return 8988;
				
				case 283:
					return 8995;
				
				case 284:
					return 9002;
				
				case 285:
					return 9009;
				
				case 286:
					return 9016;
				
				case 287:
					return 9023;
				
				case 288:
					return 9030;
				
				case 289:
					return 9037;
				
				case 290:
					return 9044;
				
				case 291:
					return 9051;
				
				case 292:
					return 9057;
				
				case 293:
					return 9063;
				
				case 294:
					return 9069;
				
				case 295:
					return 9076;
				
				case 296:
					return 9083;
				
				case 297:
					return 9090;
				
				case 298:
					return 9097;
				
				case 299:
					return 9104;
				
				case 300:
					return 9111;
				
				case 301:
					return 9118;
				
				case 302:
					return 9125;
				
				case 303:
					return 9132;
				
				case 304:
					return 9139;
				
				case 305:
					return 9145;
				
				case 306:
					return 9151;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case 79:
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				
				case 262:
					return 8020;
				
				case 263:
					return 8027;
				
				case 264:
					return 8034;
				
				case 265:
					return 8041;
				
				case 266:
					return 8048;
				
				case 267:
					return 8055;
				
				case 268:
					return 8062;
				
				case 269:
					return 8069;
				
				case 270:
					return 8076;
				
				case 271:
					return 8537;
				
				case 272:
					return 8544;
				
				case 273:
					return 8551;
				
				case 274:
					return 8558;
				
				case 275:
					return 8565;
				
				case 276:
					return 8572;
				
				case 277:
					return 8579;
				
				case 278:
					return 8586;
				
				case 279:
					return 8593;
				
				case 280:
					return 8600;
				
				case 281:
					return 8982;
				
				case 282:
					return 8989;
				
				case 283:
					return 8996;
				
				case 284:
					return 9003;
				
				case 285:
					return 9010;
				
				case 286:
					return 9017;
				
				case 287:
					return 9024;
				
				case 288:
					return 9031;
				
				case 289:
					return 9038;
				
				case 290:
					return 9045;
				
				case 291:
					return 9052;
				
				case 292:
					return 9058;
				
				case 293:
					return 9064;
				
				case 294:
					return 9070;
				
				case 295:
					return 9077;
				
				case 296:
					return 9084;
				
				case 297:
					return 9091;
				
				case 298:
					return 9098;
				
				case 299:
					return 9105;
				
				case 300:
					return 9112;
				
				case 301:
					return 9119;
				
				case 302:
					return 9126;
				
				case 303:
					return 9133;
				
				case 304:
					return 9140;
				
				case 305:
					return 9146;
				
				case 306:
					return 9152;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case 79:
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				
				case 262:
					return 8021;
				
				case 263:
					return 8028;
				
				case 264:
					return 8035;
				
				case 265:
					return 8042;
				
				case 266:
					return 8049;
				
				case 267:
					return 8056;
				
				case 268:
					return 8063;
				
				case 269:
					return 8070;
				
				case 270:
					return 8077;
				
				case 271:
					return 8538;
				
				case 272:
					return 8545;
				
				case 273:
					return 8552;
				
				case 274:
					return 8559;
				
				case 275:
					return 8566;
				
				case 276:
					return 8573;
				
				case 277:
					return 8580;
				
				case 278:
					return 8587;
				
				case 279:
					return 8594;
				
				case 280:
					return 8601;
				
				case 281:
					return 8983;
				
				case 282:
					return 8990;
				
				case 283:
					return 8997;
				
				case 284:
					return 9004;
				
				case 285:
					return 9011;
				
				case 286:
					return 9018;
				
				case 287:
					return 9025;
				
				case 288:
					return 9032;
				
				case 289:
					return 9039;
				
				case 290:
					return 9046;
				
				case 291:
					return 9053;
				
				case 292:
					return 9059;
				
				case 293:
					return 9065;
				
				case 294:
					return 9071;
				
				case 295:
					return 9078;
				
				case 296:
					return 9085;
				
				case 297:
					return 9092;
				
				case 298:
					return 9099;
				
				case 299:
					return 9106;
				
				case 300:
					return 9113;
				
				case 301:
					return 9120;
				
				case 302:
					return 9127;
				
				case 303:
					return 9134;
				
				case 304:
					return 9141;
				
				case 305:
					return 9147;
				
				case 306:
					return 9153;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case 79:
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				
				case 262:
					return 8022;
				
				case 263:
					return 8029;
				
				case 264:
					return 8036;
				
				case 265:
					return 8043;
				
				case 266:
					return 8050;
				
				case 267:
					return 8057;
				
				case 268:
					return 8064;
				
				case 269:
					return 8071;
				
				case 270:
					return 8078;
				
				case 271:
					return 8539;
				
				case 272:
					return 8546;
				
				case 273:
					return 8553;
				
				case 274:
					return 8560;
				
				case 275:
					return 8567;
				
				case 276:
					return 8574;
				
				case 277:
					return 8581;
				
				case 278:
					return 8588;
				
				case 279:
					return 8595;
				
				case 280:
					return 8602;
				
				case 281:
					return 8984;
				
				case 282:
					return 8991;
				
				case 283:
					return 8998;
				
				case 284:
					return 9005;
				
				case 285:
					return 9012;
				
				case 286:
					return 9019;
				
				case 287:
					return 9026;
				
				case 288:
					return 9033;
				
				case 289:
					return 9040;
				
				case 290:
					return 9047;
				
				case 291:
					return 9054;
				
				case 292:
					return 9060;
				
				case 293:
					return 9066;
				
				case 294:
					return 9072;
				
				case 295:
					return 9079;
				
				case 296:
					return 9086;
				
				case 297:
					return 9093;
				
				case 298:
					return 9100;
				
				case 299:
					return 9107;
				
				case 300:
					return 9114;
				
				case 301:
					return 9121;
				
				case 302:
					return 9128;
				
				case 303:
					return 9135;
				
				case 304:
					return 9142;
				
				case 305:
					return 9148;
				
				case 306:
					return 9154;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case 79:
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				
				case 262:
					return 8023;
				
				case 263:
					return 8030;
				
				case 264:
					return 8037;
				
				case 265:
					return 8044;
				
				case 266:
					return 8051;
				
				case 267:
					return 8058;
				
				case 268:
					return 8065;
				
				case 269:
					return 8072;
				
				case 270:
					return 8079;
				
				case 271:
					return 8540;
				
				case 272:
					return 8547;
				
				case 273:
					return 8554;
				
				case 274:
					return 8561;
				
				case 275:
					return 8568;
				
				case 276:
					return 8575;
				
				case 277:
					return 8582;
				
				case 278:
					return 8589;
				
				case 279:
					return 8596;
				
				case 280:
					return 8603;
				
				case 281:
					return 8985;
				
				case 282:
					return 8992;
				
				case 283:
					return 8999;
				
				case 284:
					return 9006;
				
				case 285:
					return 9013;
				
				case 286:
					return 9020;
				
				case 287:
					return 9027;
				
				case 288:
					return 9034;
				
				case 289:
					return 9041;
				
				case 290:
					return 9048;
				
				case 291:
					return 9055;
				
				case 292:
					return 9061;
				
				case 293:
					return 9067;
				
				case 294:
					return 9073;
				
				case 295:
					return 9080;
				
				case 296:
					return 9087;
				
				case 297:
					return 9094;
				
				case 298:
					return 9101;
				
				case 299:
					return 9108;
				
				case 300:
					return 9115;
				
				case 301:
					return 9122;
				
				case 302:
					return 9129;
				
				case 303:
					return 9136;
				
				case 304:
					return 9143;
				
				case 305:
					return 9149;
				
				case 306:
					return 9155;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case 79:
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				
				case 262:
					return 8025;
				
				case 263:
					return 8032;
				
				case 264:
					return 8039;
				
				case 265:
					return 8046;
				
				case 266:
					return 8053;
				
				case 267:
					return 8060;
				
				case 268:
					return 8067;
				
				case 269:
					return 8074;
				
				case 270:
					return 8081;
				
				case 271:
					return 8542;
				
				case 272:
					return 8549;
				
				case 273:
					return 8556;
				
				case 274:
					return 8563;
				
				case 275:
					return 8570;
				
				case 276:
					return 8577;
				
				case 277:
					return 8584;
				
				case 278:
					return 8591;
				
				case 279:
					return 8598;
				
				case 280:
					return 8605;
				
				case 281:
					return 8987;
				
				case 282:
					return 8994;
				
				case 283:
					return 9001;
				
				case 284:
					return 9008;
				
				case 285:
					return 9015;
				
				case 286:
					return 9022;
				
				case 287:
					return 9029;
				
				case 288:
					return 9036;
				
				case 289:
					return 9043;
				
				case 290:
					return 9050;
				
				case 294:
					return 9075;
				
				case 295:
					return 9082;
				
				case 296:
					return 9089;
				
				case 297:
					return 9096;
				
				case 298:
					return 9103;
				
				case 299:
					return 9110;
				
				case 300:
					return 9117;
				
				case 301:
					return 9124;
				
				case 302:
					return 9131;
				
				case 303:
					return 9138;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case 79:
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				
				case 262:
					return 8024;
				
				case 263:
					return 8031;
				
				case 264:
					return 8038;
				
				case 265:
					return 8045;
				
				case 266:
					return 8052;
				
				case 267:
					return 8059;
				
				case 268:
					return 8066;
				
				case 269:
					return 8073;
				
				case 270:
					return 8080;
				
				case 271:
					return 8541;
				
				case 272:
					return 8548;
				
				case 273:
					return 8555;
				
				case 274:
					return 8562;
				
				case 275:
					return 8569;
				
				case 276:
					return 8576;
				
				case 277:
					return 8583;
				
				case 278:
					return 8590;
				
				case 279:
					return 8597;
				
				case 280:
					return 8604;
				
				case 281:
					return 8986;
				
				case 282:
					return 8993;
				
				case 283:
					return 9000;
				
				case 284:
					return 9007;
				
				case 285:
					return 9014;
				
				case 286:
					return 9021;
				
				case 287:
					return 9028;
				
				case 288:
					return 9035;
				
				case 289:
					return 9042;
				
				case 290:
					return 9049;
				
				case 291:
					return 9056;
				
				case 292:
					return 9062;
				
				case 293:
					return 9068;
				
				case 294:
					return 9074;
				
				case 295:
					return 9081;
				
				case 296:
					return 9088;
				
				case 297:
					return 9095;
				
				case 298:
					return 9102;
				
				case 299:
					return 9109;
				
				case 300:
					return 9116;
				
				case 301:
					return 9123;
				
				case 302:
					return 9130;
				
				case 303:
					return 9137;
				
				case 304:
					return 9144;
				
				case 305:
					return 9150;
				
				case 306:
					return 9156;
				
				default:
			}
			break;
	}
	return 1629;
}

int func_365(int iParam0)
{
	if (iParam0 < 10)
	{
		return (7263 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (7263 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (7263 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (7263 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7263 + iParam0) - 12);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9330 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30154 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30154 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_366(11))
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15362;
	}
	else if (iParam0 < 184)
	{
		return ((18061 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18963 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21979 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24565 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26329 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28049 + iParam0) - 271);
	}
	else if (iParam0 < 281)
	{
		return ((28049 + iParam0) - 271);
	}
	return 0;
}

int func_366(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
		
		case 23:
			return 294;
			break;
		
		case 24:
			return 307;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_375(iParam0);
		return func_374(iVar0);
	}
	return (func_367(iParam0, -1) * iParam0 + 1);
}

int func_367(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_370(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_369(iParam1))
			{
				return 0;
			}
			else if (func_368(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 <= 126 && iParam1 > 0)
			{
				if (Global_1049922[iParam1].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049922[iParam1].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049922[iParam1].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
	}
	return 0;
}

int func_368(int iParam0, int iParam1)
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

int func_369(int iParam0)
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

int func_370(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_371(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_371(PLAYER::PLAYER_ID(), 0))
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

bool func_371(int iParam0, bool bParam1)
{
	if (Global_1590373 != func_97())
	{
		if (!func_373(Global_1590373))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1590373)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2425662[Global_1590373].f_195, 24) || func_372(Global_1590373))
				{
					return 1;
				}
			}
		}
	}
	return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_195, 24);
}

int func_372(int iParam0)
{
	if (iParam0 != func_97())
	{
		return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_195, 9);
	}
	return 0;
}

int func_373(int iParam0)
{
	if (iParam0 != func_97())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 2);
	}
	return 0;
}

int func_374(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return -1;
}

int func_375(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

int func_376(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5975 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5975 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5975 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5975 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7242 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9290 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30114 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30114 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_366(11))
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15360;
	}
	else if (iParam0 < 184)
	{
		return ((18011 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18943 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21905 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24505 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26309 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28029 + iParam0) - 271);
	}
	return 0;
}

int func_377(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5935 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5935 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5935 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5935 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7232 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9270 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30094 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30094 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_366(11))
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15359;
	}
	else if (iParam0 < 184)
	{
		return ((17986 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18933 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21868 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24475 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26299 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28019 + iParam0) - 271);
	}
	return 0;
}

int func_378(int iParam0)
{
	iVar0 = (4424 - 4400);
	if (iParam0 < 10)
	{
		return (4400 + (iParam0 * iVar0));
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (4640 + ((iParam0 - 13) * iVar0));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (4880 + ((iParam0 - 26) * iVar0));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5120 + ((iParam0 - 39) * iVar0));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return (6414 + ((iParam0 - 52) * iVar0));
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return (7682 + ((iParam0 - 65) * iVar0));
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return (29534 + ((iParam0 - 281) * iVar0));
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (29774 + ((iParam0 - 294) * iVar0));
	}
	else if (iParam0 < func_366(11))
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 <= 157)
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 == 158)
	{
		return 15282;
	}
	else if (iParam0 < 184)
	{
		return (16061 + ((iParam0 - 159) * iVar0));
	}
	else if (iParam0 < 194)
	{
		return (18163 + ((iParam0 - 184) * iVar0));
	}
	else if (iParam0 < 231)
	{
		return (19019 + ((iParam0 - 194) * iVar0));
	}
	else if (iParam0 < 261)
	{
		return (22195 + ((iParam0 - 231) * iVar0));
	}
	else if (iParam0 < 271)
	{
		return (25539 + ((iParam0 - 261) * iVar0));
	}
	else if (iParam0 < 281)
	{
		return (27259 + ((iParam0 - 271) * iVar0));
	}
	return 0;
}

int func_379(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
			return 1;
			break;
	}
	return 0;
}

int func_380(int iParam0, int iParam1)
{
	if ((iParam0 == 3880 || iParam0 == 3881) || iParam0 == 3882)
	{
		if (iParam1 < 10)
		{
			iVar0 = (iParam0 + iParam1 * 3);
		}
		else if (iParam1 < 23)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3910 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3911 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3912 + (iParam1 - 13) * 3);
			}
		}
		else if (iParam1 < 36)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3946 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3947 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3948 + (iParam1 - 26) * 3);
			}
		}
		else if (iParam1 < 49)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (5855 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (5856 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (5857 + (iParam1 - 39) * 3);
			}
		}
		else if (iParam1 < 62)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (7149 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (7150 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (7151 + (iParam1 - 52) * 3);
			}
		}
		else if (iParam1 < 85)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (9107 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (9108 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (9109 + (iParam1 - 65) * 3);
			}
		}
		else if (iParam1 < func_366(11))
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 <= 157)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 == 158)
		{
			if (iParam0 == 3880)
			{
				iVar0 = 15351;
			}
			else if (iParam0 == 3881)
			{
				iVar0 = 15352;
			}
			else if (iParam0 == 3882)
			{
				iVar0 = 15353;
			}
		}
		else if (iParam1 < 184)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (17786 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (17787 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (17788 + (iParam1 - 159) * 3);
			}
		}
		else if (iParam1 < 194)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (18853 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (18854 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (18855 + (iParam1 - 184) * 3);
			}
		}
		else if (iParam1 < 231)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (21572 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (21573 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (21574 + (iParam1 - 194) * 3);
			}
		}
		else if (iParam1 < 261)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (24265 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (24266 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (24267 + (iParam1 - 231) * 3);
			}
		}
		else if (iParam1 < 271)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (26229 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (26230 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (26231 + (iParam1 - 261) * 3);
			}
		}
		else if (iParam1 < 281)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (27949 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (27950 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (27951 + (iParam1 - 271) * 3);
			}
		}
		else if (iParam1 < 291)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29474 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29475 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29476 + (iParam1 - 281) * 3);
			}
		}
		else if (iParam1 < 304)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29504 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29505 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29506 + (iParam1 - 294) * 3);
			}
		}
	}
	else if (iParam1 < 10)
	{
		iVar0 = (iParam0 + (iParam1 * (1456 - 1411)));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		iVar0 = ((iParam1 - 10) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 1861;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 1862;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 1863;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 1864;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 1865;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 1866;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 1867;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 1868;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 1869;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 1870;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 1871;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 1872;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 1873;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 1874;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 1875;
		}
	}
	else if (iParam1 < 23)
	{
		iVar0 = (1906 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 13) * (1456 - 1411)));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		iVar0 = ((iParam1 - 23) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2356;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2357;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2358;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2359;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2360;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2361;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2362;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2363;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2364;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2365;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2366;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2367;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2368;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2369;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2370;
		}
	}
	else if (iParam1 < 36)
	{
		iVar0 = (2405 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 26) * (1456 - 1411)));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		iVar0 = ((iParam1 - 36) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2855;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2856;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2857;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2858;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2859;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2860;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2861;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2862;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2863;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2864;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2865;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2866;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2867;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2868;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2869;
		}
	}
	else if (iParam1 < 49)
	{
		iVar0 = (5360 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 39) * (1456 - 1411)));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		iVar0 = ((iParam1 - 49) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 5810;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 5811;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 5812;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 5813;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 5814;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 5815;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 5816;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 5817;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 5818;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 5819;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 5820;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 5821;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 5822;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 5823;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 5824;
		}
	}
	else if (iParam1 < 62)
	{
		iVar0 = (6654 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 52) * (1456 - 1411)));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		iVar0 = ((iParam1 - 62) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 7104;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 7105;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 7106;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 7107;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 7108;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 7109;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 7110;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 7111;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 7112;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 7113;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 7114;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 7115;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 7116;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 7117;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 7118;
		}
	}
	else if (iParam1 < 85)
	{
		iVar0 = (8162 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 65) * (1456 - 1411)));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		iVar0 = ((iParam1 - 85) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 9062;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 9063;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 9064;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 9065;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 9066;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 9067;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 9068;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 9069;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 9070;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 9071;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 9072;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 9073;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 9074;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 9075;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 9076;
		}
	}
	else if (iParam1 < func_366(11))
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_366(7)) * (1456 - 1411)));
	}
	else if (iParam1 <= 157)
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_366(7)) * (1456 - 1411)));
	}
	else if (iParam1 == 158)
	{
		iVar0 = (15306 - 1411);
		iVar0 = (iVar0 + iParam0);
	}
	else if (iParam1 < 184)
	{
		iVar0 = (16661 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 159) * (1456 - 1411)));
	}
	else if (iParam1 < 194)
	{
		iVar0 = (18403 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 184) * (1456 - 1411)));
	}
	else if (iParam1 < 231)
	{
		iVar0 = (19907 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 194) * (1456 - 1411)));
	}
	else if (iParam1 < 261)
	{
		iVar0 = (22915 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 231) * (1456 - 1411)));
	}
	else if (iParam1 < 271)
	{
		iVar0 = (25779 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 261) * (1456 - 1411)));
	}
	else if (iParam1 < 281)
	{
		iVar0 = (27499 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 271) * (1456 - 1411)));
	}
	else if (iParam1 < 291)
	{
		iVar0 = (28484 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 281) * (1456 - 1411)));
	}
	else if (iParam1 >= 291 && iParam1 <= 293)
	{
		iVar0 = ((iParam1 - 291) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 28934;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 28935;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 28936;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 28937;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 28938;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 28939;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 28940;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 28941;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 28942;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 28943;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 28944;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 28945;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 28946;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 28947;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 28948;
		}
	}
	else if (iParam1 < 304)
	{
		iVar0 = (28979 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 294) * (1456 - 1411)));
	}
	else if (iParam1 >= 304 && iParam1 <= 306)
	{
		iVar0 = ((iParam1 - 304) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 29429;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 29430;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 29431;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 29432;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 29433;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 29434;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 29435;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 29436;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 29437;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 29438;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 29439;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 29440;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 29441;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 29442;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 29443;
		}
	}
	return iVar0;
}

int func_381(var uParam0, bool bParam1)
{
	iVar0 = Global_2097152[func_191()].f_6086.f_62;
	if ((*uParam0 == Global_1323615[iVar0].f_66 && uParam0->f_36) && uParam0->f_35)
	{
		Global_1323615[iVar0].f_1 = { uParam0->f_28 };
		Global_1323615[iVar0] = uParam0->f_32;
		if (func_382(uParam0->f_1, &sVar2, &iVar1, &iVar6, &iVar7) && *uParam0 != 743478836)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1323615[iVar0].f_77), 13);
			Global_1323615[iVar0].f_5 = iVar6;
			Global_1323615[iVar0].f_7 = iVar7;
			Global_1323615[iVar0].f_137 = iVar1;
		}
		if (func_382(uParam0->f_2, &sVar2, &iVar1, &iVar6, &iVar7) && *uParam0 != 743478836)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1323615[iVar0].f_77), 12);
			Global_1323615[iVar0].f_6 = iVar6;
			Global_1323615[iVar0].f_138 = iVar1;
		}
		if (uParam0->f_18)
		{
			GAMEPLAY::SET_BIT(&(Global_1323615[iVar0].f_77), 9);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1323615[iVar0].f_77), 9);
		}
		Global_1323615[iVar0].f_62 = uParam0->f_6;
		Global_1323615[iVar0].f_63 = uParam0->f_7;
		Global_1323615[iVar0].f_64 = uParam0->f_8;
		if (uParam0->f_5 == -1)
		{
			Global_1323615[iVar0].f_65 = 0;
		}
		else
		{
			Global_1323615[iVar0].f_65 = uParam0->f_5;
		}
		if (uParam0->f_13 != -1)
		{
			Global_1323615[iVar0].f_9[4] = uParam0->f_13;
		}
		if (uParam0->f_9 != -1)
		{
			Global_1323615[iVar0].f_9[11] = uParam0->f_9;
		}
		if (uParam0->f_10 != -1)
		{
			Global_1323615[iVar0].f_9[12] = uParam0->f_10;
		}
		if (uParam0->f_16 != -1 && uParam0->f_16 < 9)
		{
			Global_1323615[iVar0].f_9[14] = uParam0->f_16;
		}
		if (uParam0->f_14 != -1)
		{
			Global_1323615[iVar0].f_9[15] = uParam0->f_14;
		}
		if (uParam0->f_15 != -1)
		{
			Global_1323615[iVar0].f_9[16] = uParam0->f_15;
		}
		if (uParam0->f_11 != -1 && func_211(uParam0->f_12))
		{
			Global_1323615[iVar0].f_9[23] = uParam0->f_11;
			Global_1323615[iVar0].f_69 = -1;
		}
		if (uParam0->f_19 != -1)
		{
			Global_1323615[iVar0].f_9[18] = uParam0->f_19;
		}
		if (uParam0->f_17 != -1)
		{
			Global_1323615[iVar0].f_9[22] = uParam0->f_17;
		}
		if (uParam0->f_20 != -1)
		{
			Global_1323615[iVar0].f_9[20] = uParam0->f_20;
		}
		if (func_442(iVar0, &iVar8))
		{
			if (bParam1)
			{
				GAMEPLAY::SET_BIT(&(Global_1323615[iVar0].f_102), 25);
				GAMEPLAY::CLEAR_BIT(&(Global_1323615[iVar0].f_102), 26);
			}
		}
		return 1;
	}
	return 0;
}

bool func_382(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	*iParam2 = -1;
	*iParam3 = -1;
	*iParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*iParam2 = 3;
			*iParam3 = 118;
			*iParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*iParam2 = 0;
			*iParam3 = 147;
			*iParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 96;
			*iParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*iParam2 = 0;
			*iParam3 = 71;
			*iParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*iParam2 = 0;
			*iParam3 = 135;
			*iParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*iParam2 = 0;
			*iParam3 = 29;
			*iParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 64;
			*iParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 70;
			*iParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 50;
			*iParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*iParam2 = 2;
			*iParam3 = 55;
			*iParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*iParam2 = 1;
			*iParam3 = 89;
			*iParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*iParam2 = 1;
			*iParam3 = 38;
			*iParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*iParam2 = 0;
			*iParam3 = 37;
			*iParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 4;
			*iParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*iParam2 = 4;
			*iParam3 = 120;
			*iParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*iParam2 = 1;
			*iParam3 = 111;
			*iParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*iParam2 = 0;
			*iParam3 = 1;
			*iParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*iParam2 = 0;
			*iParam3 = 11;
			*iParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*iParam2 = 0;
			*iParam3 = 2;
			*iParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 3;
			*iParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 5;
			*iParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*iParam2 = 0;
			*iParam3 = 6;
			*iParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 7;
			*iParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 8;
			*iParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 9;
			*iParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*iParam2 = 0;
			*iParam3 = 10;
			*iParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*iParam2 = 0;
			*iParam3 = 27;
			*iParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*iParam2 = 0;
			*iParam3 = 28;
			*iParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*iParam2 = 0;
			*iParam3 = 150;
			*iParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*iParam2 = 0;
			*iParam3 = 30;
			*iParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*iParam2 = 0;
			*iParam3 = 31;
			*iParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*iParam2 = 0;
			*iParam3 = 32;
			*iParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*iParam2 = 0;
			*iParam3 = 33;
			*iParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*iParam2 = 0;
			*iParam3 = 34;
			*iParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*iParam2 = 0;
			*iParam3 = 143;
			*iParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*iParam2 = 0;
			*iParam3 = 35;
			*iParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*iParam2 = 0;
			*iParam3 = 137;
			*iParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*iParam2 = 0;
			*iParam3 = 136;
			*iParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*iParam2 = 0;
			*iParam3 = 36;
			*iParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*iParam2 = 0;
			*iParam3 = 38;
			*iParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*iParam2 = 0;
			*iParam3 = 138;
			*iParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*iParam2 = 0;
			*iParam3 = 90;
			*iParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*iParam2 = 0;
			*iParam3 = 88;
			*iParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*iParam2 = 0;
			*iParam3 = 89;
			*iParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*iParam2 = 0;
			*iParam3 = 91;
			*iParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 49;
			*iParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 50;
			*iParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 51;
			*iParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 52;
			*iParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 53;
			*iParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 54;
			*iParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 92;
			*iParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 141;
			*iParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 61;
			*iParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 62;
			*iParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 63;
			*iParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 65;
			*iParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 66;
			*iParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 67;
			*iParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 68;
			*iParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 69;
			*iParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 73;
			*iParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 70;
			*iParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 74;
			*iParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 96;
			*iParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 101;
			*iParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 95;
			*iParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 94;
			*iParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 97;
			*iParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 103;
			*iParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 104;
			*iParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 98;
			*iParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 100;
			*iParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 102;
			*iParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 99;
			*iParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 105;
			*iParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 106;
			*iParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*iParam2 = 0;
			*iParam3 = 72;
			*iParam4 = 64;
			break;
		
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*iParam2 = 0;
			*iParam3 = 146;
			*iParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*iParam2 = 0;
			*iParam3 = 145;
			*iParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*iParam2 = 0;
			*iParam3 = 107;
			*iParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*iParam2 = 0;
			*iParam3 = 111;
			*iParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*iParam2 = 0;
			*iParam3 = 112;
			*iParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*iParam2 = 1;
			*iParam3 = 147;
			*iParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*iParam2 = 1;
			*iParam3 = 1;
			*iParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*iParam2 = 1;
			*iParam3 = 11;
			*iParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*iParam2 = 1;
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 3;
			*iParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 4;
			*iParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 5;
			*iParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*iParam2 = 1;
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 7;
			*iParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 8;
			*iParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 9;
			*iParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*iParam2 = 1;
			*iParam3 = 10;
			*iParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*iParam2 = 1;
			*iParam3 = 27;
			*iParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*iParam2 = 1;
			*iParam3 = 28;
			*iParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*iParam2 = 1;
			*iParam3 = 29;
			*iParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*iParam2 = 1;
			*iParam3 = 150;
			*iParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*iParam2 = 1;
			*iParam3 = 30;
			*iParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*iParam2 = 1;
			*iParam3 = 31;
			*iParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*iParam2 = 1;
			*iParam3 = 32;
			*iParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*iParam2 = 1;
			*iParam3 = 33;
			*iParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*iParam2 = 1;
			*iParam3 = 34;
			*iParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*iParam2 = 1;
			*iParam3 = 143;
			*iParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*iParam2 = 1;
			*iParam3 = 35;
			*iParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*iParam2 = 1;
			*iParam3 = 135;
			*iParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*iParam2 = 1;
			*iParam3 = 137;
			*iParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*iParam2 = 1;
			*iParam3 = 136;
			*iParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*iParam2 = 1;
			*iParam3 = 36;
			*iParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*iParam2 = 1;
			*iParam3 = 138;
			*iParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*iParam2 = 1;
			*iParam3 = 99;
			*iParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*iParam2 = 1;
			*iParam3 = 90;
			*iParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*iParam2 = 1;
			*iParam3 = 88;
			*iParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*iParam2 = 1;
			*iParam3 = 91;
			*iParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 49;
			*iParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 51;
			*iParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 52;
			*iParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 53;
			*iParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 54;
			*iParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 92;
			*iParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 141;
			*iParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 61;
			*iParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 62;
			*iParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 63;
			*iParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 64;
			*iParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 65;
			*iParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 66;
			*iParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 67;
			*iParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 68;
			*iParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 69;
			*iParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 73;
			*iParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 74;
			*iParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 101;
			*iParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 95;
			*iParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 94;
			*iParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 97;
			*iParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 103;
			*iParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 104;
			*iParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 98;
			*iParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 100;
			*iParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 102;
			*iParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 99;
			*iParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 105;
			*iParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 106;
			*iParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*iParam2 = 1;
			*iParam3 = 71;
			*iParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*iParam2 = 1;
			*iParam3 = 72;
			*iParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*iParam2 = 1;
			*iParam3 = 142;
			*iParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*iParam2 = 1;
			*iParam3 = 145;
			*iParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*iParam2 = 1;
			*iParam3 = 107;
			*iParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*iParam2 = 1;
			*iParam3 = 112;
			*iParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*iParam2 = 2;
			*iParam3 = 12;
			*iParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*iParam2 = 2;
			*iParam3 = 13;
			*iParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*iParam2 = 2;
			*iParam3 = 14;
			*iParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*iParam2 = 2;
			*iParam3 = 131;
			*iParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*iParam2 = 2;
			*iParam3 = 83;
			*iParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*iParam2 = 2;
			*iParam3 = 82;
			*iParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*iParam2 = 2;
			*iParam3 = 84;
			*iParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*iParam2 = 2;
			*iParam3 = 149;
			*iParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*iParam2 = 2;
			*iParam3 = 148;
			*iParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*iParam2 = 2;
			*iParam3 = 39;
			*iParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*iParam2 = 2;
			*iParam3 = 40;
			*iParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*iParam2 = 2;
			*iParam3 = 41;
			*iParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*iParam2 = 2;
			*iParam3 = 42;
			*iParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*iParam2 = 2;
			*iParam3 = 128;
			*iParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*iParam2 = 2;
			*iParam3 = 151;
			*iParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*iParam2 = 2;
			*iParam3 = 155;
			*iParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*iParam2 = 2;
			*iParam3 = 152;
			*iParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*iParam2 = 2;
			*iParam3 = 153;
			*iParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*iParam2 = 2;
			*iParam3 = 154;
			*iParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*iParam2 = 3;
			*iParam3 = 117;
			*iParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*iParam2 = 3;
			*iParam3 = 119;
			*iParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*iParam2 = 3;
			*iParam3 = 158;
			*iParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*iParam2 = 3;
			*iParam3 = 159;
			*iParam4 = 160;
			break;
	}
	return *iParam2 != -1;
}

bool func_383(var uParam0, int iParam1)
{
	iVar0 = 0;
	iVar2 = Global_1323615[iParam1].f_5;
	iVar3 = Global_1323615[iParam1].f_6;
	iVar4 = Global_1323615[iParam1].f_7;
	iVar5 = Global_1323615[iParam1].f_65;
	if (iVar5 == -1)
	{
		iVar5 = 0;
	}
	if (uParam0->f_5 == -1)
	{
		uParam0->f_5 = 0;
	}
	iVar16 = 0;
	if (func_393(uParam0->f_1, &iVar6, &iVar7))
	{
		if ((iVar6 != -1 && iVar7 != -1) && (iVar6 != iVar2 || iVar7 != iVar4))
		{
			func_382(uParam0->f_1, &sVar11, &iVar10, &iVar6, &iVar7);
			if (iVar10 == 0)
			{
				iVar15 = 0;
			}
			else if (iVar10 == 1)
			{
				iVar15 = 1;
			}
			else if (iVar10 == 2)
			{
				iVar15 = 3;
			}
			else if (iVar10 == 3)
			{
				iVar15 = 4;
			}
			else if (iVar10 == 4)
			{
				iVar15 = 5;
			}
			iVar16 = func_387(&sVar11, iVar15, 1, 1, 0, 0, 0);
			iVar0 = (iVar0 + iVar16);
		}
	}
	if (func_393(uParam0->f_2, &iVar8, &uVar9))
	{
		if (iVar8 != -1 && iVar8 != iVar3)
		{
			func_382(uParam0->f_2, &sVar11, &iVar10, &iVar6, &iVar7);
			if (iVar10 == 0)
			{
				iVar15 = 0;
			}
			else if (iVar10 == 1)
			{
				iVar15 = 1;
			}
			else if (iVar10 == 2)
			{
				iVar15 = 3;
			}
			else if (iVar10 == 3)
			{
				iVar15 = 4;
			}
			else if (iVar10 == 4)
			{
				iVar15 = 5;
			}
			iVar16 = func_387(&sVar11, iVar15, 0, 1, 0, 0, 0);
			iVar0 = (iVar0 + iVar16);
		}
	}
	if (uParam0->f_32 != Global_1323615[iParam1])
	{
		if (uParam0->f_32 == 3)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_32 == 0)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_32 == 4)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_32 == 2)
		{
			iVar0 += 300;
		}
		else if (uParam0->f_32 == 1)
		{
			iVar0 += 600;
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_1323615[iParam1].f_77, 9))
	{
		if (uParam0->f_18)
		{
			iVar0 += 25000;
		}
	}
	iVar17 = Global_1323615[iParam1].f_62;
	iVar18 = Global_1323615[iParam1].f_63;
	iVar19 = Global_1323615[iParam1].f_64;
	if ((uParam0->f_6 != iVar17 || uParam0->f_7 != iVar18) || uParam0->f_8 != iVar19)
	{
		switch (func_384(uParam0->f_6, uParam0->f_7, uParam0->f_8))
		{
			case 1:
				iVar0 += 1500;
				break;
			
			case 2:
				iVar0 += 5000;
				break;
			
			case 3:
				iVar0 += 10000;
				break;
			
			case 4:
				iVar0 += 12500;
				break;
			
			case 6:
				iVar0 += 15000;
				break;
			
			case 8:
				iVar0 += 20000;
				break;
			
			case 5:
				iVar0 += 14000;
				break;
			
			case 7:
				iVar0 += 17500;
				break;
			
			case 9:
				iVar0 = (iVar0 + Global_262145.f_7666);
				break;
			
			case 10:
				iVar0 = (iVar0 + Global_262145.f_7667);
				break;
			
			case 11:
				iVar0 = (iVar0 + Global_262145.f_7815);
				break;
			}
	}
	if (uParam0->f_5 != iVar5)
	{
		if (uParam0->f_5 == 0)
		{
			iVar0 += 500;
		}
		else if (uParam0->f_5 == 1)
		{
			iVar0 += 5000;
		}
		else if (uParam0->f_5 == 2)
		{
			iVar0 += 3500;
		}
		else if (uParam0->f_5 == 3)
		{
			iVar0 += 1500;
		}
		else if (uParam0->f_5 == 5)
		{
			iVar0 = (iVar0 + Global_262145.f_7661);
		}
	}
	iVar1 = Global_1323615[iParam1].f_9[11];
	if (uParam0->f_9 != iVar1 && uParam0->f_9 != -1)
	{
		if (uParam0->f_9 == 0)
		{
			iVar0 += 500;
		}
		else if (uParam0->f_9 == 1)
		{
			iVar0 += 1800;
		}
		else if (uParam0->f_9 == 2)
		{
			iVar0 += 2500;
		}
		else if (uParam0->f_9 == 3)
		{
			iVar0 += 3600;
		}
		else if (uParam0->f_9 == 4)
		{
			iVar0 += 6700;
		}
	}
	iVar1 = Global_1323615[iParam1].f_9[12];
	if (uParam0->f_10 != iVar1 && uParam0->f_10 != -1)
	{
		if (uParam0->f_10 == 0)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_10 == 1)
		{
			iVar0 += 4000;
		}
		else if (uParam0->f_10 == 2)
		{
			iVar0 += 5400;
		}
		else if (uParam0->f_10 == 3)
		{
			iVar0 += 7000;
		}
	}
	iVar1 = Global_1323615[iParam1].f_9[4];
	if (uParam0->f_13 != iVar1 && uParam0->f_13 != -1)
	{
		if (uParam0->f_13 == 0)
		{
			iVar0 += 260;
		}
		else if (uParam0->f_13 == 1)
		{
			iVar0 += 750;
		}
		else if (uParam0->f_13 == 2)
		{
			iVar0 += 1800;
		}
		else if (uParam0->f_13 == 3)
		{
			iVar0 += 3000;
		}
		else if (uParam0->f_13 == 4)
		{
			iVar0 += 9550;
		}
		else if (uParam0->f_13 == 5)
		{
			iVar0 += 9750;
		}
	}
	iVar1 = Global_1323615[iParam1].f_9[23];
	if (uParam0->f_11 != iVar1 && uParam0->f_11 != -1)
	{
	}
	iVar1 = Global_1323615[iParam1].f_9[14];
	if (uParam0->f_16 != iVar1 && uParam0->f_16 != -1)
	{
		if (uParam0->f_16 == 0)
		{
			iVar0 += 500;
		}
		else if (uParam0->f_16 == 1)
		{
			iVar0 += 2000;
		}
		else if (uParam0->f_16 == 2)
		{
			iVar0 += 3000;
		}
		else if (uParam0->f_16 == 3)
		{
			iVar0 += 5000;
		}
		else if (uParam0->f_16 == 4)
		{
			iVar0 += 10000;
		}
		else if (uParam0->f_16 == 5)
		{
			iVar0 += 12500;
		}
	}
	iVar1 = Global_1323615[iParam1].f_9[16];
	if (uParam0->f_15 != iVar1 && uParam0->f_15 != -1)
	{
		if (uParam0->f_15 == 0)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_15 == 1)
		{
			iVar0 += 3600;
		}
		else if (uParam0->f_15 == 2)
		{
			iVar0 += 6000;
		}
		else if (uParam0->f_15 == 3)
		{
			iVar0 += 9600;
		}
		else if (uParam0->f_15 == 4)
		{
			iVar0 += 16800;
		}
		else if (uParam0->f_15 == 5)
		{
			iVar0 += 24000;
		}
	}
	iVar1 = Global_1323615[iParam1].f_9[15];
	if (uParam0->f_14 != iVar1 && uParam0->f_14 != -1)
	{
		if (uParam0->f_14 == 0)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_14 == 1)
		{
			iVar0 += 1000;
		}
		else if (uParam0->f_14 == 2)
		{
			iVar0 += 2000;
		}
		else if (uParam0->f_14 == 3)
		{
			iVar0 += 3400;
		}
		else if (uParam0->f_14 == 4)
		{
			iVar0 += 4400;
		}
	}
	if (uParam0->f_17 != -1)
	{
		if (uParam0->f_17 != 1 && Global_1323615[iParam1].f_9[22] > 0)
		{
			iVar0 += 100;
		}
		else if (uParam0->f_17 == 1 && Global_1323615[iParam1].f_9[22] <= 0)
		{
			iVar0 += 2000;
		}
	}
	if (uParam0->f_19 != -1)
	{
		if (uParam0->f_19 != 1 && Global_1323615[iParam1].f_9[18] > 0)
		{
			iVar0 += 1000;
		}
		else if (uParam0->f_19 == 1 && Global_1323615[iParam1].f_9[18] <= 0)
		{
			iVar0 += 24000;
		}
	}
	return uParam0->f_27 >= iVar0;
}

int func_384(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 0 && iParam1 == 0) && iParam2 == 0)
	{
		return 11;
	}
	if ((iParam0 == 255 && iParam1 == 127) && iParam2 == 0)
	{
		return 6;
	}
	if ((iParam0 == 252 && iParam1 == 238) && iParam2 == 0)
	{
		return 4;
	}
	if ((iParam0 == 0 && iParam1 == 174) && iParam2 == 239)
	{
		return 3;
	}
	if ((iParam0 == 226 && iParam1 == 6) && iParam2 == 6)
	{
		return 8;
	}
	if ((iParam0 == 20 && iParam1 == 20) && iParam2 == 20)
	{
		return 2;
	}
	if ((iParam0 == Global_1314034 && iParam1 == Global_1314035) && iParam2 == Global_1314036)
	{
		return 12;
	}
	if ((iParam0 == 1 && iParam1 == 1) && iParam2 == 1)
	{
		return 0;
	}
	if (func_386())
	{
		UI::GET_HUD_COLOUR(21, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 5;
		}
		UI::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 7;
		}
		if (((iParam0 == 114 && iParam1 == 204) && iParam2 == 114) || ((iParam0 == 102 && iParam1 == 152) && iParam2 == 104))
		{
			return 7;
		}
	}
	if (func_385())
	{
		UI::GET_HUD_COLOUR(24, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 9;
		}
		UI::GET_HUD_COLOUR(107, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 10;
		}
	}
	return 1;
}

bool func_385()
{
	return DLC2::IS_DLC_PRESENT(1785846048);
}

bool func_386()
{
	return DLC2::IS_DLC_PRESENT(42019760);
}

int func_387(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	iVar0 = 0;
	switch (iParam1)
	{
		case 1:
			iVar0 = func_392(sParam0);
			break;
		
		case 4:
			iVar0 = func_391(sParam0);
			break;
		
		case 0:
			iVar0 = func_390(sParam0);
			break;
		
		case 3:
			iVar0 = func_389(sParam0);
			break;
		
		case 5:
			iVar0 = 25000;
			break;
		
		case 2:
			iVar0 = func_388(sParam0);
			break;
	}
	if (iParam3 && !bParam2)
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 2f));
	}
	if (bParam4)
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_14619));
	}
	if (bParam5)
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_14620));
	}
	if (bParam6)
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_14621));
	}
	return iVar0;
}

int func_388(char* sParam0)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!UI::DOES_TEXT_LABEL_EXIST(sParam0))
	{
		return 0;
	}
	iVar0 = GAMEPLAY::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case 705942170:
			return 2520;
			break;
		
		case 420798133:
			return 2430;
			break;
		
		case 276866930:
			return 2370;
			break;
		
		case 986880145:
			return 2490;
			break;
		
		case -1703942278:
			return 2580;
			break;
		
		case -869156315:
			return 2340;
			break;
		
		case -1995729735:
			return 2460;
			break;
		
		case 1896056270:
			return 3200;
			break;
		
		case -700066870:
			return 2340;
			break;
		
		case 1767884990:
			return 2580;
			break;
		
		case 34197777:
			return 2610;
			break;
		
		case -1461906115:
			return 2700;
			break;
		
		case -249724192:
			return 2640;
			break;
		
		case -1737346484:
			return 4200;
			break;
		
		case -1251337749:
			return 15250;
			break;
		
		case 1430328110:
			return 15000;
			break;
		
		case 785556533:
			return 19550;
			break;
		
		case 971696566:
			return 5400;
			break;
		
		case -96227377:
			return 2850;
			break;
		
		case 1151035909:
			return 2670;
			break;
		
		case 405883949:
			return 18100;
			break;
		
		case 1733530353:
			return 16240;
			break;
		
		case 1118733987:
			return 8200;
			break;
		
		case -830067363:
			return 19800;
			break;
		
		case 1224546404:
			return 20000;
			break;
		
		case -1253413535:
			return 19200;
			break;
		
		case -1644509493:
			return 17600;
			break;
		
		case 1523532878:
			return 15800;
			break;
		
		case -1915493356:
			return 15480;
			break;
		
		case -1992101720:
			return 15620;
			break;
		
		case 1293082345:
			return 3500;
			break;
		
		case -508302758:
			return 3450;
			break;
		
		case -1741930097:
			return 15590;
			break;
		
		case 2194643:
			return 15860;
			break;
		
		case 1453150109:
			return 16000;
			break;
		
		case 459084580:
			return 2610;
			break;
		
		case -1581704775:
			return 15760;
			break;
		
		case 2033881459:
			return 2850;
			break;
		
		case 555492985:
			return 2550;
			break;
		
		case -279527550:
			return 15970;
			break;
		
		case 1879277528:
			return 16850;
			break;
		
		case -801455169:
			return 20000;
			break;
		
		case 902421837:
			return 7500;
			break;
		
		case -412482159:
			return 3030;
			break;
		
		case 1759794178:
			return 2790;
			break;
		
		case 803459446:
			return 2700;
			break;
		
		case -1974111254:
			return 3840;
			break;
		
		case 1494439047:
			return 2610;
			break;
		
		case 1581070110:
			return 2520;
			break;
		
		case -1063817116:
			return 15700;
			break;
		
		case 381538445:
			return 3900;
			break;
		
		case 200174426:
			return 3610;
			break;
		
		case -300291616:
			return 15340;
			break;
		
		case 136984354:
			return 18750;
			break;
		
		case -656754985:
			return 3450;
			break;
		
		case 1447753091:
			return 6300;
			break;
		
		case 960511748:
			return 5800;
			break;
		
		case 938646550:
			return 2340;
			break;
		
		case 1474663457:
			return 2430;
			break;
		
		case -198635756:
			return 2550;
			break;
		
		case -972036065:
			return 2700;
			break;
		
		case -226866387:
			return 2760;
			break;
		
		case 2065208510:
			return 2490;
			break;
		
		case -168229550:
			return 2580;
			break;
		
		case -132150361:
			return 2700;
			break;
		
		case 1116422159:
			return 2640;
			break;
		
		case -975380874:
			return 2610;
			break;
		
		case 1697740006:
			return 2340;
			break;
		
		case -1629924060:
			return 5650;
			break;
		
		case -1273722113:
			return 10000;
			break;
		
		case 316369669:
			return 9400;
			break;
		
		case -1788485040:
			return 20000;
			break;
		
		case 940810089:
			return 2340;
			break;
		
		case -2024144439:
			return 2430;
			break;
		
		case -1076952499:
			return 2610;
			break;
	}
	return 0;
}

int func_389(char* sParam0)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!UI::DOES_TEXT_LABEL_EXIST(sParam0))
	{
		return 0;
	}
	iVar0 = GAMEPLAY::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case 705942170:
			return 2200;
			break;
		
		case -2089639073:
			return 2050;
			break;
		
		case -1339860315:
			return 2000;
			break;
		
		case -2024144439:
			return 2120;
			break;
		
		case -1974111254:
			return 14250;
			break;
		
		case 1759794178:
			return 2150;
			break;
		
		case 902421837:
			return 10000;
			break;
		
		case 316369669:
			return 13750;
			break;
		
		case -1629924060:
			return 17000;
			break;
		
		case -1737346484:
			return 12500;
			break;
		
		case 607125239:
			return 15000;
			break;
		
		case -1915493356:
			return 14000;
			break;
		
		case -1741930097:
			return 11600;
			break;
		
		case -801455169:
			return 17500;
			break;
		
		case 1439605128:
			return 2130;
			break;
		
		case -635614799:
			return 2150;
			break;
		
		case -1223107299:
			return 2100;
			break;
		
		case -695919028:
			return 2250;
			break;
		
		case 805674107:
			return 2240;
			break;
		
		case 823281248:
			return 2170;
			break;
	}
	return 0;
}

int func_390(char* sParam0)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!UI::DOES_TEXT_LABEL_EXIST(sParam0))
	{
		return 0;
	}
	iVar0 = GAMEPLAY::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case 705942170:
			return 1400;
			break;
		
		case 420798133:
			return 1350;
			break;
		
		case 276866930:
			return 1320;
			break;
		
		case 986880145:
			return 1380;
			break;
		
		case -1703942278:
			return 1440;
			break;
		
		case -869156315:
			return 1300;
			break;
		
		case -1995729735:
			return 1370;
			break;
		
		case 1896056270:
			return 1340;
			break;
		
		case -700066870:
			return 1300;
			break;
		
		case 1767884990:
			return 1430;
			break;
		
		case 34197777:
			return 1450;
			break;
		
		case -1461906115:
			return 1500;
			break;
		
		case -249724192:
			return 1470;
			break;
		
		case -1737346484:
			return 1530;
			break;
		
		case -1251337749:
			return 9260;
			break;
		
		case 1430328110:
			return 8890;
			break;
		
		case 785556533:
			return 14500;
			break;
		
		case 971696566:
			return 5000;
			break;
		
		case -96227377:
			return 1590;
			break;
		
		case 1151035909:
			return 1480;
			break;
		
		case 405883949:
			return 13250;
			break;
		
		case 1733530353:
			return 12000;
			break;
		
		case 1118733987:
			return 13000;
			break;
		
		case -830067363:
			return 14750;
			break;
		
		case 1224546404:
			return 15000;
			break;
		
		case -1253413535:
			return 13750;
			break;
		
		case -1644509493:
			return 13000;
			break;
		
		case 1523532878:
			return 11000;
			break;
		
		case -1915493356:
			return 7500;
			break;
		
		case -1992101720:
			return 9000;
			break;
		
		case 1293082345:
			return 1650;
			break;
		
		case -508302758:
			return 1550;
			break;
		
		case -1741930097:
			return 8500;
			break;
		
		case 2194643:
			return 11500;
			break;
		
		case 1453150109:
			return 12000;
			break;
		
		case 459084580:
			return 1450;
			break;
		
		case -1581704775:
			return 10500;
			break;
		
		case 2033881459:
			return 1580;
			break;
		
		case 555492985:
			return 1420;
			break;
		
		case -279527550:
			return 12000;
			break;
		
		case 1879277528:
			return 13000;
			break;
		
		case -801455169:
			return 15000;
			break;
		
		case 902421837:
			return 12250;
			break;
		
		case -412482159:
			return 1690;
			break;
		
		case 1759794178:
			return 1550;
			break;
		
		case 803459446:
			return 1500;
			break;
		
		case -1974111254:
			return 1430;
			break;
		
		case 1494439047:
			return 1450;
			break;
		
		case 1581070110:
			return 1400;
			break;
		
		case -1063817116:
			return 10890;
			break;
		
		case 381538445:
			return 1530;
			break;
		
		case 200174426:
			return 1480;
			break;
		
		case -300291616:
			return 7500;
			break;
		
		case 136984354:
			return 13750;
			break;
		
		case -656754985:
			return 1350;
			break;
		
		case 1447753091:
			return 11250;
			break;
		
		case 960511748:
			return 10000;
			break;
		
		case 938646550:
			return 1300;
			break;
		
		case 1474663457:
			return 1350;
			break;
		
		case -198635756:
			return 1420;
			break;
		
		case -972036065:
			return 1500;
			break;
		
		case -226866387:
			return 1530;
			break;
		
		case 2065208510:
			return 1380;
			break;
		
		case -168229550:
			return 1430;
			break;
		
		case -132150361:
			return 1500;
			break;
		
		case 1116422159:
			return 1470;
			break;
		
		case -975380874:
			return 1450;
			break;
		
		case 1697740006:
			return 1300;
			break;
		
		case -1629924060:
			return 7500;
			break;
		
		case -1273722113:
			return 14250;
			break;
		
		case 316369669:
			return 13750;
			break;
		
		case -1788485040:
			return 15000;
			break;
		
		case 940810089:
			return 1300;
			break;
		
		case -2024144439:
			return 1350;
			break;
		
		case -1076952499:
			return 1450;
			break;
	}
	return 0;
}

int func_391(char* sParam0)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!UI::DOES_TEXT_LABEL_EXIST(sParam0))
	{
		return 0;
	}
	iVar0 = GAMEPLAY::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case -1205962918:
			return 12500;
			break;
		
		case -644198701:
			return 11500;
			break;
		
		case -1231545847:
			return 10250;
			break;
		
		case 2133991728:
			return Global_262145.f_7766;
			break;
		
		case -1678550350:
			return Global_262145.f_7767;
			break;
	}
	return 0;
}

int func_392(char* sParam0)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!UI::DOES_TEXT_LABEL_EXIST(sParam0))
	{
		return 0;
	}
	iVar0 = GAMEPLAY::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case 705942170:
			return 840;
			break;
		
		case 420798133:
			return 810;
			break;
		
		case 276866930:
			return 790;
			break;
		
		case 986880145:
			return 830;
			break;
		
		case -1703942278:
			return 860;
			break;
		
		case -869156315:
			return 780;
			break;
		
		case -1995729735:
			return 820;
			break;
		
		case 1896056270:
			return 800;
			break;
		
		case -700066870:
			return 780;
			break;
		
		case 1767884990:
			return 860;
			break;
		
		case 34197777:
			return 870;
			break;
		
		case -1461906115:
			return 900;
			break;
		
		case -249724192:
			return 880;
			break;
		
		case -1737346484:
			return 920;
			break;
		
		case -1251337749:
			return 5600;
			break;
		
		case 1430328110:
			return 5200;
			break;
		
		case 785556533:
			return 11600;
			break;
		
		case 971696566:
			return 3800;
			break;
		
		case -96227377:
			return 950;
			break;
		
		case 1151035909:
			return 890;
			break;
		
		case 405883949:
			return 10600;
			break;
		
		case 1733530353:
			return 9600;
			break;
		
		case 1118733987:
			return 10400;
			break;
		
		case -830067363:
			return 12150;
			break;
		
		case 1224546404:
			return 12500;
			break;
		
		case -1253413535:
			return 11000;
			break;
		
		case -1644509493:
			return 10400;
			break;
		
		case 1523532878:
			return 8800;
			break;
		
		case -1915493356:
			return 4500;
			break;
		
		case -1992101720:
			return 5400;
			break;
		
		case 1293082345:
			return 990;
			break;
		
		case -508302758:
			return 930;
			break;
		
		case -1741930097:
			return 5100;
			break;
		
		case 2194643:
			return 9200;
			break;
		
		case 1453150109:
			return 9600;
			break;
		
		case 459084580:
			return 870;
			break;
		
		case -1581704775:
			return 8400;
			break;
		
		case 2033881459:
			return 950;
			break;
		
		case 555492985:
			return 850;
			break;
		
		case -279527550:
			return 9600;
			break;
		
		case 1879277528:
			return 10400;
			break;
		
		case -801455169:
			return 12500;
			break;
		
		case 902421837:
			return 9800;
			break;
		
		case -412482159:
			return 1010;
			break;
		
		case 1759794178:
			return 930;
			break;
		
		case 803459446:
			return 900;
			break;
		
		case -1974111254:
			return 860;
			break;
		
		case 1494439047:
			return 870;
			break;
		
		case 1581070110:
			return 840;
			break;
		
		case -1063817116:
			return 8650;
			break;
		
		case 381538445:
			return 920;
			break;
		
		case 200174426:
			return 890;
			break;
		
		case -300291616:
			return 4500;
			break;
		
		case 136984354:
			return 11000;
			break;
		
		case -656754985:
			return 810;
			break;
		
		case 1447753091:
			return 9050;
			break;
		
		case 960511748:
			return 8000;
			break;
		
		case 938646550:
			return 780;
			break;
		
		case 1474663457:
			return 810;
			break;
		
		case -198635756:
			return 850;
			break;
		
		case -972036065:
			return 900;
			break;
		
		case -226866387:
			return 920;
			break;
		
		case 2065208510:
			return 830;
			break;
		
		case -168229550:
			return 860;
			break;
		
		case -132150361:
			return 900;
			break;
		
		case 1116422159:
			return 880;
			break;
		
		case -975380874:
			return 870;
			break;
		
		case 1697740006:
			return 780;
			break;
		
		case -1629924060:
			return 4500;
			break;
		
		case -1273722113:
			return 11400;
			break;
		
		case 316369669:
			return 11000;
			break;
		
		case -1788485040:
			return 12500;
			break;
		
		case 940810089:
			return 780;
			break;
		
		case -2024144439:
			return 810;
			break;
		
		case -1076952499:
			return 870;
			break;
	}
	return 0;
}

bool func_393(int iParam0, var uParam1, var uParam2)
{
	func_382(iParam0, &sVar1, &uVar0, uParam1, uParam2);
	return (*uParam1 != -1 && *uParam2 != -1);
}

bool func_394(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_285(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_395(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_99(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0] == -1)
	{
		return 0;
	}
	return 1;
}

int func_396(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	bVar1 = false;
	while ((iParam1 == -1 || iParam1 == iVar0) && func_382(iVar0, &sVar3, &iVar2, &uVar7, &uVar8))
	{
		bVar1 = true;
		iVar9 = func_403(&sVar3);
		if (iVar2 == 0)
		{
			if (func_397(0, iVar9, 1, 0))
			{
				GAMEPLAY::SET_BIT(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		else if (iVar2 == 1)
		{
			if (func_397(1, iVar9, 1, 0))
			{
				GAMEPLAY::SET_BIT(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		else if (iVar2 == 2)
		{
			if (func_397(3, iVar9, 1, 0))
			{
				GAMEPLAY::SET_BIT(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		else if (iVar2 == 3)
		{
			if (func_397(4, iVar9, 1, 0))
			{
				GAMEPLAY::SET_BIT(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		else if (iVar2 == 4)
		{
			if (func_397(5, iVar9, 1, 0))
			{
				GAMEPLAY::SET_BIT(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		iVar0++;
	}
	if (!bVar1)
	{
		return -1;
	}
	return iParam1;
}

int func_397(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 == 0)
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam3))
		{
			case 177270108:
			case 387748548:
			case 1502869817:
			case -2118308144:
			case -1693015116:
			case -692292317:
			case -1435527158:
			case -212993243:
			case 1945374990:
			case 1653666139:
			case -1988428699:
			case 2069146067:
			case 219613597:
			case -286046740:
			case -1254331310:
			case 1802742206:
				return 1;
				break;
			
			default:
				if (func_402(ENTITY::GET_ENTITY_MODEL(iParam3)) || func_206(ENTITY::GET_ENTITY_MODEL(iParam3)))
				{
					return 1;
				}
				if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam3)) || VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam3)))
				{
					return 1;
				}
				break;
			}
	}
	if (iParam0 == 4)
	{
		if (iParam1 == 32 || iParam1 == 91)
		{
			return func_133(func_401(PLAYER::PLAYER_ID(), 1), 0) >= 100;
		}
	}
	iVar0 = func_400(iParam0, iParam1, bParam2);
	if (iVar0 != 0)
	{
		return func_398(iParam0, iVar0);
	}
	return 1;
}

int func_398(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 166:
		case 167:
		case 168:
		case 169:
			if (func_133(func_401(PLAYER::PLAYER_ID(), 1), 0) >= func_399(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 148:
		case 149:
		case 150:
		case 151:
			if (func_50(38, -1) >= func_399(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 152:
		case 153:
		case 154:
			if (func_51(153, -1, 0) >= func_399(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			if (func_51(160, -1, 0) >= func_399(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 159:
		case 160:
		case 161:
			if (func_51(161, -1, 0) >= func_399(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 162:
		case 163:
		case 164:
		case 165:
			if (func_51(818, -1, 0) >= func_399(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 133:
			return 1;
			break;
		
		case 134:
			return 1;
			break;
		
		case 135:
			if (func_50(51, -1) >= 1 || func_50(52, -1) >= 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 170:
			if (func_133(func_401(PLAYER::PLAYER_ID(), 1), 0) >= func_399(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 136:
			if (func_50(58, -1) >= 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 137:
			if (func_50(57, -1) >= 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_399(int iParam0, int iParam1)
{
	if (iParam0 == 3)
	{
		switch (iParam1)
		{
			case 134:
				return 0;
				break;
			
			case 136:
				return 1;
				break;
			
			case 137:
				return 1;
				break;
			
			case 169:
				return 1;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iParam1)
		{
			case 133:
				return 0;
				break;
		}
	}
	else if (iParam0 == 4)
	{
		switch (iParam1)
		{
			case 135:
				return 1;
				break;
			
			case 170:
				return 100;
				break;
			}
	}
	switch (iParam1)
	{
		case 148:
			return 5;
			break;
		
		case 149:
			return 10;
			break;
		
		case 150:
			return 25;
			break;
		
		case 151:
			return 50;
			break;
		
		case 155:
			return 5;
			break;
		
		case 156:
			return 10;
			break;
		
		case 157:
			return 25;
			break;
		
		case 158:
			return 50;
			break;
		
		case 152:
			return 5;
			break;
		
		case 153:
			return 10;
			break;
		
		case 154:
			return 25;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 50;
			break;
		
		case 161:
			return 100;
			break;
		
		case 162:
			return 5;
			break;
		
		case 163:
			return 10;
			break;
		
		case 164:
			return 25;
			break;
		
		case 165:
			return 50;
			break;
	}
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 0)
	{
		switch (iParam1)
		{
			case 138:
				return 7;
			
			case 139:
				return 9;
			
			case 140:
				return 11;
			
			case 141:
				return 13;
			
			case 142:
				return 15;
			
			case 143:
				return 17;
			
			case 144:
				return 19;
			
			case 145:
				return 21;
			
			case 146:
				return 23;
			
			case 147:
				return 25;
			
			case 166:
				return 1;
			
			case 167:
				return 1;
			
			case 168:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_400(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 3)
	{
		switch (iParam1)
		{
			case 1:
			case 75:
			case 48:
			case 15:
			case 30:
			case 78:
			case 77:
			case 34:
			case 46:
			case 80:
				if (bParam2)
				{
					return 134;
				}
				else
				{
					return 169;
				}
				break;
			
			case 87:
			case 90:
			case 86:
			case 88:
			case 89:
				return 136;
				break;
			
			case 70:
			case 72:
			case 43:
			case 44:
			case 79:
				return 137;
				break;
			}
	}
	if (iParam0 == 1)
	{
		switch (iParam1)
		{
			case 1:
			case 6:
			case 8:
			case 14:
			case 15:
			case 21:
			case 30:
			case 35:
			case 40:
			case 41:
			case 48:
			case 50:
			case 56:
			case 59:
			case 64:
			case 69:
			case 73:
			case 75:
				if (bParam2)
				{
					return 133;
				}
				else
				{
					return 166;
				}
				break;
			}
	}
	if (iParam0 == 0)
	{
		switch (iParam1)
		{
			case 1:
			case 6:
			case 8:
			case 14:
			case 15:
			case 21:
			case 30:
			case 35:
			case 40:
			case 41:
			case 48:
			case 50:
			case 56:
			case 59:
			case 64:
			case 69:
			case 73:
			case 75:
				if (!bParam2)
				{
					return 167;
				}
				break;
			}
	}
	if (iParam0 == 2)
	{
		switch (iParam1)
		{
			case 1:
			case 6:
			case 8:
			case 14:
			case 15:
			case 21:
			case 30:
			case 35:
			case 40:
			case 41:
			case 48:
			case 50:
			case 56:
			case 59:
			case 64:
			case 69:
			case 73:
			case 75:
				if (!bParam2)
				{
					return 168;
				}
				break;
			}
	}
	if (iParam0 == 4)
	{
		switch (iParam1)
		{
			case 81:
			case 82:
			case 83:
				return 135;
				break;
			
			case 32:
			case 91:
				return 170;
				break;
			}
	}
	switch (iParam1)
	{
		case 58:
			return 148;
			break;
		
		case 44:
			return 149;
			break;
		
		case 55:
			return 150;
			break;
		
		case 25:
			return 151;
			break;
		
		case 29:
			return 152;
			break;
		
		case 85:
			return 153;
			break;
		
		case 43:
			return 154;
			break;
		
		case 23:
			return 155;
			break;
		
		case 38:
			return 156;
			break;
		
		case 71:
			return 157;
			break;
		
		case 26:
			return 158;
			break;
		
		case 24:
			return 159;
			break;
		
		case 42:
			return 160;
			break;
		
		case 18:
			return 161;
			break;
		
		case 62:
			return 162;
			break;
		
		case 12:
			return 163;
			break;
		
		case 32:
			return 164;
			break;
		
		case 84:
			return 165;
			break;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 0:
			switch (iParam1)
			{
				case 2:
				case 3:
				case 4:
				case 5:
					return 138;
					break;
				
				case 9:
				case 10:
				case 11:
				case 13:
					return 139;
					break;
				
				case 16:
				case 17:
				case 19:
				case 20:
					return 140;
					break;
				
				case 22:
				case 27:
				case 28:
				case 31:
					return 141;
					break;
				
				case 33:
				case 34:
				case 37:
				case 39:
					return 142;
					break;
				
				case 45:
				case 46:
				case 47:
				case 49:
					return 143;
					break;
				
				case 51:
				case 52:
				case 53:
				case 54:
					return 144;
					break;
				
				case 57:
				case 60:
				case 61:
				case 63:
					return 145;
					break;
				
				case 65:
				case 66:
				case 67:
				case 68:
					return 146;
					break;
				
				case 70:
				case 72:
				case 74:
				case 76:
					return 147;
					break;
			}
			break;
	}
	return 0;
}

int func_401(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_136(iParam0);
}

int func_402(int iParam0)
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

int func_403(char* sParam0)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!UI::DOES_TEXT_LABEL_EXIST(sParam0))
	{
		return 0;
	}
	iVar0 = GAMEPLAY::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case 705942170:
			return 1;
			break;
		
		case 420798133:
			return 2;
			break;
		
		case 276866930:
			return 3;
			break;
		
		case 986880145:
			return 4;
			break;
		
		case -1703942278:
			return 5;
			break;
		
		case -869156315:
			return 6;
			break;
		
		case -2077191789:
			return 7;
			break;
		
		case -1995729735:
			return 8;
			break;
		
		case 1896056270:
			return 9;
			break;
		
		case -700066870:
			return 10;
			break;
		
		case 1767884990:
			return 11;
			break;
		
		case 34197777:
			return 12;
			break;
		
		case -1461906115:
			return 13;
			break;
		
		case -249724192:
			return 14;
			break;
		
		case -1737346484:
			return 15;
			break;
		
		case -1251337749:
			return 16;
			break;
		
		case 1430328110:
			return 17;
			break;
		
		case 785556533:
			return 18;
			break;
		
		case 971696566:
			return 19;
			break;
		
		case -96227377:
			return 20;
			break;
		
		case 1151035909:
			return 21;
			break;
		
		case 405883949:
			return 22;
			break;
		
		case 1118733987:
			return 23;
			break;
		
		case 1733530353:
			return 24;
			break;
		
		case -830067363:
			return 25;
			break;
		
		case 1224546404:
			return 26;
			break;
		
		case -1253413535:
			return 27;
			break;
		
		case -1644509493:
			return 28;
			break;
		
		case 1523532878:
			return 29;
			break;
		
		case -1915493356:
			return 30;
			break;
		
		case -1992101720:
			return 31;
			break;
		
		case 1293082345:
			return 32;
			break;
		
		case -508302758:
			return 33;
			break;
		
		case -1741930097:
			return 34;
			break;
		
		case 2194643:
			return 35;
			break;
		
		case -1411292916:
			return 36;
			break;
		
		case 459084580:
			return 37;
			break;
		
		case -1581704775:
			return 38;
			break;
		
		case 2033881459:
			return 39;
			break;
		
		case 555492985:
			return 40;
			break;
		
		case -279527550:
			return 41;
			break;
		
		case 1879277528:
			return 42;
			break;
		
		case -801455169:
			return 43;
			break;
		
		case 902421837:
			return 44;
			break;
		
		case -412482159:
			return 45;
			break;
		
		case 1759794178:
			return 46;
			break;
		
		case 803459446:
			return 47;
			break;
		
		case -1974111254:
			return 48;
			break;
		
		case 1494439047:
			return 49;
			break;
		
		case 1581070110:
			return 50;
			break;
		
		case -1063817116:
			return 51;
			break;
		
		case 381538445:
			return 52;
			break;
		
		case 200174426:
			return 53;
			break;
		
		case -300291616:
			return 54;
			break;
		
		case 136984354:
			return 55;
			break;
		
		case -656754985:
			return 56;
			break;
		
		case 1447753091:
			return 57;
			break;
		
		case 960511748:
			return 58;
			break;
		
		case 938646550:
			return 59;
			break;
		
		case 1474663457:
			return 60;
			break;
		
		case -198635756:
			return 61;
			break;
		
		case -972036065:
			return 62;
			break;
		
		case -226866387:
			return 63;
			break;
		
		case 2065208510:
			return 64;
			break;
		
		case -168229550:
			return 65;
			break;
		
		case -132150361:
			return 66;
			break;
		
		case 1116422159:
			return 67;
			break;
		
		case -975380874:
			return 68;
			break;
		
		case 1697740006:
			return 69;
			break;
		
		case -1629924060:
			return 70;
			break;
		
		case -1273722113:
			return 71;
			break;
		
		case 316369669:
			return 72;
			break;
		
		case -1788485040:
			return 73;
			break;
		
		case 940810089:
			return 74;
			break;
		
		case -2024144439:
			return 75;
			break;
		
		case -1076952499:
			return 76;
			break;
		
		case -2089639073:
			return 77;
			break;
		
		case -1339860315:
			return 78;
			break;
		
		case 607125239:
			return 79;
			break;
		
		case 1439605128:
			return 80;
			break;
		
		case -1205962918:
			return 81;
			break;
		
		case -644198701:
			return 82;
			break;
		
		case -1231545847:
			return 83;
			break;
		
		case 1114790148:
			return 84;
			break;
		
		case 1453150109:
			return 85;
			break;
		
		case -695919028:
			return 86;
			break;
		
		case -635614799:
			return 87;
			break;
		
		case -1223107299:
			return 88;
			break;
		
		case 823281248:
			return 89;
			break;
		
		case 805674107:
			return 90;
			break;
		
		case -1678550350:
			return 91;
			break;
		
		case 2133991728:
			return 32;
			break;
	}
	return 0;
}

void func_404(int iParam0)
{
	*iParam0 = 0;
	if (func_405(-1, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 0);
	}
	if (func_405(5, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 1);
	}
	if (func_405(6, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 2);
	}
	if (func_405(7, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 3);
	}
	if (func_405(8, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 4);
	}
	if (func_405(29, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 5);
	}
	if (func_405(30, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 6);
	}
	if (func_405(31, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 7);
	}
	if (func_405(32, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 8);
	}
	if (func_405(33, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 9);
	}
	if (func_405(-1, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 10);
	}
	if (func_405(81, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 11);
	}
	if (func_405(51, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 12);
	}
	if (func_405(61, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 13);
	}
	if (func_405(-1, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 14);
	}
	if (func_405(34, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 15);
	}
	if (func_405(35, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 16);
	}
	if (func_405(36, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 17);
	}
	if (func_405(37, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 18);
	}
	if (func_385())
	{
		GAMEPLAY::SET_BIT(iParam0, 19);
	}
}

int func_405(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_429(iParam1, iParam3))
	{
		return 1;
	}
	if (iParam0 == -1)
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358.f_539.f_2241[(iParam0 / 32)], (iParam0 % 32));
	}
	else
	{
		if (func_428(iParam1, iParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iParam2, 177270108) || VEHICLE::IS_VEHICLE_MODEL(iParam2, 387748548))
				{
					return 1;
				}
				else if (VEHICLE::IS_VEHICLE_MODEL(iParam2, 1502869817))
				{
					if ((iParam0 == 85 || iParam0 == 86) || iParam0 == 87)
					{
						return 1;
					}
				}
			}
		}
		if (func_427(iParam1, iParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iParam2, -2118308144))
				{
					return 1;
				}
			}
		}
		if (func_426(iParam1, iParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iParam2, 2069146067))
				{
					return 1;
				}
			}
		}
		if (func_425(iParam1, iParam3))
		{
			return 1;
		}
		if (func_424(iParam1, iParam3))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iParam2, -1242608589))
			{
				if (iParam0 == 85 || iParam0 == 86)
				{
					return 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !ENTITY::IS_ENTITY_DEAD(iParam2, 0))
		{
			switch (ENTITY::GET_ENTITY_MODEL(iParam2))
			{
				case 1721676810:
				case 668439077:
				case -1694081890:
				case -2042350822:
				case 1009171724:
				case -1924800695:
				case -1744505657:
				case 628003514:
				case -27326686:
				case -1812949672:
				case -1374500452:
				case 80636076:
				case -915704871:
				case -688189648:
				case -1375060657:
				case -1293924613:
				case -2061049099:
				case 444994115:
				case 540101442:
				case -801550069:
				case -1146969353:
				case 2139203625:
				case 1637620610:
				case -755532233:
				case -1106120762:
				case -1478704292:
				case 679453769:
				case 1542143200:
				case -1890996696:
				case 1909700336:
				case -579747861:
				case 2038858402:
				case 373261600:
				case 1742022738:
				case 840387324:
				case -715746948:
				case 1537277726:
				case 1239571361:
				case -286046740:
					return 1;
					break;
				}
		}
		if (((iParam0 == 85 || iParam0 == 86) || iParam0 == 87) || iParam0 == 88)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (func_411(iParam2) || func_410(ENTITY::GET_ENTITY_MODEL(iParam2)))
				{
					return 1;
				}
			}
		}
		if (iParam0 == 77 || iParam0 == 78)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iParam2, 1489874736))
				{
					return 1;
				}
			}
		}
		if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iParam2, 2069146067))
				{
					return 1;
				}
			}
		}
		if (((iParam0 == 72 || iParam0 == 73) || iParam0 == 74) || iParam0 == 75)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iParam2, -212993243) || func_410(ENTITY::GET_ENTITY_MODEL(iParam2)))
				{
					return 1;
				}
			}
		}
		if ((((iParam0 == 21 || iParam0 == 22) || iParam0 == 23) || iParam0 == 95) || iParam0 == 96)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (func_410(ENTITY::GET_ENTITY_MODEL(iParam2)))
				{
					return 1;
				}
			}
		}
		if ((((((iParam0 == 17 || iParam0 == 18) || iParam0 == 19) || iParam0 == 20) || iParam0 == 62) || iParam0 == 63) || iParam0 == 64)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (func_410(ENTITY::GET_ENTITY_MODEL(iParam2)))
				{
					return 1;
				}
			}
		}
	}
	if (func_83() == 0)
	{
		return func_406(iParam0, -1);
	}
	return 1;
}

bool func_406(int iParam0, int iParam1)
{
	uVar0 = func_407(iParam0, iParam1);
	iVar1 = iParam0;
	return GAMEPLAY::IS_BIT_SET(uVar0, func_32(iVar1));
}

var func_407(var uParam0, int iParam1)
{
	uVar0 = func_51(func_408(uParam0), iParam1, 0);
	return uVar0;
}

int func_408(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = func_36(iVar0);
	if ((func_83() == 0 || func_409() == 0) || (func_83() == 999 && func_409() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 729;
				break;
			
			case 1:
				return 730;
				break;
			
			case 2:
				return 731;
				break;
			
			case 3:
				return 732;
				break;
			
			case 4:
				return 733;
				break;
			
			case 5:
				return 734;
				break;
			
			case 6:
				return 735;
				break;
		}
	}
	return 11511;
}

int func_409()
{
	return Global_30769;
}

int func_410(int iParam0)
{
	if (((iParam0 == 1945374990 || iParam0 == 1653666139) || iParam0 == 219613597) || iParam0 == -1988428699)
	{
		return 1;
	}
	return 0;
}

int func_411(int iParam0)
{
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return 0;
	}
	if (func_414(iParam0, 0))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
	{
		if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::_NETWORK_GET_PLAYER_VEHICLE_NETWORK_ID(PLAYER::PLAYER_ID()))
		{
			if (func_412(iParam0))
			{
				return 1;
			}
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case 159274291:
				case 433954513:
				case 1483171323:
				case 886810209:
				case 1561920505:
				case -410205223:
				case 903794909:
				case -391595372:
				case 1254014755:
				case 1416466158:
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_412(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	if (func_413(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_413(int iParam0)
{
	switch (iParam0)
	{
		case 562680400:
		case 1897744184:
		case -32236122:
		case 884483972:
		case -1210451983:
		case 1356124575:
		case -1924433270:
		case -1242608589:
		case -212993243:
		case 2044532910:
		case -638562243:
			return 1;
			break;
	}
	return 0;
}

int func_414(int iParam0, bool bParam1)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case -2096818938:
		case -1860900134:
			if (func_416(ENTITY::GET_ENTITY_MODEL(iParam0), 0))
			{
				if (Global_2537071.f_301 == iParam0)
				{
					return 1;
				}
				else if (func_415(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_415(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2439138.f_628[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_416(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_210(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case -2119578145:
		case -682211828:
		case 349605904:
		case 525509695:
		case -1150599089:
		case 523724515:
			return func_423();
			break;
		
		case -1685021548:
			if (Global_262145.f_14219)
			{
				return func_422();
			}
			break;
		
		case 464687292:
		case 1531094468:
		case 1762279763:
			if (Global_262145.f_14220)
			{
				return func_422();
			}
			break;
		
		case 16646064:
			if (Global_262145.f_14218)
			{
				return func_422();
			}
			break;
		
		case -310465116:
			if (Global_262145.f_14221)
			{
				return func_422();
			}
			break;
		
		case 729783779:
			if (Global_262145.f_14223)
			{
				return func_422();
			}
			break;
		
		case 970598228:
		case -1041692462:
			return func_421();
			break;
		
		case -1045541610:
			if (Global_262145.f_18669)
			{
				return func_420();
			}
			break;
		
		case -239841468:
			if (Global_262145.f_18671)
			{
				return func_420();
			}
			break;
		
		case 627535535:
			if (Global_262145.f_18675)
			{
				return func_420();
			}
			break;
		
		case -566387422:
			if (Global_262145.f_18672)
			{
				return func_420();
			}
			break;
		
		case 1034187331:
			if (Global_262145.f_18679)
			{
				return func_420();
			}
			break;
		
		case -2048333973:
			if (Global_262145.f_18677)
			{
				return func_420();
			}
			break;
		
		case 1886268224:
			if (Global_262145.f_18682)
			{
				return func_420();
			}
			break;
		
		case -2096818938:
			if (Global_262145.f_20625)
			{
				return func_419();
			}
			break;
		
		case -1860900134:
			if (Global_262145.f_20626)
			{
				return func_419();
			}
			break;
		
		case -667151410:
		case -589178377:
			return func_418();
			break;
		
		case 75131841:
			if (func_418() || func_417())
			{
				return 1;
			}
			break;
		
		case -2096690334:
			return func_418();
			break;
		
		case 931280609:
			return func_418();
			break;
		
		case 741090084:
			return func_418();
			break;
		
		case 80636076:
			return func_418();
			break;
		
		case -915704871:
			return func_418();
			break;
		
		case 444994115:
			return func_418();
			break;
		
		case 1637620610:
			return func_418();
			break;
		
		case -755532233:
			return func_418();
			break;
		
		case -27326686:
			return func_418();
			break;
		
		case -1812949672:
			return func_418();
			break;
		
		case -1374500452:
			return func_418();
			break;
		
		case 1009171724:
		case 2139203625:
		case 668439077:
		case -2061049099:
		case 628003514:
		case 1721676810:
		case -1146969353:
		case -801550069:
		case -688189648:
		case 540101442:
		case -1924800695:
		case -1890996696:
		case -1694081890:
		case 373261600:
		case 1537277726:
		case 840387324:
		case 1542143200:
		case 679453769:
		case -1375060657:
		case -1106120762:
		case -1744505657:
		case 2038858402:
		case -2042350822:
		case 1742022738:
		case 1239571361:
		case -715746948:
		case -579747861:
		case 1909700336:
		case -1293924613:
		case -1478704292:
			return func_418();
			break;
		
		case 1026149675:
			if (Global_262145.f_28524)
			{
				return func_417();
			}
			break;
		
		case 722226637:
			if (Global_262145.f_28874)
			{
				return func_417();
			}
			break;
		
		case -2124201592:
			if (Global_262145.f_28523)
			{
				return func_417();
			}
			break;
		
		case 1830407356:
			if (Global_262145.f_28873)
			{
				return func_417();
			}
			break;
		
		case 1871995513:
			if (Global_262145.f_28872)
			{
				return func_417();
			}
			break;
	}
	return 0;
}

var func_417()
{
	return DLC2::IS_DLC_PRESENT(1815791016);
}

var func_418()
{
	return DLC2::IS_DLC_PRESENT(1927191088);
}

var func_419()
{
	return DLC2::IS_DLC_PRESENT(2067165443);
}

var func_420()
{
	return DLC2::IS_DLC_PRESENT(-957277403);
}

var func_421()
{
	return DLC2::IS_DLC_PRESENT(210122941);
}

var func_422()
{
	return DLC2::IS_DLC_PRESENT(-1894522408);
}

var func_423()
{
	return DLC2::IS_DLC_PRESENT(1630677557);
}

int func_424(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (iParam1 == 10)
		{
			return 1;
		}
	}
	return 0;
}

int func_425(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (iParam1 == 12)
		{
			return 1;
		}
	}
	return 0;
}

int func_426(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (iParam1 == 16)
		{
			return 1;
		}
	}
	return 0;
}

int func_427(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (iParam1 == 14)
		{
			return 1;
		}
	}
	return 0;
}

int func_428(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (iParam1 == 11)
		{
			return 1;
		}
	}
	return 0;
}

int func_429(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if ((iParam1 == 1 || iParam1 == 2) || iParam1 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_430(int iParam0)
{
	*uParam0 = 0;
	if (func_405(-1, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(uParam0, 0);
	}
	if (func_405(-1, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 1);
	}
	if (func_405(43, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 2);
	}
	if (func_405(44, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 3);
	}
	if (func_405(45, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 4);
	}
	if (func_405(55, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 5);
	}
	if (func_405(56, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 6);
	}
	if (func_405(57, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 7);
	}
	if (func_405(58, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 8);
	}
	if (func_405(59, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 9);
	}
	if (func_405(60, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 10);
	}
	if (func_405(-1, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 11);
	}
	if (func_405(47, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 12);
	}
	if (func_405(48, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 13);
	}
	if (func_405(49, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 14);
	}
	if (func_405(50, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 15);
	}
	if (func_405(-1, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 16);
	}
	if (func_405(13, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 17);
	}
	if (func_405(14, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 18);
	}
	if (func_405(15, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 19);
	}
	if (func_405(16, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 20);
	}
	if (func_405(-1, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 21);
	}
	if (func_405(77, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 22);
	}
	if (func_405(-1, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 23);
	}
	if (func_405(-1, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 24);
	}
	if (func_405(-1, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 25);
	}
	if (func_405(-1, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 26);
	}
	if (func_405(-1, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 27);
	}
	if (func_405(-1, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 28);
	}
	if (func_405(46, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 29);
	}
}

void func_431(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

int func_432(int iParam0)
{
	if (func_102(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_433(int iParam0)
{
	uVar0 = iParam0;
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_434(char* sParam0, float fParam1)
{
	unk_0x090939265EBDAE0D(func_28(sParam0), fParam1);
}

void func_435(char* sParam0, char* sParam1)
{
	unk_0x1FF7374D40CF9489(func_28(sParam0), sParam1);
}

int func_436(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	iVar0 = 0;
	while (func_382(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
	{
		if ((iParam0 == iVar6 && (!bParam3 || iParam1 == iVar7)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

void func_437(int iParam0, var uParam1, int iParam2)
{
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1008861746;
			if (Global_111638.f_9080.f_99.f_58[128] && !Global_111638.f_9080.f_99.f_58[131])
			{
				iVar0 = -1883869285;
			}
			switch (iVar0)
			{
				case -1008861746:
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case -1883869285:
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = -1435919434;
			switch (iVar0)
			{
				case -1435919434:
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111638.f_9080.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = 736902334;
			}
			else if (iParam2 == 2)
			{
				iVar0 = -2140431165;
			}
			else if (Global_111638.f_9080.f_99.f_58[118])
			{
				iVar0 = -2140431165;
			}
			else
			{
				iVar0 = 736902334;
			}
			switch (iVar0)
			{
				case -2140431165:
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case 736902334:
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_438(int iParam0)
{
	if (func_250(iParam0))
	{
		if ((Global_111638.f_9080 || Global_3) || func_246(0))
		{
			return Global_111638.f_2358.f_539.f_2348[iParam0];
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_439(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_440(var uParam0, int iParam1)
{
	*uParam0 = Global_1323615[iParam1].f_66;
	uParam0->f_3 = Global_1323615[iParam1].f_65;
	uParam0->f_4 = Global_1323615[iParam1].f_62;
	uParam0->f_5 = Global_1323615[iParam1].f_63;
	uParam0->f_6 = Global_1323615[iParam1].f_64;
	uParam0->f_10 = Global_1323615[iParam1].f_69;
	uParam0->f_16 = GAMEPLAY::IS_BIT_SET(Global_1323615[iParam1].f_77, 9);
	uParam0->f_19 = { Global_1323615[iParam1].f_1 };
	uParam0->f_23 = Global_1323615[iParam1];
	uParam0->f_7 = Global_1323615[iParam1].f_9[11];
	uParam0->f_8 = Global_1323615[iParam1].f_9[12];
	uParam0->f_9 = Global_1323615[iParam1].f_9[23];
	uParam0->f_11 = Global_1323615[iParam1].f_9[4];
	uParam0->f_12 = Global_1323615[iParam1].f_9[15];
	uParam0->f_13 = Global_1323615[iParam1].f_9[16];
	uParam0->f_14 = Global_1323615[iParam1].f_9[14];
	uParam0->f_15 = Global_1323615[iParam1].f_9[22];
	uParam0->f_18 = Global_1323615[iParam1].f_9[20];
	uParam0->f_17 = Global_1323615[iParam1].f_9[18];
	uParam0->f_40 = GAMEPLAY::IS_BIT_SET(Global_1323615[iParam1].f_102, 25);
	uParam0->f_41 = GAMEPLAY::IS_BIT_SET(Global_1323615[iParam1].f_102, 26);
	func_436(Global_1323615[iParam1].f_5, Global_1323615[iParam1].f_7, Global_1323615[iParam1].f_137, 1, &(uParam0->f_1));
	func_436(Global_1323615[iParam1].f_6, -1, Global_1323615[iParam1].f_138, 0, &(uParam0->f_2));
	if (GAMEPLAY::IS_BIT_SET(Global_1323615[iParam1].f_77, 13))
	{
		uParam0->f_1 = -1;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1323615[iParam1].f_77, 12))
	{
		uParam0->f_2 = -1;
	}
	uParam0->f_42 = Global_2097152[func_191()].f_6086.f_52;
}

int func_441(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 307)
	{
		if (func_442(iVar0, &iVar1))
		{
			if (iVar1 == iParam0)
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_442(int iParam0, int iParam1)
{
	*iParam1 = -1;
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 <= 9)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 13 && iParam0 <= 22)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 26 && iParam0 <= 35)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 39 && iParam0 <= 48)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 52 && iParam0 <= 61)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((iParam0 >= 65 && iParam0 <= 74) || (iParam0 >= 75 && iParam0 <= 84))
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((((iParam0 >= 88 && iParam0 <= 107) || (iParam0 >= 108 && iParam0 <= 127)) || (iParam0 >= 128 && iParam0 <= 147)) || (iParam0 >= 148 && iParam0 <= 155))
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0 += 20;
	if (iParam0 >= 179 && iParam0 <= 185)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 191 && iParam0 <= 221)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 227 && iParam0 <= 235)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 237 && iParam0 <= 245)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 247 && iParam0 <= 255)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	if (iParam0 >= 258 && iParam0 <= 267)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (*iParam1 >= 212 || *iParam1 == -1)
	{
		*iParam1 = 0;
		return 0;
	}
	return *iParam1 != -1;
}

void func_443()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_160(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (func_444())
		{
			if (!func_23(3612, -1, -1))
			{
				func_14(2921, 1, -1, 1);
				func_14(2922, 1, -1, 1);
				func_14(2923, 1, -1, 1);
				func_14(2924, 1, -1, 1);
				func_14(2925, 1, -1, 1);
				func_14(3612, 1, -1, 1);
			}
		}
		else if (func_23(3612, -1, -1))
		{
			func_14(3612, 0, -1, 1);
		}
		iVar0 = func_191();
		if (((((iVar0 == 0 && func_23(2921, -1, -1)) || (iVar0 == 1 && func_23(2922, -1, -1))) || (iVar0 == 2 && func_23(2923, -1, -1))) || (iVar0 == 3 && func_23(2924, -1, -1))) || (iVar0 == 4 && func_23(2925, -1, -1)))
		{
			iVar1 = 0;
			while (iVar1 < 10)
			{
				iVar2 = (Global_2097152[iVar0].f_6086.f_74[iVar1] - 1);
				if (((iVar2 >= 0 && Global_1323615[iVar2].f_66 != 0) && (!GAMEPLAY::IS_BIT_SET(Global_1323615[iVar2].f_102, 1) || GAMEPLAY::IS_BIT_SET(Global_1323615[iVar2].f_102, 2))) && func_212(Global_1323615[iVar2].f_66))
				{
					if (func_442(iVar2, &iVar3))
					{
						if (!GAMEPLAY::IS_BIT_SET(Global_1323615[iVar2].f_102, 26))
						{
							GAMEPLAY::SET_BIT(&(Global_1323615[iVar2].f_102), 25);
						}
					}
				}
				iVar1++;
			}
			Global_2097152[iVar0].f_6086.f_53 = 0;
			if (iVar0 == 0)
			{
				func_14(2921, 0, -1, 1);
			}
			if (iVar0 == 1)
			{
				func_14(2922, 0, -1, 1);
			}
			if (iVar0 == 2)
			{
				func_14(2923, 0, -1, 1);
			}
			if (iVar0 == 3)
			{
				func_14(2924, 0, -1, 1);
			}
			if (iVar0 == 4)
			{
				func_14(2925, 0, -1, 1);
			}
		}
	}
}

int func_444()
{
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(1571103992, &uVar0, -1);
				GAMEPLAY::SET_BIT(&uVar0, 2);
				GAMEPLAY::SET_BIT(&uVar0, 4);
				GAMEPLAY::SET_BIT(&uVar0, 6);
				GAMEPLAY::SET_BIT(&Global_25, 2);
				GAMEPLAY::SET_BIT(&Global_25, 4);
				GAMEPLAY::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(1571103992, uVar0, 1);
				if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
				{
					iVar0 = GAMEPLAY::GET_PROFILE_SETTING(866);
					GAMEPLAY::SET_BIT(&iVar0, 0);
					STATS::_0xDAC073C7901F9E15(iVar0);
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
	if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
	{
		if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_445()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar7[iVar0] = Global_2097152[func_191()].f_6086.f_74[iVar0];
		iVar0++;
	}
	switch (iLocal_324)
	{
		case 0:
			bVar6 = false;
			if (!func_446(PLAYER::PLAYER_ID(), 1))
			{
				iVar0 = 0;
				while (iVar0 < 10)
				{
					iVar2 = (Global_2097152[func_191()].f_6086.f_74[iVar0] - 1);
					if (iVar2 >= 0 && (Global_1323615[iVar2].f_66 == 0 || (GAMEPLAY::IS_BIT_SET(Global_1323615[iVar2].f_102, 1) && !GAMEPLAY::IS_BIT_SET(Global_1323615[iVar2].f_102, 2))))
					{
						Global_2097152[func_191()].f_6086.f_74[iVar0] = 0;
						iVar7[iVar0] = 0;
						iVar1 = 0;
						while (iVar1 < 10)
						{
							if (Global_2097152[func_191()].f_6086.f_63[iVar1] == iVar2 + 1)
							{
								Global_2097152[func_191()].f_6086.f_63[iVar1] = 0;
							}
							iVar1++;
						}
						bVar6 = true;
					}
					iVar0++;
				}
			}
			if (bVar6)
			{
				iVar1 = 0;
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (iVar7[iVar0] != 0)
					{
						Global_2097152[func_191()].f_6086.f_74[iVar1] = iVar7[iVar0];
						iVar1++;
					}
					iVar0++;
				}
				iVar0 = iVar1;
				while (iVar0 <= 9)
				{
					Global_2097152[func_191()].f_6086.f_74[iVar0] = 0;
					iVar0++;
				}
			}
			iLocal_324++;
			break;
		
		case 1:
			iVar2 = -1;
			if (((Global_2097152[func_191()].f_6174.f_2 != Global_2097152[func_191()].f_6086.f_85 && Global_2097152[func_191()].f_6174.f_2 != -1) && Global_1323615[Global_2097152[func_191()].f_6174.f_2].f_66 != 0) && (!GAMEPLAY::IS_BIT_SET(Global_1323615[Global_2097152[func_191()].f_6174.f_2].f_102, 1) || GAMEPLAY::IS_BIT_SET(Global_1323615[Global_2097152[func_191()].f_6174.f_2].f_102, 2)))
			{
				iVar2 = Global_2097152[func_191()].f_6174.f_2;
				Global_2097152[func_191()].f_6086.f_85 = iVar2;
			}
			else if (Global_2097152[func_191()].f_6086.f_86 != 0)
			{
				iVar2 = (Global_2097152[func_191()].f_6086.f_86 - 1);
				Global_2097152[func_191()].f_6086.f_86 = 0;
			}
			if (iVar2 != -1)
			{
				bVar18 = false;
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (Global_2097152[func_191()].f_6086.f_63[iVar0] == iVar2 + 1)
					{
						bVar18 = true;
					}
					iVar0++;
				}
				if (!bVar18)
				{
					iVar19 = -1;
					iVar0 = 0;
					while (iVar0 < 10)
					{
						if (Global_2097152[func_191()].f_6086.f_74[iVar0] > 0)
						{
							iVar19 = iVar0;
						}
						iVar0++;
					}
					if (iVar19 < 9)
					{
						iVar19++;
					}
					iVar0 = 0;
					while (iVar0 < 10)
					{
						if (Global_2097152[func_191()].f_6086.f_63[iVar0] == Global_2097152[func_191()].f_6086.f_74[iVar19])
						{
							Global_2097152[func_191()].f_6086.f_63[iVar0] = iVar2 + 1;
							iVar0 = 11;
						}
						iVar0++;
					}
				}
				Global_2097152[func_191()].f_6086.f_74[0] = iVar2 + 1;
				iVar1 = 1;
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if ((iVar7[iVar0] != 0 && iVar7[iVar0] != iVar2 + 1) && iVar1 < 10)
					{
						Global_2097152[func_191()].f_6086.f_74[iVar1] = iVar7[iVar0];
						iVar1++;
					}
					iVar0++;
				}
				iVar0 = iVar1;
				while (iVar0 <= 9)
				{
					Global_2097152[func_191()].f_6086.f_74[iVar0] = 0;
					iVar0++;
				}
			}
			else
			{
				iVar3 = 0;
				iVar5 = -1;
				iVar0 = 0;
				while (iVar0 <= 9)
				{
					if (Global_2097152[func_191()].f_6086.f_74[iVar0] == 0)
					{
						if (iVar5 == -1)
						{
							iVar5 = iVar0;
						}
						iVar3++;
					}
					iVar0++;
				}
				if (iVar3 > 0)
				{
					iVar4 = 0;
					iVar0 = 0;
					while (iVar0 <= 306)
					{
						if (((func_442(iVar0, &iVar1) && Global_1323615[iVar0].f_66 != 0) && (!GAMEPLAY::IS_BIT_SET(Global_1323615[iVar0].f_102, 1) || GAMEPLAY::IS_BIT_SET(Global_1323615[iVar0].f_102, 2))) && func_212(Global_1323615[iVar0].f_66))
						{
							iVar4++;
						}
						if (iVar4 > (10 - iVar3))
						{
						}
						else
						{
							iVar0++;
						}
					}
					if (iVar4 > (10 - iVar3))
					{
						iVar0 = 0;
						while (iVar0 <= 306)
						{
							if (((func_442(iVar0, &iVar1) && Global_1323615[iVar0].f_66 != 0) && (!GAMEPLAY::IS_BIT_SET(Global_1323615[iVar0].f_102, 1) || GAMEPLAY::IS_BIT_SET(Global_1323615[iVar0].f_102, 2))) && func_212(Global_1323615[iVar0].f_66))
							{
								bVar20 = false;
								iVar1 = 0;
								while (iVar1 < 10)
								{
									if (Global_2097152[func_191()].f_6086.f_63[iVar1] == iVar0 + 1)
									{
										bVar20 = true;
										iVar1 = 11;
									}
									iVar1++;
								}
								if (!bVar20)
								{
									iVar2 = iVar0;
									iVar0 = 308;
								}
							}
							iVar0++;
						}
						if (iVar2 != -1)
						{
							iVar0 = 0;
							while (iVar0 < 10)
							{
								if (Global_2097152[func_191()].f_6086.f_63[iVar0] == Global_2097152[func_191()].f_6086.f_74[iVar5])
								{
									Global_2097152[func_191()].f_6086.f_63[iVar0] = iVar2 + 1;
									iVar0 = 11;
								}
								iVar0++;
							}
							Global_2097152[func_191()].f_6086.f_74[iVar5] = iVar2 + 1;
						}
					}
				}
			}
			iLocal_324++;
			break;
		
		default:
			iLocal_324++;
			break;
	}
	if (iLocal_324 > 300)
	{
		iLocal_324 = 0;
	}
}

int func_446(int iParam0, bool bParam1)
{
	if (func_447(iParam0, bParam1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 3))
		{
			return 1;
		}
	}
	return 0;
}

int func_447(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590535[iParam0].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_462(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_461(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_460(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_459(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_458(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_457(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_456(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_455(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_495(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_454(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_453(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_452(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_451(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_450(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_448(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_448(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_160(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[iParam0].f_310.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_449(int iParam0)
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
		case 79:
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

int func_450(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_160(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[iParam0].f_310.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_451(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_160(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[iParam0].f_310.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_452(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_160(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[iParam0].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_453(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_160(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[iParam0].f_310.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_454(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_97())
	{
		if (func_160(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_97())
			{
				return func_449(Global_2425662[iParam0].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_455(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_160(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_456(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_160(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_97())
			{
				return func_449(Global_2425662[iParam0].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_457(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_160(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[iParam0].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_458(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_160(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[iParam0].f_310.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_459(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_160(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[iParam0].f_310.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_460(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_160(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[iParam0].f_310.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_461(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_160(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[iParam0].f_310.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_462(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_160(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[iParam0].f_310.f_5) == 0;
			}
		}
	}
	return 0;
}

void func_463()
{
	switch (iLocal_85)
	{
		case 0:
			if (bLocal_84)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_478(0, 0);
				}
				func_430(&iVar0);
				unk_0xEBD5716567F1D347("car");
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					unk_0xB5B7B792811308A7(&Local_87);
					unk_0xB5B7B792811308A7("mpUnlocks");
				}
				else
				{
					unk_0xB5B7B792811308A7("spUnlocks");
				}
				func_198("unlockBitset1", iVar0);
				iLocal_132[0] = iVar0;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					unk_0x98C61465A1232E0E();
					unk_0x98C61465A1232E0E();
				}
				else
				{
					unk_0x98C61465A1232E0E();
				}
				unk_0xFE0C6A4F9007749F();
				iLocal_85++;
			}
			break;
		
		case 1:
			func_404(&iVar0);
			unk_0xEBD5716567F1D347("car");
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				unk_0xB5B7B792811308A7(&Local_87);
				unk_0xB5B7B792811308A7("mpUnlocks");
			}
			else
			{
				unk_0xB5B7B792811308A7("spUnlocks");
			}
			func_198("unlockBitset2", iVar0);
			iLocal_132[1] = iVar0;
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				unk_0x98C61465A1232E0E();
				unk_0x98C61465A1232E0E();
			}
			else
			{
				unk_0x98C61465A1232E0E();
			}
			unk_0xFE0C6A4F9007749F();
			iVar1 = 0;
			while (iVar1 < 6)
			{
				iLocal_137[iVar1] = 0;
				iVar1++;
			}
			iLocal_136 = 0;
			iLocal_85++;
			break;
		
		case 2:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				while (iVar2 < 25 && !bVar3)
				{
					if (func_396(&iLocal_137, iLocal_136) == -1)
					{
						bVar3 = true;
						iLocal_85++;
					}
					iLocal_136++;
					iVar2++;
				}
			}
			else
			{
				iLocal_85++;
			}
			break;
		
		case 3:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				unk_0xEBD5716567F1D347("car");
				unk_0xB5B7B792811308A7(&Local_87);
				unk_0xB5B7B792811308A7(&Local_93);
				func_198("carColoursUnlocked0", iLocal_137[0]);
				uLocal_144[0] = iLocal_137[0];
				func_198("carColoursUnlocked1", iLocal_137[1]);
				uLocal_144[1] = iLocal_137[1];
				func_198("carColoursUnlocked2", iLocal_137[2]);
				uLocal_144[2] = iLocal_137[2];
				func_198("carColoursUnlocked3", iLocal_137[3]);
				uLocal_144[3] = iLocal_137[3];
				func_198("carColoursUnlocked4", iLocal_137[4]);
				uLocal_144[4] = iLocal_137[4];
				func_198("carColoursUnlocked5", iLocal_137[5]);
				uLocal_144[5] = iLocal_137[5];
				func_464(&iVar0);
				func_198("unlockBitset3", iVar0);
				iLocal_132[2] = iVar0;
				unk_0x98C61465A1232E0E();
				unk_0x98C61465A1232E0E();
				unk_0xFE0C6A4F9007749F();
			}
			else
			{
				unk_0xEBD5716567F1D347("car");
				unk_0xB5B7B792811308A7("spUnlocks");
				func_396(&iLocal_137, -1);
				func_198("carColoursUnlocked0", iLocal_137[0]);
				uLocal_144[0] = iLocal_137[0];
				func_198("carColoursUnlocked1", iLocal_137[1]);
				uLocal_144[1] = iLocal_137[1];
				func_198("carColoursUnlocked2", iLocal_137[2]);
				uLocal_144[2] = iLocal_137[2];
				func_198("carColoursUnlocked3", iLocal_137[3]);
				uLocal_144[3] = iLocal_137[3];
				func_198("carColoursUnlocked4", iLocal_137[4]);
				uLocal_144[4] = iLocal_137[4];
				func_198("carColoursUnlocked5", iLocal_137[5]);
				uLocal_144[5] = iLocal_137[5];
				unk_0x98C61465A1232E0E();
				unk_0xFE0C6A4F9007749F();
			}
			iLocal_85++;
			break;
		
		case 4:
			bLocal_84 = false;
			iLocal_85 = 0;
			break;
	}
}

void func_464(int iParam0)
{
	if (func_465(18, 1) || func_405(61, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 0);
	}
	if (func_465(11, 0))
	{
		GAMEPLAY::SET_BIT(iParam0, 1);
	}
	if (func_465(11, 1) || func_405(47, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 2);
	}
	if (func_465(11, 2) || func_405(48, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 3);
	}
	if (func_465(11, 3) || func_405(49, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 4);
	}
	if (func_465(11, 4) || func_405(50, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 5);
	}
	if (func_465(12, 0))
	{
		GAMEPLAY::SET_BIT(iParam0, 6);
	}
	if (func_465(12, 1) || func_405(13, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 7);
	}
	if (func_465(12, 2) || func_405(14, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 8);
	}
	if (func_465(12, 3) || func_405(15, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 9);
	}
	if (func_465(12, 4) || func_405(16, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 10);
	}
	if (func_465(4, 0))
	{
		GAMEPLAY::SET_BIT(iParam0, 11);
	}
	if (func_465(4, 1) || func_405(77, -1, 0, -1))
	{
		GAMEPLAY::SET_BIT(iParam0, 12);
	}
}

int func_465(int iParam0, int iParam1)
{
	if (func_468(iLocal_86, iParam0, iParam1, &iVar0))
	{
		return func_466(iVar0);
	}
	return 1;
}

int func_466(int iParam0)
{
	iVar0 = func_51(818, -1, 0);
	iVar1 = func_467(iParam0);
	if (iVar1 == -1)
	{
		return 1;
	}
	else if (iVar0 >= iVar1)
	{
		return 1;
	}
	return 0;
}

int func_467(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1;
		
		case 2:
			return 1;
		
		case 1:
			return 1;
		
		case 9:
			return 2;
		
		case 10:
			return 2;
		
		case 11:
			return 2;
		
		case 12:
			return 3;
		
		case 5:
			return 3;
		
		case 3:
			return 3;
		
		case 6:
			return 4;
		
		case 7:
			return 4;
		
		case 8:
			return 4;
		
		case 40:
			return 5;
		
		case 38:
			return 5;
		
		case 37:
			return 5;
		
		case 46:
			return 6;
		
		case 45:
			return 6;
		
		case 47:
			return 6;
		
		case 48:
			return 7;
		
		case 41:
			return 7;
		
		case 39:
			return 7;
		
		case 42:
			return 8;
		
		case 43:
			return 8;
		
		case 44:
			return 8;
		
		case 16:
			return 9;
		
		case 14:
			return 9;
		
		case 13:
			return 9;
		
		case 21:
			return 10;
		
		case 22:
			return 10;
		
		case 23:
			return 10;
		
		case 24:
			return 11;
		
		case 17:
			return 11;
		
		case 15:
			return 11;
		
		case 18:
			return 12;
		
		case 19:
			return 12;
		
		case 20:
			return 12;
		
		case 27:
			return 13;
		
		case 26:
			return 13;
		
		case 25:
			return 13;
		
		case 32:
			return 14;
		
		case 34:
			return 14;
		
		case 35:
			return 14;
		
		case 36:
			return 15;
		
		case 28:
			return 15;
		
		case 33:
			return 15;
		
		case 29:
			return 16;
		
		case 30:
			return 16;
		
		case 31:
			return 16;
		
		case 52:
			return 17;
		
		case 50:
			return 17;
		
		case 49:
			return 17;
		
		case 57:
			return 18;
		
		case 58:
			return 18;
		
		case 59:
			return 18;
		
		case 60:
			return 19;
		
		case 53:
			return 19;
		
		case 51:
			return 19;
		
		case 54:
			return 20;
		
		case 55:
			return 20;
		
		case 56:
			return 20;
		
		case 85:
			return 21;
		
		case 86:
			return 21;
		
		case 87:
			return 21;
		
		case 88:
			return 22;
		
		case 89:
			return 22;
		
		case 90:
			return 22;
		
		case 91:
			return 23;
		
		case 92:
			return 23;
		
		case 93:
			return 23;
		
		case 94:
			return 24;
		
		case 95:
			return 24;
		
		case 96:
			return 24;
		
		case 97:
			return 25;
		
		case 98:
			return 25;
		
		case 99:
			return 25;
		
		case 100:
			return 26;
		
		case 101:
			return 26;
		
		case 102:
			return 26;
		
		case 103:
			return 27;
		
		case 104:
			return 27;
		
		case 105:
			return 27;
		
		case 106:
			return 28;
		
		case 107:
			return 28;
		
		case 108:
			return 28;
		
		case 64:
			return 29;
		
		case 62:
			return 29;
		
		case 61:
			return 29;
		
		case 69:
			return 30;
		
		case 70:
			return 30;
		
		case 71:
			return 30;
		
		case 72:
			return 31;
		
		case 65:
			return 31;
		
		case 63:
			return 31;
		
		case 66:
			return 32;
		
		case 67:
			return 32;
		
		case 68:
			return 32;
		
		case 109:
			return 33;
		
		case 110:
			return 33;
		
		case 111:
			return 33;
		
		case 112:
			return 34;
		
		case 113:
			return 34;
		
		case 114:
			return 34;
		
		case 115:
			return 35;
		
		case 116:
			return 35;
		
		case 117:
			return 35;
		
		case 118:
			return 36;
		
		case 119:
			return 36;
		
		case 120:
			return 36;
		
		case 121:
			return 37;
		
		case 122:
			return 37;
		
		case 123:
			return 37;
		
		case 124:
			return 38;
		
		case 125:
			return 38;
		
		case 126:
			return 38;
		
		case 127:
			return 39;
		
		case 128:
			return 39;
		
		case 129:
			return 39;
		
		case 131:
			return 40;
		
		case 130:
			return 40;
		
		case 132:
			return 40;
		
		case 76:
			return 41;
		
		case 74:
			return 41;
		
		case 73:
			return 41;
		
		case 81:
			return 42;
		
		case 82:
			return 42;
		
		case 83:
			return 42;
		
		case 84:
			return 43;
		
		case 77:
			return 43;
		
		case 75:
			return 43;
		
		case 78:
			return 44;
		
		case 79:
			return 44;
		
		case 80:
			return 44;
		
		default:
	}
	return -1;
}

bool func_468(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	uVar0 = func_469(iParam0);
	*uParam3 = 0;
	if (iParam1 == 11)
	{
		if (GAMEPLAY::IS_BIT_SET(uVar0, 0))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 1;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 25;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 61;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 73;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 1))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 2;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 26;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 62;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 74;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 2))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 3;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 33;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 63;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 75;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 3))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 4;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 27;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 64;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 76;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 4))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 5;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 28;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 65;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 77;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 5))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 6;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 29;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 66;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 78;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 6))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 7;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 30;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 67;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 79;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 7))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 8;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 31;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 68;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 80;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 8))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 9;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 32;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 69;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 81;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 9))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 10;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 34;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 70;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 82;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 11))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 11;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 35;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 71;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 83;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 12))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 12;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 36;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 72;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 84;
			}
		}
	}
	else if (iParam1 == 18)
	{
		if (GAMEPLAY::IS_BIT_SET(iVar0, 0))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 49;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 1))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 50;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 2))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 51;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 3))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 52;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 4))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 53;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 5))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 54;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 6))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 55;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 7))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 56;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 8))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 57;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 9))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 58;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 11))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 59;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 12))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 60;
			}
		}
	}
	else if (iParam1 == 13)
	{
		if (GAMEPLAY::IS_BIT_SET(iVar0, 0))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 37;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 87;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*uParam3 = 111;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 1))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 38;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 86;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*uParam3 = 110;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 2))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 39;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 93;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*uParam3 = 117;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 3))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 40;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 85;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*uParam3 = 109;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 4))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 41;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 92;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*uParam3 = 116;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 5))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 42;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 94;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*uParam3 = 118;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 6))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 43;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 95;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*uParam3 = 119;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 7))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 44;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 96;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 120;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 120;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 8))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 45;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 88;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*uParam3 = 112;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 9))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 46;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 89;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*uParam3 = 113;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 11))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 47;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 90;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*uParam3 = 114;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 12))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 48;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 91;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*uParam3 = 115;
			}
		}
	}
	else if (iParam1 == 12)
	{
		if (GAMEPLAY::IS_BIT_SET(iVar0, 0))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 13;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 99;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 123;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 1))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 14;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 98;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 122;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 2))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 15;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 105;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 129;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 3))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 16;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 97;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 121;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 4))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 17;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 104;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 128;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 5))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 18;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 106;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 130;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 6))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 19;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 107;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 131;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 7))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 20;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 108;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 132;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 8))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 21;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 100;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 124;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 9))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 22;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 101;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 125;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 11))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 23;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 102;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 126;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar0, 12))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 24;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 103;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 127;
			}
		}
	}
	return *uParam3 != 0;
}

var func_469(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < 19)
	{
		if (func_470(iParam0, iVar1, 0))
		{
			GAMEPLAY::SET_BIT(&uVar0, iVar1);
		}
		iVar1++;
	}
	return uVar0;
}

int func_470(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return 1;
	}
	if (iParam1 == 15 || iParam1 == 16)
	{
		if (func_477(iParam0) || func_476(iParam0))
		{
			return 1;
		}
	}
	else if (iParam1 == 17)
	{
		if (func_206(iParam0))
		{
			return 1;
		}
	}
	else if (iParam1 == 18)
	{
		if (func_475(iParam0))
		{
			return 1;
		}
	}
	else if (func_472(iParam0, iParam1))
	{
		return 1;
	}
	else if (iParam1 == 14)
	{
	}
	else if (VEHICLE::GET_VEHICLE_CLASS_FROM_NAME(iParam0) == func_471(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_471(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 11:
			return 11;
			break;
		
		case 12:
			return 12;
			break;
		
		case 13:
			return 13;
			break;
		
		case 18:
			return 22;
			break;
	}
	return 0;
}

int func_472(int iParam0, int iParam1)
{
	iVar0 = func_474(iParam1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_473(iParam1, iVar1) == iParam0)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_473(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					return -1216765807;
				
				case 1:
					return -1696146015;
				
				case 2:
					return -1311154784;
				
				case 3:
					return -1291952903;
				
				case 4:
					return 418536135;
				
				case 5:
					return 338562499;
				
				case 6:
					return -1622444098;
				
				case 7:
					return 633712403;
				
				case 8:
					return 1426219628;
				
				case 9:
					return 1987142870;
				
				case 10:
					return -1829802492;
				
				case 11:
					return 2123327359;
				
				case 12:
					return 234062309;
				
				case 13:
					return -295689028;
				
				case 14:
					return 1663218586;
				
				case 15:
					return 408192225;
				
				case 16:
					return -1403128555;
				
				case 17:
					return -1232836011;
				
				case 18:
					return 2067820283;
				
				case 19:
					return 819197656;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return -1461482751;
				
				case 1:
					return -1041692462;
				
				case 2:
					return 2072687711;
				
				case 3:
					return -1045541610;
				
				case 4:
					return 108773431;
				
				case 5:
					return -1995326987;
				
				case 6:
					return 499169875;
				
				case 7:
					return 1737773231;
				
				case 8:
					return 970598228;
				
				case 9:
					return 767087018;
				
				case 10:
					return 1274868363;
				
				case 11:
					return 1039032026;
				
				case 12:
					return -591651781;
				
				case 13:
					return -304802106;
				
				case 14:
					return 736902334;
				
				case 15:
					return 237764926;
				
				case 16:
					return 2072687711;
				
				case 17:
					return -566387422;
				
				case 18:
					return -1566741232;
				
				case 19:
					return -1089039904;
				
				case 20:
					return 2016857647;
				
				case 21:
					return -1297672541;
				
				case 22:
					return -1106353882;
				
				case 23:
					return 544021352;
				
				case 24:
					return -1372848492;
				
				case 25:
					return 410882957;
				
				case 26:
					return -142942670;
				
				case 27:
					return -631760477;
				
				case 28:
					return 1032823388;
				
				case 29:
					return -377465520;
				
				case 30:
					return -1934452204;
				
				case 31:
					return -746882698;
				
				case 32:
					return -1757836725;
				
				case 33:
					return 384071873;
				
				case 34:
					return 1102544804;
				
				case 35:
					return 1887331236;
				
				case 36:
					return -1071380347;
				
				case 37:
					return -777172681;
				
				case 38:
					return 482197771;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 330661258;
				
				case 1:
					return -5153954;
				
				case 2:
					return -591610296;
				
				case 3:
					return -391594584;
				
				case 4:
					return -89291282;
				
				case 5:
					return -624529134;
				
				case 6:
					return 1348744438;
				
				case 7:
					return -511601230;
				
				case 8:
					return 1349725314;
				
				case 9:
					return 873639469;
				
				case 10:
					return 1581459400;
				
				case 11:
					return -1930048799;
				
				case 12:
					return -1122289213;
				
				case 13:
					return -1193103848;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return -682211828;
				
				case 1:
					return 80636076;
				
				case 2:
					return -1800170043;
				
				case 3:
					return -2095439403;
				
				case 4:
					return 1507916787;
				
				case 5:
					return -227741703;
				
				case 6:
					return -1685021548;
				
				case 7:
					return -825837129;
				
				case 8:
					return -1205801634;
				
				case 9:
					return -1013450936;
				
				case 10:
					return 349605904;
				
				case 11:
					return -1361687965;
				
				case 12:
					return 784565758;
				
				case 13:
					return -915704871;
				
				case 14:
					return 723973206;
				
				case 15:
					return -326143852;
				
				case 16:
					return -2119578145;
				
				case 17:
					return -1790546981;
				
				case 18:
					return -2039755226;
				
				case 19:
					return 349315417;
				
				case 20:
					return 37348240;
				
				case 21:
					return 2068293287;
				
				case 22:
					return 525509695;
				
				case 23:
					return 1896491931;
				
				case 24:
					return -1943285540;
				
				case 25:
					return -667151410;
				
				case 26:
					return -589178377;
				
				case 27:
					return 223258115;
				
				case 28:
					return 729783779;
				
				case 29:
					return 833469436;
				
				case 30:
					return 1119641113;
				
				case 31:
					return 1923400478;
				
				case 32:
					return -401643538;
				
				case 33:
					return 972671128;
				
				case 34:
					return -498054846;
				
				case 35:
					return -899509638;
				
				case 36:
					return 16646064;
				
				case 37:
					return 2006667053;
				
				case 38:
					return 523724515;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1051415893;
				
				case 1:
					return -433375717;
				
				case 2:
					return 1545842587;
				
				case 3:
					return 758895617;
				
				case 4:
					return 117401876;
				
				case 5:
					return -831834716;
				
				case 6:
					return -602287871;
				
				case 7:
					return 941800958;
				
				case 8:
					return 1011753235;
				
				case 9:
					return -1660945322;
				
				case 10:
					return -2124201592;
				
				case 11:
					return 1830407356;
				
				case 12:
					return 1078682497;
				
				case 13:
					return 1545842587;
				
				case 14:
					return -2098947590;
				
				case 15:
					return 464687292;
				
				case 16:
					return 1531094468;
				
				case 17:
					return 1762279763;
				
				case 18:
					return -2033222435;
				
				case 19:
					return -1797613329;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1809822327;
				
				case 1:
					return -1903012613;
				
				case 2:
					return 1909141499;
				
				case 3:
					return -1883869285;
				
				case 4:
					return -1150599089;
				
				case 5:
					return -1255452397;
				
				case 6:
					return -1477580979;
				
				case 7:
					return 1123216662;
				
				case 8:
					return -1894894188;
				
				case 9:
					return -1008861746;
				
				case 10:
					return 1777363799;
				
				case 11:
					return 906642318;
				
				case 12:
					return -2030171296;
				
				case 13:
					return -604842630;
				
				case 14:
					return -685276541;
				
				case 15:
					return -1883002148;
				
				case 16:
					return -1241712818;
				
				case 17:
					return 75131841;
				
				case 18:
					return -1807623979;
				
				case 19:
					return 704435172;
				
				case 20:
					return -1289722222;
				
				case 21:
					return 886934177;
				
				case 22:
					return -114627507;
				
				case 23:
					return -2040426790;
				
				case 24:
					return -14495224;
				
				case 25:
					return 627094268;
				
				case 26:
					return -1485523546;
				
				case 27:
					return 1489967196;
				
				case 28:
					return -888242983;
				
				case 29:
					return 1922255844;
				
				case 30:
					return 1723137093;
				
				case 31:
					return -1961627517;
				
				case 32:
					return 1373123368;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return -808831384;
				
				case 1:
					return 142944341;
				
				case 2:
					return 850565707;
				
				case 3:
					return 2006918058;
				
				case 4:
					return -789894171;
				
				case 5:
					return 321739290;
				
				case 6:
					return 1177543287;
				
				case 7:
					return -1775728740;
				
				case 8:
					return -1543762099;
				
				case 9:
					return 1269098716;
				
				case 10:
					return 914654722;
				
				case 11:
					return 741586030;
				
				case 12:
					return -1651067813;
				
				case 13:
					return 1221512915;
				
				case 14:
					return 1337041428;
				
				case 15:
					return 1878062887;
				
				case 16:
					return 634118882;
				
				case 17:
					return 470404958;
				
				case 18:
					return 666166960;
				
				case 19:
					return -394074634;
				
				case 20:
					return -1137532101;
				
				case 21:
					return 884422927;
				
				case 22:
					return 486987393;
				
				case 23:
					return -748008636;
				
				case 24:
					return -808457413;
				
				case 25:
					return 2136773105;
				
				case 26:
					return 1203490606;
				
				case 27:
					return -432008408;
				
				case 28:
					return 683047626;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return -344943009;
				
				case 1:
					return -1130810103;
				
				case 2:
					return -1177863319;
				
				case 3:
					return -1450650718;
				
				case 4:
					return 1682114128;
				
				case 5:
					return -431692672;
				
				case 6:
					return 841808271;
				
				case 7:
					return 1549126457;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return 1126868326;
				
				case 1:
					return -808831384;
				
				case 2:
					return -2128233223;
				
				case 3:
					return 1770332643;
				
				case 4:
					return -1661854193;
				
				case 5:
					return -808457413;
				
				case 6:
					return 788045382;
				
				case 7:
					return -1189015600;
				
				case 8:
					return 1488164764;
				
				case 9:
					return -1453280962;
				
				case 10:
					return -2107990196;
				
				case 11:
					return -349601129;
				
				case 12:
					return -48031959;
				
				case 13:
					return -1269889662;
				
				case 14:
					return -1435919434;
				
				case 15:
					return -1479664699;
				
				case 16:
					return -1237253773;
				
				case 17:
					return 2071877360;
				
				case 18:
					return 92612664;
				
				case 19:
					return 1233534620;
				
				case 20:
					return -2064372143;
				
				case 21:
					return -845961253;
				
				case 22:
					return 1645267888;
				
				case 23:
					return 1933662059;
				
				case 24:
					return -1207771834;
				
				case 25:
					return -2045594037;
				
				case 26:
					return 989381445;
				
				case 28:
					return 101905590;
				
				case 29:
					return -663299102;
				
				case 30:
					return 86520421;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return 1886712733;
				
				case 1:
					return -1006919392;
				
				case 2:
					return -2130482718;
				
				case 3:
					return 444583674;
				
				case 4:
					return -784816453;
				
				case 5:
					return 1353720154;
				
				case 6:
					return -2107990196;
				
				case 7:
					return 475220373;
				
				case 8:
					return -1705304628;
				
				case 9:
					return 48339065;
				
				case 10:
					return -947761570;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return 1560980623;
				
				case 1:
					return 1147287684;
				
				case 2:
					return 55628203;
				
				case 3:
					return -2076478498;
				
				case 4:
					return 1491375716;
				
				case 5:
					return 1783355638;
				
				case 6:
					return -845979911;
				
				case 7:
					return -1207431159;
				
				case 8:
					return -599568815;
				
				case 9:
					return 734217681;
				
				case 10:
					return -1700801569;
				
				case 11:
					return -1323100960;
				
				case 12:
					return -442313018;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return -1987130134;
				
				case 1:
					return -907477130;
				
				case 2:
					return 1876516712;
				
				case 3:
					return 728614474;
				
				case 4:
					return -120287622;
				
				case 5:
					return -119658072;
				
				case 6:
					return 1162065741;
				
				case 7:
					return 699456151;
				
				case 8:
					return 1951180813;
				
				case 9:
					return 65402552;
				
				case 10:
					return -16948145;
				
				case 11:
					return 2072156101;
				
				case 12:
					return 1739845664;
				
				case 13:
					return 1069929536;
				
				case 14:
					return -233098306;
				
				case 15:
					return 121658888;
				
				case 16:
					return 444171386;
				
				case 17:
					return -1346687836;
				
				case 18:
					return -1743316013;
				
				case 19:
					return 893081117;
				
				case 20:
					return 1132262048;
				
				case 21:
					return -1745203402;
				
				case 22:
					return 296357396;
				
				case 23:
					return -310465116;
				
				case 24:
					return -1126264336;
				
				case 25:
					return 1488164764;
				
				case 26:
					return 943752001;
				
				case 27:
					return -1776615689;
				
				case 28:
					return 1475773103;
				
				case 29:
					return -810318068;
				
				case 30:
					return -1311240698;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 1672195559;
				
				case 1:
					return -2140431165;
				
				case 2:
					return -114291515;
				
				case 3:
					return -891462355;
				
				case 4:
					return -2128233223;
				
				case 5:
					return 2006142190;
				
				case 6:
					return -1670998136;
				
				case 7:
					return -634879114;
				
				case 8:
					return -909201658;
				
				case 9:
					return -893578776;
				
				case 10:
					return 788045382;
				
				case 11:
					return -1453280962;
				
				case 12:
					return -140902153;
				
				case 13:
					return 11251904;
				
				case 14:
					return 1753414259;
				
				case 15:
					return 55628203;
				
				case 16:
					return 1265391242;
				
				case 17:
					return 301427732;
				
				case 18:
					return -159126838;
				
				case 19:
					return 640818791;
				
				case 20:
					return 743478836;
				
				case 21:
					return 1836027715;
				
				case 22:
					return -1353081087;
				
				case 23:
					return 741090084;
				
				case 24:
					return 390201602;
				
				case 25:
					return 86520421;
				
				default:
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 1131912276;
				
				case 1:
					return 448402357;
				
				case 2:
					return -186537451;
				
				case 3:
					return 1127861609;
				
				case 4:
					return -1233807380;
				
				case 5:
					return -400295096;
				
				default:
			}
			break;
	}
	return 0;
}

int func_474(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 20;
		
		case 6:
			return 39;
		
		case 3:
			return 14;
		
		case 4:
			return 39;
		
		case 5:
			return 20;
		
		case 1:
			return 32;
		
		case 2:
			return 29;
		
		case 0:
			return 8;
		
		case 9:
			return 31;
		
		case 10:
			return 11;
		
		case 11:
			return 13;
		
		case 12:
			return 31;
		
		case 8:
			return 26;
		
		case 13:
			return 6;
		
		default:
	}
	return 39;
}

int func_475(int iParam0)
{
	switch (iParam0)
	{
		case 340154634:
		case -1960756985:
		case 1492612435:
		case 1181339704:
			return 1;
		
		default:
	}
	return 0;
}

int func_476(int iParam0)
{
	switch (iParam0)
	{
		case 562680400:
		case -32236122:
		case 1897744184:
		case 884483972:
		case -1210451983:
		case -1881846085:
		case 1502869817:
		case 1356124575:
		case -1924433270:
		case 177270108:
		case 159274291:
		case 433954513:
		case 387748548:
		case -769147461:
		case -1242608589:
		case 1489874736:
		case 1483171323:
		case 886810209:
		case -1693015116:
		case -692292317:
		case -212993243:
		case -1435527158:
		case -2118308144:
		case 447548909:
		case 1181327175:
		case 1254014755:
		case 2044532910:
		case -638562243:
		case 2069146067:
		case 1416466158:
			return 1;
		
		default:
	}
	if (func_206(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_477(int iParam0)
{
	switch (iParam0)
	{
		case 989294410:
		case 941494461:
		case -827162039:
		case -312295511:
		case -1649536104:
		case 1180875963:
		case -1590337689:
		case 682434785:
		case -1912017790:
		case -286046740:
			return 1;
		
		default:
	}
	return 0;
}

void func_478(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_486(39, 1, 0);
		func_486(40, 1, 0);
		func_486(41, 1, 0);
		func_486(42, 1, 0);
		func_486(43, 1, 0);
	}
	func_479(1, iParam0, 0);
	func_479(2, iParam0, 1);
	func_479(3, iParam0, 2);
	func_479(4, iParam0, 3);
	func_479(103, iParam0, 3);
	func_479(5, iParam0, 0);
	func_479(6, iParam0, 0);
	func_479(7, iParam0, 0);
	func_479(8, iParam0, 0);
	func_479(9, iParam0, 0);
	func_479(10, iParam0, 0);
	func_479(11, iParam0, 0);
	func_479(12, iParam0, 0);
	func_479(13, iParam0, 0);
	func_479(14, iParam0, 2);
	func_479(15, iParam0, 3);
	func_479(16, iParam0, 3);
	func_479(17, iParam0, 0);
	func_479(18, iParam0, 1);
	func_479(19, iParam0, 2);
	func_479(20, iParam0, 2);
	func_479(101, iParam0, 3);
	func_479(102, iParam0, 3);
	func_479(21, iParam0, 0);
	func_479(22, iParam0, 1);
	func_479(23, iParam0, 2);
	func_479(24, iParam0, 3);
	func_479(25, iParam0, 0);
	func_479(26, iParam0, 1);
	func_479(27, iParam0, 2);
	func_479(28, iParam0, 3);
	func_479(29, iParam0, 0);
	func_479(30, iParam0, 0);
	func_479(31, iParam0, 1);
	func_479(32, iParam0, 2);
	func_479(33, iParam0, 3);
	func_479(34, iParam0, 0);
	func_479(35, iParam0, 0);
	func_479(36, iParam0, 0);
	func_479(37, iParam0, 0);
	func_479(38, iParam0, 0);
	func_479(39, iParam0, 0);
	func_479(40, iParam0, 0);
	func_479(41, iParam0, 0);
	func_479(42, iParam0, 0);
	func_479(43, iParam0, 0);
	func_479(44, iParam0, 2);
	func_479(45, iParam0, 3);
	func_479(99, iParam0, 1);
	func_479(46, iParam0, 1);
	func_479(55, iParam0, 0);
	func_479(60, iParam0, 0);
	func_479(59, iParam0, 1);
	func_479(58, iParam0, 1);
	func_479(56, iParam0, 2);
	func_479(57, iParam0, 3);
	func_479(47, iParam0, 0);
	func_479(48, iParam0, 1);
	func_479(49, iParam0, 2);
	func_479(50, iParam0, 3);
	func_479(51, iParam0, 0);
	func_479(52, iParam0, 1);
	func_479(53, iParam0, 2);
	func_479(54, iParam0, 3);
	func_479(106, iParam0, 3);
	func_479(61, iParam0, 0);
	func_479(62, iParam0, 1);
	func_479(63, iParam0, 1);
	func_479(64, iParam0, 2);
	func_479(65, iParam0, 2);
	func_479(66, iParam0, 0);
	func_479(67, iParam0, 1);
	func_479(68, iParam0, 2);
	func_479(69, iParam0, 3);
	func_479(70, iParam0, 3);
	func_479(71, iParam0, 3);
	func_479(72, iParam0, 0);
	func_479(73, iParam0, 0);
	func_479(74, iParam0, 1);
	func_479(75, iParam0, 2);
	func_479(76, iParam0, 3);
	func_479(77, iParam0, 0);
	func_479(78, iParam0, 1);
	func_479(79, iParam0, 2);
	func_479(80, iParam0, 3);
	func_479(100, iParam0, 3);
	func_479(81, iParam0, 0);
	func_479(82, iParam0, 1);
	func_479(83, iParam0, 2);
	func_479(84, iParam0, 3);
	func_479(105, iParam0, 3);
	func_479(85, iParam0, 0);
	func_479(86, iParam0, 0);
	func_479(87, iParam0, 0);
	func_479(88, iParam0, 0);
	func_479(104, iParam0, 0);
	func_479(91, iParam0, 0);
	func_479(92, iParam0, 1);
	func_479(93, iParam0, 2);
	func_479(94, iParam0, 3);
	func_479(95, iParam0, 0);
	func_479(96, iParam0, 1);
	func_479(97, iParam0, 2);
	func_479(98, iParam0, 3);
	if (iParam0 >= 3)
	{
		iVar0 = 0;
		while (iVar0 < 90)
		{
			func_479(iVar0, iParam0, 3);
			iVar0++;
		}
	}
}

void func_479(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 >= iParam2)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_2358.f_539.f_2241[(iParam0 / 32)], (iParam0 % 32)))
		{
			iVar0 = 0;
			while (iVar0 < Global_111638.f_20113)
			{
				Global_111638.f_20113[iVar0].f_42 = 1;
				iVar0++;
			}
			GAMEPLAY::SET_BIT(&(Global_111638.f_2358.f_539.f_2241[(iParam0 / 32)]), (iParam0 % 32));
			if (iParam2 == 0)
			{
				func_480(0, iParam0, "", 0, 0, 2);
			}
		}
	}
}

void func_480(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_485(iParam0) && func_405(iParam1, -1, 0, -1))
	{
		if (iParam5 == 8 && iParam4 == 2)
		{
			iParam3 = (iParam3 - 20);
		}
		if ((iParam5 == 15 && iParam3 > 21) && !func_484(iParam0))
		{
			iParam3 = (iParam3 - 21);
		}
		if (iParam0 == 2069146067)
		{
			if (iParam5 == 23)
			{
				if (iParam3 > 2)
				{
					iParam3 = (iParam3 - 26);
				}
			}
		}
		else if (iParam0 == 1692272545)
		{
			if (iParam5 == 18)
			{
				if (iParam3 > 2)
				{
					iParam3 = (iParam3 - 26);
				}
			}
		}
	}
	if (iParam1 == -1)
	{
		if (!func_485(iParam0))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam0 == 0)
				{
					iVar0 = 0;
					while (iVar0 < 306)
					{
						iVar1 = iVar0 * 3;
						iVar2 = func_483(GAMEPLAY::GET_HASH_KEY(sParam2));
						if (iVar2 != -1)
						{
							GAMEPLAY::SET_BIT(&(Global_2097152[func_191()].f_6174.f_2685[(iVar1 + (iVar2 / 32))]), (iVar2 % 32));
						}
						iVar0++;
					}
				}
				else
				{
					iVar3 = func_482(iParam0);
					if (iVar3 != -1)
					{
						iVar4 = iVar3 * 3;
						iVar5 = func_483(GAMEPLAY::GET_HASH_KEY(sParam2));
						if (iVar5 != -1)
						{
							GAMEPLAY::SET_BIT(&(Global_2097152[func_191()].f_6174.f_2685[(iVar4 + (iVar5 / 32))]), (iVar5 % 32));
						}
					}
					iVar6 = func_481(iParam0, iParam3, iParam4, iParam5);
					if (iVar6 > 0)
					{
						GAMEPLAY::SET_BIT(&(Global_2097152[func_191()].f_6174.f_3604[(iVar6 / 32)]), (iVar6 % 32));
					}
				}
			}
			return;
		}
		else if (func_405(iParam1, -1, 0, -1) || iParam1 == -1)
		{
			iVar7 = func_481(iParam0, iParam3, iParam4, iParam5);
			if (iVar7 > 0)
			{
				GAMEPLAY::SET_BIT(&(Global_2097152[func_191()].f_6174.f_3604[(iVar7 / 32)]), (iVar7 % 32));
			}
		}
	}
	else if (func_485(iParam0) && func_405(iParam1, -1, 0, -1))
	{
		iVar8 = func_481(iParam0, iParam3, iParam4, iParam5);
		if (iVar8 > 0)
		{
			GAMEPLAY::SET_BIT(&(Global_2097152[func_191()].f_6174.f_3604[(iVar8 / 32)]), (iVar8 % 32));
		}
	}
	if (iParam0 == 0)
	{
		iVar9 = 0;
		while (iVar9 < 306)
		{
			if (func_405(iParam1, -1, 0, -1))
			{
				iVar10 = (iVar9 * 4 + (iParam1 / 32));
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					GAMEPLAY::SET_BIT(&(Global_2097152[func_191()].f_6174.f_46[iVar10]), (iParam1 % 32));
				}
				else
				{
					GAMEPLAY::SET_BIT(&(Global_111638.f_668.f_82[iVar10]), (iParam1 % 32));
				}
			}
			iVar9++;
		}
	}
	else if (func_405(iParam1, -1, 0, -1))
	{
		iVar11 = func_482(iParam0);
		if (iVar11 != -1)
		{
			iVar12 = (iVar11 * 4 + (iParam1 / 32));
			iVar13 = (iParam1 % 32);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if ((((iParam0 == -2115793025 || iParam0 == 6774487) || iParam0 == 2035069708) && iParam1 == 1) || ((iParam1 == 72 || iParam1 == 66) && iParam0 == 2035069708))
				{
					iVar13 = (iVar13 - 1);
				}
				if (iParam0 == 1074745671 && (iParam1 == 21 || iParam1 == 72))
				{
					iVar13 = (iVar13 - 1);
				}
				if (iParam0 == 1502869817 && iParam1 == 85)
				{
					iVar13++;
				}
				if (iParam0 == -32878452 && iParam1 == 21)
				{
					iVar13 = (iVar13 - 1);
				}
				if (iVar13 >= 0)
				{
					GAMEPLAY::SET_BIT(&(Global_2097152[func_191()].f_6174.f_46[iVar12]), iVar13);
				}
			}
			else
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_668.f_82[iVar12]), iVar13);
			}
		}
	}
}

int func_481(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	if (iParam0 == -831834716)
	{
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 51;
	}
	if (iParam0 == 2068293287)
	{
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
	}
	else
	{
		iVar0 += 49;
	}
	if (iParam0 == -1790546981)
	{
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 73 && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 75 && iParam1 >= 2) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 268;
	}
	if (iParam0 == -1013450936)
	{
		if ((iParam3 == 82 && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 75 && iParam1 >= 2) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 73 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
	}
	else
	{
		iVar0 += 319;
	}
	if (iParam0 == -1361687965)
	{
		if ((iParam3 == 82 && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 75 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 315;
	}
	if (iParam0 == 1896491931)
	{
		if ((iParam3 == 6 && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 75 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 68 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if ((iParam3 == 69 && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 308;
	}
	if (iParam0 == -2040426790)
	{
		if ((iParam3 == 80 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 81 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 82 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if ((iParam3 == 75 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 73 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
	}
	else
	{
		iVar0 += 309;
	}
	if (iParam0 == 2006667053)
	{
		if ((iParam3 == 79 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 80 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 81 && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if ((iParam3 == 82 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 6 && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 75 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 326;
	}
	if (iParam0 == -2119578145)
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == -682211828)
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == 349605904)
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == 525509695)
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == -1150599089)
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == 523724515)
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == 970598228)
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == -1041692462)
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == 633712403)
	{
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (iParam3 == 65)
		{
			if (Global_262145.f_11570)
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
			else
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
		}
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
	}
	else
	{
		iVar0 += 114;
	}
	if (iParam0 == -295689028)
	{
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (iParam3 == 65)
		{
			if (Global_262145.f_11570)
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
			else
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
		}
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 221;
	}
	if (iParam0 == -602287871)
	{
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 93 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 94 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 16;
	}
	if (iParam0 == -2119578145)
	{
		if (iParam3 == 61 && iParam1 == 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == -1685021548)
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == 464687292)
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == 1531094468)
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == 1762279763)
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == 16646064)
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == -310465116)
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == 729783779)
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == -2039755226)
	{
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (iParam3 == 65)
		{
			if (Global_262145.f_11570)
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
			else
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
		}
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
	}
	else
	{
		iVar0 += 272;
	}
	if (iParam0 == -1126264336)
	{
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
	}
	else
	{
		iVar0 += 281;
	}
	if (iParam0 == 223258115)
	{
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 62 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 234;
	}
	if (iParam0 == 1119641113)
	{
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 62 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
	}
	else
	{
		iVar0 += 315;
	}
	if (iParam0 == -1797613329)
	{
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (((iParam3 == 91 && iParam2 == 3) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
	}
	else
	{
		iVar0 += 382;
	}
	if (iParam0 == -899509638)
	{
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
	}
	else
	{
		iVar0 += 290;
	}
	if (iParam0 == -2115793025)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == 6774487)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == -1404136503)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == -1009268949)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == -570033273)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == 1491277511)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == -618617997)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 28)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 29;
	}
	else
	{
		iVar0 += 29;
	}
	if (iParam0 == -440768424)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == 1026149675)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0 += 20;
	}
	if (iParam0 == -757735410)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
	}
	else
	{
		iVar0 += 59;
	}
	if (iParam0 == 1790834270)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == -1606187161)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == -1289178744)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == -1842748181)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == 822018448)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == 2035069708)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == -255678177)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == -1523428744)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == -609625092)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == 562680400)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == -32236122)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == 1897744184)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == -1210451983)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == 433954513)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == -1881846085)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == 884483972)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == -1924433270)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == 1356124575)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == 159274291)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == 1074745671)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 67 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if ((iParam3 == 68 && iParam2 == 0) && iParam1 == 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 116;
	}
	if (iParam0 == -2022483795)
	{
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if ((iParam3 == 68 && iParam2 == 0) && iParam1 == 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 200;
	}
	if (iParam0 == 196747873)
	{
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if ((iParam3 == 91 && iParam2 == 1) && iParam1 == 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 68 && iParam2 == 0) && iParam1 == 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 252;
	}
	if (iParam0 == -482719877)
	{
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 67 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
	}
	else
	{
		iVar0 += 122;
	}
	if (iParam0 == 1093792632)
	{
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 67 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 81 && iParam2 == 0) && iParam1 == 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
	}
	else
	{
		iVar0 += 105;
	}
	if (iParam0 == -1700874274)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == 1036591958)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == -975345305)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == 1565978651)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == -32878452)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == 1043222410)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == -42959138)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == -392675425)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == -1523619738)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == -1984275979)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == 1841130506)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == -1763555241)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == -998177792)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == 1561920505)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == -212993243)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == -2118308144)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == 1909189272)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 53;
	}
	if (iParam0 == 1617472902)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 65;
	}
	if (iParam0 == 1046206681)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 58;
	}
	if (iParam0 == -1267543371)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 27;
	}
	if (iParam0 == 931280609)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 114;
	}
	if (iParam0 == 1031562256)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 43;
	}
	if (iParam0 == -1259134696)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 56;
	}
	if (iParam0 == 1254014755)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == -988501280)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 62;
	}
	if (iParam0 == -986944621)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 19)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 20;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 115;
	}
	if (iParam0 == -376434238)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 12;
	}
	if (iParam0 == -1134706562)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
	}
	else
	{
		iVar0 += 47;
	}
	if (iParam0 == -2120700196)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
	}
	else
	{
		iVar0 += 26;
	}
	if (iParam0 == 1115909093)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == -214906006)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 77;
	}
	if (iParam0 == 321186144)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
	}
	else
	{
		iVar0 += 8;
	}
	if (iParam0 == 219613597)
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 31;
	}
	if (iParam0 == 1945374990)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 32;
	}
	if (iParam0 == 1653666139)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 35;
	}
	if (iParam0 == 500482303)
	{
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 55;
	}
	if (iParam0 == -420911112)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 43;
	}
	if (iParam0 == 2069146067)
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 39;
	}
	if (iParam0 == 2044532910)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 21)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 22;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 115;
	}
	if (iParam0 == -54332285)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 61;
	}
	if (iParam0 == -638562243)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == 1692272545)
	{
		if (((iParam3 == 18 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
	}
	else
	{
		iVar0 += 30;
	}
	if (iParam0 == -808457413)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == -1450650718)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == -1566607184)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 43;
	}
	if (iParam0 == 1591739866)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 48;
	}
	if (iParam0 == 1279262537)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 66;
	}
	if (iParam0 == -2096690334)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 39;
	}
	if (iParam0 == -507495760)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 86;
	}
	if (iParam0 == -1168952148)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 96;
	}
	if (iParam0 == -49115651)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 67;
	}
	if (iParam0 == 1456744817)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 45;
	}
	if (iParam0 == 1009171724)
	{
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 59 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 75;
	}
	if (iParam0 == -331467772)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
	}
	else
	{
		iVar0 += 77;
	}
	if (iParam0 == -688189648)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == -1146969353)
	{
		if (((iParam3 == 18 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 90;
	}
	if (iParam0 == -801550069)
	{
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 76;
	}
	if (iParam0 == 679453769)
	{
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 80;
	}
	if (iParam0 == 668439077)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 69;
	}
	if (iParam0 == 1721676810)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
	}
	else
	{
		iVar0 += 46;
	}
	if (iParam0 == -2061049099)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 59;
	}
	if (iParam0 == 444994115)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 79;
	}
	if (iParam0 == 540101442)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 63;
	}
	if (iParam0 == 628003514)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 123;
	}
	if (iParam0 == -27326686)
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 23;
	}
	if (iParam0 == 2139203625)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 70;
	}
	if (iParam0 == -1106120762)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 86;
	}
	if (iParam0 == -1375060657)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 69;
	}
	if (iParam0 == -1812949672)
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 40;
	}
	if (iParam0 == 1239571361)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 98;
	}
	if (iParam0 == -1478704292)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 63;
	}
	if (iParam0 == -1293924613)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == -1374500452)
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 14;
	}
	if (iParam0 == -286046740)
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 39;
	}
	if (iParam0 == -715746948)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 55;
	}
	if (iParam0 == 1542143200)
	{
		if (((iParam3 == 18 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 108;
	}
	if (iParam0 == -1924800695)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 50;
	}
	if (iParam0 == -1744505657)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
	}
	else
	{
		iVar0 += 69;
	}
	if (iParam0 == 2038858402)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 72;
	}
	if (iParam0 == 840387324)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 62;
	}
	if (iParam0 == -1694081890)
	{
		if (((iParam3 == 45 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 73;
	}
	if (iParam0 == -2042350822)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
	}
	else
	{
		iVar0 += 75;
	}
	if (iParam0 == 1537277726)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 129;
	}
	if (iParam0 == 1909700336)
	{
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 76;
	}
	if (iParam0 == 373261600)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
	}
	else
	{
		iVar0 += 66;
	}
	if (iParam0 == 1637620610)
	{
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 68;
	}
	if (iParam0 == -755532233)
	{
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 69;
	}
	if (iParam0 == -1890996696)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 68;
	}
	if (iParam0 == -579747861)
	{
		if (((iParam3 == 18 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 90;
	}
	if (iParam0 == 1742022738)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 59;
	}
	if (iParam0 == -1349095620)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 58;
	}
	if (iParam0 == 686471183)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == 310284501)
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 81;
	}
	if (iParam0 == 722226637)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0 += 87;
	}
	if (iParam0 == 1934384720)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 86;
	}
	if (iParam0 == -362150785)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 94;
	}
	if (iParam0 == 1854776567)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 65;
	}
	if (iParam0 == -664141241)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 37;
	}
	if (iParam0 == -941272559)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 70;
	}
	if (iParam0 == -882629065)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 61;
	}
	if (iParam0 == -1620126302)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 87;
	}
	if (iParam0 == -1829436850)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 53;
	}
	if (iParam0 == -324618589)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 32;
	}
	if (iParam0 == 1044193113)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 80;
	}
	if (iParam0 == 1862507111)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 78;
	}
	if (iParam0 == -682108547)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 38;
	}
	if (iParam0 == 1323778901)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 23)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 24;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 72;
	}
	if (iParam0 == 1830407356)
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == -1804415708)
	{
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
	}
	else
	{
		iVar0 += 57;
	}
	if (iParam0 == 916547552)
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 16;
	}
	if (iParam0 == -208911803)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 54;
	}
	if (iParam0 == -447711397)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == 1416466158)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == 83136452)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 94;
	}
	if (iParam0 == -1132721664)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 24)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 25;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 125;
	}
	if (iParam0 == 1118611807)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 93;
	}
	if (iParam0 == 987469656)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 100;
	}
	if (iParam0 == -834353991)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 24)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 25;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 115;
	}
	if (iParam0 == 1284356689)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 30)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 31;
	}
	else
	{
		iVar0 += 87;
	}
	if (iParam0 == 1456336509)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 83;
	}
	if (iParam0 == -1756021720)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 81;
	}
	if (iParam0 == 872704284)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 101;
	}
	if (iParam0 == 409049982)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 145;
	}
	if (iParam0 == 408825843)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == 340154634)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 47;
	}
	if (iParam0 == 301304410)
	{
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 23;
	}
	if (iParam0 == 394110044)
	{
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 5;
	}
	if (iParam0 == 740289177)
	{
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 30)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 31;
	}
	else
	{
		iVar0 += 60;
	}
	if (iParam0 == 2031587082)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 64;
	}
	if (iParam0 == 1693751655)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 51 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == 960812448)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 84;
	}
	if (iParam0 == -1960756985)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 39;
	}
	if (iParam0 == -1254331310)
	{
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 15;
	}
	if (iParam0 == -2122646867)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 22) && iParam1 <= 23)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 59 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 54 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 207;
	}
	if (iParam0 == 1717532765)
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 65 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 21)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 22;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 62 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
	}
	else
	{
		iVar0 += 204;
	}
	if (iParam0 == -2124201592)
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == 1871995513)
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == 2134119907)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 59 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 26)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 27;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
	}
	else
	{
		iVar0 += 114;
	}
	if (iParam0 == -2098954619)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 54 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 22) && iParam1 <= 27)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
	}
	else
	{
		iVar0 += 85;
	}
	if (iParam0 == 1802742206)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 43 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 24 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 7 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 91 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
	}
	else
	{
		iVar0 += 182;
	}
	if (iParam0 == 1107404867)
	{
		if (((iParam3 == 91 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 65 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 21)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 22;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 45 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 62 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 207;
	}
	if (iParam0 == -913589546)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 91 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 65 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 21)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 22;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 62 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
	}
	else
	{
		iVar0 += 207;
	}
	if (iParam0 == 67753863)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 43 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 7 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 84 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
		if (((iParam3 == 65 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 21)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 22;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 51 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 264;
	}
	if (iParam0 == -1810806490)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 43 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 75;
	}
	if (iParam0 == -631322662)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 19 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 145;
	}
	if (iParam0 == 75131841)
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == -838099166)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
	}
	else
	{
		iVar0 += 62;
	}
	if (iParam0 == -1728685474)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 54 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 60;
	}
	if (iParam0 == 1492612435)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 28;
	}
	if (iParam0 == 1181339704)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 57;
	}
	if (iParam0 == -1358197432)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 51;
	}
	if (iVar0 > 16000)
	{
	}
	return 0;
}

int func_482(int iParam0)
{
	switch (iParam0)
	{
		case -1216765807:
			return 0;
			break;
		
		case 1672195559:
			return 1;
			break;
		
		case -1809822327:
			return 2;
			break;
		
		case -1903012613:
			return 3;
			break;
		
		case -2140431165:
			return 4;
			break;
		
		case -808831384:
			return 5;
			break;
		
		case -1041692462:
		case 633712403:
			return 6;
			break;
		
		case -114291515:
			return 7;
			break;
		
		case -891462355:
			return 8;
			break;
		
		case 1126868326:
			return 9;
			break;
		
		case -16948145:
			return 10;
			break;
		
		case 2072156101:
			return 11;
			break;
		
		case 1739845664:
			return 12;
			break;
		
		case 850565707:
			return 13;
			break;
		
		case 117401876:
			return 14;
			break;
		
		case -2128233223:
			return 15;
			break;
		
		case -48031959:
			return 15;
			break;
		
		case -1269889662:
			return 15;
			break;
		
		case -344943009:
			return 16;
			break;
		
		case 1069929536:
			return 17;
			break;
		
		case -1435919434:
			return 18;
			break;
		
		case -1987130134:
			return 19;
			break;
		
		case -233098306:
			return 20;
			break;
		
		case 121658888:
			return 21;
			break;
		
		case -682211828:
		case -1013450936:
			return 22;
			break;
		
		case -304802106:
			return 23;
			break;
		
		case 736902334:
			return 24;
			break;
		
		case -1696146015:
			return 25;
			break;
		
		case -1346687836:
			return 26;
			break;
		
		case 1488164764:
			return 27;
			break;
		
		case -349601129:
			return 28;
			break;
		
		case 92612664:
			return 29;
			break;
		
		case 2072687711:
			return 30;
			break;
		
		case 11251904:
			return 31;
			break;
		
		case 2006918058:
			return 32;
			break;
		
		case -789894171:
			return 33;
			break;
		
		case -1311154784:
			return 34;
			break;
		
		case 330661258:
			return 35;
			break;
		
		case -1045541610:
			return 36;
			break;
		
		case 108773431:
		case 1011753235:
			return 37;
			break;
		
		case 2006142190:
			return 38;
			break;
		
		case -1130810103:
			return 39;
			break;
		
		case 80636076:
			return 40;
			break;
		
		case -1670998136:
			return 41;
			break;
		
		case 1177543287:
			return 42;
			break;
		
		case -394074634:
			return 43;
			break;
		
		case -566387422:
			return 44;
			break;
		
		case -685276541:
			return 45;
			break;
		
		case -1883002148:
			return 46;
			break;
		
		case -1241712818:
			return 47;
			break;
		
		case -1291952903:
			return 48;
			break;
		
		case -5153954:
			return 49;
			break;
		
		case -591610296:
			return 50;
			break;
		
		case 55628203:
			return 51;
			break;
		
		case -391594584:
			return 52;
			break;
		
		case -89291282:
			return 53;
			break;
		
		case -1995326987:
			return 54;
			break;
		
		case -1137532101:
			return 55;
			break;
		
		case 1909141499:
			return 56;
			break;
		
		case 499169875:
			return 57;
			break;
		
		case 2016857647:
			return 58;
			break;
		
		case -1800170043:
			return 59;
			break;
		
		case -1745203402:
			return 60;
			break;
		
		case -1775728740:
			return 61;
			break;
		
		case -1543762099:
			return 62;
			break;
		
		case 884422927:
			return 63;
			break;
		
		case 301427732:
			return 64;
			break;
		
		case 37348240:
			return 65;
			break;
		
		case 418536135:
			return 66;
			break;
		
		case -1289722222:
			return 67;
			break;
		
		case 886934177:
			return 68;
			break;
		
		case -1177863319:
			return 69;
			break;
		
		case -624529134:
			return 70;
			break;
		
		case 1051415893:
			return 71;
			break;
		
		case 544021352:
			return 72;
			break;
		
		case 1269098716:
			return 73;
			break;
		
		case 469291905:
			return 74;
			break;
		
		case -2124201592:
			return 75;
			break;
		
		case 914654722:
			return 76;
			break;
		
		case -310465116:
		case -1126264336:
			return 77;
			break;
		
		case -433375717:
			return 78;
			break;
		
		case -634879114:
			return 79;
			break;
		
		case 1032823388:
			return 80;
			break;
		
		case -1461482751:
			return 81;
			break;
		
		case 1348744438:
			return 82;
			break;
		
		case -511601230:
			return 83;
			break;
		
		case -808457413:
			return 84;
			break;
		
		case -909201658:
			return 85;
			break;
		
		case -377465520:
			return 86;
			break;
		
		case 1830407356:
			return 87;
			break;
		
		case -2095439403:
			return 88;
			break;
		
		case -1450650718:
			return 89;
			break;
		
		case 741586030:
			return 90;
			break;
		
		case -1883869285:
			return 91;
			break;
		
		case -1150599089:
		case -2040426790:
			return 92;
			break;
		
		case -1651067813:
			return 93;
			break;
		
		case 1645267888:
			return 94;
			break;
		
		case 1933662059:
			return 95;
			break;
		
		case -1934452204:
			return 96;
			break;
		
		case 1737773231:
			return 97;
			break;
		
		case -667151410:
			return 98;
			break;
		
		case -1207771834:
			return 99;
			break;
		
		case -2045594037:
			return 100;
			break;
		
		case -14495224:
			return 101;
			break;
		
		case 2136773105:
			return 102;
			break;
		
		case -893578776:
			return 103;
			break;
		
		case -227741703:
			return 104;
			break;
		
		case 1162065741:
			return 105;
			break;
		
		case -1685021548:
		case 223258115:
			return 106;
			break;
		
		case -599568815:
			return 107;
			break;
		
		case 788045382:
			return 108;
			break;
		
		case -1189015600:
			return 109;
			break;
		
		case 989381445:
			return 110;
			break;
		
		case -1255452397:
			return 111;
			break;
		
		case -746882698:
			return 112;
			break;
		
		case 1221512915:
			return 113;
			break;
		
		case 1349725314:
			return 114;
			break;
		
		case 873639469:
			return 115;
			break;
		
		case 1337041428:
			return 116;
			break;
		
		case -810318068:
			return 117;
			break;
		
		case 728614474:
			return 118;
			break;
		
		case -1477580979:
			return 119;
			break;
		
		case 1545842587:
			return 120;
			break;
		
		case -2098947590:
			return 121;
			break;
		
		case 1723137093:
			return 122;
			break;
		
		case -1961627517:
			return 123;
			break;
		
		case 970598228:
		case -295689028:
			return 124;
			break;
		
		case 1123216662:
			return 125;
			break;
		
		case 384071873:
			return 126;
			break;
		
		case -1894894188:
			return 127;
			break;
		
		case -1008861746:
			return 128;
			break;
		
		case -1297672541:
			return 129;
			break;
		
		case 464687292:
		case 1531094468:
		case 1762279763:
		case -2033222435:
		case -1797613329:
			return 133;
			break;
		
		case 338562499:
			return 134;
			break;
		
		case -140902153:
			return 135;
			break;
		
		case -825837129:
			return 136;
			break;
		
		case -1622444098:
			return 137;
			break;
		
		case 523724515:
		case 2006667053:
			return 138;
			break;
		
		case 1777363799:
			return 139;
			break;
		
		case 65402552:
			return 140;
			break;
		
		case -1122289213:
			return 141;
			break;
		
		case -1193103848:
			return 142;
			break;
		
		case 758895617:
			return 143;
			break;
		
		case -142942670:
			return 144;
			break;
		
		case 408192225:
			return 145;
			break;
		
		case -1403128555:
			return 146;
			break;
		
		case 486987393:
			return 147;
			break;
		
		case 767087018:
			return 148;
			break;
		
		case 448402357:
			return 149;
			break;
		
		case 699456151:
			return 150;
			break;
		
		case -2119578145:
		case -1790546981:
			return 151;
			break;
		
		case 349605904:
		case -1361687965:
			return 152;
			break;
		
		case 525509695:
		case 1896491931:
			return 153;
			break;
		
		case -831834716:
			return 154;
			break;
		
		case 2068293287:
			return 155;
			break;
		
		case -602287871:
			return 156;
			break;
		
		case -2039755226:
			return 157;
			break;
		
		case 729783779:
		case 833469436:
		case 1119641113:
			return 158;
			break;
		
		case -899509638:
			return 159;
			break;
		
		case 16646064:
			return 160;
			break;
		
		case 1274868363:
			return 161;
			break;
		
		case -305727417:
			return 162;
			break;
		
		case 1426219628:
			return 163;
			break;
		
		case -1295027632:
			return 164;
			break;
		
		case -1829802492:
			return 165;
			break;
		
		case 2123327359:
			return 166;
			break;
		
		case 1475773103:
			return 167;
			break;
		
		case -1757836725:
			return 168;
			break;
		
		case -2100640717:
			return 169;
			break;
		
		case -1845487887:
			return 170;
			break;
		
		case -1930048799:
			return 171;
			break;
		
		case 1203490606:
			return 172;
			break;
		
		case -432008408:
			return 173;
			break;
		
		case 234062309:
			return 174;
			break;
		
		case -1232836011:
			return 175;
			break;
	}
	switch (iParam0)
	{
		case 237764926:
			return 176;
			break;
		
		case -915704871:
			return 177;
			break;
		
		case 349315417:
			return 178;
			break;
		
		case -401643538:
			return 179;
			break;
		
		case -777172681:
			return 180;
			break;
		
		case 1887331236:
			return 181;
			break;
		
		case 1549126457:
			return 182;
			break;
		
		case 101905590:
			return 183;
			break;
		
		case -663299102:
			return 184;
			break;
		
		case 683047626:
			return 185;
			break;
		
		case 390201602:
			return 186;
			break;
		
		case 86520421:
			return 187;
			break;
		
		case 2067820283:
			return 188;
			break;
		
		case -2103821244:
			return 189;
			break;
		
		case -1071380347:
			return 190;
			break;
		
		case 741090084:
			return 191;
			break;
		
		case 482197771:
			return 192;
			break;
		
		case 819197656:
			return 193;
			break;
		
		case -2115793025:
			return 194;
			break;
		
		case 6774487:
			return 195;
			break;
		
		case -1404136503:
			return 196;
			break;
		
		case 822018448:
			return 197;
			break;
		
		case 2035069708:
			return 198;
			break;
		
		case -1606187161:
			return 199;
			break;
		
		case 1873600305:
			return 200;
			break;
		
		case -1009268949:
			return 202;
			break;
		
		case -570033273:
			return 203;
			break;
		
		case -405626514:
			return 204;
			break;
		
		case -674927303:
			return 205;
			break;
		
		case -255678177:
			return 206;
			break;
		
		case -440768424:
			return 207;
			break;
		
		case 1491277511:
			return 208;
			break;
		
		case -609625092:
			return 209;
			break;
		
		case -1523428744:
			return 210;
			break;
		
		case -1558399629:
			return 211;
			break;
		
		case 1026149675:
			return 212;
			break;
		
		case -618617997:
			return 213;
			break;
		
		case -1289178744:
			return 214;
			break;
		
		case -1842748181:
			return 215;
			break;
		
		case -312295511:
			return 216;
			break;
		
		case -1649536104:
			return 217;
			break;
		
		case 1180875963:
			return 218;
			break;
		
		case -1590337689:
			return 219;
			break;
		
		case 682434785:
			return 220;
			break;
		
		case -1912017790:
			return 221;
			break;
		
		case 941494461:
			return 222;
			break;
		
		case 989294410:
			return 223;
			break;
		
		case -1758137366:
			return 224;
			break;
		
		case 272929391:
			return 225;
			break;
		
		case -482719877:
			return 226;
			break;
		
		case 1093792632:
			return 227;
			break;
		
		case 1790834270:
			return 228;
			break;
		
		case -757735410:
			return 229;
			break;
		
		case 196747873:
			return 230;
			break;
		
		case -2022483795:
			return 232;
			break;
		
		case 1074745671:
			return 232;
			break;
		
		case 1034187331:
			return 233;
			break;
		
		case -2048333973:
			return 234;
			break;
		
		case 627535535:
			return 235;
			break;
		
		case 1886268224:
			return 236;
			break;
		
		case -239841468:
			return 237;
			break;
		
		case -1405937764:
			return 238;
			break;
		
		case 1234311532:
			return 239;
			break;
		
		case 719660200:
			return 240;
			break;
		
		case -982130927:
			return 241;
			break;
		
		case 223240013:
			return 242;
			break;
		
		case 1504306544:
			return 243;
			break;
		
		case 1939284556:
			return 244;
			break;
		
		case 917809321:
			return 245;
			break;
		
		case 433954513:
			return 246;
			break;
		
		case 159274291:
			return 247;
			break;
		
		case -1210451983:
			return 248;
			break;
		
		case 562680400:
			return 249;
			break;
		
		case 1897744184:
			return 250;
			break;
		
		case -32236122:
			return 251;
			break;
		
		case 884483972:
			return 252;
			break;
		
		case -1881846085:
			return 253;
			break;
		
		case -1924433270:
			return 254;
			break;
		
		case 1356124575:
			return 255;
			break;
		
		case 387748548:
			return 256;
			break;
		
		case 177270108:
			return 257;
			break;
		
		case 1502869817:
			return 258;
			break;
		
		case -1281684762:
			return 259;
			break;
		
		case -1763555241:
			return 260;
			break;
		
		case -749299473:
			return 261;
			break;
		
		case -975345305:
			return 262;
			break;
		
		case -1700874274:
			return 263;
			break;
		
		case -392675425:
			return 264;
			break;
		
		case 1043222410:
			return 265;
			break;
		
		case -1386191424:
			return 266;
			break;
		
		case 1565978651:
			return 267;
			break;
		
		case 1036591958:
			return 268;
			break;
		
		case -32878452:
			return 269;
			break;
		
		case -42959138:
			return 270;
			break;
		
		case -1984275979:
			return 271;
			break;
		
		case -1007528109:
			return 272;
			break;
		
		case -1523619738:
			return 273;
			break;
		
		case 1392481335:
			return 274;
			break;
		
		case -998177792:
			return 275;
			break;
		
		case -1242608589:
			return 276;
			break;
		
		case 1841130506:
			return 277;
			break;
		
		case 2049897956:
			return 278;
			break;
		
		case 1483171323:
			return 277;
			break;
		
		case 886810209:
			return 278;
			break;
		
		case -1693015116:
			return 279;
			break;
		
		case -692292317:
			return 280;
			break;
		
		case -1435527158:
			return 281;
			break;
		
		case 1181327175:
			return 282;
			break;
		
		case 1489874736:
			return 283;
			break;
		
		case -2118308144:
			return 284;
			break;
		
		case -212993243:
			return 285;
			break;
		
		case 447548909:
			return 286;
			break;
		
		case 1561920505:
			return 287;
			break;
		
		case -1848994066:
			return 288;
			break;
		
		case 1741861769:
			return 289;
			break;
		
		case 1104234922:
			return 290;
			break;
		
		case 1871995513:
			return 291;
			break;
		
		case 600450546:
			return 292;
			break;
		
		case -1532697517:
			return 293;
			break;
		
		case -410205223:
			return 294;
			break;
		
		case 15219735:
			return 295;
			break;
		
		case 661493923:
			return 296;
			break;
		
		case 838982985:
			return 297;
			break;
		
		case -391595372:
			return 298;
			break;
		
		case -121446169:
			return 299;
			break;
		
		case -313185164:
			return 300;
			break;
		
		case 867799010:
			return 301;
			break;
		
		case -1529242755:
			return 302;
			break;
		
		case 1352136073:
			return 303;
			break;
		
		case -2079788230:
			return 304;
			break;
		
		case 903794909:
			return 305;
			break;
	}
	return -1;
}

int func_483(int iParam0)
{
	switch (iParam0)
	{
		case -1392019810:
		case -288387677:
			return 0;
			break;
		
		case -1598824969:
		case 8630539:
			return 1;
			break;
		
		case 232975537:
		case -2028738140:
			return 2;
			break;
		
		case 462718996:
		case 1489308935:
			return 3;
			break;
		
		case -444556307:
		case -761265985:
			return 4;
			break;
		
		case -213731471:
		case -465001456:
			return 5;
			break;
		
		case -968041086:
			return 6;
			break;
		
		case -694977009:
		case 2001619481:
			return 7;
			break;
		
		case 1523877515:
		case 1076648918:
			return 8;
			break;
		
		case -1518694851:
			return 9;
			break;
		
		case 685937731:
			return 10;
			break;
		
		case 1107182854:
			return 11;
			break;
		
		case 1795528252:
			return 12;
			break;
		
		case 963431690:
			return 13;
			break;
		
		case 7683469:
			return 14;
			break;
		
		case -1485567420:
			return 15;
			break;
		
		case 575473684:
			return 16;
			break;
		
		case 830480310:
			return 17;
			break;
		
		case -835077886:
		case -2078754765:
			return 18;
			break;
		
		case 1888648625:
		case -1712790573:
			return 19;
			break;
		
		case 1708257079:
			return 20;
			break;
		
		case -1440188433:
			return 22;
			break;
		
		case -1813427343:
			return 22;
			break;
		
		case -1940603832:
			return 23;
			break;
		
		case -665245345:
			return 24;
			break;
		
		case 1049163197:
			return 25;
			break;
		
		case -177872008:
			return 26;
			break;
		
		case -366752524:
			return 27;
			break;
		
		case -952091823:
			return 28;
			break;
		
		case -994541731:
			return 29;
			break;
		
		case 2039769366:
			return 30;
			break;
		
		case 1197540528:
			return 31;
			break;
		
		case 321431759:
			return 32;
			break;
		
		case -453129094:
			return 33;
			break;
		
		case 1548219456:
			return 34;
			break;
		
		case 1207356318:
			return 35;
			break;
		
		case 2061273084:
			return 36;
			break;
		
		case 1076531893:
			return 37;
			break;
		
		case 1388066776:
			return 38;
			break;
	}
	return -1;
}

int func_484(int iParam0)
{
	switch (iParam0)
	{
		case -2098954619:
		case -2122646867:
			return 1;
		
		default:
	}
	return 0;
}

int func_485(int iParam0)
{
	switch (iParam0)
	{
		case 1909189272:
		case 931280609:
		case 1617472902:
		case -1267543371:
		case 1046206681:
		case -1259134696:
		case 1115909093:
		case 1031562256:
		case -376434238:
		case -986944621:
		case -1134706562:
		case -2120700196:
		case -214906006:
		case -988501280:
		case 1254014755:
		case -726768679:
		case 1945374990:
		case 219613597:
		case 1653666139:
		case 500482303:
		case -420911112:
		case 2069146067:
		case 2044532910:
		case -54332285:
		case 321186144:
		case -638562243:
		case -1988428699:
		case 1692272545:
		case -1566607184:
		case 1591739866:
		case 1279262537:
		case -2096690334:
		case -1146969353:
		case -507495760:
		case -1168952148:
		case -49115651:
		case 1456744817:
		case 1721676810:
		case 1009171724:
		case 668439077:
		case -801550069:
		case -688189648:
		case 444994115:
		case 628003514:
		case -331467772:
		case -27326686:
		case -2061049099:
		case 2139203625:
		case 1637620610:
		case -755532233:
		case -1812949672:
		case -1374500452:
		case -1924800695:
		case -1890996696:
		case -1694081890:
		case 373261600:
		case 1537277726:
		case 840387324:
		case 1542143200:
		case 679453769:
		case -1375060657:
		case -1106120762:
		case -1744505657:
		case 2038858402:
		case -2042350822:
		case 1742022738:
		case 1239571361:
		case -715746948:
		case -579747861:
		case 1909700336:
		case -1293924613:
		case -1478704292:
		case 540101442:
		case -286046740:
		case -1349095620:
		case 686471183:
		case 310284501:
		case 722226637:
		case 1934384720:
		case -362150785:
		case 1854776567:
		case -664141241:
		case -941272559:
		case -882629065:
		case -1620126302:
		case -1829436850:
		case -324618589:
		case 1044193113:
		case 1862507111:
		case -682108547:
		case 1323778901:
		case -1804415708:
		case 916547552:
		case -208911803:
		case -447711397:
		case 1416466158:
		case 1118611807:
		case 409049982:
		case 340154634:
		case -1132721664:
		case -834353991:
		case 1717532765:
		case -2122646867:
		case 67753863:
		case 1107404867:
		case -2098954619:
		case -913589546:
		case -631322662:
		case -838099166:
		case -1810806490:
		case -1358197432:
		case 1492612435:
		case 1181339704:
		case -1728685474:
		case 2134119907:
		case 83136452:
		case 987469656:
		case 1802742206:
		case 1284356689:
		case 1456336509:
		case -1756021720:
		case 872704284:
		case 394110044:
		case 408825843:
		case 301304410:
		case 1938952078:
		case -907477130:
		case -1987130134:
		case 1747439474:
		case 469291905:
		case -48031959:
		case 740289177:
		case -1960756985:
		case 960812448:
		case 1693751655:
		case 2031587082:
		case -1254331310:
			return 1;
			break;
	}
	return 0;
}

void func_486(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_253(iParam0, 0, 0))
		{
			if (iParam2 && Global_98796.f_18[iParam0])
			{
				if (func_492(iParam0) == 3 && !func_491(iParam0))
				{
					func_490(iParam0);
					func_489(iParam0, 0, 0);
					func_488(iParam0, 1, 0);
					func_487(iParam0);
				}
				else
				{
					func_489(iParam0, 1, 0);
					func_487(iParam0);
				}
			}
			else
			{
				func_489(iParam0, 0, 0);
				func_488(iParam0, 1, 0);
				func_487(iParam0);
			}
		}
		else
		{
			func_488(iParam0, 1, 0);
			func_487(iParam0);
		}
	}
	else if (func_253(iParam0, 0, 0))
	{
		func_488(iParam0, 0, 0);
		func_488(iParam0, 1, 0);
		func_487(iParam0);
	}
}

void func_487(int iParam0)
{
	Global_98796.f_181[iParam0] = 1;
	Global_98796.f_180 = 1;
}

void func_488(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_98796.f_1357[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_83() == 0)
		{
			uVar0 = func_51(func_254(iParam0), -1, 0);
			GAMEPLAY::CLEAR_BIT(&uVar0, iParam1);
			func_131(func_254(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

void func_489(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_98796.f_1357[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_83() == 0)
		{
			uVar0 = func_51(func_254(iParam0), -1, 0);
			GAMEPLAY::SET_BIT(&uVar0, iParam1);
			func_131(func_254(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

void func_490(int iParam0)
{
	if (Global_98796.f_18[iParam0])
	{
		func_489(iParam0, 10, 1);
		func_489(iParam0, 19, 1);
	}
}

bool func_491(int iParam0)
{
	return func_253(iParam0, 5, 1);
}

int func_492(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
	}
	return 6;
}

void func_493()
{
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			bVar0 = false;
			unk_0xEBD5716567F1D347("car");
			unk_0xB5B7B792811308A7("appdata");
			iVar1 = func_27("playerNameMP");
			if ((iVar1 != 0 && iVar1 != GAMEPLAY::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()))) || iLocal_79)
			{
				func_198("playerNameMP", GAMEPLAY::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
				bVar0 = true;
				func_14(2921, 1, -1, 1);
				func_14(2922, 1, -1, 1);
				func_14(2923, 1, -1, 1);
				func_14(2924, 1, -1, 1);
				func_14(2925, 1, -1, 1);
				iLocal_79 = 0;
			}
			unk_0x98C61465A1232E0E();
			if (bVar0)
			{
				iVar2 = 0;
				while (iVar2 < 5)
				{
					StringCopy(&cVar4, "multiplayer", 16);
					StringIntConCat(&cVar4, iVar2, 16);
					unk_0xB5B7B792811308A7(&cVar4);
					iVar3 = 0;
					while (iVar3 < 10)
					{
						StringCopy(&cVar4, "vehicle", 16);
						StringIntConCat(&cVar4, iVar3, 16);
						unk_0xB5B7B792811308A7(&cVar4);
						func_198("carUnlocked", 0);
						unk_0x98C61465A1232E0E();
						iVar3++;
					}
					unk_0x98C61465A1232E0E();
					iVar2++;
				}
			}
			unk_0xFE0C6A4F9007749F();
		}
		else
		{
			bVar8 = false;
			unk_0xEBD5716567F1D347("car");
			unk_0xB5B7B792811308A7("appdata");
			iVar9 = func_27("playerNameSP");
			if ((iVar9 != 0 && iVar9 != GAMEPLAY::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()))) || iLocal_78)
			{
				func_198("playerNameSP", GAMEPLAY::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
				iLocal_100 = 1;
				iLocal_78 = 0;
				bVar8 = true;
			}
			unk_0x98C61465A1232E0E();
			if (bVar8)
			{
				iVar10 = 0;
				while (iVar10 < 5)
				{
					StringCopy(&cVar12, "multiplayer", 16);
					StringIntConCat(&cVar12, iVar10, 16);
					unk_0xB5B7B792811308A7(&cVar12);
					iVar11 = 0;
					while (iVar11 < 10)
					{
						StringCopy(&cVar12, "vehicle", 16);
						StringIntConCat(&cVar12, iVar11, 16);
						unk_0xB5B7B792811308A7(&cVar12);
						func_198("carUnlocked", 0);
						unk_0x98C61465A1232E0E();
						iVar11++;
					}
					unk_0x98C61465A1232E0E();
					iVar10++;
				}
			}
			unk_0xFE0C6A4F9007749F();
		}
	}
}

void func_494()
{
	iVar0 = func_191();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!Global_2097152[iVar0].f_6086.f_53)
		{
			unk_0xEBD5716567F1D347("car");
			StringCopy(&cVar1, "multiplayer", 16);
			StringIntConCat(&cVar1, func_15(), 16);
			unk_0xB5B7B792811308A7(&cVar1);
			iVar9 = 0;
			while (iVar9 < 10)
			{
				StringCopy(&cVar1, "vehicle", 16);
				StringIntConCat(&cVar1, iVar9, 16);
				unk_0xB5B7B792811308A7(&cVar1);
				func_198("carUnlocked", 0);
				unk_0x98C61465A1232E0E();
				iVar9++;
			}
			unk_0x98C61465A1232E0E();
			unk_0xB5B7B792811308A7("appdata");
			StringCopy(&Var10, "orderCount_mp", 24);
			StringIntConCat(&Var10, func_15(), 24);
			func_198(&Var10, 0);
			unk_0x98C61465A1232E0E();
			iLocal_101 = 1;
			SYSTEM::SETTIMERA(0);
			unk_0xFE0C6A4F9007749F();
			Global_2097152[iVar0].f_6086.f_53 = 1;
		}
		if (iLocal_76 >= 0 && GAMEPLAY::IS_BIT_SET(Global_1323615[iLocal_76].f_102, 26))
		{
			iVar16 = 0;
			while (iVar16 < 10)
			{
				if ((Global_2097152[iVar0].f_6086.f_63[iVar16] - 1) == iLocal_76)
				{
					unk_0xEBD5716567F1D347("car");
					StringCopy(&cVar1, "multiplayer", 16);
					StringIntConCat(&cVar1, func_15(), 16);
					unk_0xB5B7B792811308A7(&cVar1);
					StringCopy(&cVar1, "vehicle", 16);
					StringIntConCat(&cVar1, iVar16, 16);
					unk_0xB5B7B792811308A7(&cVar1);
					func_198("carUnlocked", 0);
					unk_0x98C61465A1232E0E();
					iLocal_101 = 1;
					SYSTEM::SETTIMERA(0);
					unk_0x98C61465A1232E0E();
					unk_0xFE0C6A4F9007749F();
					GAMEPLAY::CLEAR_BIT(&(Global_1323615[iLocal_76].f_102), 25);
					GAMEPLAY::CLEAR_BIT(&(Global_1323615[iLocal_76].f_102), 26);
				}
				iVar16++;
			}
		}
		switch (iLocal_82)
		{
			case 0:
				if (Global_2097152[iVar0].f_6086.f_54)
				{
					unk_0xC39C475113F86C68("car");
					bLocal_81 = true;
					iLocal_82++;
				}
				else
				{
					bLocal_81 = false;
				}
				break;
			
			case 1:
				if (unk_0x4D210DB36344AA6A() != 1)
				{
					if (unk_0x4D210DB36344AA6A() != 3)
					{
						Global_2097152[iVar0].f_6086.f_54 = 0;
					}
					unk_0xEBD5716567F1D347("car");
					StringCopy(&cVar5, "mp", 16);
					StringIntConCat(&cVar5, func_15(), 16);
					StringConCat(&cVar5, "_order", 16);
					unk_0xB5B7B792811308A7(&cVar5);
					unk_0x07A1A3A04807E104();
					unk_0x98C61465A1232E0E();
					unk_0xB5B7B792811308A7("appdata");
					StringCopy(&Var17, "orderCount_mp", 24);
					StringIntConCat(&Var17, func_15(), 24);
					func_198(&Var17, Global_2097152[iVar0].f_6086.f_61);
					unk_0x98C61465A1232E0E();
					unk_0xFE0C6A4F9007749F();
					iLocal_82 = 0;
				}
				break;
		}
	}
	else
	{
		if (!Global_111638.f_20113.f_260)
		{
			unk_0xEBD5716567F1D347("car");
			unk_0xB5B7B792811308A7("singleplayer0");
			func_198("carUnlocked", 0);
			unk_0x98C61465A1232E0E();
			unk_0xB5B7B792811308A7("singleplayer2");
			func_198("carUnlocked", 0);
			unk_0x98C61465A1232E0E();
			unk_0xB5B7B792811308A7("appdata");
			func_198("orderCount_sp0", 0);
			func_198("orderCount_sp1", 0);
			func_198("orderCount_sp2", 0);
			unk_0x98C61465A1232E0E();
			iLocal_101 = 1;
			SYSTEM::SETTIMERA(0);
			unk_0xFE0C6A4F9007749F();
			unk_0xEBD5716567F1D347("dog");
			unk_0xB5B7B792811308A7("saveData");
			func_198("chopSafeHouse", 0);
			unk_0x9B1B988780CBC954();
			unk_0x98C61465A1232E0E();
			unk_0xFE0C6A4F9007749F();
			Global_111638.f_20113.f_273[0] = 0;
			Global_111638.f_20113.f_273[1] = 0;
			Global_111638.f_20113.f_273[2] = 0;
			Global_111638.f_20113.f_260 = 1;
		}
		iVar23 = 0;
		while (iVar23 < 3)
		{
			if (Global_111638.f_20113[iVar23].f_41)
			{
				unk_0xEBD5716567F1D347("car");
				StringCopy(&cVar1, "singleplayer", 16);
				StringIntConCat(&cVar1, iVar23, 16);
				unk_0xB5B7B792811308A7(&cVar1);
				func_198("carUnlocked", 0);
				iLocal_101 = 1;
				SYSTEM::SETTIMERA(0);
				unk_0x98C61465A1232E0E();
				unk_0xFE0C6A4F9007749F();
				Global_111638.f_20113.f_273[iVar23] = 0;
				Global_111638.f_20113[iVar23].f_41 = 0;
				Global_111638.f_20113[iVar23].f_40 = 0;
				Global_111638.f_20113[iVar23] = 0;
				Global_111638.f_20113.f_273[iVar23] = 0;
			}
			iVar23++;
		}
		switch (iLocal_82)
		{
			case 0:
				if (Global_111638.f_20113.f_265)
				{
					unk_0xC39C475113F86C68("car");
					bLocal_81 = true;
					iLocal_82++;
				}
				else
				{
					bLocal_81 = false;
				}
				break;
			
			case 1:
				if (unk_0x4D210DB36344AA6A() != 1)
				{
					if (unk_0x4D210DB36344AA6A() != 3)
					{
						Global_111638.f_20113.f_265 = 0;
					}
					unk_0xEBD5716567F1D347("car");
					StringCopy(&cVar5, "sp", 16);
					StringIntConCat(&cVar5, Global_111638.f_20113.f_266, 16);
					StringConCat(&cVar5, "_order", 16);
					unk_0xB5B7B792811308A7(&cVar5);
					unk_0x07A1A3A04807E104();
					unk_0x98C61465A1232E0E();
					unk_0xB5B7B792811308A7("appdata");
					func_198("orderCount_sp0", Global_111638.f_20113.f_285[0]);
					func_198("orderCount_sp1", Global_111638.f_20113.f_285[1]);
					func_198("orderCount_sp2", Global_111638.f_20113.f_285[2]);
					unk_0x98C61465A1232E0E();
					unk_0xFE0C6A4F9007749F();
					iLocal_82 = 0;
				}
				break;
			}
	}
}

int func_495(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_160(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

void func_496()
{
	if (!unk_0x17B07D4257435ADF() || !unk_0x0C44E4033D9782F0("car"))
	{
		iLocal_80 = 0;
		return;
	}
	else
	{
		if (!iLocal_80)
		{
			iLocal_78 = 1;
			iLocal_79 = 1;
			Global_108337 = 1;
		}
		iLocal_80 = 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_83() != 0)
		{
			return;
		}
		if (!func_161())
		{
			return;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_83() == 0)
		{
			iLocal_72 = 1;
		}
		if (!Global_2097152[func_191()].f_6086.f_87)
		{
			iVar0 = 9;
			while (iVar0 >= 0)
			{
				Global_2097152[func_191()].f_6086.f_63[iVar0] = iVar0 + 1;
				Global_2097152[func_191()].f_6086.f_74[iVar0] = iVar0 + 1;
				Global_2097152[func_191()].f_6086.f_41[iVar0] = 0;
				iVar0 = (iVar0 + -1);
			}
			Global_2097152[func_191()].f_6086.f_85 = -1;
			Global_2097152[func_191()].f_6086.f_87 = 1;
		}
	}
	else
	{
		iLocal_72 = 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_2097152[func_191()].f_6086.f_36)
		{
			iLocal_323 = 1;
		}
		if (func_102(187, -1))
		{
			iLocal_323 = 1;
			func_56(187, 0, -1, 1);
		}
		if (!Global_262145.f_10123 && !Global_108339)
		{
			iLocal_323 = 1;
		}
	}
	else if ((Global_111638.f_20113.f_130[0].f_36 || Global_111638.f_20113.f_130[1].f_36) || Global_111638.f_20113.f_130[2].f_36)
	{
		iLocal_323 = 1;
	}
	iLocal_82 = 0;
	iLocal_74 = 0;
	iLocal_75 = 0;
	iLocal_76 = 0;
	iLocal_127 = 0;
	bLocal_84 = false;
	iLocal_85 = 0;
	if (!iLocal_128 || Global_108171)
	{
		Global_111638.f_20113.f_264 = 1;
		iLocal_100 = 0;
		unk_0xEBD5716567F1D347("car");
		unk_0xB5B7B792811308A7("appdata");
		iVar1 = func_27("appUID");
		if (iVar1 != Global_111638.f_20113.f_272)
		{
			iLocal_100 = 1;
		}
		unk_0x98C61465A1232E0E();
		unk_0xFE0C6A4F9007749F();
		iVar2 = 0;
		while (iVar2 < Global_111638.f_20113.f_130)
		{
			iLocal_106[iVar2] = 0;
			iLocal_110[iVar2] = 0;
			iLocal_114[iVar2] = 0;
			iVar2++;
		}
		iLocal_118 = 0;
	}
	Global_108171 = 0;
	iLocal_128 = 1;
	iLocal_71 = 1;
}

void func_497()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_108340)
	{
		NETWORK::NETWORK_BAIL(49, 0, 0);
	}
}

void func_498()
{
	func_504();
	switch (iLocal_66)
	{
		case 0:
			func_503();
			break;
		
		case 1:
			func_501();
			break;
		
		case 2:
			func_499();
			break;
	}
}

void func_499()
{
	func_500(0);
}

void func_500(int iParam0)
{
	iLocal_66 = iParam0;
}

void func_501()
{
	switch (iLocal_67)
	{
		case 0:
			iLocal_69 = iLocal_68;
			SCRIPT::REQUEST_SCRIPT("tuneables_processing");
			if (SCRIPT::HAS_SCRIPT_LOADED("tuneables_processing") && GAMEPLAY::_GET_FREE_STACK_SLOTS_COUNT(1424) > 0)
			{
				Var0.x = func_502(iLocal_68);
				Var0.y = func_502(iLocal_70);
				Var0.z = iLocal_68 == 1;
				SYSTEM::START_NEW_SCRIPT_WITH_ARGS("tuneables_processing", &Var0, 3, 1424);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("tuneables_processing");
				iLocal_67++;
			}
			break;
		
		case 1:
			if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(966198953) == 0)
			{
				func_500(2);
				iLocal_67 = 0;
			}
			break;
	}
}

int func_502(int iParam0)
{
	if (iParam0 >= 22)
	{
		return (28 + (iParam0 - 22));
	}
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 6;
		
		case 2:
			return 7;
		
		case 3:
			return 15;
		
		case 4:
			return 16;
		
		case 5:
			return 9;
		
		case 6:
			return 10;
		
		case 7:
			return 11;
		
		case 8:
			return 12;
		
		case 9:
			return 13;
		
		case 10:
			return 14;
		
		case 11:
			return 17;
		
		case 12:
			return 18;
		
		case 13:
			return 19;
		
		case 18:
			return 26;
		
		case 14:
			return 20;
		
		case 15:
			return 21;
		
		case 16:
			return 22;
		
		case 19:
			return 23;
		
		case 17:
			return 24;
		
		case 20:
			return 25;
		
		case 21:
			return 27;
		
		default:
	}
	return 0;
}

void func_503()
{
	if (iLocal_68 != iLocal_69 || Global_262144)
	{
		Global_262144 = 0;
		func_500(1);
	}
}

void func_504()
{
	if (((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_112()) && !func_538()) && func_83() == -1)
	{
		iLocal_68 = 0;
		iLocal_70 = 21;
	}
	else
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_537())
		{
			return;
		}
		iLocal_68 = 1;
		iLocal_70 = 21;
		iVar0 = func_536(PLAYER::PLAYER_ID());
		if (iVar0 != -1)
		{
			iVar1 = -1;
			if (func_99(PLAYER::PLAYER_ID()))
			{
				iVar1 = NETWORK::_GET_TUNABLES_CONTENT_MODIFIER_ID(GAMEPLAY::GET_HASH_KEY(&(Global_959568.f_42)));
			}
			if (iVar1 == -1)
			{
				iVar1 = NETWORK::_GET_TUNABLES_CONTENT_MODIFIER_ID(GAMEPLAY::GET_HASH_KEY(&(Global_4456448.f_195277)));
			}
			iLocal_70 = func_535(iVar1);
			if (iVar0 == 0)
			{
				if (func_395(PLAYER::PLAYER_ID(), 0, 0) && func_513(Global_4456448.f_194990, Global_4456448.f_232883))
				{
					iLocal_68 = 20;
				}
				else if (func_512(PLAYER::PLAYER_ID()))
				{
					iLocal_68 = 12;
				}
				else if (func_511(PLAYER::PLAYER_ID()))
				{
					iLocal_68 = 13;
				}
				else if (func_510(PLAYER::PLAYER_ID()))
				{
					iLocal_68 = 14;
				}
				else if (func_509(PLAYER::PLAYER_ID()))
				{
					iLocal_68 = 16;
				}
				else if (func_508(PLAYER::PLAYER_ID()))
				{
					iLocal_68 = 15;
				}
				else if (func_507(PLAYER::PLAYER_ID()))
				{
					iLocal_68 = 19;
				}
				else if (func_506(PLAYER::PLAYER_ID()) || func_505(PLAYER::PLAYER_ID()))
				{
					iLocal_68 = 18;
				}
				else
				{
					iLocal_68 = 3;
				}
			}
			if (iVar0 == 3)
			{
				iLocal_68 = 4;
			}
			if (iVar0 == 1 || Global_1574401)
			{
				iLocal_68 = 2;
			}
			if (iVar0 == 2)
			{
				iLocal_68 = 5;
				if (Global_4456448.f_75705 == 0 || Global_4456448.f_75705 == 1)
				{
					iLocal_68 = 5;
				}
				if (((Global_4456448.f_75705 == 6 || Global_4456448.f_75705 == 7) || Global_4456448.f_75705 == 18) || Global_4456448.f_75705 == 19)
				{
					iLocal_68 = 10;
				}
				if (Global_4456448.f_75705 == 2 || Global_4456448.f_75705 == 3)
				{
					iLocal_68 = 9;
				}
				if (Global_4456448.f_75705 == 4 || Global_4456448.f_75705 == 5)
				{
					iLocal_68 = 8;
				}
				if ((Global_4456448.f_75705 == 8 || Global_4456448.f_75705 == 9) || Global_1574427)
				{
					iLocal_68 = 11;
				}
				if (Global_4456448.f_75705 == 12 || Global_4456448.f_75705 == 13)
				{
					if (Global_4456448.f_75708 == 8)
					{
						iLocal_68 = 6;
					}
					else
					{
						iLocal_68 = 7;
					}
				}
			}
			if (iVar0 == 8)
			{
				iLocal_68 = 11;
			}
		}
		if (func_4())
		{
			iLocal_68 = 1;
			iLocal_70 = 21;
		}
		if ((((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_112()) && !func_538()) && !func_83() == -1) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (Global_2458952 > 10000)
			{
				TIME::GET_POSIX_TIME(&Var2, &(Var2.f_1), &(Var2.f_2), &(Var2.f_3), &(Var2.f_4), &(Var2.f_5));
				if ((Var2 > Global_2458945 || Var2.f_1 > Global_2458945.f_1) || Var2.f_2 > Global_2458945.f_2)
				{
					TIME::GET_POSIX_TIME(&Global_2458945, &(Global_2458945.f_1), &(Global_2458945.f_2), &(Global_2458945.f_3), &(Global_2458945.f_4), &(Global_2458945.f_5));
					func_500(1);
					Global_2458952 = 0;
				}
				Global_2458952 = 0;
			}
			else
			{
				Global_2458952++;
			}
		}
	}
}

bool func_505(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

bool func_506(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

bool func_507(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 8;
}

bool func_508(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 3;
}

bool func_509(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 4;
}

bool func_510(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 1;
}

bool func_511(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 5;
}

bool func_512(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 6;
}

int func_513(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		return 1;
	}
	if ((((((((((((((((((((func_534(iParam0) || func_533(iParam0)) || func_532(iParam0)) || func_531(iParam0, 1)) || func_530(iParam0)) || func_529(iParam0)) || func_528(iParam0)) || func_527(iParam0)) || func_526(iParam0)) || func_525(iParam0)) || func_524(iParam0)) || func_523(iParam0)) || func_522(iParam0)) || func_521(iParam0)) || func_520(iParam0)) || func_519(iParam0)) || func_518(iParam0)) || func_517(iParam0)) || func_516(iParam0)) || func_515(iParam1)) || func_514(iParam1))
	{
		return 1;
	}
	return 0;
}

bool func_514(int iParam0)
{
	return iParam0 == 65;
}

bool func_515(int iParam0)
{
	return iParam0 == 57;
}

int func_516(int iParam0)
{
	if (Global_4456448.f_232883 == 30)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9221[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_517(int iParam0)
{
	if (Global_4456448.f_232883 == 35)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9254[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_518(int iParam0)
{
	if (Global_4456448.f_232883 == 31)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9243[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_519(int iParam0)
{
	if (Global_4456448.f_232883 == 34)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9232[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_520(int iParam0)
{
	if (Global_4456448.f_232883 == 29)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (iParam0 == Global_262145.f_9208[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_521(int iParam0)
{
	if (Global_4456448.f_232883 == 27)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9197[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_522(int iParam0)
{
	if (Global_4456448.f_232883 == 28)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9186[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_523(int iParam0)
{
	if (Global_4456448.f_232883 == 46)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9175[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_524(int iParam0)
{
	if (Global_4456448.f_232883 == 32)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9078[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_525(int iParam0)
{
	if (Global_4456448.f_232883 == 33)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9100[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_526(int iParam0)
{
	if (Global_4456448.f_232883 == 86)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9089[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_527(int iParam0)
{
	if (Global_4456448.f_232883 == 84)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9067[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_528(int iParam0)
{
	if (Global_4456448.f_232883 == 25)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9056[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_529(int iParam0)
{
	if (Global_4456448.f_232883 == 85)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9045[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_530(int iParam0)
{
	if (Global_4456448.f_232883 == 21)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9011[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_531(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (Global_4456448.f_232883 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_532(int iParam0)
{
	if (Global_4456448.f_232883 == 18)
	{
		return 1;
	}
	if ((((iParam0 == Global_262145.f_9006 || iParam0 == Global_262145.f_9007) || iParam0 == Global_262145.f_9008) || iParam0 == Global_262145.f_9009) || iParam0 == Global_262145.f_9010)
	{
		return 1;
	}
	return 0;
}

int func_533(int iParam0)
{
	if (Global_4456448.f_232883 == 20)
	{
		return 1;
	}
	if ((((iParam0 == Global_262145.f_9001 || iParam0 == Global_262145.f_9002) || iParam0 == Global_262145.f_9003) || iParam0 == Global_262145.f_9004) || iParam0 == Global_262145.f_9005)
	{
		return 1;
	}
	return 0;
}

int func_534(int iParam0)
{
	if (Global_4456448.f_232883 == 19)
	{
		return 1;
	}
	if ((((((iParam0 == Global_262145.f_8994 || iParam0 == Global_262145.f_8995) || iParam0 == Global_262145.f_8996) || iParam0 == Global_262145.f_8997) || iParam0 == Global_262145.f_8998) || iParam0 == Global_262145.f_8999) || iParam0 == Global_262145.f_9000)
	{
		return 1;
	}
	return 0;
}

int func_535(int iParam0)
{
	if (iParam0 >= 0)
	{
		return (22 + iParam0);
	}
	return 21;
}

var func_536(int iParam0)
{
	return Global_1590535[iParam0];
}

bool func_537()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632.f_39.f_4, 0);
}

bool func_538()
{
	return Global_2450632.f_592;
}

void func_539()
{
	if (iLocal_71 != 0 && iLocal_72 != 2)
	{
		if (iLocal_72 == 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_72 = 2;
			}
		}
		else if (iLocal_72 == 1)
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_112()) && !func_540())
			{
				iLocal_72 = 2;
			}
			if (func_83() != 0)
			{
				iLocal_72 = 2;
			}
		}
		if (!unk_0x17B07D4257435ADF())
		{
			iLocal_72 = 2;
		}
		if (Global_108171)
		{
			iLocal_72 = 2;
		}
		if (iLocal_72 == 2)
		{
			iLocal_71 = 0;
		}
	}
}

int func_540()
{
	if ((((func_109() || func_108()) || func_112()) || func_542()) || func_541())
	{
		return 1;
	}
	return 0;
}

var func_541()
{
	return Global_2450632.f_742;
}

var func_542()
{
	return Global_2450632.f_593;
}

int func_543()
{
	if (Global_1312812 == 68)
	{
		return 1;
	}
	return 0;
}

