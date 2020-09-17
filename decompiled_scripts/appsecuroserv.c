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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = -1;
	iLocal_47 = -1;
	iLocal_49 = -1;
	fLocal_210 = ((0.05f + 0.275f) - 0.01f);
	iLocal_243 = 1;
	iLocal_613 = 1;
	iLocal_616 = -1;
	iLocal_617 = -1;
	iLocal_618 = -1;
	iLocal_787 = -1;
	iLocal_789 = -1;
	fLocal_807 = 0f;
	fLocal_808 = 0f;
	fLocal_809 = 0f;
	fLocal_810 = 0f;
	iLocal_990 = 23;
	iLocal_991 = -1;
	iLocal_992 = -1;
	iLocal_993 = -1;
	iLocal_614 = 0;
	if (func_756(PLAYER::PLAYER_ID()) || (func_755() && Global_1694834.f_1 == 0))
	{
		MISC::SET_BIT(&iLocal_614, 13);
	}
	if (MISC::IS_BIT_SET(iLocal_614, 13))
	{
		uLocal_608 = unk_0x67D02A194A2FC2BD("warehouse");
	}
	else
	{
		uLocal_608 = unk_0x67D02A194A2FC2BD("securoserv");
		Global_73829 = 1;
		Global_73830 = 0;
	}
	func_752(1);
	func_750(1);
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_608))
	{
		SYSTEM::WAIT(0);
	}
	if (MISC::IS_BIT_SET(iLocal_614, 13))
	{
		iLocal_790 = func_748(PLAYER::PLAYER_ID());
		if (func_755())
		{
			iLocal_790 = Global_1694834;
		}
		func_736(PLAYER::PLAYER_ID(), 0, 32768, 0);
		func_673(1);
	}
	else if (func_672(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_28) || func_755())
	{
		if (!MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 1))
		{
			func_673(1);
		}
		else
		{
			func_673(0);
		}
	}
	if (func_755() && Global_1694834.f_1)
	{
		if (Global_1694834.f_2)
		{
			func_671(1);
		}
		else
		{
			func_671(4);
		}
	}
	AUDIO::START_AUDIO_SCENE("GTAO_Computer_Screen_Active_Scene");
	MISC::SET_BIT(&iLocal_614, 22);
	func_670(1);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		Local_811 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	func_669();
	if (!MISC::IS_BIT_SET(iLocal_614, 13))
	{
		func_668();
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && func_667(PLAYER::PLAYER_ID()))
		{
			func_657(PLAYER::PLAYER_ID(), PLAYER::PLAYER_ID());
		}
	}
	if (func_656())
	{
		MISC::SET_BIT(&iLocal_614, 24);
	}
	if (func_655())
	{
		MISC::SET_BIT(&iLocal_614, 25);
	}
	func_653();
	func_652(0);
	HUD::THEFEED_PAUSE();
	if (MISC::IS_PC_VERSION())
	{
		func_651(1, 1, 1, 1);
	}
	func_650();
	func_645();
	while (func_644())
	{
		if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 14) || func_643(PLAYER::PLAYER_PED_ID(), Local_811, 1) > 5f)
		{
			func_636(0);
		}
		else if (func_635() || PAD::IS_CONTROL_JUST_RELEASED(2, 199))
		{
			func_636(0);
		}
		else if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
		{
			func_636(1);
		}
		if (MISC::IS_BIT_SET(iLocal_614, 21))
		{
			if (!func_634(&uLocal_988))
			{
				func_633(&uLocal_988, 0, 0);
			}
			else if (func_632(&uLocal_988, 4000, 0))
			{
				func_631(&uLocal_988);
				MISC::CLEAR_BIT(&iLocal_614, 21);
			}
		}
		if (!MISC::IS_BIT_SET(iLocal_614, 26))
		{
			if (Global_73992)
			{
				Global_73990 = 1;
				func_629();
			}
			else
			{
				func_623();
			}
			func_622();
			func_620();
			if (!MISC::IS_BIT_SET(iLocal_614, 13))
			{
				if (!MISC::IS_BIT_SET(iLocal_614, 24))
				{
					func_618();
					func_595();
				}
				else if (!MISC::IS_BIT_SET(iLocal_614, 25))
				{
					func_586();
				}
			}
			else if (!func_585(iLocal_790))
			{
				func_578();
			}
			if (MISC::IS_BIT_SET(iLocal_614, 13))
			{
				func_577();
				func_575();
			}
			else
			{
				func_570();
				func_10();
			}
			if (!MISC::IS_BIT_SET(iLocal_614, 13))
			{
				func_3();
			}
		}
		else
		{
			if (iLocal_787 == -1 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				func_1(7550, 1, -1, 1);
				func_636(1);
			}
			func_595();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(5);
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_2();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 26810)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30227)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_2()
{
	return Global_1312745;
}

void func_3()
{
	iVar0 = iLocal_792;
	if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && func_667(iVar0)) && !func_7(iVar0))
	{
		if (!func_6())
		{
			func_657(iVar0, iLocal_792);
		}
	}
	else if (func_6())
	{
		func_4();
	}
	iLocal_792++;
	if (iLocal_792 == 32)
	{
		iLocal_792 = 0;
	}
}

void func_4()
{
	iVar0 = 0;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < func_5())
	{
		if (iLocal_814[iVar0] == iLocal_792)
		{
			iLocal_814[iVar0] = -1;
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar1 < func_5())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_608, "REMOVE_ACTIVE_USER");
		GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(&(Local_825[iVar1]));
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		StringCopy(&(Local_825[iVar1]), "", 64);
	}
}

int func_5()
{
	return Global_262145.f_12366;
}

int func_6()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_5())
	{
		if (iLocal_814[iVar0] == iLocal_792)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_7(int iParam0)
{
	return func_8(iParam0, 1);
}

int func_8(int iParam0, int iParam1)
{
	if (iParam0 != func_9())
	{
		if (Global_1628237[iParam0].f_11 != func_9())
		{
			if (Global_1628237[iParam0].f_11 == iParam0 && Global_1628237[iParam0].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9()
{
	return -1;
}

void func_10()
{
	func_568();
	func_566();
	func_565();
	if (iLocal_613 == 0)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_609) && GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_610))
		{
			iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_609);
			MISC::CLEAR_BIT(&iLocal_614, 20);
			iLocal_616 = func_564(GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_610));
			switch (iVar0)
			{
				case 1001:
					break;
				
				case 1002:
					break;
				
				case 2001:
					break;
				
				case 2002:
					break;
				
				case 2003:
					break;
				
				case 2004:
					break;
				
				case 2005:
					break;
				
				case 2006:
					break;
				
				case 3001:
					break;
				
				case 3002:
					break;
				
				case 3003:
					break;
				
				case 3004:
					break;
				
				case 3005:
					break;
				
				case 3006:
					break;
				
				case 3007:
					iLocal_613 = 3007;
					break;
				
				case 3008:
					iLocal_617 = 1;
					iLocal_613 = 3008;
					break;
				
				case 3009:
					iLocal_617 = 2;
					iLocal_613 = 3009;
					break;
				
				case 3010:
					iLocal_617 = 3;
					iLocal_613 = 3010;
					break;
				
				case 3011:
					iLocal_613 = 3011;
					break;
				
				case 3012:
					if (!MISC::IS_BIT_SET(iLocal_614, 8) && !MISC::IS_BIT_SET(iLocal_614, 9))
					{
						iLocal_613 = 3012;
					}
					else
					{
						MISC::CLEAR_BIT(&iLocal_614, 9);
						MISC::CLEAR_BIT(&iLocal_614, 8);
						iLocal_616 = -1;
						iLocal_613 = 1;
						func_562(0, 0);
					}
					MISC::CLEAR_BIT(&iLocal_614, 19);
					if (!MISC::IS_BIT_SET(iLocal_614, 8))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Success", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
					}
					break;
				
				case 3013:
					iLocal_616 = -1;
					iLocal_613 = 1;
					MISC::CLEAR_BIT(&iLocal_614, 8);
					MISC::CLEAR_BIT(&iLocal_614, 11);
					MISC::CLEAR_BIT(&iLocal_614, 10);
					func_562(0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Cancel", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
					break;
				
				case 4001:
					iLocal_613 = 4001;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Sell", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
					break;
				
				case 4002:
					MISC::SET_BIT(&iLocal_614, 16);
					break;
				
				case 4003:
					iLocal_613 = 4003;
					if (!MISC::IS_BIT_SET(iLocal_614, 4))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Success", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
					}
					MISC::CLEAR_BIT(&iLocal_614, 4);
					func_562(0, 0);
					break;
				
				case 4004:
					iLocal_613 = 4004;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Cancel", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
					func_562(0, 0);
					break;
				
				case 5003:
					MISC::SET_BIT(&iLocal_615, 2);
					break;
				
				case 5004:
					MISC::CLEAR_BIT(&iLocal_615, 2);
					break;
				
				case 5005:
				case 4018:
					iLocal_613 = 5005;
					break;
				
				case 5006:
					iLocal_613 = 5006;
					break;
				
				case 5007:
					iLocal_613 = 5007;
					if (!MISC::IS_BIT_SET(iLocal_614, 4))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Success", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
					}
					MISC::CLEAR_BIT(&iLocal_614, 4);
					func_562(0, 0);
					break;
				
				case 5008:
					iLocal_613 = 5008;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Cancel", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
					func_562(0, 0);
					break;
				
				case 5010:
					if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_134.f_1 != 0 && func_561(5300, -1, 0) != 0)
					{
						func_560("WHOUSE_PURFA", "SEC_WHOUSE_NEMP", "WHOUSE_CONF", "", 0, 0, -1);
						MISC::CLEAR_BIT(&iLocal_614, 2);
					}
					else
					{
						iLocal_1126 = 0;
						func_560("IEWH_SEL_INTT", "IEWH_SEL_INTD", "WHOUSE_CONF", "WHOUSE_CANC", 1, 1, -1);
					}
					break;
				
				case 5011:
				case 4023:
					iLocal_1126 = func_559(PLAYER::PLAYER_ID());
					func_560("IEWH_SEL_INTT", "IEWH_SEL_INTD", "WHOUSE_CONF", "WHOUSE_CANC", 1, 1, -1);
					break;
				
				case 5012:
				case 4015:
					iLocal_1126 = 0;
					break;
				
				case 5013:
				case 4016:
					iLocal_1126 = 1;
					break;
				
				case 5014:
				case 4017:
					iLocal_1126 = 2;
					break;
				
				case 5015:
				case 4019:
					iLocal_1126 = 0;
					func_562(0, 0);
					break;
				
				case 6002:
					iLocal_613 = 6002;
					func_562(0, 0);
					break;
				
				case 6003:
					iLocal_613 = 6003;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Cancel", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
					func_562(0, 0);
					break;
				
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					if (iLocal_791 == 6)
					{
						iLocal_613 = 6999;
						iLocal_991 = iVar0;
					}
					break;
				
				default:
					break;
				}
			}
	}
	func_464(&iLocal_613);
	func_298(&iLocal_613);
	func_11(&iLocal_613);
}

void func_11(int iParam0)
{
	iVar0 = ((iLocal_616 - iLocal_990) - 1);
	uVar1 = Global_1590535[PLAYER::PLAYER_ID()].f_274.f_134.f_1;
	iVar2 = iVar0;
	iVar3 = func_297(PLAYER::PLAYER_ID());
	iVar4 = Global_1590535[PLAYER::PLAYER_ID()].f_274.f_134.f_44;
	switch (*iParam0)
	{
		case 4001:
		case 5006:
			if (!func_296(12))
			{
				func_560("SEC_VEH_STEAL", "SEC_V_STEAL_F", "WHOUSE_CONF", "", 0, 0, -1);
				MISC::CLEAR_BIT(&iLocal_614, 3);
			}
			else
			{
				func_560("SEC_VEH_STEAL", "SEC_VEH_STEALQ", "WHOUSE_CONF", "WHOUSE_CANC", 1, 0, -1);
				MISC::SET_BIT(&iLocal_614, 3);
			}
			*iParam0 = 1;
			MISC::CLEAR_BIT(&iLocal_614, 2);
			break;
		
		case 4004:
			MISC::CLEAR_BIT(&iLocal_614, 3);
			MISC::CLEAR_BIT(&iLocal_614, 2);
			*iParam0 = 1;
			break;
		
		case 5005:
			*iParam0 = 1;
			MISC::CLEAR_BIT(&iLocal_614, 3);
			MISC::SET_BIT(&iLocal_614, 2);
			if (iVar2 == iVar3)
			{
				func_560("IEWHINT_PURCH", "IEWHINT_PURCHQ", "WHOUSE_CONF", "WHOUSE_CANC", 1, 0, -1);
			}
			else if (func_295(PLAYER::PLAYER_ID()))
			{
				func_560("IEWHOUSE_PURCH", "IE_WH_TRADE", "WHOUSE_CONF", "WHOUSE_CANC", 1, 0, func_292(func_297(PLAYER::PLAYER_ID())));
			}
			else
			{
				func_560("IEWHOUSE_PURCH", "IEWHOUSE_PURCHQ", "WHOUSE_CONF", "WHOUSE_CANC", 1, 0, -1);
			}
			break;
		
		case 5007:
		case 4003:
			if (MISC::IS_BIT_SET(iLocal_614, 2))
			{
				if (!func_290(iVar2, iLocal_1126, iVar2 == iVar3))
				{
					if (iVar2 == iVar3)
					{
						func_560("WHOUSE_PURFA", "IEWH_PURCHF_NM", "WHOUSE_CONF", "", 0, 0, -1);
					}
					else
					{
						func_560("WHOUSE_PURFA", "WHSE_PURCHF_NM", "WHOUSE_CONF", "", 0, 0, -1);
					}
					MISC::SET_BIT(&iLocal_614, 4);
				}
				else if (iVar2 == iVar3)
				{
					if (iVar4 == iLocal_1126)
					{
						func_560("WHOUSE_PURFA", "IEWH_INT_PURCHF", "WHOUSE_CONF", "", 0, 0, -1);
					}
					else if (func_288(iVar2, iLocal_1126))
					{
						func_560("IEWHOUSE_PURCH", "IEWHINT_PURCHD", "WHOUSE_CONF", "", 1, 0, -1);
						func_287(iLocal_1126);
						iLocal_1126 = 0;
						func_258(iVar2, uVar1);
						MISC::SET_BIT(&iLocal_614, 21);
						MISC::SET_BIT(&iLocal_614, 6);
					}
					else
					{
						sVar5 = "WHOUSE_PURCHF";
						if (MISC::IS_BIT_SET(iLocal_614, 18))
						{
							sVar5 = "WHSE_PURCHF_NM";
						}
						func_560("WHOUSE_PURFA", sVar5, "WHOUSE_CONF", "", 0, 0, -1);
						MISC::SET_BIT(&iLocal_614, 4);
					}
				}
				else if (func_227(iVar2))
				{
					func_560("IEWHOUSE_PURCH", "IEWHOUSE_PURCHD", "WHOUSE_CONF", "", 1, 0, -1);
					if (func_295(PLAYER::PLAYER_ID()))
					{
						func_225(iVar0);
						func_287(iLocal_1126);
						func_258(iVar3, uVar1);
						func_258(iVar2, uVar1);
					}
					else
					{
						func_225(iVar0);
						func_287(iLocal_1126);
						func_258(iVar2, uVar1);
					}
					func_223();
					iLocal_1126 = 0;
					MISC::SET_BIT(&iLocal_614, 6);
					MISC::SET_BIT(&iLocal_614, 21);
				}
				else
				{
					sVar5 = "WHOUSE_PURCHF";
					if (MISC::IS_BIT_SET(iLocal_614, 18))
					{
						sVar5 = "WHSE_PURCHF_NM";
					}
					func_560("WHOUSE_PURFA", sVar5, "WHOUSE_CONF", "", 0, 0, -1);
					MISC::SET_BIT(&iLocal_614, 4);
				}
				MISC::CLEAR_BIT(&iLocal_614, 2);
			}
			else if (MISC::IS_BIT_SET(iLocal_614, 3))
			{
				if (func_18(&iVar6))
				{
					func_14();
					func_652(1);
					func_13(1);
					func_636(1);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
					func_560("SEC_VEH_STEAL", func_12(iVar6), "WHOUSE_CONF", "", 0, 0, -1);
				}
				MISC::CLEAR_BIT(&iLocal_614, 3);
			}
			*iParam0 = 1;
			break;
		
		case 5008:
			MISC::CLEAR_BIT(&iLocal_614, 3);
			MISC::CLEAR_BIT(&iLocal_614, 2);
			*iParam0 = 1;
			break;
	}
}

char* func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SEC_MISS_L_F";
		
		case 1:
			return "SEC_WHOUSE_FULL";
		
		case 2:
			return "GENERAL_MLF_G2";
		
		case 3:
			return "GENERAL_MLF_G5";
		
		default:
	}
	return "";
}

void func_13(int iParam0)
{
	if (iParam0 != Global_1686716)
	{
		Global_1686716 = iParam0;
	}
}

void func_14()
{
	iVar0 = func_17();
	iVar0++;
	func_15(5327, iVar0, -1, 1, 0);
}

void func_15(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_16(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_16(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_2();
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

int func_17()
{
	return func_561(5327, -1, 0);
}

int func_18(var uParam0)
{
	if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_134.f_1 >= 40)
	{
		*uParam0 = 1;
		return 0;
	}
	iVar0 = func_61(PLAYER::PLAYER_ID(), 178, 0);
	if (iVar0 == 15)
	{
		*uParam0 = 2;
		return 0;
	}
	else if (iVar0 == 16)
	{
		*uParam0 = 3;
		return 0;
	}
	func_60(0);
	if (func_59() == 0)
	{
		func_54();
		func_60(1);
	}
	if ((func_59() != 0 && func_50()) && func_41(4, 1, 0))
	{
		iVar1 = func_59();
		func_23(178, iVar1, 0, 0, 0, 0);
		func_22();
		Global_73830 = 1;
		MISC::CLEAR_BIT(&(Global_1676377.f_4), 5);
		if (func_19(PLAYER::PLAYER_ID()))
		{
			Global_1694834.f_4 = 178;
		}
		return 1;
	}
	*uParam0 = 0;
	return 0;
}

int func_19(int iParam0)
{
	if (iParam0 != func_9())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_20(Global_2425662[iParam0].f_310.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_20(int iParam0)
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

int func_21(int iParam0, bool bParam1, bool bParam2)
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

void func_22()
{
	Global_1676313++;
	if (Global_1676313 == 32)
	{
		func_54();
	}
	if (Global_1676314[Global_1676313] == 0)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Global_1676313++;
			if (Global_1676313 == 32)
			{
				Global_1676313 = 0;
			}
			if (Global_1676314[Global_1676313] != 0)
			{
				Jump @119; //curOff = 90
			}
			else if (iVar0 == 31)
			{
				func_54();
				return;
			}
			iVar0++;
		}
	}
}

void func_23(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam0 != 178 && iParam0 != 188)
	{
	}
	if (iParam0 == 188)
	{
		func_40(8);
	}
	func_39(iParam1, iParam2, iParam3, iParam4, iParam5);
	func_24(iParam0, -1);
}

void func_24(int iParam0, int iParam1)
{
	if (func_38() || !func_36(1))
	{
		if (!func_33(PLAYER::PLAYER_ID(), 0))
		{
			func_32(iParam0);
			func_25(iParam0, func_29(1, 1), func_28(), func_27(), func_26(), iParam1);
		}
	}
}

void func_25(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
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

var func_26()
{
	return Global_2537071.f_5124.f_341;
}

var func_27()
{
	return Global_2537071.f_5124.f_340;
}

var func_28()
{
	return Global_2537071.f_5124.f_339;
}

int func_29(int iParam0, bool bParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_21(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_30(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_30(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_31(-1, 0) == 8;
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

int func_31(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_2();
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

void func_32(var uParam0)
{
	Global_1628237[PLAYER::PLAYER_ID()].f_11.f_32 = uParam0;
}

int func_33(int iParam0, int iParam1)
{
	if (func_35(iParam0, 0))
	{
		return func_34(Global_1628237[iParam0].f_11.f_33) == iParam1;
	}
	return 0;
}

int func_34(int iParam0)
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

int func_35(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_36(bool bParam0)
{
	return func_37(PLAYER::PLAYER_ID(), bParam0);
}

bool func_37(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_667(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_9();
}

bool func_38()
{
	return func_667(PLAYER::PLAYER_ID());
}

void func_39(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	Global_1628237[PLAYER::PLAYER_ID()].f_11.f_186[0] = uParam0;
	Global_1628237[PLAYER::PLAYER_ID()].f_11.f_186[1] = uParam1;
	Global_1628237[PLAYER::PLAYER_ID()].f_11.f_186[2] = uParam2;
	Global_1628237[PLAYER::PLAYER_ID()].f_11.f_186[3] = uParam3;
	Global_1628237[PLAYER::PLAYER_ID()].f_11.f_186.f_5 = uParam4;
}

void func_40(int iParam0)
{
	if (Global_2537071.f_5124.f_339 != iParam0)
	{
		Global_2537071.f_5124.f_339 = iParam0;
	}
}

int func_41(int iParam0, int iParam1, bool bParam2)
{
	if (!func_36(1))
	{
		return 0;
	}
	if (!func_38())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_1628237[PLAYER::PLAYER_ID()].f_11.f_354[iVar0] = -1;
		iVar0++;
	}
	if (bParam2)
	{
		iVar1[0] = 0;
		iVar1[1] = 1;
		iVar1[2] = 2;
		iVar1[3] = 3;
		iVar1[4] = 4;
		iVar1[5] = 5;
		iVar1[6] = 6;
		iVar1[7] = 11;
		iVar1[8] = 14;
		iVar1[9] = 17;
		iVar1[10] = 21;
		iVar1[11] = 23;
		iVar1[12] = 25;
		iVar17 = 13;
		bVar15 = true;
	}
	else if (iParam0 == 2)
	{
		iVar1[0] = 19;
		iVar1[1] = 20;
		iVar1[2] = 21;
		iVar1[3] = 22;
		iVar1[4] = 23;
		iVar1[5] = 24;
		iVar1[6] = 25;
		iVar1[7] = 26;
		iVar17 = 8;
		bVar15 = true;
	}
	else if (iParam0 == 0)
	{
		iVar1[0] = 0;
		iVar1[1] = 1;
		iVar1[2] = 2;
		iVar1[3] = 3;
		iVar1[4] = 4;
		iVar1[5] = 5;
		iVar1[6] = 6;
		iVar1[7] = 7;
		iVar1[8] = 8;
		iVar1[9] = 9;
		iVar1[10] = 10;
		iVar17 = 11;
	}
	else if (iParam0 == 1)
	{
		iVar1[0] = 11;
		iVar1[1] = 12;
		iVar1[2] = 13;
		iVar1[3] = 14;
		iVar1[4] = 15;
		iVar1[5] = 16;
		iVar1[6] = 17;
		iVar1[7] = 18;
		iVar17 = 8;
		bVar15 = true;
	}
	else if (iParam0 == 4)
	{
		iVar18 = func_297(func_49());
		if (iVar18 != 0)
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Global_1628237[PLAYER::PLAYER_ID()].f_11.f_354[iVar0] = func_48(iVar18);
				iVar0++;
			}
			bVar16 = true;
		}
	}
	if (iParam0 != 4)
	{
		if (bVar15)
		{
			if (iVar17 >= 1)
			{
				uVar19 = 2;
				uVar22 = func_42(&iVar1, iVar17, &uVar19);
				iVar0 = 0;
				while (iVar0 < iParam1)
				{
					Global_1628237[PLAYER::PLAYER_ID()].f_11.f_354[iVar0] = uVar22;
					iVar0++;
				}
				bVar16 = true;
			}
		}
		else if (iVar17 >= iParam1)
		{
			uVar23 = 2;
			iVar0 = 0;
			while (iVar0 < iParam1)
			{
				Global_1628237[PLAYER::PLAYER_ID()].f_11.f_354[iVar0] = func_42(&iVar1, iVar17, &uVar23);
				iVar0++;
			}
			bVar16 = true;
		}
	}
	if (bVar16)
	{
		return 1;
	}
	return 0;
}

int func_42(int iParam0, int iParam1, var uParam2)
{
	if (!func_36(1))
	{
		return -1;
	}
	fVar0 = Global_262145.f_17634;
	fVar1 = Global_262145.f_17635;
	iVar17 = func_47(PLAYER::PLAYER_ID());
	if (Global_1590535[iVar17].f_274[5] > -1)
	{
		Var18 = { Global_1049922[Global_1590535[iVar17].f_274[5]].f_38[0].f_23 };
		Var18.z = 0f;
	}
	else
	{
		return -1;
	}
	if (func_295(iVar17))
	{
		Var21 = { Global_1676377.f_488[func_45(func_297(iVar17))] };
		Var21.z = 0f;
	}
	else
	{
		return -1;
	}
	if (iParam1 > 0)
	{
		iVar24 = 0;
		while (iVar24 < iParam1)
		{
			Var27 = { func_44((*iParam0)[iVar24]) };
			Var27.z = 0f;
			fVar30 = SYSTEM::VDIST(Var27, Var18);
			fVar31 = SYSTEM::VDIST(Var27, Var21);
			if (fVar30 >= fVar0 && fVar31 >= fVar1)
			{
				func_43((*iParam0)[iVar24], &iVar25, &iVar26);
				if (!MISC::IS_BIT_SET((*uParam2)[iVar25], iVar26))
				{
					uVar2[iVar16] = (*iParam0)[iVar24];
					iVar16++;
				}
			}
			iVar24++;
		}
		if (iVar16 > 0)
		{
			iVar32 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar16);
			func_43(uVar2[iVar32], &iVar25, &iVar26);
			MISC::SET_BIT(uParam2[iVar25], iVar26);
			return uVar2[iVar32];
		}
		else
		{
			iVar24 = 0;
			while (iVar24 < iParam1)
			{
				func_43((*iParam0)[iVar24], &iVar25, &iVar26);
				if (!MISC::IS_BIT_SET((*uParam2)[iVar25], iVar26))
				{
					uVar2[iVar16] = (*iParam0)[iVar24];
					iVar16++;
				}
				iVar24++;
			}
			if (iVar16 > 0)
			{
				iVar33 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar16);
				func_43(uVar2[iVar33], &iVar25, &iVar26);
				MISC::SET_BIT(uParam2[iVar25], iVar26);
				return uVar2[iVar33];
			}
			else
			{
				iVar34 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1);
				func_43(uVar2[iVar34], &iVar25, &iVar26);
				MISC::SET_BIT(uParam2[iVar25], iVar26);
				return uVar2[iVar34];
			}
		}
	}
	else
	{
		return -1;
	}
	return -1;
}

void func_43(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	*iParam2 = (iParam0 - *iParam1 * 32);
}

Vector3 func_44(int iParam0)
{
	switch (iParam0)
	{
		case 19:
			return -2597.411f, 1930.107f, 166.3086f;
		
		case 20:
			return -1920.153f, 2048.602f, 139.7356f;
		
		case 21:
			return -68.3441f, 894.488f, 234.5414f;
		
		case 22:
			return 1407.563f, 1118.505f, 113.8377f;
		
		case 23:
			return -1788.983f, 455.5039f, 127.3081f;
		
		case 24:
			return 217.052f, 757.9442f, 203.6637f;
		
		case 25:
			return -1615.404f, 17.2934f, 61.1779f;
		
		case 26:
			return -3102.533f, 716.4913f, 19.297f;
		
		case 0:
			return 880.8726f, -2919.058f, 4.9006f;
		
		case 1:
			return 928.5625f, -2920.391f, 4.9021f;
		
		case 2:
			return 972.3794f, -2920.422f, 4.9021f;
		
		case 3:
			return 1091.055f, -2920.289f, 4.9021f;
		
		case 4:
			return 1148.923f, -2920.104f, 4.9021f;
		
		case 5:
			return 1180.085f, -2970.068f, 4.9021f;
		
		case 6:
			return -1082.496f, -500.419f, 35.432f;
		
		case 7:
			return 165.3373f, 2284.929f, 92.178f;
		
		case 8:
			return -2221.172f, 3484.129f, 29.1695f;
		
		case 9:
			return 2906.938f, 4345.68f, 49.3003f;
		
		case 10:
			return 1579.18f, 6438.313f, 23.7935f;
		
		case 11:
			return 477.29f, -1889.14f, 25.0946f;
		
		case 12:
			return 2534.13f, 2584.07f, 36.9449f;
		
		case 13:
			return 452.3711f, 3573.672f, 32.2386f;
		
		case 14:
			return -222.6743f, 6249.478f, 30.4912f;
		
		case 15:
			return -65.6218f, 81.307f, 70.5533f;
		
		case 16:
			return -28.1873f, -1083.637f, 25.5732f;
		
		case 17:
			return 2510.956f, 4109.705f, 37.5692f;
		
		case 18:
			return -763.496f, -243.3722f, 36.2426f;
		
		case 27:
			return 859.9324f, -1350.51f, 25.0668f;
		
		case 28:
			return 417.7273f, -1618.991f, 28.2898f;
		
		case 29:
			return 452.691f, -1007.568f, 26.12f;
		
		case 30:
			return -1120.411f, -842.7603f, 12.3767f;
		
		case 31:
			return -1326.011f, -1502.188f, 3.3245f;
		
		case 32:
			return -576.611f, -130.9079f, 33.659f;
		
		case 33:
			return 537.8883f, -32.6088f, 69.6464f;
		
		case 34:
			return 1858.998f, 3676.471f, 32.546f;
		
		case 35:
			return -433.4332f, 6042.402f, 30.3373f;
		
		case 36:
			return -633.966f, -1780.525f, 23.0708f;
		
		case 37:
			return 995.0766f, -1858.65f, 29.8898f;
		
		case 38:
			return -70.5644f, -1822.705f, 25.942f;
		
		case 39:
			return 38.8324f, -1284.2f, 28.278f;
		
		case 40:
			return 1211.217f, -1262.491f, 34.2267f;
		
		case 41:
			return 804.3043f, -2225.151f, 28.5425f;
		
		case 42:
			return 1764.46f, -1648.041f, 111.649f;
		
		case 43:
			return 144.143f, -3003.358f, 6.031f;
		
		case 44:
			return -513.2193f, -2200.612f, 5.394f;
		
		case 45:
			return -1153.689f, -2172.111f, 12.2625f;
		
		case 46:
			return -511.2002f, -1736.564f, 18.1967f;
		
		case 47:
			return 2352.237f, 3036.937f, 47.1521f;
		
		case 48:
			return -194.5653f, 6268.56f, 30.4893f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_45(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_20(iVar0) == 1)
		{
			if (func_46(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_46(int iParam0)
{
	switch (iParam0)
	{
		case 60:
			return 1;
			break;
		
		case 61:
			return 2;
			break;
		
		case 62:
			return 3;
			break;
		
		case 63:
			return 4;
			break;
		
		case 64:
			return 5;
			break;
		
		case 65:
			return 6;
			break;
		
		case 66:
			return 7;
			break;
		
		case 67:
			return 8;
			break;
		
		case 68:
			return 9;
			break;
		
		case 69:
			return 10;
			break;
	}
	return 0;
}

int func_47(int iParam0)
{
	if (iParam0 != func_9())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_9();
}

int func_48(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 36;
		
		case 2:
			return 37;
		
		case 3:
			return 38;
		
		case 4:
			return 39;
		
		case 5:
			return 40;
		
		case 6:
			return 41;
		
		case 7:
			return 42;
		
		case 8:
			return 43;
		
		case 9:
			return 44;
		
		case 10:
			return 45;
		
		default:
	}
	return -1;
}

int func_49()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11;
}

int func_50()
{
	if (!func_53(PLAYER::PLAYER_ID(), 178, 0))
	{
		return 0;
	}
	if (func_51(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_51(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_52(iParam0, 9);
	}
	return 0;
}

bool func_52(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

bool func_53(int iParam0, int iParam1, bool bParam2)
{
	return func_61(iParam0, iParam1, bParam2) == -1;
}

void func_54()
{
	iVar3 = Global_1590535[PLAYER::PLAYER_ID()].f_274.f_134.f_1;
	Global_1676313 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar4[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 32);
		iVar2 = iVar4[iVar0];
		iVar4[iVar0] = iVar4[iVar1];
		iVar4[iVar1] = iVar2;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar37 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
		uVar38 = func_58(iVar4[iVar0], iVar37);
		Global_1676314[iVar0] = uVar38;
		if (iVar3 < 32)
		{
			if (func_57(Global_1676314[iVar0]))
			{
				Global_1676314[iVar0] = 0;
			}
		}
		else if (func_56(PLAYER::PLAYER_ID(), Global_1676314[iVar0]))
		{
			iVar39 = func_55(iVar37, &(Global_1676314[iVar0]));
			if (func_56(PLAYER::PLAYER_ID(), Global_1676314[iVar0]))
			{
				func_55(iVar39, &(Global_1676314[iVar0]));
				if (func_56(PLAYER::PLAYER_ID(), Global_1676314[iVar0]))
				{
					Global_1676314[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

int func_55(int iParam0, var uParam1)
{
	if (iParam0 == 3)
	{
		*uParam1 = (*uParam1 - 2);
		return 0;
	}
	*uParam1++;
	return iParam0 + 1;
}

int func_56(int iParam0, int iParam1)
{
	if (func_295(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 40)
		{
			if (Global_1590535[iParam0].f_274.f_134.f_2[iVar0] == iParam1 || Global_1590535[iParam0].f_274.f_134.f_2[iVar0] == (1000 + iParam1))
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_57(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar0) / 3f));
	iVar1 *= 3;
	iVar1 = (iVar1 - 2);
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (func_56(PLAYER::PLAYER_ID(), (iVar1 + iVar2)))
		{
			return 1;
		}
		iVar2++;
	}
	return 0;
}

int func_58(int iParam0, int iParam1)
{
	if (iParam0 >= 32 || iParam0 < 0)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 3)
	{
		return 0;
	}
	iVar0 = iParam0 + 1;
	iVar0 *= 3;
	iVar0 = (iVar0 - 2);
	return (iVar0 + (iParam1 - 1));
}

int func_59()
{
	if (Global_1676313 < 0 || Global_1676313 >= 32)
	{
		return 0;
	}
	return Global_1676314[Global_1676313];
}

void func_60(bool bParam0)
{
	iVar1 = 0;
	if (!bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_1676314[iVar0] != 0)
			{
				if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_134.f_1 < 32)
				{
					if (func_57(Global_1676314[iVar0]))
					{
						Global_1676314[iVar0] = 0;
					}
				}
				else if (func_56(PLAYER::PLAYER_ID(), Global_1676314[iVar0]))
				{
					Global_1676314[iVar0] = 0;
				}
			}
			else
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	if (iVar1 == 32)
	{
		func_54();
	}
	else if (Global_1676314[Global_1676313] == 0)
	{
		func_22();
	}
}

int func_61(int iParam0, int iParam1, bool bParam2)
{
	if (!func_91(func_195(iParam1, -1, -1, -1), func_152(iParam1, -1, 1, -1, -1, iParam0), func_100(iParam1, -1, -1, -1, -1, iParam0), 0, 1))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (func_7(iParam0))
	{
		if (iParam1 == 153)
		{
			iVar0 = 211;
		}
	}
	if (func_89(iParam1) >= func_88(iVar0))
	{
		return 5;
	}
	if (func_87(iParam0))
	{
		return 6;
	}
	if (func_86(iParam0))
	{
		return 14;
	}
	iVar1 = func_81(iParam0);
	if (iVar1 != -1)
	{
		return iVar1;
	}
	if (func_34(iParam1) == 1)
	{
		if ((func_80() || func_79()) || ((!bParam2 && func_78() != 0) && func_34(iParam1) == 1))
		{
			return 2;
		}
	}
	else if (func_34(iParam1) == 2)
	{
		if (!func_75(iParam1))
		{
			return 3;
		}
		if (!bParam2)
		{
			if (Global_1628237[iParam0].f_11.f_34 != func_9())
			{
				return 9;
			}
		}
		if (func_74(iParam0))
		{
			return 10;
		}
	}
	else if (func_72(iParam1))
	{
		if (func_71(iParam0) <= 0)
		{
			return 4;
		}
	}
	if (func_70(iParam1))
	{
		if (func_69())
		{
			return 13;
		}
		if (func_67())
		{
			return 12;
		}
	}
	if (func_71(iParam0) + 1 < func_66(iVar0))
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
			if (!func_63(iParam0, 0))
			{
				return 1;
			}
			break;
		
		case 189:
			if (func_62(iParam0, 21) || func_62(iParam0, 25))
			{
				return 0;
			}
			break;
	}
	return -1;
}

bool func_62(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2425662[iParam0].f_208, iParam1);
}

int func_63(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (!func_64(iVar1, iParam0, 1))
			{
				if (iParam1 || !func_52(iVar1, 31))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_64(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_9())
	{
		if (!bParam2)
		{
			if (func_65(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628237[iParam0].f_11 != func_9())
		{
			return iParam1 == Global_1628237[iParam0].f_11;
		}
	}
	return 0;
}

int func_65(int iParam0, int iParam1)
{
	if (iParam1 != func_9())
	{
		if (iParam0 != func_9())
		{
			if (Global_1628237[iParam0].f_11 != func_9())
			{
				if (Global_1628237[iParam0].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_66(int iParam0)
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

int func_67()
{
	if (func_68())
	{
		return 1;
	}
	return Global_2450632.f_644;
}

bool func_68()
{
	return Global_1312837 == 10;
}

bool func_69()
{
	return Global_262145.f_15220;
}

int func_70(int iParam0)
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

int func_71(int iParam0)
{
	if (func_47(iParam0) == func_9())
	{
		return 0;
	}
	return Global_1628237[iParam0].f_11.f_19;
}

int func_72(int iParam0)
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
	return func_73(iParam0, 0);
	return 0;
}

int func_73(int iParam0, int iParam1)
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

int func_74(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if ((Global_1628237[iParam0].f_11.f_34 != func_9() && Global_1628237[iParam0].f_11.f_34 == iVar1) && Global_1628237[iVar1].f_11.f_34 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case 179:
			if (func_77() < 2)
			{
				return 0;
			}
			break;
		
		case 148:
			if (func_76() < 2)
			{
				return 0;
			}
			break;
		
		default:
			if (func_76() < 2)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_76()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (func_667(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_77()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (func_7(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_78()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11.f_102;
}

bool func_79()
{
	return Global_1650640.f_11.f_144 != -1;
}

bool func_80()
{
	return Global_1650640.f_11.f_143 != -1;
}

int func_81(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_83())
	{
		iVar1 = Global_1628237[iParam0].f_11.f_11[iVar0];
		if (iVar1 != func_9())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (func_87(iVar1))
				{
					return 7;
				}
				if (func_86(iVar1))
				{
					return 15;
				}
				if (func_82(iVar1))
				{
					return 16;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_82(int iParam0)
{
	if (iParam0 == func_9())
	{
		return 0;
	}
	if (((((MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_4, 2) || MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_4, 3)) || MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_4, 5)) || MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_4, 6)) || MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_4, 7)) || MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_369.f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_83()
{
	return (func_84() - 1);
}

int func_84()
{
	return func_85(PLAYER::PLAYER_ID());
}

int func_85(int iParam0)
{
	iVar0 = Global_1628237[iParam0].f_11;
	if (iVar0 != func_9() && Global_1628237[iVar0].f_11.f_450 == 1)
	{
		return 8;
	}
	return 4;
}

int func_86(int iParam0)
{
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
		uVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(uVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(uVar0);
			if (iVar1 == 1885233650 || iVar1 == -1667301416)
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

int func_87(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628237[iVar0].f_1, 0);
	}
	return 0;
}

int func_88(int iParam0)
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

int func_89(int iParam0)
{
	return Global_1650640.f_11.f_147[func_90(iParam0)];
}

int func_90(int iParam0)
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

int func_91(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_99(iParam0, bParam3, bParam4) || func_98(iParam1, bParam3, bParam4)) || func_92(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_92(int iParam0, bool bParam1, bool bParam2)
{
	return func_93(2, iParam0, 0, bParam1, bParam2);
}

int func_93(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!MISC::IS_BIT_SET(Global_1389296, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_97(iParam0) - func_96(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_96(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_97(iParam0) - func_95(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_96(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_97(iParam0) - func_96(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[PLAYER::PLAYER_ID()] != 3)
		{
			iVar1 = (iVar1 - func_94(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_94(int iParam0)
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

int func_95(int iParam0)
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

int func_96(int iParam0, bool bParam1)
{
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425662[iVar0].f_209;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425662[iVar0].f_210;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425662[iVar0].f_211;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_97(int iParam0)
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

int func_98(int iParam0, bool bParam1, bool bParam2)
{
	return func_93(1, iParam0, 0, bParam1, bParam2);
}

int func_99(int iParam0, bool bParam1, bool bParam2)
{
	return func_93(0, iParam0, 0, bParam1, bParam2);
}

int func_100(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
			return func_151(iParam1);
		
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
			return func_149(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_143(iParam1, iParam2, iParam3, iParam4);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_131(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(uParam5), iParam4);
		
		case 233:
			return func_124(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
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
			return func_116(iParam1, iParam2);
		
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
			return func_113(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_112(iParam1);
		
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
			return func_108(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 158:
			return func_104(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 181:
			return func_101(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		default:
	}
	return 0;
}

int func_101(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_103(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_102(iParam0, iParam2));
	return iVar0;
}

int func_102(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 5;
		
		default:
	}
	return 1;
}

int func_103(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_104(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_107(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_105(iParam0, iParam2));
	return iVar0;
}

int func_105(int iParam0, int iParam1)
{
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
			if (func_37(iParam1, 1))
			{
				Var0 = { func_106(iParam1) };
			}
			if (Var0.y == 4)
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

Vector3 func_106(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_301;
}

int func_107(int iParam0, int iParam1, var uParam2)
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

int func_108(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_111(iParam0, iParam1, iParam3);
	if (!func_110(iParam0))
	{
		iVar0 = (iVar0 + func_109(iParam0, iParam2));
	}
	return iVar0;
}

int func_109(int iParam0, int iParam1)
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
			if (func_71(iParam1) + 1 == 1)
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

int func_110(int iParam0)
{
	return 0;
}

int func_111(int iParam0, int iParam1, int iParam2)
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

int func_112(int iParam0)
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

int func_113(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_115(iParam0, iParam1);
	if (func_114(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_114(int iParam0)
{
	return 1;
}

int func_115(int iParam0, int iParam1)
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

int func_116(int iParam0, int iParam1)
{
	iVar0 = func_123(iParam0, iParam1);
	if (!func_122(iParam0))
	{
		iVar0 = (iVar0 + func_117(iParam0, func_121() + 1));
	}
	if (iParam0 == 14 || ((((func_122(iParam0) && iParam0 != 9) && iParam0 != 16) && iParam0 != 7) && iParam0 != 17))
	{
		iVar0 = (iVar0 + func_117(iParam0, func_121() + 1));
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

int func_117(int iParam0, int iParam1)
{
	if (func_120(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_119(iParam0, iParam1);
			iVar2 = func_118(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_122(iParam0))
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

int func_118(int iParam0)
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

int func_119(int iParam0, int iParam1)
{
	if (func_122(iParam0))
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

int func_120(int iParam0)
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

int func_121()
{
	if (func_49() == func_9())
	{
		return 0;
	}
	return func_71(func_49());
}

int func_122(int iParam0)
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

int func_123(int iParam0, int iParam1)
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

int func_124(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = func_130(iParam0, iParam1, iParam2, iParam4);
	if (!func_129(iParam0))
	{
		if (iParam3 != func_9())
		{
			iVar0 = (iVar0 + func_126(iParam0, func_71(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_125(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_125(int iParam0)
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

int func_126(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
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
			if (func_129(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_128(iParam0))
	{
		iVar0 = func_128(iParam0);
	}
	else if (iVar0 < func_127(iParam0))
	{
		iVar0 = func_127(iParam0);
	}
	return iVar0;
}

int func_127(int iParam0)
{
	return 1;
}

int func_128(int iParam0)
{
	return 4;
}

int func_129(int iParam0)
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

int func_130(int iParam0, int iParam1, var uParam2, var uParam3)
{
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

int func_131(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = func_142(iParam0, iParam1, iParam2, iParam4);
	if (!func_141(iParam0))
	{
		if (iParam3 != func_9())
		{
			iVar0 = (iVar0 + func_133(iParam0, func_71(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_132(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			return 1;
		
		default:
	}
	return 0;
}

int func_133(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_140(iParam0))
	{
		iVar1 = func_139(iParam3);
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
	else if (func_138(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_137(iParam2))
		{
			iVar0 = func_137(iParam2);
		}
	}
	if (iVar0 > func_135(iParam0))
	{
		iVar0 = func_135(iParam0);
	}
	else if (iVar0 < func_134(iParam0))
	{
		iVar0 = func_134(iParam0);
	}
	return iVar0;
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_135(int iParam0)
{
	if (!func_140(iParam0))
	{
		if (func_141(iParam0))
		{
			if (func_136(iParam0))
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

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_137(int iParam0)
{
	if (iParam0 == func_9() || Global_1590535[iParam0].f_274.f_264 == 0)
	{
		return 50;
	}
	return (50 - Global_1590535[iParam0].f_274.f_264.f_3);
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_139(int iParam0)
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

int func_140(int iParam0)
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

int func_141(int iParam0)
{
	if (func_140(iParam0) || func_138(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_142(int iParam0, int iParam1, int iParam2, var uParam3)
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

int func_143(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_148(iParam0, iParam1, iParam2, iParam3);
	if (!func_147(iParam0))
	{
		iVar0 = (iVar0 + func_145(iParam0, func_121() + 1, -1, iParam2));
	}
	if (func_144(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_144(int iParam0)
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

int func_145(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_146(iParam0))
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
	else if (func_147(iParam0))
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

int func_146(int iParam0)
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

int func_147(int iParam0)
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

int func_148(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_149(int iParam0, int iParam1, var uParam2)
{
	iVar0 = func_150(iParam0, iParam1);
	if (iParam0 == 15)
	{
		iVar0++;
	}
	return iVar0;
}

int func_150(int iParam0, int iParam1)
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

int func_151(int iParam0)
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

int func_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
			return func_194(iParam1);
		
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
			return func_190(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_186(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_180(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(uParam5), 0, 0, 0);
		
		case 233:
			return func_174(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_173(iParam1, iParam3);
		
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
			return func_172(iParam1, iParam3, iParam4);
		
		case 238:
		case 249:
			return func_171(iParam1);
		
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
			return func_165(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		case 158:
			return func_159(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		case 181:
			return func_153(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		default:
	}
	return 0;
}

int func_153(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_158(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_157(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_156(func_71(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_155(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_154(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_154(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_155(int iParam0, int iParam1)
{
	return func_154(iParam0, iParam1) > 0;
}

int func_156(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

int func_157(int iParam0, int iParam1)
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

int func_158(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		default:
	}
	return 0;
}

int func_159(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
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
		iVar0 = (iVar0 + func_164(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_163(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_162(func_71(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_161(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_160(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_160(int iParam0, int iParam1)
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

bool func_161(int iParam0, int iParam1)
{
	return func_160(iParam0, iParam1) > 0;
}

int func_162(int iParam0, int iParam1, int iParam2)
{
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
			if (iParam2 != func_9())
			{
				if (func_37(iParam2, 1))
				{
					Var0 = { func_106(iParam2) };
				}
			}
			else
			{
				return 4;
			}
			if (Var0.y == 4)
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

int func_163(int iParam0, int iParam1)
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

int func_164(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 53:
			return 0;
		
		default:
	}
	return 0;
}

int func_165(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
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
		if (func_110(iParam0))
		{
			iVar0 = (iVar0 + func_109(iParam0, iParam2));
		}
		iVar0 = (iVar0 + func_170(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_169(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_168(func_71(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (func_167(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_166(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_166(int iParam0, int iParam1)
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

bool func_167(int iParam0, int iParam1)
{
	return func_166(iParam0, iParam1) > 0;
}

int func_168(int iParam0, int iParam1)
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

int func_169(int iParam0, int iParam1)
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

int func_170(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		default:
	}
	return 0;
}

int func_171(int iParam0)
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

int func_172(int iParam0, int iParam1, int iParam2)
{
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
				case 79:
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
	if (func_114(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_173(int iParam0, int iParam1)
{
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
				
				case 79:
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
	if ((func_122(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_117(iParam0, func_121() + 1));
	}
	return iVar0;
}

int func_174(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
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
		if (func_129(iParam0))
		{
			if (iParam3 != func_9())
			{
				iVar0 = (iVar0 + func_126(iParam0, func_71(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_9())
		{
			iVar0 = (iVar0 + func_179(iParam0, func_71(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_178(0, iParam1) != -1)
		{
			if (iParam3 != func_9())
			{
				iVar0 = (iVar0 + func_177(func_71(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_176(iParam0))
		{
			iVar0 = (iVar0 + func_175(iParam0));
		}
	}
	return iVar0;
}

int func_175(int iParam0)
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

bool func_176(int iParam0)
{
	return func_175(iParam0) > 0;
}

int func_177(var uParam0, int iParam1)
{
	return 2;
}

int func_178(int iParam0, int iParam1)
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

int func_179(int iParam0, int iParam1)
{
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
			iVar0 = func_561(5326, -1, 0);
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

int func_180(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
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
		if (func_141(iParam0))
		{
			if (iParam3 != func_9())
			{
				iVar0 = (iVar0 + func_133(iParam0, func_71(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_9())
		{
			iVar0 = (iVar0 + func_185(iParam0, func_71(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_184(0, iParam1) != -1)
		{
			if (iParam3 != func_9())
			{
				iVar0 = (iVar0 + func_183(func_71(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_182(iParam0))
		{
			iVar0 = (iVar0 + func_181(iParam0));
		}
	}
	return iVar0;
}

int func_181(int iParam0)
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

bool func_182(int iParam0)
{
	return func_181(iParam0) > 0;
}

int func_183(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (func_136(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_136(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_136(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_136(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_136(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_136(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_136(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_136(iParam1))
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

int func_184(int iParam0, int iParam1)
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

int func_185(int iParam0, int iParam1)
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

int func_186(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
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
			if (func_145(iParam0, func_121() + 1, -1, iParam2) == 1)
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
		if (func_147(iParam0))
		{
			iVar0 = (iVar0 + func_145(iParam0, func_121() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_189(iParam0, func_121() + 1));
	}
	if (!bParam3)
	{
		if (func_188(iParam0))
		{
			iVar0 = (iVar0 + func_187(iParam0));
		}
	}
	return iVar0;
}

int func_187(int iParam0)
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

bool func_188(int iParam0)
{
	return func_187(iParam0) > 0;
}

int func_189(int iParam0, int iParam1)
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

int func_190(int iParam0, int iParam1, int iParam2)
{
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
	iVar0 = (iVar0 + func_193(iParam0, func_121() + 1, iParam2));
	iVar0 = (iVar0 + func_191(iParam0));
	return iVar0;
}

int func_191(int iParam0)
{
	if (func_192(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_192(int iParam0)
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

int func_193(int iParam0, var uParam1, int iParam2)
{
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

int func_194(int iParam0)
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

int func_195(int iParam0, int iParam1, int iParam2, int iParam3)
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
			return func_222(iParam1);
		
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
			return func_219(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_216(iParam1, iParam2, iParam3, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_213(iParam1, iParam2, iParam3, 0);
		
		case 233:
			return func_210(iParam1, iParam2, iParam3, 0);
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_209(iParam1, iParam2);
		
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
			return func_208();
		
		case 218:
			return func_207();
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		case 237:
		case 250:
			return func_206(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_205(iParam1, iParam2);
		
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
			return func_202(iParam1, iParam2, 0, -1);
		
		case 158:
			return func_199(iParam1, iParam2, 0, -1);
		
		case 181:
			return func_196(iParam1, iParam2, 0, -1);
		
		default:
	}
	return 0;
}

int func_196(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 2:
			iVar0 += 6;
			break;
	}
	if (!bParam2)
	{
		if (func_155(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_197(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_197(int iParam0, var uParam1)
{
	if (func_155(iParam0, uParam1))
	{
		return (func_154(iParam0, uParam1) + func_198(iParam0, uParam1));
	}
	return 0;
}

int func_198(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_199(int iParam0, int iParam1, bool bParam2, int iParam3)
{
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
		if (func_161(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_200(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_200(int iParam0, int iParam1)
{
	if (func_161(iParam0, iParam1))
	{
		return (func_160(iParam0, iParam1) + func_201(iParam0, iParam1));
	}
	return 0;
}

int func_201(int iParam0, int iParam1)
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

int func_202(int iParam0, int iParam1, bool bParam2, int iParam3)
{
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
		if (func_167(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_203(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_203(int iParam0, int iParam1)
{
	if (func_167(iParam0, iParam1))
	{
		return (func_166(iParam0, iParam1) + func_204(iParam0, iParam1));
	}
	return 0;
}

int func_204(int iParam0, int iParam1)
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

int func_205(int iParam0, int iParam1)
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

int func_206(int iParam0, int iParam1, int iParam2)
{
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
				case 79:
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

int func_207()
{
	iVar0 = 32;
	return iVar0;
}

int func_208()
{
	iVar0 = 8;
	return iVar0;
}

int func_209(int iParam0, int iParam1)
{
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
				
				case 79:
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
		iVar0 = (iVar0 + func_117(iParam0, func_121() + 1));
	}
	return iVar0;
}

int func_210(int iParam0, int iParam1, int iParam2, bool bParam3)
{
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
		if (func_176(iParam0))
		{
			iVar0 = (iVar0 + func_211(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_211(int iParam0, var uParam1)
{
	if (func_176(iParam0))
	{
		return (func_175(iParam0) + func_212(iParam0, uParam1));
	}
	return 0;
}

int func_212(int iParam0, var uParam1)
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

int func_213(int iParam0, int iParam1, int iParam2, bool bParam3)
{
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
		if (func_182(iParam0))
		{
			iVar0 = (iVar0 + func_214(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_214(int iParam0, int iParam1)
{
	if (func_182(iParam0))
	{
		return (func_181(iParam0) + func_215(iParam0, iParam1));
	}
	return 0;
}

int func_215(int iParam0, int iParam1)
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

int func_216(int iParam0, int iParam1, int iParam2, bool bParam3)
{
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
		if (func_188(iParam0))
		{
			iVar0 = (iVar0 + func_217(iParam0));
		}
	}
	return iVar0;
}

int func_217(int iParam0)
{
	if (func_188(iParam0))
	{
		return (func_187(iParam0) + func_218(iParam0));
	}
	return 0;
}

int func_218(int iParam0)
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

int func_219(int iParam0, int iParam1, var uParam2)
{
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
	iVar0 = (iVar0 + func_220(iParam0));
	return iVar0;
}

int func_220(int iParam0)
{
	if (func_192(iParam0))
	{
		if (func_221(iParam0))
		{
			return 4;
		}
		return 2;
	}
	return 0;
}

int func_221(int iParam0)
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

int func_222(int iParam0)
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

void func_223()
{
	Global_1590535[PLAYER::PLAYER_ID()].f_274[11] = 115;
	func_224(4029, 115, -1, 1);
}

void func_224(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = Global_2548434[iParam0][func_16(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_16(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_16(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_16(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_16(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_16(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_16(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_16(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_16(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_16(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_16(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_16(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_16(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_16(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_16(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_16(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_16(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_16(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_16(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_16(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_16(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_16(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_16(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_16(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_16(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0][func_16(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1][func_16(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2][func_16(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3][func_16(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_16(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_16(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_16(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_16(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_16(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_16(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0][func_16(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1][func_16(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2][func_16(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3][func_16(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4][func_16(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0][func_16(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1][func_16(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2][func_16(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3][func_16(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4][func_16(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0][func_16(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1][func_16(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2][func_16(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3][func_16(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4][func_16(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5][func_16(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4][func_16(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_16(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_16(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_16(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_16(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_16(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_16(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_16(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6][func_16(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5][func_16(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7][func_16(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6][func_16(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8][func_16(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7][func_16(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9][func_16(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8][func_16(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10][func_16(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9][func_16(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11][func_16(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10][func_16(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12][func_16(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11][func_16(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13][func_16(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12][func_16(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14][func_16(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13][func_16(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15][func_16(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14][func_16(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16][func_16(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15][func_16(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17][func_16(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16][func_16(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17][func_16(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18][func_16(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19][func_16(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20][func_16(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_16(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_16(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_16(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_16(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_16(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_16(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_16(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_16(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_16(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_16(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_16(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_16(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_16(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_16(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21][func_16(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23][func_16(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22][func_16(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24][func_16(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23][func_16(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_225(int iParam0)
{
	iVar0 = PLAYER::PLAYER_ID();
	if (func_226(iParam0))
	{
		func_15(5300, iParam0, -1, 1, 0);
		Global_1590535[iVar0].f_274.f_134 = iParam0;
		func_15(6393, iParam0, -1, 1, 0);
	}
}

int func_226(int iParam0)
{
	if (iParam0 > 0 && iParam0 < 11)
	{
		return 1;
	}
	return 0;
}

int func_227(int iParam0)
{
	iVar1 = func_297(PLAYER::PLAYER_ID());
	iVar2 = func_257(iLocal_1126, 0);
	iVar3 = 1704699945;
	iVar4 = func_256(iLocal_1126, 0);
	if (iVar2 == 0)
	{
		iVar3 = 0;
		iVar4 = 0;
	}
	if (func_255(PLAYER::PLAYER_ID(), iParam0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
		return 0;
	}
	StringCopy(&cVar5, func_254(iParam0), 16);
	iVar9 = 0;
	iVar10 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(func_253(iParam0)) * Global_262145.f_78));
	iVar10 = (iVar10 + iVar2);
	iVar11 = (iVar10 - iVar9);
	if (iVar1 == 0)
	{
		if (iVar11 > 0)
		{
			if (!MONEY::NETWORK_CAN_SPEND_MONEY(iVar11, 0, 1, 0, -1, 0))
			{
				func_252(MISC::GET_HASH_KEY(&cVar5), iVar11, 0);
				MISC::SET_BIT(&iLocal_614, 18);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
				return 0;
			}
		}
		iVar12 = iVar10;
	}
	else
	{
		iVar0 = func_292(iVar1);
		iVar12 = (iVar10 - iVar0);
		if (iVar12 > 0)
		{
			if (!MONEY::NETWORK_CAN_SPEND_MONEY(iVar12, 0, 1, 0, -1, 0))
			{
				func_252(MISC::GET_HASH_KEY(&cVar5), iVar11, 0);
				MISC::SET_BIT(&iLocal_614, 18);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
				return 0;
			}
		}
	}
	if (func_251())
	{
		MISC::SET_BIT(&iLocal_614, 7);
		iLocal_788 = 0;
		iVar13 = func_249(iParam0);
		iVar14 = func_248();
		iVar15 = 0;
		if (iVar1 != 0)
		{
			iVar15 = func_249(iVar1);
		}
		iVar16 = -1;
		while (func_236(&iVar16, (iVar10 - iVar2), 0, -1616616027, 235173372, iVar13, iVar14, iVar0, iVar15, iVar4, iVar3, iVar2))
		{
			func_623();
			SYSTEM::WAIT(0);
		}
		func_623();
		switch (iVar16)
		{
			case 0:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
				return 0;
				break;
			
			case 2:
				break;
			
			default:
				break;
		}
	}
	Var17.f_1 = -1;
	Var17.f_3 = -1;
	Var17.f_5 = -1;
	Var17.f_7 = -1;
	Var17.f_9 = -1;
	Var17.f_11 = -1;
	Var17.f_13 = -1;
	Var17.f_15 = -1;
	Var17.f_16 = -1;
	Var17.f_17 = -1;
	Var17.f_18 = -1;
	Var17.f_20 = -1;
	Var17 = MISC::GET_HASH_KEY(func_254(iParam0));
	Var17.f_1 = iVar12;
	Var17.f_2 = MISC::GET_HASH_KEY(func_235(iLocal_1126));
	Var17.f_3 = iVar2;
	Var38.x = Var17;
	Var38.z = Var17.f_2;
	if (Var17.f_3 > 0 && (iVar1 == 0 || iVar1 == 11))
	{
		Var17.f_1 = (Var17.f_1 - Var17.f_3);
	}
	func_234((iVar10 - iVar2));
	if (iVar1 == 0 || iVar1 == 11)
	{
		if (func_251())
		{
			NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_232(func_233()));
		}
		MONEY::_NETWORK_SPENT_PURCHASE_WAREHOUSE(iVar10, &Var17, 0, 1);
	}
	else
	{
		if (iVar0 > 0)
		{
			if (func_251())
			{
				NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_232(func_233()));
			}
			MONEY::NETWORK_EARN_FROM_PROPERTY(iVar0, MISC::GET_HASH_KEY(func_254(iVar1)));
		}
		if (iVar10 > 0)
		{
			if (func_251())
			{
				NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_232(func_233()));
			}
			MONEY::_0x2FAB6614CE22E196(iVar10, &Var38, 0, 1);
		}
	}
	if (func_251())
	{
		func_228(func_233());
	}
	return 1;
}

void func_228(int iParam0)
{
	bVar0 = false;
	if (!func_251())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_231(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4263954[iParam0].f_66);
		}
		func_229(&(Global_4263954[iParam0]));
	}
}

void func_229(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_230(&(uParam0->f_14));
	func_230(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_230(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_231(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

int func_232(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66;
	}
	return -1;
}

int func_233()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_232(iVar0) != 2147483647)
		{
			if (func_231(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_234(int iParam0)
{
	func_15(4030, iParam0, -1, 1, 0);
}

char* func_235(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IE_INTERIOR_BASIC";
		
		case 2:
			return "IE_INTERIOR_BRANDED";
		
		case 1:
			return "IE_INTERIOR_URBAN";
		
		default:
	}
	return "";
}

int func_236(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (MISC::IS_BIT_SET(iLocal_614, 7))
	{
		switch (iLocal_788)
		{
			case 0:
				iVar0 = (iParam1 - iParam7);
				if (iVar0 > 0 && !MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, 0, 1, 0, -1, 0))
				{
					iLocal_788 = 3;
					return 1;
				}
				if (func_244(78225582, iParam3, iParam5, iParam4, 1, iParam1, iParam2, 4, iParam6, 3))
				{
					if (iParam8 == -1261758859 || iParam8 == -1704127755)
					{
					}
					if (iParam8 != 0)
					{
						if (func_244(78225582, iParam3, iParam8, iParam4, 1, iParam7, 1, 4, iParam6, 3))
						{
						}
						else
						{
							iLocal_788 = 3;
							return 1;
						}
					}
					if (iParam9 != 0)
					{
						if (func_244(78225582, -103880010, iParam9, iParam4, 1, iParam11, 1, 4, iParam10, 3))
						{
						}
						else
						{
							iLocal_788 = 3;
							return 1;
						}
					}
					if (iLocal_788 != 3)
					{
						if (func_239())
						{
							iLocal_788 = 1;
						}
						else
						{
							iLocal_788 = 3;
						}
					}
				}
				else
				{
					iLocal_788 = 3;
				}
				break;
			
			case 1:
				if (func_238(func_233()))
				{
					if (func_237(func_233()) == 2)
					{
						iLocal_788 = 2;
					}
					else
					{
						iLocal_788 = 3;
					}
				}
				break;
			
			case 2:
				MISC::CLEAR_BIT(&iLocal_614, 7);
				iLocal_788 = 0;
				HUD::_0x170F541E1CADD1DE(0);
				*iParam0 = 2;
				return 0;
				break;
			
			case 3:
				func_228(func_233());
				MISC::CLEAR_BIT(&iLocal_614, 7);
				iLocal_788 = 0;
				HUD::_0x170F541E1CADD1DE(0);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				*iParam0 = 0;
				return 0;
				break;
		}
		return 1;
	}
	if (iLocal_788 == 3)
	{
		iLocal_788 = 0;
		*iParam0 = 0;
		return 0;
	}
	iLocal_788 = 0;
	*iParam0 = -1;
	return 0;
}

int func_237(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2;
	}
	return 0;
}

int func_238(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2 != 1;
	}
	return 0;
}

int func_239()
{
	bVar0 = false;
	if (!func_251())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_233();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_2()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_243(Global_4263954[iVar2].f_66.f_6, Global_4263954[iVar2].f_66.f_4, Global_4263954[iVar2].f_66.f_1) == 1)
			{
				Global_4264536 = 1;
			}
			return 0;
		}
		if (Global_2461839)
		{
			if (Global_4263954[iVar2].f_66.f_6 == 1067618600 || Global_4263954[iVar2].f_66.f_6 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_232(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4263954[iVar2].f_66.f_13 = 1;
			Global_4263954[iVar2].f_66.f_12 = 0;
			Global_4263954[iVar2].f_66.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4263954[iVar2].f_66.f_8 = 1;
				Global_4263954[iVar2].f_66.f_12 = 1;
			}
			Global_4263954[iVar2].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_240(Global_4263954[iVar2], iVar2);
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	return 0;
}

void func_240(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = 285918879;
	Var0.y = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_242(Var0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_241();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_241()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_242(int iParam0)
{
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_243(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
				return 1;
			
			case 1775876058:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_244(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bVar0 = false;
	if (!func_251())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_2()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_233();
	if (iVar1 == -1)
	{
		if (!func_246(&iVar1, iParam0, iParam1, uParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_245(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4263954[iVar1].f_66.f_1 = Var2.f_2;
		Global_4263954[iVar1].f_66.f_15 = Var2;
		Global_4263954[iVar1].f_66.f_16 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_245(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_246(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bVar0 = false;
	if (!func_251())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_2()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_4263954[iVar1].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4263954[iVar1].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (NETSHOPPING::NET_GAMESERVER_BASKET_END())
		{
			NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
		}
	}
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&uVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_247(uVar3, iParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_247(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_251())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0].f_66.f_2 = 1;
			Global_4263954[iVar0].f_66.f_1 = iParam5;
			Global_4263954[iVar0].f_66.f_3 = iParam1;
			Global_4263954[iVar0].f_66.f_4 = iParam2;
			Global_4263954[iVar0].f_66.f_7 = uParam3;
			Global_4263954[iVar0].f_66.f_5 = 0;
			Global_4263954[iVar0].f_66 = uParam0;
			Global_4263954[iVar0].f_66.f_6 = iParam4;
			Global_4263954[iVar0].f_66.f_11 = uParam8;
			Global_4263954[iVar0].f_66.f_10 = uParam7;
			Global_4263954[iVar0].f_66.f_13 = iParam9;
			Global_4263954[iVar0].f_66.f_12 = 0;
			Global_4263954[iVar0].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4263954[iVar0].f_66.f_18 = 0;
			Global_4264521 = 0;
			if (bParam6)
			{
				Global_4263954[iVar0].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_240(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_248()
{
	return MISC::GET_HASH_KEY("MP_STAT_OWNED_IE_WAREHOUSE_v0");
}

int func_249(int iParam0)
{
	func_250(&sVar0, iParam0);
	return MISC::GET_HASH_KEY(&sVar0);
}

void func_250(char* sParam0, int iParam1)
{
	StringCopy(sParam0, "IE_WH_INDEX_", 64);
	StringIntConCat(sParam0, iParam1, 64);
	StringConCat(sParam0, "_t0_v0", 64);
}

int func_251()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_252(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && NETWORK::IS_STORE_AVAILABLE_TO_USER())
	{
		Global_73993 = iParam0;
		Global_73994 = iParam1;
		Global_73992 = 1;
		Global_4268420 = iParam2;
	}
}

int func_253(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_19120;
		
		case 2:
			return Global_262145.f_19121;
		
		case 3:
			return Global_262145.f_19122;
		
		case 4:
			return Global_262145.f_19123;
		
		case 5:
			return Global_262145.f_19124;
		
		case 6:
			return Global_262145.f_19125;
		
		case 7:
			return Global_262145.f_19126;
		
		case 8:
			return Global_262145.f_19127;
		
		case 9:
			return Global_262145.f_19128;
		
		case 10:
			return Global_262145.f_19129;
		
		default:
	}
	return 0;
}

char* func_254(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_WAREHOUSE_1";
		
		case 2:
			return "MP_WAREHOUSE_2";
		
		case 3:
			return "MP_WAREHOUSE_3";
		
		case 4:
			return "MP_WAREHOUSE_4";
		
		case 5:
			return "MP_WAREHOUSE_5";
		
		case 6:
			return "MP_WAREHOUSE_6";
		
		case 7:
			return "MP_WAREHOUSE_7";
		
		case 8:
			return "MP_WAREHOUSE_8";
		
		case 9:
			return "MP_WAREHOUSE_9";
		
		case 10:
			return "MP_WAREHOUSE_10";
		
		default:
	}
	return "";
}

bool func_255(int iParam0, int iParam1)
{
	return func_297(iParam0) == iParam1;
}

int func_256(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return MISC::GET_HASH_KEY("IEWH_INTERIOR_BASIC_t0_v0");
			}
			else
			{
				return MISC::GET_HASH_KEY("IEWH_INTERIOR_INITIAL_t0_v0");
			}
			break;
		
		case 2:
			return MISC::GET_HASH_KEY("IEWH_INTERIOR_BRANDED_t0_v0");
		
		case 1:
			return MISC::GET_HASH_KEY("IEWH_INTERIOR_URBAN_t0_v0");
	}
	return 0;
}

int func_257(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return Global_262145.f_19130;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			return Global_262145.f_19132;
		
		case 1:
			return Global_262145.f_19131;
	}
	return 0;
}

void func_258(int iParam0, var uParam1)
{
	if (iParam0 == 4)
	{
		return;
	}
	Var0 = { func_284(func_45(iParam0)) };
	bVar3 = func_297(PLAYER::PLAYER_ID()) == iParam0;
	iVar4 = (iParam0 + iLocal_990);
	iVar5 = func_280(iParam0, 0, !bVar3, 0);
	iVar6 = func_280(iParam0, 0, !bVar3, 1);
	iVar7 = func_280(iParam0, 1, !bVar3, 0);
	iVar8 = func_280(iParam0, 1, !bVar3, 1);
	iVar9 = func_280(iParam0, 2, !bVar3, 0);
	iVar10 = func_280(iParam0, 2, !bVar3, 1);
	StringCopy(&cVar11, func_254(iParam0), 16);
	StringCopy(&cVar15, ZONE::GET_NAME_OF_ZONE(Var0), 16);
	StringCopy(&cVar19, func_279(iParam0), 16);
	StringCopy(&cVar23, func_278(iParam0), 16);
	iVar27 = 40;
	iVar28 = uParam1;
	iVar29 = 0;
	iVar30 = -1;
	fVar31 = 0f;
	if (!bVar3)
	{
		iVar28 = 0;
	}
	if (iParam0 == 9 || iParam0 == 10)
	{
		StringCopy(&cVar15, "WH_LISA_1", 16);
	}
	if (bVar3)
	{
		iVar30 = func_559(PLAYER::PLAYER_ID());
		iVar5 = func_277(0, 1);
		iVar29 = func_261();
	}
	if (!func_296(12))
	{
		fVar31 = SYSTEM::TO_FLOAT(func_260(12));
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_608, "ADD_VEHICLE_WAREHOUSE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Var0.x);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Var0.y);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar10);
	func_259(&cVar11);
	func_259(&cVar15);
	func_259(&cVar19);
	GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(&cVar23);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar27);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar28);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar29);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar31);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar30);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_259(char[4] cParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(cParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_260(int iParam0)
{
	if (iParam0 == 8)
	{
		iVar0 = (Global_2514804 - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2514606.f_144)));
		iVar0 = (iVar0 / 1000);
	}
	else
	{
		iVar0 = (Global_262145.f_18842 - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), Global_2514606.f_146)));
		iVar0 = (iVar0 / 1000);
	}
	return iVar0;
}

int func_261()
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		iVar2 = Global_1590535[PLAYER::PLAYER_ID()].f_274.f_134.f_2[iVar0];
		if (iVar2 > 1000)
		{
			iVar2 = (iVar2 - 1000);
		}
		if (iVar2 > 0 && iVar2 < 97)
		{
			iVar1 = (iVar1 + func_262(func_276(iVar2), 6, 0, 0, 0));
		}
		iVar0++;
	}
	return iVar1;
}

int func_262(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_275(iParam0))
	{
		if (bParam3)
		{
			if (func_271(&uVar0, iParam0, 0, -1))
			{
				return uVar0;
			}
		}
		else
		{
			iVar6 = func_270(iParam0);
			iVar7 = 0;
			iVar8 = 0;
			if (func_269(iParam1) && !bParam4)
			{
				iVar8 = func_267(func_268(iVar6));
				iVar7 = func_266(iVar6, bParam4);
			}
			else if (func_265(iParam1) || bParam4)
			{
				iVar8 = func_264(func_268(iVar6));
				iVar7 = func_263(iVar6, bParam4);
			}
			else
			{
				iVar8 = Global_262145.f_18943;
				iVar7 = func_268(iVar6);
			}
			if (bParam2)
			{
				iVar7 = iVar8;
			}
			return iVar7;
		}
	}
	return 0;
}

int func_263(int iParam0, bool bParam1)
{
	iVar0 = SYSTEM::CEIL((IntToFloat(func_268(iParam0)) * Global_262145.f_18947));
	iVar1 = 0;
	if (!bParam1)
	{
		iVar1 = func_264(func_268(iParam0));
	}
	return (iVar0 + iVar1);
}

int func_264(int iParam0)
{
	return SYSTEM::CEIL((IntToFloat(iParam0) * Global_262145.f_18945));
}

int func_265(int iParam0)
{
	switch (iParam0)
	{
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_266(int iParam0, bool bParam1)
{
	iVar0 = SYSTEM::CEIL((IntToFloat(func_268(iParam0)) * Global_262145.f_18946));
	iVar1 = 0;
	if (!bParam1)
	{
		iVar1 = func_267(func_268(iParam0));
	}
	return (iVar0 + iVar1);
}

int func_267(int iParam0)
{
	return SYSTEM::CEIL((IntToFloat(iParam0) * Global_262145.f_18944));
}

int func_268(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return Global_262145.f_18940;
		
		case 2:
			return Global_262145.f_18941;
		
		case 1:
			return Global_262145.f_18942;
		
		default:
	}
	return 0;
}

int func_269(int iParam0)
{
	switch (iParam0)
	{
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_270(int iParam0)
{
	switch (iParam0)
	{
		case 2123327359:
		case 2067820283:
		case 1663218586:
		case 819197656:
		case 1987142870:
		case 1426219628:
		case 234062309:
		case -1829802492:
		case -1660945322:
		case -602287871:
		case -1566741232:
		case 758895617:
			return 3;
		
		case 1887331236:
		case -1291952903:
		case -295689028:
		case -1403128555:
		case -777172681:
		case 784565758:
		case -1757836725:
		case 1102544804:
		case 1011753235:
		case -1311154784:
			return 2;
		
		case 1274868363:
		case -1943285540:
		case 633712403:
		case 223258115:
		case 408192225:
		case 972671128:
		case -142942670:
		case -1297672541:
		case 767087018:
		case -1995326987:
			return 1;
		
		default:
	}
	return 1;
}

int func_271(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	if (iParam3 == 0)
	{
		bVar0 = true;
	}
	else if (iParam3 == 1)
	{
		bVar0 = false;
	}
	iVar1 = -1;
	iVar2 = -1;
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam1))
	{
		bVar3 = false;
		if (iParam1 == 0)
		{
		}
		else if (iParam1 == Global_73804)
		{
		}
		else if (iParam1 == Global_73805)
		{
		}
		else if (iParam1 == Global_73806)
		{
			iVar1 = 500000;
			if (bVar0)
			{
				if (Global_262145.f_21094 >= 0)
				{
					iVar1 = Global_262145.f_21094;
				}
			}
			bVar3 = true;
		}
		else if (iParam1 == Global_73807)
		{
		}
		else if (iParam1 == Global_73808)
		{
		}
		if (!bVar3)
		{
			return 0;
		}
	}
	switch (iParam1)
	{
		case -1216765807:
			iVar1 = 1000000;
			break;
		
		case 1672195559:
			iVar1 = 9000;
			break;
		
		case -1809822327:
			iVar1 = 12000;
			break;
		
		case -1903012613:
			iVar1 = 26000;
			break;
		
		case -2140431165:
			iVar1 = 16000;
			if (bVar0)
			{
				if (Global_262145.f_17451 >= 0)
				{
					iVar1 = Global_262145.f_17451;
				}
			}
			break;
		
		case -808831384:
			iVar1 = 90000;
			break;
		
		case 142944341:
			iVar1 = 90000;
			break;
		
		case -1041692462:
			iVar1 = 90000;
			break;
		
		case -114291515:
			iVar1 = 10000;
			break;
		
		case -891462355:
			iVar1 = 10000;
			break;
		
		case 1126868326:
			iVar1 = 16000;
			break;
		
		case -16948145:
			iVar1 = 30000;
			break;
		
		case 2072156101:
			iVar1 = 30000;
			break;
		
		case 1739845664:
			iVar1 = 30000;
			break;
		
		case 850565707:
			iVar1 = 27000;
			if (bVar0)
			{
				if (Global_262145.f_24238 >= 0)
				{
					iVar1 = Global_262145.f_24238;
				}
			}
			break;
		
		case -2128233223:
			iVar1 = 8000;
			break;
		
		case -48031959:
			iVar1 = 62000;
			if (bVar0)
			{
				iVar1 = Global_262145.f_27795;
			}
			break;
		
		case -344943009:
			iVar1 = 16000;
			break;
		
		case 1069929536:
			iVar1 = 23000;
			break;
		
		case -1435919434:
			iVar1 = 12000;
			break;
		
		case -1987130134:
			if (!bParam2)
			{
				iVar1 = 298500;
				if (bVar0)
				{
					iVar1 = Global_262145.f_27721;
				}
			}
			else
			{
				iVar1 = 398000;
				if (bVar0)
				{
					iVar1 = Global_262145.f_27720;
				}
				iVar2 = 298500;
				if (bVar0)
				{
					iVar2 = Global_262145.f_27721;
				}
			}
			break;
		
		case 1747439474:
			if (!bParam2)
			{
				iVar1 = 1680000;
				if (bVar0)
				{
					iVar1 = Global_262145.f_27723;
				}
			}
			else
			{
				iVar1 = 2240000;
				if (bVar0)
				{
					iVar1 = Global_262145.f_27722;
				}
				iVar2 = 1680000;
				if (bVar0)
				{
					iVar2 = Global_262145.f_27723;
				}
			}
			break;
		
		case -233098306:
			iVar1 = 25000;
			break;
		
		case 121658888:
			iVar1 = 25000;
			break;
		
		case -682211828:
			iVar1 = 28000;
			break;
		
		case -304802106:
			iVar1 = 35000;
			break;
		
		case 736902334:
			iVar1 = 96000;
			break;
		
		case -1696146015:
			iVar1 = 150000;
			break;
		
		case -1346687836:
			iVar1 = 13000;
			break;
		
		case -907477130:
			if (bParam2)
			{
				iVar1 = 450000;
				if (bVar0)
				{
					iVar1 = Global_262145.f_27719;
				}
			}
			else
			{
				iVar1 = 598500;
				if (bVar0)
				{
					iVar1 = Global_262145.f_27718;
				}
				iVar2 = 450000;
				if (bVar0)
				{
					iVar2 = Global_262145.f_27719;
				}
			}
			break;
		
		case -1743316013:
			iVar1 = 13000;
			break;
		
		case 893081117:
			iVar1 = 13000;
			break;
		
		case 2072687711:
			iVar1 = 195000;
			break;
		
		case 11251904:
			iVar1 = 40000;
			break;
		
		case 2006918058:
			iVar1 = 60000;
			break;
		
		case -789894171:
			iVar1 = 70000;
			break;
		
		case -1311154784:
			iVar1 = 650000;
			break;
		
		case 330661258:
			iVar1 = 185000;
			break;
		
		case -1045541610:
			iVar1 = 85000;
			break;
		
		case 108773431:
			iVar1 = 55000;
			break;
		
		case 2006142190:
			iVar1 = 20000;
			break;
		
		case -1130810103:
			iVar1 = 25000;
			break;
		
		case 80636076:
			iVar1 = 35000;
			if (bVar0 && Global_262145.f_7174 >= 0)
			{
				iVar1 = Global_262145.f_7174;
			}
			if (bParam2)
			{
				iVar2 = iVar1;
				iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(35000) * 0.75f));
				if (bVar0 && Global_262145.f_25150 >= 0)
				{
					iVar1 = Global_262145.f_25150;
				}
			}
			break;
		
		case -1670998136:
			iVar1 = 12000;
			break;
		
		case 1177543287:
			iVar1 = 120000;
			break;
		
		case -394074634:
			iVar1 = 120000;
			break;
		
		case -566387422:
			if (!bParam2)
			{
				iVar1 = 95000;
				if (bVar0)
				{
					if (Global_262145.f_19176 >= 0)
					{
						iVar1 = Global_262145.f_19176;
					}
				}
			}
			else
			{
				iVar1 = 0;
				if (bVar0)
				{
					if (Global_262145.f_8143 >= 0)
					{
						iVar1 = Global_262145.f_8143;
					}
				}
			}
			break;
		
		case -685276541:
			iVar1 = 8000;
			break;
		
		case -1883002148:
			iVar1 = 5000;
			break;
		
		case -1241712818:
			iVar1 = 5000;
			break;
		
		case -1291952903:
			iVar1 = 795000;
			break;
		
		case -5153954:
			iVar1 = 205000;
			break;
		
		case -591610296:
			iVar1 = 80000;
			break;
		
		case 55628203:
			iVar1 = 5000;
			break;
		
		case -391594584:
			iVar1 = 100000;
			break;
		
		case -89291282:
			iVar1 = 95000;
			break;
		
		case -1995326987:
			iVar1 = 145000;
			break;
		
		case -1137532101:
			iVar1 = 50000;
			if (bVar0)
			{
				if (Global_262145.f_24239 >= 0)
				{
					iVar1 = Global_262145.f_24239;
				}
			}
			break;
		
		case 1909141499:
			iVar1 = 24000;
			break;
		
		case 499169875:
			iVar1 = 36000;
			break;
		
		case 2016857647:
			iVar1 = 9000;
			if (bVar0)
			{
				if (Global_262145.f_24232 >= 0)
				{
					iVar1 = Global_262145.f_24232;
				}
			}
			break;
		
		case -1800170043:
			iVar1 = 32000;
			break;
		
		case -1745203402:
			iVar1 = 16000;
			break;
		
		case -1775728740:
			iVar1 = 35000;
			break;
		
		case -1543762099:
			iVar1 = 29000;
			break;
		
		case 884422927:
			iVar1 = 42000;
			if (bVar0)
			{
				if (Global_262145.f_24240 >= 0)
				{
					iVar1 = Global_262145.f_24240;
				}
			}
			break;
		
		case 301427732:
			iVar1 = 15000;
			break;
		
		case 37348240:
			iVar1 = 90000;
			break;
		
		case 418536135:
			iVar1 = 440000;
			break;
		
		case -1289722222:
			iVar1 = 9000;
			break;
		
		case 886934177:
			iVar1 = 16000;
			break;
		
		case -1177863319:
			iVar1 = 18000;
			break;
		
		case -624529134:
			iVar1 = 60000;
			break;
		
		case 1051415893:
			iVar1 = 475000;
			break;
		
		case 544021352:
			iVar1 = 100000;
			break;
		
		case 1269098716:
			iVar1 = 58000;
			break;
		
		case 469291905:
			iVar1 = 865000;
			if (bVar0)
			{
				iVar1 = Global_262145.f_27794;
			}
			break;
		
		case 1938952078:
			if (!bParam2)
			{
				iVar1 = 2471250;
				if (bVar0)
				{
					iVar1 = Global_262145.f_27717;
				}
			}
			else
			{
				iVar1 = 3295000;
				if (bVar0)
				{
					iVar1 = Global_262145.f_27716;
				}
				iVar2 = 2471250;
				if (bVar0)
				{
					iVar2 = Global_262145.f_27717;
				}
			}
			break;
		
		case -2124201592:
			iVar1 = 10000;
			if (bVar0)
			{
				if (Global_262145.f_28569 >= 0)
				{
					iVar1 = Global_262145.f_28569;
				}
			}
			break;
		
		case 914654722:
			iVar1 = 30000;
			break;
		
		case -310465116:
			iVar1 = 30000;
			break;
		
		case -433375717:
			iVar1 = 490000;
			break;
		
		case -634879114:
			iVar1 = 12000;
			break;
		
		case 1032823388:
			iVar1 = 120000;
			break;
		
		case -1461482751:
			iVar1 = 130000;
			break;
		
		case 1348744438:
			iVar1 = 82000;
			break;
		
		case -511601230:
			iVar1 = 80000;
			break;
		
		case -808457413:
			iVar1 = 50000;
			if (bVar0)
			{
				if (Global_262145.f_24236 >= 0)
				{
					iVar1 = Global_262145.f_24236;
				}
			}
			break;
		
		case -909201658:
			iVar1 = 9000;
			break;
		
		case -377465520:
			iVar1 = 24000;
			break;
		
		case 1830407356:
			iVar1 = 12000;
			if (bVar0)
			{
				if (Global_262145.f_28570 >= 0)
				{
					iVar1 = Global_262145.f_28570;
				}
			}
			break;
		
		case -2095439403:
			iVar1 = 20000;
			break;
		
		case -1450650718:
			iVar1 = 25000;
			if (bVar0)
			{
				if (Global_262145.f_24235 >= 0)
				{
					iVar1 = Global_262145.f_24235;
				}
			}
			break;
		
		case 741586030:
			iVar1 = 35000;
			break;
		
		case -1883869285:
			iVar1 = 10000;
			break;
		
		case -1150599089:
			iVar1 = 9000;
			break;
		
		case -1651067813:
			iVar1 = 32000;
			break;
		
		case 1645267888:
			iVar1 = 9000;
			break;
		
		case 1933662059:
			iVar1 = 9000;
			break;
		
		case -1934452204:
			iVar1 = 118000;
			break;
		
		case 1737773231:
			iVar1 = 136000;
			break;
		
		case -667151410:
			iVar1 = 6000;
			break;
		
		case -1207771834:
			iVar1 = 7000;
			break;
		
		case -2045594037:
			iVar1 = 22000;
			break;
		
		case -14495224:
			iVar1 = 8000;
			break;
		
		case 2136773105:
			iVar1 = 85000;
			break;
		
		case -893578776:
			iVar1 = 10000;
			break;
		
		case -227741703:
			iVar1 = 10000;
			if (bVar0)
			{
				if (Global_262145.f_24233 >= 0)
				{
					iVar1 = Global_262145.f_24233;
				}
			}
			break;
		
		case 1162065741:
			iVar1 = 13000;
			break;
		
		case -1685021548:
			iVar1 = 15000;
			if (bVar0)
			{
				if (Global_262145.f_14514 >= 0)
				{
					iVar1 = Global_262145.f_14514;
				}
			}
			break;
		
		case -599568815:
			iVar1 = 35000;
			break;
		
		case 788045382:
			iVar1 = 7000;
			break;
		
		case -1189015600:
			iVar1 = 45000;
			break;
		
		case 989381445:
			iVar1 = 45000;
			break;
		
		case -1255452397:
			iVar1 = 65000;
			break;
		
		case -746882698:
			iVar1 = 80000;
			break;
		
		case -1030275036:
			iVar1 = 16899;
			break;
		
		case 1221512915:
			iVar1 = 30000;
			break;
		
		case 1349725314:
			iVar1 = 60000;
			break;
		
		case 873639469:
			iVar1 = 60000;
			break;
		
		case 1337041428:
			iVar1 = 60000;
			if (bVar0)
			{
				if (Global_262145.f_24237 >= 0)
				{
					iVar1 = Global_262145.f_24237;
				}
			}
			break;
		
		case -810318068:
			iVar1 = 15000;
			break;
		
		case 728614474:
			iVar1 = 15000;
			break;
		
		case -1477580979:
			iVar1 = 10000;
			break;
		
		case 1545842587:
			iVar1 = 1000000;
			break;
		
		case -2098947590:
			iVar1 = 1000000;
			break;
		
		case 1723137093:
			iVar1 = 10000;
			break;
		
		case -1961627517:
			iVar1 = 30000;
			break;
		
		case 970598228:
			iVar1 = 12000;
			break;
		
		case 1123216662:
			iVar1 = 250000;
			break;
		
		case 384071873:
			iVar1 = 99000;
			break;
		
		case -1894894188:
			iVar1 = 38000;
			break;
		
		case -1008861746:
			iVar1 = 55000;
			break;
		
		case -956048545:
			iVar1 = 13000;
			break;
		
		case 464687292:
			iVar1 = 30000;
			if (bVar0)
			{
				if (Global_262145.f_14515 >= 0)
				{
					iVar1 = Global_262145.f_14515;
				}
			}
			break;
		
		case 1531094468:
			iVar1 = 30000;
			if (bVar0)
			{
				if (Global_262145.f_14515 >= 0)
				{
					iVar1 = Global_262145.f_14515;
				}
			}
			break;
		
		case 1762279763:
			iVar1 = 30000;
			if (bVar0)
			{
				if (Global_262145.f_14515 >= 0)
				{
					iVar1 = Global_262145.f_14515;
				}
			}
			break;
		
		case -2033222435:
			iVar1 = 30000;
			if (bVar0)
			{
				if (Global_262145.f_14515 >= 0)
				{
					iVar1 = Global_262145.f_14515;
				}
			}
			break;
		
		case 338562499:
			iVar1 = 240000;
			break;
		
		case -140902153:
			iVar1 = 9000;
			break;
		
		case -825837129:
			iVar1 = 21000;
			break;
		
		case -1622444098:
			iVar1 = 80000;
			break;
		
		case 523724515:
			iVar1 = 5000;
			break;
		
		case 1777363799:
			iVar1 = 15000;
			break;
		
		case 65402552:
			iVar1 = 16000;
			break;
		
		case -1122289213:
			iVar1 = 50000;
			break;
		
		case -1193103848:
			iVar1 = 65000;
			break;
		
		case 1131912276:
			iVar1 = 500;
			break;
		
		case -186537451:
			iVar1 = 1000;
			break;
		
		case 1127861609:
			iVar1 = 2500;
			break;
		
		case -1233807380:
			iVar1 = 2500;
			break;
		
		case -400295096:
			iVar1 = 2500;
			break;
		
		case 448402357:
			iVar1 = 3000;
			break;
		
		case 758895617:
			if (bVar0)
			{
				iVar1 = 1000000;
			}
			else
			{
				iVar1 = 10000000;
			}
			break;
	}
	if (bVar0 || iParam3 == 1)
	{
		switch (iParam1)
		{
			case -1216765807:
				iVar1 = 1000000;
				break;
			
			case 1283517198:
				iVar1 = 550000;
				break;
			
			case 1672195559:
				iVar1 = 9000;
				break;
			
			case 837858166:
				iVar1 = 4000000;
				break;
			
			case 142944341:
				iVar1 = 90000;
				break;
			
			case -1041692462:
				iVar1 = 105000;
				break;
			
			case -823509173:
				iVar1 = 450000;
				break;
			
			case -114291515:
				iVar1 = 15000;
				break;
			
			case -891462355:
				iVar1 = 15000;
				break;
			
			case 1126868326:
				iVar1 = 16000;
				break;
			
			case -16948145:
				iVar1 = 30000;
				break;
			
			case -2128233223:
				iVar1 = 8000;
				break;
			
			case 1131912276:
				iVar1 = 800;
				break;
			
			case -1696146015:
				iVar1 = 155000;
				break;
			
			case -713569950:
				iVar1 = 500000;
				break;
			
			case 788747387:
				iVar1 = 2000000;
				break;
			
			case 2072687711:
				iVar1 = 195000;
				break;
			
			case 11251904:
				iVar1 = 40000;
				break;
			
			case -50547061:
				iVar1 = 185000;
				break;
			
			case -1311154784:
				iVar1 = 650000;
				break;
			
			case -2072933068:
				iVar1 = 525000;
				break;
			
			case 330661258:
				iVar1 = 185000;
				break;
			
			case -1045541610:
				iVar1 = 100000;
				break;
			
			case 108773431:
				iVar1 = 138000;
				break;
			
			case 448402357:
				iVar1 = 800;
				break;
			
			case 321739290:
				iVar1 = 225000;
				break;
			
			case -644710429:
				iVar1 = 240000;
				break;
			
			case -1130810103:
				iVar1 = 25000;
				break;
			
			case -1670998136:
				iVar1 = 12000;
				break;
			
			case 1177543287:
				iVar1 = 70000;
				break;
			
			case -394074634:
				iVar1 = 70000;
				break;
			
			case -2130482718:
				iVar1 = 1000000;
				break;
			
			case 970356638:
				iVar1 = 275000;
				break;
			
			case -566387422:
				if (!bParam2)
				{
					iVar1 = 95000;
					if (bVar0)
					{
						if (Global_262145.f_19176 >= 0)
						{
							iVar1 = Global_262145.f_19176;
						}
					}
				}
				else
				{
					iVar1 = 0;
					if (bVar0)
					{
						if (Global_262145.f_8143 >= 0)
						{
							iVar1 = Global_262145.f_8143;
						}
					}
				}
				break;
			
			case -1291952903:
				iVar1 = 795000;
				break;
			
			case -5153954:
				iVar1 = 205000;
				break;
			
			case 55628203:
				iVar1 = 5000;
				break;
			
			case -391594584:
				iVar1 = 90000;
				break;
			
			case -89291282:
				iVar1 = 95000;
				break;
			
			case -1995326987:
				iVar1 = 145000;
				break;
			
			case 744705981:
				iVar1 = 1300000;
				break;
			
			case 1909141499:
				iVar1 = 24000;
				break;
			
			case -1800170043:
				iVar1 = 32000;
				break;
			
			case 301427732:
				iVar1 = 15000;
				break;
			
			case 37348240:
				iVar1 = 90000;
				break;
			
			case 418536135:
				iVar1 = 440000;
				break;
			
			case -1177863319:
				iVar1 = 18000;
				break;
			
			case 1051415893:
				iVar1 = 350000;
				break;
			
			case 861409633:
				iVar1 = 299000;
				break;
			
			case -120287622:
				iVar1 = 15000;
				break;
			
			case 544021352:
				iVar1 = 100000;
				break;
			
			case 621481054:
				iVar1 = 1500000;
				break;
			
			case -1746576111:
				iVar1 = 300000;
				break;
			
			case -1043459709:
				iVar1 = 413990;
				break;
			
			case -1660661558:
				iVar1 = 780000;
				break;
			
			case -433375717:
				iVar1 = 490000;
				break;
			
			case 904750859:
				iVar1 = 27000;
				break;
			
			case 1032823388:
				iVar1 = 120000;
				break;
			
			case -1461482751:
				iVar1 = 130000;
				break;
			
			case -511601230:
				iVar1 = 80000;
				break;
			
			case -909201658:
				iVar1 = 9000;
				break;
			
			case 1507916787:
				iVar1 = 9000;
				break;
			
			case -1934452204:
				iVar1 = 132000;
				break;
			
			case 1737773231:
				iVar1 = 140000;
				break;
			
			case -1098802077:
				iVar1 = 30000;
				break;
			
			case 2136773105:
				iVar1 = 85000;
				break;
			
			case -893578776:
				iVar1 = 10000;
				break;
			
			case 788045382:
				iVar1 = 7000;
				break;
			
			case -1189015600:
				iVar1 = 45000;
				break;
			
			case -746882698:
				iVar1 = 80000;
				break;
			
			case -186537451:
				iVar1 = 2000;
				break;
			
			case -1214505995:
				iVar1 = 1150000;
				break;
			
			case 400514754:
				iVar1 = 196621;
				break;
			
			case 1545842587:
				iVar1 = 850000;
				break;
			
			case -2098947590:
				iVar1 = 875000;
				break;
			
			case -1961627517:
				iVar1 = 30000;
				break;
			
			case -2122757008:
				iVar1 = 250000;
				break;
			
			case -282946103:
				iVar1 = 25160;
				break;
			
			case 1123216662:
				iVar1 = 250000;
				break;
			
			case 384071873:
				iVar1 = 110000;
				break;
			
			case 1981688531:
				iVar1 = 5000000;
				break;
			
			case 1127861609:
				iVar1 = 10000;
				break;
			
			case -1233807380:
				iVar1 = 10000;
				break;
			
			case -400295096:
				iVar1 = 10000;
				break;
			
			case 290013743:
				iVar1 = 22000;
				break;
			
			case 338562499:
				iVar1 = 240000;
				break;
			
			case -140902153:
				iVar1 = 9000;
				break;
			
			case -1673356438:
				iVar1 = 450000;
				break;
			
			case -825837129:
				iVar1 = 21000;
				break;
			
			case -1622444098:
				iVar1 = 150000;
				break;
			
			case -1122289213:
				iVar1 = 60000;
				break;
			
			case -1193103848:
				iVar1 = 65000;
				break;
			
			case 758895617:
				iVar1 = 950000;
				break;
		}
		switch (iParam1)
		{
			case 837858166:
				iVar1 = 1825000;
				break;
			
			case -1269889662:
				iVar1 = 69000;
				break;
			
			case -1435919434:
				iVar1 = 25000;
				break;
			
			case 788747387:
				iVar1 = 1750000;
				break;
			
			case 1682114128:
				iVar1 = 25000;
				break;
			
			case 1770332643:
				iVar1 = 15000;
				break;
			
			case 534258863:
				iVar1 = 1000000;
				break;
			
			case 744705981:
				iVar1 = 1300000;
				break;
			
			case 621481054:
				iVar1 = 1625000;
				break;
			
			case -2064372143:
				iVar1 = 87000;
				break;
			
			case 1830407356:
				iVar1 = 38000;
				if (bVar0)
				{
					if (Global_262145.f_28570 >= 0)
					{
						iVar1 = Global_262145.f_28570;
					}
				}
				break;
			
			case 782665360:
				iVar1 = 1500000;
				if (bVar0)
				{
					if (Global_262145.f_4070 >= 0)
					{
						iVar1 = Global_262145.f_4070;
					}
				}
				break;
			
			case 627094268:
				iVar1 = 45000;
				if (bVar0)
				{
					if (Global_262145.f_24234 >= 0)
					{
						iVar1 = Global_262145.f_24234;
					}
				}
				break;
			
			case 873639469:
				iVar1 = 95000;
				break;
			
			case -1214505995:
				iVar1 = 1150000;
				break;
			
			case 699456151:
				iVar1 = 11000;
				break;
			
			case -1311240698:
				iVar1 = 5000;
				break;
			
			case 1981688531:
				iVar1 = 2000000;
				break;
			
			case -442313018:
				iVar1 = 32000;
				break;
		}
		switch (iParam1)
		{
			case -1435919434:
				iVar1 = 25000;
				if (bVar0)
				{
					if (Global_262145.f_4712 >= 0)
					{
						iVar1 = Global_262145.f_4712;
					}
				}
				break;
			
			case -1661854193:
				iVar1 = 20000;
				if (bVar0 || iParam3 == 1)
				{
					iVar1 = 20000;
					if (Global_262145.f_4713 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_4713;
					}
				}
				break;
			
			case -1207771834:
				iVar1 = 3000;
				break;
			
			case -599568815:
				iVar1 = 35000;
				break;
			
			case -1453280962:
				iVar1 = 8000;
				break;
			
			case 989381445:
				iVar1 = 38000;
				break;
		}
		switch (iParam1)
		{
			case -1809822327:
				iVar1 = 12000;
				break;
			
			case -1903012613:
				iVar1 = 26000;
				if (bVar0)
				{
					if (Global_262145.f_6571 >= 0)
					{
						iVar1 = Global_262145.f_6571;
					}
				}
				break;
			
			case 1069929536:
				iVar1 = 23000;
				if (bVar0)
				{
					if (Global_262145.f_6572 >= 0)
					{
						iVar1 = Global_262145.f_6572;
					}
				}
				break;
			
			case 2006918058:
				iVar1 = 60000;
				if (bVar0 || iParam3 == 1)
				{
					iVar1 = 60000;
					if (Global_262145.f_4027 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_4027;
					}
				}
				break;
			
			case -789894171:
				iVar1 = 60000;
				if (bVar0 || iParam3 == 1)
				{
					iVar1 = 70000;
					if (Global_262145.f_6573 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_6573;
					}
				}
				break;
			
			case -1775728740:
				iVar1 = 35000;
				if (bVar0)
				{
					if (Global_262145.f_6574 >= 0)
					{
						iVar1 = Global_262145.f_6574;
					}
				}
				break;
			
			case -1289722222:
				iVar1 = 9000;
				if (bVar0)
				{
					if (Global_262145.f_6575 >= 0)
					{
						iVar1 = Global_262145.f_6575;
					}
				}
				break;
			
			case 886934177:
				iVar1 = 16000;
				if (bVar0)
				{
					if (Global_262145.f_6576 >= 0)
					{
						iVar1 = Global_262145.f_6576;
					}
				}
				break;
			
			case -310465116:
				iVar1 = 30000;
				if (bVar0)
				{
					if (Global_262145.f_6577 >= 0)
					{
						iVar1 = Global_262145.f_6577;
					}
				}
				break;
			
			case -1883869285:
				iVar1 = 10000;
				if (bVar0)
				{
					if (Global_262145.f_6578 >= 0)
					{
						iVar1 = Global_262145.f_6578;
					}
				}
				break;
			
			case -1651067813:
				iVar1 = 32000;
				if (bVar0)
				{
					if (Global_262145.f_6579 >= 0)
					{
						iVar1 = Global_262145.f_6579;
					}
				}
				break;
			
			case 1645267888:
				iVar1 = 9000;
				if (bVar0)
				{
					if (Global_262145.f_6580 >= 0)
					{
						iVar1 = Global_262145.f_6580;
					}
				}
				break;
			
			case -667151410:
				iVar1 = 6000;
				if (bVar0)
				{
					if (Global_262145.f_6600 >= 0)
					{
						iVar1 = Global_262145.f_6600;
					}
				}
				break;
			
			case -1477580979:
				iVar1 = 10000;
				if (bVar0)
				{
					if (Global_262145.f_6581 >= 0)
					{
						iVar1 = Global_262145.f_6581;
					}
				}
				break;
			
			case 1723137093:
				iVar1 = 10000;
				if (bVar0)
				{
					if (Global_262145.f_6582 >= 0)
					{
						iVar1 = Global_262145.f_6582;
					}
				}
				break;
			
			case 1777363799:
				iVar1 = 15000;
				if (bVar0)
				{
					if (Global_262145.f_6583 >= 0)
					{
						iVar1 = Global_262145.f_6583;
					}
				}
				break;
			
			case -50547061:
				iVar1 = 1790000;
				if (bVar0)
				{
					if (Global_262145.f_16106 >= 0)
					{
						iVar1 = Global_262145.f_16106;
					}
				}
				break;
			
			case 1621617168:
				iVar1 = 1995000;
				if (bVar0)
				{
					if (Global_262145.f_16107 >= 0)
					{
						iVar1 = Global_262145.f_16107;
					}
				}
				break;
			
			case -2100640717:
				iVar1 = 1250000;
				if (bVar0)
				{
					if (Global_262145.f_16113 >= 0)
					{
						iVar1 = Global_262145.f_16113;
					}
				}
				break;
			
			case -1295027632:
				iVar1 = 1900000;
				if (bVar0)
				{
					if (Global_262145.f_16111 >= 0)
					{
						iVar1 = Global_262145.f_16111;
					}
				}
				break;
			
			case -305727417:
				iVar1 = 1110000;
				if (bVar0)
				{
					if (Global_262145.f_16109 >= 0)
					{
						iVar1 = Global_262145.f_16109;
					}
				}
				break;
			
			case -1930048799:
				iVar1 = 900000;
				if (bVar0)
				{
					if (Global_262145.f_16115 >= 0)
					{
						iVar1 = Global_262145.f_16115;
					}
				}
				break;
			
			case 2123327359:
				iVar1 = 2700000;
				if (bVar0)
				{
					if (Global_262145.f_16120 >= 0)
					{
						iVar1 = Global_262145.f_16120;
					}
				}
				break;
			
			case 1426219628:
				iVar1 = 1750000;
				if (bVar0)
				{
					if (Global_262145.f_16110 >= 0)
					{
						iVar1 = Global_262145.f_16110;
					}
				}
				break;
			
			case 1274868363:
				iVar1 = 610000;
				if (bVar0)
				{
					if (Global_262145.f_16108 >= 0)
					{
						iVar1 = Global_262145.f_16108;
					}
				}
				break;
			
			case 1203490606:
				iVar1 = 253000;
				if (bVar0)
				{
					if (Global_262145.f_16116 >= 0)
					{
						iVar1 = Global_262145.f_16116;
					}
				}
				break;
			
			case -432008408:
				iVar1 = 522000;
				if (bVar0)
				{
					if (Global_262145.f_16117 >= 0)
					{
						iVar1 = Global_262145.f_16117;
					}
				}
				break;
			
			case -1757836725:
				iVar1 = 695000;
				if (bVar0)
				{
					if (Global_262145.f_16118 >= 0)
					{
						iVar1 = Global_262145.f_16118;
					}
				}
				break;
			
			case -1829802492:
				iVar1 = 1135000;
				if (bVar0)
				{
					if (Global_262145.f_16119 >= 0)
					{
						iVar1 = Global_262145.f_16119;
					}
				}
				break;
			
			case 234062309:
				iVar1 = 1595000;
				if (bVar0)
				{
					if (Global_262145.f_15583 >= 0)
					{
						iVar1 = Global_262145.f_15583;
					}
				}
				break;
			
			case 1475773103:
				iVar1 = 130000;
				if (bVar0)
				{
					if (Global_262145.f_16112 >= 0)
					{
						iVar1 = Global_262145.f_16112;
					}
				}
				break;
			
			case -1845487887:
				iVar1 = 2295000;
				if (bVar0)
				{
					if (Global_262145.f_16114 >= 0)
					{
						iVar1 = Global_262145.f_16114;
					}
				}
				break;
			
			case -1232836011:
				iVar1 = 2475000;
				if (bVar0)
				{
					if (Global_262145.f_16887 >= 0)
					{
						iVar1 = Global_262145.f_16887;
					}
				}
				break;
			
			case -777172681:
				if (!bParam2)
				{
					iVar1 = 701000;
					if (bVar0)
					{
						if (Global_262145.f_16888 >= 0)
						{
							iVar1 = Global_262145.f_16888;
						}
					}
				}
				else
				{
					iVar1 = 0;
				}
				break;
			
			case 1887331236:
				iVar1 = 816000;
				if (bVar0)
				{
					if (Global_262145.f_16889 >= 0)
					{
						iVar1 = Global_262145.f_16889;
					}
				}
				break;
			
			case 1549126457:
				iVar1 = 155000;
				if (bVar0)
				{
					if (Global_262145.f_16890 >= 0)
					{
						iVar1 = Global_262145.f_16890;
					}
				}
				break;
			
			case 101905590:
				iVar1 = 550000;
				if (bVar0)
				{
					if (Global_262145.f_16891 >= 0)
					{
						iVar1 = Global_262145.f_16891;
					}
				}
				break;
			
			case -663299102:
				iVar1 = 695000;
				if (bVar0)
				{
					if (Global_262145.f_16892 >= 0)
					{
						iVar1 = Global_262145.f_16892;
					}
				}
				break;
			
			case 683047626:
				iVar1 = 250000;
				if (bVar0)
				{
					if (Global_262145.f_16893 >= 0)
					{
						iVar1 = Global_262145.f_16893;
					}
				}
				break;
			
			case 390201602:
				iVar1 = 225000;
				if (bVar0)
				{
					if (Global_262145.f_16894 >= 0)
					{
						iVar1 = Global_262145.f_16894;
					}
				}
				break;
			
			case 86520421:
				iVar1 = 95000;
				if (bVar0)
				{
					if (Global_262145.f_16895 >= 0)
					{
						iVar1 = Global_262145.f_16895;
					}
				}
				break;
			
			case 2067820283:
				iVar1 = 2550000;
				if (bVar0)
				{
					if (Global_262145.f_16885 >= 0)
					{
						iVar1 = Global_262145.f_16885;
					}
				}
				break;
			
			case 482197771:
				iVar1 = 1735000;
				if (bVar0)
				{
					if (Global_262145.f_16896 >= 0)
					{
						iVar1 = Global_262145.f_16896;
					}
				}
				break;
			
			case 819197656:
				iVar1 = 1995000;
				if (bVar0)
				{
					if (Global_262145.f_16884 >= 0)
					{
						iVar1 = Global_262145.f_16884;
					}
				}
				break;
			
			case -2103821244:
				if (!bParam2)
				{
					iVar1 = 1300000;
					if (bVar0)
					{
						if (Global_262145.f_16898 >= 0)
						{
							iVar1 = Global_262145.f_16898;
						}
					}
				}
				else
				{
					iVar1 = 1385000;
					if (bVar0)
					{
						if (Global_262145.f_16899 >= 0)
						{
							iVar1 = Global_262145.f_16899;
						}
					}
				}
				break;
			
			case -1071380347:
				iVar1 = 995000;
				if (bVar0)
				{
					if (Global_262145.f_16886 >= 0)
					{
						iVar1 = Global_262145.f_16886;
					}
				}
				break;
			
			case 741090084:
				iVar1 = 120000;
				if (bVar0 && Global_262145.f_16897 >= 0)
				{
					iVar1 = Global_262145.f_16897;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(120000) * 0.75f));
					if (bVar0 && Global_262145.f_25153 >= 0)
					{
						iVar1 = Global_262145.f_25153;
					}
				}
				break;
			
			case 2035069708:
				iVar1 = 264000;
				if (bVar0)
				{
					if (Global_262145.f_17456 >= 0)
					{
						iVar1 = Global_262145.f_17456;
					}
				}
				break;
			
			case -1606187161:
				iVar1 = 100000;
				if (bVar0)
				{
					if (Global_262145.f_17459 >= 0)
					{
						iVar1 = Global_262145.f_17459;
					}
				}
				break;
			
			case 822018448:
				if (bParam2)
				{
					iVar1 = 309000;
					if (bVar0)
					{
						if (Global_262145.f_27728 >= 0)
						{
							iVar1 = Global_262145.f_27728;
						}
					}
				}
				else
				{
					iVar1 = 412000;
					if (bVar0)
					{
						if (Global_262145.f_17455 >= 0)
						{
							iVar1 = Global_262145.f_17455;
						}
					}
					iVar2 = 309000;
					if (bVar0)
					{
						if (Global_262145.f_27728 >= 0)
						{
							iVar2 = Global_262145.f_27728;
						}
					}
				}
				break;
			
			case -2115793025:
				iVar1 = 116000;
				if (bVar0)
				{
					if (Global_262145.f_17450 >= 0)
					{
						iVar1 = Global_262145.f_17450;
					}
				}
				break;
			
			case -1009268949:
				iVar1 = 99000;
				if (bVar0)
				{
					if (Global_262145.f_17466 >= 0)
					{
						iVar1 = Global_262145.f_17466;
					}
				}
				break;
			
			case -570033273:
				if (!bParam2)
				{
					iVar1 = 122000;
					if (bVar0)
					{
						if (Global_262145.f_17467 >= 0)
						{
							iVar1 = Global_262145.f_17467;
						}
					}
				}
				else
				{
					iVar1 = 0;
				}
				break;
			
			case 6774487:
				iVar1 = 210000;
				if (bVar0)
				{
					if (Global_262145.f_17453 >= 0)
					{
						iVar1 = Global_262145.f_17453;
					}
				}
				break;
			
			case -1404136503:
				iVar1 = 145000;
				if (bVar0)
				{
					if (Global_262145.f_17454 >= 0)
					{
						iVar1 = Global_262145.f_17454;
					}
				}
				break;
			
			case 1873600305:
				iVar1 = 48000;
				if (bVar0)
				{
					if (Global_262145.f_17461 >= 0)
					{
						iVar1 = Global_262145.f_17461;
					}
				}
				break;
			
			case -405626514:
				iVar1 = 2225000;
				if (bVar0)
				{
					if (Global_262145.f_17463 >= 0)
					{
						iVar1 = Global_262145.f_17463;
					}
				}
				break;
			
			case -674927303:
				iVar1 = 648000;
				if (bVar0)
				{
					if (Global_262145.f_17460 >= 0)
					{
						iVar1 = Global_262145.f_17460;
					}
				}
				break;
			
			case -255678177:
				iVar1 = 976000;
				if (bVar0)
				{
					if (Global_262145.f_17457 >= 0)
					{
						iVar1 = Global_262145.f_17457;
					}
				}
				break;
			
			case -440768424:
				iVar1 = 81000;
				if (bVar0)
				{
					if (Global_262145.f_17452 >= 0)
					{
						iVar1 = Global_262145.f_17452;
					}
				}
				break;
			
			case 1491277511:
				iVar1 = 1995000;
				if (bVar0)
				{
					if (Global_262145.f_17462 >= 0)
					{
						iVar1 = Global_262145.f_17462;
					}
				}
				break;
			
			case -609625092:
				if (!bParam2)
				{
					iVar1 = 356000;
					if (bVar0)
					{
						if (Global_262145.f_17464 >= 0)
						{
							iVar1 = Global_262145.f_17464;
						}
					}
				}
				else
				{
					iVar1 = 0;
				}
				break;
			
			case -1523428744:
				if (bParam2)
				{
					iVar1 = 50250;
					if (bVar0)
					{
						if (Global_262145.f_27729 >= 0)
						{
							iVar1 = Global_262145.f_27729;
						}
					}
				}
				else
				{
					iVar1 = 67000;
					if (bVar0)
					{
						if (Global_262145.f_17458 >= 0)
						{
							iVar1 = Global_262145.f_17458;
						}
					}
					iVar2 = 50250;
					if (bVar0)
					{
						if (Global_262145.f_27729 >= 0)
						{
							iVar2 = Global_262145.f_27729;
						}
					}
				}
				break;
			
			case -1558399629:
				iVar1 = 378000;
				if (bVar0)
				{
					if (Global_262145.f_18525 >= 0)
					{
						iVar1 = Global_262145.f_18525;
					}
				}
				break;
			
			case 1026149675:
				iVar1 = 195000;
				if (bVar0)
				{
					if (Global_262145.f_18528 >= 0)
					{
						iVar1 = Global_262145.f_18528;
					}
				}
				break;
			
			case -618617997:
				if (bParam2)
				{
					iVar1 = 71250;
					if (bVar0)
					{
					}
				}
				else
				{
					iVar1 = 95000;
					if (bVar0)
					{
						if (Global_262145.f_17465 >= 0)
						{
							iVar1 = Global_262145.f_17465;
						}
					}
					iVar2 = 71250;
					if (bVar0)
					{
					}
				}
				break;
			
			case -1289178744:
				iVar1 = 55000;
				if (bVar0)
				{
					if (Global_262145.f_18526 >= 0)
					{
						iVar1 = Global_262145.f_18526;
					}
				}
				break;
			
			case -1842748181:
				iVar1 = 47500;
				if (bVar0)
				{
					if (Global_262145.f_18527 >= 0)
					{
						iVar1 = Global_262145.f_18527;
					}
				}
				break;
			
			case -312295511:
				if (!bParam2)
				{
					iVar1 = 3192000;
					if (bVar0)
					{
						if (Global_262145.f_19146 >= 0)
						{
							iVar1 = Global_262145.f_19146;
						}
					}
				}
				else
				{
					iVar1 = 2400000;
					if (bVar0)
					{
						if (Global_262145.f_19147 >= 0)
						{
							iVar1 = Global_262145.f_19147;
						}
					}
				}
				break;
			
			case -1649536104:
				if (!bParam2)
				{
					iVar1 = 2553600;
					if (bVar0)
					{
						if (Global_262145.f_19148 >= 0)
						{
							iVar1 = Global_262145.f_19148;
						}
					}
				}
				else
				{
					iVar1 = 1920000;
					if (bVar0)
					{
						if (Global_262145.f_19149 >= 0)
						{
							iVar1 = Global_262145.f_19149;
						}
					}
				}
				break;
			
			case 1180875963:
				if (!bParam2)
				{
					iVar1 = 1489600;
					if (bVar0)
					{
						if (Global_262145.f_19150 >= 0)
						{
							iVar1 = Global_262145.f_19150;
						}
					}
				}
				else
				{
					iVar1 = 1120000;
					if (bVar0)
					{
						if (Global_262145.f_19151 >= 0)
						{
							iVar1 = Global_262145.f_19151;
						}
					}
				}
				break;
			
			case -1590337689:
				if (!bParam2)
				{
					iVar1 = 1755600;
					if (bVar0)
					{
						if (Global_262145.f_19152 >= 0)
						{
							iVar1 = Global_262145.f_19152;
						}
					}
				}
				else
				{
					iVar1 = 1320000;
					if (bVar0)
					{
						if (Global_262145.f_19153 >= 0)
						{
							iVar1 = Global_262145.f_19153;
						}
					}
				}
				break;
			
			case 682434785:
				if (!bParam2)
				{
					iVar1 = 2926000;
					if (bVar0)
					{
						if (Global_262145.f_19154 >= 0)
						{
							iVar1 = Global_262145.f_19154;
						}
					}
				}
				else
				{
					iVar1 = 2200000;
					if (bVar0)
					{
						if (Global_262145.f_19155 >= 0)
						{
							iVar1 = Global_262145.f_19155;
						}
					}
				}
				break;
			
			case -1912017790:
				if (!bParam2)
				{
					iVar1 = 658350;
					if (bVar0)
					{
						if (Global_262145.f_19156 >= 0)
						{
							iVar1 = Global_262145.f_19156;
						}
					}
				}
				else
				{
					iVar1 = 495000;
					if (bVar0)
					{
						if (Global_262145.f_19157 >= 0)
						{
							iVar1 = Global_262145.f_19157;
						}
					}
				}
				break;
			
			case 941494461:
				if (!bParam2)
				{
					iVar1 = 5745600;
					if (bVar0)
					{
						if (Global_262145.f_19158 >= 0)
						{
							iVar1 = Global_262145.f_19158;
						}
					}
				}
				else
				{
					iVar1 = 4320000;
					if (bVar0)
					{
						if (Global_262145.f_19159 >= 0)
						{
							iVar1 = Global_262145.f_19159;
						}
					}
				}
				break;
			
			case 989294410:
				if (!bParam2)
				{
					iVar1 = 3830400;
					if (bVar0)
					{
						if (Global_262145.f_19160 >= 0)
						{
							iVar1 = Global_262145.f_19160;
						}
					}
				}
				else
				{
					iVar1 = 2880000;
					if (bVar0)
					{
						if (Global_262145.f_19161 >= 0)
						{
							iVar1 = Global_262145.f_19161;
						}
					}
				}
				break;
			
			case -1758137366:
				iVar1 = 880000;
				if (bVar0)
				{
					if (Global_262145.f_19174 >= 0)
					{
						iVar1 = Global_262145.f_19174;
					}
				}
				break;
			
			case 272929391:
				iVar1 = 1329000;
				if (bVar0 && Global_262145.f_19175 >= 0)
				{
					iVar1 = Global_262145.f_19175;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1329000) * 0.75f));
				}
				break;
			
			case -2048333973:
				iVar1 = 1189000;
				if (bVar0)
				{
					if (Global_262145.f_19162 >= 0)
					{
						iVar1 = Global_262145.f_19162;
					}
				}
				break;
			
			case -482719877:
				iVar1 = (Global_262145.f_19162 + func_274(iParam1));
				break;
			
			case 1034187331:
				iVar1 = 1440000;
				if (bVar0)
				{
					if (Global_262145.f_19166 >= 0)
					{
						iVar1 = Global_262145.f_19166;
					}
				}
				break;
			
			case 1093792632:
				iVar1 = (Global_262145.f_19166 + func_274(iParam1));
				break;
			
			case -239841468:
				iVar1 = 169000;
				if (bVar0)
				{
					if (Global_262145.f_19172 >= 0)
					{
						iVar1 = Global_262145.f_19172;
					}
				}
				break;
			
			case 1790834270:
				iVar1 = (Global_262145.f_19172 + func_274(iParam1));
				break;
			
			case 627535535:
				iVar1 = 135000;
				if (bVar0)
				{
					if (Global_262145.f_19170 >= 0)
					{
						iVar1 = Global_262145.f_19170;
					}
				}
				break;
			
			case -757735410:
				iVar1 = (Global_262145.f_19170 + func_274(iParam1));
				break;
			
			case 1886268224:
				iVar1 = 599000;
				if (bVar0)
				{
					if (Global_262145.f_19164 >= 0)
					{
						iVar1 = Global_262145.f_19164;
					}
				}
				break;
			
			case 1074745671:
				iVar1 = (Global_262145.f_19164 + func_274(iParam1));
				break;
			
			case -2022483795:
				iVar1 = (85000 + func_274(iParam1));
				break;
			
			case 196747873:
				iVar1 = (Global_262145.f_19176 + func_274(iParam1));
				break;
			
			case -1405937764:
				iVar1 = 915000;
				if (bVar0)
				{
					if (Global_262145.f_19810 >= 0)
					{
						iVar1 = Global_262145.f_19810;
					}
				}
				break;
			
			case 1234311532:
				iVar1 = 1260000;
				if (bVar0)
				{
					if (Global_262145.f_19809 >= 0)
					{
						iVar1 = Global_262145.f_19809;
					}
				}
				break;
			
			case 719660200:
				iVar1 = 430000;
				if (bVar0)
				{
					if (Global_262145.f_19811 >= 0)
					{
						iVar1 = Global_262145.f_19811;
					}
				}
				break;
			
			case -982130927:
				iVar1 = 705000;
				if (bVar0)
				{
					if (Global_262145.f_19812 >= 0)
					{
						iVar1 = Global_262145.f_19812;
					}
				}
				break;
			
			case 159274291:
				iVar1 = 1150000;
				if (bVar0)
				{
					if (Global_262145.f_20897 >= 0)
					{
						iVar1 = Global_262145.f_20897;
					}
				}
				break;
			
			case 223240013:
				iVar1 = 865000;
				if (bVar0)
				{
					if (Global_262145.f_20900 >= 0)
					{
						iVar1 = Global_262145.f_20900;
					}
				}
				break;
			
			case 433954513:
				iVar1 = 1245000;
				if (bVar0)
				{
					if (Global_262145.f_20898 >= 0)
					{
						iVar1 = Global_262145.f_20898;
					}
				}
				break;
			
			case 1504306544:
				iVar1 = 998000;
				if (bVar0)
				{
					if (Global_262145.f_20899 >= 0)
					{
						iVar1 = Global_262145.f_20899;
					}
				}
				break;
			
			case 1939284556:
				iVar1 = 1535000;
				if (bVar0)
				{
					if (Global_262145.f_20901 >= 0)
					{
						iVar1 = Global_262145.f_20901;
					}
				}
				break;
			
			case 917809321:
				iVar1 = 2375000;
				if (bVar0)
				{
					if (Global_262145.f_20902 >= 0)
					{
						iVar1 = Global_262145.f_20902;
					}
				}
				break;
			
			case 562680400:
				iVar1 = 2325000;
				if (bVar0)
				{
					if (Global_262145.f_20889 >= 0)
					{
						iVar1 = Global_262145.f_20889;
					}
				}
				iVar2 = iVar1;
				if (!bParam2)
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * ((100f + SYSTEM::TO_FLOAT(Global_262145.f_20888)) / 100f)));
				}
				break;
			
			case 1897744184:
				iVar1 = 850000;
				if (bVar0)
				{
					if (Global_262145.f_20890 >= 0)
					{
						iVar1 = Global_262145.f_20890;
					}
				}
				iVar2 = iVar1;
				if (!bParam2)
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * ((100f + SYSTEM::TO_FLOAT(Global_262145.f_20888)) / 100f)));
				}
				break;
			
			case -32236122:
				iVar1 = 1695000;
				if (bVar0)
				{
					if (Global_262145.f_20891 >= 0)
					{
						iVar1 = Global_262145.f_20891;
					}
				}
				iVar2 = iVar1;
				if (!bParam2)
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * ((100f + SYSTEM::TO_FLOAT(Global_262145.f_20888)) / 100f)));
				}
				break;
			
			case 884483972:
				iVar1 = 2650000;
				if (bVar0)
				{
					if (Global_262145.f_20892 >= 0)
					{
						iVar1 = Global_262145.f_20892;
					}
				}
				iVar2 = iVar1;
				if (!bParam2)
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * ((100f + SYSTEM::TO_FLOAT(Global_262145.f_20888)) / 100f)));
				}
				break;
			
			case -1210451983:
				iVar1 = 1585000;
				if (bVar0)
				{
					if (Global_262145.f_20893 >= 0)
					{
						iVar1 = Global_262145.f_20893;
					}
				}
				iVar2 = iVar1;
				if (!bParam2)
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * ((100f + SYSTEM::TO_FLOAT(Global_262145.f_20888)) / 100f)));
				}
				break;
			
			case -1881846085:
				iVar1 = 1400000;
				if (bVar0)
				{
					if (Global_262145.f_20894 >= 0)
					{
						iVar1 = Global_262145.f_20894;
					}
				}
				iVar2 = iVar1;
				if (!bParam2)
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * ((100f + SYSTEM::TO_FLOAT(Global_262145.f_20888)) / 100f)));
				}
				break;
			
			case 177270108:
				if (!bParam2)
				{
					iVar1 = 1225000;
					if (bVar0)
					{
						if (Global_262145.f_20966 >= 0)
						{
							iVar1 = Global_262145.f_20966;
						}
					}
				}
				else
				{
					iVar1 = 0;
				}
				break;
			
			case 387748548:
				if (!bParam2)
				{
					iVar1 = 1400000;
					if (bVar0)
					{
						if (Global_262145.f_20967 >= 0)
						{
							iVar1 = Global_262145.f_20967;
						}
					}
				}
				else
				{
					iVar1 = 0;
				}
				break;
			
			case -1281684762:
				iVar1 = 6500000;
				if (bVar0)
				{
					if (Global_262145.f_22057 >= 0)
					{
						iVar1 = Global_262145.f_22057;
					}
				}
				break;
			
			case -1763555241:
				if (bParam2)
				{
					iVar1 = 500000;
					if (bVar0)
					{
						if (Global_262145.f_22056 >= 0)
						{
							iVar1 = Global_262145.f_22056;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(500000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22076 >= 0)
						{
							iVar1 = Global_262145.f_22076;
						}
					}
				}
				break;
			
			case -749299473:
				if (bParam2)
				{
					iVar1 = 2350000;
					if (bVar0)
					{
						if (Global_262145.f_22049 >= 0)
						{
							iVar1 = Global_262145.f_22049;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(2350000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22069 >= 0)
						{
							iVar1 = Global_262145.f_22069;
						}
					}
				}
				break;
			
			case -975345305:
				if (bParam2)
				{
					iVar1 = 1200000;
					if (bVar0)
					{
						if (Global_262145.f_22053 >= 0)
						{
							iVar1 = Global_262145.f_22053;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1200000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22073 >= 0)
						{
							iVar1 = Global_262145.f_22073;
						}
					}
				}
				break;
			
			case -1700874274:
				if (bParam2)
				{
					iVar1 = 2750000;
					if (bVar0)
					{
						if (Global_262145.f_22048 >= 0)
						{
							iVar1 = Global_262145.f_22048;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(2750000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22068 >= 0)
						{
							iVar1 = Global_262145.f_22068;
						}
					}
				}
				break;
			
			case -392675425:
				if (bParam2)
				{
					iVar1 = 850000;
					if (bVar0)
					{
						if (Global_262145.f_22055 >= 0)
						{
							iVar1 = Global_262145.f_22055;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(850000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22075 >= 0)
						{
							iVar1 = Global_262145.f_22075;
						}
					}
				}
				break;
			
			case 1043222410:
				if (bParam2)
				{
					iVar1 = 3890000;
					if (bVar0)
					{
						if (Global_262145.f_22044 >= 0)
						{
							iVar1 = Global_262145.f_22044;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(3890000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22064 >= 0)
						{
							iVar1 = Global_262145.f_22064;
						}
					}
				}
				break;
			
			case -1386191424:
				if (bParam2)
				{
					iVar1 = 3350000;
					if (bVar0)
					{
						if (Global_262145.f_22046 >= 0)
						{
							iVar1 = Global_262145.f_22046;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(3350000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22066 >= 0)
						{
							iVar1 = Global_262145.f_22066;
						}
					}
				}
				break;
			
			case 1565978651:
				if (bParam2)
				{
					iVar1 = 3600000;
					if (bVar0)
					{
						if (Global_262145.f_22045 >= 0)
						{
							iVar1 = Global_262145.f_22045;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(3600000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22065 >= 0)
						{
							iVar1 = Global_262145.f_22065;
						}
					}
				}
				break;
			
			case 1036591958:
				if (bParam2)
				{
					iVar1 = 1995000;
					if (bVar0)
					{
						if (Global_262145.f_22050 >= 0)
						{
							iVar1 = Global_262145.f_22050;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1995000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22070 >= 0)
						{
							iVar1 = Global_262145.f_22070;
						}
					}
				}
				break;
			
			case -32878452:
				if (bParam2)
				{
					iVar1 = 4450000;
					if (bVar0)
					{
						if (Global_262145.f_22043 >= 0)
						{
							iVar1 = Global_262145.f_22043;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(4450000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22063 >= 0)
						{
							iVar1 = Global_262145.f_22063;
						}
					}
				}
				break;
			
			case -42959138:
				if (bParam2)
				{
					iVar1 = 3100000;
					if (bVar0)
					{
						if (Global_262145.f_22047 >= 0)
						{
							iVar1 = Global_262145.f_22047;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(3100000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22067 >= 0)
						{
							iVar1 = Global_262145.f_22067;
						}
					}
				}
				break;
			
			case -1984275979:
				if (bParam2)
				{
					iVar1 = 1730000;
					if (bVar0)
					{
						if (Global_262145.f_22051 >= 0)
						{
							iVar1 = Global_262145.f_22051;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1730000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22071 >= 0)
						{
							iVar1 = Global_262145.f_22071;
						}
					}
				}
				break;
			
			case -1007528109:
				if (bParam2)
				{
					iVar1 = 975000;
					if (bVar0)
					{
						if (Global_262145.f_22054 >= 0)
						{
							iVar1 = Global_262145.f_22054;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(975000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22074 >= 0)
						{
							iVar1 = Global_262145.f_22074;
						}
					}
				}
				break;
			
			case -1523619738:
				if (bParam2)
				{
					iVar1 = 1595000;
					if (bVar0)
					{
						if (Global_262145.f_22052 >= 0)
						{
							iVar1 = Global_262145.f_22052;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1595000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22072 >= 0)
						{
							iVar1 = Global_262145.f_22072;
						}
					}
				}
				break;
			
			case 1392481335:
				iVar1 = 1890000;
				if (bVar0)
				{
					if (Global_262145.f_22058 >= 0)
					{
						iVar1 = Global_262145.f_22058;
					}
				}
				break;
			
			case -998177792:
				iVar1 = 2250000;
				if (bVar0)
				{
					if (Global_262145.f_22059 >= 0)
					{
						iVar1 = Global_262145.f_22059;
					}
				}
				break;
			
			case -1242608589:
				iVar1 = 3750000;
				if (bVar0)
				{
					if (Global_262145.f_22062 >= 0)
					{
						iVar1 = Global_262145.f_22062;
					}
				}
				break;
			
			case 1841130506:
				iVar1 = 615000;
				if (bVar0)
				{
					if (Global_262145.f_22060 >= 0)
					{
						iVar1 = Global_262145.f_22060;
					}
				}
				break;
			
			case 2049897956:
				iVar1 = 885000;
				if (bVar0)
				{
					if (Global_262145.f_22061 >= 0)
					{
						iVar1 = Global_262145.f_22061;
					}
				}
				break;
		}
		switch (iParam1)
		{
			case 1483171323:
				if (bParam2)
				{
					iVar1 = 3550000;
					if (bVar0)
					{
						if (Global_262145.f_23385 >= 0)
						{
							iVar1 = Global_262145.f_23385;
						}
					}
				}
				else
				{
					iVar1 = 4721500;
					if (bVar0)
					{
						if (Global_262145.f_23376 >= 0)
						{
							iVar1 = Global_262145.f_23376;
						}
					}
					iVar2 = 3550000;
					if (bVar0)
					{
						if (Global_262145.f_23385 >= 0)
						{
							iVar2 = Global_262145.f_23385;
						}
					}
				}
				break;
			
			case 886810209:
				if (bParam2)
				{
					iVar1 = 2395000;
					if (bVar0)
					{
						if (Global_262145.f_23386 >= 0)
						{
							iVar1 = Global_262145.f_23386;
						}
					}
				}
				else
				{
					iVar1 = 3185350;
					if (bVar0)
					{
						if (Global_262145.f_23377 >= 0)
						{
							iVar1 = Global_262145.f_23377;
						}
					}
					iVar2 = 2395000;
					if (bVar0)
					{
						if (Global_262145.f_23386 >= 0)
						{
							iVar2 = Global_262145.f_23386;
						}
					}
				}
				break;
			
			case -1693015116:
				if (bParam2)
				{
					iVar1 = 2350000;
					if (bVar0)
					{
						if (Global_262145.f_23387 >= 0)
						{
							iVar1 = Global_262145.f_23387;
						}
					}
				}
				else
				{
					iVar1 = 3125500;
					if (bVar0)
					{
						if (Global_262145.f_23378 >= 0)
						{
							iVar1 = Global_262145.f_23378;
						}
					}
					iVar2 = 2350000;
					if (bVar0)
					{
						if (Global_262145.f_23387 >= 0)
						{
							iVar2 = Global_262145.f_23387;
						}
					}
				}
				break;
			
			case -692292317:
				if (bParam2)
				{
					iVar1 = 2490000;
					if (bVar0)
					{
						if (Global_262145.f_23388 >= 0)
						{
							iVar1 = Global_262145.f_23388;
						}
					}
				}
				else
				{
					iVar1 = 3311700;
					if (bVar0)
					{
						if (Global_262145.f_23379 >= 0)
						{
							iVar1 = Global_262145.f_23379;
						}
					}
					iVar2 = 2490000;
					if (bVar0)
					{
						if (Global_262145.f_23388 >= 0)
						{
							iVar2 = Global_262145.f_23388;
						}
					}
				}
				break;
			
			case -1435527158:
				if (bParam2)
				{
					iVar1 = 2895000;
					if (bVar0)
					{
						if (Global_262145.f_23390 >= 0)
						{
							iVar1 = Global_262145.f_23390;
						}
					}
				}
				else
				{
					iVar1 = 3850350;
					if (bVar0)
					{
						if (Global_262145.f_23381 >= 0)
						{
							iVar1 = Global_262145.f_23381;
						}
					}
					iVar2 = 2895000;
					if (bVar0)
					{
						if (Global_262145.f_23390 >= 0)
						{
							iVar2 = Global_262145.f_23390;
						}
					}
				}
				break;
			
			case 1181327175:
				if (bParam2)
				{
					iVar1 = 2785000;
					if (bVar0)
					{
						if (Global_262145.f_23391 >= 0)
						{
							iVar1 = Global_262145.f_23391;
						}
					}
				}
				else
				{
					iVar1 = 3704050;
					if (bVar0)
					{
						if (Global_262145.f_23382 >= 0)
						{
							iVar1 = Global_262145.f_23382;
						}
					}
					iVar2 = 2785000;
					if (bVar0)
					{
						if (Global_262145.f_23391 >= 0)
						{
							iVar2 = Global_262145.f_23391;
						}
					}
				}
				break;
			
			case 1489874736:
				if (bParam2)
				{
					iVar1 = 2750000;
					if (bVar0)
					{
						if (Global_262145.f_23384 >= 0)
						{
							iVar1 = Global_262145.f_23384;
						}
					}
				}
				else
				{
					iVar1 = 3657500;
					if (bVar0)
					{
						if (Global_262145.f_23375 >= 0)
						{
							iVar1 = Global_262145.f_23375;
						}
					}
					iVar2 = 2750000;
					if (bVar0)
					{
						if (Global_262145.f_23384 >= 0)
						{
							iVar2 = Global_262145.f_23384;
						}
					}
				}
				break;
			
			case -212993243:
				if (bParam2)
				{
					iVar1 = 1595000;
					if (bVar0)
					{
						if (Global_262145.f_23389 >= 0)
						{
							iVar1 = Global_262145.f_23389;
						}
					}
				}
				else
				{
					iVar1 = 2121350;
					if (bVar0)
					{
						if (Global_262145.f_23380 >= 0)
						{
							iVar1 = Global_262145.f_23380;
						}
					}
					iVar2 = 1595000;
					if (bVar0)
					{
						if (Global_262145.f_23389 >= 0)
						{
							iVar2 = Global_262145.f_23389;
						}
					}
				}
				break;
			
			case 447548909:
				if (bParam2)
				{
					iVar1 = 2800000;
					if (bVar0)
					{
						if (Global_262145.f_23392 >= 0)
						{
							iVar1 = Global_262145.f_23392;
						}
					}
				}
				else
				{
					iVar1 = 3724000;
					if (bVar0)
					{
						if (Global_262145.f_23383 >= 0)
						{
							iVar1 = Global_262145.f_23383;
						}
					}
					iVar2 = 2800000;
					if (bVar0)
					{
						if (Global_262145.f_23392 >= 0)
						{
							iVar2 = Global_262145.f_23392;
						}
					}
				}
				break;
			
			case 1561920505:
				iVar1 = 710000;
				if (bVar0)
				{
					if (Global_262145.f_23393 >= 0)
					{
						iVar1 = Global_262145.f_23393;
					}
				}
				break;
			
			case -1848994066:
				iVar1 = 1500000;
				if (bVar0)
				{
					if (Global_262145.f_23405 >= 0)
					{
						iVar1 = Global_262145.f_23405;
					}
				}
				break;
			
			case 1741861769:
				iVar1 = 500000;
				if (bVar0)
				{
					if (Global_262145.f_23398 >= 0)
					{
						iVar1 = Global_262145.f_23398;
					}
				}
				break;
			
			case 1104234922:
				if (bParam2)
				{
					iVar1 = 487500;
					if (bVar0)
					{
						if (Global_262145.f_27725 >= 0)
						{
							iVar1 = Global_262145.f_27725;
						}
					}
				}
				else
				{
					iVar1 = 650000;
					if (bVar0)
					{
						if (Global_262145.f_23408 >= 0)
						{
							iVar1 = Global_262145.f_23408;
						}
					}
					iVar2 = 487500;
					if (bVar0)
					{
						if (Global_262145.f_27725 >= 0)
						{
							iVar2 = Global_262145.f_27725;
						}
					}
				}
				break;
			
			case 1871995513:
				iVar1 = 485000;
				if (bVar0)
				{
					if (Global_262145.f_23407 >= 0)
					{
						iVar1 = Global_262145.f_23407;
					}
				}
				break;
			
			case 1352136073:
				iVar1 = 1603000;
				if (bVar0)
				{
					if (Global_262145.f_23397 >= 0)
					{
						iVar1 = Global_262145.f_23397;
					}
				}
				break;
			
			case -313185164:
				iVar1 = 1955000;
				if (bVar0)
				{
					if (Global_262145.f_23402 >= 0)
					{
						iVar1 = Global_262145.f_23402;
					}
				}
				break;
			
			case -2079788230:
				iVar1 = 785000;
				if (bVar0)
				{
					if (Global_262145.f_23411 >= 0)
					{
						iVar1 = Global_262145.f_23411;
					}
				}
				break;
			
			case 600450546:
				iVar1 = 625000;
				if (bVar0)
				{
					if (Global_262145.f_23399 >= 0)
					{
						iVar1 = Global_262145.f_23399;
					}
				}
				break;
			
			case -410205223:
				iVar1 = 1610000;
				if (bVar0)
				{
					if (Global_262145.f_23395 >= 0)
					{
						iVar1 = Global_262145.f_23395;
					}
				}
				break;
			
			case 867799010:
				iVar1 = 1420000;
				if (bVar0)
				{
					if (Global_262145.f_23406 >= 0)
					{
						iVar1 = Global_262145.f_23406;
					}
				}
				break;
			
			case -1529242755:
				iVar1 = 1375000;
				if (bVar0)
				{
					if (Global_262145.f_23409 >= 0)
					{
						iVar1 = Global_262145.f_23409;
					}
				}
				break;
			
			case 903794909:
				iVar1 = 990000;
				if (bVar0)
				{
					if (Global_262145.f_23394 >= 0)
					{
						iVar1 = Global_262145.f_23394;
					}
				}
				break;
			
			case -1532697517:
				iVar1 = 380000;
				if (bVar0)
				{
					if (Global_262145.f_23404 >= 0)
					{
						iVar1 = Global_262145.f_23404;
					}
				}
				break;
			
			case 15219735:
				iVar1 = 535000;
				if (bVar0)
				{
					if (Global_262145.f_23400 >= 0)
					{
						iVar1 = Global_262145.f_23400;
					}
				}
				break;
			
			case 661493923:
				iVar1 = 1145000;
				if (bVar0)
				{
					if (Global_262145.f_23403 >= 0)
					{
						iVar1 = Global_262145.f_23403;
					}
				}
				break;
			
			case 838982985:
				iVar1 = 900000;
				if (bVar0)
				{
					if (Global_262145.f_23401 >= 0)
					{
						iVar1 = Global_262145.f_23401;
					}
				}
				break;
			
			case -391595372:
				iVar1 = 875000;
				if (bVar0)
				{
					if (Global_262145.f_23396 >= 0)
					{
						iVar1 = Global_262145.f_23396;
					}
				}
				break;
			
			case -121446169:
				iVar1 = 345000;
				if (bVar0)
				{
					if (Global_262145.f_23410 >= 0)
					{
						iVar1 = Global_262145.f_23410;
					}
				}
				break;
			
			case 1909189272:
				iVar1 = 940000;
				if (bVar0)
				{
					if (Global_262145.f_23610 >= 0)
					{
						iVar1 = Global_262145.f_23610;
					}
				}
				break;
			
			case 1617472902:
				iVar1 = 335000;
				if (bVar0)
				{
					if (Global_262145.f_23616 >= 0)
					{
						iVar1 = Global_262145.f_23616;
					}
				}
				break;
			
			case -1267543371:
				if (bParam2)
				{
					iVar1 = 423750;
					if (bVar0)
					{
						if (Global_262145.f_27727 >= 0)
						{
							iVar1 = Global_262145.f_27727;
						}
					}
				}
				else
				{
					iVar1 = 565000;
					if (bVar0)
					{
						if (Global_262145.f_23614 >= 0)
						{
							iVar1 = Global_262145.f_23614;
						}
					}
					iVar2 = 423750;
					if (bVar0)
					{
						if (Global_262145.f_27727 >= 0)
						{
							iVar2 = Global_262145.f_27727;
						}
					}
				}
				break;
			
			case 931280609:
				iVar1 = 360000;
				if (bVar0 && Global_262145.f_23615 >= 0)
				{
					iVar1 = Global_262145.f_23615;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(360000) * 0.75f));
					if (bVar0 && Global_262145.f_25152 >= 0)
					{
						iVar1 = Global_262145.f_25152;
					}
				}
				break;
			
			case 1046206681:
				iVar1 = 1225000;
				if (bVar0)
				{
					if (Global_262145.f_23609 >= 0)
					{
						iVar1 = Global_262145.f_23609;
					}
				}
				break;
			
			case -1259134696:
				iVar1 = 1675000;
				if (bVar0)
				{
					if (Global_262145.f_23608 >= 0)
					{
						iVar1 = Global_262145.f_23608;
					}
				}
				break;
			
			case 1115909093:
				iVar1 = 830000;
				if (bVar0)
				{
					if (Global_262145.f_23611 >= 0)
					{
						iVar1 = Global_262145.f_23611;
					}
				}
				break;
			
			case 1031562256:
				iVar1 = 2825000;
				if (bVar0)
				{
					if (Global_262145.f_23604 >= 0)
					{
						iVar1 = Global_262145.f_23604;
					}
				}
				break;
			
			case -376434238:
				iVar1 = 2515000;
				if (bVar0)
				{
					if (Global_262145.f_23605 >= 0)
					{
						iVar1 = Global_262145.f_23605;
					}
				}
				break;
			
			case -986944621:
				iVar1 = 725000;
				if (bVar0 && Global_262145.f_23613 >= 0)
				{
					iVar1 = Global_262145.f_23613;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(725000) * 0.75f));
				}
				break;
			
			case -1134706562:
				iVar1 = 1980000;
				if (bVar0)
				{
					if (Global_262145.f_23607 >= 0)
					{
						iVar1 = Global_262145.f_23607;
					}
				}
				break;
			
			case -2120700196:
				iVar1 = 2305000;
				if (bVar0)
				{
					if (Global_262145.f_23606 >= 0)
					{
						iVar1 = Global_262145.f_23606;
					}
				}
				break;
			
			case -214906006:
				iVar1 = 790000;
				if (bVar0)
				{
					if (Global_262145.f_23612 >= 0)
					{
						iVar1 = Global_262145.f_23612;
					}
				}
				break;
			
			case -988501280:
				iVar1 = 145000;
				if (bVar0)
				{
					if (Global_262145.f_23617 >= 0)
					{
						iVar1 = Global_262145.f_23617;
					}
				}
				break;
			
			case 1254014755:
				iVar1 = 1775000;
				if (bVar0)
				{
					if (Global_262145.f_23618 >= 0)
					{
						iVar1 = Global_262145.f_23618;
					}
				}
				break;
			
			case -726768679:
				iVar1 = 1815000;
				if (bVar0)
				{
					if (Global_262145.f_23619 >= 0)
					{
						iVar1 = Global_262145.f_23619;
					}
				}
				break;
			
			case -1988428699:
				if (!bParam2)
				{
					iVar1 = 1375000;
					if (bVar0)
					{
						if (Global_262145.f_24326 >= 0)
						{
							iVar1 = Global_262145.f_24326;
						}
					}
				}
				else
				{
					iVar1 = 0;
				}
				break;
			
			case 1945374990:
				if (bParam2)
				{
					iVar1 = 72000;
					if (bVar0)
					{
						if (Global_262145.f_24242 >= 0)
						{
							iVar1 = Global_262145.f_24242;
						}
					}
				}
				else
				{
					iVar1 = 95760;
					if (bVar0)
					{
						if (Global_262145.f_24248 >= 0)
						{
							iVar1 = Global_262145.f_24248;
						}
					}
					iVar2 = 72000;
					if (bVar0)
					{
						if (Global_262145.f_24242 >= 0)
						{
							iVar2 = Global_262145.f_24242;
						}
					}
				}
				break;
			
			case 1653666139:
				if (bParam2)
				{
					iVar1 = 241000;
					if (bVar0)
					{
						if (Global_262145.f_24241 >= 0)
						{
							iVar1 = Global_262145.f_24241;
						}
					}
				}
				else
				{
					iVar1 = 320530;
					if (bVar0)
					{
						if (Global_262145.f_24247 >= 0)
						{
							iVar1 = Global_262145.f_24247;
						}
					}
					iVar2 = 241000;
					if (bVar0)
					{
						if (Global_262145.f_24241 >= 0)
						{
							iVar2 = Global_262145.f_24241;
						}
					}
				}
				break;
			
			case 500482303:
				iVar1 = 909000;
				if (bVar0)
				{
					if (Global_262145.f_24213 >= 0)
					{
						iVar1 = Global_262145.f_24213;
					}
				}
				break;
			
			case 2044532910:
				iVar1 = 1775000;
				if (bVar0)
				{
					if (Global_262145.f_24244 >= 0)
					{
						iVar1 = Global_262145.f_24244;
					}
				}
				break;
			
			case -638562243:
				if (bParam2)
				{
					iVar1 = 3480000;
					if (bVar0)
					{
						if (Global_262145.f_24245 >= 0)
						{
							iVar1 = Global_262145.f_24245;
						}
					}
				}
				else
				{
					iVar1 = 4628400;
					if (bVar0)
					{
						if (Global_262145.f_24250 >= 0)
						{
							iVar1 = Global_262145.f_24250;
						}
					}
					iVar2 = 3480000;
					if (bVar0)
					{
						if (Global_262145.f_24245 >= 0)
						{
							iVar2 = Global_262145.f_24245;
						}
					}
				}
				break;
			
			case 1692272545:
				iVar1 = 3800000;
				if (bVar0)
				{
					if (Global_262145.f_24246 >= 0)
					{
						iVar1 = Global_262145.f_24246;
					}
				}
				break;
			
			case 2069146067:
				if (bParam2)
				{
					iVar1 = 2925000;
					if (bVar0)
					{
						if (Global_262145.f_24243 >= 0)
						{
							iVar1 = Global_262145.f_24243;
						}
					}
				}
				else
				{
					iVar1 = 3890250;
					if (bVar0)
					{
						if (Global_262145.f_24249 >= 0)
						{
							iVar1 = Global_262145.f_24249;
						}
					}
					iVar2 = 2925000;
					if (bVar0)
					{
						if (Global_262145.f_24243 >= 0)
						{
							iVar2 = Global_262145.f_24243;
						}
					}
				}
				break;
			
			case -420911112:
				if (bParam2)
				{
					iVar1 = 460000;
					if (bVar0)
					{
						if (Global_262145.f_24210 >= 0)
						{
							iVar1 = Global_262145.f_24210;
						}
					}
				}
				else
				{
					iVar1 = 611800;
					if (bVar0)
					{
						if (Global_262145.f_24251 >= 0)
						{
							iVar1 = Global_262145.f_24251;
						}
					}
					iVar2 = 460000;
					if (bVar0)
					{
						if (Global_262145.f_24210 >= 0)
						{
							iVar2 = Global_262145.f_24210;
						}
					}
				}
				break;
			
			case 321186144:
				iVar1 = 1272000;
				if (bVar0)
				{
					if (Global_262145.f_24211 >= 0)
					{
						iVar1 = Global_262145.f_24211;
					}
				}
				break;
			
			case -54332285:
				iVar1 = 597000;
				if (bVar0)
				{
					if (Global_262145.f_24212 >= 0)
					{
						iVar1 = Global_262145.f_24212;
					}
				}
				break;
			
			case -307958377:
				if (bParam2)
				{
					iVar1 = 895000;
					if (bVar0)
					{
						if (Global_262145.f_24215 >= 0)
						{
							iVar1 = Global_262145.f_24215;
						}
					}
				}
				else
				{
					iVar1 = 1190350;
					if (bVar0)
					{
						if (Global_262145.f_24253 >= 0)
						{
							iVar1 = Global_262145.f_24253;
						}
					}
					iVar2 = 895000;
					if (bVar0)
					{
						if (Global_262145.f_24215 >= 0)
						{
							iVar2 = Global_262145.f_24215;
						}
					}
				}
				break;
			
			case 345756458:
				if (bParam2)
				{
					iVar1 = 1385000;
					if (bVar0)
					{
						if (Global_262145.f_24214 >= 0)
						{
							iVar1 = Global_262145.f_24214;
						}
					}
				}
				else
				{
					iVar1 = 1842050;
					if (bVar0)
					{
						if (Global_262145.f_24252 >= 0)
						{
							iVar1 = Global_262145.f_24252;
						}
					}
					iVar2 = 1385000;
					if (bVar0)
					{
						if (Global_262145.f_24214 >= 0)
						{
							iVar2 = Global_262145.f_24214;
						}
					}
				}
				break;
			
			case -801550069:
				iVar1 = 3870300;
				if (bVar0 && Global_262145.f_25218 >= 0)
				{
					iVar1 = Global_262145.f_25218;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2910000;
					if (bVar0 && Global_262145.f_25233 >= 0)
					{
						iVar1 = Global_262145.f_25233;
					}
				}
				break;
			
			case 679453769:
				iVar1 = 3870300;
				if (bVar0 && Global_262145.f_25223 >= 0)
				{
					iVar1 = Global_262145.f_25223;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2910000;
					if (bVar0 && Global_262145.f_25238 >= 0)
					{
						iVar1 = Global_262145.f_25238;
					}
				}
				break;
			
			case 1909700336:
				iVar1 = 3870300;
				if (bVar0 && Global_262145.f_25228 >= 0)
				{
					iVar1 = Global_262145.f_25228;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2910000;
					if (bVar0 && Global_262145.f_25243 >= 0)
					{
						iVar1 = Global_262145.f_25243;
					}
				}
				break;
			
			case 2139203625:
				iVar1 = 2666650;
				if (bVar0 && Global_262145.f_25219 >= 0)
				{
					iVar1 = Global_262145.f_25219;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2005000;
					if (bVar0 && Global_262145.f_25234 >= 0)
					{
						iVar1 = Global_262145.f_25234;
					}
				}
				break;
			
			case -1890996696:
				iVar1 = 2666650;
				if (bVar0 && Global_262145.f_25224 >= 0)
				{
					iVar1 = Global_262145.f_25224;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2005000;
					if (bVar0 && Global_262145.f_25239 >= 0)
					{
						iVar1 = Global_262145.f_25239;
					}
				}
				break;
			
			case 2038858402:
				iVar1 = 2666650;
				if (bVar0 && Global_262145.f_25229 >= 0)
				{
					iVar1 = Global_262145.f_25229;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2005000;
					if (bVar0 && Global_262145.f_25244 >= 0)
					{
						iVar1 = Global_262145.f_25244;
					}
				}
				break;
			
			case -1146969353:
				iVar1 = 3076290;
				if (bVar0 && Global_262145.f_25220 >= 0)
				{
					iVar1 = Global_262145.f_25220;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2313000;
					if (bVar0 && Global_262145.f_25235 >= 0)
					{
						iVar1 = Global_262145.f_25235;
					}
				}
				break;
			
			case 1542143200:
				iVar1 = 3076290;
				if (bVar0 && Global_262145.f_25225 >= 0)
				{
					iVar1 = Global_262145.f_25225;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2313000;
					if (bVar0 && Global_262145.f_25240 >= 0)
					{
						iVar1 = Global_262145.f_25240;
					}
				}
				break;
			
			case -579747861:
				iVar1 = 3076290;
				if (bVar0 && Global_262145.f_25230 >= 0)
				{
					iVar1 = Global_262145.f_25230;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2313000;
					if (bVar0 && Global_262145.f_25245 >= 0)
					{
						iVar1 = Global_262145.f_25245;
					}
				}
				break;
			
			case 444994115:
				iVar1 = 2284940;
				if (bVar0 && Global_262145.f_25221 >= 0)
				{
					iVar1 = Global_262145.f_25221;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1718000;
					if (bVar0 && Global_262145.f_25236 >= 0)
					{
						iVar1 = Global_262145.f_25236;
					}
				}
				break;
			
			case 1637620610:
				iVar1 = 2284940;
				if (bVar0 && Global_262145.f_25226 >= 0)
				{
					iVar1 = Global_262145.f_25226;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1718000;
					if (bVar0 && Global_262145.f_25241 >= 0)
					{
						iVar1 = Global_262145.f_25241;
					}
				}
				break;
			
			case -755532233:
				iVar1 = 2284940;
				if (bVar0 && Global_262145.f_25231 >= 0)
				{
					iVar1 = Global_262145.f_25231;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1718000;
					if (bVar0 && Global_262145.f_25246 >= 0)
					{
						iVar1 = Global_262145.f_25246;
					}
				}
				break;
			
			case 540101442:
				iVar1 = 2138640;
				if (bVar0 && Global_262145.f_25222 >= 0)
				{
					iVar1 = Global_262145.f_25222;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1608000;
					if (bVar0 && Global_262145.f_25237 >= 0)
					{
						iVar1 = Global_262145.f_25237;
					}
				}
				break;
			
			case -1106120762:
				iVar1 = 2138640;
				if (bVar0 && Global_262145.f_25227 >= 0)
				{
					iVar1 = Global_262145.f_25227;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1608000;
					if (bVar0 && Global_262145.f_25242 >= 0)
					{
						iVar1 = Global_262145.f_25242;
					}
				}
				break;
			
			case -1478704292:
				iVar1 = 2138640;
				if (bVar0 && Global_262145.f_25232 >= 0)
				{
					iVar1 = Global_262145.f_25232;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1608000;
					if (bVar0 && Global_262145.f_25247 >= 0)
					{
						iVar1 = Global_262145.f_25247;
					}
				}
				break;
			
			case -2096690334:
				iVar1 = 331835;
				if (bVar0 && Global_262145.f_25146 >= 0)
				{
					iVar1 = Global_262145.f_25146;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 249500;
					if (bVar0 && Global_262145.f_25151 >= 0)
					{
						iVar1 = Global_262145.f_25151;
					}
				}
				break;
			
			case -49115651:
				iVar1 = 596000;
				if (bVar0 && Global_262145.f_25253 >= 0)
				{
					iVar1 = Global_262145.f_25253;
				}
				break;
			
			case 1456744817:
				iVar1 = 718000;
				if (bVar0 && Global_262145.f_25255 >= 0)
				{
					iVar1 = Global_262145.f_25255;
				}
				break;
			
			case 1591739866:
				iVar1 = 1795000;
				if (bVar0 && Global_262145.f_25248 >= 0)
				{
					iVar1 = Global_262145.f_25248;
				}
				break;
			
			case -507495760:
				iVar1 = 1300000;
				if (bVar0 && Global_262145.f_25249 >= 0)
				{
					iVar1 = Global_262145.f_25249;
				}
				break;
			
			case -1168952148:
				iVar1 = 498000;
				if (bVar0 && Global_262145.f_25250 >= 0)
				{
					iVar1 = Global_262145.f_25250;
				}
				break;
			
			case 1279262537:
				iVar1 = 512000;
				if (bVar0 && Global_262145.f_25251 >= 0)
				{
					iVar1 = Global_262145.f_25251;
				}
				break;
			
			case -1566607184:
				iVar1 = 909000;
				if (bVar0 && Global_262145.f_25252 >= 0)
				{
					iVar1 = Global_262145.f_25252;
				}
				break;
			
			case -331467772:
				iVar1 = 1965000;
				if (bVar0 && Global_262145.f_25254 >= 0)
				{
					iVar1 = Global_262145.f_25254;
				}
				break;
			
			case -286046740:
				iVar1 = 1590000;
				if (bVar0 && Global_262145.f_25256 >= 0)
				{
					iVar1 = Global_262145.f_25256;
				}
				break;
			
			case -591651781:
				iVar1 = 0;
				break;
			
			case -2061049099:
				iVar1 = 0;
				break;
			
			case 373261600:
				iVar1 = 100000;
				break;
			
			case 1044193113:
				iVar1 = 2325000;
				if (bVar0 && Global_262145.f_26102 >= 0)
				{
					iVar1 = Global_262145.f_26102;
				}
				break;
			
			case 686471183:
				iVar1 = 718000;
				if (bVar0 && Global_262145.f_26103 >= 0)
				{
					iVar1 = Global_262145.f_26103;
				}
				break;
			
			case -941272559:
				iVar1 = 1625000;
				if (bVar0 && Global_262145.f_26099 >= 0)
				{
					iVar1 = Global_262145.f_26099;
				}
				break;
			
			case -1829436850:
				iVar1 = 608000;
				if (bVar0 && Global_262145.f_26105 >= 0)
				{
					iVar1 = Global_262145.f_26105;
				}
				break;
			
			case -682108547:
				iVar1 = 1925000;
				if (bVar0 && Global_262145.f_26104 >= 0)
				{
					iVar1 = Global_262145.f_26104;
				}
				break;
			
			case 722226637:
				if (bParam2)
				{
					iVar1 = 461250;
					if (bVar0)
					{
						if (Global_262145.f_27726 >= 0)
						{
							iVar1 = Global_262145.f_27726;
						}
					}
				}
				else
				{
					iVar1 = 615000;
					if (bVar0)
					{
						if (Global_262145.f_26100 >= 0)
						{
							iVar1 = Global_262145.f_26100;
						}
					}
					iVar2 = 461250;
					if (bVar0)
					{
						if (Global_262145.f_27726 >= 0)
						{
							iVar2 = Global_262145.f_27726;
						}
					}
				}
				break;
			
			case 1854776567:
				iVar1 = 897000;
				if (bVar0 && Global_262145.f_26106 >= 0)
				{
					iVar1 = Global_262145.f_26106;
				}
				break;
			
			case 1862507111:
				iVar1 = 812000;
				if (bVar0 && Global_262145.f_26101 >= 0)
				{
					iVar1 = Global_262145.f_26101;
				}
				break;
			
			case -882629065:
				iVar1 = 797000;
				if (bVar0 && Global_262145.f_26108 >= 0)
				{
					iVar1 = Global_262145.f_26108;
				}
				break;
			
			case -362150785:
				iVar1 = 835000;
				if (bVar0 && Global_262145.f_26107 >= 0)
				{
					iVar1 = Global_262145.f_26107;
				}
				break;
			
			case 310284501:
				iVar1 = 450000;
				if (bVar0 && Global_262145.f_26109 >= 0)
				{
					iVar1 = Global_262145.f_26109;
				}
				break;
			
			case 916547552:
				iVar1 = 925000;
				if (bVar0 && Global_262145.f_26117 >= 0)
				{
					iVar1 = Global_262145.f_26117;
				}
				break;
			
			case -1804415708:
				iVar1 = 805000;
				if (bVar0 && Global_262145.f_26116 >= 0)
				{
					iVar1 = Global_262145.f_26116;
				}
				break;
			
			case 1934384720:
				iVar1 = 745000;
				if (bVar0 && Global_262145.f_26115 >= 0)
				{
					iVar1 = Global_262145.f_26115;
				}
				break;
			
			case -1349095620:
				iVar1 = 875000;
				if (bVar0 && Global_262145.f_26114 >= 0)
				{
					iVar1 = Global_262145.f_26114;
				}
				break;
			
			case -208911803:
				if (bParam2)
				{
					iVar1 = 918750;
					if (bVar0)
					{
						if (Global_262145.f_27724 >= 0)
						{
							iVar1 = Global_262145.f_27724;
						}
					}
				}
				else
				{
					iVar1 = 1225000;
					if (bVar0)
					{
						if (Global_262145.f_26427 >= 0)
						{
							iVar1 = Global_262145.f_26427;
						}
					}
					iVar2 = 918750;
					if (bVar0)
					{
						if (Global_262145.f_27724 >= 0)
						{
							iVar2 = Global_262145.f_27724;
						}
					}
				}
				break;
			
			case -324618589:
				iVar1 = 2575000;
				if (bVar0 && Global_262145.f_26113 >= 0)
				{
					iVar1 = Global_262145.f_26113;
				}
				break;
			
			case -664141241:
				iVar1 = 2875000;
				if (bVar0 && Global_262145.f_26112 >= 0)
				{
					iVar1 = Global_262145.f_26112;
				}
				break;
			
			case 1323778901:
				iVar1 = 2750000;
				if (bVar0 && Global_262145.f_26111 >= 0)
				{
					iVar1 = Global_262145.f_26111;
				}
				break;
			
			case -1620126302:
				iVar1 = 1875000;
				if (bVar0 && Global_262145.f_26110 >= 0)
				{
					iVar1 = Global_262145.f_26110;
				}
				break;
			
			case -447711397:
				iVar1 = 905000;
				if (bVar0 && Global_262145.f_26492 >= 0)
				{
					iVar1 = Global_262145.f_26492;
				}
				break;
		}
		switch (iParam1)
		{
			case 1118611807:
				if (bParam2)
				{
					iVar1 = 306000;
					if (bVar0)
					{
						if (Global_262145.f_27691 >= 0)
						{
							iVar1 = Global_262145.f_27691;
						}
					}
				}
				else
				{
					iVar1 = 408000;
					if (bVar0)
					{
						if (Global_262145.f_27690 >= 0)
						{
							iVar1 = Global_262145.f_27690;
						}
					}
					iVar2 = 306000;
					if (bVar0)
					{
						if (Global_262145.f_27691 >= 0)
						{
							iVar2 = Global_262145.f_27691;
						}
					}
				}
				break;
			
			case 409049982:
				if (bParam2)
				{
					iVar1 = 435000;
					if (bVar0)
					{
						if (Global_262145.f_27693 >= 0)
						{
							iVar1 = Global_262145.f_27693;
						}
					}
				}
				else
				{
					iVar1 = 580000;
					if (bVar0)
					{
						if (Global_262145.f_27692 >= 0)
						{
							iVar1 = Global_262145.f_27692;
						}
					}
					iVar2 = 435000;
					if (bVar0)
					{
						if (Global_262145.f_27693 >= 0)
						{
							iVar2 = Global_262145.f_27693;
						}
					}
				}
				break;
			
			case -1756021720:
				if (bParam2)
				{
					iVar1 = 1106250;
					if (bVar0)
					{
						if (Global_262145.f_27695 >= 0)
						{
							iVar1 = Global_262145.f_27695;
						}
					}
				}
				else
				{
					iVar1 = 1475000;
					if (bVar0)
					{
						if (Global_262145.f_27694 >= 0)
						{
							iVar1 = Global_262145.f_27694;
						}
					}
					iVar2 = 1106250;
					if (bVar0)
					{
						if (Global_262145.f_27695 >= 0)
						{
							iVar2 = Global_262145.f_27695;
						}
					}
				}
				break;
			
			case 2031587082:
				if (bParam2)
				{
					iVar1 = 1215000;
					if (bVar0)
					{
						if (Global_262145.f_27697 >= 0)
						{
							iVar1 = Global_262145.f_27697;
						}
					}
				}
				else
				{
					iVar1 = 1620000;
					if (bVar0)
					{
						if (Global_262145.f_27696 >= 0)
						{
							iVar1 = Global_262145.f_27696;
						}
					}
					iVar2 = 1215000;
					if (bVar0)
					{
						if (Global_262145.f_27697 >= 0)
						{
							iVar2 = Global_262145.f_27697;
						}
					}
				}
				break;
			
			case 1693751655:
				if (bParam2)
				{
					iVar1 = 981000;
					if (bVar0)
					{
						if (Global_262145.f_27699 >= 0)
						{
							iVar1 = Global_262145.f_27699;
						}
					}
				}
				else
				{
					iVar1 = 1308000;
					if (bVar0)
					{
						if (Global_262145.f_27698 >= 0)
						{
							iVar1 = Global_262145.f_27698;
						}
					}
					iVar2 = 981000;
					if (bVar0)
					{
						if (Global_262145.f_27699 >= 0)
						{
							iVar2 = Global_262145.f_27699;
						}
					}
				}
				break;
			
			case 987469656:
				if (bParam2)
				{
					iVar1 = 918000;
					if (bVar0)
					{
						if (Global_262145.f_27701 >= 0)
						{
							iVar1 = Global_262145.f_27701;
						}
					}
				}
				else
				{
					iVar1 = 1224000;
					if (bVar0)
					{
						if (Global_262145.f_27700 >= 0)
						{
							iVar1 = Global_262145.f_27700;
						}
					}
					iVar2 = 918000;
					if (bVar0)
					{
						if (Global_262145.f_27701 >= 0)
						{
							iVar2 = Global_262145.f_27701;
						}
					}
				}
				break;
			
			case 872704284:
				if (bParam2)
				{
					iVar1 = 1288500;
					if (bVar0)
					{
						if (Global_262145.f_27703 >= 0)
						{
							iVar1 = Global_262145.f_27703;
						}
					}
				}
				else
				{
					iVar1 = 1718000;
					if (bVar0)
					{
						if (Global_262145.f_27702 >= 0)
						{
							iVar1 = Global_262145.f_27702;
						}
					}
					iVar2 = 1288500;
					if (bVar0)
					{
						if (Global_262145.f_27703 >= 0)
						{
							iVar2 = Global_262145.f_27703;
						}
					}
				}
				break;
			
			case 408825843:
				if (bParam2)
				{
					iVar1 = 951000;
					if (bVar0)
					{
						if (Global_262145.f_27705 >= 0)
						{
							iVar1 = Global_262145.f_27705;
						}
					}
				}
				else
				{
					iVar1 = 1268000;
					if (bVar0)
					{
						if (Global_262145.f_27704 >= 0)
						{
							iVar1 = Global_262145.f_27704;
						}
					}
					iVar2 = 951000;
					if (bVar0)
					{
						if (Global_262145.f_27705 >= 0)
						{
							iVar2 = Global_262145.f_27705;
						}
					}
				}
				break;
			
			case 740289177:
				if (bParam2)
				{
					iVar1 = 1660500;
					if (bVar0)
					{
						if (Global_262145.f_27707 >= 0)
						{
							iVar1 = Global_262145.f_27707;
						}
					}
				}
				else
				{
					iVar1 = 2214000;
					if (bVar0)
					{
						if (Global_262145.f_27706 >= 0)
						{
							iVar1 = Global_262145.f_27706;
						}
					}
					iVar2 = 1660500;
					if (bVar0)
					{
						if (Global_262145.f_27707 >= 0)
						{
							iVar2 = Global_262145.f_27707;
						}
					}
				}
				break;
			
			case -834353991:
				if (bParam2)
				{
					iVar1 = 1275000;
					if (bVar0)
					{
						if (Global_262145.f_27709 >= 0)
						{
							iVar1 = Global_262145.f_27709;
						}
					}
				}
				else
				{
					iVar1 = 1700000;
					if (bVar0)
					{
						if (Global_262145.f_27708 >= 0)
						{
							iVar1 = Global_262145.f_27708;
						}
					}
					iVar2 = 1275000;
					if (bVar0)
					{
						if (Global_262145.f_27709 >= 0)
						{
							iVar2 = Global_262145.f_27709;
						}
					}
				}
				break;
			
			case 301304410:
				if (bParam2)
				{
					iVar1 = 502500;
					if (bVar0)
					{
						if (Global_262145.f_27711 >= 0)
						{
							iVar1 = Global_262145.f_27711;
						}
					}
				}
				else
				{
					iVar1 = 670000;
					if (bVar0)
					{
						if (Global_262145.f_27710 >= 0)
						{
							iVar1 = Global_262145.f_27710;
						}
					}
					iVar2 = 502500;
					if (bVar0)
					{
						if (Global_262145.f_27711 >= 0)
						{
							iVar2 = Global_262145.f_27711;
						}
					}
				}
				break;
			
			case 960812448:
				if (bParam2)
				{
					iVar1 = 2055000;
					if (bVar0)
					{
						if (Global_262145.f_27713 >= 0)
						{
							iVar1 = Global_262145.f_27713;
						}
					}
				}
				else
				{
					iVar1 = 2740000;
					if (bVar0)
					{
						if (Global_262145.f_27712 >= 0)
						{
							iVar1 = Global_262145.f_27712;
						}
					}
					iVar2 = 2055000;
					if (bVar0)
					{
						if (Global_262145.f_27713 >= 0)
						{
							iVar2 = Global_262145.f_27713;
						}
					}
				}
				break;
			
			case 1284356689:
				if (bParam2)
				{
					iVar1 = 1800000;
					if (bVar0)
					{
						if (Global_262145.f_27715 >= 0)
						{
							iVar1 = Global_262145.f_27715;
						}
					}
				}
				else
				{
					iVar1 = 2400000;
					if (bVar0)
					{
						if (Global_262145.f_27714 >= 0)
						{
							iVar1 = Global_262145.f_27714;
						}
					}
					iVar2 = 1800000;
					if (bVar0)
					{
						if (Global_262145.f_27715 >= 0)
						{
							iVar2 = Global_262145.f_27715;
						}
					}
				}
				break;
			
			case 394110044:
				iVar1 = 1470000;
				if (bVar0)
				{
					if (Global_262145.f_27793 >= 0)
					{
						iVar1 = Global_262145.f_27793;
					}
				}
				break;
			
			case -1254331310:
				iVar1 = 2275000;
				if (bVar0)
				{
					if (Global_262145.f_27784 >= 0)
					{
						iVar1 = Global_262145.f_27784;
					}
				}
				break;
			
			case 340154634:
				iVar1 = 3515000;
				if (bVar0)
				{
					if (Global_262145.f_27863 >= 0)
					{
						iVar1 = Global_262145.f_27863;
					}
				}
				break;
			
			case -1960756985:
				iVar1 = 3115000;
				if (bVar0)
				{
					if (Global_262145.f_27866 >= 0)
					{
						iVar1 = Global_262145.f_27866;
					}
				}
				break;
			
			case -1132721664:
				iVar1 = 2165000;
				if (bVar0)
				{
					if (Global_262145.f_27869 >= 0)
					{
						iVar1 = Global_262145.f_27869;
					}
				}
				break;
			
			case 83136452:
				iVar1 = 1175000;
				if (bVar0)
				{
					if (Global_262145.f_27870 >= 0)
					{
						iVar1 = Global_262145.f_27870;
					}
				}
				break;
			
			case 1456336509:
				iVar1 = 1285000;
				if (bVar0)
				{
					if (Global_262145.f_27871 >= 0)
					{
						iVar1 = Global_262145.f_27871;
					}
				}
				break;
			
			case -1358197432:
				iVar1 = 2310000;
				if (bVar0)
				{
					if (Global_262145.f_28556 >= 0)
					{
						iVar1 = Global_262145.f_28556;
					}
				}
				break;
			
			case 1492612435:
				iVar1 = 3400000;
				if (bVar0)
				{
					if (Global_262145.f_28560 >= 0)
					{
						iVar1 = Global_262145.f_28560;
					}
				}
				break;
			
			case 1181339704:
				iVar1 = 2997000;
				if (bVar0)
				{
					if (Global_262145.f_28561 >= 0)
					{
						iVar1 = Global_262145.f_28561;
					}
				}
				break;
			
			case -1728685474:
				iVar1 = 1510000;
				if (bVar0)
				{
					if (Global_262145.f_28562 >= 0)
					{
						iVar1 = Global_262145.f_28562;
					}
				}
				break;
			
			case 1107404867:
				iVar1 = 620000;
				if (bVar0)
				{
					iVar1 = (Global_262145.f_28570 + func_274(iParam1));
				}
				break;
			
			case 67753863:
				iVar1 = 700000;
				if (bVar0)
				{
					iVar1 = (Global_262145.f_23407 + func_274(iParam1));
				}
				break;
			
			case -2122646867:
				iVar1 = 815000;
				if (bVar0)
				{
					iVar1 = (Global_262145.f_26100 + func_274(iParam1));
				}
				break;
			
			case -838099166:
				iVar1 = 1220000;
				if (bVar0)
				{
					if (Global_262145.f_28552 >= 0)
					{
						iVar1 = Global_262145.f_28552;
					}
				}
				break;
			
			case -913589546:
				iVar1 = 520000;
				if (bVar0)
				{
					iVar1 = (Global_262145.f_7646 + func_274(iParam1));
				}
				break;
			
			case -2098954619:
				iVar1 = 1280000;
				if (bVar0)
				{
					if (Global_262145.f_28554 >= 0)
					{
						iVar1 = Global_262145.f_28554;
					}
				}
				break;
			
			case 2134119907:
				iVar1 = 378000;
				if (bVar0)
				{
					if (Global_262145.f_28548 >= 0)
					{
						iVar1 = Global_262145.f_28548;
					}
				}
				break;
			
			case 1802742206:
				iVar1 = 1288000;
				if (bVar0)
				{
					iVar1 = (Global_262145.f_18528 + func_274(iParam1));
				}
				break;
			
			case 1717532765:
				iVar1 = 925000;
				if (bVar0)
				{
					iVar1 = (Global_262145.f_28569 + func_274(iParam1));
				}
				break;
			
			case -631322662:
				iVar1 = 1380000;
				if (bVar0)
				{
					if (Global_262145.f_28555 >= 0)
					{
						iVar1 = Global_262145.f_28555;
					}
				}
				break;
			
			case -1810806490:
				iVar1 = 678000;
				if (bVar0)
				{
					if (Global_262145.f_28550 >= 0)
					{
						iVar1 = Global_262145.f_28550;
					}
				}
				break;
			}
	}
	switch (iParam1)
	{
		case 1488164764:
			iVar1 = 50000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 25000;
				if (Global_262145.f_7167 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_7167;
				}
			}
			break;
		
		case -349601129:
			iVar1 = 75000;
			if (bVar0)
			{
				if (Global_262145.f_7165 >= 0)
				{
					iVar1 = Global_262145.f_7165;
				}
			}
			break;
		
		case 92612664:
			iVar1 = 40000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 40000;
				if (Global_262145.f_7166 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_7166;
				}
			}
			break;
		
		case 231083307:
			iVar1 = 325000;
			if (bVar0)
			{
				if (Global_262145.f_7168 >= 0)
				{
					iVar1 = Global_262145.f_7168;
				}
			}
			break;
		
		case 117401876:
			iVar1 = 1150000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 750000;
				if (Global_262145.f_6595 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_6595;
				}
			}
			break;
		
		case -1297672541:
			iVar1 = 240000;
			if (bVar0)
			{
				if (Global_262145.f_6567 >= 0)
				{
					iVar1 = Global_262145.f_6567;
				}
			}
			break;
		
		case 408192225:
			if (!bParam2)
			{
				iVar1 = 500000;
				if (bVar0)
				{
					if (Global_262145.f_6569 >= 0)
					{
						iVar1 = Global_262145.f_6569;
					}
				}
			}
			else
			{
				iVar1 = 0;
			}
			break;
		
		case 767087018:
			iVar1 = 150000;
			if (bVar0)
			{
				if (Global_262145.f_6565 >= 0)
				{
					iVar1 = Global_262145.f_6565;
				}
			}
			break;
		
		case 1341619767:
			iVar1 = 950000;
			if (bVar0)
			{
				if (Global_262145.f_6620 >= 0)
				{
					iVar1 = Global_262145.f_6620;
				}
			}
			break;
		
		case -142942670:
			iVar1 = 275000;
			if (bVar0)
			{
				if (Global_262145.f_6568 >= 0)
				{
					iVar1 = Global_262145.f_6568;
				}
			}
			break;
		
		case -1403128555:
			iVar1 = 725000;
			if (bVar0)
			{
				if (Global_262145.f_6570 >= 0)
				{
					iVar1 = Global_262145.f_6570;
				}
			}
			break;
		
		case 486987393:
			if (!bParam2)
			{
				iVar1 = 195000;
				if (bVar0)
				{
					if (Global_262145.f_6566 >= 0)
					{
						iVar1 = Global_262145.f_6566;
					}
				}
			}
			else
			{
				iVar1 = 0;
			}
			break;
		
		case 1836027715:
			iVar1 = 75000;
			if (bVar0)
			{
				if (Global_262145.f_7169 >= 0)
				{
					iVar1 = Global_262145.f_7169;
				}
			}
			break;
		
		case -1205801634:
			iVar1 = 160000;
			if (bVar0)
			{
				if (Global_262145.f_7645 >= 0)
				{
					iVar1 = Global_262145.f_7645;
				}
			}
			break;
		
		case 1373123368:
			iVar1 = 125000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 120000;
				if (Global_262145.f_7648 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_7648;
				}
			}
			break;
		
		case 75131841:
			iVar1 = 200000;
			if (bVar0 && Global_262145.f_7646 >= 0)
			{
				iVar1 = Global_262145.f_7646;
			}
			if (bParam2)
			{
				iVar2 = iVar1;
				iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(200000) * 0.75f));
				if (bVar0 && Global_262145.f_25148 >= 0)
				{
					iVar1 = Global_262145.f_25148;
				}
			}
			break;
		
		case 841808271:
			iVar1 = 100000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 140000;
				if (Global_262145.f_7647 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_7647;
				}
			}
			break;
		
		case -431692672:
			iVar1 = 85000;
			if (bVar0)
			{
				if (Global_262145.f_7649 >= 0)
				{
					iVar1 = Global_262145.f_7649;
				}
			}
			break;
		
		case -1237253773:
			iVar1 = 249000;
			if (bVar0)
			{
				if (Global_262145.f_7650 >= 0)
				{
					iVar1 = Global_262145.f_7650;
				}
			}
			break;
		
		case 1078682497:
			iVar1 = 400000;
			if (bVar0)
			{
				if (Global_262145.f_7644 >= 0)
				{
					iVar1 = Global_262145.f_7644;
				}
			}
			break;
		
		case 1824333165:
			iVar1 = 658000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 1150000;
				if (Global_262145.f_8071 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_8071;
				}
			}
			break;
		
		case 165154707:
			iVar1 = 1750000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 1700000;
				if (Global_262145.f_8072 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_8072;
				}
			}
			break;
		
		case -339587598:
			if (!bParam2)
			{
				iVar1 = 1500000;
				if (bVar0)
				{
					if (Global_262145.f_8073 >= 0)
					{
						iVar1 = Global_262145.f_8073;
					}
				}
			}
			else
			{
				iVar1 = 1600000;
				if (bVar0)
				{
					if (Global_262145.f_8074 >= 0)
					{
						iVar1 = Global_262145.f_8074;
					}
				}
			}
			break;
		
		case 1011753235:
			if (bParam2)
			{
				iVar1 = 350000;
				if (bVar0 || iParam3 == 1)
				{
					iVar1 = 665000;
					if (Global_262145.f_8069 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_8069;
					}
				}
			}
			else
			{
				iVar1 = 395000;
				if (bVar0 || iParam3 == 1)
				{
					iVar1 = 665000;
					if (Global_262145.f_8070 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_8070;
					}
				}
			}
			break;
		
		case 743478836:
			iVar1 = 120000;
			if (bVar0)
			{
				if (Global_262145.f_7814 >= 0)
				{
					iVar1 = Global_262145.f_7814;
				}
			}
			break;
		
		case -845961253:
			iVar1 = 742000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 742014;
				if (Global_262145.f_7813 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_7813;
				}
			}
			break;
		
		case -159126838:
			iVar1 = 92500;
			if (bVar0)
			{
				if (Global_262145.f_8387 >= 0)
				{
					iVar1 = Global_262145.f_8387;
				}
			}
			break;
		
		case 1265391242:
			iVar1 = 82000;
			if (bVar0)
			{
				if (Global_262145.f_8388 >= 0)
				{
					iVar1 = Global_262145.f_8388;
				}
			}
			break;
		
		case -1089039904:
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_8389 >= 0)
				{
					iVar1 = Global_262145.f_8389;
				}
			}
			break;
		
		case 444171386:
			if (!bParam2)
			{
				iVar1 = 45000;
				if (bVar0)
				{
					if (Global_262145.f_8620 >= 0)
					{
						iVar1 = Global_262145.f_8620;
					}
				}
			}
			else
			{
				iVar1 = 59850;
				if (bVar0)
				{
					if (Global_262145.f_19711 >= 0)
					{
						iVar1 = Global_262145.f_19711;
					}
				}
			}
			break;
		
		case 941800958:
			if (!bParam2)
			{
				iVar1 = 680000;
				if (bVar0)
				{
					if (Global_262145.f_8621 >= 0)
					{
						iVar1 = Global_262145.f_8621;
					}
				}
			}
			else
			{
				iVar1 = 904400;
				if (bVar0)
				{
					if (Global_262145.f_19712 >= 0)
					{
						iVar1 = Global_262145.f_19712;
					}
				}
			}
			break;
		
		case 509498602:
			if (!bParam2)
			{
				iVar1 = 125000;
				if (bVar0)
				{
					if (Global_262145.f_8622 >= 0)
					{
						iVar1 = Global_262145.f_8622;
					}
				}
			}
			else
			{
				iVar1 = 166250;
				if (bVar0)
				{
					if (Global_262145.f_19713 >= 0)
					{
						iVar1 = Global_262145.f_19713;
					}
				}
			}
			break;
		
		case 1753414259:
			iVar1 = 48000;
			if (bVar0)
			{
				if (Global_262145.f_8623 >= 0)
				{
					iVar1 = Global_262145.f_8623;
				}
			}
			break;
		
		case 296357396:
			if (!bParam2)
			{
				iVar1 = 65000;
				if (bVar0)
				{
					if (Global_262145.f_8624 >= 0)
					{
						iVar1 = Global_262145.f_8624;
					}
				}
			}
			else
			{
				iVar1 = 86450;
				if (bVar0)
				{
					if (Global_262145.f_19714 >= 0)
					{
						iVar1 = Global_262145.f_19714;
					}
				}
			}
			break;
		
		case -2107990196:
			iVar1 = 375000;
			if (bVar0)
			{
				if (Global_262145.f_8625 >= 0)
				{
					iVar1 = Global_262145.f_8625;
				}
			}
			break;
		
		case 970385471:
			if (!bParam2)
			{
				iVar1 = 3000000;
				if (bVar0)
				{
					if (Global_262145.f_8626 >= 0)
					{
						iVar1 = Global_262145.f_8626;
					}
				}
			}
			else
			{
				iVar1 = 3990000;
				if (bVar0)
				{
					if (Global_262145.f_19715 >= 0)
					{
						iVar1 = Global_262145.f_19715;
					}
				}
			}
			break;
		
		case -1860900134:
			if (!bParam2)
			{
				iVar1 = 1350000;
				if (bVar0)
				{
					if (Global_262145.f_8627 >= 0)
					{
						iVar1 = Global_262145.f_8627;
					}
				}
			}
			else
			{
				iVar1 = 1795500;
				if (bVar0)
				{
					if (Global_262145.f_19716 >= 0)
					{
						iVar1 = Global_262145.f_19716;
					}
				}
			}
			break;
		
		case 2071877360:
			if (!bParam2)
			{
				iVar1 = 675000;
				if (bVar0)
				{
					if (Global_262145.f_8628 >= 0)
					{
						iVar1 = Global_262145.f_8628;
					}
				}
			}
			else
			{
				iVar1 = 897750;
				if (bVar0)
				{
					if (Global_262145.f_19717 >= 0)
					{
						iVar1 = Global_262145.f_19717;
					}
				}
			}
			break;
		
		case -1372848492:
			if (!bParam2)
			{
				iVar1 = 95000;
				if (bVar0)
				{
					if (Global_262145.f_8629 >= 0)
					{
						iVar1 = Global_262145.f_8629;
					}
				}
			}
			else
			{
				iVar1 = 126350;
				if (bVar0)
				{
					if (Global_262145.f_19718 >= 0)
					{
						iVar1 = Global_262145.f_19718;
					}
				}
			}
			break;
		
		case 410882957:
			if (!bParam2)
			{
				iVar1 = 525000;
				if (bVar0)
				{
					if (Global_262145.f_8630 >= 0)
					{
						iVar1 = Global_262145.f_8630;
					}
				}
			}
			else
			{
				iVar1 = 698250;
				if (bVar0)
				{
					if (Global_262145.f_19719 >= 0)
					{
						iVar1 = Global_262145.f_19719;
					}
				}
			}
			break;
		
		case 640818791:
			if (!bParam2)
			{
				iVar1 = 750000;
				if (bVar0)
				{
					if (Global_262145.f_8631 >= 0)
					{
						iVar1 = Global_262145.f_8631;
					}
				}
			}
			else
			{
				iVar1 = 997500;
				if (bVar0)
				{
					if (Global_262145.f_19720 >= 0)
					{
						iVar1 = Global_262145.f_19720;
					}
				}
			}
			break;
		
		case -2007026063:
			if (!bParam2)
			{
				iVar1 = 550000;
				if (bVar0)
				{
					if (Global_262145.f_8637 >= 0)
					{
						iVar1 = Global_262145.f_8637;
					}
				}
			}
			else
			{
				iVar1 = 731500;
				if (bVar0)
				{
					if (Global_262145.f_19726 >= 0)
					{
						iVar1 = Global_262145.f_19726;
					}
				}
			}
			break;
		
		case -2052737935:
			if (!bParam2)
			{
				iVar1 = 32500;
				if (bVar0)
				{
					if (Global_262145.f_8632 >= 0)
					{
						iVar1 = Global_262145.f_8632;
					}
				}
			}
			else
			{
				iVar1 = 43225;
				if (bVar0)
				{
					if (Global_262145.f_19721 >= 0)
					{
						iVar1 = Global_262145.f_19721;
					}
				}
			}
			break;
		
		case -82626025:
			if (!bParam2)
			{
				iVar1 = 1950000;
				if (bVar0)
				{
					if (Global_262145.f_8633 >= 0)
					{
						iVar1 = Global_262145.f_8633;
					}
				}
			}
			else
			{
				iVar1 = 2593500;
				if (bVar0)
				{
					if (Global_262145.f_19722 >= 0)
					{
						iVar1 = Global_262145.f_19722;
					}
				}
			}
			break;
		
		case -1600252419:
			if (!bParam2)
			{
				iVar1 = 2850000;
				if (bVar0)
				{
					if (Global_262145.f_8635 >= 0)
					{
						iVar1 = Global_262145.f_8635;
					}
				}
			}
			else
			{
				iVar1 = 3790500;
				if (bVar0)
				{
					if (Global_262145.f_19724 >= 0)
					{
						iVar1 = Global_262145.f_19724;
					}
				}
			}
			break;
		
		case -2096818938:
			if (!bParam2)
			{
				iVar1 = 950000;
				if (bVar0)
				{
					if (Global_262145.f_8634 >= 0)
					{
						iVar1 = Global_262145.f_8634;
					}
				}
			}
			else
			{
				iVar1 = 1263500;
				if (bVar0)
				{
					if (Global_262145.f_19723 >= 0)
					{
						iVar1 = Global_262145.f_19723;
					}
				}
			}
			break;
		
		case 1077420264:
			if (!bParam2)
			{
				iVar1 = 995000;
				if (bVar0)
				{
					if (Global_262145.f_8636 >= 0)
					{
						iVar1 = Global_262145.f_8636;
					}
				}
			}
			else
			{
				iVar1 = 1323350;
				if (bVar0)
				{
					if (Global_262145.f_19725 >= 0)
					{
						iVar1 = Global_262145.f_19725;
					}
				}
			}
			break;
		
		case -901163259:
			iVar1 = 500000;
			if (bVar0)
			{
				if (!bParam2)
				{
					if (Global_262145.f_8724 >= 0)
					{
						iVar1 = Global_262145.f_8724;
					}
				}
				else
				{
					iVar1 = Global_262145.f_19729;
				}
			}
			break;
		
		case 1233534620:
			iVar1 = 250000;
			if (bVar0 || iParam3 == 1)
			{
				if (!bParam2)
				{
					iVar1 = 500000;
					if (Global_262145.f_8726 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_8726;
					}
				}
				else
				{
					iVar1 = Global_262145.f_19728;
				}
			}
			break;
		
		case -1066334226:
			iVar1 = 1325000;
			if (bVar0)
			{
				if (!bParam2)
				{
					if (Global_262145.f_8728 >= 0)
					{
						iVar1 = Global_262145.f_8728;
					}
				}
				else
				{
					iVar1 = Global_262145.f_19730;
				}
			}
			break;
		
		case 1039032026:
			iVar1 = 42000;
			if (bVar0)
			{
				if (!bParam2)
				{
					if (Global_262145.f_8723 >= 0)
					{
						iVar1 = Global_262145.f_8723;
					}
				}
				else
				{
					iVar1 = Global_262145.f_19733;
				}
			}
			break;
		
		case 1923400478:
			iVar1 = 71000;
			if (bVar0)
			{
				if (!bParam2)
				{
					if (Global_262145.f_8727 >= 0)
					{
						iVar1 = Global_262145.f_8727;
					}
				}
				else
				{
					iVar1 = Global_262145.f_19732;
				}
			}
			break;
		
		case 723973206:
			iVar1 = 62000;
			if (bVar0)
			{
				if (!bParam2)
				{
					iVar1 = 62000;
					if (Global_262145.f_8725 >= 0)
					{
						iVar1 = Global_262145.f_8725;
					}
				}
				else
				{
					iVar1 = Global_262145.f_19731;
				}
			}
			break;
		
		case -326143852:
			iVar1 = 279000;
			if (bVar0 || iParam3 == 1)
			{
				if (!bParam2)
				{
					iVar1 = 665000;
					if (Global_262145.f_19727 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_19727;
					}
				}
				else
				{
					iVar1 = Global_262145.f_19734;
				}
			}
			break;
		
		case -401643538:
			iVar1 = 277000;
			if (bVar0)
			{
				if (Global_262145.f_16903 >= 0)
				{
					iVar1 = Global_262145.f_16903;
				}
			}
			break;
		
		case -915704871:
			iVar1 = 315000;
			if (bVar0 && Global_262145.f_16901 >= 0)
			{
				iVar1 = Global_262145.f_16901;
			}
			if (bParam2)
			{
				iVar2 = iVar1;
				iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(315000) * 0.75f));
			}
			break;
		
		case 349315417:
			iVar1 = 230000;
			if (bVar0)
			{
				if (Global_262145.f_16902 >= 0)
				{
					iVar1 = Global_262145.f_16902;
				}
			}
			break;
		
		case 237764926:
			iVar1 = 535000;
			if (bVar0)
			{
				if (Global_262145.f_16900 >= 0)
				{
					iVar1 = Global_262145.f_16900;
				}
			}
			break;
		
		case 729783779:
			iVar1 = 49500;
			if (bVar0 && Global_262145.f_8939 >= 0)
			{
				iVar1 = Global_262145.f_8939;
			}
			if (bParam2)
			{
				iVar2 = iVar1;
				iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(49500) * 0.75f));
				if (bVar0 && Global_262145.f_25149 >= 0)
				{
					iVar1 = Global_262145.f_25149;
				}
			}
			break;
		
		case -589178377:
			iVar1 = 37500;
			if (bVar0 && Global_262145.f_8938 >= 0)
			{
				iVar1 = Global_262145.f_8938;
			}
			if (bParam2)
			{
				iVar2 = iVar1;
				iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(37500) * 0.75f));
				if (bVar0 && Global_262145.f_25147 >= 0)
				{
					iVar1 = Global_262145.f_25147;
				}
			}
			break;
		
		case -1106353882:
			iVar1 = 350000;
			if (bVar0)
			{
				if (Global_262145.f_8936 >= 0)
				{
					iVar1 = Global_262145.f_8936;
				}
			}
			break;
		
		case -631760477:
			iVar1 = 385000;
			if (bVar0)
			{
				if (Global_262145.f_8937 >= 0)
				{
					iVar1 = Global_262145.f_8937;
				}
			}
			break;
		
		case -1566741232:
			iVar1 = 975000;
			if (bVar0)
			{
				if (Global_262145.f_10593 >= 0)
				{
					iVar1 = Global_262145.f_10593;
				}
			}
			break;
		
		case -1214293858:
			iVar1 = 10000000;
			if (bVar0)
			{
				if (Global_262145.f_10594 >= 0)
				{
					iVar1 = Global_262145.f_10594;
				}
			}
			break;
		
		case 1987142870:
			iVar1 = 1950000;
			if (bVar0)
			{
				if (Global_262145.f_10595 >= 0)
				{
					iVar1 = Global_262145.f_10595;
				}
			}
			break;
		
		case 1075432268:
			iVar1 = 5150000;
			if (bVar0)
			{
				if (Global_262145.f_10596 >= 0)
				{
					iVar1 = Global_262145.f_10596;
				}
			}
			break;
		
		case -498054846:
			iVar1 = 195000;
			if (bVar0)
			{
				if (Global_262145.f_10597 >= 0)
				{
					iVar1 = Global_262145.f_10597;
				}
			}
			break;
		
		case 1581459400:
			if (!bParam2)
			{
				iVar1 = 845000;
				if (bVar0)
				{
					if (Global_262145.f_10598 >= 0)
					{
						iVar1 = Global_262145.f_10598;
					}
				}
			}
			else
			{
				iVar1 = 0;
			}
			break;
		
		case -1479664699:
			iVar1 = 715000;
			if (bVar0)
			{
				if (Global_262145.f_10885 >= 0)
				{
					iVar1 = Global_262145.f_10885;
				}
			}
			break;
		
		case 349605904:
			iVar1 = 225000;
			if (bVar0)
			{
				if (Global_262145.f_10886 >= 0)
				{
					iVar1 = Global_262145.f_10886;
				}
			}
			break;
		
		case 784565758:
			iVar1 = 695000;
			if (bVar0)
			{
				if (Global_262145.f_10887 >= 0)
				{
					iVar1 = Global_262145.f_10887;
				}
			}
			break;
		
		case 1663218586:
			iVar1 = 2200000;
			if (bVar0)
			{
				if (Global_262145.f_10888 >= 0)
				{
					iVar1 = Global_262145.f_10888;
				}
			}
			break;
		
		case 1070967343:
			iVar1 = 1750000;
			if (bVar0)
			{
				if (Global_262145.f_10889 >= 0)
				{
					iVar1 = Global_262145.f_10889;
				}
			}
			break;
		
		case -1353081087:
			iVar1 = 630000;
			if (bVar0)
			{
				if (Global_262145.f_10890 >= 0)
				{
					iVar1 = Global_262145.f_10890;
				}
			}
			break;
		
		case -1361687965:
			iVar1 = 225000;
			iVar1 = (Global_262145.f_11867 + func_274(iParam1));
			break;
		
		case -2040426790:
			iVar1 = 100000;
			if (bVar0 && Global_262145.f_11866 >= 0)
			{
				iVar1 = (Global_262145.f_11866 + func_274(iParam1));
			}
			break;
		
		case 525509695:
			iVar1 = 32500;
			if (bVar0 && Global_262145.f_11863 >= 0)
			{
				iVar1 = Global_262145.f_11863;
			}
			break;
		
		case 1896491931:
			iVar1 = (Global_262145.f_11863 + func_274(iParam1));
			break;
		
		case -2119578145:
			iVar1 = 36000;
			if (bVar0 && Global_262145.f_11862 >= 0)
			{
				iVar1 = Global_262145.f_11862;
			}
			break;
		
		case -1790546981:
			iVar1 = 95000;
			iVar1 = (Global_262145.f_11862 + func_274(iParam1));
			break;
		
		case -682211828:
			iVar1 = 29000;
			if (bVar0 && Global_262145.f_11864 >= 0)
			{
				iVar1 = Global_262145.f_11864;
			}
			break;
		
		case -1013450936:
			iVar1 = 85000;
			iVar1 = (Global_262145.f_11864 + func_274(iParam1));
			break;
		
		case 523724515:
			iVar1 = 5500;
			if (bVar0 && Global_262145.f_11865 >= 0)
			{
				iVar1 = Global_262145.f_11865;
			}
			break;
		
		case 2006667053:
			iVar1 = 105000;
			iVar1 = (Global_262145.f_11865 + func_274(iParam1));
			break;
		
		case -688189648:
		case -1375060657:
		case -1293924613:
			iVar1 = (Global_262145.f_25150 + func_274(iParam1));
			break;
		
		case -2061049099:
		case 373261600:
		case 1742022738:
			iVar1 = (Global_262145.f_8939 + func_274(iParam1));
			break;
		
		case 628003514:
		case 1537277726:
		case 1239571361:
			iVar1 = (Global_262145.f_23615 + func_274(iParam1));
			break;
		
		case 1009171724:
		case -1924800695:
		case -1744505657:
			iVar1 = (Global_262145.f_25151 + func_274(iParam1));
			break;
		
		case -27326686:
		case -1812949672:
		case -1374500452:
			iVar1 = (Global_262145.f_25153 + func_274(iParam1));
			break;
		
		case 1721676810:
		case 840387324:
		case -715746948:
			iVar1 = (Global_262145.f_25147 + func_274(iParam1));
			break;
		
		case 668439077:
		case -1694081890:
		case -2042350822:
			iVar1 = (Global_262145.f_25148 + func_274(iParam1));
			break;
		
		case -831834716:
			iVar1 = 550000;
			if (bVar0 && Global_262145.f_12084 >= 0)
			{
				iVar1 = Global_262145.f_12084;
			}
			break;
		
		case 2068293287:
			iVar1 = 650000;
			if (bVar0 && Global_262145.f_12085 >= 0)
			{
				iVar1 = Global_262145.f_12085;
			}
			break;
		
		case 1878062887:
			iVar1 = 149000;
			if (bVar0 && Global_262145.f_12781 >= 0)
			{
				iVar1 = Global_262145.f_12781;
			}
			break;
		
		case 470404958:
			iVar1 = 374000;
			if (bVar0 && Global_262145.f_12782 >= 0)
			{
				iVar1 = Global_262145.f_12782;
			}
			break;
		
		case 634118882:
			iVar1 = 247000;
			if (bVar0 && Global_262145.f_12783 >= 0)
			{
				iVar1 = Global_262145.f_12783;
			}
			break;
		
		case 666166960:
			iVar1 = 513000;
			if (bVar0 && Global_262145.f_12784 >= 0)
			{
				iVar1 = Global_262145.f_12784;
			}
			break;
		
		case 906642318:
			iVar1 = 154000;
			if (bVar0 && Global_262145.f_12785 >= 0)
			{
				iVar1 = Global_262145.f_12785;
			}
			break;
		
		case 704435172:
			iVar1 = 396000;
			if (bVar0 && Global_262145.f_12786 >= 0)
			{
				iVar1 = Global_262145.f_12786;
			}
			break;
		
		case -2030171296:
			iVar1 = 254000;
			if (bVar0 && Global_262145.f_12787 >= 0)
			{
				iVar1 = Global_262145.f_12787;
			}
			break;
		
		case -604842630:
			iVar1 = 558000;
			if (bVar0 && Global_262145.f_12788 >= 0)
			{
				iVar1 = Global_262145.f_12788;
			}
			break;
		
		case -114627507:
			iVar1 = 1650000;
			if (bVar0 && Global_262145.f_12789 >= 0)
			{
				iVar1 = Global_262145.f_12789;
			}
			break;
		
		case -1660945322:
			iVar1 = 995000;
			if (bVar0 && Global_262145.f_12790 >= 0)
			{
				iVar1 = Global_262145.f_12790;
			}
			break;
		
		case -1943285540:
			iVar1 = 585000;
			if (bVar0 && Global_262145.f_12791 >= 0)
			{
				iVar1 = Global_262145.f_12791;
			}
			break;
		
		case -1485523546:
			iVar1 = 116000;
			if (bVar0 && Global_262145.f_12792 >= 0)
			{
				iVar1 = Global_262145.f_12792;
			}
			break;
		
		case -888242983:
			iVar1 = 325000;
			if (bVar0 && Global_262145.f_12793 >= 0)
			{
				iVar1 = Global_262145.f_12793;
			}
			break;
		
		case 1489967196:
			iVar1 = 208000;
			if (bVar0 && Global_262145.f_12794 >= 0)
			{
				iVar1 = Global_262145.f_12794;
			}
			break;
		
		case 1922255844:
			iVar1 = 438000;
			if (bVar0 && Global_262145.f_12795 >= 0)
			{
				iVar1 = Global_262145.f_12795;
			}
			break;
		
		case 1102544804:
			iVar1 = 695000;
			if (bVar0 && Global_262145.f_12796 >= 0)
			{
				iVar1 = Global_262145.f_12796;
			}
			break;
		
		case 710198397:
			iVar1 = 2113000;
			if (bVar0 && Global_262145.f_12797 >= 0)
			{
				iVar1 = Global_262145.f_12797;
			}
			break;
		
		case -1671539132:
			iVar1 = 3330000;
			if (bVar0 && Global_262145.f_12798 >= 0)
			{
				iVar1 = Global_262145.f_12798;
			}
			break;
		
		case 972671128:
			iVar1 = 375000;
			if (bVar0 && Global_262145.f_12858 >= 0)
			{
				iVar1 = Global_262145.f_12858;
			}
			break;
		
		case 970598228:
			if (bVar0 && Global_262145.f_12977 >= 0)
			{
				iVar1 = Global_262145.f_12977;
			}
			break;
		
		case -295689028:
			iVar1 = (Global_262145.f_12977 + func_274(iParam1));
			break;
		
		case -1041692462:
			if (bVar0 && Global_262145.f_12979 >= 0)
			{
				iVar1 = Global_262145.f_12979;
			}
			break;
		
		case 633712403:
			iVar1 = (Global_262145.f_12979 + func_274(iParam1));
			break;
		
		case -602287871:
			iVar1 = 982000;
			if (bVar0 && Global_262145.f_13007 >= 0)
			{
				iVar1 = Global_262145.f_13007;
			}
			break;
		
		case -2039755226:
			iVar1 = (Global_262145.f_11862 + func_274(iParam1));
			break;
		
		case -1126264336:
			iVar1 = (Global_262145.f_6577 + func_274(iParam1));
			break;
		
		case 223258115:
			iVar1 = (Global_262145.f_14514 + func_274(iParam1));
			break;
		
		case 1119641113:
			iVar1 = (Global_262145.f_8939 + func_274(iParam1));
			break;
		
		case -1797613329:
			iVar1 = (Global_262145.f_14515 + func_274(iParam1));
			break;
		
		case 16646064:
			iVar1 = Global_262145.f_14513;
			break;
		
		case -899509638:
			iVar1 = (Global_262145.f_14513 + func_274(iParam1));
			break;
		
		case 1356124575:
			iVar1 = (950000 + func_274(iParam1));
			if (bVar0)
			{
				if (Global_262145.f_8634 >= 0)
				{
					iVar1 = (Global_262145.f_8634 + func_274(iParam1));
				}
			}
			break;
		
		case -1924433270:
			iVar1 = (1350000 + func_274(iParam1));
			if (bVar0)
			{
				if (Global_262145.f_8627 >= 0)
				{
					iVar1 = (Global_262145.f_8627 + func_274(iParam1));
				}
			}
			break;
	}
	switch (iParam1)
	{
		case -591610296:
			if (bVar0)
			{
				if (Global_262145.f_7175 >= 0)
				{
					iVar1 = Global_262145.f_7175;
				}
			}
			break;
		
		case 499169875:
			if (bVar0)
			{
				if (Global_262145.f_7176 >= 0)
				{
					iVar1 = Global_262145.f_7176;
				}
			}
			break;
		
		case -377465520:
			if (bVar0)
			{
				if (Global_262145.f_7177 >= 0)
				{
					iVar1 = Global_262145.f_7177;
				}
			}
			break;
		
		case 1349725314:
			if (bVar0)
			{
				if (Global_262145.f_7178 >= 0)
				{
					iVar1 = Global_262145.f_7178;
				}
			}
			break;
		
		case 873639469:
			if (bVar0)
			{
				if (Global_262145.f_7179 >= 0)
				{
					iVar1 = Global_262145.f_7179;
				}
			}
			break;
	}
	if (bVar0)
	{
		switch (iParam1)
		{
			case -566387422:
				if (bParam2)
				{
					if (Global_262145.f_4040 >= 0)
					{
						iVar1 = Global_262145.f_4040;
					}
				}
				break;
			
			case 544021352:
				if (Global_262145.f_4056 >= 0)
				{
					iVar1 = Global_262145.f_4056;
				}
				break;
			
			case 37348240:
				if (Global_262145.f_4050 >= 0)
				{
					iVar1 = Global_262145.f_4050;
				}
				break;
			
			case 11251904:
				if (Global_262145.f_4026 >= 0)
				{
					iVar1 = Global_262145.f_4026;
				}
				break;
			}
	}
	if (bVar0 || iParam3 == 1)
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case 108773431:
					iVar1 = 138000;
					if (Global_262145.f_7172 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_7172;
					}
					break;
				
				case -1041692462:
					iVar1 = 126000;
					if (Global_262145.f_7171 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_7171;
					}
					break;
				
				case 1545842587:
					iVar1 = 850000;
					if (Global_262145.f_7173 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_7173;
					}
					break;
				
				case -1622444098:
					iVar1 = 150000;
					if (Global_262145.f_4096 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_4096;
					}
					break;
				
				case 349605904:
					iVar1 = 225000;
					if (Global_262145.f_11867 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_11867;
					}
					break;
				
				case 92612664:
					iVar1 = 40000;
					if (Global_262145.f_8390 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_8390;
					}
					break;
				
				case 729783779:
					iVar1 = 49500;
					if (Global_262145.f_14517 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_14517;
					}
					if (bParam2)
					{
						iVar2 = iVar1;
						iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * 0.75f));
						if (bVar0 && Global_262145.f_25149 >= 0)
						{
							iVar1 = Global_262145.f_25149;
						}
					}
					break;
				
				case -310465116:
					iVar1 = 30000;
					if (Global_262145.f_14516 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_14516;
					}
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case -1622444098:
					if (Global_262145.f_7170 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_7170;
					}
					break;
				
				case -1041692462:
					if (Global_262145.f_12979 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_12979;
					}
					break;
				}
			}
	}
	if (iVar1 == -1)
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = iVar1;
	}
	*uParam0 = iVar1;
	uParam0->f_3 = SYSTEM::FLOOR((IntToFloat(SYSTEM::FLOOR((IntToFloat(iVar1) * 0.5f))) * 0.1f));
	uParam0->f_5 = SYSTEM::FLOOR((IntToFloat(SYSTEM::FLOOR((IntToFloat(iVar1) * 0.5f))) * 0.25f));
	uParam0->f_1 = SYSTEM::FLOOR((IntToFloat(iVar1) * 0.5f));
	if (!func_272(iParam1))
	{
		uParam0->f_2 = SYSTEM::FLOOR((IntToFloat(SYSTEM::FLOOR((IntToFloat(iVar2) * 0.5f))) * 0.25f));
		uParam0->f_4 = SYSTEM::FLOOR((IntToFloat(uParam0->f_2) * 0.1f));
		if (uParam0->f_4 > Global_262145.f_16306 && uParam0->f_4 <= Global_262145.f_16307)
		{
			uParam0->f_4 = Global_262145.f_16306;
		}
	}
	else
	{
		uParam0->f_2 = SYSTEM::FLOOR((IntToFloat(iVar2) * 0.06f));
		uParam0->f_4 = SYSTEM::FLOOR((IntToFloat(uParam0->f_2) * 0.1f));
		if (uParam0->f_4 > Global_262145.f_23485)
		{
			uParam0->f_4 = Global_262145.f_23485;
		}
	}
	if (bVar0)
	{
		uParam0->f_3 = SYSTEM::FLOOR((IntToFloat(uParam0->f_1) * 0.2f));
	}
	return 1;
}

int func_272(int iParam0)
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
		case 159274291:
		case 433954513:
		case 1483171323:
		case 886810209:
		case 1561920505:
		case -410205223:
		case 903794909:
		case -391595372:
		case 1489874736:
		case -1693015116:
		case -692292317:
		case -1435527158:
		case 1180875963:
		case 682434785:
		case -1912017790:
		case -1649536104:
		case 989294410:
		case -312295511:
		case 941494461:
		case -1590337689:
		case 1254014755:
		case 1945374990:
		case 1653666139:
		case -638562243:
		case 2069146067:
		case 2044532910:
		case 1416466158:
			return 1;
			break;
		
		default:
			if (Global_2513563 != 0)
			{
				if (Global_2513563 == iParam0)
				{
					return 1;
				}
			}
			if (func_273(iParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_273(int iParam0)
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

int func_274(int iParam0)
{
	switch (iParam0)
	{
		case -1361687965:
			return Global_262145.f_11869;
			break;
		
		case -2040426790:
			return Global_262145.f_11872;
			break;
		
		case 1896491931:
			return Global_262145.f_11871;
			break;
		
		case -1790546981:
			return Global_262145.f_11870;
			break;
		
		case -1013450936:
			return Global_262145.f_11868;
			break;
		
		case 2006667053:
			return Global_262145.f_11873;
			break;
		
		case -295689028:
			return Global_262145.f_12978;
			break;
		
		case 633712403:
			return Global_262145.f_12980;
			break;
		
		case -2039755226:
			return Global_262145.f_14518;
			break;
		
		case -1126264336:
			return Global_262145.f_14519;
			break;
		
		case 223258115:
			return Global_262145.f_14520;
			break;
		
		case 1119641113:
			return Global_262145.f_14521;
			break;
		
		case -1797613329:
			return Global_262145.f_14522;
			break;
		
		case -899509638:
			return Global_262145.f_14523;
			break;
		
		case -2022483795:
			return Global_262145.f_19169;
			break;
		
		case 1790834270:
			return Global_262145.f_19173;
			break;
		
		case -757735410:
			return Global_262145.f_19171;
			break;
		
		case -482719877:
			return Global_262145.f_19163;
			break;
		
		case 1074745671:
			return Global_262145.f_19165;
			break;
		
		case 1093792632:
			return Global_262145.f_19167;
			break;
		
		case 196747873:
			return Global_262145.f_19168;
			break;
		
		case 1356124575:
			return Global_262145.f_20896;
			break;
		
		case -1924433270:
			return Global_262145.f_20895;
			break;
		
		case 668439077:
			return Global_262145.f_25198;
			break;
		
		case 1721676810:
			return Global_262145.f_25197;
			break;
		
		case 1009171724:
			return Global_262145.f_25201;
			break;
		
		case 628003514:
			return Global_262145.f_25202;
			break;
		
		case -27326686:
			return Global_262145.f_25203;
			break;
		
		case -688189648:
			return Global_262145.f_25200;
			break;
		
		case -2061049099:
			return Global_262145.f_25199;
			break;
		
		case -1374500452:
			return Global_262145.f_25217;
			break;
		
		case -1812949672:
			return Global_262145.f_25210;
			break;
		
		case -1924800695:
			return Global_262145.f_25208;
			break;
		
		case -1694081890:
			return Global_262145.f_25205;
			break;
		
		case 373261600:
			return Global_262145.f_25206;
			break;
		
		case 1537277726:
			return Global_262145.f_25209;
			break;
		
		case 840387324:
			return Global_262145.f_25204;
			break;
		
		case -1375060657:
			return Global_262145.f_25207;
			break;
		
		case -1744505657:
			return Global_262145.f_25215;
			break;
		
		case -2042350822:
			return Global_262145.f_25212;
			break;
		
		case 1742022738:
			return Global_262145.f_25213;
			break;
		
		case 1239571361:
			return Global_262145.f_25216;
			break;
		
		case -715746948:
			return Global_262145.f_25211;
			break;
		
		case -1293924613:
			return Global_262145.f_25214;
			break;
		
		case 1802742206:
			return Global_262145.f_28568;
			break;
		
		case -2122646867:
			return Global_262145.f_28563;
			break;
		
		case 1717532765:
			return Global_262145.f_28567;
			break;
		
		case 1107404867:
			return Global_262145.f_28565;
			break;
		
		case 67753863:
			return Global_262145.f_28564;
			break;
		
		case -913589546:
			return Global_262145.f_28566;
			break;
	}
	return 0;
}

int func_275(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	iVar0 = VEHICLE::GET_VEHICLE_CLASS_FROM_NAME(iParam0);
	if ((((((((((((((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_JETSKI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0)) || iVar0 == 2) || iVar0 == 12) || iVar0 == 18) || iVar0 == 19) || iVar0 == 11) || iVar0 == 20) || iVar0 == 10) || iVar0 == 17)
	{
		return 0;
	}
	return 1;
}

int func_276(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
			return 2123327359;
		
		case 4:
		case 5:
		case 6:
			return 2067820283;
		
		case 7:
		case 8:
		case 9:
			return 1274868363;
		
		case 10:
		case 11:
		case 12:
			return 1663218586;
		
		case 13:
		case 14:
		case 15:
			return 819197656;
		
		case 16:
		case 17:
		case 18:
			return 1987142870;
		
		case 19:
		case 20:
		case 21:
			return 1426219628;
		
		case 22:
		case 23:
		case 24:
			return 234062309;
		
		case 25:
		case 26:
		case 27:
			return -1829802492;
		
		case 28:
		case 29:
		case 30:
			return 767087018;
		
		case 31:
		case 32:
		case 33:
			return -1660945322;
		
		case 34:
		case 35:
		case 36:
			return 972671128;
		
		case 37:
		case 38:
		case 39:
			return -602287871;
		
		case 40:
		case 41:
		case 42:
			return -1566741232;
		
		case 43:
		case 44:
		case 45:
			return 758895617;
		
		case 46:
		case 47:
		case 48:
			return 1887331236;
		
		case 49:
		case 50:
		case 51:
			return -1291952903;
		
		case 52:
		case 53:
		case 54:
			return -295689028;
		
		case 55:
		case 56:
		case 57:
			return -1403128555;
		
		case 58:
		case 59:
		case 60:
			return -777172681;
		
		case 61:
		case 62:
		case 63:
			return 784565758;
		
		case 64:
		case 65:
		case 66:
			return -1757836725;
		
		case 67:
		case 68:
		case 69:
			return 1102544804;
		
		case 70:
		case 71:
		case 72:
			return -1995326987;
		
		case 73:
		case 74:
		case 75:
			return 1011753235;
		
		case 76:
		case 77:
		case 78:
			return -1311154784;
		
		case 79:
		case 80:
		case 81:
			return -1943285540;
		
		case 82:
		case 83:
		case 84:
			return 633712403;
		
		case 85:
		case 86:
		case 87:
			return 408192225;
		
		case 88:
		case 89:
		case 90:
			return -142942670;
		
		case 91:
		case 92:
		case 93:
			return 223258115;
		
		case 94:
		case 95:
		case 96:
			return -1297672541;
		
		default:
	}
	return 0;
}

int func_277(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return Global_262145.f_19143;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			return Global_262145.f_19145;
		
		case 1:
			return Global_262145.f_19144;
	}
	return 0;
}

char* func_278(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "IE_WH_TXD_1";
		
		case 2:
			return "IE_WH_TXD_2";
		
		case 3:
			return "IE_WH_TXD_3";
		
		case 4:
			return "IE_WH_TXD_4";
		
		case 5:
			return "IE_WH_TXD_5";
		
		case 6:
			return "IE_WH_TXD_6";
		
		case 7:
			return "IE_WH_TXD_7";
		
		case 8:
			return "IE_WH_TXD_8";
		
		case 9:
			return "IE_WH_TXD_9";
		
		case 10:
			return "IE_WH_TXD_10";
		
		default:
	}
	return "";
}

char* func_279(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "IE_WH_DESC_1";
		
		case 2:
			return "IE_WH_DESC_2";
		
		case 3:
			return "IE_WH_DESC_3";
		
		case 4:
			return "IE_WH_DESC_4";
		
		case 5:
			return "IE_WH_DESC_5";
		
		case 6:
			return "IE_WH_DESC_6";
		
		case 7:
			return "IE_WH_DESC_7";
		
		case 8:
			return "IE_WH_DESC_8";
		
		case 9:
			return "IE_WH_DESC_9";
		
		case 10:
			return "IE_WH_DESC_10";
		
		default:
	}
	return "";
}

int func_280(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bVar1 = iParam0 == func_297(PLAYER::PLAYER_ID());
	if (bParam3)
	{
		if ((func_283(iParam0) && bParam2) || func_282(iParam1, bVar1))
		{
			iVar0 = (iVar0 + func_257(iParam1, bVar1));
			if (bParam2)
			{
				iVar0 = (iVar0 + func_253(iParam0));
			}
		}
		else
		{
			iVar0 = -1;
		}
	}
	else
	{
		if (bParam2)
		{
			if (func_283(iParam0))
			{
				iVar0 = (iVar0 + func_281(iParam0));
			}
			else
			{
				iVar0 = (iVar0 + func_253(iParam0));
			}
		}
		if (func_282(iParam1, bVar1))
		{
			iVar0 = (iVar0 + func_277(iParam1, bVar1));
		}
		else
		{
			iVar0 = (iVar0 + func_257(iParam1, bVar1));
		}
	}
	return iVar0;
}

int func_281(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_19133;
		
		case 2:
			return Global_262145.f_19134;
		
		case 3:
			return Global_262145.f_19135;
		
		case 4:
			return Global_262145.f_19136;
		
		case 5:
			return Global_262145.f_19137;
		
		case 6:
			return Global_262145.f_19138;
		
		case 7:
			return Global_262145.f_19139;
		
		case 8:
			return Global_262145.f_19140;
		
		case 9:
			return Global_262145.f_19141;
		
		case 10:
			return Global_262145.f_19142;
		
		default:
	}
	return 0;
}

bool func_282(int iParam0, bool bParam1)
{
	return func_277(iParam0, bParam1) > func_257(iParam0, bParam1);
}

bool func_283(int iParam0)
{
	return func_281(iParam0) > func_253(iParam0);
}

Vector3 func_284(int iParam0)
{
	return func_285(iParam0);
}

Vector3 func_285(int iParam0)
{
	func_286(iParam0, &Var0);
	return Var0;
}

void func_286(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 60:
			*uParam1 = { -631.9747f, -1779.181f, 22.9802f };
			break;
		
		case 61:
			*uParam1 = { 1007.51f, -1855.032f, 30.0398f };
			break;
		
		case 62:
			*uParam1 = { -72.3389f, -1820.984f, 25.942f };
			break;
		
		case 63:
			*uParam1 = { 36.8712f, -1284.028f, 28.2924f };
			break;
		
		case 64:
			*uParam1 = { 1213.233f, -1251.249f, 35.3258f };
			break;
		
		case 65:
			*uParam1 = { 808.8002f, -2222.5f, 28.6239f };
			break;
		
		case 66:
			*uParam1 = { 1754.546f, -1649.167f, 111.6556f };
			break;
		
		case 67:
			*uParam1 = { 144.3155f, -3005.919f, 6.0309f };
			break;
		
		case 68:
			*uParam1 = { -521.2753f, -2196.688f, 5.394f };
			break;
		
		case 69:
			*uParam1 = { -1161.292f, -2163.7f, 12.3808f };
			break;
	}
}

void func_287(int iParam0)
{
	if (func_295(PLAYER::PLAYER_ID()))
	{
		if (iParam0 != -1 && iParam0 != 3)
		{
			func_15(5301, iParam0, -1, 1, 0);
			Global_1590535[PLAYER::PLAYER_ID()].f_274.f_134.f_44 = iParam0;
		}
	}
}

int func_288(int iParam0, int iParam1)
{
	iVar0 = func_297(PLAYER::PLAYER_ID());
	iVar1 = func_257(iParam1, 1);
	iVar2 = 1704699945;
	iVar3 = func_256(iParam1, 1);
	if (iParam0 != iVar0)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
		return 0;
	}
	if (iVar1 > 0 && !MONEY::NETWORK_CAN_SPEND_MONEY(iVar1, 0, 1, 0, -1, 0))
	{
		func_252(iVar3, iVar1, 0);
		MISC::SET_BIT(&iLocal_614, 18);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
		return 0;
	}
	if (func_251())
	{
		MISC::SET_BIT(&iLocal_614, 7);
		iLocal_788 = 0;
		iVar4 = -1;
		while (func_289(&iVar4, iVar1, 1, -103880010, 235173372, iVar3, iVar2))
		{
			func_623();
			SYSTEM::WAIT(0);
		}
		func_623();
		switch (iVar4)
		{
			case 0:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
				return 0;
				break;
			
			case 2:
				break;
			
			default:
				break;
		}
	}
	if (iVar1 > 0)
	{
		Var5.f_1 = -1;
		Var5.f_3 = -1;
		Var5.f_5 = -1;
		Var5.f_7 = -1;
		Var5.f_9 = -1;
		Var5.f_11 = -1;
		Var5.f_13 = -1;
		Var5.f_15 = -1;
		Var5.f_16 = -1;
		Var5.f_17 = -1;
		Var5.f_18 = -1;
		Var5.f_20 = -1;
		Var5 = MISC::GET_HASH_KEY(func_254(iParam0));
		Var5.f_1 = 0;
		Var5.f_2 = MISC::GET_HASH_KEY(func_235(iLocal_1126));
		Var5.f_3 = iVar1;
		if (func_251())
		{
			NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_232(func_233()));
		}
		MONEY::_0x4128464231E3CA0B(iVar1, &Var5, 0, 1);
	}
	if (func_251())
	{
		func_228(func_233());
	}
	return 1;
}

int func_289(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (MISC::IS_BIT_SET(iLocal_614, 7))
	{
		switch (iLocal_788)
		{
			case 0:
				if (iParam1 > 0 && !MONEY::NETWORK_CAN_SPEND_MONEY(iParam1, 0, 1, 0, -1, 0))
				{
					iLocal_788 = 3;
					return 1;
				}
				if (func_244(78225582, iParam3, iParam5, iParam4, 1, iParam1, iParam2, 4, iParam6, 3))
				{
					if (iLocal_788 != 3)
					{
						if (func_239())
						{
							iLocal_788 = 1;
						}
						else
						{
							iLocal_788 = 3;
						}
					}
				}
				else
				{
					iLocal_788 = 3;
					return 1;
				}
				break;
			
			case 1:
				if (func_238(func_233()))
				{
					if (func_237(func_233()) == 2)
					{
						iLocal_788 = 2;
					}
					else
					{
						iLocal_788 = 3;
					}
				}
				break;
			
			case 2:
				MISC::CLEAR_BIT(&iLocal_614, 7);
				iLocal_788 = 0;
				HUD::_0x170F541E1CADD1DE(0);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				*iParam0 = 2;
				return 0;
				break;
			
			case 3:
				func_228(func_233());
				MISC::CLEAR_BIT(&iLocal_614, 7);
				iLocal_788 = 0;
				HUD::_0x170F541E1CADD1DE(0);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				*iParam0 = 0;
				return 0;
				break;
		}
		return 1;
	}
	if (iLocal_788 == 3)
	{
		iLocal_788 = 0;
		*iParam0 = 0;
		return 0;
	}
	iLocal_788 = 0;
	*iParam0 = -1;
	return 0;
}

int func_290(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_291(iParam0, iParam1, bParam2);
	if (iVar0 > 0 && !MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, 0, 1, 0, -1, 0))
	{
		iVar1 = MISC::GET_HASH_KEY(func_254(iParam0));
		func_252(iVar1, iVar0, 0);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
		return 0;
	}
	return 1;
}

int func_291(int iParam0, int iParam1, bool bParam2)
{
	bVar1 = iParam0 != func_297(PLAYER::PLAYER_ID());
	bVar2 = (func_295(PLAYER::PLAYER_ID()) && bVar1);
	if (bVar1 || bVar2)
	{
		iVar0 = (iVar0 + func_253(iParam0));
		if (bVar2)
		{
			iVar0 = (iVar0 - func_292(func_297(PLAYER::PLAYER_ID())));
		}
	}
	iVar0 = (iVar0 + func_257(iParam1, bParam2));
	return iVar0;
}

int func_292(int iParam0)
{
	iVar0 = func_293(iParam0);
	return SYSTEM::CEIL((IntToFloat(iVar0) * 0.5f));
}

int func_293(int iParam0)
{
	if (func_255(PLAYER::PLAYER_ID(), iParam0))
	{
		if (func_294(&uVar0))
		{
			return uVar0;
		}
	}
	return -1;
}

int func_294(var uParam0)
{
	if (func_561(6393, -1, 0) == func_561(5300, -1, 0))
	{
		*uParam0 = func_561(4030, -1, 0);
		return *uParam0 >= 0;
	}
	return 0;
}

bool func_295(int iParam0)
{
	return func_297(iParam0) != 0;
}

int func_296(int iParam0)
{
	if (iParam0 == 8)
	{
		if (func_634(&(Global_2514606.f_144)) && !func_632(&(Global_2514606.f_144), Global_2514804, 0))
		{
			return 0;
		}
	}
	else if (func_634(&(Global_2514606.f_146)) && !func_632(&(Global_2514606.f_146), Global_262145.f_18842, 1))
	{
		return 0;
	}
	return 1;
}

int func_297(int iParam0)
{
	if (iParam0 == func_9())
	{
		return 0;
	}
	return Global_1590535[iParam0].f_274.f_134;
}

void func_298(int iParam0)
{
	if (*iParam0 == 3007)
	{
		func_560("WHOUSE_PURCH", "WHOUSE_PURCHQ", "WHOUSE_CONF", "WHOUSE_CANC", 1, 0, -1);
		*iParam0 = 0;
		iLocal_789 = -1;
		MISC::SET_BIT(&iLocal_614, 10);
	}
	if ((*iParam0 == 3008 || *iParam0 == 3009) || *iParam0 == 3010)
	{
		if (func_463(iLocal_616))
		{
			func_560("CONTRA_PURFA", "WH_MFREASON_11", "WHOUSE_CONF", "", 0, 0, -1);
			MISC::SET_BIT(&iLocal_614, 8);
		}
		else
		{
			Var0 = { func_461(iLocal_618, iLocal_617, func_462()) };
			func_560("WHOUSE_SHI", &Var0, "WHOUSE_CONF", "WHOUSE_CANC", 1, 0, -1);
		}
		*iParam0 = 0;
	}
	if (*iParam0 == 3012)
	{
		if (MISC::IS_BIT_SET(iLocal_614, 10))
		{
			func_562(0, 0);
			iVar4 = iLocal_616;
			iVar5 = -1;
			if (func_375(iVar4, &iVar5))
			{
				func_560("WHOUSE_PURCH", "WHOUSE_PURCHD", "WHOUSE_CONF", "", 1, 0, -1);
				iVar6 = func_374(iVar5);
				if (iVar6 <= 0)
				{
					func_372(iVar4);
					func_349(iVar4);
				}
				else
				{
					func_342(iVar6, iVar4);
					func_349(iVar6);
					func_349(iVar4);
				}
				iLocal_786 = iVar4;
				MISC::SET_BIT(&iLocal_614, 21);
				MISC::SET_BIT(&iLocal_614, 19);
				MISC::SET_BIT(&iLocal_614, 23);
				MISC::SET_BIT(&iLocal_614, 6);
				func_334(iVar4);
			}
			else
			{
				sVar7 = "WHOUSE_PURCHF";
				if (MISC::IS_BIT_SET(iLocal_614, 18))
				{
					sVar7 = "WHSE_PURCHF_NM";
				}
				else if (Global_262145.f_15357)
				{
					sVar7 = "WHSE_PURCHF_TU";
				}
				func_560("WHOUSE_PURFA", sVar7, "WHOUSE_CONF", "", 0, 0, -1);
			}
			iLocal_616 = -1;
			iLocal_617 = -1;
			*iParam0 = 1;
			MISC::SET_BIT(&iLocal_614, 9);
			MISC::CLEAR_BIT(&iLocal_614, 10);
		}
		else if (MISC::IS_BIT_SET(iLocal_614, 11))
		{
			if (func_333(iLocal_616))
			{
				Global_73830 = 1;
				func_331(168, iLocal_616, -1, -1, 0);
				MISC::CLEAR_BIT(&(Global_1676377.f_4), 4);
				Global_1676227 = func_330(iLocal_616);
				Global_1676229 = 1;
				if (func_19(PLAYER::PLAYER_ID()))
				{
					Global_1694834.f_4 = 168;
				}
				func_636(1);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
				iLocal_789 = func_61(PLAYER::PLAYER_ID(), 168, 0);
				sVar8 = func_329(0, iLocal_616);
				func_560("MP_WH_SELL", sVar8, "WHOUSE_CONF", "", 0, 0, -1);
				MISC::SET_BIT(&iLocal_614, 8);
				iLocal_616 = -1;
				*iParam0 = 1;
				MISC::CLEAR_BIT(&iLocal_614, 11);
			}
			*iParam0 = 1;
		}
		else
		{
			iVar9 = iLocal_616;
			if (iVar9 > 0 && func_312(iVar9, iLocal_617))
			{
				iVar10 = 0;
				Global_73830 = 1;
				if (MISC::IS_BIT_SET(iLocal_615, 0) && iLocal_617 == 1)
				{
					iVar10 = 1;
				}
				MISC::CLEAR_BIT(&(Global_1676377.f_4), 4);
				func_331(167, iVar9, iLocal_617, iLocal_618, iVar10);
				if (func_19(PLAYER::PLAYER_ID()))
				{
					Global_1694834.f_4 = 167;
				}
				MISC::SET_BIT(&iLocal_614, 21);
				if (!func_309(7550, -1, -1) && !MISC::IS_BIT_SET(iLocal_614, 14))
				{
					iLocal_787 = 4;
					MISC::SET_BIT(&iLocal_614, 26);
				}
				else
				{
					func_636(1);
				}
			}
			else
			{
				sVar11 = func_329(1, iVar9);
				func_560("WHOUSE_PURFA", sVar11, "WHOUSE_CONF", "", 0, 0, -1);
				MISC::SET_BIT(&iLocal_614, 8);
			}
			iLocal_616 = -1;
			*iParam0 = 1;
		}
	}
	if (*iParam0 == 3011)
	{
		func_299(iLocal_616);
	}
}

void func_299(int iParam0)
{
	if (func_308())
	{
		func_560("MP_WH_SELL", "WH_MFREASON_12", "WHOUSE_CONF", "", 0, 0, -1);
		iLocal_794 = 0;
		iLocal_795 = 0;
		MISC::SET_BIT(&iLocal_614, 8);
	}
	else if (func_585(iParam0))
	{
		func_560("MP_WH_SELL", "MP_WH_SELL_FE", "WHOUSE_CONF", "", 0, 0, -1);
		iLocal_794 = 0;
		iLocal_795 = 0;
		MISC::SET_BIT(&iLocal_614, 8);
	}
	else if (func_301(iParam0) || !func_300())
	{
		func_560("CONTRA_SALEF", "WH_MFREASON_9", "WHOUSE_CONF", "", 0, 0, -1);
		iLocal_794 = 0;
		iLocal_795 = 0;
		MISC::SET_BIT(&iLocal_614, 8);
	}
	else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		func_560("CONTRA_SALEF", "WH_MFREASON_10", "WHOUSE_CONF", "", 0, 0, -1);
		iLocal_794 = 0;
		iLocal_795 = 0;
		MISC::SET_BIT(&iLocal_614, 8);
	}
	else if (iLocal_794 >= Global_262145.f_15118)
	{
		MISC::SET_BIT(&iLocal_614, 11);
		func_560("MP_WH_SALER", "MP_WH_SELL_W2", "WHOUSE_CONT", "WHOUSE_CANC", 1, 0, -1);
	}
	else if (iLocal_794 >= Global_262145.f_15117 || iLocal_794 >= Global_262145.f_15115)
	{
		MISC::SET_BIT(&iLocal_614, 11);
		func_560("MP_WH_SALER", "MP_WH_SELL_W", "WHOUSE_CONT", "WHOUSE_CANC", 1, 0, -1);
	}
	else if (iLocal_795 == 4)
	{
		MISC::SET_BIT(&iLocal_614, 11);
		cVar0 = "MP_WH_SELLS";
		sVar1 = "MP_WH_SELL_D";
		if (iLocal_794 == 1)
		{
			cVar0 = "MP_WH_SELLSS";
			sVar1 = "MP_WH_SELL_DS";
		}
		func_560(cVar0, sVar1, "WHOUSE_CONF", "WHOUSE_CANC", 1, 0, -1);
	}
	else
	{
		MISC::SET_BIT(&iLocal_614, 11);
		func_560("MP_WH_SELL", "MP_WH_SELL_C", "WHOUSE_CONF", "WHOUSE_CANC", 1, 0, -1);
	}
	iLocal_613 = 0;
	iLocal_789 = -1;
}

int func_300()
{
	if (func_634(&(Global_2514606.f_140)) && !func_632(&(Global_2514606.f_140), Global_262145.f_15097, 1))
	{
		return 0;
	}
	return 1;
}

bool func_301(int iParam0)
{
	return func_302(iParam0) > 0;
}

int func_302(int iParam0)
{
	if (func_307(iParam0))
	{
		if (func_306(iParam0))
		{
			iVar0 = func_305(iParam0);
			if (Global_2537071.f_5124.f_364[iVar0] != -1)
			{
				iVar1 = Global_2537071.f_5124.f_364[iVar0];
			}
			else
			{
				iVar1 = func_561(func_304(iVar0), -1, 0);
			}
			iVar2 = ((iVar1 + func_303()) - NETWORK::GET_CLOUD_TIME_AS_INT());
			return iVar2;
		}
	}
	return -1;
}

int func_303()
{
	return (Global_262145.f_15095 / 1000);
}

int func_304(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3656;
		
		case 1:
			return 3779;
		
		case 2:
			return 3780;
		
		case 3:
			return 3781;
		
		case 4:
			return 3782;
		
		default:
	}
	return 3656;
}

int func_305(int iParam0)
{
	if (func_307(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_106[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_306(int iParam0)
{
	if (func_307(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_106[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_307(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

bool func_308()
{
	return Global_262145.f_15249;
}

int func_309(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_2();
	}
	iVar1 = func_311(iParam0, iParam1);
	uVar2 = func_310(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_310(int iParam0)
{
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_311(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_2();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam1);
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

int func_312(int iParam0, int iParam1)
{
	iVar0 = func_305(iParam0);
	StringCopy(&cVar1, func_328(iParam0), 16);
	bVar5 = false;
	iVar6 = 0;
	iVar7 = func_327(iParam1);
	if (MISC::IS_BIT_SET(iLocal_615, 0) && iParam1 == 1)
	{
		iVar7 = func_325(func_326(iLocal_618));
		bVar5 = true;
	}
	iVar8 = (iVar7 - iVar6);
	if (iVar8 > 0)
	{
		if (!MONEY::NETWORK_CAN_SPEND_MONEY(iVar8, 0, 1, 0, -1, 0))
		{
			func_252(MISC::GET_HASH_KEY(&cVar1), iVar8, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
			MISC::SET_BIT(&iLocal_614, 18);
			return 0;
		}
	}
	iVar9 = iVar7;
	if (iVar9 > 0)
	{
		if (!MONEY::NETWORK_CAN_SPEND_MONEY(iVar9, 0, 1, 0, -1, 0))
		{
			func_252(MISC::GET_HASH_KEY(&cVar1), iVar9, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
			MISC::SET_BIT(&iLocal_614, 18);
			return 0;
		}
	}
	if (!func_53(PLAYER::PLAYER_ID(), 167, 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
		iLocal_789 = func_61(PLAYER::PLAYER_ID(), 167, 0);
		return 0;
	}
	if (func_51(PLAYER::PLAYER_ID()))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
		iLocal_789 = func_61(PLAYER::PLAYER_ID(), 167, 0);
		return 0;
	}
	if (!func_324())
	{
		iLocal_789 = 11;
		return 0;
	}
	if (func_323())
	{
		iLocal_789 = 12;
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_251())
	{
		MISC::SET_BIT(&iLocal_614, 7);
		iLocal_788 = 0;
		iVar10 = func_321(1, iParam1, bVar5, func_326(iLocal_618));
		iVar11 = func_320(iVar0);
		iVar12 = -1;
		bVar13 = MISC::IS_BIT_SET(iLocal_614, 7);
		while (func_319(&iVar12, iVar7, iVar0, -1799524201, -1018905335, iVar10, iVar11, &bVar13, &iLocal_788))
		{
			func_623();
			SYSTEM::WAIT(0);
		}
		if (!bVar13)
		{
			MISC::CLEAR_BIT(&iLocal_614, 7);
		}
		switch (iVar12)
		{
			case 0:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
				return 0;
				break;
			
			case 2:
				func_318(iVar10);
				break;
			
			default:
				break;
		}
	}
	if (iVar9 >= 0 && (iVar9 == 0 || (iVar9 > 0 && (func_251() || MONEY::NETWORK_CAN_SPEND_MONEY(iVar9, 0, 1, 0, -1, 0)))))
	{
		if (iVar9 > 0)
		{
			func_313(-1980650810, iVar9);
		}
		if (func_251())
		{
			NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_232(func_233()));
		}
		MONEY::_NETWORK_BUY_CONTRABAND(iVar7, iParam0, MISC::GET_HASH_KEY(&cVar1), 0, 1);
		if (func_251())
		{
			func_228(func_233());
		}
	}
	else if (iVar9 < 0)
	{
		if (func_251())
		{
			NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_232(func_233()));
		}
		MONEY::NETWORK_BUY_PROPERTY(iVar7, MISC::GET_HASH_KEY(&cVar1), 0, 1);
		if (func_251())
		{
			func_228(func_233());
		}
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
		return 0;
	}
	return 1;
}

void func_313(int iParam0, int iParam1)
{
	iVar0 = func_317(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_316(iParam0))
	{
		func_315(iParam0, iVar0);
	}
	else
	{
		func_314(iParam0, iVar0);
	}
}

void func_314(int iParam0, int iParam1)
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

void func_315(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_316(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case 406381289:
			case 1669900865:
			case 54164875:
			case -842450336:
			case -1576871964:
			case -1446982891:
			case -1676857426:
			case 1280806976:
			case -1096682281:
			case 1894078811:
			case -1566025259:
			case -621080327:
			case 1021002722:
			case -1670771646:
			case -1992420464:
			case -386175531:
			case -203536263:
				return 1;
				break;
			}
	}
	return 0;
}

int func_317(var uParam0)
{
	uVar0 = uParam0;
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_318(int iParam0)
{
	Global_4264524 = iParam0;
}

int func_319(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	if (*bParam7)
	{
		switch (*iParam8)
		{
			case 0:
				if (!MONEY::NETWORK_CAN_SPEND_MONEY(iParam1, 0, 1, 0, -1, 0))
				{
					*iParam8 = 3;
					return 1;
				}
				if (func_244(78225582, iParam3, iParam5, iParam4, 1, iParam1, iParam2, 4, iParam6, 3))
				{
					if (*iParam8 != 3)
					{
						if (func_239())
						{
							*iParam8 = 1;
						}
						else
						{
							*iParam8 = 3;
						}
					}
				}
				else
				{
					*iParam8 = 3;
				}
				break;
			
			case 1:
				if (func_238(func_233()))
				{
					if (func_237(func_233()) == 2)
					{
						*iParam8 = 2;
					}
					else
					{
						*iParam8 = 3;
					}
				}
				break;
			
			case 2:
				*bParam7 = 0;
				*iParam8 = 0;
				HUD::_0x170F541E1CADD1DE(0);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				*iParam0 = 2;
				return 0;
				break;
			
			case 3:
				func_228(func_233());
				*bParam7 = 0;
				*iParam8 = 0;
				HUD::_0x170F541E1CADD1DE(0);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				*iParam0 = 0;
				return 0;
				break;
		}
		return 1;
	}
	if (*iParam8 == 3)
	{
		*iParam8 = 0;
		*iParam0 = 0;
		return 0;
	}
	*iParam8 = 0;
	*iParam0 = -1;
	return 0;
}

int func_320(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE4_v0", 64);
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_321(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	func_322(&sVar0, bParam0, iParam1, bParam2, iParam3);
	return MISC::GET_HASH_KEY(&sVar0);
}

void func_322(char* sParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam1)
	{
		if (iParam2 == -1)
		{
			StringCopy(sParam0, "CB_NONE_0_t0_v0", 64);
		}
		else if (bParam3)
		{
			StringCopy(sParam0, "CB_BUY_", 64);
			StringIntConCat(sParam0, iParam2, 64);
			StringConCat(sParam0, "_t1_v", 64);
			StringIntConCat(sParam0, iParam4, 64);
		}
		else
		{
			StringCopy(sParam0, "CB_BUY_", 64);
			StringIntConCat(sParam0, iParam2, 64);
			StringConCat(sParam0, "_t0_v0", 64);
		}
	}
	else
	{
		StringCopy(sParam0, "CB_SELL_0_t0_v0", 64);
	}
}

bool func_323()
{
	return Global_262145.f_15169;
}

int func_324()
{
	if (func_634(&(Global_2514606.f_142)) && !func_632(&(Global_2514606.f_142), Global_262145.f_15096, 1))
	{
		return 0;
	}
	return 1;
}

int func_325(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15527;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15525;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15529;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15523;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15521;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15531;
	}
	return 0;
}

int func_326(int iParam0)
{
	if (iParam0 == 2)
	{
		return 1;
	}
	else if (iParam0 == 4)
	{
		return 2;
	}
	else if (iParam0 == 6)
	{
		return 3;
	}
	else if (iParam0 == 7)
	{
		return 4;
	}
	else if (iParam0 == 8)
	{
		return 5;
	}
	else if (iParam0 == 9)
	{
		return 6;
	}
	return 0;
}

int func_327(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_15302;
		
		case 2:
			return Global_262145.f_15303;
		
		case 3:
			return Global_262145.f_15304;
		
		default:
	}
	return 0;
}

char* func_328(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_WHOUSE_0";
			break;
		
		case 2:
			return "MP_WHOUSE_1";
			break;
		
		case 3:
			return "MP_WHOUSE_2";
			break;
		
		case 4:
			return "MP_WHOUSE_3";
			break;
		
		case 5:
			return "MP_WHOUSE_4";
			break;
		
		case 6:
			return "MP_WHOUSE_5";
			break;
		
		case 7:
			return "MP_WHOUSE_6";
			break;
		
		case 8:
			return "MP_WHOUSE_7";
			break;
		
		case 9:
			return "MP_WHOUSE_8";
			break;
		
		case 10:
			return "MP_WHOUSE_9";
			break;
		
		case 11:
			return "MP_WHOUSE_10";
			break;
		
		case 12:
			return "MP_WHOUSE_11";
			break;
		
		case 13:
			return "MP_WHOUSE_12";
			break;
		
		case 14:
			return "MP_WHOUSE_13";
			break;
		
		case 15:
			return "MP_WHOUSE_14";
			break;
		
		case 16:
			return "MP_WHOUSE_15";
			break;
		
		case 17:
			return "MP_WHOUSE_16";
			break;
		
		case 18:
			return "MP_WHOUSE_17";
			break;
		
		case 19:
			return "MP_WHOUSE_18";
			break;
		
		case 20:
			return "MP_WHOUSE_19";
			break;
		
		case 21:
			return "MP_WHOUSE_20";
			break;
		
		case 22:
			return "MP_WHOUSE_21";
			break;
	}
	return "";
}

char* func_329(bool bParam0, int iParam1)
{
	if (!func_300() || !func_324())
	{
		return "WH_MFREASON_9";
	}
	switch (iLocal_789)
	{
		case 1:
			return "WH_MFREASON_0";
		
		case 2:
			return "WH_MFREASON_1";
		
		case 3:
			return "WH_MFREASON_2";
		
		case 4:
			return "WH_MFREASON_3";
		
		case 5:
			return "WH_MFREASON_4";
		
		case 6:
			return "WH_MFREASON_5";
		
		case 7:
			return "WH_MFREASON_6";
		
		case 8:
			return "WH_MFREASON_6";
		
		case 9:
			return "WH_MFREASON_8";
		
		case 10:
			return "WH_MFREASON_8";
		
		case 11:
			return "WH_MFREASON_9";
		
		case 12:
			return "WH_MFREASON_12";
		
		case 16:
			return "GENERAL_MLF_G5";
		
		case 15:
			return "GENERAL_MLF_G2";
		
		default:
	}
	if (func_51(PLAYER::PLAYER_ID()) || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return "WH_MFREASON_10";
	}
	if (bParam0)
	{
		return "WHOUSE_PURCHF";
	}
	if (func_585(iParam1))
	{
		return "MP_WH_SELL_FE";
	}
	return "MP_WH_SELL_F";
}

int func_330(int iParam0)
{
	if (func_307(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam0 == Global_1590535[PLAYER::PLAYER_ID()].f_274.f_106[iVar0])
			{
				return Global_1590535[PLAYER::PLAYER_ID()].f_274.f_106[iVar0].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_331(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_332(iParam1, iParam2, iParam3, iParam4);
	func_24(iParam0, iParam1);
}

void func_332(var uParam0, var uParam1, var uParam2, var uParam3)
{
	Global_1628237[PLAYER::PLAYER_ID()].f_11.f_182 = uParam0;
	Global_1628237[PLAYER::PLAYER_ID()].f_11.f_182.f_1 = uParam1;
	Global_1628237[PLAYER::PLAYER_ID()].f_11.f_182.f_2 = uParam2;
	Global_1628237[PLAYER::PLAYER_ID()].f_11.f_182.f_3 = uParam3;
}

int func_333(int iParam0)
{
	iVar0 = func_305(iParam0);
	StringCopy(&cVar1, func_328(iParam0), 16);
	if (!func_53(PLAYER::PLAYER_ID(), 168, 0))
	{
		return 0;
	}
	if (func_51(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_585(iParam0))
	{
		return 0;
	}
	if (!func_300())
	{
		return 0;
	}
	if (func_251())
	{
		MISC::SET_BIT(&iLocal_614, 7);
		iLocal_788 = 0;
		iVar5 = func_321(0, -1, 0, -1);
		iVar6 = func_320(iVar0);
		iVar7 = -1;
		bVar8 = MISC::IS_BIT_SET(iLocal_614, 7);
		while (func_319(&iVar7, 0, iVar0, -1799524201, -1018905335, iVar5, iVar6, &bVar8, &iLocal_788))
		{
			func_623();
			SYSTEM::WAIT(0);
		}
		if (!bVar8)
		{
			MISC::CLEAR_BIT(&iLocal_614, 7);
		}
		switch (iVar7)
		{
			case 0:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
				return 0;
				break;
			
			case 2:
				break;
			
			default:
				break;
		}
	}
	if (func_251())
	{
		NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_232(func_233()));
	}
	MONEY::_NETWORK_BUY_CONTRABAND(0, iParam0, MISC::GET_HASH_KEY(&cVar1), 0, 1);
	if (func_251())
	{
		func_228(func_233());
	}
	return 1;
}

void func_334(int iParam0)
{
	iVar0 = func_341(iParam0);
	sVar1 = "";
	if (!func_340(iVar0, iParam0))
	{
		iVar2 = func_561(10015, -1, 0);
		iVar3 = 0;
		if (iVar0 == 0)
		{
			iVar3 = 17;
			sVar1 = "WHPURCH_TICK_1";
		}
		else if (iVar0 == 1)
		{
			iVar3 = 18;
			sVar1 = "WHPURCH_TICK_2";
		}
		else
		{
			iVar3 = 19;
			sVar1 = "WHPURCH_TICK_3";
		}
		if (!MISC::IS_BIT_SET(iVar2, iVar3))
		{
			func_335(sVar1);
			MISC::SET_BIT(&iVar2, iVar3);
			func_15(10015, iVar2, -1, 1, 0);
		}
	}
}

int func_335(char* sParam0)
{
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	func_336(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_336(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	if ((!func_339() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_30(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_337(iParam2);
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

int func_337(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0].f_1)
		{
			func_338(iVar0);
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

void func_338(int iParam0)
{
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0] = { Global_1670846.f_5[(iVar0 - 1)] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_339()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

int func_340(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if ((Global_1590535[PLAYER::PLAYER_ID()].f_274.f_106[iVar0] != 0 && Global_1590535[PLAYER::PLAYER_ID()].f_274.f_106[iVar0] != iParam1) && func_341(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_106[iVar0]) == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_341(int iParam0)
{
	if (func_307(iParam0))
	{
		switch (iParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 9:
				return 0;
			
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 21:
			case 7:
				return 1;
			
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
			case 6:
			case 8:
				return 2;
			}
		
		default:
	}
	return 3;
}

void func_342(int iParam0, int iParam1)
{
	if (!func_348(iParam1))
	{
		if (func_306(iParam0) && func_345(iParam0, iParam1))
		{
			iVar0 = func_305(iParam0);
			func_224(func_344(iVar0), iParam1, -1, 1);
			Global_1590535[PLAYER::PLAYER_ID()].f_274.f_106[iVar0] = iParam1;
			func_15(func_343(iVar0), iParam1, -1, 1, 0);
		}
	}
}

int func_343(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6354;
		
		case 1:
			return 6355;
		
		case 2:
			return 6356;
		
		case 3:
			return 6357;
		
		case 4:
			return 6358;
		
		default:
	}
	return 6354;
}

int func_344(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3636;
		
		case 1:
			return 3637;
		
		case 2:
			return 3638;
		
		case 3:
			return 3639;
		
		case 4:
			return 3640;
		
		default:
	}
	return 11511;
}

int func_345(int iParam0, int iParam1)
{
	if (func_346(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (iParam0 == iParam1)
	{
		return 0;
	}
	if (func_341(iParam0) <= func_341(iParam1))
	{
		if (func_585(iParam0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_346(int iParam0)
{
	return func_70(func_347(iParam0));
}

int func_347(int iParam0)
{
	if (func_35(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_348(int iParam0)
{
	if (func_307(iParam0))
	{
		switch (iParam0)
		{
			case 1:
				return Global_262145.f_15539;
			
			case 2:
				return Global_262145.f_15540;
			
			case 3:
				return Global_262145.f_15541;
			
			case 4:
				return Global_262145.f_15542;
			
			case 5:
				return Global_262145.f_15543;
			
			case 6:
				return Global_262145.f_15544;
			
			case 7:
				return Global_262145.f_15545;
			
			case 8:
				return Global_262145.f_15546;
			
			case 9:
				return Global_262145.f_15547;
			
			case 10:
				return Global_262145.f_15548;
			
			case 11:
				return Global_262145.f_15549;
			
			case 12:
				return Global_262145.f_15550;
			
			case 13:
				return Global_262145.f_15551;
			
			case 14:
				return Global_262145.f_15552;
			
			case 15:
				return Global_262145.f_15553;
			
			case 16:
				return Global_262145.f_15554;
			
			case 17:
				return Global_262145.f_15555;
			
			case 18:
				return Global_262145.f_15556;
			
			case 19:
				return Global_262145.f_15557;
			
			case 20:
				return Global_262145.f_15558;
			
			case 21:
				return Global_262145.f_15559;
			
			case 22:
				return Global_262145.f_15560;
			}
		
		default:
	}
	return 1;
}

void func_349(int iParam0)
{
	StringCopy(&cVar0, func_328(iParam0), 16);
	Var4 = { func_371(iParam0) };
	StringCopy(&cVar7, ZONE::GET_NAME_OF_ZONE(Var4), 16);
	StringCopy(&cVar11, func_370(iParam0), 16);
	StringCopy(&cVar15, func_369(iParam0), 16);
	iVar19 = func_368(iParam0);
	bVar20 = func_306(iParam0);
	iVar21 = func_341(iParam0);
	iVar22 = func_367(iParam0);
	iVar23 = func_330(iParam0);
	iVar24 = 0;
	iVar25 = func_364(iParam0);
	iVar26 = -1;
	iVar27 = -1;
	iVar28 = -1;
	if (iVar25 <= 0)
	{
		if (!func_324())
		{
			iVar25 = (Global_262145.f_15096 - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), Global_2514606.f_142)));
		}
	}
	if (iVar25 > 0)
	{
		MISC::SET_BIT(&iLocal_614, 27);
		MISC::SET_BIT(&iLocal_784, iParam0);
	}
	if (func_306(iParam0))
	{
		iVar26 = func_305(iParam0);
		iVar24 = ((func_363(iVar23) * iVar23) + func_358(iParam0));
	}
	if (iParam0 == 6 || iParam0 == 8)
	{
		StringCopy(&cVar7, "WH_LISA_1", 16);
	}
	if (func_357(iParam0))
	{
		iVar27 = iVar19;
		iVar19 = func_356(iParam0);
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_608, "ADD_WAREHOUSE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_355(iParam0));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Var4.x);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Var4.y);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar19);
	func_259(&cVar0);
	func_259(&cVar7);
	func_259(&cVar11);
	GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(&cVar15);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar20);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar21);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar22);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar23);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar24);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar28);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar25);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar26);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar27);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	cVar29 = { func_354(Global_1676086) };
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_608, "ADD_WAREHOUSE_SHIPMENTS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_355(iParam0));
	iVar35 = func_327(1);
	iVar36 = func_327(2);
	iVar37 = func_327(3);
	iVar38 = -1;
	iVar39 = -1;
	iVar40 = -1;
	if (func_353(2))
	{
		iVar39 = iVar36;
		iVar36 = func_352(2);
	}
	if (func_353(3))
	{
		iVar40 = iVar37;
		iVar37 = func_352(3);
	}
	if (MISC::IS_BIT_SET(iLocal_615, 0))
	{
		iVar41 = func_326(iLocal_618);
		if (func_351(iVar41))
		{
			iVar38 = func_325(iVar41);
			iVar35 = func_350(iVar41);
		}
		else
		{
			iVar35 = func_325(iVar41);
		}
	}
	else if (func_353(1))
	{
		iVar38 = iVar35;
		iVar35 = func_352(1);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar35);
	func_259(&cVar29);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar36);
	func_259("");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar37);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(MISC::IS_BIT_SET(iLocal_615, 0));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar38);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar39);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar40);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_350(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15536;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15535;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15537;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15534;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15533;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15538;
	}
	return 0;
}

bool func_351(int iParam0)
{
	return func_325(iParam0) < func_350(iParam0);
}

int func_352(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_15305;
		
		case 2:
			return Global_262145.f_15306;
		
		case 3:
			return Global_262145.f_15307;
		
		default:
	}
	return 0;
}

bool func_353(int iParam0)
{
	return func_327(iParam0) < func_352(iParam0);
}

struct<6> func_354(int iParam0)
{
	StringCopy(&Var0, "CONTRATP_", 24);
	StringIntConCat(&Var0, iParam0, 24);
	StringConCat(&Var0, "W", 24);
	return Var0;
}

int func_355(int iParam0)
{
	return (iParam0 - 1);
}

int func_356(int iParam0)
{
	iVar0 = 0;
	if (!func_307(iParam0))
	{
		return iVar0;
	}
	switch (iParam0)
	{
		case 1:
			iVar0 = Global_262145.f_15478;
			break;
		
		case 2:
			iVar0 = Global_262145.f_15479;
			break;
		
		case 3:
			iVar0 = Global_262145.f_15480;
			break;
		
		case 4:
			iVar0 = Global_262145.f_15481;
			break;
		
		case 5:
			iVar0 = Global_262145.f_15482;
			break;
		
		case 6:
			iVar0 = Global_262145.f_15483;
			break;
		
		case 7:
			iVar0 = Global_262145.f_15484;
			break;
		
		case 8:
			iVar0 = Global_262145.f_15485;
			break;
		
		case 9:
			iVar0 = Global_262145.f_15486;
			break;
		
		case 10:
			iVar0 = Global_262145.f_15487;
			break;
		
		case 11:
			iVar0 = Global_262145.f_15488;
			break;
		
		case 12:
			iVar0 = Global_262145.f_15489;
			break;
		
		case 13:
			iVar0 = Global_262145.f_15490;
			break;
		
		case 14:
			iVar0 = Global_262145.f_15491;
			break;
		
		case 15:
			iVar0 = Global_262145.f_15492;
			break;
		
		case 16:
			iVar0 = Global_262145.f_15493;
			break;
		
		case 17:
			iVar0 = Global_262145.f_15494;
			break;
		
		case 18:
			iVar0 = Global_262145.f_15495;
			break;
		
		case 19:
			iVar0 = Global_262145.f_15496;
			break;
		
		case 20:
			iVar0 = Global_262145.f_15497;
			break;
		
		case 21:
			iVar0 = Global_262145.f_15498;
			break;
		
		case 22:
			iVar0 = Global_262145.f_15499;
			break;
	}
	return iVar0;
}

bool func_357(int iParam0)
{
	return func_368(iParam0) < func_356(iParam0);
}

int func_358(int iParam0)
{
	if (func_306(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_362(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_361(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_359(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_359(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_361(MISC::GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_359(int iParam0)
{
	if (func_307(iParam0))
	{
		iVar0 = func_360(func_305(iParam0));
		return func_561(iVar0, -1, 0);
	}
	return 0;
}

int func_360(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_361(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15528;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15526;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15530;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15524;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15522;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15532;
	}
	return 0;
}

int func_362(int iParam0, int iParam1)
{
	if (func_307(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1676087[iVar0] == iParam1 && Global_1676094[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_363(int iParam0)
{
	if (iParam0 >= Global_262145.f_15328)
	{
		return Global_262145.f_15349;
	}
	else if (iParam0 >= Global_262145.f_15327)
	{
		return Global_262145.f_15348;
	}
	else if (iParam0 >= Global_262145.f_15326)
	{
		return Global_262145.f_15347;
	}
	else if (iParam0 >= Global_262145.f_15325)
	{
		return Global_262145.f_15346;
	}
	else if (iParam0 >= Global_262145.f_15324)
	{
		return Global_262145.f_15345;
	}
	else if (iParam0 >= Global_262145.f_15323)
	{
		return Global_262145.f_15344;
	}
	else if (iParam0 >= Global_262145.f_15322)
	{
		return Global_262145.f_15343;
	}
	else if (iParam0 >= Global_262145.f_15321)
	{
		return Global_262145.f_15342;
	}
	else if (iParam0 >= Global_262145.f_15320)
	{
		return Global_262145.f_15341;
	}
	else if (iParam0 >= Global_262145.f_15319)
	{
		return Global_262145.f_15340;
	}
	else if (iParam0 >= Global_262145.f_15318)
	{
		return Global_262145.f_15339;
	}
	else if (iParam0 >= Global_262145.f_15317)
	{
		return Global_262145.f_15338;
	}
	else if (iParam0 >= Global_262145.f_15316)
	{
		return Global_262145.f_15337;
	}
	else if (iParam0 >= Global_262145.f_15315)
	{
		return Global_262145.f_15336;
	}
	else if (iParam0 >= Global_262145.f_15314)
	{
		return Global_262145.f_15335;
	}
	else if (iParam0 >= Global_262145.f_15313)
	{
		return Global_262145.f_15334;
	}
	else if (iParam0 >= Global_262145.f_15312)
	{
		return Global_262145.f_15333;
	}
	else if (iParam0 >= Global_262145.f_15311)
	{
		return Global_262145.f_15332;
	}
	else if (iParam0 >= Global_262145.f_15310)
	{
		return Global_262145.f_15331;
	}
	else if (iParam0 >= Global_262145.f_15309)
	{
		return Global_262145.f_15330;
	}
	return Global_262145.f_15329;
}

int func_364(int iParam0)
{
	if (func_307(iParam0))
	{
		if (func_306(iParam0))
		{
			iVar0 = func_305(iParam0);
			if (Global_2537071.f_5124.f_370[iVar0] != -1)
			{
				iVar1 = Global_2537071.f_5124.f_370[iVar0];
			}
			else
			{
				iVar1 = func_561(func_366(iVar0), -1, 0);
			}
			iVar2 = ((iVar1 + func_365()) - NETWORK::GET_CLOUD_TIME_AS_INT());
			return iVar2;
		}
	}
	return -1;
}

int func_365()
{
	return (Global_262145.f_15094 / 1000);
}

int func_366(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3658;
		
		case 1:
			return 3659;
		
		case 2:
			return 3660;
		
		case 3:
			return 3661;
		
		case 4:
			return 3662;
		
		default:
	}
	return 3658;
}

int func_367(int iParam0)
{
	if (func_307(iParam0))
	{
		iVar0 = func_341(iParam0);
		if (iVar0 == 0)
		{
			return 16;
		}
		else if (iVar0 == 1)
		{
			return 42;
		}
		else
		{
			return 111;
		}
	}
	return 0;
}

int func_368(int iParam0)
{
	iVar0 = 0;
	if (!func_307(iParam0))
	{
		return iVar0;
	}
	switch (iParam0)
	{
		case 1:
			iVar0 = Global_262145.f_15456;
			break;
		
		case 2:
			iVar0 = Global_262145.f_15457;
			break;
		
		case 3:
			iVar0 = Global_262145.f_15458;
			break;
		
		case 4:
			iVar0 = Global_262145.f_15459;
			break;
		
		case 5:
			iVar0 = Global_262145.f_15460;
			break;
		
		case 6:
			iVar0 = Global_262145.f_15461;
			break;
		
		case 7:
			iVar0 = Global_262145.f_15462;
			break;
		
		case 8:
			iVar0 = Global_262145.f_15463;
			break;
		
		case 9:
			iVar0 = Global_262145.f_15464;
			break;
		
		case 10:
			iVar0 = Global_262145.f_15465;
			break;
		
		case 11:
			iVar0 = Global_262145.f_15466;
			break;
		
		case 12:
			iVar0 = Global_262145.f_15467;
			break;
		
		case 13:
			iVar0 = Global_262145.f_15468;
			break;
		
		case 14:
			iVar0 = Global_262145.f_15469;
			break;
		
		case 15:
			iVar0 = Global_262145.f_15470;
			break;
		
		case 16:
			iVar0 = Global_262145.f_15471;
			break;
		
		case 17:
			iVar0 = Global_262145.f_15472;
			break;
		
		case 18:
			iVar0 = Global_262145.f_15473;
			break;
		
		case 19:
			iVar0 = Global_262145.f_15474;
			break;
		
		case 20:
			iVar0 = Global_262145.f_15475;
			break;
		
		case 21:
			iVar0 = Global_262145.f_15476;
			break;
		
		case 22:
			iVar0 = Global_262145.f_15477;
			break;
	}
	return iVar0;
}

char* func_369(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "DYN_MPWH_1";
			break;
		
		case 2:
			return "DYN_MPWH_2";
			break;
		
		case 3:
			return "DYN_MPWH_3";
			break;
		
		case 4:
			return "DYN_MPWH_4";
			break;
		
		case 5:
			return "DYN_MPWH_5";
			break;
		
		case 6:
			return "DYN_MPWH_6";
			break;
		
		case 7:
			return "DYN_MPWH_7";
			break;
		
		case 8:
			return "DYN_MPWH_8";
			break;
		
		case 9:
			return "DYN_MPWH_9";
			break;
		
		case 10:
			return "DYN_MPWH_10";
			break;
		
		case 11:
			return "DYN_MPWH_11";
			break;
		
		case 12:
			return "DYN_MPWH_12";
			break;
		
		case 13:
			return "DYN_MPWH_13";
			break;
		
		case 14:
			return "DYN_MPWH_14";
			break;
		
		case 15:
			return "DYN_MPWH_15";
			break;
		
		case 16:
			return "DYN_MPWH_16";
			break;
		
		case 17:
			return "DYN_MPWH_17";
			break;
		
		case 18:
			return "DYN_MPWH_18";
			break;
		
		case 19:
			return "DYN_MPWH_19";
			break;
		
		case 20:
			return "DYN_MPWH_20";
			break;
		
		case 21:
			return "DYN_MPWH_21";
			break;
		
		case 22:
			return "DYN_MPWH_22";
			break;
	}
	return "";
}

char* func_370(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_WHOUSE_0DES";
			break;
		
		case 2:
			return "MP_WHOUSE_1DES";
			break;
		
		case 3:
			return "MP_WHOUSE_2DES";
			break;
		
		case 4:
			return "MP_WHOUSE_3DES";
			break;
		
		case 5:
			return "MP_WHOUSE_4DES";
			break;
		
		case 6:
			return "MP_WHOUSE_5DES";
			break;
		
		case 7:
			return "MP_WHOUSE_6DES";
			break;
		
		case 8:
			return "MP_WHOUSE_7DES";
			break;
		
		case 9:
			return "MP_WHOUSE_8DES";
			break;
		
		case 10:
			return "MP_WHOUSE_9DES";
			break;
		
		case 11:
			return "MP_WHOUSE_10DES";
			break;
		
		case 12:
			return "MP_WHOUSE_11DES";
			break;
		
		case 13:
			return "MP_WHOUSE_12DES";
			break;
		
		case 14:
			return "MP_WHOUSE_13DES";
			break;
		
		case 15:
			return "MP_WHOUSE_14DES";
			break;
		
		case 16:
			return "MP_WHOUSE_15DES";
			break;
		
		case 17:
			return "MP_WHOUSE_16DES";
			break;
		
		case 18:
			return "MP_WHOUSE_17DES";
			break;
		
		case 19:
			return "MP_WHOUSE_18DES";
			break;
		
		case 20:
			return "MP_WHOUSE_19DES";
			break;
		
		case 21:
			return "MP_WHOUSE_20DES";
			break;
		
		case 22:
			return "MP_WHOUSE_21DES";
			break;
	}
	return "";
}

Vector3 func_371(int iParam0)
{
	Var0 = { 0f, 0f, 0f };
	if (!func_307(iParam0))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 1:
			Var0 = { 50.9205f, -2560.01f, 6f };
			break;
		
		case 2:
			Var0 = { -1074.852f, -1257.452f, 5.6938f };
			break;
		
		case 3:
			Var0 = { 901.936f, -1019.425f, 34.9666f };
			break;
		
		case 4:
			Var0 = { 253.9006f, -1955.933f, 22.9477f };
			break;
		
		case 5:
			Var0 = { -426.279f, 180.9043f, 80.6855f };
			break;
		
		case 6:
			Var0 = { -1050.36f, -2023.939f, 12.1616f };
			break;
		
		case 7:
			Var0 = { -1275.378f, -815.4295f, 17.1148f };
			break;
		
		case 8:
			Var0 = { -883.2906f, -2730.542f, 12.8285f };
			break;
		
		case 9:
			Var0 = { 269.6765f, -3016.279f, 5.7176f };
			break;
		
		case 10:
			Var0 = { 1561.402f, -2138.697f, 77.5275f };
			break;
		
		case 11:
			Var0 = { -303.7892f, -2698.39f, 6.0003f };
			break;
		
		case 12:
			Var0 = { 507.2061f, -649.5859f, 24.7512f };
			break;
		
		case 13:
			Var0 = { -525.8206f, -1775.87f, 21.3501f };
			break;
		
		case 14:
			Var0 = { -291.6372f, -1352.556f, 31.3146f };
			break;
		
		case 15:
			Var0 = { 348.6436f, 324.428f, 104.3185f };
			break;
		
		case 16:
			Var0 = { 922.0838f, -1561.299f, 29.7475f };
			break;
		
		case 17:
			Var0 = { 763.7448f, -885.2086f, 25.0869f };
			break;
		
		case 18:
			Var0 = { 1043.884f, -2172.603f, 30.471f };
			break;
		
		case 19:
			Var0 = { 1001.659f, -2511.88f, 28.302f };
			break;
		
		case 20:
			Var0 = { -263.138f, 194.3424f, 85.184f };
			break;
		
		case 21:
			Var0 = { 547.8112f, -1942.514f, 23.9851f };
			break;
		
		case 22:
			Var0 = { 88.9678f, -2216.882f, 6.0613f };
			break;
	}
	return Var0;
}

void func_372(int iParam0)
{
	if ((!func_348(iParam0) && !func_306(iParam0)) && func_373() < 5)
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_2586217[iVar0][func_16(-1)] == 0)
			{
				func_224(func_344(iVar0), iParam0, -1, 1);
				Global_1590535[PLAYER::PLAYER_ID()].f_274.f_106[iVar0] = iParam0;
				Global_1590535[PLAYER::PLAYER_ID()].f_274.f_106[iVar0].f_1 = 0;
				func_15(func_343(iVar0), iParam0, -1, 1, 0);
				return;
			}
			iVar0++;
		}
	}
}

int func_373()
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_106[iVar0] != 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_374(int iParam0)
{
	if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_106[iParam0] != 0)
	{
		return Global_1590535[PLAYER::PLAYER_ID()].f_274.f_106[iParam0];
	}
	return 0;
}

int func_375(int iParam0, int iParam1)
{
	Var0.f_1 = 307;
	*iParam1 = -1;
	if (Global_262145.f_15357)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
		return 0;
	}
	if (func_306(iParam0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
		return 0;
	}
	StringCopy(&cVar320, func_328(iParam0), 16);
	iVar324 = 0;
	iVar325 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(func_368(iParam0)) * Global_262145.f_78));
	iVar326 = (iVar325 - iVar324);
	iVar328 = 0;
	if (iVar326 > 0)
	{
		if (!MONEY::NETWORK_CAN_SPEND_MONEY(iVar326, 0, 1, 0, -1, 0))
		{
			func_252(MISC::GET_HASH_KEY(&cVar320), iVar326, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
			MISC::SET_BIT(&iLocal_614, 18);
			return 0;
		}
	}
	if (func_460())
	{
		while (!func_390(&Var0, iParam1, iParam0))
		{
			func_389();
			func_386(0);
			SYSTEM::WAIT(0);
			Global_22350.f_8382 = 1;
		}
		func_389();
		func_386(0);
		SYSTEM::WAIT(0);
		Global_22350.f_8382 = 1;
	}
	else
	{
		*iParam1 = 0;
	}
	iVar329 = 0;
	if (*iParam1 == -1)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
		return 0;
	}
	else
	{
		iVar328 = func_374(*iParam1);
		if (iVar328 <= 0 || iVar328 > 22)
		{
			iVar329 = 0;
		}
		else
		{
			iVar329 = func_382(iVar328);
		}
		iVar327 = (iVar325 - iVar329);
	}
	if (iVar327 > 0)
	{
		if (!MONEY::NETWORK_CAN_SPEND_MONEY(iVar327, 0, 1, 0, -1, 0))
		{
			func_252(MISC::GET_HASH_KEY(&cVar320), iVar327, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
			MISC::SET_BIT(&iLocal_614, 18);
			return 0;
		}
	}
	if (func_251())
	{
		MISC::SET_BIT(&iLocal_614, 7);
		iLocal_788 = 0;
		iVar330 = func_380(iParam0);
		iVar331 = func_379(*iParam1);
		iVar332 = 0;
		if (func_374(*iParam1) != 0)
		{
			iVar332 = func_380(func_374(*iParam1));
		}
		iVar333 = -1;
		while (func_236(&iVar333, iVar325, *iParam1, -1616616027, 235173372, iVar330, iVar331, iVar329, iVar332, 0, 0, 0))
		{
			func_623();
			SYSTEM::WAIT(0);
		}
		func_623();
		switch (iVar333)
		{
			case 0:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
				return 0;
				break;
			
			case 2:
				break;
			
			default:
				break;
		}
	}
	Var334.f_1 = -1;
	Var334.f_3 = -1;
	Var334.f_5 = -1;
	Var334.f_7 = -1;
	Var334.f_9 = -1;
	Var334.f_11 = -1;
	Var334.f_13 = -1;
	Var334.f_15 = -1;
	Var334.f_16 = -1;
	Var334.f_17 = -1;
	Var334.f_18 = -1;
	Var334.f_20 = -1;
	Var334 = iParam0;
	Var334.f_1 = iVar327;
	Var334.f_16 = func_378(0, PLAYER::PLAYER_ID());
	Var334.f_17 = func_378(1, PLAYER::PLAYER_ID());
	Var334.f_18 = func_378(2, PLAYER::PLAYER_ID());
	Var334.f_14 = func_341(iParam0);
	func_376(*iParam1, iVar325);
	if (iVar327 >= 0 && (iVar327 == 0 || (iVar327 > 0 && (func_251() || MONEY::NETWORK_CAN_SPEND_MONEY(iVar327, 0, 1, 0, -1, 0)))))
	{
		if (iVar327 > 0)
		{
			func_313(-1980650810, iVar327);
		}
		iVar328 = func_374(*iParam1);
		if (iVar328 <= 0 || iVar328 > 22)
		{
			if (func_251())
			{
				NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_232(func_233()));
			}
			MONEY::_0xBD0EFB25CCA8F97A(iVar325, &Var334, 0, 1);
		}
		else if (iVar327 > 0)
		{
			if (func_251())
			{
				NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_232(func_233()));
			}
			MONEY::_0xA95F667A755725DA(iVar327, &Var334, 0, 1);
		}
		if (func_251())
		{
			func_228(func_233());
		}
	}
	return 1;
}

void func_376(int iParam0, int iParam1)
{
	func_15(func_377(iParam0), iParam1, -1, 1, 0);
}

int func_377(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6365;
		
		case 1:
			return 6366;
		
		case 2:
			return 6367;
		
		case 3:
			return 6368;
		
		case 4:
			return 6369;
		
		default:
	}
	return 6365;
}

int func_378(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if ((Global_1590535[iParam1].f_274.f_106[iVar0] > 0 && Global_1590535[iParam1].f_274.f_106[iVar0] <= 22) && func_341(Global_1590535[iParam1].f_274.f_106[iVar0]) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_WARHOUSESLOT0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_WARHOUSESLOT1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_WARHOUSESLOT2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_WARHOUSESLOT3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_WARHOUSESLOT4_v0", 64);
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_380(int iParam0)
{
	func_381(&sVar0, iParam0);
	return MISC::GET_HASH_KEY(&sVar0);
}

void func_381(char* sParam0, int iParam1)
{
	StringCopy(sParam0, "WH_INDEX_", 64);
	StringIntConCat(sParam0, iParam1, 64);
	StringConCat(sParam0, "_t0_v0", 64);
}

int func_382(int iParam0)
{
	iVar0 = func_383(iParam0);
	return SYSTEM::CEIL((IntToFloat(iVar0) * 0.5f));
}

int func_383(int iParam0)
{
	if (func_385(PLAYER::PLAYER_ID(), iParam0))
	{
		iVar0 = func_305(iParam0);
		if (func_384(iVar0, &uVar1))
		{
			return uVar1;
		}
	}
	return -1;
}

int func_384(int iParam0, var uParam1)
{
	if (func_561(func_343(iParam0), -1, 0) == Global_2586217[iParam0][func_16(-1)])
	{
		*uParam1 = func_561(func_377(iParam0), -1, 0);
		return *uParam1 >= 0;
	}
	return 0;
}

int func_385(int iParam0, int iParam1)
{
	if (iParam0 == func_9())
	{
		return 0;
	}
	if (func_307(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590535[iParam0].f_274.f_106[iVar0] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_386(int iParam0)
{
	if (func_388())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_387(0))
		{
			func_752(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

int func_387(int iParam0)
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

bool func_388()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

void func_389()
{
	Global_22211.f_6 = 1;
}

int func_390(var uParam0, var uParam1, int iParam2)
{
	bVar0 = false;
	if (((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || func_459()) || !func_21(PLAYER::PLAYER_ID(), 1, 1)) || Global_1312791) || bVar0) || Global_2451426.f_3473.f_32)
	{
		if (bVar0)
		{
		}
		*uParam1 = -1;
		func_458(uParam0, -1, 0);
		return 1;
	}
	iVar1 = func_383(iParam2);
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_457();
	func_389();
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	PAD::SET_INPUT_EXCLUSIVE(2, 201);
	PAD::SET_INPUT_EXCLUSIVE(2, 189);
	PAD::SET_INPUT_EXCLUSIVE(2, 190);
	PAD::SET_INPUT_EXCLUSIVE(2, 174);
	PAD::SET_INPUT_EXCLUSIVE(2, 175);
	PAD::SET_INPUT_EXCLUSIVE(2, 180);
	PAD::SET_INPUT_EXCLUSIVE(2, 181);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		PAD::SET_INPUT_EXCLUSIVE(0, 24);
		PAD::SET_INPUT_EXCLUSIVE(0, 257);
		PAD::ENABLE_CONTROL_ACTION(2, 237, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 238, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 242, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 241, 1);
		PAD::DISABLE_CONTROL_ACTION(2, 2, 1);
		PAD::DISABLE_CONTROL_ACTION(2, 1, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
		if (!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			PAD::SET_INPUT_EXCLUSIVE(2, 202);
			PAD::SET_INPUT_EXCLUSIVE(2, 201);
		}
		func_454(0, 0, 0, 1);
		HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
	}
	MISC::SET_BIT(&(uParam0->f_314), 1);
	if (func_452(0, -1, 0))
	{
		if (func_21(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!MISC::IS_BIT_SET(uParam0->f_314, 0))
			{
				func_437(uParam0, iParam2);
				MISC::SET_BIT(&(uParam0->f_314), 0);
				func_434(uParam0, iParam2);
				if (!MISC::IS_BIT_SET(uParam0->f_317, 2))
				{
					func_403(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
				}
			}
			else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !func_402(8, -1)) && !Global_2450632.f_684.f_5)
			{
				if (!MISC::IS_BIT_SET(uParam0->f_317, 0))
				{
					iVar2 = iLocal_801[uParam0->f_311];
					iVar3 = func_374(iVar2);
					iVar4 = 0;
					if (iVar3 > 0)
					{
						iVar4 = func_382(iVar3);
					}
					if (iVar3 <= 0 || func_345(iVar3, iParam2))
					{
						if ((func_401() || (func_400() && Global_4268497 == uParam0->f_311)) || (HUD::IS_WARNING_MESSAGE_ACTIVE() && PAD::IS_CONTROL_JUST_PRESSED(2, 201)))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Success", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
							iVar5 = (iVar1 - iVar4);
							if (iVar5 <= 0 || MONEY::NETWORK_CAN_SPEND_MONEY(iVar5, 0, 1, 0, -1, 0))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_317, 2) && iVar3 > 0)
								{
									func_397(1, -1);
									MISC::SET_BIT(&(uParam0->f_317), 2);
									MISC::CLEAR_BIT(&(uParam0->f_314), 0);
									return 0;
								}
								else
								{
									*uParam1 = iVar2;
									MISC::CLEAR_BIT(&(uParam0->f_314), 0);
									func_458(uParam0, -1, 0);
									return 1;
								}
							}
							else
							{
								MISC::SET_BIT(&(uParam0->f_314), 2);
							}
							MISC::SET_BIT(&(uParam0->f_317), 0);
						}
					}
				}
				else if (!PAD::IS_CONTROL_JUST_RELEASED(2, 176) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 176))
				{
					MISC::CLEAR_BIT(&(uParam0->f_317), 0);
				}
				if (!MISC::IS_BIT_SET(uParam0->f_317, 1))
				{
					if ((func_396() || (func_395() && Global_4268497 > -1)) || (HUD::IS_WARNING_MESSAGE_ACTIVE() && PAD::IS_CONTROL_JUST_PRESSED(2, 202)))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FREEMODE_SOUNDSET", 1);
						if (!MISC::IS_BIT_SET(uParam0->f_317, 2))
						{
							func_458(uParam0, -1, 0);
							*uParam1 = -1;
							return 1;
						}
						else
						{
							MISC::CLEAR_BIT(&(uParam0->f_317), 2);
							MISC::CLEAR_BIT(&(uParam0->f_314), 0);
						}
						MISC::SET_BIT(&(uParam0->f_317), 1);
					}
				}
				else if (!PAD::IS_CONTROL_PRESSED(2, 202))
				{
					MISC::CLEAR_BIT(&(uParam0->f_317), 1);
				}
				if (!MISC::IS_BIT_SET(uParam0->f_317, 2))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_317, 4))
					{
						if ((PAD::IS_CONTROL_PRESSED(2, 172) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 172)) || func_394(0, 0, 0))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
							uParam0->f_311 = (uParam0->f_311 - 1);
							MISC::SET_BIT(&(uParam0->f_317), 4);
							MISC::CLEAR_BIT(&(uParam0->f_314), 0);
							func_631(&(uParam0->f_315));
						}
					}
					else if (func_393(uParam0, 172))
					{
						MISC::CLEAR_BIT(&(uParam0->f_317), 4);
					}
					if (!MISC::IS_BIT_SET(uParam0->f_317, 5))
					{
						if ((PAD::IS_CONTROL_PRESSED(2, 173) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 173)) || func_392(0, 0, 0))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
							uParam0->f_311++;
							MISC::SET_BIT(&(uParam0->f_317), 5);
							MISC::CLEAR_BIT(&(uParam0->f_314), 0);
							func_631(&(uParam0->f_315));
						}
					}
					else if (func_393(uParam0, 173))
					{
						MISC::CLEAR_BIT(&(uParam0->f_317), 5);
					}
				}
				if (func_400())
				{
					if (Global_4268497 != uParam0->f_311)
					{
						uParam0->f_311 = Global_4268497;
						func_391(uParam0->f_311, 1, 1);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FREEMODE_SOUNDSET", 1);
					}
				}
				if (uParam0->f_311 >= uParam0->f_313)
				{
					uParam0->f_311 = 0;
				}
				if (uParam0->f_311 < 0)
				{
					uParam0->f_311 = (uParam0->f_313 - 1);
				}
				func_434(uParam0, iParam2);
				if (!MISC::IS_BIT_SET(uParam0->f_317, 2) && !HUD::IS_WARNING_MESSAGE_ACTIVE())
				{
					func_403(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
				}
			}
		}
	}
	return 0;
}

void func_391(var uParam0, bool bParam1, int iParam2)
{
	Global_22350.f_5739 = uParam0;
	Global_22350.f_5874 = iParam2;
	if (Global_22350.f_5739 < Global_22350.f_5738)
	{
		Global_22350.f_5738 = Global_22350.f_5739;
	}
	else if ((Global_22350.f_5729 && Global_22350.f_5739 > Global_22350.f_5740) || (!Global_22350.f_5729 && Global_22350.f_5739 >= (Global_22350.f_5738 + Global_22350.f_5225)))
	{
		iVar0 = Global_22350.f_5738;
		while (iVar0 <= Global_22350.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22350.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22350.f_5225 && Global_22350.f_5738 < 128)
		{
			Global_22350.f_5738++;
			iVar1 = 0;
			iVar0 = Global_22350.f_5738;
			while (iVar0 <= Global_22350.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22350.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22350.f_4690), "", 24);
		StringCopy(&(Global_4268421.f_21), "", 16);
	}
}

int func_392(int iParam0, int iParam1, int iParam2)
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (Global_4268497 == -3)
		{
			if ((PAD::IS_CONTROL_PRESSED(2, 237) && iParam0) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2, 242) || (PAD::IS_DISABLED_CONTROL_PRESSED(2, 242) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_393(var uParam0, int iParam1)
{
	if ((!PAD::IS_CONTROL_PRESSED(2, iParam1) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iParam1)) || func_632(&(uParam0->f_315), 250, 1))
	{
		return 1;
	}
	return 0;
}

int func_394(int iParam0, int iParam1, int iParam2)
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (Global_4268497 == -2)
		{
			if ((PAD::IS_CONTROL_PRESSED(2, 237) && iParam0) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2, 241) || (PAD::IS_DISABLED_CONTROL_PRESSED(2, 241) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_395()
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

int func_396()
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 177) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 237)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 238)) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return 1;
		}
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 177))
	{
		return 1;
	}
	return 0;
}

void func_397(bool bParam0, int iParam1)
{
	if (!func_399(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8417)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_22350.f_8417 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_22350.f_5628[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, 0);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_398(&(Global_22350.f_5660[iVar0]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_398(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_399(var uParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22350.f_5721[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_22350.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22350.f_5721[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

int func_400()
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (Global_4268497 > -1)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_401()
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 176) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 237)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 238)) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return 1;
		}
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 176))
	{
		return 1;
	}
	return 0;
}

bool func_402(int iParam0, int iParam1)
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

void func_403(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_399(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_432(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_22350)
	{
		if (func_430(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar57 = fVar37;
			fVar58 = fVar36;
			fVar57 = (fVar57 + 0f);
		}
		else
		{
			Global_22350 = 0;
		}
	}
	if (MISC::GET_HASH_KEY(&(Global_22350.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar59 = Global_22348;
	}
	else
	{
		fVar59 = (((Global_22348 + fVar57) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22349;
	}
	fVar62 = 1f;
	if (bParam7)
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar60, &iVar61);
		fVar63 = GRAPHICS::_GET_ASPECT_RATIO(0);
		if (func_429())
		{
			iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) * fVar63));
		}
		fVar64 = (SYSTEM::TO_FLOAT(iVar60) / SYSTEM::TO_FLOAT(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_429())
		{
			fVar62 = 1f;
		}
		iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) / fVar62));
		iVar61 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) / fVar62));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar60, &iVar61);
	}
	if (bParam3)
	{
		if (Global_22350.f_5218 <= 1)
		{
			func_425(Global_22350.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_22350.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22350.f_5728)
		{
			if (MISC::GET_HASH_KEY(&(Global_22350.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar51 = Global_22348;
			}
			else
			{
				if (Global_22350)
				{
					StringCopy(&cVar65, func_424(29), 64);
					StringCopy(&cVar81, func_421(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_22350.f_7029[29])) == -1487683087)
					{
						func_420(Global_22347, Global_22348, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar57 - 0f) * 0.5f)), fVar58, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar57 - 0f) * 0.5f)), fParam5, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_22350.f_8387)
				{
					iVar1 = Global_22350.f_8383;
					iVar2 = Global_22350.f_8384;
					iVar3 = Global_22350.f_8385;
					iVar4 = Global_22350.f_8386;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_420(Global_22347, (Global_22348 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_22348 + fVar57) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_22350.f_1)) != 0)
				{
					func_419();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22350.f_68)
					{
						if (Global_22350.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22350.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_14[iVar16], Global_22350.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22350.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_22[iVar17]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_22[iVar17]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_22347 + 0.00390625f), ((Global_22348 + fVar57) + 0.00416664f), 0);
				}
				if (Global_22350.f_5735)
				{
					func_419();
					func_417((((Global_22347 + fParam5) - 0.00390625f) - func_418("CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737);
				}
				else if (Global_22350.f_5731 > Global_22350.f_5225)
				{
					if (Global_22350.f_5734 != 0)
					{
						func_419();
						func_417((((Global_22347 + fParam5) - 0.00390625f) - func_418("CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733);
					}
				}
			}
			iVar6 = Global_22350.f_5738;
			iVar9 = 0;
			fVar97 = fVar51;
			if (Global_22350.f_8397)
			{
				iVar1 = Global_22350.f_8393;
				iVar2 = Global_22350.f_8394;
				iVar3 = Global_22350.f_8395;
				iVar4 = Global_22350.f_8396;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22350.f_5225 && iVar6 <= Global_22350.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_22350.f_5485[iVar6])
					{
						if (Global_22350.f_5356[iVar6] && iVar6 != Global_22350.f_5738)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar56 = Global_22350.f_5745[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar97 + ((fVar51 - fVar97) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar97), 0f, 255, 255, 255, 255, 0);
			if (Global_22350.f_5731 > Global_22350.f_5225)
			{
				if (Global_22350.f_8402)
				{
					iVar1 = Global_22350.f_8398;
					iVar2 = Global_22350.f_8399;
					iVar3 = Global_22350.f_8400;
					iVar4 = Global_22350.f_8401;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_420(Global_22347, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.x = (Var38.x * (0.5f / fVar62));
				Var38.y = (Var38.y * (0.5f / fVar62));
				if (Global_22350.f_8415)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.x / 1280f) * fVar62), ((Var38.y / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_22350.f_4690)) != 0 && Global_22350.f_4766 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22347 + 0.0046875f);
				if (Global_22350.f_4768 != 0)
				{
					func_430(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_416(fVar42);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_420(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					iVar4 = Global_22350.f_8406;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_416(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_22350.f_4768 != 0)
				{
					func_430(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_415(Global_22350.f_4768, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_424(Global_22350.f_4768), func_421(Global_22350.f_4768, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22350.f_4766 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_22350.f_4767) > Global_22350.f_4766)
					{
						StringCopy(&(Global_22350.f_4690), "", 24);
						Global_22350.f_4766 = -1;
					}
				}
			}
			if (MISC::GET_HASH_KEY(&(Global_4268421.f_21)) != 0 && Global_4268421.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22347 + 0.0046875f);
				if (Global_4268421.f_67 != 0)
				{
					func_430(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_416(fVar42);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_420(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					iVar4 = Global_22350.f_8406;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_416(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4268421.f_67 != 0)
				{
					func_430(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_415(Global_4268421.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_424(Global_4268421.f_67), func_421(Global_4268421.f_67, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4268421.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4268421.f_66) > Global_4268421.f_65)
					{
						StringCopy(&(Global_4268421.f_21), "", 16);
						Global_4268421.f_65 = -1;
					}
				}
			}
			func_411(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22350.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_22350.f_5218;
			if (Global_22350.f_5729)
			{
				iVar98 = (Global_22350.f_5732 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_22350.f_5745[iVar6] != 0f)
				{
					fVar56 = Global_22350.f_5745[iVar6];
				}
				if (Global_22350.f_5729)
				{
					iVar6 = Global_22350.f_8038[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22350.f_5738 && iVar9 < Global_22350.f_5225)
				{
					bVar33 = true;
					if (Global_22350.f_5739 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_22350.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22350.f_5879[iVar6] = fVar35;
				fVar34 = (Global_22347 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_22350.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_22350.f_8409)
					{
						HUD::GET_HUD_COLOUR(Global_22350.f_8408, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_22347 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, iVar105, 0);
					Global_22350.f_5877 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22350.f_5226)
				{
					if (MISC::IS_BIT_SET(Global_22350.f_5089[iVar6], iVar8) || Global_22350.f_5056[iVar8] == 5)
					{
						if (Global_22350.f_5729)
						{
							iVar19 = Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar20 = Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar21 = Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar22 = Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar23 = Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + iVar8)];
						}
						else
						{
							Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar19;
							Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar20;
							Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar21;
							Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar22;
							Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_22350.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_22350.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_22350.f_5062[iVar8] != -1f)
						{
							fVar34 = ((Global_22347 + 0.0046875f) + Global_22350.f_5062[iVar8]);
						}
						if ((iVar8 < 4 && Global_22350.f_5062[iVar8 + 1] != -1f) && fVar34 < Global_22350.f_5062[iVar8 + 1])
						{
							fVar46 = (Global_22350.f_5062[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_22347 + Global_22349) - 0.0046875f) - fVar34);
						}
						if ((Global_22350.f_5075[iVar8] && Global_22350.f_5874) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_22350.f_5056[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22350.f_2124[iVar24][iVar14] == 5 || Global_22350.f_2124[iVar24][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_22350.f_2124[iVar24][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											func_409(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, iVar106, bVar53, bVar52);
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_22350.f_73[iVar24]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25)]));
												}
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25)]));
												}
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
										{
											fVar43 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_430(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_22350.f_4433[(iVar22 + iVar14)] == 2 || Global_22350.f_4433[(iVar22 + iVar14)] == 51) || Global_22350.f_4433[(iVar22 + iVar14)] == 61)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
										Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar44;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											iVar101 = (iVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_22350.f_5083[iVar101] == 2)
												{
													Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] = (Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] - Global_22350.f_5068[iVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_430(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_430(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_415(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_424(26), func_421(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_430(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_430(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_415(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_424(27), func_421(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24][iVar14] == 5 || Global_22350.f_2124[iVar24][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										func_409(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_408(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_73[iVar24]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22350.f_2124[iVar24][iVar14] == 1)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25)]));
											}
											iVar31 = 1;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 8)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25)]));
											}
											iVar31 = 8;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 5)
										{
											if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 6)
										{
											if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 7)
										{
											if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 9)
										{
											if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 2)
										{
											if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 3)
										{
											if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 4)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar28)] == 2 || Global_22350.f_4433[(iVar22 + iVar28)] == 51) || Global_22350.f_4433[(iVar22 + iVar28)] == 61)
											{
												if (func_430(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_430(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_415(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_22350.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_424(Global_22350.f_4433[(iVar22 + iVar28)]), func_421(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_424(Global_22350.f_4433[(iVar22 + iVar28)]), func_421(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22350.f_5083[iVar8] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar42), fVar35, 0);
											if (func_339() && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1768762336) > 0)
											{
												if (iVar8 == 0)
												{
													func_409(0, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0.0185f;
													fVar114 = 0.004f;
													fVar115 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar112), 0);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar107);
													HUD::ADD_TEXT_COMPONENT_INTEGER((Global_22350.f_5738 + iVar30));
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar14)] != 2 && Global_22350.f_4433[(iVar22 + iVar14)] != 51) && Global_22350.f_4433[(iVar22 + iVar14)] != 61)
											{
												if (func_430(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_430(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_415(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_22350.f_4433[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_424(Global_22350.f_4433[(iVar22 + iVar14)]), func_421(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (Global_22347 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else if (Global_22350.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_424(Global_22350.f_4433[(iVar22 + iVar14)]), func_421(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_424(Global_22350.f_4433[(iVar22 + iVar14)]), func_421(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22350.f_2124[iVar24][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_409(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_408(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[iVar20]);
										fVar43 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_430(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_430(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_415(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_424(26), func_421(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_430(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_430(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_415(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_424(27), func_421(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_409(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										func_407((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_3918[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_409(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_408(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
										fVar43 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_430(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_430(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_415(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_424(26), func_421(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_430(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_430(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_415(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_424(27), func_421(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									func_409(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
									func_406((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_430(Global_22350.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22350.f_5729)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_22350.f_5083[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
											Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
											fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)];
										}
										if (bVar54)
										{
											if (func_430(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22350.f_5083[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_430(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_415(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_424(26), func_421(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
											if (func_430(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_430(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_415(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_424(27), func_421(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_430(Global_22350.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_415(Global_22350.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												GRAPHICS::DRAW_SPRITE(func_424(Global_22350.f_4433[iVar22]), func_421(Global_22350.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_405(Global_22350.f_4433[iVar22])), (fVar37 * func_405(Global_22350.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_22350.f_5056[iVar8] == 5)
						{
							if (Global_22350.f_5068[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							if (Global_22350.f_5075[iVar8])
							{
								if (func_430(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_22350.f_8038[iVar9] = iVar6;
						Global_22350.f_5740 = iVar6;
						iVar9++;
						if (Global_22350.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_22350.f_5745[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_22350.f_5728)
					{
						Global_22350.f_5485[iVar6] = 1;
						if (Global_22350.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_22350.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22350.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22350.f_5728)
			{
				Global_22350.f_5730 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_22350.f_5733 = iVar11;
				Global_22350.f_5731 = iVar10;
				Global_22350.f_5728 = 1;
			}
		}
		if (!Global_22350.f_5729)
		{
			Global_22350.f_5732 = iVar9;
			Global_22350.f_5729 = 1;
		}
		iVar5++;
	}
	Global_22350.f_5876 = fVar51;
	Global_22350.f_5878 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_22350.f_5876);
	if (!Global_22350.f_8382)
	{
		func_386(0);
	}
	Global_22350.f_8382 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_404(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_404(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

float func_405(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_406(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_407(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

void func_408(bool bParam0)
{
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_22350.f_8410[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_22350.f_8410[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_409(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (bParam2)
	{
		if (bParam3)
		{
			func_410(Global_22350.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_410(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_411(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!func_399(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_432(bParam4, bParam8))
	{
		return;
	}
	if (func_413())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_30(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_22350.f_4769 != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (Global_22350.f_5026[iVar1] != 361)
				{
					StringCopy(&(Global_22350.f_4771[iVar1]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_22350.f_5026[iVar1], 1), 64);
				}
				else if (Global_22350.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22350.f_4771[iVar1]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, Global_22350.f_5039[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_22350.f_4770 = 0;
		}
		if (!Global_22350.f_4770)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_22350.f_5081 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (MISC::GET_HASH_KEY(&(Global_22350.f_4964[iVar1])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_412(&(Global_22350.f_4771[iVar1]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_22350.f_4964[iVar2])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_412(&(Global_22350.f_4771[iVar2]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_259(&(Global_22350.f_4964[iVar1]));
					}
					else
					{
						iVar3 = Global_22350.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_22350.f_4964[iVar1]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_22350.f_5026[iVar1] != 361 && MISC::IS_BIT_SET(Global_22350.f_5052, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_22350.f_5026[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(361);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4268421.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_22350.f_4769);
				func_412(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_259(&(Global_4268421.f_16));
				}
				else
				{
					iVar4 = Global_22350.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4268421.f_16));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22350.f_5082)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_22350.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22350.f_4769)
		{
			if (Global_22350.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_22350.f_4964[iVar1]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_4268421.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4268421.f_16));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22350.f_8417)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_22350.f_8417 = 1;
			}
		}
		else if (Global_22350.f_8417)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_22350.f_8417 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_22350.f_5055)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_22350.f_5660[iVar0], Global_22350.f_5053, Global_22350.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_22350.f_5660[iVar0], 255, 255, 255, 255, 0);
		}
	}
}

void func_412(var uParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

int func_413()
{
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_414())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_19431 == 0)
		{
			if (Var0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.y > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_414()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) > 0)
	{
		return 1;
	}
	return 0;
}

void func_415(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_416(float fParam0)
{
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_22347 + Global_22349) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_417(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_418(char* sParam0, int iParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_419();
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_419()
{
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22350.f_8392)
	{
		iVar0 = Global_22350.f_8388;
		iVar1 = Global_22350.f_8389;
		iVar2 = Global_22350.f_8390;
		iVar3 = Global_22350.f_8391;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_22347 + 0.0046875f), ((Global_22347 + Global_22349) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_420(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_421(int iParam0, bool bParam1)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_7029[iParam0])))
	{
		if (MISC::GET_HASH_KEY(&(Global_22350.f_7029[iParam0])) == -1487683087)
		{
			Var19 = { func_423(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_422(&uVar3);
			}
		}
		else
		{
			return func_422(&(Global_22350.f_7029[iParam0]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_422(var uParam0)
{
	return uParam0;
}

struct<13> func_423(int iParam0)
{
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_424(int iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_6020[iParam0])))
	{
		if (MISC::GET_HASH_KEY(&(Global_22350.f_6020[iParam0])) == -1487683087)
		{
			Var16 = { func_423(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_422(&uVar0);
		}
		else
		{
			return func_422(&(Global_22350.f_6020[iParam0]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_425(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (Global_22350.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22350.f_5218 >= 128)
	{
		return;
	}
	if (Global_22350.f_5220 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 < Global_22350.f_5741)
	{
		return;
	}
	if (Global_22350.f_5218 != iParam0)
	{
		Global_22350.f_5218 = iParam0;
		Global_22350.f_5219 = 0;
	}
	iVar0 = Global_22350.f_5056[Global_22350.f_5219];
	if (iVar0 != 1)
	{
		while (Global_22350.f_5219 < 4 && iVar0 != 1)
		{
			Global_22350.f_5219++;
			iVar0 = Global_22350.f_5056[Global_22350.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22350.f_73[Global_22350.f_5220]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_22350.f_1610[Global_22350.f_5220] = bParam3;
	Global_22350.f_1867[Global_22350.f_5220] = iParam4;
	Global_22350.f_5220++;
	if (!bParam3)
	{
		func_428(Global_22350.f_5218, 1);
	}
	else
	{
		func_428(Global_22350.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_427(&(Global_22350.f_73[Global_22350.f_5220]));
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_430(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22350.f_5068[Global_22350.f_5219])
		{
			Global_22350.f_5068[Global_22350.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_426(&(Global_22350.f_73[Global_22350.f_5220]));
			if (fVar4 > Global_22350.f_5745[iParam0])
			{
				Global_22350.f_5745[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_22350.f_5089[iParam0]), Global_22350.f_5219);
	Global_22350.f_5219++;
	Global_22350.f_5744 = 1;
	Global_22350.f_5742 = (Global_22350.f_5220 - 1);
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = iParam2;
}

float func_426(char* sParam0)
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_427(char* sParam0)
{
	if (!MISC::IS_STRING_NULL(uParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_409(0, 1, 0, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_428(int iParam0, bool bParam1)
{
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

int func_429()
{
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_430(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	StringCopy(&cVar0, func_424(iParam0), 64);
	StringCopy(&cVar16, func_421(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar32, &iVar33);
			fVar35 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_429())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_429())
			{
				fVar34 = 1f;
			}
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-892862129) > 0)
			{
				GRAPHICS::GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
			}
			iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar32) / fVar34));
			iVar33 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) / fVar34));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
		}
		Var37 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		Var37.x = (Var37.x * (func_431(iParam0) / fVar34));
		Var37.y = (Var37.y * (func_431(iParam0) / fVar34));
		if (!bParam2)
		{
			Var37.x = (Var37.x - 2f);
			Var37.y = (Var37.y - 2f);
		}
		if (iParam0 == 30)
		{
			Var37.x = 288f;
			Var37.y = 106f;
		}
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_22350.f_7029[29])) == -1487683087)
		{
			Var37.x = 106f;
			Var37.y = 106f;
		}
		*fParam3 = ((Var37.x / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.y / IntToFloat(iVar33)) / (Var37.x / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22349)
			{
				*fParam4 = (*fParam4 * (Global_22349 / *fParam3));
				*fParam3 = Global_22349;
			}
		}
		return 1;
	}
	return 0;
}

float func_431(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_432(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_402(8, -1) && func_433() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_76882) || Global_22350.f_8416) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_98796.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_433()
{
	return Global_1312812;
}

void func_434(var uParam0, int iParam1)
{
	iVar1 = iLocal_801[uParam0->f_311];
	iVar2 = func_374(iVar1);
	if (MISC::IS_BIT_SET(uParam0->f_317, 2))
	{
		iVar3 = func_382(iVar2);
		func_436(iVar3, bVar0);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_314), 4);
		MISC::CLEAR_BIT(&(uParam0->f_314), 3);
		if (MISC::IS_BIT_SET(uParam0->f_314, 2))
		{
			func_435("REP_WHOUSE_4", 100, 0);
		}
		else if (MISC::IS_BIT_SET(uParam0->f_314, 5))
		{
			func_435("MP_PROP_HEI_0", 100, 0);
		}
		else if (MISC::IS_BIT_SET(uParam0->f_314, 6))
		{
			func_435("PROP3RDDIS", 1000, 0);
		}
		else if (iVar2 > 0 && !func_345(iVar2, iParam1))
		{
			if (func_341(iVar2) > func_341(iParam1))
			{
				func_435("REP_WHOUSE_5a", 1000, 0);
			}
			else if (!func_585(iVar2))
			{
				func_435("REP_WHOUSE_5b", 1000, 0);
			}
			else if (iVar2 == iParam1)
			{
				func_435("REP_WHOUSE_5c", 1000, 0);
			}
			else
			{
				func_435("REP_WHOUSE_5", 1000, 0);
			}
		}
		else if (iVar2 > 0 && func_345(iVar2, iParam1))
		{
			func_435("REP_WHOUSE_2", 100, 0);
		}
		else
		{
			func_435("REP_WHOUSE_3", 100, 0);
		}
	}
}

void func_435(char* sParam0, int iParam1, int iParam2)
{
	StringCopy(&(Global_22350.f_4690), sParam0, 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = iParam1;
	Global_22350.f_4767 = MISC::GET_GAME_TIMER();
	Global_22350.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
}

void func_436(int iParam0, bool bParam1)
{
	iVar2 = 0;
	iVar3 = -1;
	iVar4 = 0;
	sVar0 = "BRSCRWTEX";
	if (bParam1)
	{
		sVar1 = "BRDISWARE";
		iVar2 = "BRSHETPROSUB1";
	}
	else
	{
		sVar1 = "BRDISWAREB1";
		iVar2 = "BRSHETPROSUB1";
	}
	iVar3 = iParam0;
	if (iVar3 < 0)
	{
		iVar3 = (iVar3 * -1);
	}
	if (iParam0 < 0)
	{
		iVar4 = "BRSHETMAK";
	}
	else
	{
		iVar4 = "BRSHETPRSA";
	}
	HUD::SET_WARNING_MESSAGE_WITH_HEADER_AND_SUBSTRING_FLAGS(sVar0, sVar1, 18, iVar2, 1, iVar3, 0, iVar4, 0, 1, 0);
}

void func_437(var uParam0, int iParam1)
{
	iVar2 = func_373();
	func_451(0, 0);
	if (!MISC::IS_BIT_SET(uParam0->f_317, 2))
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			iLocal_801[iVar1] = iVar2;
			iVar1++;
		}
		func_450(1, 1, 0, 0, 0);
		func_449(1, 2, 1, 1, 1);
		func_448(0, 0, 0, 0, 0);
		func_447("REP_WHOUSE_0");
		iVar1 = 4;
		while (iVar1 >= 0)
		{
			iVar3 = func_374(iVar1);
			if (iVar3 > 0)
			{
				bVar4 = func_345(iVar3, iParam1);
				func_425(iVar0, "PIM_DNAME", 1, bVar4, 0, 0);
				if (func_446())
				{
					func_445(HUD::_GET_LABEL_TEXT(func_328(iVar3)), 0, 0, 0);
				}
				else
				{
					func_444(HUD::_GET_LABEL_TEXT(func_328(iVar3)), 0, 1);
				}
				func_425(iVar0, "CUST_GAR_COST", 1, bVar4, 0, 0);
				func_441(func_382(iVar3), 0);
				uParam0->f_1[iVar1] = iVar3;
				iLocal_801[iVar0] = iVar1;
				iVar0++;
			}
			else if (iVar1 > 0)
			{
				if (func_374((iVar1 - 1)) > 0)
				{
					func_425(iVar0, "REP_WHOUSE_1", 0, 1, 0, 0);
					uParam0->f_1[iVar1] = iVar3;
					iLocal_801[iVar0] = iVar1;
					iVar0++;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		MISC::CLEAR_BIT(&(uParam0->f_314), 2);
		MISC::CLEAR_BIT(&(uParam0->f_314), 5);
		uParam0->f_313 = iVar0;
		func_391(uParam0->f_311, 1, 1);
		func_438(uParam0, iParam1);
	}
}

void func_438(var uParam0, int iParam1)
{
	func_440(-1);
	if (func_374(uParam0->f_311) <= 0 || func_345(func_374(uParam0->f_311), iParam1))
	{
		func_439(176, "BB_SELECT", -1);
	}
	func_439(177, "BB_BACK", -1);
}

void func_439(int iParam0, char* sParam1, int iParam2)
{
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, 1);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_22350.f_5052), Global_22350.f_4769);
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

void func_440(int iParam0)
{
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 361;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	Global_22350.f_5052 = 0;
	StringCopy(&(Global_4268421.f_16), "", 16);
	Global_4268421.f_20 = -1;
	if (MISC::IS_PC_VERSION())
	{
		if (!func_399(&iVar1, 0, iParam0))
		{
			return;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar1], "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_441(var uParam0, bool bParam1)
{
	if (Global_22350.f_5222 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	Global_22350.f_3918[Global_22350.f_5222] = uParam0;
	Global_22350.f_5222++;
	Global_22350.f_2124[Global_22350.f_5742][Global_22350.f_5743] = 2;
	Global_22350.f_5743++;
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_443();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_430(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_442();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

float func_442()
{
	iVar0 = 0;
	while (iVar0 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)] != 0)
		{
			if (func_430(Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_443()
{
	iVar7 = 0;
	while (iVar7 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 1)
		{
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 8)
		{
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_409(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
	{
		HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_22350.f_73[Global_22350.f_5742]));
	}
	iVar7 = 0;
	while (iVar7 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 1)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(Global_22350.f_5742 + iVar8)]));
			}
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 8)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(Global_22350.f_5742 + iVar8)]));
			}
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 2)
		{
			if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[((Global_22350.f_5222 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 3)
		{
			if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[((Global_22350.f_5223 - iVar4) + iVar10)], Global_22350.f_4304[((Global_22350.f_5223 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 5)
		{
			if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11)]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 6)
		{
			if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11)]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 7)
		{
			if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11)]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 9)
		{
			if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11)]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
	{
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)] != 0)
		{
			func_430(Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_444(char* sParam0, bool bParam1, bool bParam2)
{
	if (Global_22350.f_5221 >= 32)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	StringCopy(&(Global_2461220[Global_22350.f_5221]), sParam0, 64);
	Global_22350.f_5221++;
	Global_22350.f_2124[Global_22350.f_5742][Global_22350.f_5743] = 5;
	Global_22350.f_5743++;
	fVar0 = func_443();
	if (bParam2)
	{
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_443();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_430(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_442();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

void func_445(char* sParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (Global_22350.f_5221 >= 32)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	StringCopy(&(Global_2461220[Global_22350.f_5221]), sParam0, 64);
	Global_22350.f_5221++;
	if (bParam3)
	{
		Global_22350.f_2124[Global_22350.f_5742][Global_22350.f_5743] = 9;
	}
	else
	{
		Global_22350.f_2124[Global_22350.f_5742][Global_22350.f_5743] = 7;
	}
	Global_22350.f_5743++;
	fVar0 = func_443();
	if (bParam2)
	{
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_443();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_430(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_442();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

int func_446()
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

void func_447(char* sParam0)
{
	StringCopy(&(Global_22350.f_1), sParam0, 16);
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_448(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5075[0] = iParam0;
	Global_22350.f_5075[1] = iParam1;
	Global_22350.f_5075[2] = iParam2;
	Global_22350.f_5075[3] = iParam3;
	Global_22350.f_5075[4] = iParam4;
}

void func_449(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5083[0] = iParam0;
	Global_22350.f_5083[1] = iParam1;
	Global_22350.f_5083[2] = iParam2;
	Global_22350.f_5083[3] = iParam3;
	Global_22350.f_5083[4] = iParam4;
}

void func_450(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5056[0] = iParam0;
	Global_22350.f_5056[1] = iParam1;
	Global_22350.f_5056[2] = iParam2;
	Global_22350.f_5056[3] = iParam3;
	Global_22350.f_5056[4] = iParam4;
	Global_22350.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_22350.f_5226++;
	}
}

void func_451(bool bParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22350.f_73[iVar0]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22350.f_2124[iVar0][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2461220[iVar0]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_5089[iVar0] = 0;
		Global_22350.f_5227[iVar0] = 0;
		Global_22350.f_5356[iVar0] = 0;
		Global_22350.f_5879[iVar0] = 0f;
		Global_22350.f_5485[iVar0] = 0;
		Global_22350.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22350.f_5056[iVar0] = 0;
		Global_22350.f_5068[iVar0] = 0f;
		Global_22350.f_5062[iVar0] = -1f;
		Global_22350.f_5075[iVar0] = 0;
		Global_22350.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 361;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22350.f_6020[iVar0]), "", 64);
		StringCopy(&(Global_22350.f_7029[iVar0]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22350.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4268421.f_16), "", 16);
	Global_4268421.f_20 = -1;
	Global_22350 = 0;
	Global_22350.f_5218 = 0;
	Global_22350.f_5219 = 0;
	Global_22350.f_5220 = 0;
	Global_22350.f_5222 = 0;
	Global_22350.f_5223 = 0;
	Global_22350.f_5224 = 0;
	Global_22350.f_5221 = 0;
	Global_22350.f_5874 = 0;
	Global_22350.f_6014 = 0;
	Global_22350.f_5739 = 0;
	Global_22350.f_5738 = 0;
	Global_22350.f_5740 = 0;
	StringCopy(&(Global_22350.f_4690), "", 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = 0;
	Global_22350.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_4768 = 0;
	StringCopy(&(Global_4268421.f_21), "", 16);
	Global_4268421.f_61 = 0;
	Global_4268421.f_62 = 0;
	Global_4268421.f_63 = 0;
	Global_4268421.f_64 = 0;
	Global_4268421.f_65 = 0;
	Global_4268421.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4268421.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4268421.f_67 = 0;
	StringCopy(&(Global_22350.f_1), "", 16);
	Global_22350.f_5074 = 0f;
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_5744 = 0;
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = 0;
	Global_22350.f_5742 = 0;
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	Global_22350.f_5225 = 10;
	Global_22350.f_5226 = 0;
	Global_22350.f_5876 = 0f;
	Global_22350.f_5877 = 0f;
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	Global_22350.f_5730 = 0f;
	Global_22350.f_5731 = 0;
	Global_22350.f_5733 = 0;
	Global_22350.f_5732 = 0;
	Global_22350.f_5734 = 0;
	Global_22350.f_5735 = 0;
	Global_22350.f_5736 = 0;
	Global_22350.f_5737 = 0;
	Global_22350.f_8413 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22350.f_6008[iVar0] = -1;
		Global_22350.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_22350.f_5081 = 0f;
	Global_22350.f_5052 = 0;
	Global_22350.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22350.f_6015)
	{
		Global_22350.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_8392 = 0;
	Global_22350.f_8387 = 0;
	Global_22350.f_8397 = 0;
	Global_22350.f_8402 = 0;
	Global_22350.f_8407 = 0;
	Global_22350.f_8409 = 0;
	Global_22350.f_8415 = 0;
	Global_22347 = 0.05f;
	Global_22348 = 0.05f;
	Global_22349 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(0);
	if (bParam0)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22349 = 0.225f;
	}
}

bool func_452(char* sParam0, int iParam1, bool bParam2)
{
	if (!func_399(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_5635[iVar0])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_22350.f_5635[iVar0]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_22350.f_5635[iVar0]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
	Global_22350.f_5614[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", 0);
		Global_22350.f_5621[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0].f_1), "instructional_buttons", 24);
	bVar2 = func_453(&(Global_22350.f_5660[iVar0]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_453(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = unk_0x67D02A194A2FC2BD(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_454(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		Global_4268497 = -1;
		return;
	}
	PAD::_0x5B73C77D9EB66E24(1);
	fVar0 = Global_22347;
	fVar2 = (fVar0 + Global_22349);
	fVar3 = Global_22350.f_5730;
	fVar1 = (Global_22350.f_5730 - (IntToFloat(Global_22350.f_5732) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_22350.f_5732 < 1)
	{
		fVar1 = (Global_22350.f_5730 - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_456();
	if (Global_4268497 == -6)
	{
		return;
	}
	Global_4268497 = -1;
	fVar7 = Global_4268491;
	fVar8 = Global_4268492;
	if (Global_22350.f_5733 > Global_22350.f_5732)
	{
		if (((Global_4268491 >= fVar0 && Global_4268491 <= fVar2) && Global_4268492 >= fVar3) && Global_4268492 < (fVar3 + fVar6))
		{
			Global_4268497 = -2;
			if (bParam3)
			{
				func_455(0);
			}
			return;
		}
		if (((Global_4268491 >= fVar0 && Global_4268491 <= fVar2) && Global_4268492 >= (fVar3 + fVar6)) && Global_4268492 < (fVar3 + 0.034722f))
		{
			Global_4268497 = -3;
			if (bParam3)
			{
				func_455(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_22350.f_5733 == -1)
		{
			Global_4268497 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_22350.f_5732);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_420(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_22349, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_4268497 = Global_22350.f_8038[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4268497 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4268497 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4268497 = -4;
		return;
	}
	Global_4268497 = -1;
}

void func_455(bool bParam0)
{
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_22347;
	fVar1 = Global_22350.f_5730;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_4268497 == -2)
	{
		func_420(fVar0, fVar1, Global_22349, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4268497 == -3)
	{
		func_420(fVar0, (fVar1 + fVar2), Global_22349, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_456()
{
	Global_4268493 = Global_4268491;
	Global_4268494 = Global_4268492;
	Global_4268491 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_4268492 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_4268495 = (Global_4268491 - Global_4268493);
	Global_4268496 = (Global_4268492 - Global_4268494);
}

void func_457()
{
	Global_2537071.f_4532 = 0;
}

void func_458(var uParam0, int iParam1, bool bParam2)
{
	if (MISC::IS_BIT_SET(uParam0->f_314, 7))
	{
		bParam2 = true;
	}
	*uParam0 = 0;
	uParam0->f_311 = 0;
	uParam0->f_313 = 0;
	uParam0->f_314 = 0;
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_314), 7);
	}
	uParam0->f_317 = 0;
	func_397(1, iParam1);
}

bool func_459()
{
	return Global_1590535[PLAYER::PLAYER_ID()].f_196 != 0;
}

int func_460()
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_106[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

struct<4> func_461(int iParam0, int iParam1, bool bParam2)
{
	StringCopy(&Var0, "", 16);
	iVar4 = iParam0;
	iVar5 = func_326(iParam0);
	iVar6 = iParam1;
	if (bParam2 && iVar6 == 1)
	{
		StringCopy(&Var0, "WHOUSE_SHISI", 16);
		StringIntConCat(&Var0, iVar5, 16);
	}
	else
	{
		StringCopy(&Var0, "WHOUSE_SHI", 16);
		StringIntConCat(&Var0, iVar6, 16);
		StringConCat(&Var0, "D", 16);
		StringIntConCat(&Var0, iVar4, 16);
	}
	return Var0;
}

bool func_462()
{
	return Global_1676240;
}

bool func_463(int iParam0)
{
	return func_364(iParam0) > 0;
}

void func_464(int iParam0)
{
	iVar0 = (4 * iLocal_991 + 1);
	bVar1 = false;
	switch (*iParam0)
	{
		case 6002:
			if (iLocal_991 < 0 || iLocal_991 > 8)
			{
				if (!MISC::IS_BIT_SET(iLocal_614, 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
					func_560("SVM_MIS_TI", "SVM_MIS_FL", "WHOUSE_CONF", "", 0, 0, -1);
					MISC::SET_BIT(&iLocal_614, 0);
				}
			}
			else
			{
				Global_1676237 = 1;
				func_468(&(Global_2450632.f_680), iLocal_991, 0);
				func_636(0);
			}
			break;
		
		case 6003:
			*iParam0 = 1;
			break;
		
		case 6999:
			if (iLocal_791 != 6)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
				*iParam0 = 1;
				return;
			}
			bVar1 = func_561(3975, -1, 0) >= iVar0;
			if (iLocal_991 < 0 || iLocal_991 > 8)
			{
				if (!MISC::IS_BIT_SET(iLocal_614, 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
					func_560("SVM_MIS_TI", "SVM_MIS_FL", "", "WHOUSE_CONF", 0, 0, -1);
					MISC::SET_BIT(&iLocal_614, 0);
				}
				iLocal_991 = -1;
			}
			else if (!bVar1)
			{
				if (!MISC::IS_BIT_SET(iLocal_614, 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
					func_560("SVM_MIS_TI", "SVM_MIS_FNA", "", "WHOUSE_CONF", 0, 0, -1);
					MISC::SET_BIT(&iLocal_614, 0);
				}
				iLocal_991 = -1;
			}
			else if (func_466(iLocal_991, 0) == -1 || func_465())
			{
				if (!MISC::IS_BIT_SET(iLocal_614, 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
					func_560("SVM_MIS_TI", "SVM_MIS_FL", "", "WHOUSE_CONF", 0, 0, -1);
					MISC::SET_BIT(&iLocal_614, 0);
				}
				iLocal_991 = -1;
			}
			else
			{
				func_560("SVM_MIS_TI", "SVM_MIS_L", "WHOUSE_CONF", "WHOUSE_CANC", 1, 0, -1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Navigate", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
			}
			iLocal_613 = 1;
			break;
	}
}

bool func_465()
{
	return MISC::IS_BIT_SET(Global_2450632.f_2, 11);
}

int func_466(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_467(Global_262145.f_4990[iParam0]);
			break;
		
		case 1:
			return func_467(Global_262145.f_4999[iParam0]);
			break;
		
		case 2:
			return func_467(Global_262145.f_5008[iParam0]);
			break;
	}
	return -1;
}

int func_467(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 1218)
	{
		if (iParam0 == Global_794709.f_107189[iVar0].f_1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_468(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_558(iParam2);
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (iVar0 < func_557(iParam2))
	{
		iVar1 = func_466(iVar0, iParam2);
		if (iVar1 != -1)
		{
			func_555(&(Global_794709.f_4[iVar1]));
			func_554();
			switch (iParam2)
			{
				case 0:
					func_553(222);
					break;
				
				case 1:
					func_553(228);
					break;
				
				case 2:
					func_552(PLAYER::PLAYER_ID(), 0);
					if (func_550(Global_794709.f_107189[iVar1].f_1))
					{
						func_553(235);
					}
					else
					{
						func_553(233);
					}
					func_548(func_423(PLAYER::PLAYER_ID()));
					break;
			}
			func_547(Global_794709.f_4[iVar1].f_71);
			func_545();
			func_544();
			func_543();
			func_542();
			func_541();
			if (func_121() <= 3)
			{
				func_540();
			}
			func_539();
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("FMMC_PLYLOAD");
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(5);
			func_537(func_538(), 0, 0, 0);
			func_470(uParam0, 0, 0, 0f, 0f, 0f, &uVar2, 0f, 0f, 0f, 1, 0, &uVar2, &iVar5, iVar5, 0, 0, 1, 0, 0, 0, 0);
			HUD::DISPLAY_RADAR(0);
			func_469();
			Global_1590535[PLAYER::PLAYER_ID()].f_98 = 8;
			return 1;
		}
	}
	return 0;
}

void func_469()
{
	MISC::CLEAR_BIT(&Global_2450632, 15);
}

void func_470(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, struct<3> Param7, bool bParam10, bool bParam11, var uParam12, var uParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, bool bParam21)
{
	func_529(uParam0, iParam1, 1, iParam14, 1);
	if (func_30(PLAYER::PLAYER_ID(), 0))
	{
		if (bParam11)
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (!func_528() || bParam15)
				{
					func_518(0);
				}
			}
			return;
		}
	}
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
	}
	Var3 = { Param7 };
	fVar6 = -1f;
	if (func_517(iParam1))
	{
		*uParam6 = { func_516(iParam1, iParam2) };
		Var3 = { func_515(iParam1, iParam2) };
		fVar6 = func_514(iParam1, iParam2);
	}
	if (!func_513(*uParam6))
	{
		Var0 = { *uParam6 };
	}
	if (func_513(Var0))
	{
		if (!bParam10)
		{
			Var0 = { Param3 };
			if (INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Var0.x, Var0.y, (Var0.z + 1f)))
			{
			}
			else
			{
				Var0.z = (Var0.z + 4f);
			}
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_513(Var0))
		{
			if (func_30(PLAYER::PLAYER_ID(), 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_510()) && !ENTITY::IS_ENTITY_DEAD(func_510(), 0))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(func_510(), 1) };
					Var3 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(func_510()) };
					if (func_509(Global_1590535[PLAYER::PLAYER_ID()].f_740, 1, 0))
					{
						Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						Var3 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					}
				}
				else
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					Var3 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) };
				}
			}
			else
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				Var3 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) };
			}
			if ((func_508(PLAYER::PLAYER_ID()) || func_507(PLAYER::PLAYER_ID())) && func_506())
			{
				Var0.z = (Var0.z + 1.5f);
			}
			else if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			{
				if (func_508(PLAYER::PLAYER_ID()))
				{
					Var0.z = (Var0.z + 0.4f);
				}
				else
				{
					Var0.z = (Var0.z + 1.5f);
				}
			}
			else
			{
				Var0.z = (Var0.z + 4f);
			}
		}
	}
	if (bParam19)
	{
		Var0 = { 1124.745f, 263.6554f, -48.8552f };
		Var3 = { -22.4617f, 0f, -75.8431f };
		fVar6 = 50f;
	}
	else if (func_505(Global_4456448.f_194990) || iParam18)
	{
		if (func_504(PLAYER::PLAYER_ID()))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			Var3 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) };
			Var0.z = (Var0.z + 0.4f);
			fVar6 = CAM::GET_FINAL_RENDERED_CAM_FOV();
		}
		else
		{
			Var0 = { -194.2056f, -1853.75f, 70.3345f };
			Var3 = { -10.0011f, 0f, 131.0271f };
			fVar6 = 42.6052f;
		}
	}
	else if (func_503(Global_4456448.f_194990) || iParam17)
	{
		Var0 = { 347.2638f, 4867.324f, -59.2679f };
		Var3 = { 1.2933f, 0.0747f, -34.6934f };
		fVar6 = 50f;
	}
	else if (iParam20 || func_502(Global_4456448.f_194990))
	{
		Var0 = { 2709.332f, -366.5988f, -52.2786f };
		Var3 = { -19.962f, 0f, -121.3927f };
		fVar6 = 56.6574f;
	}
	else if (bParam21)
	{
		iVar7 = func_501(PLAYER::PLAYER_ID());
		Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_500(iVar7), func_499(iVar7), 3.5688f, 7.9792f, 4.1641f) };
		Var3 = { -21.6791f, 0f, (func_499(iVar7) + 40.237f) };
		fVar6 = 70f;
	}
	if (func_528() && !bParam15)
	{
		Var0 = { -213.5595f, 316.9778f, 96.9244f };
		Var3 = { -1.0483f, 0f, -127.3989f };
		fVar6 = 25.5102f;
	}
	if (iParam1 == 0 && bParam11)
	{
		func_492();
		func_491(&Var8, 144, Global_1590535[PLAYER::PLAYER_ID()].f_274.f_28);
		if (!func_513(Var8))
		{
			Var0 = { Var8 };
		}
		func_485(&Var8, 144, Global_1590535[PLAYER::PLAYER_ID()].f_274.f_28);
		Var3 = { Var8 };
	}
	CAM::SET_CAM_ACTIVE(*uParam0, 1);
	CAM::SET_CAM_COORD(*uParam0, Var0);
	CAM::SET_CAM_ROT(*uParam0, Var3, 2);
	if (fVar6 > 0f)
	{
		CAM::SET_CAM_FOV(*uParam0, fVar6);
	}
	else
	{
		CAM::SET_CAM_FOV(*uParam0, 40f);
	}
	if (func_528() && !bParam15)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_484(PLAYER::PLAYER_ID()))
			{
				func_736(PLAYER::PLAYER_ID(), 0, 4, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 1);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -209.434f, 305.016f, 95.9464f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 12.5f);
				TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), -209.867f, 306.969f, 95.9464f, 1f, 20000, 1193033728, 0.1f);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
				PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
		}
		MISC::CLEAR_AREA_OF_VEHICLES(-209.434f, 305.016f, 95.9464f, 30f, 0, 0, 0, 0, 0, 0);
		func_483(1);
	}
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!func_528() || bParam15)
		{
			func_518(0);
		}
	}
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	if (!func_482() && !func_481())
	{
		func_478(0);
	}
	if (func_477())
	{
		STREAMING::CLEAR_FOCUS();
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		*uParam12 = { Var0 };
		*uParam13 = 1;
	}
	else
	{
		func_476(Var0);
	}
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
	func_471(func_528(), ((iParam16 || iParam17) || iParam18));
}

void func_471(bool bParam0, bool bParam1)
{
	if (func_30(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	if (!bParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
			}
		}
	}
	if (!bParam0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_473())
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			if (func_472())
			{
				func_736(PLAYER::PLAYER_ID(), 0, 32772, 0);
			}
			else if (!bParam1)
			{
				func_736(PLAYER::PLAYER_ID(), 0, 319492, 0);
			}
		}
		else
		{
			func_736(PLAYER::PLAYER_ID(), 0, 57348, 0);
		}
	}
}

bool func_472()
{
	return Global_2451426.f_6190;
}

int func_473()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (func_475(uVar0, 1) && !func_474(uVar0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_474(var uParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0)))
		{
			if (DECORATOR::DECOR_EXIST_ON(uParam0, "Player_Vehicle"))
			{
				if (DECORATOR::DECOR_GET_INT(uParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_475(var uParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0)))
		{
			if (DECORATOR::DECOR_EXIST_ON(uParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_476(struct<3> Param0)
{
	if (!func_477())
	{
		return;
	}
	STREAMING::SET_FOCUS_POS_AND_VEL(Param0, 0f, 0f, 0f);
	NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(1);
}

int func_477()
{
	if (func_30(PLAYER::PLAYER_ID(), 0))
	{
		if (Global_1590535[PLAYER::PLAYER_ID()].f_740 != func_9())
		{
			if (func_21(Global_1590535[PLAYER::PLAYER_ID()].f_740, 0, 1))
			{
				if (func_509(Global_1590535[PLAYER::PLAYER_ID()].f_740, 1, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

void func_478(int iParam0)
{
	if (func_479())
	{
		return;
	}
	if (Global_1590535[PLAYER::PLAYER_ID()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return;
	}
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
	}
}

int func_479()
{
	if (func_480())
	{
		return Global_2460590;
	}
	return 0;
}

int func_480()
{
	if (Global_2460583)
	{
		return Global_2460582;
	}
	return 0;
}

bool func_481()
{
	return MISC::IS_BIT_SET(Global_2450632.f_3, 9);
}

bool func_482()
{
	return MISC::IS_BIT_SET(Global_2450632.f_3, 6);
}

void func_483(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_146), 27);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_146), 27);
	}
}

bool func_484(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_146, 27);
}

int func_485(var uParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case default:
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
			func_486(iParam2, iParam1, &Var0, -1, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			func_486(iParam2, iParam1, &Var0, 61, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 83:
		case 84:
		case 85:
			func_486(iParam2, iParam1, &Var0, 83, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			func_486(iParam2, iParam1, &Var0, 77, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 73:
		case 74:
		case 75:
		case 76:
			func_486(iParam2, iParam1, &Var0, 73, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_486(iParam2, iParam1, &Var0, 88, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
			return 0;
	}
}

void func_486(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	Var0[0] = { func_490(iParam3, bParam4) };
	Var0[1] = { func_490(iParam0, bParam4) };
	*uParam2 = { func_488(iParam1, iParam3) };
	Var13 = { *uParam2 - Var0[0] };
	Var13 = { func_487(Var13, -Var0[0].f_3.f_2) };
	Var13 = { func_487(Var13, Var0[1].f_3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0[1], 0f, Var13) };
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
		case 79:
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
			while (Var0[0].f_3.f_2 > 180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 - 360f);
			}
			while (Var0[0].f_3.f_2 < -180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 + 360f);
			}
			while (Var0[1].f_3.f_2 > 180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 - 360f);
			}
			while (Var0[1].f_3.f_2 < -180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1].f_3.f_2 - Var0[0].f_3.f_2));
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
			while (Var0[0].f_3.f_2 > 180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 - 360f);
			}
			while (Var0[0].f_3.f_2 < -180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 + 360f);
			}
			while (Var0[1].f_3.f_2 > 180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 - 360f);
			}
			while (Var0[1].f_3.f_2 < -180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1].f_3.f_2 - Var0[0].f_3.f_2));
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
			while (Var0[0].f_3.f_2 > 180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 - 360f);
			}
			while (Var0[0].f_3.f_2 < -180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 + 360f);
			}
			while (Var0[1].f_3.f_2 > 180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 - 360f);
			}
			while (Var0[1].f_3.f_2 < -180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1].f_3.f_2 - Var0[0].f_3.f_2));
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
			while (Var0[0].f_3.f_2 > 180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 - 360f);
			}
			while (Var0[0].f_3.f_2 < -180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 + 360f);
			}
			while (Var0[1].f_3.f_2 > 180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 - 360f);
			}
			while (Var0[1].f_3.f_2 < -180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1].f_3.f_2 - Var0[0].f_3.f_2));
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

Vector3 func_487(struct<3> Param0, float fParam3)
{
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.x = ((Param0.x * fVar4) - (Param0.y * fVar3));
	Var0.y = ((Param0.x * fVar3) + (Param0.y * fVar4));
	Var0.z = Param0.z;
	return Var0;
}

struct<6> func_488(var uParam0, int iParam1)
{
	iVar23 = 0;
	if (func_489(iParam1, &uVar6))
	{
		iVar23 = 1;
	}
	if (iVar23 && MISC::_GET_BASE_ELEMENT_METADATA(&Var0, &(Var0.f_3), uParam0, uVar6))
	{
		return Var0;
	}
	return Var0;
}

int func_489(int iParam0, var uParam1)
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

struct<6> func_490(int iParam0, bool bParam1)
{
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
		
		case 79:
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

int func_491(var uParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case default:
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
			func_486(iParam2, iParam1, &Var0, -1, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			func_486(iParam2, iParam1, &Var0, 61, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 83:
		case 84:
		case 85:
			func_486(iParam2, iParam1, &Var0, 83, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			func_486(iParam2, iParam1, &Var0, 77, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 73:
		case 74:
		case 75:
		case 76:
			func_486(iParam2, iParam1, &Var0, 73, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_486(iParam2, iParam1, &Var0, 88, 0);
			*uParam0 = { Var0 };
			return 1;
			return 0;
	}
}

void func_492()
{
	if (func_496())
	{
		return;
	}
	func_495(4, -1);
	if (func_494())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			if (PLAYER::INT_TO_PLAYERINDEX(iVar0) == PLAYER::PLAYER_ID())
			{
				if (!func_493(48))
				{
					NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0);
				}
			}
			else
			{
				NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0);
			}
		}
		iVar0++;
	}
}

bool func_493(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (iVar0 >= 8)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_2451426.f_1.f_2813[iVar0], iVar1);
}

bool func_494()
{
	return MISC::IS_BIT_SET(Global_2450632.f_39.f_4, 0);
}

void func_495(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1377170.f_1047), iParam0);
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

int func_496()
{
	if (func_498() != 2)
	{
		return 0;
	}
	if (!func_494() && !((Global_1670379 || Global_1312791) && func_497()))
	{
		return 0;
	}
	return 1;
}

var func_497()
{
	return Global_2450632.f_39.f_57;
}

int func_498()
{
	return Global_2450632.f_39.f_40;
}

float func_499(int iParam0)
{
	return Global_4008564[iParam0].f_7;
}

Vector3 func_500(int iParam0)
{
	return Global_4008564[iParam0].f_4;
}

var func_501(int iParam0)
{
	return Global_2420771[iParam0];
}

int func_502(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_5798[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_503(int iParam0)
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

bool func_504(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2425662[iParam0].f_196, 24);
}

int func_505(int iParam0)
{
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 14)
		{
			if (Global_262145.f_6446[iVar1] == 251)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_5922[iVar1])
				{
					if (iParam0 == Global_262145.f_5032[iVar1][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

bool func_506()
{
	return MISC::IS_BIT_SET(Global_2450632.f_3, 4);
}

int func_507(int iParam0)
{
	if (iParam0 != func_9())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_20(Global_2425662[iParam0].f_310.f_5) == 6;
			}
		}
	}
	return 0;
}

int func_508(int iParam0)
{
	if (iParam0 != func_9())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_9())
			{
				return func_20(Global_2425662[iParam0].f_310.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_509(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_9())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 1))
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

var func_510()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_512()))
	{
		return func_512();
	}
	return func_511();
}

var func_511()
{
	return Global_2359302.f_2;
}

var func_512()
{
	return Global_2359302.f_3;
}

int func_513(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.y == 0f) && Param0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_514(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			return 40.5914f;
		
		case 122:
			return 50f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 50f;
				
				case 1:
					return 50f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 50f;
				
				case 1:
					return 40.4324f;
				
				case 2:
					return 42.2709f;
				
				case 3:
					return 43.6444f;
				
				case 4:
					return 37.3862f;
				
				case 5:
					return 38.6952f;
				
				case 6:
					return 40.9091f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 40.5238f;
				
				case 1:
					return 47.4321f;
				
				case 2:
					return 38.6571f;
				
				case 3:
					return 44.0641f;
				
				case 4:
					return 39.2991f;
				
				case 5:
					return 31.7484f;
				
				case 6:
					return 35.6342f;
				
				case 7:
					return 36.0072f;
				
				case 8:
					return 42.5782f;
				
				case 9:
					return 37.4336f;
				
				default:
			}
			break;
		
		case 14:
			return 50f;
	}
	return 50f;
}

Vector3 func_515(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			return 1.3773f, 0f, -88.827f;
		
		case 122:
			return -18.1605f, 2.6167f, 113.0513f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 2.3039f, 0f, -19.6903f;
				
				case 1:
					return -5.9341f, 0f, -151.6385f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return -3.627f, 0f, 34.6935f;
				
				case 1:
					return -57.9221f, 0f, 58.3042f;
				
				case 2:
					return -15.4498f, 0f, 161.1361f;
				
				case 3:
					return -1.8386f, 0f, -135.0223f;
				
				case 4:
					return 0.5233f, 0f, -85.7377f;
				
				case 5:
					return -4.2364f, 0f, 173.6634f;
				
				case 6:
					return -3.74f, 0f, -30.7752f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 4.1441f, 0f, 15.6909f;
				
				case 1:
					return 5.4815f, 0f, -127.6695f;
				
				case 2:
					return -4.1889f, 0f, -15.0654f;
				
				case 3:
					return 16.4433f, 0f, -60.3988f;
				
				case 4:
					return 7.8225f, 0f, 39.2409f;
				
				case 5:
					return 2.0405f, 0f, -122.3459f;
				
				case 6:
					return 7.3382f, 0f, 157.6388f;
				
				case 7:
					return 6.481f, 0f, 172.9874f;
				
				case 8:
					return 14.0573f, 0f, 5.0622f;
				
				case 9:
					return -10.1444f, 0f, -131.4038f;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 8.8196f, 0f, 57.5677f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_516(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			return -1297.855f, 84.6478f, 54.6519f;
		
		case 122:
			return -855.7661f, -2645.376f, 100.8438f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 13.4678f, -1097.781f, 30.192f;
				
				case 1:
					return 816.6221f, -2160.659f, 30.3139f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return -1172.111f, -1641.549f, 5.7494f;
				
				case 1:
					return 498.4758f, -226.4275f, 71.0569f;
				
				case 2:
					return -1217.632f, 364.4556f, 86.527f;
				
				case 3:
					return -2884.754f, 32.9823f, 15.1123f;
				
				case 4:
					return -948.1036f, -1260.249f, 8.228f;
				
				case 5:
					return -1614.216f, 302.0945f, 66.0158f;
				
				case 6:
					return -1380.721f, -107.9713f, 50.6998f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 903.8763f, -192.214f, 74.6401f;
				
				case 1:
					return 1419.517f, -2216.034f, 61.8467f;
				
				case 2:
					return -83.9713f, -1331.635f, 29.8383f;
				
				case 3:
					return 364.6455f, -2441.897f, 6.2607f;
				
				case 4:
					return 1237.207f, 2715.999f, 37.6424f;
				
				case 5:
					return 1019.153f, 2680.427f, 41.2254f;
				
				case 6:
					return 269.5203f, 2617.41f, 44.7054f;
				
				case 7:
					return -194.2518f, 6295.688f, 31.0991f;
				
				case 8:
					return 1682.759f, 4954.088f, 42.6891f;
				
				case 9:
					return 2325.447f, 3145.91f, 58.4284f;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 1993.697f, 3049.667f, 47.7241f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_517(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

void func_518(int iParam0)
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_519(0)))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(func_519(iParam0), 0, 1);
	}
}

char* func_519(int iParam0)
{
	if (iParam0 || func_493(134))
	{
		return "MenuMGHeistIn";
	}
	if (func_527())
	{
		return "MenuMGTournamentIn";
	}
	if (func_521(Global_4456448.f_232883))
	{
		return "MenuMGRemixIn";
	}
	if (func_520(Global_4456448.f_232883) && MISC::IS_BIT_SET(Global_4456448.f_234216.f_2808, 2))
	{
		return "MenuSurvivalAlienIn";
	}
	return "MenuMGSelectionIn";
}

bool func_520(int iParam0)
{
	return iParam0 == 998;
}

int func_521(int iParam0)
{
	if ((((func_526(iParam0) || func_525(iParam0)) || func_524(iParam0)) || func_523(iParam0)) || func_522(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_522(int iParam0)
{
	return iParam0 == 64;
}

bool func_523(int iParam0)
{
	return iParam0 == 65;
}

bool func_524(int iParam0)
{
	return iParam0 == 69;
}

bool func_525(int iParam0)
{
	return iParam0 == 67;
}

bool func_526(int iParam0)
{
	return iParam0 == 68;
}

bool func_527()
{
	return MISC::IS_BIT_SET(Global_2451426.f_1.f_2809, 12);
}

bool func_528()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_142, 2);
}

void func_529(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if ((iParam1 != 0 && iParam1 != 3) || iParam2 == 1)
	{
		if (CAM::DOES_CAM_EXIST(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, 0);
			if (bParam4)
			{
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 1, 0);
			}
			CAM::DESTROY_CAM(*uParam0, 0);
			*uParam0 = 0;
			func_469();
			if (func_477())
			{
				STREAMING::CLEAR_FOCUS();
			}
			NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(0);
			if (Global_1312372 == 0 && iParam3 == 1)
			{
				func_531(1, 0);
				func_531(1, 0);
			}
			if (!func_530())
			{
				if (MISC::IS_DURANGO_VERSION() || MISC::IS_ORBIS_VERSION())
				{
					if (!Global_2458936.f_7)
					{
						HUD::BUSYSPINNER_OFF();
					}
				}
				else
				{
					HUD::BUSYSPINNER_OFF();
				}
			}
		}
	}
}

bool func_530()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_142, 0);
}

void func_531(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_536(1, 0, 1);
	}
	else
	{
		func_532(iParam1);
	}
}

void func_532(int iParam0)
{
	func_535();
	if (iParam0 == 0)
	{
		if (LOADINGSCREEN::_LOADINGSCREEN_GET_LOAD_FREEMODE())
		{
			return;
		}
	}
	if (func_534() == 0 || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_533(1);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(0);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(0);
	}
}

void func_533(int iParam0)
{
	if (Global_1312467.f_20 != iParam0)
	{
		Global_1312467.f_20 = iParam0;
	}
}

int func_534()
{
	return Global_1312467.f_20;
}

void func_535()
{
	Global_2462226 = 1;
}

void func_536(int iParam0, bool bParam1, bool bParam2)
{
	if (func_479())
	{
		return;
	}
	if ((func_534() == 1 || HUD::IS_PAUSE_MENU_ACTIVE()) || iParam0)
	{
		func_533(0);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
		if (!bParam1)
		{
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
		}
		if (bParam2)
		{
			GRAPHICS::RESET_PAUSED_RENDERPHASES();
		}
	}
}

void func_537(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (bParam1 && bParam2)
	{
		return;
	}
	if (bParam3)
	{
		if (!bParam1)
		{
			return;
		}
	}
	Global_2404658 = iParam0;
	if (bParam1)
	{
		Global_2404658 += 10000;
	}
	if (bParam2)
	{
		Global_2404658 += 10000;
		Global_2404658 += 20000;
	}
	if (bParam3)
	{
		Global_2404658 = (Global_2404658 + 40000);
	}
}

int func_538()
{
	return Global_1590535[PLAYER::PLAYER_ID()].f_274.f_28;
}

void func_539()
{
	MISC::SET_BIT(&(Global_2450632.f_3), 4);
}

void func_540()
{
	MISC::SET_BIT(&(Global_1627020[PLAYER::PLAYER_ID()].f_29), 12);
}

void func_541()
{
	Global_2450632.f_617 = 1;
}

void func_542()
{
	Global_2450632.f_618 = 0;
}

void func_543()
{
	MISC::CLEAR_BIT(&Global_2450632, 7);
}

void func_544()
{
	MISC::CLEAR_BIT(&(Global_2450632.f_2), 14);
}

void func_545()
{
	MISC::SET_BIT(&Global_2450632, 5);
	func_546();
}

void func_546()
{
	MISC::SET_BIT(&Global_2450632, 8);
}

void func_547(var uParam0)
{
	Global_2450632.f_38 = uParam0;
}

void func_548(struct<13> Param0)
{
	if (func_549(Param0))
	{
		Global_2451426.f_6437 = { Param0 };
	}
}

bool func_549(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

int func_550(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (func_551(iVar0) && Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_551(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 8:
		case 14:
		case 15:
			return 1;
		
		default:
	}
	return 0;
}

void func_552(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset");
	}
	MISC::SET_BIT(&iVar0, iParam1);
	DECORATOR::DECOR_SET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset", iVar0);
}

void func_553(int iParam0)
{
	Global_2450632.f_7 = iParam0;
}

void func_554()
{
	MISC::SET_BIT(&(Global_2450632.f_2), 29);
}

void func_555(char* sParam0)
{
	StringCopy(&(Global_2450632.f_759), sParam0, 24);
	if (func_556())
	{
		StringCopy(&(Global_959568.f_42), sParam0, 24);
	}
}

bool func_556()
{
	return MISC::IS_BIT_SET(Global_2451426.f_1.f_2809, 5);
}

int func_557(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 16;
			break;
	}
	return -1;
}

int func_558(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_561(3974, -1, 0);
		
		case 1:
			return func_561(5460, -1, 0);
		
		case 2:
			iVar1 = func_561(5659, -1, 0);
			iVar0 = 0;
			while (iVar0 < 16)
			{
				if (!MISC::IS_BIT_SET(iVar1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
			return 16;
		
		default:
	}
	return -1;
}

int func_559(int iParam0)
{
	if (iParam0 != func_9())
	{
		return Global_1590535[iParam0].f_274.f_134.f_44;
	}
	return -1;
}

void func_560(char[4] cParam0, char* sParam1, char[4] cParam2, char[4] cParam3, bool bParam4, bool bParam5, int iParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_608, "SHOW_OVERLAY");
	func_259(cParam0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
	if (iParam6 != -1)
	{
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam6);
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	func_259(cParam2);
	func_259(cParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	MISC::SET_BIT(&iLocal_614, 5);
}

int func_561(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_16(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_562(bool bParam0, bool bParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_608, "HIDE_OVERLAY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_563();
	if (bParam0)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Cancel", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
	}
	if (bParam1)
	{
		if (MISC::IS_BIT_SET(iLocal_614, 3))
		{
			MISC::CLEAR_BIT(&iLocal_614, 3);
		}
		if (MISC::IS_BIT_SET(iLocal_614, 2))
		{
			MISC::CLEAR_BIT(&iLocal_614, 2);
		}
	}
	MISC::CLEAR_BIT(&iLocal_615, 3);
	MISC::CLEAR_BIT(&iLocal_614, 5);
}

void func_563()
{
	if (MISC::IS_BIT_SET(iLocal_614, 0))
	{
		MISC::CLEAR_BIT(&iLocal_614, 0);
	}
	if (MISC::IS_BIT_SET(iLocal_614, 1))
	{
		MISC::CLEAR_BIT(&iLocal_614, 1);
	}
}

int func_564(int iParam0)
{
	return iParam0 + 1;
}

void func_565()
{
	if (iLocal_791 == 2 || iLocal_791 == 5)
	{
		if (MISC::IS_BIT_SET(iLocal_614, 17))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_608, "IS_WAREHOUSE_PANEL_SHOWING");
			uLocal_612 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			MISC::CLEAR_BIT(&iLocal_614, 17);
		}
		else if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_612))
		{
			if (GRAPHICS::_GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_BOOL(uLocal_612))
			{
				MISC::SET_BIT(&iLocal_614, 16);
			}
			else
			{
				MISC::CLEAR_BIT(&iLocal_614, 16);
			}
			MISC::CLEAR_BIT(&iLocal_614, 17);
		}
	}
}

void func_566()
{
	if (iLocal_613 == 0 || iLocal_613 == 1)
	{
		if (func_567())
		{
			if (!MISC::IS_BIT_SET(iLocal_614, 20))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_608, "GET_CURRENT_SELECTION");
				uLocal_609 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_608, "GET_SELECTED_WAREHOUSE_ID");
				uLocal_610 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				MISC::SET_BIT(&iLocal_614, 20);
			}
			MISC::SET_BIT(&iLocal_614, 17);
			iLocal_613 = 0;
		}
	}
}

int func_567()
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
	{
		return 1;
	}
	return 0;
}

void func_568()
{
	if (!MISC::IS_BIT_SET(iLocal_614, 12))
	{
		if (func_567() || func_569())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_608, "GET_CURRENT_SCREEN_ID");
			uLocal_611 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			MISC::SET_BIT(&iLocal_614, 12);
		}
	}
	else if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_611))
	{
		iLocal_791 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_611);
		MISC::CLEAR_BIT(&iLocal_614, 12);
	}
}

int func_569()
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_CONTROL_JUST_PRESSED(2, 238))
	{
		return 1;
	}
	return 0;
}

void func_570()
{
	if (Global_73992)
	{
		if (Global_73990)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || (PAD::IS_CONTROL_JUST_PRESSED(2, 237) && !HUD::IS_WARNING_MESSAGE_ACTIVE()))
			{
				Global_73990 = 0;
				Global_73992 = 0;
				MISC::CLEAR_BIT(&iLocal_614, 18);
				NETWORK::_0xFAE628F1E9ADB239(Global_73993, Global_73994, 0);
				NETWORK::OPEN_COMMERCE_STORE("", "", 4);
				while (NETWORK::IS_COMMERCE_STORE_OPEN())
				{
					func_623();
					SYSTEM::WAIT(0);
				}
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 202) || (PAD::IS_CONTROL_JUST_PRESSED(2, 238) && !HUD::IS_WARNING_MESSAGE_ACTIVE()))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				Global_73990 = 0;
				Global_73992 = 0;
				MISC::CLEAR_BIT(&iLocal_614, 18);
				MISC::SET_BIT(&iLocal_615, 3);
			}
		}
		return;
	}
	PAD::ENABLE_CONTROL_ACTION(2, 205, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 205))
	{
		if (iLocal_791 == 5)
		{
			if (func_295(PLAYER::PLAYER_ID()))
			{
				if (MISC::IS_BIT_SET(iLocal_615, 2))
				{
					MISC::CLEAR_BIT(&iLocal_615, 2);
				}
				else
				{
					MISC::SET_BIT(&iLocal_615, 2);
				}
			}
		}
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_608, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(205), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	PAD::ENABLE_CONTROL_ACTION(2, 206, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 206))
	{
		if (iLocal_791 == 5)
		{
			if (func_295(PLAYER::PLAYER_ID()))
			{
				if (MISC::IS_BIT_SET(iLocal_615, 2))
				{
					MISC::CLEAR_BIT(&iLocal_615, 2);
				}
				else
				{
					MISC::SET_BIT(&iLocal_615, 2);
				}
			}
		}
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_608, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(206), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	PAD::ENABLE_CONTROL_ACTION(2, 207, 1);
	if (PAD::IS_CONTROL_PRESSED(2, 207))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_608, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(207), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2, 207))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_608, "SET_INPUT_RELEASE_EVENT", SYSTEM::TO_FLOAT(207), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	PAD::ENABLE_CONTROL_ACTION(2, 208, 1);
	if (PAD::IS_CONTROL_PRESSED(2, 208))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_608, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(208), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2, 208))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_608, "SET_INPUT_RELEASE_EVENT", SYSTEM::TO_FLOAT(208), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_574();
	PAD::ENABLE_CONTROL_ACTION(2, 201, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
	{
		if (MISC::IS_BIT_SET(iLocal_614, 12))
		{
		}
		else
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_608, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(201), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	PAD::ENABLE_CONTROL_ACTION(2, 202, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
	{
		if (MISC::IS_BIT_SET(iLocal_614, 12))
		{
		}
		else
		{
			if ((func_755() && Global_1694834.f_1) && !MISC::IS_BIT_SET(iLocal_614, 5))
			{
				if (iLocal_791 == 4 || iLocal_791 == 1)
				{
					func_636(0);
				}
			}
			if ((iLocal_791 != 4 && iLocal_791 != 6) || !MISC::IS_BIT_SET(iLocal_614, 5))
			{
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_608, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(202), -1082130432, -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_791 == 3 || iLocal_791 == 0)
			{
				func_636(0);
			}
		}
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
	{
		if (MISC::IS_BIT_SET(iLocal_615, 3))
		{
			MISC::CLEAR_BIT(&iLocal_615, 3);
		}
		else if (MISC::IS_BIT_SET(iLocal_614, 5))
		{
			func_562(1, 1);
		}
		else if (func_573())
		{
			MISC::CLEAR_BIT(&iLocal_614, 16);
		}
		if (MISC::IS_BIT_SET(iLocal_615, 2))
		{
			MISC::CLEAR_BIT(&iLocal_615, 2);
		}
	}
	PAD::ENABLE_CONTROL_ACTION(2, 203, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 203))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_608, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(203), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	if (!MISC::IS_BIT_SET(iLocal_614, 13))
	{
		PAD::ENABLE_CONTROL_ACTION(2, 201, 1);
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_608, "SET_INPUT_RELEASE_EVENT", SYSTEM::TO_FLOAT(201), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if (PAD::_IS_USING_KEYBOARD_2(2))
	{
		func_572();
		if (!MISC::IS_BIT_SET(iLocal_614, 13))
		{
			if (PAD::IS_CONTROL_JUST_RELEASED(2, 237))
			{
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_608, "SET_INPUT_RELEASE_EVENT", SYSTEM::TO_FLOAT(237), -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (!MISC::IS_BIT_SET(iLocal_614, 13))
		{
			if (PAD::IS_CONTROL_JUST_RELEASED(2, 238))
			{
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_608, "SET_INPUT_RELEASE_EVENT", SYSTEM::TO_FLOAT(238), -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (iLocal_791 == 6)
		{
			func_571(0, 1);
		}
		else
		{
			PAD::ENABLE_CONTROL_ACTION(2, 241, 1);
			if (PAD::IS_CONTROL_PRESSED(2, 241))
			{
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_608, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(241), -1082130432, -1082130432, -1082130432, -1082130432);
			}
			PAD::ENABLE_CONTROL_ACTION(2, 242, 1);
			if (PAD::IS_CONTROL_PRESSED(2, 242))
			{
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_608, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(242), -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
	}
	else
	{
		func_571(1, 1);
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(2, 204) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 204)) && !PAD::_IS_USING_KEYBOARD(2))
	{
		func_636(0);
	}
}

void func_571(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		PAD::ENABLE_CONTROL_ACTION(2, 195, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 196, 1);
		iVar0 = PAD::GET_CONTROL_VALUE(2, 195);
		iVar1 = PAD::GET_CONTROL_VALUE(2, 196);
		if (((iVar0 != 127 || iLocal_797 != 127) || iVar1 != 127) || iLocal_798 != 127)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_608, "SET_ANALOG_STICK_INPUT");
			iLocal_797 = iVar0;
			iLocal_798 = iVar1;
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_797);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_798);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	if (bParam1)
	{
		PAD::ENABLE_CONTROL_ACTION(2, 197, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 198, 1);
		iVar2 = PAD::GET_CONTROL_VALUE(2, 197);
		iVar3 = PAD::GET_CONTROL_VALUE(2, 198);
		if (((iVar2 != 127 || iLocal_799 != 127) || iVar3 != 127) || iLocal_800 != 127)
		{
			bVar4 = (PAD::IS_CONTROL_PRESSED(2, 242) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 242));
			if (!bVar4)
			{
				bVar4 = (PAD::IS_CONTROL_PRESSED(2, 241) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 241));
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_608, "SET_ANALOG_STICK_INPUT");
			iLocal_799 = iVar2;
			iLocal_800 = iVar3;
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_799);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_800);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar4);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_572()
{
	fLocal_807 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	fLocal_808 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	if (fLocal_807 != fLocal_809 || fLocal_808 != fLocal_810)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_608, "SET_MOUSE_INPUT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_807);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_808);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		fLocal_809 = fLocal_807;
		fLocal_810 = fLocal_808;
	}
	PAD::ENABLE_CONTROL_ACTION(2, 237, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_608, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(237), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	PAD::ENABLE_CONTROL_ACTION(2, 238, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 238))
	{
		if ((iLocal_791 != 4 && iLocal_791 != 6) || !MISC::IS_BIT_SET(iLocal_614, 5))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_608, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(202), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (iLocal_791 == 3 || iLocal_791 == 0)
		{
			func_636(0);
		}
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2, 238))
	{
		if (MISC::IS_BIT_SET(iLocal_615, 3))
		{
			MISC::CLEAR_BIT(&iLocal_615, 3);
		}
		else if (MISC::IS_BIT_SET(iLocal_614, 5))
		{
			func_562(1, 1);
		}
		else if (func_573())
		{
			MISC::CLEAR_BIT(&iLocal_614, 16);
		}
	}
}

bool func_573()
{
	return MISC::IS_BIT_SET(iLocal_614, 16);
}

void func_574()
{
	PAD::ENABLE_CONTROL_ACTION(2, 188, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_608, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(188), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	PAD::ENABLE_CONTROL_ACTION(2, 187, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 187))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_608, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(187), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	PAD::ENABLE_CONTROL_ACTION(2, 189, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_608, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(189), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	PAD::ENABLE_CONTROL_ACTION(2, 190, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_608, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(190), -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_575()
{
	if (iLocal_613 == 0 || iLocal_613 == 1)
	{
		PAD::ENABLE_CONTROL_ACTION(2, 201, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 237, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_608, "GET_CURRENT_SELECTION");
			uLocal_609 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			iLocal_613 = 0;
		}
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Mouse_Click", "GTAO_Exec_SecuroServ_Warehouse_PC_Sounds", 1);
	}
	if (iLocal_613 == 0 && GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_609))
	{
		iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_609);
		if (iVar0 > 0 && iVar0 < 5)
		{
			iLocal_795 = iVar0;
			iLocal_794 = func_576(iVar0);
			iLocal_613 = 3011;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Sell", "GTAO_Exec_SecuroServ_Warehouse_PC_Sounds", 1);
		}
		else if (iVar0 == 5)
		{
			if (MISC::IS_BIT_SET(iLocal_614, 8))
			{
				iLocal_613 = 1;
				MISC::CLEAR_BIT(&iLocal_614, 8);
				func_562(0, 0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Error", "GTAO_Exec_SecuroServ_Warehouse_PC_Sounds", 1);
			}
			else
			{
				iLocal_613 = 3012;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Confirm", "GTAO_Exec_SecuroServ_Warehouse_PC_Sounds", 1);
			}
		}
		else if (iVar0 == 6)
		{
			func_562(0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Cancel", "GTAO_Exec_SecuroServ_Warehouse_PC_Sounds", 1);
			iLocal_794 = 0;
			iLocal_795 = 0;
		}
	}
	if (iLocal_613 == 3011)
	{
		func_299(iLocal_790);
	}
	if (iLocal_613 == 3012)
	{
		if (!func_333(iLocal_790))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
			iLocal_794 = 0;
			iLocal_795 = 0;
			iLocal_789 = func_61(PLAYER::PLAYER_ID(), 168, 0);
			sVar1 = func_329(0, iLocal_790);
			func_560("MP_WH_SELL", sVar1, "WHOUSE_CONF", "", 0, 0, -1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Error", "GTAO_Exec_SecuroServ_Warehouse_PC_Sounds", 1);
			MISC::SET_BIT(&iLocal_614, 8);
		}
		else
		{
			func_331(168, iLocal_790, -1, -1, 0);
			MISC::CLEAR_BIT(&(Global_1676377.f_4), 4);
			Global_1676227 = iLocal_794;
			Global_1676229 = iLocal_795;
			Global_1676237 = 1;
			if (func_19(PLAYER::PLAYER_ID()))
			{
				Global_1694834.f_4 = 168;
			}
			func_636(0);
		}
		iLocal_613 = 1;
	}
}

int func_576(int iParam0)
{
	iVar0 = func_330(iLocal_790);
	iVar1 = func_359(iLocal_790);
	iVar2 = (iVar0 - iVar1);
	if (iParam0 == 1)
	{
		return SYSTEM::ROUND((IntToFloat(iVar2) * (SYSTEM::TO_FLOAT(Global_262145.f_16193) / 100f)));
	}
	else if (iParam0 == 2)
	{
		return SYSTEM::ROUND((IntToFloat(iVar2) * (SYSTEM::TO_FLOAT(Global_262145.f_16194) / 100f)));
	}
	else if (iParam0 == 3)
	{
		return SYSTEM::ROUND((IntToFloat(iVar2) * (SYSTEM::TO_FLOAT(Global_262145.f_16195) / 100f)));
	}
	else if (iParam0 == 4)
	{
		return iVar1;
	}
	return 0;
}

void func_577()
{
	PAD::ENABLE_CONTROL_ACTION(2, 201, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_608, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(201), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	PAD::ENABLE_CONTROL_ACTION(2, 202, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_608, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(202), -1082130432, -1082130432, -1082130432, -1082130432);
		func_636(0);
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(2, 204) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 204)) && !PAD::_IS_USING_KEYBOARD(2))
	{
		func_636(0);
	}
	func_574();
	if (PAD::_IS_USING_KEYBOARD_2(2))
	{
		func_572();
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 238))
		{
			func_636(0);
		}
	}
	else
	{
		func_571(1, 1);
	}
}

void func_578()
{
	if (!MISC::IS_BIT_SET(iLocal_614, 14) && !MISC::IS_BIT_SET(iLocal_614, 31))
	{
		if (func_582(7654, -1, -1) < 3 && !MISC::IS_BIT_SET(Global_1676230, 12))
		{
			sVar0 = "WH_TUT_1";
			iLocal_793 = 5500;
			MISC::SET_BIT(&Global_1676230, 12);
			iVar1 = func_582(7654, -1, -1);
			iVar1++;
			func_581(7654, iVar1, -1, 1);
		}
		else if (func_582(7655, -1, -1) < 3 && !MISC::IS_BIT_SET(Global_1676230, 13))
		{
			sVar0 = "WH_TUT_2";
			iLocal_793 = 5500;
			MISC::SET_BIT(&Global_1676230, 13);
			iVar2 = func_582(7655, -1, -1);
			iVar2++;
			func_581(7655, iVar2, -1, 1);
		}
		else if (func_582(7656, -1, -1) < 3 && !MISC::IS_BIT_SET(Global_1676230, 14))
		{
			sVar0 = "WH_TUT_3";
			iLocal_793 = 5500;
			MISC::SET_BIT(&Global_1676230, 14);
			iVar3 = func_582(7656, -1, -1);
			iVar3++;
			func_581(7656, iVar3, -1, 1);
		}
		else if ((func_582(7657, -1, -1) < 3 && !MISC::IS_BIT_SET(Global_1676230, 15)) && func_580(iLocal_790))
		{
			sVar0 = "WH_TUT_SPEC";
			iLocal_793 = 5500;
			MISC::SET_BIT(&Global_1676230, 15);
			iVar4 = func_582(7657, -1, -1);
			iVar4++;
			func_581(7657, iVar4, -1, 1);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && !MISC::IS_BIT_SET(iLocal_614, 14))
	{
		func_579(sVar0, iLocal_793);
		MISC::SET_BIT(&iLocal_614, 14);
	}
	else if (MISC::IS_BIT_SET(iLocal_614, 14))
	{
		if (!func_634(&uLocal_986))
		{
			func_633(&uLocal_986, 0, 0);
		}
		else if (func_632(&uLocal_986, iLocal_793, 0))
		{
			MISC::CLEAR_BIT(&iLocal_614, 14);
			iLocal_793 = 0;
			func_631(&uLocal_986);
		}
	}
}

void func_579(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_580(int iParam0)
{
	if (func_307(iParam0))
	{
		return func_359(iParam0) > 0;
	}
	return 0;
}

var func_581(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_2();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_582(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_2();
	}
	iVar0 = 0;
	iVar1 = func_584(iParam0, iParam1);
	uVar2 = func_583(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_583(int iParam0)
{
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 28483)) * 8) * 8;
	}
	return iVar0;
}

int func_584(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_2();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1393), 0, 1, iParam1);
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

bool func_585(int iParam0)
{
	return func_330(iParam0) == 0;
}

void func_586()
{
	if (!MISC::IS_BIT_SET(iLocal_614, 15) && !MISC::IS_BIT_SET(iLocal_614, 31))
	{
		if (iLocal_791 == 2 && func_592(0))
		{
			sVar0 = "SECURO_MAP_TUT";
			iLocal_793 = 8000;
			MISC::SET_BIT(&Global_1676230, 0);
			iVar1 = func_582(7658, -1, -1);
			iVar1++;
			func_581(7658, iVar1, -1, 1);
		}
		else if ((func_592(1) && func_573()) && !func_590())
		{
			sVar0 = "SECURO_WH_TUT";
			iLocal_793 = 6000;
			MISC::SET_BIT(&Global_1676230, 1);
			iVar2 = func_582(7660, -1, -1);
			iVar2++;
			func_581(7660, iVar2, -1, 1);
		}
		else if (((iLocal_791 == 2 && func_460()) && !MISC::IS_BIT_SET(iLocal_614, 19)) && func_592(2))
		{
			sVar0 = "SECURO_PURCH_TUT";
			iLocal_793 = 6000;
			MISC::SET_BIT(&Global_1676230, 2);
			iVar3 = func_582(7659, -1, -1);
			iVar3++;
			func_581(7659, iVar3, -1, 1);
		}
		else if ((func_592(3) && func_590()) && func_573())
		{
			sVar0 = "SECURO_BUY_TUT";
			iLocal_793 = 9000;
			MISC::SET_BIT(&Global_1676230, 3);
			iVar4 = func_582(7661, -1, -1);
			iVar4++;
			func_581(7661, iVar4, -1, 1);
		}
		else if (iLocal_791 == 1 && func_592(4))
		{
			sVar0 = "SECURO_SUM_TUT";
			iLocal_793 = 6000;
			MISC::SET_BIT(&Global_1676230, 4);
			iVar5 = func_582(7662, -1, -1);
			iVar5++;
			func_581(7662, iVar5, -1, 1);
		}
		else if (func_592(5))
		{
			sVar0 = "SECURO_SPEC_TUT";
			iLocal_793 = 6000;
			MISC::SET_BIT(&Global_1676230, 5);
			iVar6 = func_582(7663, -1, -1);
			iVar6++;
			func_581(7663, iVar6, -1, 1);
		}
		else if (func_592(6))
		{
			sVar0 = "IE_SEC_TUT1";
			iLocal_793 = 6000;
			MISC::SET_BIT(&Global_1676230, 6);
			func_587(&iLocal_992, &iLocal_993, 0);
		}
		else if (func_592(7))
		{
			sVar0 = "IE_SEC_TUT2";
			iLocal_793 = 6000;
			MISC::SET_BIT(&Global_1676230, 7);
			func_587(&iLocal_992, &iLocal_993, 3);
		}
		else if (func_592(8))
		{
			sVar0 = "IE_SEC_TUT3";
			iLocal_793 = 6000;
			MISC::SET_BIT(&Global_1676230, 8);
			func_587(&iLocal_992, &iLocal_993, 6);
		}
		else if (func_592(9))
		{
			sVar0 = "IE_SEC_TUT4";
			iLocal_793 = 6000;
			MISC::SET_BIT(&Global_1676230, 9);
			func_587(&iLocal_992, &iLocal_993, 9);
		}
		else if (func_592(10))
		{
			sVar0 = "IE_SEC_TUT5";
			iLocal_793 = 6000;
			MISC::SET_BIT(&Global_1676230, 10);
			func_587(&iLocal_992, &iLocal_993, 12);
		}
		else if (func_592(11))
		{
			sVar0 = "IE_SEC_TUT6";
			iLocal_793 = 9000;
			MISC::SET_BIT(&Global_1676230, 11);
			func_587(&iLocal_992, &iLocal_993, 15);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && !MISC::IS_BIT_SET(iLocal_614, 15))
	{
		func_579(sVar0, iLocal_793);
		MISC::SET_BIT(&iLocal_614, 15);
	}
	else if (MISC::IS_BIT_SET(iLocal_614, 15))
	{
		if (!func_634(&uLocal_986))
		{
			func_633(&uLocal_986, 0, 0);
		}
		else if (func_632(&uLocal_986, iLocal_793, 0))
		{
			MISC::CLEAR_BIT(&iLocal_614, 15);
			iLocal_793 = 0;
			func_631(&uLocal_986);
			if (func_655())
			{
				MISC::SET_BIT(&iLocal_614, 25);
			}
		}
	}
}

void func_587(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_589(*iParam0, *iParam1, iParam2);
	if (iVar0 < 3)
	{
		func_588(iParam0, iParam1, iParam2, iVar0 + 1);
	}
}

void func_588(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = uParam2;
	if (iParam3 > 3)
	{
		iParam3 = 3;
	}
	iVar1 = 0;
	while (iVar1 < iParam3)
	{
		bVar2 = false;
		iVar3 = (iVar0 + iVar1);
		if (iVar3 > 31)
		{
			bVar2 = true;
			iVar3 = (iVar3 - 32);
		}
		if (!bVar2)
		{
			MISC::SET_BIT(uParam0, iVar3);
		}
		else
		{
			MISC::SET_BIT(uParam0, iVar3);
		}
		iVar1++;
	}
	if (*uParam0 != 0)
	{
		func_15(5367, *uParam0, -1, 1, 0);
	}
	if (*uParam1 != 0)
	{
		func_15(5368, *uParam1, -1, 1, 0);
	}
}

int func_589(int iParam0, int iParam1, var uParam2)
{
	bVar0 = false;
	iVar3 = uParam2;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar4 = (iVar3 + iVar1);
		if (iVar4 > 31)
		{
			bVar0 = true;
			iVar4 = (iVar4 - 32);
		}
		if (!bVar0)
		{
			if (MISC::IS_BIT_SET(iParam0, iVar4))
			{
				iVar2++;
			}
		}
		else if (MISC::IS_BIT_SET(iParam1, iVar4))
		{
			iVar2++;
		}
		iVar1++;
	}
	return iVar2;
}

int func_590()
{
	if ((func_591() > 0 && func_591() < iLocal_990) && func_306(func_591()))
	{
		return 1;
	}
	return 0;
}

int func_591()
{
	return iLocal_616;
}

int func_592(int iParam0)
{
	iVar0 = iParam0;
	switch (iParam0)
	{
		case 0:
			if (func_582(7658, -1, -1) < 3 && !MISC::IS_BIT_SET(Global_1676230, iVar0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_582(7660, -1, -1) < 3 && !MISC::IS_BIT_SET(Global_1676230, iVar0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_582(7659, -1, -1) < 3 && !MISC::IS_BIT_SET(Global_1676230, iVar0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_582(7661, -1, -1) < 3 && !MISC::IS_BIT_SET(Global_1676230, iVar0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_582(7662, -1, -1) < 3 && !MISC::IS_BIT_SET(Global_1676230, iVar0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_582(7663, -1, -1) < 3 && !MISC::IS_BIT_SET(Global_1676230, iVar0)) && func_594())
			{
				return 1;
			}
			break;
		
		case 6:
			if (((!func_593(iLocal_992, iLocal_993, 0) && !MISC::IS_BIT_SET(Global_1676230, iVar0)) && MISC::IS_BIT_SET(iLocal_615, 2)) && iLocal_791 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (((((!func_593(iLocal_992, iLocal_993, 3) && !MISC::IS_BIT_SET(Global_1676230, iVar0)) && MISC::IS_BIT_SET(Global_1676230, 8)) && iLocal_791 == 5) && !func_573()) && func_295(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((((!func_593(iLocal_992, iLocal_993, 6) && !MISC::IS_BIT_SET(Global_1676230, iVar0)) && iLocal_791 == 5) && func_573()) && func_295(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
		
		case 9:
			if ((!func_593(iLocal_992, iLocal_993, 9) && !MISC::IS_BIT_SET(Global_1676230, iVar0)) && iLocal_791 == 4)
			{
				return 1;
			}
			break;
		
		case 10:
			if ((!func_593(iLocal_992, iLocal_993, 12) && !MISC::IS_BIT_SET(Global_1676230, iVar0)) && !func_296(12))
			{
				if (iLocal_791 == 4 || iLocal_791 == 5)
				{
					return 1;
				}
			}
			break;
		
		case 11:
			if ((!func_593(iLocal_992, iLocal_993, 15) && !MISC::IS_BIT_SET(Global_1676230, iVar0)) && iLocal_791 == 6)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_593(int iParam0, int iParam1, int iParam2)
{
	return func_589(iParam0, iParam1, iParam2) == 3;
}

int func_594()
{
	if (iLocal_791 != 2)
	{
		return 0;
	}
	iVar0 = func_591();
	if ((((!MISC::IS_BIT_SET(iLocal_614, 25) && iVar0 > 0) && func_573()) && func_306(iVar0)) && Global_1676240)
	{
		return 1;
	}
	return 0;
}

void func_595()
{
	if (iLocal_787 != -1)
	{
		func_596(iLocal_787);
	}
}

void func_596(int iParam0)
{
	cVar0 = "EXCPAAU";
	if (iParam0 > 5)
	{
		cVar0 = "IMPAAUD";
	}
	if (func_597(&uLocal_619, cVar0, func_617(iParam0), 8, 0, 0, 0))
	{
		iLocal_787 = -1;
	}
}

bool func_597(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_616(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_598(sParam2, iParam3, 0);
}

int func_598(char* sParam0, int iParam1, bool bParam2)
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
					func_615();
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
		if (func_402(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_614();
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
				func_606();
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
				if (func_605())
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
			if (func_604())
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
			func_603();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_602();
		func_599();
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
		func_615();
	}
	return 0;
}

void func_599()
{
	if (!func_600())
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

int func_600()
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
	if (func_601(PLAYER::PLAYER_ID()))
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

bool func_601(int iParam0)
{
	return func_52(iParam0, 20);
}

void func_602()
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

void func_603()
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

int func_604()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_605()
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

void func_606()
{
	if (func_613(14))
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
		Global_19486 = func_607();
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

var func_607()
{
	func_608();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_608()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_611(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_610(PLAYER::PLAYER_PED_ID());
			if (func_609(iVar0) && (!func_613(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_609(Global_111638.f_2358.f_539.f_4321))
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

bool func_609(int iParam0)
{
	return iParam0 < 3;
}

int func_610(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_611(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_611(int iParam0)
{
	if (func_609(iParam0))
	{
		return func_612(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_612(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_613(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_614()
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

void func_615()
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

void func_616(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

char* func_617(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_615, 1))
	{
		switch (iParam0)
		{
			case 0:
				return "EXCPA_LOGINM";
			
			case 1:
				return "EXCPA_MAPM";
			
			case 2:
				return "EXCPA_WAREM";
			
			case 3:
				return "EXCPA_BUYINM";
			
			case 4:
				return "EXCPA_STOCKM";
			
			case 5:
				return "EXCPA_SUMMM";
			
			case 6:
				return "IMPA_TUT1M";
			
			case 7:
				return "IMPA_TUT1BM";
			
			case 8:
				return "IMPA_TUT2M";
			
			case 9:
				return "IMPA_TUT3M";
			
			case 10:
				return "IMPA_TUT4M";
			
			case 11:
				return "IMPA_TUT5M";
			
			case 12:
				return "IMPA_TUT6M";
			
			case 13:
				return "IMPA_TUT7M";
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return "EXCPA_LOGINF";
			
			case 1:
				return "EXCPA_MAPF";
			
			case 2:
				return "EXCPA_WAREF";
			
			case 3:
				return "EXCPA_BUYINF";
			
			case 4:
				return "EXCPA_STOCKF";
			
			case 5:
				return "EXCPA_SUMMF";
			
			case 6:
				return "IMPA_TUT1F";
			
			case 7:
				return "IMPA_TUT1BF";
			
			case 8:
				return "IMPA_TUT2F";
			
			case 9:
				return "IMPA_TUT3F";
			
			case 10:
				return "IMPA_TUT4F";
			
			case 11:
				return "IMPA_TUT5F";
			
			case 12:
				return "IMPA_TUT6F";
			
			case 13:
				return "IMPA_TUT7F";
			}
		
		default:
	}
	return "EXCPA_LOGINM";
}

void func_618()
{
	if (!MISC::IS_BIT_SET(iLocal_614, 14) && !func_619())
	{
		if (MISC::IS_BIT_SET(iLocal_614, 22) && !func_309(7459, -1, -1))
		{
			bVar0 = true;
			iLocal_793 = 6750;
			iLocal_787 = 0;
			func_1(7459, 1, -1, 1);
		}
		else if (iLocal_791 == 2 && !func_309(7460, -1, -1))
		{
			bVar0 = true;
			iLocal_793 = 8000;
			iLocal_787 = 1;
			func_1(7460, 1, -1, 1);
			func_1(3808, 1, -1, 1);
		}
		else if (MISC::IS_BIT_SET(iLocal_614, 23) && !func_309(7462, -1, -1))
		{
			bVar0 = true;
			iLocal_793 = 6000;
			iLocal_787 = 2;
			func_1(7462, 1, -1, 1);
		}
		else if (!func_309(7463, -1, -1) && (func_590() || (((func_573() && iLocal_786 == func_374(0)) && iLocal_786 != 0) && iLocal_616 == -1)))
		{
			iLocal_786 = 0;
			bVar0 = true;
			iLocal_793 = 9000;
			iLocal_787 = 3;
			func_1(7463, 1, -1, 1);
		}
		else if (iLocal_791 == 1 && !func_309(7464, -1, -1))
		{
			bVar0 = true;
			iLocal_793 = 6000;
			iLocal_787 = 5;
			func_1(7464, 1, -1, 1);
		}
		else if ((iLocal_791 == 3 && !func_309(3806, -1, -1)) && !func_309(3807, -1, -1))
		{
			if (func_309(7460, -1, -1))
			{
				bVar0 = true;
				iLocal_793 = 10000;
				iLocal_787 = 6;
			}
			else
			{
				bVar0 = true;
				iLocal_793 = 10000;
				iLocal_787 = 7;
			}
			func_1(3806, 1, -1, 1);
			func_1(3807, 1, -1, 1);
		}
		else if (iLocal_791 == 6 && !func_309(3813, -1, -1))
		{
			bVar0 = true;
			iLocal_793 = 4000;
			iLocal_787 = 9;
			func_1(3813, 1, -1, 1);
		}
		else if (iLocal_791 == 5 && !func_309(3809, -1, -1))
		{
			bVar0 = true;
			iLocal_793 = 4000;
			iLocal_787 = 10;
			func_1(3809, 1, -1, 1);
		}
		else if ((iLocal_791 == 5 && MISC::IS_BIT_SET(iLocal_614, 6)) && !func_309(3811, -1, -1))
		{
			bVar0 = true;
			iLocal_793 = 4000;
			iLocal_787 = 11;
			func_1(3811, 1, -1, 1);
		}
		else if ((iLocal_791 == 4 && !MISC::IS_BIT_SET(iLocal_614, 6)) && !func_309(3810, -1, -1))
		{
			bVar0 = true;
			iLocal_793 = 4000;
			iLocal_787 = 12;
			func_1(3810, 1, -1, 1);
		}
		else if ((iLocal_791 == 4 && !MISC::IS_BIT_SET(iLocal_614, 6)) && !func_309(3812, -1, -1))
		{
			bVar0 = true;
			iLocal_793 = 4000;
			iLocal_787 = 13;
			func_1(3812, 1, -1, 1);
		}
		else if ((func_309(7460, -1, -1) && func_309(7464, -1, -1)) && !func_309(3808, -1, -1))
		{
			if (iLocal_791 == 1 || iLocal_791 == 2)
			{
				bVar0 = true;
				iLocal_793 = 4000;
				iLocal_787 = 8;
				func_1(3808, 1, -1, 1);
			}
		}
	}
	if (bVar0)
	{
		MISC::SET_BIT(&iLocal_614, 14);
	}
	else if (MISC::IS_BIT_SET(iLocal_614, 14))
	{
		if (!func_634(&uLocal_986))
		{
			func_633(&uLocal_986, 0, 0);
		}
		else if (func_632(&uLocal_986, iLocal_793, 0))
		{
			MISC::CLEAR_BIT(&iLocal_614, 14);
			iLocal_793 = 0;
			func_631(&uLocal_986);
			if (func_656())
			{
				MISC::SET_BIT(&iLocal_614, 24);
			}
		}
	}
}

int func_619()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_620()
{
	if (MISC::IS_BIT_SET(iLocal_614, 31))
	{
		if (!func_634(&uLocal_986))
		{
			func_633(&uLocal_986, 0, 0);
		}
		else if (func_632(&uLocal_986, 5000, 0))
		{
			MISC::CLEAR_BIT(&iLocal_614, 31);
			func_631(&uLocal_986);
		}
	}
	if (MISC::IS_BIT_SET(iLocal_614, 13))
	{
		if ((!MISC::IS_BIT_SET(iLocal_614, 14) && !MISC::IS_BIT_SET(iLocal_614, 30)) && MISC::IS_BIT_SET(iLocal_614, 28))
		{
			func_579("SECURO_SELL_CD", 5000);
			MISC::SET_BIT(&iLocal_614, 31);
			MISC::SET_BIT(&iLocal_614, 30);
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_614, 15) && !MISC::IS_BIT_SET(iLocal_614, 31))
	{
		func_621();
		if (func_573())
		{
			if ((!MISC::IS_BIT_SET(iLocal_614, 29) && MISC::IS_BIT_SET(iLocal_614, 27)) && func_590())
			{
				if (MISC::IS_BIT_SET(iLocal_784, func_591()))
				{
					func_579("SECURO_BUY_CD", 5000);
					MISC::SET_BIT(&iLocal_614, 31);
					MISC::SET_BIT(&iLocal_614, 29);
				}
			}
			if (((!MISC::IS_BIT_SET(iLocal_614, 30) && !MISC::IS_BIT_SET(iLocal_614, 31)) && MISC::IS_BIT_SET(iLocal_614, 28)) && func_590())
			{
				func_579("SECURO_SELL_CD", 5000);
				MISC::SET_BIT(&iLocal_614, 31);
				MISC::SET_BIT(&iLocal_614, 30);
			}
		}
	}
}

void func_621()
{
	if (iLocal_785 == 180)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = func_374(iVar0);
			if (iVar1 != 0 && MISC::IS_BIT_SET(iLocal_784, iVar1))
			{
				iVar2 = func_364(iVar1);
				if (iVar2 <= 0)
				{
					if (!func_324())
					{
						iVar2 = (Global_262145.f_15096 - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), Global_2514606.f_142)));
					}
				}
				if (iVar2 <= 0)
				{
					MISC::CLEAR_BIT(&iLocal_784, iVar1);
				}
			}
			iVar0++;
		}
		iLocal_785 = -1;
	}
	iLocal_785++;
}

void func_622()
{
	iVar0 = func_260(12) + 1;
	iVar1 = -1;
	if (func_296(12))
	{
		if (iLocal_796 != 0)
		{
			iVar1 = 0;
			iLocal_796 = 0;
		}
	}
	else if (iLocal_796 != iVar0)
	{
		iVar1 = iVar0;
		iLocal_796 = iVar0;
	}
	if (iVar1 != -1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_608, "UPDATE_COOLDOWN");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_623()
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	func_627();
	if (MISC::IS_BIT_SET(iLocal_614, 21))
	{
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
	}
	HUD::THEFEED_HIDE_THIS_FRAME();
	PAD::ENABLE_CONTROL_ACTION(2, 199, 1);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	func_420(0f, 0f, 1f, 1f, 0, 0, 0, 255);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_608, 255, 255, 255, 255, 0);
	func_625();
	func_386(0);
	func_624(1);
	Global_1694834.f_5 = MISC::GET_FRAME_COUNT();
}

void func_624(bool bParam0)
{
	if (bParam0)
	{
		func_457();
	}
	func_495(4, -1);
	func_495(6, -1);
	func_495(7, -1);
	func_495(3, -1);
	func_495(1, -1);
	func_495(2, -1);
	func_495(11, -1);
	func_495(13, -1);
	func_495(14, -1);
	func_495(16, -1);
}

void func_625()
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_626();
}

void func_626()
{
	Global_22211.f_134 = 1;
}

void func_627()
{
	func_628(1);
	if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
	}
}

void func_628(bool bParam0)
{
	if (bParam0)
	{
		if (func_465())
		{
			Global_2450632.f_37 = 1;
		}
	}
	else
	{
		Global_2450632.f_37 = 0;
	}
}

void func_629()
{
	PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
	PAD::DISABLE_CONTROL_ACTION(2, 189, 1);
	PAD::DISABLE_CONTROL_ACTION(2, 190, 1);
	PAD::DISABLE_CONTROL_ACTION(2, 187, 1);
	PAD::DISABLE_CONTROL_ACTION(2, 188, 1);
	iVar2 = 18;
	iVar3 = 0;
	sVar0 = "BRSCRWTEX";
	if (!func_630())
	{
		switch (Global_4268420)
		{
			case 0:
				sVar1 = "BRDISTEX";
				break;
			
			case 1:
				sVar1 = "BRDISDLC";
				break;
		}
		iVar3 = "BRSHETEX";
	}
	else
	{
		switch (Global_4268420)
		{
			case 0:
				sVar1 = "BRDISTES";
				break;
			
			case 1:
				sVar1 = "BRDISDLC";
				break;
		}
		iVar3 = "BRSHETES";
	}
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, iVar2, iVar3, 0, -1, 0, 0, 1, 0);
	Global_1694834.f_5 = MISC::GET_FRAME_COUNT();
}

bool func_630()
{
	return Global_1312865;
}

void func_631(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_632(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_633(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_633(var uParam0, bool bParam1, bool bParam2)
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
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_634(var uParam0)
{
	return uParam0->f_1;
}

bool func_635()
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

void func_636(int iParam0)
{
	func_670(0);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_608);
	func_750(0);
	if (!MISC::IS_BIT_SET(iLocal_614, 13))
	{
		Global_73829 = 1;
		AUDIO::_0xA5F377B175A699C5(1000);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Logout", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
	}
	else
	{
		func_736(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	AUDIO::STOP_AUDIO_SCENE("GTAO_Computer_Screen_Active_Scene");
	func_641();
	HUD::THEFEED_RESUME();
	func_640(0);
	if (MISC::IS_PC_VERSION())
	{
		func_651(0, 1, 1, 1);
	}
	if (MISC::IS_BIT_SET(iLocal_614, 6) && !func_251())
	{
		func_637(1023032752, 10, 0);
	}
	MISC::CLEAR_BIT(&iLocal_614, 0);
	MISC::CLEAR_BIT(&iLocal_614, 1);
	if (iParam0 && func_755())
	{
		Global_1694834.f_3 = 1;
	}
	Global_1694834.f_5 = -1;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_637(int iParam0, int iParam1, int iParam2)
{
	if (func_639(iParam1, iParam2))
	{
		iVar0 = func_638();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_638()
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

int func_639(int iParam0, var uParam1)
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

void func_640(bool bParam0)
{
	if (bParam0)
	{
		Global_1573348 = 1;
	}
	else
	{
		Global_1573348 = 0;
	}
}

void func_641()
{
	if (!Global_1312575)
	{
		return;
	}
	func_642();
}

void func_642()
{
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
}

float func_643(var uParam0, struct<3> Param1, int iParam4)
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

bool func_644()
{
	return Global_73825;
}

void func_645()
{
	if (func_465() || func_649())
	{
		func_648();
		func_646();
	}
}

void func_646()
{
	if ((!func_459() && !func_647()) && Global_2451425)
	{
		Global_4456448.f_194990 = 0;
	}
}

bool func_647()
{
	return Global_2450632.f_591;
}

void func_648()
{
	Global_2450632.f_656 = 1;
}

var func_649()
{
	return Global_2450632.f_635;
}

void func_650()
{
	iLocal_992 = func_561(5367, -1, 0);
	iLocal_993 = func_561(5368, -1, 0);
}

int func_651(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && iParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_652(int iParam0)
{
	Global_1681929 = iParam0;
}

void func_653()
{
	func_640(1);
	if (func_561(3222, -1, 0) == 1)
	{
		MISC::SET_BIT(&iLocal_615, 1);
	}
	if (MISC::IS_BIT_SET(iLocal_615, 1))
	{
		func_654(&uLocal_619, 3, 0, "EXECPA_MALE", 0, 1);
	}
	else
	{
		func_654(&uLocal_619, 2, 0, "EXECPA_FEMALE", 0, 1);
	}
}

void func_654(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_655()
{
	if (((((((((((func_582(7658, -1, -1) >= 3 && func_582(7660, -1, -1) >= 3) && func_582(7659, -1, -1) >= 3) && func_582(7661, -1, -1) >= 3) && func_582(7662, -1, -1) >= 3) && func_582(7663, -1, -1) >= 3) && func_593(iLocal_992, iLocal_993, 0)) && func_593(iLocal_992, iLocal_993, 3)) && func_593(iLocal_992, iLocal_993, 6)) && func_593(iLocal_992, iLocal_993, 9)) && func_593(iLocal_992, iLocal_993, 12)) && func_593(iLocal_992, iLocal_993, 15))
	{
		return 1;
	}
	return 0;
}

int func_656()
{
	if ((((((((((((func_309(7459, -1, -1) && func_309(7460, -1, -1)) && func_309(7462, -1, -1)) && func_309(7463, -1, -1)) && func_309(7464, -1, -1)) && func_309(3806, -1, -1)) && func_309(3807, -1, -1)) && func_309(3808, -1, -1)) && func_309(3809, -1, -1)) && func_309(3810, -1, -1)) && func_309(3811, -1, -1)) && func_309(3812, -1, -1)) && func_309(3813, -1, -1))
	{
		return 1;
	}
	return 0;
}

void func_657(int iParam0, int iParam1)
{
	iVar0 = 0;
	sVar1 = PLAYER::GET_PLAYER_NAME(iParam0);
	if (MISC::ARE_STRINGS_EQUAL(sVar1, "**Invalid**"))
	{
		return;
	}
	iVar3 = 3;
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar53 = Global_1628237[iParam1].f_11.f_11[iVar2];
		if (iVar53 != func_9())
		{
			StringCopy(&(Var4[iVar2]), PLAYER::GET_PLAYER_NAME(iVar53), 64);
		}
		else
		{
			StringCopy(&(Var4[iVar2]), "", 64);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var4[iVar2])))
		{
			if (iVar2 != iVar3)
			{
				iVar54 = iVar2;
				while (iVar54 <= (iVar3 - 1))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var4[iVar54])))
					{
						Var4[iVar2] = { Var4[iVar54] };
						StringCopy(&(Var4[iVar54]), "", 64);
						iVar54 = (iVar3 - 1);
					}
					iVar54++;
				}
			}
		}
		iVar2++;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_608, "ADD_ACTIVE_USER");
	GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(sVar1);
	GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(func_658(iParam0));
	GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(&(Var4[0]));
	GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(&(Var4[1]));
	GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(&(Var4[2]));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = 0;
	while (iVar0 < func_5())
	{
		if (iLocal_814[iVar0] == -1)
		{
			iLocal_814[iVar0] = iParam1;
			StringCopy(&(Local_825[iVar0]), sVar1, 64);
			return;
		}
		iVar0++;
	}
}

char* func_658(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		iVar0 = func_47(iParam0);
		if (iVar0 != func_9())
		{
			uVar1 = func_666(&(Global_1628237[iVar0].f_11.f_104));
			if (MISC::IS_STRING_NULL_OR_EMPTY(uVar1))
			{
				return func_662(iVar0, 0);
			}
			else
			{
				return sVar1;
			}
		}
	}
	return func_659(iParam0);
}

char* func_659(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		uVar0 = func_666(&(Global_1628237[iParam0].f_11.f_104));
		return uVar0;
	}
	if (Global_1628237[iParam0].f_11.f_120 != Global_1628237[PLAYER::PLAYER_ID()].f_11.f_120)
	{
		uVar0 = func_662(iParam0, 0);
		return uVar0;
	}
	if (((func_52(iParam0, 28) || func_52(PLAYER::PLAYER_ID(), 28)) || func_661(iParam0)) && !func_660(iParam0))
	{
		return func_662(iParam0, 0);
	}
	iVar1 = func_47(iParam0);
	if (iVar1 != func_9())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_662(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_9())
	{
		uVar0 = func_666(&(Global_1628237[iVar1].f_11.f_104));
		if (MISC::IS_STRING_NULL_OR_EMPTY(uVar0))
		{
			return func_662(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_660(int iParam0)
{
	Var0 = { func_423(iParam0) };
	if (MISC::IS_DURANGO_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_661(int iParam0)
{
	if (iParam0 != func_9())
	{
		Var0 = { func_423(iParam0) };
		if (MISC::IS_ORBIS_VERSION() || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (MISC::IS_DURANGO_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_662(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_664(iParam0, 1))
		{
			return func_663();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_663()
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

bool func_664(int iParam0, bool bParam1)
{
	return func_665(iParam0, bParam1, 1);
}

int func_665(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == func_9())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_8(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0].f_11;
	if (iVar0 != func_9() && Global_1628237[iVar0].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

var func_666(var uParam0)
{
	return uParam0;
}

int func_667(int iParam0)
{
	if (iParam0 != func_9())
	{
		if (Global_1628237[iParam0].f_11 != func_9())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

void func_668()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_5())
	{
		iLocal_814[iVar0] = -1;
		iVar0++;
	}
}

void func_669()
{
	Global_1312575 = 1;
	StringCopy(&(Global_1312575.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312575.f_9 = MISC::GET_HASH_KEY(&(Global_1312575.f_1));
}

void func_670(int iParam0)
{
	if (Global_73825 != iParam0)
	{
		Global_73825 = iParam0;
	}
}

void func_671(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_608, "showScreen");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_791 = iParam0;
}

int func_672(int iParam0)
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

void func_673(bool bParam0)
{
	iLocal_618 = Global_1676086;
	if (func_462())
	{
		MISC::SET_BIT(&iLocal_615, 0);
	}
	if (MISC::IS_BIT_SET(iLocal_614, 13))
	{
		StringCopy(&cVar0, func_328(iLocal_790), 16);
		Var4 = { func_371(iLocal_790) };
		StringCopy(&cVar7, ZONE::GET_NAME_OF_ZONE(Var4), 16);
		StringCopy(&cVar11, "", 16);
		StringCopy(&cVar15, "", 64);
		StringCopy(&cVar31, "", 64);
		iVar47 = func_341(iLocal_790);
		iVar48 = func_367(iLocal_790);
		iVar49 = func_330(iLocal_790);
		iVar50 = -1;
		iVar51 = func_359(iLocal_790);
		iVar52 = func_302(iLocal_790);
		if (iVar52 <= 0)
		{
			if (!func_300())
			{
				iVar52 = (Global_262145.f_15097 - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), Global_2514606.f_140)));
			}
		}
		if (iVar52 > 0)
		{
			MISC::SET_BIT(&iLocal_614, 28);
		}
		if (func_580(iLocal_790))
		{
			StringCopy(&cVar11, func_734(iLocal_790), 16);
		}
		func_732(&iVar50, &cVar15, &cVar31, 0, iVar49);
		uVar53 = func_731();
		uVar54 = SYSTEM::FLOOR(func_729(((SYSTEM::TO_FLOAT(uVar53) / SYSTEM::TO_FLOAT(func_730())) * 100f), 0f, 100f));
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_608, "SET_PLAYER_DATA");
		GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
		GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(func_658(PLAYER::PLAYER_ID()));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uVar54));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar53);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_728());
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_608, "SET_BUYER_DATA");
		func_259(&cVar15);
		GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(&cVar31);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar50);
		func_732(&iVar50, &cVar15, &cVar31, 1, iVar49);
		func_259(&cVar15);
		GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(&cVar31);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar50);
		func_732(&iVar50, &cVar15, &cVar31, 2, iVar49);
		func_259(&cVar15);
		GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(&cVar31);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar50);
		func_732(&iVar50, &cVar15, &cVar31, 3, iVar49);
		func_259(&cVar15);
		GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(&cVar31);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar50);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_608, "SET_WAREHOUSE_DATA");
		func_259(&cVar0);
		func_259(&cVar7);
		GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(&cVar11);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar47);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar48);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar49);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar50);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar51);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar52);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		Var55 = { func_723(func_724(5, -1)) };
		iVar58 = func_722();
		iVar59 = func_731();
		uVar60 = SYSTEM::FLOOR(func_729(((SYSTEM::TO_FLOAT(iVar58) / SYSTEM::TO_FLOAT(func_721())) * 100f), 0f, 100f));
		uVar61 = SYSTEM::FLOOR(func_729(((SYSTEM::TO_FLOAT(iVar59) / SYSTEM::TO_FLOAT(func_730())) * 100f), 0f, 100f));
		iVar62 = func_720();
		iVar63 = func_719();
		iVar64 = func_718();
		uVar65 = SYSTEM::FLOOR(func_729(((SYSTEM::TO_FLOAT(iVar62) / SYSTEM::TO_FLOAT(func_17())) * 100f), 0f, 100f));
		uVar66 = SYSTEM::FLOOR(func_729(((SYSTEM::TO_FLOAT(func_719()) / SYSTEM::TO_FLOAT(func_717())) * 100f), 0f, 100f));
		iVar67 = func_716();
		bVar68 = iVar62 >= iVar67;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_608, "SET_PLAYER_DATA");
		GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(func_728()));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar58);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uVar60));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar59);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uVar61));
		GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(func_658(PLAYER::PLAYER_ID()));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar62);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uVar65));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar63);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uVar66));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar64);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar68);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Var55.x);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Var55.y);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		iVar69 = 1;
		while (iVar69 <= 22)
		{
			if (func_714(iVar69))
			{
				func_349(iVar69);
			}
			iVar69++;
		}
		uVar72 = Global_1590535[PLAYER::PLAYER_ID()].f_274.f_134.f_1;
		iVar70 = 1;
		while (iVar70 <= (11 - 1))
		{
			if (!func_755() || func_297(PLAYER::PLAYER_ID()) == iVar70)
			{
				func_258(iVar70, uVar72);
			}
			iVar70++;
		}
		iVar71 = 0;
		while (iVar71 < 8)
		{
			if (func_713(iVar71))
			{
				func_674(iVar71, iVar62, Global_73831);
			}
			iVar71++;
		}
	}
}

void func_674(int iParam0, int iParam1, bool bParam2)
{
	iVar1 = iParam0;
	iVar2 = func_712(iParam0);
	iVar3 = func_466(iParam0, 0);
	fVar4 = 0f;
	fVar5 = 0f;
	StringCopy(&cVar6, func_711(iParam0), 16);
	bVar10 = iParam1 >= iVar2;
	if (bVar10 && func_465())
	{
		bVar10 = false;
	}
	if (bParam2)
	{
		uVar11 = func_710(iParam0);
	}
	else
	{
		uVar11 = func_709(&(Global_73832[iParam0]));
	}
	if (bVar10)
	{
		iVar2 = 0;
	}
	if (iVar3 != -1)
	{
		if (!func_706())
		{
			while (!func_702(Global_794709.f_4[iVar3].f_54))
			{
				if (!func_634(&uVar12))
				{
					func_633(&uVar12, 0, 0);
				}
				else if (func_632(&uVar12, 750, 0))
				{
					iVar3 = -1;
				}
				else
				{
					SYSTEM::WAIT(0);
				}
			}
			if (iVar3 != -1)
			{
				func_675(&fVar5, &fVar4, 0, 9, 0, 0, MISC::GET_HASH_KEY(&(Global_794709.f_4[iVar3])));
			}
			if (fVar5 == 1f)
			{
				fVar5 = 0f;
			}
			if (fVar4 == 1f)
			{
				fVar4 = 0f;
			}
		}
		else
		{
			iVar3 = -1;
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_608, "ADD_SPECIAL_VEHICLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	func_259(&cVar6);
	if (iVar3 != -1)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FMMC_OFFLN_HD");
		iVar0 = 0;
		while (iVar0 < 8)
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_994[iVar0]));
			iVar0++;
		}
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		func_259("");
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(uVar11);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fVar4));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fVar5));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_675(float fParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, var uParam6)
{
	iVar0 = func_680(iParam2, iParam3, 0, iParam4, iParam5);
	iVar1 = func_679(uParam6);
	func_676(iVar0, iVar1, -1226544455, fParam0, 1);
	func_676(iVar0, iVar1, 1769793017, fParam1, 1);
}

void func_676(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	func_677(0, iParam2, uParam3, bParam4);
	if (iParam0 == 0)
	{
		return;
	}
	switch (iParam0)
	{
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
		case 26:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			func_677(1, iParam2, uParam3, bParam4);
			if (iParam0 == 1)
			{
				return;
			}
			switch (iParam0)
			{
				case 2:
				case 3:
				case 4:
				case 5:
					func_677(2, iParam2, uParam3, bParam4);
					if (iParam0 == 2)
					{
						return;
					}
					switch (iParam0)
					{
						case 3:
						case 4:
						case 5:
							func_677(iParam0, iParam2, uParam3, bParam4);
							return;
						
						case 1:
						case 2:
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
						case 26:
						case 20:
						case 21:
						case 22:
						case 23:
						case 24:
						case 25:
							return;
						
						default:
					}
					return;
					return;
				
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
				case 26:
				case 20:
				case 21:
				case 22:
				case 23:
				case 24:
				case 25:
					func_677(6, iParam2, uParam3, bParam4);
					if (iParam0 == 6)
					{
						return;
					}
					switch (iParam0)
					{
						case 7:
						case 16:
						case 17:
						case 18:
						case 19:
						case 26:
						case 24:
							func_677(iParam0, iParam2, uParam3, bParam4);
							if (iParam1 != 27)
							{
								func_677(iParam1, iParam2, uParam3, bParam4);
							}
							return;
						
						case 15:
						case 20:
						case 21:
						case 22:
						case 23:
						case 25:
							func_677(15, iParam2, uParam3, bParam4);
							if (iParam0 == 15)
							{
								if (iParam1 != 27)
								{
									func_677(iParam1, iParam2, uParam3, bParam4);
								}
								return;
							}
							switch (iParam0)
							{
								case 20:
								case 21:
								case 22:
								case 23:
								case 25:
									func_677(iParam0, iParam2, uParam3, bParam4);
									if (iParam1 != 27)
									{
										func_677(iParam1, iParam2, uParam3, bParam4);
									}
									return;
								
								default:
							}
							return;
							return;
						
						case 8:
						case 9:
						case 10:
						case 11:
						case 12:
						case 13:
						case 14:
							func_677(8, iParam2, uParam3, bParam4);
							if (iParam0 == 8)
							{
								if (iParam1 != 27)
								{
									func_677(iParam1, iParam2, uParam3, bParam4);
								}
								return;
							}
							switch (iParam0)
							{
								case 9:
								case 10:
								case 11:
								case 12:
								case 13:
								case 14:
									func_677(iParam0, iParam2, uParam3, bParam4);
									if (iParam1 != 27)
									{
										func_677(iParam1, iParam2, uParam3, bParam4);
									}
									return;
								
								default:
							}
							return;
							return;
						
						case 1:
						case 2:
						case 3:
						case 4:
						case 5:
						case 6:
							return;
						
						default:
					}
					return;
					return;
				
				case 1:
					return;
				
				default:
			}
			break;
	}
}

void func_677(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	uVar0 = func_678(iParam0);
	uVar1 = *uParam2;
	if (!NETWORK::NETWORK_ACCESS_TUNABLE_FLOAT_HASH(uVar0, uParam1, uParam2))
	{
		if (bParam3)
		{
		}
		return;
		*uParam2 = uVar1;
	}
	else
	{
		NETWORK::_NETWORK_REGISTER_TUNABLE_FLOAT_HASH(uVar0, uParam1, uParam2);
	}
	if (bParam3)
	{
	}
}

int func_678(int iParam0)
{
	if (iParam0 >= 28)
	{
		StringCopy(&cVar0, "CONTENT_MODIFIER_", 64);
		StringIntConCat(&cVar0, (iParam0 - 28), 64);
		return MISC::GET_HASH_KEY(&cVar0);
	}
	switch (iParam0)
	{
		case 0:
			return 190769267;
			break;
		
		case 1:
			return 953070135;
			break;
		
		case 2:
			return 1398379561;
			break;
		
		case 3:
			return -295628664;
			break;
		
		case 4:
			return -1157311665;
			break;
		
		case 5:
			return 988790432;
			break;
		
		case 6:
			return 1140746429;
			break;
		
		case 7:
			return 1882254284;
			break;
		
		case 8:
			return -1021097824;
			break;
		
		case 9:
			return 1031194139;
			break;
		
		case 10:
			return -946481156;
			break;
		
		case 11:
			return -364624190;
			break;
		
		case 12:
			return -199795525;
			break;
		
		case 13:
			return -866645446;
			break;
		
		case 14:
			return 1144300534;
			break;
		
		case 15:
			return 539878179;
			break;
		
		case 16:
			return 571975921;
			break;
		
		case 17:
			return 818280646;
			break;
		
		case 18:
			return -183978087;
			break;
		
		case 19:
			return -52527117;
			break;
		
		case 26:
			return -395434754;
			break;
		
		case 20:
			return -1110334219;
			break;
		
		case 21:
			return -1382306730;
			break;
		
		case 22:
			return 1453550531;
			break;
		
		case 23:
			break;
		
		case 24:
			return 1744317449;
			break;
		
		case 25:
			return -1679896800;
			break;
		
		case 27:
			return 2;
			break;
		
		case 29:
			StringCopy(&cVar0, "ILLEGAL TUNABLE CONTEXT", 64);
			break;
	}
	return 0;
}

int func_679(var uParam0)
{
	iVar0 = NETWORK::NETWORK_GET_CONTENT_MODIFIER_LIST_ID(uParam0);
	if (iVar0 >= 0)
	{
		return iVar0 + 28;
	}
	return 27;
}

int func_680(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 0:
			if (func_681(iParam3, iParam4))
			{
				return 25;
			}
			else if (iParam1 == 0)
			{
				return 15;
			}
			else if (iParam1 == 5)
			{
				return 19;
			}
			else if (iParam1 == 6)
			{
				return 18;
			}
			else if (iParam1 == 4)
			{
				return 22;
			}
			else if (iParam1 == 9)
			{
				return 23;
			}
			else if (iParam1 == 3)
			{
				return 21;
			}
			else if (iParam1 == 2)
			{
				return 20;
			}
			break;
		
		case 129:
			return 25;
			break;
		
		case 165:
			return 23;
			break;
		
		case 7:
			return 19;
			break;
		
		case 4:
			return 18;
			break;
		
		case 10:
			return 22;
			break;
		
		case 9:
			return 20;
			break;
		
		case 1:
			return 7;
		
		case 8:
			return 17;
		
		case 2:
			switch (iParam1)
			{
				case 4:
				case 5:
					return 12;
				
				case 2:
				case 3:
					return 13;
				
				case 8:
				case 9:
					return 17;
				
				case 6:
				case 7:
				case 18:
				case 19:
					return 14;
				
				case 12:
				case 13:
					if (bParam2)
					{
						return 11;
					}
					else
					{
						return 10;
					}
					break;
			}
			return 9;
		
		case 3:
			return 16;
		
		case 6:
			return 24;
	}
	return 0;
}

int func_681(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		return 1;
	}
	if ((((((((((((((((((((func_701(iParam0) || func_700(iParam0)) || func_699(iParam0)) || func_698(iParam0, 1)) || func_697(iParam0)) || func_696(iParam0)) || func_695(iParam0)) || func_694(iParam0)) || func_693(iParam0)) || func_692(iParam0)) || func_691(iParam0)) || func_690(iParam0)) || func_689(iParam0)) || func_688(iParam0)) || func_687(iParam0)) || func_686(iParam0)) || func_685(iParam0)) || func_684(iParam0)) || func_683(iParam0)) || func_682(iParam1)) || func_523(iParam1))
	{
		return 1;
	}
	return 0;
}

bool func_682(int iParam0)
{
	return iParam0 == 57;
}

int func_683(int iParam0)
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

int func_684(int iParam0)
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

int func_685(int iParam0)
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

int func_686(int iParam0)
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

int func_687(int iParam0)
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

int func_688(int iParam0)
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

int func_689(int iParam0)
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

int func_690(int iParam0)
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

int func_691(int iParam0)
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

int func_692(int iParam0)
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

int func_693(int iParam0)
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

int func_694(int iParam0)
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

int func_695(int iParam0)
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

int func_696(int iParam0)
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

int func_697(int iParam0)
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

int func_698(int iParam0, bool bParam1)
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

int func_699(int iParam0)
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

int func_700(int iParam0)
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

int func_701(int iParam0)
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

bool func_702(int iParam0)
{
	bVar0 = true;
	if (iParam0 != 0)
	{
		while (!func_705(iParam0, &Var1))
		{
			SYSTEM::WAIT(0);
		}
		if (!Var1.z)
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		iVar8 = 0;
		while (iVar8 < 8)
		{
			StringCopy(&(Local_994[iVar8]), "", 64);
			iVar8++;
		}
		uVar4 = func_703(iParam0, 500);
		iVar6 = HUD::GET_LENGTH_OF_LITERAL_STRING(uVar4);
		while (!bVar9)
		{
			if (iVar5 >= iVar6)
			{
				bVar9 = true;
			}
			else if (iVar7 >= 8)
			{
				bVar9 = true;
			}
			else
			{
				StringCopy(&(Local_994[iVar7]), HUD::_GET_TEXT_SUBSTRING_SAFE(uVar4, iVar5, iVar6, 63), 64);
				iVar5 = (iVar5 + HUD::GET_LENGTH_OF_LITERAL_STRING(&(Local_994[iVar7])));
				iVar7++;
			}
		}
	}
	return bVar0;
}

var func_703(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return func_704();
	}
	return NETWORK::UGC_GET_CACHED_DESCRIPTION(iParam0, iParam1);
}

char* func_704()
{
	return HUD::_GET_LABEL_TEXT("CREATOR_NO_T");
}

int func_705(int iParam0, var uParam1)
{
	if (*uParam1 != iParam0)
	{
		if (*uParam1 != 0)
		{
			NETWORK::_0x5A34CD9C3C5BEC44(*uParam1);
		}
		uParam1->f_2 = 0;
		*uParam1 = iParam0;
		uParam1->f_1 = 0;
	}
	if (iParam0 == 0)
	{
		return 1;
	}
	if (uParam1->f_2)
	{
		return 1;
	}
	else
	{
		if (iParam0 == -1)
		{
			uParam1->f_2 = 1;
			return 1;
		}
		if ((!NETWORK::_0x2D5DC831176D0114(iParam0) && uParam1->f_1 == 0) || uParam1->f_1 == -1)
		{
			uParam1->f_1 = NETWORK::UGC_REQUEST_CACHED_DESCRIPTION(iParam0);
		}
		else if (NETWORK::_0xEBFA8D50ADDC54C4(iParam0))
		{
			if (NETWORK::_0x162C23CA83ED0A62(iParam0))
			{
				uParam1->f_2 = 1;
				return 1;
			}
			else
			{
				uParam1->f_2 = 0;
				return 1;
			}
		}
	}
	return 0;
}

int func_706()
{
	if (!func_707())
	{
		return 1;
	}
	return 0;
}

int func_707()
{
	if (func_708())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_708()
{
	return Global_2461181;
}

var func_709(var uParam0)
{
	return uParam0;
}

char* func_710(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SVM_VEH_1";
		
		case 1:
			return "SVM_VEH_2";
		
		case 2:
			return "SVM_VEH_3";
		
		case 3:
			return "SVM_VEH_4";
		
		case 4:
			return "SVM_VEH_5";
		
		case 5:
			return "SVM_VEH_6";
		
		case 6:
			return "SVM_VEH_7";
		
		case 7:
			return "SVM_VEH_8";
		
		default:
	}
	return "";
}

char* func_711(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SVM_MIS_1";
		
		case 1:
			return "SVM_MIS_2";
		
		case 2:
			return "SVM_MIS_3";
		
		case 3:
			return "SVM_MIS_4";
		
		case 4:
			return "SVM_MIS_5";
		
		case 5:
			return "SVM_MIS_6";
		
		case 6:
			return "SVM_MIS_7";
		
		case 7:
			return "SVM_MIS_8";
		
		default:
	}
	return "";
}

int func_712(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_18948;
		
		case 1:
			return Global_262145.f_18949;
		
		case 2:
			return Global_262145.f_18950;
		
		case 3:
			return Global_262145.f_18951;
		
		case 4:
			return Global_262145.f_18952;
		
		case 5:
			return Global_262145.f_18953;
		
		case 6:
			return Global_262145.f_18954;
		
		case 7:
			return Global_262145.f_18955;
		
		default:
	}
	return -1;
}

int func_713(int iParam0)
{
	if (func_755())
	{
		return 0;
	}
	return 1;
}

int func_714(int iParam0)
{
	if (!func_348(iParam0) && !func_755())
	{
		if (func_373() < 5 || func_341(iParam0) == 2)
		{
			return 1;
		}
		else if (func_341(iParam0) == 1 && func_715() == 1)
		{
			return 1;
		}
		else if (func_715() == 0)
		{
			return 1;
		}
	}
	else if (func_306(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_715()
{
	iVar0 = 2;
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_106[iVar1] != 0)
		{
			iVar2 = func_341(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_106[iVar1]);
			if (iVar2 < iVar0)
			{
				iVar0 = iVar2;
			}
		}
		else
		{
			return iVar0;
		}
		iVar1++;
	}
	return iVar0;
}

int func_716()
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (iVar0 == -1 || func_712(iVar1) < iVar0)
		{
			iVar0 = func_712(iVar1);
		}
		iVar1++;
	}
	return iVar0;
}

int func_717()
{
	return func_561(5328, -1, 0);
}

int func_718()
{
	return func_561(5330, -1, 0);
}

int func_719()
{
	return func_561(5329, -1, 0);
}

int func_720()
{
	return func_561(3975, -1, 0);
}

var func_721()
{
	return Global_2586252[func_2()];
}

var func_722()
{
	return Global_2586258[func_2()];
}

Vector3 func_723(int iParam0)
{
	switch (iParam0)
	{
		case 87:
			return -1582.537f, -556.0219f, 33.954f;
		
		case 88:
			return -1373.87f, -502.7115f, 32.1574f;
		
		case 89:
			return -117.5296f, -605.7157f, 35.2857f;
		
		case 90:
			return -74.7579f, -818.4601f, 325.1753f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_724(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_2();
	}
	if (iParam0 == 7 && !Global_262145.f_16984)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_727(iParam0);
		if (iVar1 == 0 && func_561(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_726(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_725(PLAYER::PLAYER_ID()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1388066[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2586214[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 25)
		{
			return 0;
		}
		return Global_2586065[(iParam0 - 1)][iVar0];
	}
	return 0;
}

int func_725(int iParam0)
{
	if (iParam0 != func_9())
	{
		return Global_1590535[iParam0].f_274.f_322 != 0;
	}
	return 0;
}

bool func_726(int iParam0)
{
	if (!Global_262145.f_23663)
	{
		return 0;
	}
	return func_561(7207, iParam0, 0) != 0;
}

int func_727(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

var func_728()
{
	return Global_2586264[func_2()];
}

float func_729(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

var func_730()
{
	return Global_2586255[func_2()];
}

var func_731()
{
	return Global_2586261[func_2()];
}

void func_732(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	iVar1 = func_359(iLocal_790);
	iVar2 = (iParam4 - iVar1);
	if ((!func_585(iLocal_790) && (((iParam3 == 0 || (iVar2 >= 2 && iParam3 < 2)) || (iVar2 > 2 && iParam3 <= 2)) || (iParam3 == 3 && func_580(iLocal_790)))) && (iParam4 != iVar1 || iParam3 == 3))
	{
		iVar4 = func_305(iLocal_790);
		StringCopy(sParam2, "", 64);
		switch (iParam3)
		{
			case 0:
				iVar3 = SYSTEM::ROUND((IntToFloat(iVar2) * (SYSTEM::TO_FLOAT(Global_262145.f_16193) / 100f)));
				*iParam0 = (func_363(iVar3) * iVar3);
				MemCopy(sParam1, {func_733(Global_1676241[iVar4])}, 16);
				IntToString(sParam2, iVar3, 64);
				bVar0 = iVar3 > 1;
				break;
			
			case 1:
				iVar3 = SYSTEM::ROUND((IntToFloat(iVar2) * (SYSTEM::TO_FLOAT(Global_262145.f_16194) / 100f)));
				*iParam0 = (func_363(iVar3) * iVar3);
				MemCopy(sParam1, {func_733(Global_1676247[iVar4])}, 16);
				IntToString(sParam2, iVar3, 64);
				bVar0 = iVar3 > 1;
				break;
			
			case 2:
				iVar3 = SYSTEM::ROUND((IntToFloat(iVar2) * (SYSTEM::TO_FLOAT(Global_262145.f_16195) / 100f)));
				*iParam0 = (func_363(iVar3) * iVar3);
				MemCopy(sParam1, {func_733(Global_1676253[iVar4])}, 16);
				IntToString(sParam2, iVar3, 64);
				bVar0 = iVar3 > 1;
				break;
			
			case 3:
				*iParam0 = func_358(iLocal_790);
				MemCopy(sParam1, {func_733(Global_1676259[iVar4])}, 16);
				break;
		}
		if (iParam3 == 3)
		{
			StringConCat(sParam2, HUD::_GET_LABEL_TEXT("CBUYERCRS"), 64);
		}
		else if (bVar0)
		{
			StringConCat(sParam2, HUD::_GET_LABEL_TEXT("CBUYERCRP"), 64);
		}
		else
		{
			StringConCat(sParam2, HUD::_GET_LABEL_TEXT("CBUYERCR"), 64);
		}
	}
	else
	{
		*iParam0 = -1;
		StringCopy(sParam1, "", 64);
		StringCopy(sParam2, "", 64);
	}
}

struct<4> func_733(int iParam0)
{
	StringCopy(&Var0, "CONTRA_BUYER", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

char* func_734(int iParam0)
{
	iVar0 = func_735(iParam0);
	switch (iVar0)
	{
		case 3:
			return "ah_sell_crt_2";
		
		case 5:
			return "ah_sell_crt_3";
		
		case 1:
			return "ah_sell_crt_4";
		
		case 2:
			return "ah_sell_crt_5";
		
		case 4:
			return "ah_sell_crt_6";
		
		case 6:
			return "ah_sell_crt_7";
		
		default:
	}
	return "";
}

int func_735(int iParam0)
{
	iVar0 = 1;
	while (iVar0 <= 6)
	{
		if (func_362(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_736(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (func_747())
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
		if (!func_745())
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
				else if (bVar14 || (!func_30(PLAYER::PLAYER_ID(), 0) && !func_744()))
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
					func_741(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_740(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
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
					ENTITY::_SET_ENTITY_SOMETHING(uVar27, 1);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(uVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(uVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(uVar27) && PED::_HAS_STREAMED_PED_ASSETS_LOADED(uVar27))
				{
					PED::_0x4668D80430D6C299(uVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(uVar27, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_739();
					func_738();
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
				if (!func_740(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
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
							ENTITY::_SET_ENTITY_SOMETHING(uVar27, 1);
						}
					}
					if (func_737(Global_4456448.f_232883))
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
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(uVar27);
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

bool func_737(int iParam0)
{
	return iParam0 == 17;
}

void func_738()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { Var0 };
}

void func_739()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[PLAYER::PLAYER_ID()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_740(var uParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_741(int iParam0, int iParam1, int iParam2)
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
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
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
				func_743();
			}
			else if (!MISC::IS_BIT_SET(Global_2359302.f_67, 1))
			{
				if (MISC::IS_BIT_SET(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::_0x2A2173E46DAECD12(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2359302.f_67), 1);
			}
		}
		if (func_30(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
		func_742(-2008016205, iParam0);
	}
}

void func_742(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_743()
{
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!MISC::IS_BIT_SET(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = CAM::_0xEE778F8C7E1142E2(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2359302.f_67), 2);
			MISC::SET_BIT(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_744()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_745()
{
	if (func_746() == 0)
	{
		return 1;
	}
	return 0;
}

int func_746()
{
	return Global_1312467.f_18;
}

int func_747()
{
	if (Global_1590535[PLAYER::PLAYER_ID()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

int func_748(int iParam0)
{
	if (func_756(iParam0))
	{
		return func_749(Global_2425662[iParam0].f_310.f_5);
	}
	return 0;
}

int func_749(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 3;
			break;
		
		case 3:
			return 4;
			break;
		
		case 4:
			return 5;
			break;
		
		case 5:
			return 6;
			break;
		
		case 6:
			return 7;
			break;
		
		case 7:
			return 8;
			break;
		
		case 8:
			return 9;
			break;
		
		case 9:
			return 10;
			break;
		
		case 10:
			return 11;
			break;
		
		case 11:
			return 12;
			break;
		
		case 12:
			return 13;
			break;
		
		case 13:
			return 14;
			break;
		
		case 14:
			return 15;
			break;
		
		case 15:
			return 16;
			break;
		
		case 16:
			return 17;
			break;
		
		case 17:
			return 18;
			break;
		
		case 18:
			return 19;
			break;
		
		case 19:
			return 20;
			break;
		
		case 20:
			return 21;
			break;
		
		case 21:
			return 22;
			break;
	}
	return 0;
}

void func_750(bool bParam0)
{
	if (bParam0)
	{
		func_751();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			MISC::SET_BIT(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_387(0))
		{
			func_752(0);
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

void func_751()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_752(int iParam0)
{
	if (func_388())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_754())
		{
			func_753(1, 1);
		}
		else
		{
			func_753(0, 0);
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
	if (!func_604())
	{
		Global_19486.f_1 = 3;
	}
}

void func_753(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_387(0))
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

bool func_754()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

bool func_755()
{
	return Global_1694834 != -1;
}

int func_756(int iParam0)
{
	if (iParam0 != func_9())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_20(Global_2425662[iParam0].f_310.f_5) == 0;
			}
		}
	}
	return 0;
}

