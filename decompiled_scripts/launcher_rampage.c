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
	iLocal_82 = 1;
	iLocal_83 = 65;
	iLocal_84 = 49;
	iLocal_85 = 64;
	uLocal_89 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_90 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_106 = { 1180.969f, -402.381f, 67.2f };
	Local_109 = { 5f, 0f, 57.33f };
	iLocal_113 = -1;
	iLocal_286 = 77;
	iLocal_287 = -1;
	iLocal_288 = -1;
	iLocal_289 = 1;
	iLocal_290 = 1;
	iLocal_291 = 1;
	MISC::_0x6F2135B6129620C1(1);
	func_373();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var61 = { ScriptParam_0.f_1[0] };
	Global_96016 = 1;
	func_372(&Var0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_371(" Force cleanup [TERMINATING]");
		func_356(&Var0, 1);
	}
	if (!func_355(108))
	{
		func_228(&Var0, Var61);
	}
	else
	{
		func_1(&Var0, Var61);
	}
}

void func_1(var uParam0, struct<3> Param1)
{
	while (true)
	{
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			func_371("  Ambient - Player isn't within World Point Range");
			func_356(uParam0, 1);
		}
		if (func_227() != 2)
		{
			func_371("  Ambient - Player is not Trevor");
			func_356(uParam0, 1);
		}
		iLocal_288 = func_226(5f);
		if (iLocal_288 != -1)
		{
			if (!func_220())
			{
				*uParam0 = func_219(iLocal_288);
				StringCopy(&(uParam0->f_1), func_218(iLocal_288), 32);
				uParam0->f_16 = 3;
				uParam0->f_15 = 5f;
				if (*uParam0 == -1)
				{
					func_371("  -  Ambient Rampage Mission ID is invalid");
					func_356(uParam0, 1);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1)))
				{
					func_371("  -  Ambient Rampage Mission ID is invalid");
					func_356(uParam0, 1);
				}
				MISC::SET_BIT(&(Global_111638.f_18569[*uParam0]), 0);
				MISC::SET_BIT(&(Global_111638.f_18569[*uParam0]), 2);
				MISC::CLEAR_BIT(&(Global_111638.f_18569[*uParam0]), 3);
				Global_110725[*uParam0].f_1 = 0;
				if (!func_217(0))
				{
					Global_110725[*uParam0].f_3 = 0;
				}
				if (!func_209(*uParam0))
				{
					func_371(" RC Ambient Can't Launch - Can_RC_Launch Faled");
					func_356(uParam0, 1);
				}
				else if (!func_5(uParam0))
				{
					func_371(" RC Ambient Can't Launch - Launch_RC_Mission Failed");
					func_356(uParam0, 1);
				}
				else
				{
					func_4(500, 1);
					MISC::CLEAR_AREA(Param1, uParam0->f_15, 1, 0, 0, 0);
					func_371(" RC Ambient Launcher Waiting To Terminate");
					Global_110725[*uParam0].f_1 = 0;
					if (func_3(uParam0))
					{
						func_371(" Ambient - Ready To Terminate");
						func_356(uParam0, 0);
					}
				}
			}
		}
		else
		{
			if (func_2("RAMP_HELP_TRIG"))
			{
				HUD::CLEAR_HELP(1);
			}
			iLocal_291 = 0;
		}
		SYSTEM::WAIT(0);
	}
}

bool func_2(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_3(var uParam0)
{
	while (!Global_110725[*uParam0])
	{
		SYSTEM::WAIT(0);
	}
	return 1;
}

void func_4(int iParam0, bool bParam1)
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(iParam0);
			if (bParam1)
			{
				while (!CAM::IS_SCREEN_FADED_OUT())
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	}
}

int func_5(var uParam0)
{
	if (!func_208())
	{
		while (!func_203(*uParam0))
		{
			if (func_202(*uParam0))
			{
				func_191();
			}
			if (!func_148(uParam0, *uParam0 != 2))
			{
				func_371("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return 0;
			}
			SYSTEM::WAIT(0);
		}
	}
	if (func_147())
	{
		func_145();
	}
	if (!func_114(uParam0))
	{
		func_371("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	func_111(*uParam0, &Var0);
	MemCopy(&sVar32, {func_110(*uParam0)}, 4);
	func_109(&sVar32, Var0.f_3, 0);
	func_108(*uParam0);
	if (!func_208())
	{
		if (uParam0->f_16 == 2)
		{
			func_25(&(uParam0->f_1), 0);
		}
		else
		{
			func_25(&(uParam0->f_1), 1);
		}
	}
	func_6(*uParam0, Var0);
	return 1;
}

void func_6(int iParam0, char* sParam1)
{
	func_24(sParam1);
	MISC::CLEAR_BIT(&(Global_111638.f_18569[iParam0]), 5);
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-131607125) > 0)
	{
		while (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-131607125) > 0)
		{
			func_22();
			SYSTEM::WAIT(0);
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-131607125) < 1)
	{
		Global_61513 = 0;
		SCRIPT::REQUEST_SCRIPT("mission_stat_watcher");
		while (!SCRIPT::HAS_SCRIPT_LOADED("mission_stat_watcher"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("mission_stat_watcher", 1828);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("mission_stat_watcher");
	}
	while (!MISC::IS_BIT_SET(Global_111638.f_18569[iParam0], 5))
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-131607125) > 0)
		{
			MISC::SET_BIT(&(Global_111638.f_18569[iParam0]), 5);
		}
	}
	func_7(iParam0);
}

void func_7(int iParam0)
{
	if (Global_61510 == 1)
	{
		func_21();
		Global_61510 = 0;
		if (Global_61505)
		{
			return;
		}
	}
	if (Global_3)
	{
		Global_61513 = 1;
		func_13();
		return;
	}
	MemCopy(&Global_61527, {func_12(iParam0)}, 4);
	Global_61515 = 0;
	Global_61514 = 0;
	switch (iParam0)
	{
		case 1:
		case 9:
			Global_61502 = 1;
			Global_61505 = 1;
			Global_61508 = 1;
			break;
		
		case 0:
		case 4:
		case 7:
		case 10:
		case 11:
		case 13:
		case 15:
		case 27:
		case 31:
		case 35:
		case 36:
		case 37:
		case 48:
		case 44:
		case 45:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			Global_61513 = 1;
			Global_61514 = 1;
			func_13();
			func_22();
			return;
			break;
	}
	iVar0 = Global_73757;
	Global_73757 = 1;
	iVar1 = Global_73758;
	Global_73758 = iParam0;
	if (!Global_61502)
	{
		if ((Global_73758 != iVar1 || Global_73607 == 0) || iVar0 != Global_73757)
		{
			Global_31020 = 0;
			func_13();
			func_9(iParam0);
		}
		else
		{
			Global_61505 = 1;
		}
	}
	Global_61540 = MISC::GET_GAME_TIMER();
	func_8();
	Global_61512 = 0;
}

void func_8()
{
	if (!Global_61509)
	{
		return;
	}
	if (Global_73607 == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_73607)
	{
		switch (Global_61737[Global_73608[iVar0]])
		{
			case 1:
			case 9:
				Global_73608[iVar0].f_3 = 1;
				break;
			
			case 4:
				if (Global_61520)
				{
					Global_73608[iVar0].f_3 = 1;
				}
				break;
			
			case 6:
				if (Global_61737[Global_73608[iVar0]].f_3)
				{
					if (Global_73608[iVar0].f_1 != 0)
					{
						Global_73608[iVar0].f_3 = 1;
					}
				}
				break;
		}
		iVar0++;
	}
	Global_61509 = 0;
}

void func_9(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			func_10(741);
			func_10(742);
			return;
		
		case 3:
			func_10(743);
			func_10(744);
			return;
		
		case 5:
			func_10(745);
			func_10(746);
			return;
		
		case 6:
			func_10(747);
			func_10(748);
			return;
		
		case 8:
			func_10(749);
			return;
		
		case 12:
			func_10(750);
			return;
		
		case 14:
			func_10(751);
			func_10(752);
			return;
		
		case 16:
			func_10(753);
			func_10(754);
			return;
		
		case 17:
			func_10(755);
			func_10(756);
			func_10(757);
			return;
		
		case 18:
			func_10(758);
			func_10(759);
			return;
		
		case 19:
			func_10(760);
			func_10(761);
			return;
		
		case 20:
			func_10(762);
			return;
		
		case 21:
			func_10(763);
			return;
		
		case 22:
			func_10(764);
			func_10(765);
			return;
		
		case 23:
			func_10(766);
			return;
		
		case 25:
			func_10(767);
			func_10(768);
			func_10(769);
			return;
		
		case 26:
			func_10(770);
			func_10(771);
			return;
		
		case 28:
			func_10(772);
			func_10(773);
			return;
		
		case 29:
			func_10(774);
			func_10(775);
			return;
		
		case 30:
			func_10(776);
			func_10(777);
			return;
		
		case 32:
			func_10(778);
			func_10(779);
			return;
		
		case 33:
			func_10(780);
			func_10(781);
			func_10(782);
			return;
		
		case 34:
			func_10(783);
			func_10(784);
			return;
		
		case 38:
			func_10(785);
			func_10(786);
			return;
		
		case 39:
			func_10(787);
			func_10(788);
			return;
		
		case 40:
			func_10(789);
			return;
		
		case 41:
			func_10(790);
			func_10(791);
			func_10(792);
			return;
		
		case 42:
			func_10(793);
			func_10(794);
			func_10(795);
			return;
		
		case 43:
			func_10(796);
			func_10(797);
			return;
		
		case 46:
			func_10(798);
			func_10(799);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 47:
			func_10(800);
			func_10(801);
			return;
		
		case 49:
			func_10(802);
			func_10(803);
			return;
		
		case 50:
			func_10(804);
			func_10(805);
			return;
		
		case 51:
			func_10(806);
			return;
		
		case 57:
			func_10(807);
			func_10(808);
			func_10(809);
			return;
		
		case 58:
			func_10(828);
			func_10(829);
			func_10(830);
			return;
		
		case 59:
			func_10(831);
			func_10(832);
			func_10(833);
			return;
		
		case 60:
			func_10(834);
			func_10(835);
			func_10(836);
			return;
		
		case 61:
			func_10(837);
			func_10(838);
			func_10(839);
			return;
		
		case 62:
			func_10(840);
			func_10(841);
			func_10(842);
			return;
		
		case 24:
			func_10(843);
			func_10(844);
			func_10(845);
			return;
		
		default:
	}
}

void func_10(int iParam0)
{
	Global_61505 = 1;
	Global_61508 = 1;
	if (Global_73607 > 15)
	{
		return;
	}
	func_11(Global_73607);
	Global_73608[Global_73607] = iParam0;
	Global_73607++;
	if (Global_61737[iParam0] == 16)
	{
		Global_73759 = 1;
	}
}

void func_11(int iParam0)
{
	Global_73608[iParam0].f_1 = 0;
	Global_73608[iParam0].f_2 = 0f;
	Global_73608[iParam0].f_3 = 0;
	Global_73608[iParam0].f_4 = 0;
}

struct<2> func_12(int iParam0)
{
	StringCopy(&Var0, "", 8);
	cVar2 = { func_110(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

void func_13()
{
	if (Global_61512)
	{
		return;
	}
	Global_61521 = 0;
	Global_73607 = 0;
	Global_61523 = 0;
	if (Global_61520)
	{
	}
	Global_61520 = 0;
	func_20(0);
	func_19();
	Global_73759 = 0;
	Global_61511 = 1;
	func_17();
	func_16();
	func_15();
	func_14();
	Global_61502 = 0;
	Global_61532 = 0;
	Global_61540 = -1;
}

void func_14()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_73794[iVar0].f_1 = -1;
		iVar0++;
	}
	Global_73803 = 0;
}

void func_15()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_73760[iVar0] = 0;
		Global_73760[iVar0].f_1 = -1;
		iVar0++;
	}
	Global_73793 = 0;
}

void func_16()
{
	Global_61671 = 0;
}

void func_17()
{
	Global_61531 = 0;
	Global_61535 = func_18(-669750575);
	Global_61534 = func_18(-2097237603);
	Global_61537 = func_18(-1901131717);
	Global_61536 = func_18(2020326774);
	Global_61539 = func_18(-1675981664);
	Global_61538 = func_18(165162477);
}

var func_18(int iParam0)
{
	STATS::STAT_GET_INT(iParam0, &uVar0, -1);
	return uVar0;
}

void func_19()
{
	Global_61541 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_61542[iVar0] = 0;
		iVar0++;
	}
}

void func_20(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

void func_21()
{
	Global_61510 = 1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_73607)
	{
		Global_73608[iVar0].f_3 = 2;
		iVar0++;
	}
	if (Global_61520)
	{
	}
	Global_61520 = 0;
}

void func_22()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-131607125) > 0)
	{
		if (func_23())
		{
			if (Global_61507 && !Global_61506)
			{
				Global_61507 = 0;
				MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("mission_stat_watcher");
			}
		}
		else
		{
			MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("mission_stat_watcher");
		}
	}
}

int func_23()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-131607125) < 1)
	{
		return 0;
	}
	if (!Global_61505)
	{
		return 0;
	}
	return Global_61517;
}

void func_24(char* sParam0)
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sParam0))
	{
	}
}

void func_25(char[4] cParam0, int iParam1)
{
	MISC::CLEAR_BIT(&(Global_98744.f_20), 17);
	func_26(cParam0, iParam1, 0);
}

void func_26(char[4] cParam0, int iParam1, int iParam2)
{
	if (Global_98744 != 10 && Global_98744 != 9)
	{
		StringCopy(&Global_102195, cParam0, 32);
		func_28(&Global_102203, cParam0, 0, "Start", iParam1, iParam2);
		func_27();
		Global_92922 = 0;
	}
}

void func_27()
{
	Global_105187 = Global_102203;
	Global_105187.f_1 = Global_102203.f_1;
	Global_105187.f_6 = Global_102203.f_6;
	Global_105187.f_7 = Global_102203.f_7;
	Global_105187.f_8 = Global_102203.f_8;
	Global_105187.f_2 = Global_102203.f_2;
	Global_105187.f_3 = Global_102203.f_3;
	Global_105187.f_4 = Global_102203.f_4;
	Global_105187.f_5 = Global_102203.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_105187.f_9[iVar1] = Global_102203.f_9[iVar1];
		Global_105187.f_13[iVar1] = Global_102203.f_13[iVar1];
		Global_105187.f_17[iVar1] = Global_102203.f_17[iVar1];
		Global_105187.f_21[iVar1] = Global_102203.f_21[iVar1];
		Global_105187.f_25[0][iVar1] = { Global_102203.f_25[0][iVar1] };
		Global_105187.f_25[1][iVar1] = { Global_102203.f_25[1][iVar1] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_105187.f_616[iVar1][iVar0] = Global_102203.f_616[iVar1][iVar0];
			Global_105187.f_616[iVar1].f_13[iVar0] = Global_102203.f_616[iVar1].f_13[iVar0];
			Global_105187.f_616[iVar1].f_26[iVar0] = Global_102203.f_616[iVar1].f_26[iVar0];
			iVar0++;
		}
		Global_105187.f_616[iVar1].f_59 = Global_102203.f_616[iVar1].f_59;
		Global_105187.f_616[iVar1].f_60 = Global_102203.f_616[iVar1].f_60;
		Global_105187.f_616[iVar1].f_61 = Global_102203.f_616[iVar1].f_61;
		Global_105187.f_616[iVar1].f_62 = Global_102203.f_616[iVar1].f_62;
		Global_105187.f_616[iVar1].f_63 = Global_102203.f_616[iVar1].f_63;
		Global_105187.f_616[iVar1].f_64 = Global_102203.f_616[iVar1].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_105187.f_616[iVar1].f_39[iVar0] = Global_102203.f_616[iVar1].f_39[iVar0];
			Global_105187.f_616[iVar1].f_49[iVar0] = Global_102203.f_616[iVar1].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_105187.f_812[iVar1][iVar0] = { Global_102203.f_812[iVar1][iVar0] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			Global_105187.f_812[iVar1].f_221[iVar0] = { Global_102203.f_812[iVar1].f_221[iVar0] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_105187.f_2244[iVar1][iVar0] = Global_102203.f_2244[iVar1][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_105187.f_2244[iVar1].f_5[iVar0] = Global_102203.f_2244[iVar1].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_105187.f_2244[iVar1].f_16[iVar0] = Global_102203.f_2244[iVar1].f_16[iVar0];
			iVar0++;
		}
		Global_105187.f_2341[iVar1] = Global_102203.f_2341[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_105187.f_2838[iVar1][iVar0] = Global_102203.f_2838[iVar1][iVar0];
			Global_105187.f_2838[iVar1].f_5[iVar0] = Global_102203.f_2838[iVar1].f_5[iVar0];
			Global_105187.f_2838[iVar1].f_10[iVar0] = Global_102203.f_2838[iVar1].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_105187.f_2345[iVar1][iVar0] = Global_102203.f_2345[iVar1][iVar0];
			Global_105187.f_2345[iVar1].f_4[iVar0] = Global_102203.f_2345[iVar1].f_4[iVar0];
			Global_105187.f_2345[iVar1].f_8[iVar0] = Global_102203.f_2345[iVar1].f_8[iVar0];
			Global_105187.f_2345[iVar1].f_12[iVar0] = Global_102203.f_2345[iVar1].f_12[iVar0];
			Global_105187.f_2345[iVar1].f_16[iVar0] = Global_102203.f_2345[iVar1].f_16[iVar0];
			Global_105187.f_2345[iVar1].f_20[iVar0] = Global_102203.f_2345[iVar1].f_20[iVar0];
			Global_105187.f_2345[iVar1].f_24[iVar0] = Global_102203.f_2345[iVar1].f_24[iVar0];
			Global_105187.f_2345[iVar1].f_28[iVar0] = Global_102203.f_2345[iVar1].f_28[iVar0];
			Global_105187.f_2345[iVar1].f_32[iVar0] = Global_102203.f_2345[iVar1].f_32[iVar0];
			Global_105187.f_2345[iVar1].f_36[iVar0] = Global_102203.f_2345[iVar1].f_36[iVar0];
			Global_105187.f_2345[iVar1].f_40[iVar0] = Global_102203.f_2345[iVar1].f_40[iVar0];
			Global_105187.f_2345[iVar1].f_44[iVar0] = Global_102203.f_2345[iVar1].f_44[iVar0];
			Global_105187.f_2345[iVar1].f_48[iVar0] = Global_102203.f_2345[iVar1].f_48[iVar0];
			Global_105187.f_2345[iVar1].f_52[iVar0] = Global_102203.f_2345[iVar1].f_52[iVar0];
			Global_105187.f_2345[iVar1].f_56[iVar0] = Global_102203.f_2345[iVar1].f_56[iVar0];
			Global_105187.f_2345[iVar1].f_60[iVar0] = Global_102203.f_2345[iVar1].f_60[iVar0];
			Global_105187.f_2345[iVar1].f_64[iVar0] = Global_102203.f_2345[iVar1].f_64[iVar0];
			Global_105187.f_2345[iVar1].f_68[iVar0] = Global_102203.f_2345[iVar1].f_68[iVar0];
			Global_105187.f_2345[iVar1].f_72[iVar0] = Global_102203.f_2345[iVar1].f_72[iVar0];
			Global_105187.f_2345[iVar1].f_76[iVar0] = Global_102203.f_2345[iVar1].f_76[iVar0];
			Global_105187.f_2345[iVar1].f_80[iVar0] = Global_102203.f_2345[iVar1].f_80[iVar0];
			Global_105187.f_2345[iVar1].f_84[iVar0] = Global_102203.f_2345[iVar1].f_84[iVar0];
			Global_105187.f_2345[iVar1].f_88[iVar0] = Global_102203.f_2345[iVar1].f_88[iVar0];
			Global_105187.f_2345[iVar1].f_92[iVar0] = Global_102203.f_2345[iVar1].f_92[iVar0];
			Global_105187.f_2345[iVar1].f_96[iVar0] = Global_102203.f_2345[iVar1].f_96[iVar0];
			Global_105187.f_2345[iVar1].f_100[iVar0] = Global_102203.f_2345[iVar1].f_100[iVar0];
			Global_105187.f_2345[iVar1].f_104[iVar0] = Global_102203.f_2345[iVar1].f_104[iVar0];
			Global_105187.f_2345[iVar1].f_108[iVar0] = Global_102203.f_2345[iVar1].f_108[iVar0];
			Global_105187.f_2345[iVar1].f_112[iVar0] = Global_102203.f_2345[iVar1].f_112[iVar0];
			Global_105187.f_2345[iVar1].f_116[iVar0] = Global_102203.f_2345[iVar1].f_116[iVar0];
			Global_105187.f_2345[iVar1].f_120[iVar0] = Global_102203.f_2345[iVar1].f_120[iVar0];
			Global_105187.f_2345[iVar1].f_124[iVar0] = Global_102203.f_2345[iVar1].f_124[iVar0];
			Global_105187.f_2345[iVar1].f_128[iVar0] = Global_102203.f_2345[iVar1].f_128[iVar0];
			Global_105187.f_2345[iVar1].f_132[iVar0] = Global_102203.f_2345[iVar1].f_132[iVar0];
			Global_105187.f_2345[iVar1].f_136[iVar0] = Global_102203.f_2345[iVar1].f_136[iVar0];
			Global_105187.f_2345[iVar1].f_140[iVar0] = Global_102203.f_2345[iVar1].f_140[iVar0];
			Global_105187.f_2345[iVar1].f_144[iVar0] = Global_102203.f_2345[iVar1].f_144[iVar0];
			Global_105187.f_2345[iVar1].f_148[iVar0] = Global_102203.f_2345[iVar1].f_148[iVar0];
			Global_105187.f_2345[iVar1].f_152[iVar0] = Global_102203.f_2345[iVar1].f_152[iVar0];
			Global_105187.f_2345[iVar1].f_156[iVar0] = Global_102203.f_2345[iVar1].f_156[iVar0];
			Global_105187.f_2345[iVar1].f_160[iVar0] = Global_102203.f_2345[iVar1].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_105187.f_2884 = { Global_102203.f_2884 };
	Global_105187.f_2884.f_3 = Global_102203.f_2884.f_3;
	Global_105187.f_2890 = { Global_102203.f_2890 };
	Global_105187.f_2890.f_3 = { Global_102203.f_2890.f_3 };
	Global_105187.f_2890.f_6 = Global_102203.f_2890.f_6;
	Global_105187.f_2890.f_8 = Global_105187.f_2890.f_8;
	Global_105187.f_2890.f_7 = Global_102203.f_2890.f_7;
	Global_105187.f_2890.f_9 = Global_102203.f_2890.f_9;
	Global_105187.f_2890.f_11 = Global_102203.f_2890.f_11;
	Global_105187.f_2890.f_10 = Global_102203.f_2890.f_10;
	Global_105187.f_2890.f_12 = Global_102203.f_2890.f_12;
	Global_105187.f_2890.f_12.f_1 = { Global_102203.f_2890.f_12.f_1 };
	Global_105187.f_2890.f_12.f_5 = Global_102203.f_2890.f_12.f_5;
	Global_105187.f_2890.f_12.f_6 = Global_102203.f_2890.f_12.f_6;
	Global_105187.f_2890.f_12.f_7 = Global_102203.f_2890.f_12.f_7;
	Global_105187.f_2890.f_12.f_8 = Global_102203.f_2890.f_12.f_8;
	Global_105187.f_2890.f_12.f_9 = { Global_102203.f_2890.f_12.f_9 };
	Global_105187.f_2890.f_12.f_59 = { Global_102203.f_2890.f_12.f_59 };
	Global_105187.f_2890.f_12.f_62 = Global_102203.f_2890.f_12.f_62;
	Global_105187.f_2890.f_12.f_63 = Global_102203.f_2890.f_12.f_63;
	Global_105187.f_2890.f_12.f_64 = Global_102203.f_2890.f_12.f_64;
	Global_105187.f_2890.f_12.f_65 = Global_102203.f_2890.f_12.f_65;
	Global_105187.f_2890.f_12.f_77 = Global_102203.f_2890.f_12.f_77;
	Global_105187.f_2890.f_12.f_66 = Global_102203.f_2890.f_12.f_66;
	Global_105187.f_2890.f_12.f_67 = Global_102203.f_2890.f_12.f_67;
	Global_105187.f_2890.f_12.f_68 = Global_102203.f_2890.f_12.f_68;
	Global_105187.f_2890.f_12.f_69 = Global_102203.f_2890.f_12.f_69;
	Global_105187.f_2890.f_12.f_71 = Global_102203.f_2890.f_12.f_71;
	Global_105187.f_2890.f_12.f_72 = Global_102203.f_2890.f_12.f_72;
	Global_105187.f_2890.f_12.f_73 = Global_102203.f_2890.f_12.f_73;
	Global_105187.f_2890.f_12.f_74 = Global_102203.f_2890.f_12.f_74;
	Global_105187.f_2890.f_12.f_75 = Global_102203.f_2890.f_12.f_75;
	Global_105187.f_2890.f_12.f_76 = Global_102203.f_2890.f_12.f_76;
	Global_105187.f_2980 = Global_102203.f_2980;
	Global_105187.f_2980.f_1 = Global_102203.f_2980.f_1;
	Global_105187.f_2980.f_2 = Global_102203.f_2980.f_2;
	Global_105187.f_2980.f_3 = Global_102203.f_2980.f_3;
}

void func_28(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	*uParam0 = func_227();
	uParam0->f_1 = func_97();
	MISC::_GET_WEATHER_TYPE_TRANSITION(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_69(&(uParam0->f_2884), 0);
		func_68(PLAYER::PLAYER_PED_ID());
		func_61(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == 966099553)
		{
			uParam0->f_2 = -1569615261;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_111638.f_2358.f_539.f_294[iVar1];
		if (iVar1 == func_58())
		{
			func_51(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1][iVar0] = Global_98469[iVar1][iVar0];
				uParam0->f_616[iVar1].f_13[iVar0] = Global_98469[iVar1].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1].f_59 = Global_98469[iVar1].f_59;
			uParam0->f_616[iVar1].f_60 = Global_98469[iVar1].f_60;
			uParam0->f_616[iVar1].f_61 = Global_98469[iVar1].f_61;
			uParam0->f_616[iVar1].f_62 = Global_98469[iVar1].f_62;
			uParam0->f_616[iVar1].f_63 = Global_98469[iVar1].f_63;
			uParam0->f_616[iVar1].f_64 = Global_98469[iVar1].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1].f_39[iVar0] = Global_98469[iVar1].f_39[iVar0];
				uParam0->f_616[iVar1].f_49[iVar0] = Global_98469[iVar1].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1][iVar0] = { Global_111638.f_2358.f_539.f_298[iVar1][iVar0] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1].f_221[iVar0] = { Global_111638.f_2358.f_539.f_298[iVar1].f_221[iVar0] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(-1142440288, &(uParam0->f_2244[iVar1][0]), -1);
				STATS::STAT_GET_INT(-1123368730, &(uParam0->f_2244[iVar1][1]), -1);
				STATS::STAT_GET_INT(1081345962, &(uParam0->f_2244[iVar1].f_5[0]), -1);
				STATS::STAT_GET_INT(-1371118771, &(uParam0->f_2244[iVar1].f_5[1]), -1);
				STATS::STAT_GET_INT(-765547619, &(uParam0->f_2244[iVar1].f_5[2]), -1);
				STATS::STAT_GET_INT(-1080850937, &(uParam0->f_2244[iVar1].f_5[3]), -1);
				STATS::STAT_GET_INT(-2022861412, &(uParam0->f_2244[iVar1].f_5[4]), -1);
				STATS::STAT_GET_INT(-2018548694, &(uParam0->f_2244[iVar1].f_16[0]), -1);
				STATS::STAT_GET_INT(1323790999, &(uParam0->f_2244[iVar1].f_16[1]), -1);
				STATS::STAT_GET_INT(760098661, &(uParam0->f_2244[iVar1].f_16[2]), -1);
				STATS::STAT_GET_INT(-260459075, &(uParam0->f_2244[iVar1].f_16[3]), -1);
				STATS::STAT_GET_INT(1085789752, &(uParam0->f_2244[iVar1].f_16[4]), -1);
				STATS::STAT_GET_INT(334003354, &(uParam0->f_2244[iVar1].f_16[5]), -1);
				STATS::STAT_GET_INT(-500524769, &(uParam0->f_2244[iVar1].f_16[6]), -1);
				STATS::STAT_GET_INT(-1456330957, &(uParam0->f_2244[iVar1].f_16[7]), -1);
				STATS::STAT_GET_INT(-142720058, &(uParam0->f_2244[iVar1].f_16[8]), -1);
				STATS::STAT_GET_INT(-855707956, &(uParam0->f_2244[iVar1].f_16[9]), -1);
				STATS::STAT_GET_INT(-1539506602, &(uParam0->f_2244[iVar1].f_16[10]), -1);
				STATS::STAT_GET_INT(1915755069, &(uParam0->f_2244[iVar1].f_16[11]), -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(-126492964, &(uParam0->f_2244[iVar1][0]), -1);
				STATS::STAT_GET_INT(190514318, &(uParam0->f_2244[iVar1][1]), -1);
				STATS::STAT_GET_INT(-739329202, &(uParam0->f_2244[iVar1].f_5[0]), -1);
				STATS::STAT_GET_INT(-1185380830, &(uParam0->f_2244[iVar1].f_5[1]), -1);
				STATS::STAT_GET_INT(1030852186, &(uParam0->f_2244[iVar1].f_5[2]), -1);
				STATS::STAT_GET_INT(1801284145, &(uParam0->f_2244[iVar1].f_5[3]), -1);
				STATS::STAT_GET_INT(-1873234909, &(uParam0->f_2244[iVar1].f_5[4]), -1);
				STATS::STAT_GET_INT(-1315299114, &(uParam0->f_2244[iVar1].f_16[0]), -1);
				STATS::STAT_GET_INT(-2073999771, &(uParam0->f_2244[iVar1].f_16[1]), -1);
				STATS::STAT_GET_INT(1865030647, &(uParam0->f_2244[iVar1].f_16[2]), -1);
				STATS::STAT_GET_INT(-419525730, &(uParam0->f_2244[iVar1].f_16[3]), -1);
				STATS::STAT_GET_INT(-121557213, &(uParam0->f_2244[iVar1].f_16[4]), -1);
				STATS::STAT_GET_INT(-1021590567, &(uParam0->f_2244[iVar1].f_16[5]), -1);
				STATS::STAT_GET_INT(-732338604, &(uParam0->f_2244[iVar1].f_16[6]), -1);
				STATS::STAT_GET_INT(758650912, &(uParam0->f_2244[iVar1].f_16[7]), -1);
				STATS::STAT_GET_INT(1090437037, &(uParam0->f_2244[iVar1].f_16[8]), -1);
				STATS::STAT_GET_INT(164057391, &(uParam0->f_2244[iVar1].f_16[9]), -1);
				STATS::STAT_GET_INT(1607797744, &(uParam0->f_2244[iVar1].f_16[10]), -1);
				STATS::STAT_GET_INT(-1852248201, &(uParam0->f_2244[iVar1].f_16[11]), -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(177632919, &(uParam0->f_2244[iVar1][0]), -1);
				STATS::STAT_GET_INT(-464115177, &(uParam0->f_2244[iVar1][1]), -1);
				STATS::STAT_GET_INT(111865610, &(uParam0->f_2244[iVar1].f_5[0]), -1);
				STATS::STAT_GET_INT(-194950537, &(uParam0->f_2244[iVar1].f_5[1]), -1);
				STATS::STAT_GET_INT(-378588013, &(uParam0->f_2244[iVar1].f_5[2]), -1);
				STATS::STAT_GET_INT(-626223346, &(uParam0->f_2244[iVar1].f_5[3]), -1);
				STATS::STAT_GET_INT(-848331628, &(uParam0->f_2244[iVar1].f_5[4]), -1);
				STATS::STAT_GET_INT(226994293, &(uParam0->f_2244[iVar1].f_16[0]), -1);
				STATS::STAT_GET_INT(-1921832882, &(uParam0->f_2244[iVar1].f_16[1]), -1);
				STATS::STAT_GET_INT(1934357500, &(uParam0->f_2244[iVar1].f_16[2]), -1);
				STATS::STAT_GET_INT(1106022718, &(uParam0->f_2244[iVar1].f_16[3]), -1);
				STATS::STAT_GET_INT(1478409634, &(uParam0->f_2244[iVar1].f_16[4]), -1);
				STATS::STAT_GET_INT(-863918486, &(uParam0->f_2244[iVar1].f_16[5]), -1);
				STATS::STAT_GET_INT(-1699495217, &(uParam0->f_2244[iVar1].f_16[6]), -1);
				STATS::STAT_GET_INT(-1327567067, &(uParam0->f_2244[iVar1].f_16[7]), -1);
				STATS::STAT_GET_INT(2133068720, &(uParam0->f_2244[iVar1].f_16[8]), -1);
				STATS::STAT_GET_INT(-7828357, &(uParam0->f_2244[iVar1].f_16[9]), -1);
				STATS::STAT_GET_INT(-4568869, &(uParam0->f_2244[iVar1].f_16[10]), -1);
				STATS::STAT_GET_INT(-225202546, &(uParam0->f_2244[iVar1].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_111638.f_20559.f_233[iVar1].f_1;
		uParam0->f_13[iVar1] = Global_58686[iVar1];
		uParam0->f_25[0][iVar1] = { Global_111638.f_2358.f_539.f_2407[0][iVar1] };
		uParam0->f_25[1][iVar1] = { Global_111638.f_2358.f_539.f_2407[1][iVar1] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1][iVar0] = Global_111638.f_2358.f_493[iVar1][iVar0];
			uParam0->f_2838[iVar1].f_5[iVar0] = Global_111638.f_2358.f_493[iVar1].f_5[iVar0];
			uParam0->f_2838[iVar1].f_10[iVar0] = Global_111638.f_2358.f_493[iVar1].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1][iVar0] = Global_111638.f_2358[iVar1][iVar0];
			uParam0->f_2345[iVar1].f_4[iVar0] = Global_111638.f_2358[iVar1].f_4[iVar0];
			uParam0->f_2345[iVar1].f_8[iVar0] = Global_111638.f_2358[iVar1].f_8[iVar0];
			uParam0->f_2345[iVar1].f_12[iVar0] = Global_111638.f_2358[iVar1].f_12[iVar0];
			uParam0->f_2345[iVar1].f_16[iVar0] = Global_111638.f_2358[iVar1].f_16[iVar0];
			uParam0->f_2345[iVar1].f_20[iVar0] = Global_111638.f_2358[iVar1].f_20[iVar0];
			uParam0->f_2345[iVar1].f_24[iVar0] = Global_111638.f_2358[iVar1].f_24[iVar0];
			uParam0->f_2345[iVar1].f_28[iVar0] = Global_111638.f_2358[iVar1].f_28[iVar0];
			uParam0->f_2345[iVar1].f_32[iVar0] = Global_111638.f_2358[iVar1].f_32[iVar0];
			uParam0->f_2345[iVar1].f_36[iVar0] = Global_111638.f_2358[iVar1].f_36[iVar0];
			uParam0->f_2345[iVar1].f_40[iVar0] = Global_111638.f_2358[iVar1].f_40[iVar0];
			uParam0->f_2345[iVar1].f_44[iVar0] = Global_111638.f_2358[iVar1].f_44[iVar0];
			uParam0->f_2345[iVar1].f_48[iVar0] = Global_111638.f_2358[iVar1].f_48[iVar0];
			uParam0->f_2345[iVar1].f_52[iVar0] = Global_111638.f_2358[iVar1].f_52[iVar0];
			uParam0->f_2345[iVar1].f_56[iVar0] = Global_111638.f_2358[iVar1].f_56[iVar0];
			uParam0->f_2345[iVar1].f_60[iVar0] = Global_111638.f_2358[iVar1].f_60[iVar0];
			uParam0->f_2345[iVar1].f_64[iVar0] = Global_111638.f_2358[iVar1].f_64[iVar0];
			uParam0->f_2345[iVar1].f_68[iVar0] = Global_111638.f_2358[iVar1].f_68[iVar0];
			uParam0->f_2345[iVar1].f_72[iVar0] = Global_111638.f_2358[iVar1].f_72[iVar0];
			uParam0->f_2345[iVar1].f_76[iVar0] = Global_111638.f_2358[iVar1].f_76[iVar0];
			uParam0->f_2345[iVar1].f_80[iVar0] = Global_111638.f_2358[iVar1].f_80[iVar0];
			uParam0->f_2345[iVar1].f_84[iVar0] = Global_111638.f_2358[iVar1].f_84[iVar0];
			uParam0->f_2345[iVar1].f_88[iVar0] = Global_111638.f_2358[iVar1].f_88[iVar0];
			uParam0->f_2345[iVar1].f_92[iVar0] = Global_111638.f_2358[iVar1].f_92[iVar0];
			uParam0->f_2345[iVar1].f_96[iVar0] = Global_111638.f_2358[iVar1].f_96[iVar0];
			uParam0->f_2345[iVar1].f_100[iVar0] = Global_111638.f_2358[iVar1].f_100[iVar0];
			uParam0->f_2345[iVar1].f_104[iVar0] = Global_111638.f_2358[iVar1].f_104[iVar0];
			uParam0->f_2345[iVar1].f_108[iVar0] = Global_111638.f_2358[iVar1].f_108[iVar0];
			uParam0->f_2345[iVar1].f_112[iVar0] = Global_111638.f_2358[iVar1].f_112[iVar0];
			uParam0->f_2345[iVar1].f_116[iVar0] = Global_111638.f_2358[iVar1].f_116[iVar0];
			uParam0->f_2345[iVar1].f_120[iVar0] = Global_111638.f_2358[iVar1].f_120[iVar0];
			uParam0->f_2345[iVar1].f_124[iVar0] = Global_111638.f_2358[iVar1].f_124[iVar0];
			uParam0->f_2345[iVar1].f_128[iVar0] = Global_111638.f_2358[iVar1].f_128[iVar0];
			uParam0->f_2345[iVar1].f_132[iVar0] = Global_111638.f_2358[iVar1].f_132[iVar0];
			uParam0->f_2345[iVar1].f_136[iVar0] = Global_111638.f_2358[iVar1].f_136[iVar0];
			uParam0->f_2345[iVar1].f_140[iVar0] = Global_111638.f_2358[iVar1].f_140[iVar0];
			uParam0->f_2345[iVar1].f_144[iVar0] = Global_111638.f_2358[iVar1].f_144[iVar0];
			uParam0->f_2345[iVar1].f_148[iVar0] = Global_111638.f_2358[iVar1].f_148[iVar0];
			uParam0->f_2345[iVar1].f_152[iVar0] = Global_111638.f_2358[iVar1].f_152[iVar0];
			uParam0->f_2345[iVar1].f_156[iVar0] = Global_111638.f_2358[iVar1].f_156[iVar0];
			uParam0->f_2345[iVar1].f_160[iVar0] = Global_111638.f_2358[iVar1].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(-589476696, &(uParam0->f_2341[0]), -1);
	STATS::STAT_GET_INT(353703542, &(uParam0->f_2341[1]), -1);
	STATS::STAT_GET_INT(126871459, &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_30(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_29(&(uParam0->f_2980));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_29(var uParam0)
{
	*uParam0 = Global_94593;
	uParam0->f_1 = Global_94594;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_30(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = func_48(iParam2);
	}
	if (func_45(iParam2, &iVar0, iParam3, iParam5))
	{
		func_31(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, 1044954915) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
			{
				func_31(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_31(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
	{
		func_33(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_32(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_32(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_98744.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_33(var uParam0, int iParam1, int iParam2)
{
	func_40(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_36(iParam1, 145, 0);
	uParam0->f_11 = func_35(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_34(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
		uParam0->f_6 = ENTITY::GET_ENTITY_HEADING(iParam1);
		uParam0->f_3 = { ENTITY::GET_ENTITY_VELOCITY(iParam1) };
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_76346 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_34(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_75441.f_484[iVar0]))
		{
			if (iParam0 == Global_75441.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_35(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == iParam0)
			{
				return Global_96085[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_36(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_96085[iVar0])
				{
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == func_37(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_37(int iParam0, int iParam1)
{
	if (func_39(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_38(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_38(int iParam0, var uParam1, int iParam2)
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

bool func_39(int iParam0)
{
	return iParam0 < 3;
}

void func_40(int iParam0, var uParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_44(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_43(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		func_42(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_41(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_41(int iParam0)
{
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
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_42(int iParam0, var uParam1, var uParam2)
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (VEHICLE::_GET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case -1775728740:
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_44(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_45(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			else
			{
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, -956048545))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, 0) != iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_46(*uParam1, func_227(), 1))
						{
							sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
							if (!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
							{
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, -150975354))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_46(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_47(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || MISC::IS_BIT_SET(Global_111638.f_7224[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_47(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_48(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_49(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_49(int iParam0)
{
	if (func_39(iParam0))
	{
		return func_50(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_50(int iParam0)
{
	return Global_1798[iParam0];
}

void func_51(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_48(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_57(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_56(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_39(iVar0))
		{
			uParam1->f_59 = Global_111638.f_2358.f_539[iVar0].f_59;
			uParam1->f_60 = Global_111638.f_2358.f_539[iVar0].f_60;
			uParam1->f_61 = Global_111638.f_2358.f_539[iVar0].f_61;
			uParam1->f_62 = Global_111638.f_2358.f_539[iVar0].f_62;
			uParam1->f_63 = Global_111638.f_2358.f_539[iVar0].f_63;
			uParam1->f_64 = Global_111638.f_2358.f_539[iVar0].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_55(161, iParam3))
			{
				uParam1->f_59 = func_52(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_52(752, iParam3, 0);
			}
			uParam1->f_60 = func_52(753, iParam3, 0);
			uParam1->f_61 = func_52(754, iParam3, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_55(161, iParam3))
			{
				uParam1->f_59 = func_52(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_52(752, iParam3, 0);
			}
		}
	}
}

int func_52(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_53(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_53(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_54();
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

int func_54()
{
	return Global_1312745;
}

int func_55(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_53(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_56(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	iVar0 = func_48(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
		*uParam3 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (PED::IS_PED_WEARING_HELMET(iParam0) && PED::_0x451294E859ECC018(iParam0) != -1)
				{
					*uParam2 = PED::_0x451294E859ECC018(iParam0);
					*uParam3 = PED::_0x9D728C1E12BF5518(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_57(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	iVar0 = func_48(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iParam1);
		*uParam3 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iParam1);
		*uParam4 = PED::GET_PED_PALETTE_VARIATION(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_58()
{
	func_59();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_59()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_49(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_48(PLAYER::PLAYER_PED_ID());
			if (func_39(iVar0) && (!func_60(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_39(Global_111638.f_2358.f_539.f_4321))
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

bool func_60(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_61(int iParam0, bool bParam1)
{
	iVar0 = func_48(iParam0);
	if (func_39(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_62(iParam0, &(Global_111638.f_2358.f_539.f_298[iVar0]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_111638.f_2358.f_539.f_1730[iVar2][iVar0] = HUD::_HUD_WEAPON_WHEEL_GET_SLOT_HASH(iVar2);
				if (bParam1)
				{
					iVar1 = HUD::_HUD_WEAPON_WHEEL_GET_SELECTED_HASH();
					if (Global_111638.f_2358.f_539.f_1730[iVar2][iVar0] == iVar1)
					{
						Global_111638.f_2358.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &uVar3);
			if (iVar0 == 0)
			{
				STATS::STAT_SET_INT(-922941372, uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				STATS::STAT_SET_INT(-753526687, uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				STATS::STAT_SET_INT(-502936933, uVar3, 1);
			}
		}
	}
}

void func_62(int iParam0, var uParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			uParam1[iVar0]->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_67(iVar0);
			if (iVar3 != 0)
			{
				Var4 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_67(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != -1569615261)
				{
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4);
					if (Var4 == -72657034)
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4);
					Var4.f_4 = WEAPON::_0xA2C9AC24B4061285(iParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1[iVar0]->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_65(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_65(Var4, iVar1);
					}
				}
				*uParam1[iVar0] = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0].f_1 = 0;
			iVar0++;
		}
		iVar10 = FILES::_GET_NUM_DLC_WEAPONS_SP();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((FILES::_GET_DLC_WEAPON_DATA_SP(iVar9, &Var11) && !func_64(Var11.f_1)) && iVar72 < 51)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var11))
				{
					Var4 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4);
					if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4, 0))
					{
						Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4);
						Var4.f_4 = WEAPON::_0xA2C9AC24B4061285(iParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < FILES::_GET_NUM_DLC_WEAPON_COMPONENTS_SP(iVar9))
					{
						if (FILES::_GET_DLC_WEAPON_COMPONENT_DATA_SP(iVar9, iVar1, &Var50))
						{
							if (!func_63(Var50.f_3))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4, Var50.f_3))
								{
									MISC::SET_BIT(&(Var4.f_2), iVar73);
								}
								iVar73++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

int func_63(int iParam0)
{
	switch (iParam0)
	{
		case -1258515792:
		case 438243936:
		case -455079056:
		case 740920107:
		case -541616347:
		case 1809261196:
		case -1646538868:
		case -1290164948:
		case -964465134:
		case 1135718771:
		case 1253942266:
		case -403805974:
		case 691432737:
		case 987648331:
		case -431680535:
		case -847582310:
		case -92592218:
		case -494548326:
		case 730876697:
		case 583159708:
		case -1928503603:
		case 520557834:
			return 1;
			break;
	}
	return 0;
}

int func_64(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case -1716589765:
			case -1654528753:
			case -270015777:
				return 0;
				break;
			
			case -102323637:
			case -1076751822:
			case 1627465347:
				return 0;
				break;
			
			case -771403250:
			case -1063057011:
				return 0;
				break;
			
			case 2132975508:
				return 0;
				break;
			
			case -1834847097:
			case 137902532:
				return 0;
				break;
			
			case 2138347493:
			case -1466123874:
				return 0;
				break;
			
			case 984333226:
			case -952879014:
				return 0;
				break;
			
			case 1672152130:
			case -1420407917:
				return 0;
				break;
			
			case 171789620:
			case -656458692:
			case -598887786:
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case 1198879012:
			case -800287667:
			case 126349499:
			case -499989876:
			case -1951375401:
			case -538741184:
			case -1045183535:
			case -275439685:
			case 1649403952:
			case 317205821:
			case -1121678507:
			case 125959754:
			case -853065399:
			case -1169823560:
			case -1810795771:
			case 419712736:
			case -1746263880:
			case 1198256469:
			case -1238556825:
			case -1355376991:
			case -1853920116:
			case 727643628:
				return 1;
				break;
			}
	}
	return 0;
}

int func_65(int iParam0, int iParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 453432689:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -19858063;
					break;
				
				case 2:
					iVar0 = -316253668;
					break;
				
				case 3:
					iVar0 = 899381934;
					break;
				
				case 4:
					iVar0 = 1709866683;
					break;
				
				case 5:
					iVar0 = -684126074;
					break;
			}
			break;
		
		case 1593441988:
			switch (iParam1)
			{
				case 0:
					iVar0 = 119648377;
					break;
				
				case 1:
					iVar0 = -696561875;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1023114086;
					break;
				
				case 4:
					iVar0 = -966439566;
					break;
			}
			break;
		
		case 584646201:
			switch (iParam1)
			{
				case 0:
					iVar0 = 834974250;
					break;
				
				case 1:
					iVar0 = 614078421;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1023114086;
					break;
				
				case 4:
					iVar0 = -1686714580;
					break;
			}
			break;
		
		case 324215364:
			switch (iParam1)
			{
				case 0:
					iVar0 = -884429072;
					break;
				
				case 1:
					iVar0 = 283556395;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1657815255;
					break;
				
				case 4:
					iVar0 = -1489156508;
					break;
				
				case 5:
					iVar0 = 1215999497;
					break;
			}
			break;
		
		case 736523883:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = 643254679;
					break;
				
				case 2:
					iVar0 = 889808635;
					break;
				
				case 3:
					iVar0 = 2043113590;
					break;
				
				case 4:
					iVar0 = 2076495324;
					break;
				
				case 5:
					iVar0 = -1023114086;
					break;
				
				case 6:
					iVar0 = 1019656791;
					break;
				
				case 7:
					iVar0 = 202788691;
					break;
				
				case 8:
					iVar0 = 663170192;
					break;
			}
			break;
		
		case -1074790547:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -1101075946;
					break;
				
				case 2:
					iVar0 = -1323216997;
					break;
				
				case 3:
					iVar0 = -604986051;
					break;
				
				case 4:
					iVar0 = 202788691;
					break;
				
				case 5:
					iVar0 = 2076495324;
					break;
				
				case 6:
					iVar0 = -1657815255;
					break;
				
				case 7:
					iVar0 = -1489156508;
					break;
				
				case 8:
					iVar0 = 1319990579;
					break;
			}
			break;
		
		case -2084633992:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -1614924820;
					break;
				
				case 2:
					iVar0 = -1861183855;
					break;
				
				case 3:
					iVar0 = -1167922891;
					break;
				
				case 4:
					iVar0 = 1967214384;
					break;
				
				case 5:
					iVar0 = 202788691;
					break;
				
				case 6:
					iVar0 = 2076495324;
					break;
				
				case 7:
					iVar0 = -1596416958;
					break;
				
				case 8:
					iVar0 = -2089531990;
					break;
				
				case 9:
					iVar0 = -660892072;
					break;
			}
			break;
		
		case -1357824103:
			switch (iParam1)
			{
				case 0:
					iVar0 = -91250417;
					break;
				
				case 1:
					iVar0 = -1899902599;
					break;
				
				case 2:
					iVar0 = 2076495324;
					break;
				
				case 3:
					iVar0 = -1439939148;
					break;
				
				case 4:
					iVar0 = -2089531990;
					break;
				
				case 5:
					iVar0 = 930927479;
					break;
			}
			break;
		
		case -1660422300:
			switch (iParam1)
			{
				case 0:
					iVar0 = -197857404;
					break;
				
				case 1:
					iVar0 = -2112517305;
					break;
				
				case 2:
					iVar0 = 1006677997;
					break;
				
				case 3:
					iVar0 = 202788691;
					break;
				
				case 4:
					iVar0 = -690308418;
					break;
			}
			break;
		
		case 2144741730:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -503336118;
					break;
				
				case 2:
					iVar0 = -691692330;
					break;
				
				case 3:
					iVar0 = 202788691;
					break;
				
				case 4:
					iVar0 = -1596416958;
					break;
				
				case 5:
					iVar0 = -1828795171;
					break;
			}
			break;
		
		case 487013001:
			switch (iParam1)
			{
				case 0:
					iVar0 = -435637410;
					break;
				
				case 1:
					iVar0 = 2076495324;
					break;
				
				case 2:
					iVar0 = -1562927653;
					break;
			}
			break;
		
		case -494615257:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1796727865;
					break;
				
				case 1:
					iVar0 = -2034401422;
					break;
				
				case 2:
					iVar0 = 202788691;
					break;
				
				case 3:
					iVar0 = 2076495324;
					break;
				
				case 4:
					iVar0 = -2089531990;
					break;
			}
			break;
		
		case 100416529:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1681506167;
					break;
				
				case 1:
					iVar0 = -767279652;
					break;
				
				case 2:
					iVar0 = -1135289737;
					break;
				
				case 3:
					iVar0 = -1489156508;
					break;
				
				case 4:
					iVar0 = 1077065191;
					break;
			}
			break;
		
		case 205991906:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = 1198478068;
					break;
				
				case 2:
					iVar0 = -767279652;
					break;
				
				case 3:
					iVar0 = -1135289737;
					break;
			}
			break;
		
		case -1568386805:
			switch (iParam1)
			{
				case 0:
					iVar0 = 202788691;
					break;
				
				case 1:
					iVar0 = 2076495324;
					break;
				
				case 2:
					iVar0 = -1439939148;
					break;
			}
			break;
		
		case 1119849093:
			switch (iParam1)
			{
				case 0:
					iVar0 = -924946682;
					break;
			}
			break;
		
		case -270015777:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1928132688;
					break;
				
				case 1:
					iVar0 = -1152981993;
					break;
				
				case 2:
					iVar0 = 2076495324;
					break;
				
				case 3:
					iVar0 = -1657815255;
					break;
				
				case 4:
					iVar0 = -1489156508;
					break;
				
				case 5:
					iVar0 = 663517359;
					break;
			}
			break;
		
		case -1654528753:
			switch (iParam1)
			{
				case 0:
					iVar0 = 202788691;
					break;
				
				case 1:
					iVar0 = 2076495324;
					break;
				
				case 2:
					iVar0 = -1489156508;
					break;
			}
			break;
		
		case -1716589765:
			switch (iParam1)
			{
				case 0:
					iVar0 = 580369945;
					break;
				
				case 1:
					iVar0 = -640439150;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1489156508;
					break;
				
				case 4:
					iVar0 = 2008591151;
					break;
			}
			break;
		
		case 171789620:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1125642654;
					break;
				
				case 1:
					iVar0 = 860508675;
					break;
				
				case 2:
					iVar0 = 1857603803;
					break;
				
				case 3:
					iVar0 = 2076495324;
					break;
				
				case 4:
					iVar0 = -1439939148;
					break;
				
				case 5:
					iVar0 = 202788691;
					break;
			}
			break;
		
		case 2017895192:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2052698631;
					break;
			}
			break;
		
		case 2132975508:
			switch (iParam1)
			{
				case 0:
					iVar0 = -979292288;
					break;
				
				case 1:
					iVar0 = -1284994289;
					break;
				
				case 2:
					iVar0 = 2076495324;
					break;
				
				case 3:
					iVar0 = -1439939148;
					break;
				
				case 4:
					iVar0 = -2089531990;
					break;
				
				case 5:
					iVar0 = 202788691;
					break;
				
				case 6:
					iVar0 = -1470645128;
					break;
			}
			break;
		
		case -1076751822:
			switch (iParam1)
			{
				case 0:
					iVar0 = -125817127;
					break;
				
				case 1:
					iVar0 = 2063610803;
					break;
				
				case 2:
					iVar0 = -2144080721;
					break;
			}
			break;
		
		case -1063057011:
			switch (iParam1)
			{
				case 0:
					iVar0 = -959978111;
					break;
				
				case 1:
					iVar0 = 2089537806;
					break;
				
				case 2:
					iVar0 = 1801039530;
					break;
				
				case 3:
					iVar0 = 2076495324;
					break;
				
				case 4:
					iVar0 = -1596416958;
					break;
				
				case 5:
					iVar0 = -1489156508;
					break;
				
				case 6:
					iVar0 = 202788691;
					break;
				
				case 7:
					iVar0 = 1929467122;
					break;
			}
			break;
		
		case -656458692:
			switch (iParam1)
			{
				case 0:
					iVar0 = -971770235;
					break;
				
				case 1:
					iVar0 = -287703709;
					break;
				
				case 2:
					iVar0 = 1351683121;
					break;
				
				case 3:
					iVar0 = -1755194916;
					break;
				
				case 4:
					iVar0 = 2112683568;
					break;
				
				case 5:
					iVar0 = 1062111910;
					break;
				
				case 6:
					iVar0 = 146278587;
					break;
				
				case 7:
					iVar0 = -494162961;
					break;
				
				case 8:
					iVar0 = 2062808965;
					break;
			}
			break;
		
		case -619010992:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1198425599;
					break;
				
				case 1:
					iVar0 = -1188271751;
					break;
				
				case 2:
					iVar0 = -1444295948;
					break;
				
				case 3:
					iVar0 = -1023114086;
					break;
			}
			break;
		
		case -538741184:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1530822070;
					break;
				
				case 1:
					iVar0 = -409758110;
					break;
			}
			break;
		
		case -1045183535:
			switch (iParam1)
			{
				case 0:
					iVar0 = -377062173;
					break;
				
				case 1:
					iVar0 = 384708672;
					break;
				
				case 2:
					iVar0 = -1802258419;
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2067221805;
					break;
				
				case 1:
					iVar0 = -1820405577;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_66(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var43))
						{
							if (!func_63(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_66(int iParam0, var uParam1)
{
	iVar1 = FILES::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_67(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_68(int iParam0)
{
	iVar0 = func_48(iParam0);
	if (func_39(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_111638.f_2358.f_539.f_294[iVar0] = PED::GET_PED_ARMOUR(iParam0);
	}
}

void func_69(var uParam0, int iParam1)
{
	*uParam0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	uParam0->f_3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	uParam0->f_5 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		uParam0->f_4 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(912405861) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (MISC::IS_BIT_SET(Global_76870, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (MISC::IS_BIT_SET(Global_76870, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (MISC::IS_BIT_SET(Global_76870, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (MISC::IS_BIT_SET(Global_76870, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_73(&iVar0))
		{
			if (func_71(iVar0, &Var1, &uVar4))
			{
				Var1.z = (Var1.z + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_227();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_70(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_70(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param4, sParam3);
		if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			return 0;
		}
		iVar1 = INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_71(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_72(*uParam1, 0f, 0f, 0f, 0);
}

bool func_72(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

int func_73(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_96())
		{
			*uParam0 = func_79(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 6, -1, 0, 1, -1);
			if (func_78(*uParam0) && !func_74(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_74(int iParam0)
{
	return func_75(iParam0, 0, 1);
}

int func_75(int iParam0, int iParam1, bool bParam2)
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
		if (func_77() == 0)
		{
			return MISC::IS_BIT_SET(func_52(func_76(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_76(int iParam0)
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

int func_77()
{
	return Global_30768;
}

int func_78(int iParam0)
{
	return func_75(iParam0, 5, 1);
}

int func_79(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		if (iParam3 == 6 || iParam3 == func_95(iVar0))
		{
			if (!bParam5 || func_94(iVar0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_80(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_80(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_91(Global_100839);
			break;
		
		case 46:
			if (Global_1590374 != func_90())
			{
				if (func_89(Global_1590374))
				{
					return func_82(2, 2);
				}
				else if (func_81(Global_1590374))
				{
					return func_82(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1696048;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_81(int iParam0)
{
	if (iParam0 != func_90())
	{
		if ((MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 0) || MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 1)) || MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_82(int iParam0, int iParam1)
{
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590374 != func_90())
	{
		if (iParam1 == 3)
		{
			if (func_83(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (MISC::IS_BIT_SET(Global_1590535[Global_1590374].f_274.f_259, 4))
			{
				if (func_83(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (MISC::IS_BIT_SET(Global_1590535[Global_1590374].f_274.f_259, 5))
			{
				if (func_83(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_83(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	if (!func_88(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_88(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_86(iParam0) };
	}
	else
	{
		Var12 = { func_85(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_84(Var18, -Var0.f_3.f_2) };
	Var18 = { func_84(Var18, Var6.f_3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_84(struct<3> Param0, float fParam3)
{
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.x = ((Param0.x * fVar4) - (Param0.y * fVar3));
	Var0.y = ((Param0.x * fVar3) + (Param0.y * fVar4));
	Var0.z = Param0.z;
	return Var0;
}

struct<6> func_85(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_86(int iParam0)
{
	return func_87(iParam0);
}

struct<6> func_87(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_88(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_89(int iParam0)
{
	if (iParam0 != func_90())
	{
		if ((MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 3) || MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 4)) || MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_90()
{
	return -1;
}

Vector3 func_91(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_92() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_92()
{
	return func_93(PLAYER::PLAYER_ID());
}

var func_93(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2425662[iParam0].f_310.f_3, 28, 31);
}

int func_94(int iParam0)
{
	return func_75(iParam0, 0, 0);
}

int func_95(int iParam0)
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

bool func_96()
{
	return Global_98796.f_345 > 0;
}

var func_97()
{
	func_107(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_106(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_105(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_100(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_99(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_98(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_98(var uParam0, int iParam1)
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

void func_99(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_100(var uParam0, int iParam1)
{
	iVar0 = func_104(*uParam0);
	iVar1 = func_102(*uParam0);
	if (iParam1 < 1 || iParam1 > func_101(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_101(int iParam0, int iParam1)
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

var func_102(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_103(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_103(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_104(int iParam0)
{
	return iParam0 & 15;
}

void func_105(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_106(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_107(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_108(int iParam0)
{
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(9, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(9, &cVar1);
	}
}

void func_109(char* sParam0, var uParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_95814))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_95814, 0, 0, 0, 1, 0);
		StringCopy(&Global_95814, "", 64);
	}
	StringCopy(&Global_95814, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, uParam1, iParam2, func_217(0));
}

struct<2> func_110(int iParam0)
{
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

void func_111(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_112(uParam1, "Abigail1", func_12(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 1:
			func_112(uParam1, "Abigail2", func_12(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 2:
			func_112(uParam1, "Barry1", func_12(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 3:
			func_112(uParam1, "Barry2", func_12(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		
		case 4:
			func_112(uParam1, "Barry3", func_12(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 5:
			func_112(uParam1, "Barry3A", func_12(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 6:
			func_112(uParam1, "Barry3C", func_12(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 7:
			func_112(uParam1, "Barry4", func_12(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_113(iParam0), 0, 0);
			break;
		
		case 8:
			func_112(uParam1, "Dreyfuss1", func_12(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 9:
			func_112(uParam1, "Epsilon1", func_12(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 10:
			func_112(uParam1, "Epsilon2", func_12(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 11:
			func_112(uParam1, "Epsilon3", func_12(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 12:
			func_112(uParam1, "Epsilon4", func_12(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 13:
			func_112(uParam1, "Epsilon5", func_12(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 14:
			func_112(uParam1, "Epsilon6", func_12(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 15:
			func_112(uParam1, "Epsilon7", func_12(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 16:
			func_112(uParam1, "Epsilon8", func_12(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 17:
			func_112(uParam1, "Extreme1", func_12(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 18:
			func_112(uParam1, "Extreme2", func_12(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 19:
			func_112(uParam1, "Extreme3", func_12(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 20:
			func_112(uParam1, "Extreme4", func_12(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 21:
			func_112(uParam1, "Fanatic1", func_12(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_113(iParam0), 1, 0);
			break;
		
		case 22:
			func_112(uParam1, "Fanatic2", func_12(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_113(iParam0), 1, 0);
			break;
		
		case 23:
			func_112(uParam1, "Fanatic3", func_12(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_113(iParam0), 0, 1);
			break;
		
		case 24:
			func_112(uParam1, "Hao1", func_12(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_113(iParam0), 0, 1);
			break;
		
		case 25:
			func_112(uParam1, "Hunting1", func_12(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 26:
			func_112(uParam1, "Hunting2", func_12(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 27:
			func_112(uParam1, "Josh1", func_12(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 28:
			func_112(uParam1, "Josh2", func_12(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		
		case 29:
			func_112(uParam1, "Josh3", func_12(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		
		case 30:
			func_112(uParam1, "Josh4", func_12(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 31:
			func_112(uParam1, "Maude1", func_12(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 32:
			func_112(uParam1, "Minute1", func_12(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 33:
			func_112(uParam1, "Minute2", func_12(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 34:
			func_112(uParam1, "Minute3", func_12(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 35:
			func_112(uParam1, "MrsPhilips1", func_12(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 36:
			func_112(uParam1, "MrsPhilips2", func_12(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 37:
			func_112(uParam1, "Nigel1", func_12(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 38:
			func_112(uParam1, "Nigel1A", func_12(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		
		case 39:
			func_112(uParam1, "Nigel1B", func_12(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_113(iParam0), 1, 1);
			break;
		
		case 40:
			func_112(uParam1, "Nigel1C", func_12(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_113(iParam0), 1, 1);
			break;
		
		case 41:
			func_112(uParam1, "Nigel1D", func_12(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_113(iParam0), 1, 1);
			break;
		
		case 42:
			func_112(uParam1, "Nigel2", func_12(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		
		case 43:
			func_112(uParam1, "Nigel3", func_12(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		
		case 44:
			func_112(uParam1, "Omega1", func_12(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 45:
			func_112(uParam1, "Omega2", func_12(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 46:
			func_112(uParam1, "Paparazzo1", func_12(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 47:
			func_112(uParam1, "Paparazzo2", func_12(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 48:
			func_112(uParam1, "Paparazzo3", func_12(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 49:
			func_112(uParam1, "Paparazzo3A", func_12(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 50:
			func_112(uParam1, "Paparazzo3B", func_12(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 51:
			func_112(uParam1, "Paparazzo4", func_12(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 52:
			func_112(uParam1, "Rampage1", func_12(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 54:
			func_112(uParam1, "Rampage3", func_12(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 55:
			func_112(uParam1, "Rampage4", func_12(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 56:
			func_112(uParam1, "Rampage5", func_12(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 53:
			func_112(uParam1, "Rampage2", func_12(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 57:
			func_112(uParam1, "TheLastOne", func_12(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 58:
			func_112(uParam1, "Tonya1", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 59:
			func_112(uParam1, "Tonya2", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 60:
			func_112(uParam1, "Tonya3", func_12(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 61:
			func_112(uParam1, "Tonya4", func_12(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 62:
			func_112(uParam1, "Tonya5", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_112(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
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
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_114(var uParam0)
{
	if (func_144(&(uParam0->f_1)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_9)))
		{
			func_134(1);
			func_132(uParam0, 1, func_133(*uParam0));
		}
		if (uParam0->f_27)
		{
			if (func_131(*uParam0))
			{
				while (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					func_191();
					SYSTEM::WAIT(0);
				}
			}
		}
		func_115(*uParam0);
		uVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&(uParam0->f_1), uParam0, 61, 35000);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_371("Initial cutscene loaded and passing to RC mission.");
			CUTSCENE::_0x8D9DF6ECA8768583(uVar0);
		}
		else
		{
			func_371("Initial cutscene wasn't loaded in time to pass to RC mission.");
			CUTSCENE::REMOVE_CUTSCENE();
		}
		return 1;
	}
	return 0;
}

void func_115(int iParam0)
{
	func_130();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, 0);
	}
	if (func_129(iParam0))
	{
		PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0);
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
	HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
	HUD::CLEAR_ADDITIONAL_TEXT(3, 1);
	HUD::CLEAR_ADDITIONAL_TEXT(2, 1);
	if (Global_42596 == 1)
	{
		if (func_127(PLAYER::PLAYER_PED_ID()))
		{
			func_118(PLAYER::PLAYER_PED_ID());
		}
	}
	if (!func_208())
	{
		if (iParam0 < 63)
		{
			func_116(iParam0);
			Var0 = { func_12(iParam0) };
			HUD::SET_MISSION_NAME(1, &Var0);
		}
	}
}

void func_116(int iParam0)
{
	if (iParam0 < 63)
	{
		func_117();
		Global_76877 = iParam0;
		Global_76876 = 0;
		Global_76879 = 7;
	}
}

void func_117()
{
	if (Global_76876 != 6)
	{
	}
	if (Global_76881)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_76881 = 0;
		Global_22350.f_8417 = 0;
	}
	Global_76876 = 6;
	Global_76878 = -1;
	Global_76877 = -1;
}

void func_118(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_126(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42383[iVar0];
		func_121(1, iVar1, 1);
		return;
	}
	iVar2 = func_120(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_119(iVar2);
}

void func_119(int iParam0)
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

int func_120(int iParam0)
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

void func_121(int iParam0, int iParam1, int iParam2)
{
	func_122(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_122(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_124(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_123();
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

int func_123()
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

int func_124(int iParam0, int iParam1, int iParam2)
{
	if (func_125(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_125(int iParam0, int iParam1, int iParam2)
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

int func_126(int iParam0)
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

int func_127(int iParam0)
{
	if (func_128(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_128(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 60:
		case 61:
			return 0;
			break;
	}
	return 1;
}

void func_130()
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

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 16:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
			return 0;
			break;
	}
	return 1;
}

void func_132(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_128(uParam0->f_28[iVar0]))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_128(uParam0->f_35[iVar0]))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_128(uParam0->f_41[iVar0]))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_41[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), iParam1);
		if (bParam2)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 1);
		}
	}
}

int func_133(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return 0;
			break;
	}
	return 1;
}

void func_134(bool bParam0)
{
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	if (!PLAYER::IS_PLAYER_DEAD(uVar0))
	{
		if (bParam0)
		{
		}
		PLAYER::SET_PLAYER_CONTROL(uVar0, bParam0, 16);
		PLAYER::SET_PLAYER_CONTROL(uVar0, bParam0, 32);
	}
	func_135(1, 1, 0, 0, 0, 0);
}

void func_135(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_143(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_142())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_141(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_143(0);
		HUD::THEFEED_RESUME();
		Global_61518 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_141(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_139(PLAYER::PLAYER_ID())) && !func_137(PLAYER::PLAYER_ID(), 0)) && !func_136()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_139(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_76620 = 0;
	}
}

bool func_136()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 14);
}

bool func_137(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_138(-1, 0) == 8;
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

int func_138(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_54();
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

int func_139(int iParam0)
{
	if (func_137(iParam0, 0))
	{
		return 1;
	}
	if (func_140())
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

bool func_140()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_141(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_142()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_143(int iParam0)
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

int func_144(char* sParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		SCRIPT::REQUEST_SCRIPT(uParam0);
		while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
		{
			SCRIPT::REQUEST_SCRIPT(sParam0);
			SYSTEM::WAIT(0);
		}
		return 1;
	}
	func_371("Attempting to launch invalid script file [TERMINATING]");
	return 0;
}

void func_145()
{
	Global_19671 = 0;
	func_146();
}

void func_146()
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

int func_147()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_148(var uParam0, bool bParam1)
{
	if (Global_76622)
	{
		func_371("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	func_111(*uParam0, &Var0);
	if ((func_190(*uParam0) || func_188(*uParam0)) || Global_76867 == 1)
	{
		return 1;
	}
	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		func_371("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (func_180(*uParam0))
	{
		if (*uParam0 == 19)
		{
			func_179(uParam0->f_28[0]);
		}
		func_371("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (uParam0->f_25 == 1)
	{
		if (!func_159(uParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_16 == 0)
	{
		if (!func_159(uParam0, 0, 0))
		{
			return 0;
		}
	}
	if (((((*uParam0 == 16 || *uParam0 == 9) || *uParam0 == 18) || *uParam0 == 22) || *uParam0 == 32) || *uParam0 == 51)
	{
		if (!func_156(uParam0, 1, 1))
		{
			if (*uParam0 == 16)
			{
				func_155(uParam0);
			}
			else
			{
				func_153(uParam0);
			}
			return 0;
		}
	}
	else if (*uParam0 == 24)
	{
		if (!func_156(uParam0, 0, 1))
		{
			func_153(uParam0);
			return 0;
		}
	}
	else if (*uParam0 == 6)
	{
		if (!func_156(uParam0, 0, 1))
		{
			return 0;
		}
	}
	else if (uParam0->f_26 == 1)
	{
		if (!func_156(uParam0, 1, 0))
		{
			func_153(uParam0);
			return 0;
		}
	}
	else if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (!func_156(uParam0, 0, 0))
		{
			func_153(uParam0);
			return 0;
		}
	}
	if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (func_128(uParam0->f_35[0]))
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(uParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, 0, 1, 0))
			{
				return 0;
			}
		}
	}
	if (*uParam0 == 10)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, uParam0->f_17[0], 8f))
		{
			func_371("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return 0;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!MISC::IS_BIT_SET(Var0.f_26, func_227()))
		{
			func_371("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return 0;
		}
	}
	if (func_152(&(uParam0->f_48)) && bParam1)
	{
		func_149(uParam0->f_28[0], &(uParam0->f_48), *uParam0);
	}
	return 1;
}

void func_149(int iParam0, var uParam1, int iParam2)
{
	if (func_128(iParam0))
	{
		switch (uParam1->f_3)
		{
			case 1:
				if (func_152(uParam1))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam1))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
						if (iParam2 != 21)
						{
							if (func_72(uParam1->f_5, 0f, 0f, 0f, 0))
							{
								TASK::TASK_PLAY_ANIM(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&uVar0);
								if (func_151(uParam1))
								{
									TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								else
								{
									TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar0);
								TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
							}
						}
						else
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 3);
						}
						uParam1->f_3 = 2;
					}
					else
					{
						uParam1->f_3 = 0;
					}
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 2:
				if (!func_151(uParam1) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, *uParam1, uParam1->f_2, 3))
				{
					if (func_150(iParam2) && !PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 25f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 0);
						uParam1->f_3 = 5;
					}
					else if ((func_151(uParam1) && uParam1->f_4 == 0) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
			
			case 3:
				TASK::OPEN_SEQUENCE_TASK(&uVar1);
				if (func_72(uParam1->f_5, 0f, 0f, 0f, 0))
				{
					TASK::TASK_PLAY_ANIM(0, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
				}
				else
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, 0, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(uVar1);
				TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar1);
				TASK::CLEAR_SEQUENCE_TASK(&uVar1);
				uParam1->f_4 = 1;
				if (func_150(iParam2))
				{
					uParam1->f_3 = 2;
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 5:
				if (!func_150(iParam2) || PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 10f))
				{
					if (func_72(uParam1->f_5, 0f, 0f, 0f, 0))
					{
						TASK::TASK_PLAY_ANIM(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
					}
					else
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
					}
					uParam1->f_3 = 2;
				}
				break;
			}
	}
}

int func_150(int iParam0)
{
	if (iParam0 == 17 || iParam0 == 20)
	{
		return 1;
	}
	return 0;
}

int func_151(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		return 0;
	}
	return 1;
}

int func_152(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(*uParam0) || MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
	{
		return 0;
	}
	return 1;
}

void func_153(var uParam0)
{
	if (*uParam0 == 52)
	{
		func_154(&(uParam0->f_41[1]));
		func_154(&(uParam0->f_41[2]));
	}
	if (func_128(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_127(uParam0->f_28[iVar0]))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_28[iVar0], 0))
				{
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_28[iVar0], 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], 0);
				}
				PED::SET_PED_KEEP_TASK(uParam0->f_28[iVar0], 1);
				if (*uParam0 == 34)
				{
					if (func_128(uParam0->f_41[0]))
					{
						ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], 1, 0);
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 0);
					}
				}
				switch (*uParam0)
				{
					case 19:
						func_179(uParam0->f_28[iVar0]);
						break;
					
					case 8:
						STREAMING::REQUEST_ANIM_DICT("rcmcollect_paperleadinout@");
						while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmcollect_paperleadinout@"))
						{
							SYSTEM::WAIT(0);
						}
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						TASK::TASK_PLAY_ANIM(0, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0, 0, 0, 0);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						break;
					
					case 0:
					case 1:
						STREAMING::REQUEST_ANIM_DICT("rcmabigail");
						while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmabigail"))
						{
							SYSTEM::WAIT(0);
						}
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						TASK::TASK_PLAY_ANIM(0, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0, 0, 0, 0);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						break;
					
					case 32:
						STREAMING::REQUEST_ANIM_DICT("rcmminute1");
						while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmminute1"))
						{
							SYSTEM::WAIT(0);
						}
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						if (iVar0 == 0)
						{
							TASK::TASK_PLAY_ANIM(0, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(0, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						break;
					
					case 24:
						STREAMING::REQUEST_ANIM_DICT("special_ped@hao@base");
						while (!STREAMING::HAS_ANIM_DICT_LOADED("special_ped@hao@base"))
						{
							SYSTEM::WAIT(0);
						}
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						TASK::TASK_PLAY_ANIM(0, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0, 0, 0, 0);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						break;
					
					default:
						TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_28[iVar0]);
						TASK::TASK_SMART_FLEE_PED(uParam0->f_28[iVar0], PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_154(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0))
		{
			ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
		}
		OBJECT::DELETE_OBJECT(uParam0);
	}
}

void func_155(var uParam0)
{
	if (func_128(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_127(uParam0->f_28[iVar0]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_28[iVar0], 1, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[iVar0], 0);
				PED::SET_PED_KEEP_TASK(uParam0->f_28[iVar0], 1);
				TASK::TASK_COMBAT_PED(uParam0->f_28[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_28[iVar0]));
			}
			iVar0++;
		}
	}
}

int func_156(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		iVar1 = (uParam0->f_35 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (func_127(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[iVar0]))
			{
				if (ENTITY::IS_ENTITY_DEAD(uParam0->f_35[iVar0], 0))
				{
					func_371("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return 0;
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_35[iVar0], 0))
				{
					func_371("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return 0;
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_35[iVar0], PLAYER::PLAYER_PED_ID(), 0))
				{
					func_371("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return 0;
				}
				if (ENTITY::GET_ENTITY_HEALTH(uParam0->f_35[iVar0]) < 850)
				{
					func_371("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return 0;
				}
				if (bParam2)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_35[iVar0], PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 5f)
						{
							func_371("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return 0;
						}
						uVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (func_158(uVar2))
						{
							if (ENTITY::GET_ENTITY_MODEL(uVar2) == -1323100960 || ENTITY::GET_ENTITY_MODEL(iVar2) == -442313018)
							{
								if (func_158(uParam0->f_35[iVar0]))
								{
									if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar2, uParam0->f_35[iVar0]))
									{
										func_371("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return 0;
									}
								}
							}
						}
					}
					else
					{
						iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (func_158(iVar3))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_35[iVar0], iVar3) && ENTITY::GET_ENTITY_SPEED(iVar3) > 6f)
							{
								func_371("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return 0;
							}
						}
						if (*uParam0 == 16)
						{
							if (func_157(PLAYER::PLAYER_PED_ID(), uParam0->f_35[iVar0]))
							{
								func_371("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
								return 0;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_157(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_158(int iParam0)
{
	if (func_128(uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_159(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		iVar1 = (uParam0->f_28 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (*uParam0 == 16)
	{
		iParam2 = 1;
	}
	if (*uParam0 == 30)
	{
		iParam2 = 1;
	}
	if (func_127(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_28[iVar0]))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[iVar0]))
						{
							if (iParam2 == 0)
							{
								func_153(uParam0);
							}
							else
							{
								func_155(uParam0);
							}
							if (func_147())
							{
								func_145();
							}
							func_371("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return 0;
						}
					}
					if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam0->f_28[iVar0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_28[iVar0])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(uParam0->f_28[iVar0]))
					{
						if (iParam2 == 0)
						{
							func_153(uParam0);
						}
						else
						{
							func_155(uParam0);
						}
						func_371("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return 0;
					}
					if (PED::IS_PED_RAGDOLL(uParam0->f_28[iVar0]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_28[iVar0], PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam2 == 0)
							{
								func_153(uParam0);
							}
							else
							{
								func_155(uParam0);
							}
							func_371("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return 0;
						}
					}
					if (func_178(*uParam0))
					{
						if (!func_202(*uParam0))
						{
							if (func_173(uParam0->f_28[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									func_153(uParam0);
								}
								else
								{
									func_155(uParam0);
								}
								func_371("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return 0;
							}
						}
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[iVar0], 1), 15f))
						{
							if (iParam2 == 0)
							{
								func_153(uParam0);
							}
							else
							{
								func_155(uParam0);
							}
							func_371("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (func_161(uParam0->f_28[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								func_153(uParam0);
							}
							else
							{
								func_155(uParam0);
							}
							func_371("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return 0;
						}
					}
					if (!func_160(*uParam0))
					{
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[iVar0], 1), 5f))
						{
							if (iParam2 == 0)
							{
								func_153(uParam0);
							}
							else
							{
								func_155(uParam0);
							}
							func_371("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							if (iParam2 == 0)
							{
								func_153(uParam0);
							}
							else
							{
								func_155(uParam0);
							}
							func_371("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return 0;
						}
					}
				}
				else
				{
					func_371("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 34)
					{
						if (func_128(uParam0->f_41[0]))
						{
							ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], 1, 0);
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 0);
						}
					}
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_160(int iParam0)
{
	if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 52) || iParam0 == 53)
	{
		return 1;
	}
	return 0;
}

int func_161(int iParam0, float fParam1)
{
	if (func_128(PLAYER::PLAYER_PED_ID()) && func_128(iParam0))
	{
		if (func_172(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_162(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_162(int iParam0, float fParam1)
{
	return func_163(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_163(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	iVar4 = func_171(iParam0, iParam1);
	if (!func_128(iParam0) || !func_128(iParam1))
	{
		if (iVar4 != -1)
		{
			func_170(&(Local_37[iVar4]));
		}
		return 0;
	}
	if (!func_167(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_166();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_37[iVar4].f_1 = iParam0;
		Local_37[iVar4].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_164(&(Local_37[iVar4]), Var1, iParam1, &(Local_37[iVar4].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_37[iVar4].f_3) < iParam4);
}

int func_164(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	iVar7 = 0;
	if (!func_128(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_165(iParam4, iParam7) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (ENTITY::IS_ENTITY_A_PED(iVar7))
	{
		func_128(iVar7);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7) == iParam4)
		{
			if (bLocal_78)
			{
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = MISC::GET_GAME_TIMER();
			return 1;
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar7))
	{
		func_128(iVar7);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam4, 0))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7) == PED::GET_VEHICLE_PED_IS_IN(iParam4, 0))
			{
				if (bLocal_78)
				{
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_165(int iParam0, int iParam1)
{
	if (iParam1 == 7)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return ENTITY::GET_ENTITY_COORDS(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 36864, 0f, 0f, 0f);
	}
	return ENTITY::GET_ENTITY_COORDS(iParam0, 1);
}

int func_166()
{
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if ((Local_37[iVar0] == 0 && Local_37[iVar0].f_1 == 0) && Local_37[iVar0].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_167(int iParam0, int iParam1, float fParam2, int iParam3)
{
	Var0 = { func_169(ENTITY::GET_ENTITY_COORDS(iParam1, 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		Var3 = { func_169(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_168(Var3, Var0);
	if (fVar6 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_168(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.x * Param3.x) + (Param0.y * Param3.y)) + (Param0.z * Param3.z));
}

Vector3 func_169(struct<3> Param0)
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

void func_170(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_171(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if (Local_37[iVar0].f_1 == iParam0 && Local_37[iVar0].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_172(var uParam0)
{
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
	{
		return 1;
	}
	return 0;
}

int func_173(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_128(PLAYER::PLAYER_PED_ID()) && func_128(uParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, 1);
		if (iVar2 == 883325847)
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_177(uParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_174(uParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_177(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_174(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_174(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	Var3 = { Var0 };
	Var0.x = (Var0.x - fParam1);
	Var0.y = (Var0.y - fParam1);
	Var0.z = (Var0.z - fParam1);
	Var3.x = (Var3.x + fParam1);
	Var3.y = (Var3.y + fParam1);
	Var3.z = (Var3.z + fParam1);
	if (bParam2)
	{
		if (((MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), -1813897027, fParam1, 1) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), 615608432, fParam1, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), -37975472, fParam1, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), 741814745, 5f, 1))
		{
			if (bParam3)
			{
				if (func_175(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_175(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (MISC::IS_PROJECTILE_IN_AREA(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_175(var uParam0, float fParam1)
{
	if ((((MISC::_GET_PROJECTILE_NEAR_PED(uParam0, -1813897027, fParam1, &Var1, &uVar0, 0) || MISC::_GET_PROJECTILE_NEAR_PED(uParam0, -37975472, fParam1, &Var1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(uParam0, -1600701090, fParam1, &Var1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(uParam0, 741814745, fParam1, &Var1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(uParam0, 615608432, fParam1, &Var1, &uVar0, 0))
	{
		if (func_176(uParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_176(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	Var0 = { func_169(Param1 - ENTITY::GET_ENTITY_COORDS(uParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		Var3 = { func_169(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_168(Var3, Var0);
	if (fVar6 <= SYSTEM::COS((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_177(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0)
{
	if (((((iParam0 == 2 || iParam0 == 3) || iParam0 == 34) || iParam0 == 11) || iParam0 == 52) || iParam0 == 53)
	{
		return 0;
	}
	return 1;
}

void func_179(int iParam0)
{
	if (func_128(PLAYER::PLAYER_PED_ID()) && func_128(uParam0))
	{
		STREAMING::REQUEST_ANIM_DICT("rcmextreme3");
		while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmextreme3"))
		{
			SYSTEM::WAIT(0);
		}
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_PLAY_ANIM(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0, 0, 0, 0);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
		TASK::TASK_PARACHUTE_TO_TARGET(0, 64.6f, -737.8f, 44.2f);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(uParam0, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	}
}

int func_180(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_186();
	}
	if (iParam0 == -1)
	{
		return 1;
	}
	if (func_190(iParam0))
	{
		return 0;
	}
	if (!func_184(4))
	{
		if (func_188(iParam0))
		{
		}
		else
		{
			return 1;
		}
	}
	if (func_183() && !func_182())
	{
		return 1;
	}
	if (!func_181(iParam0))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
			{
				return 1;
			}
		}
	}
	if (!MISC::IS_BIT_SET(Global_111638.f_18569[iParam0], 2))
	{
		return 1;
	}
	return 0;
}

int func_181(int iParam0)
{
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 41) || iParam0 == 60) || iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_182()
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

int func_183()
{
	if (Global_95666 != -1)
	{
		return MISC::IS_BIT_SET(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

bool func_184(int iParam0)
{
	return func_185(iParam0, Global_41431);
}

int func_185(int iParam0, int iParam1)
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

int func_186()
{
	return func_187(SCRIPT::GET_THIS_SCRIPT_NAME(), 0);
}

int func_187(var uParam0, int iParam1)
{
	iVar33 = MISC::GET_HASH_KEY(uParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_111(iVar0, &uVar1);
		if (MISC::GET_HASH_KEY(uVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

int func_188(int iParam0)
{
	if ((func_189() && Global_98744.f_11 == 6) && iParam0 == func_187(&(Global_98744.f_3), 0))
	{
		return 1;
	}
	return 0;
}

int func_189()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return 0;
	}
	return 1;
}

int func_190(int iParam0)
{
	if (func_217(0))
	{
		if (Global_76868.f_1 == 7)
		{
			if (Global_76868 == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_191()
{
	func_196(0);
	func_195();
	func_192();
}

void func_192()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (func_193(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 10.5f, 1, 1056964608, 0, 1, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) != 1)
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
		}
	}
}

int func_193(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 116, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 117, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 118, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 119, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 352, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 131, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 132, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 123, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 126, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 129, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 130, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 133, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 134, 1);
	CAM::_0x17FCA7199A530203();
	func_194(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_29) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_194(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
	{
		if (VEHICLE::_GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::_IS_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::_SET_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0, 0);
			}
		}
	}
}

void func_195()
{
	PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
}

void func_196(int iParam0)
{
	if (func_201())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_200(0))
		{
			func_197(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

void func_197(int iParam0)
{
	if (func_201())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_199())
		{
			func_198(1, 1);
		}
		else
		{
			func_198(0, 0);
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
	if (!func_142())
	{
		Global_19486.f_1 = 3;
	}
}

void func_198(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_200(0))
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

bool func_199()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

int func_200(int iParam0)
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

bool func_201()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

int func_202(int iParam0)
{
	if ((((iParam0 == 52 || iParam0 == 53) || iParam0 == 54) || iParam0 == 55) || iParam0 == 56)
	{
		return 1;
	}
	return 0;
}

int func_203(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_186();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_205(&(Global_110725[iParam0].f_9), 1, 4, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	func_204(iParam0);
	return 1;
}

void func_204(int iParam0)
{
	Global_110725[iParam0].f_4 = 1;
	Global_110725[iParam0].f_5 = 0;
	Global_110725[iParam0].f_6 = 0;
	Global_110725[iParam0] = 0;
}

int func_205(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_207(0))
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
		if (!func_184(iParam2))
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
			func_206(uParam0, iParam4);
		}
	}
	return 2;
}

void func_206(var uParam0, int iParam1)
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

int func_207(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_184(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_208()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return 1;
	}
	return 0;
}

int func_209(int iParam0)
{
	if (Global_76622)
	{
		func_371("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_111638.f_9080 && !func_217(1))
	{
		func_371("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_210(iParam0))
	{
		Global_110725[iParam0].f_1 = 1;
		func_371("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_98744.f_11 == 6)
	{
		if (Global_98744 < 9)
		{
			func_111(iParam0, &sVar0);
			if (MISC::ARE_STRINGS_EQUAL(&(Global_98744.f_3), sVar0))
			{
				func_371("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1737190692) == 0)
	{
		Global_110725[iParam0].f_1 = 1;
		func_371("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_210(int iParam0)
{
	func_111(iParam0, &uVar0);
	if (!func_184(4))
	{
		if (func_188(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_183() && !func_182())
	{
		return 0;
	}
	if (func_216(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = func_186();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_190(iParam0))
	{
		if (!func_215(iParam0))
		{
			return 0;
		}
		if (!func_214(iParam0))
		{
			return 0;
		}
		if (func_213(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_211(5))
		{
			Global_110725[iParam0].f_3 = 0;
		}
	}
	if (Global_110725[iParam0].f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_211(int iParam0)
{
	if (Global_98796.f_343 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_211(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_212(iParam0, &sVar1);
		iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_93782[iParam0].f_3, &sVar1);
		if (iVar9 != 0 && Global_98796.f_343 == iVar9)
		{
			return 1;
		}
	}
	return 0;
}

bool func_212(int iParam0, char* sParam1)
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !MISC::ARE_STRINGS_EQUAL(sParam1, "");
}

bool func_213(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_111638.f_18569[iParam0], 3);
}

bool func_214(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_111638.f_18569[iParam0], 2);
}

bool func_215(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_111638.f_18569[iParam0], 0);
}

int func_216(int iParam0)
{
	if (func_181(iParam0))
	{
		return 0;
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_217(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

char* func_218(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Rampage1";
		
		case 1:
			return "Rampage3";
		
		case 2:
			return "Rampage4";
		
		case 3:
			return "Rampage5";
		
		case 4:
			return "Rampage2";
		
		default:
	}
	return "";
}

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 52;
		
		case 1:
			return 54;
		
		case 2:
			return 55;
		
		case 3:
			return 56;
		
		case 4:
			return 53;
		
		default:
	}
	return -1;
}

bool func_220()
{
	bVar0 = false;
	if (!func_225(PLAYER::PLAYER_PED_ID()))
	{
		return bVar0;
	}
	if (Global_110725[56].f_3)
	{
		return bVar0;
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (iLocal_290)
		{
			HUD::CLEAR_HELP(1);
			func_224("RAMP_HELP_CRIM", -1);
			iLocal_290 = 0;
		}
		bVar0 = true;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (iLocal_289)
		{
			HUD::CLEAR_HELP(1);
			func_224("RAMP_HELP_FOOT", -1);
			iLocal_289 = 0;
		}
		bVar0 = true;
	}
	else if ((func_223(0) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || func_222())
	{
		if (func_2("RAMP_HELP_TRIG"))
		{
			if (func_223(0))
			{
			}
			else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
			}
			else if (func_222())
			{
			}
			HUD::CLEAR_HELP(1);
			iLocal_291 = 0;
		}
		bVar0 = true;
	}
	else if (func_355(108))
	{
		if (!iLocal_291)
		{
			if (!func_2("RAMP_HELP_TRIG"))
			{
				HUD::CLEAR_HELP(1);
				func_221("RAMP_HELP_TRIG");
			}
			iLocal_291 = 1;
		}
		bVar0 = !PAD::IS_CONTROL_PRESSED(2, 51);
	}
	return bVar0;
}

void func_221(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

int func_222()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

bool func_223(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

void func_224(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

bool func_225(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, 0);
}

int func_226(float fParam0)
{
	if (!func_225(PLAYER::PLAYER_PED_ID()))
	{
		return -1;
	}
	Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Var1 = { Global_31146[(iLocal_286 + iVar0)][0] };
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var4, Var1, 1) <= fParam0 && MISC::ABSF((Var4.z - Var1.z)) < 1.5f)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_227()
{
	func_59();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_228(var uParam0, struct<3> Param1)
{
	iVar0 = 0;
	iVar1[0] = 52;
	iVar1[1] = 53;
	iVar1[2] = 54;
	iVar1[3] = 55;
	iVar1[4] = 56;
	if (!func_352(&iVar1, uParam0, Param1, 5f))
	{
		func_371(" Didn't know which RC To Launch");
		func_356(uParam0, 1);
	}
	if (!func_209(*uParam0))
	{
		func_371(" RC Can't Launch");
		func_356(uParam0, 1);
	}
	if (func_351(*uParam0))
	{
		while (true)
		{
			SYSTEM::WAIT(0);
			if (func_350(*uParam0))
			{
				func_356(uParam0, 1);
			}
		}
	}
	func_274(uParam0);
	MISC::CLEAR_AREA(Param1, uParam0->f_15, 1, 0, 0, 0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (*uParam0 == 52 || *uParam0 == 53)
		{
			if (func_128(uParam0->f_28[0]))
			{
				if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], 1), 5.1f))
				{
					if (*uParam0 == 52)
					{
						iVar7 = 0;
						while (iVar7 < uParam0->f_41)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[iVar7]))
							{
								if ((func_128(uParam0->f_28[0]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_41[iVar7], uParam0->f_28[0])) || (func_128(uParam0->f_28[1]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_41[iVar7], uParam0->f_28[1])))
								{
									OBJECT::DELETE_OBJECT(&(uParam0->f_41[iVar7]));
								}
							}
							iVar7++;
						}
					}
					PED::SET_PED_TO_RAGDOLL(uParam0->f_28[0], 100, 500, 0, 1, 1, 0);
					PED::APPLY_DAMAGE_TO_PED(uParam0->f_28[0], 1000, 1, 0);
					if (func_128(uParam0->f_28[1]))
					{
						PED::SET_PED_TO_RAGDOLL(uParam0->f_28[1], 100, 500, 0, 1, 1, 0);
						PED::APPLY_DAMAGE_TO_PED(uParam0->f_28[1], 1000, 1, 0);
					}
					func_371("Sitting Rampage attacked with explosives, cleaning up");
					func_356(uParam0, 1);
				}
			}
			if (func_128(uParam0->f_28[1]))
			{
				if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[1], 1), 5.1f))
				{
					if (*uParam0 == 52)
					{
						iVar7 = 0;
						while (iVar7 < uParam0->f_41)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[iVar7]))
							{
								if ((func_128(uParam0->f_28[0]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_41[iVar7], uParam0->f_28[0])) || (func_128(uParam0->f_28[1]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_41[iVar7], uParam0->f_28[1])))
								{
									OBJECT::DELETE_OBJECT(&(uParam0->f_41[iVar7]));
								}
							}
							iVar7++;
						}
					}
					PED::SET_PED_TO_RAGDOLL(uParam0->f_28[1], 100, 500, 0, 1, 1, 0);
					PED::APPLY_DAMAGE_TO_PED(uParam0->f_28[1], 1000, 1, 0);
					if (func_128(uParam0->f_28[0]))
					{
						PED::SET_PED_TO_RAGDOLL(uParam0->f_28[0], 100, 500, 0, 1, 1, 0);
						PED::APPLY_DAMAGE_TO_PED(uParam0->f_28[0], 1000, 1, 0);
					}
					func_371("Sitting Rampage attacked with explosives, cleaning up");
					func_356(uParam0, 1);
				}
			}
		}
		if (func_273(uParam0))
		{
			func_272(uParam0);
			func_371(" RC combat happening in area, tell peds to flee");
			func_153(uParam0);
			func_356(uParam0, 1);
		}
		if (!func_148(uParam0, 1))
		{
			func_371(" RC Is Not Fine And In Range");
			func_356(uParam0, 1);
		}
		if (func_271(52))
		{
			if (TASK::IS_SCENARIO_GROUP_ENABLED("Rampage1"))
			{
				func_371(" Turning Off Scenario Group For Rampage 1");
				TASK::SET_SCENARIO_GROUP_ENABLED("Rampage1", 0);
			}
		}
		func_270(*uParam0);
		func_262(&iLocal_287, &(uParam0->f_9), Param1);
		if (iVar0 == 0 && iLocal_287 != -1)
		{
			func_261(uParam0, &uLocal_292);
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				func_371(" Cutscene Loaded");
				iVar0 = 1;
			}
		}
		Local_296 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if ((!(*uParam0 == 52 && Local_296.z > 34f) && !(*uParam0 == 53 && Local_296.z > 71f)) && !(*uParam0 == 54 && Local_296.z > 30f))
		{
			if (func_249(uParam0, 0))
			{
				if (*uParam0 == 53)
				{
					if (func_246(uParam0))
					{
						func_371(" Trigger Conditions Met");
						func_191();
						if (!func_5(uParam0))
						{
							func_371(" RC Can't Launch");
							func_356(uParam0, 1);
						}
						func_371(" RC Launcher Waiting To Terminate");
						if (func_3(uParam0))
						{
							func_371(" Ready To Terminate");
							func_356(uParam0, 0);
						}
					}
				}
				else if (func_245(uParam0))
				{
					func_371(" Trigger Conditions Met");
					func_191();
					if (!func_5(uParam0))
					{
						func_371(" RC Can't Launch");
						func_356(uParam0, 1);
					}
					func_371(" RC Launcher Waiting To Terminate");
					if (func_3(uParam0))
					{
						func_371(" Ready To Terminate");
						func_356(uParam0, 0);
					}
				}
			}
			else
			{
				if (*uParam0 == 53)
				{
					func_229(uParam0);
				}
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					iLocal_113 = -1;
					CAM::STOP_GAMEPLAY_HINT(0);
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				}
			}
		}
	}
}

void func_229(var uParam0)
{
	sVar0 = "misstrvram_2";
	switch (iLocal_114)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT(sVar0);
			if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
			{
				iLocal_114++;
			}
			break;
		
		case 1:
			if (func_128(uParam0->f_28[0]))
			{
				if (func_244(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), 1) < 30f && ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_28[0]))
				{
					func_243(&uLocal_119, 0, uParam0->f_28[0], "RAMPAGEHIPSTER", 0, 1);
					iLocal_114++;
				}
			}
			break;
		
		case 2:
			uLocal_115[0] = PED::CREATE_SYNCHRONIZED_SCENE(Local_106, Local_109, 2);
			if (func_128(uParam0->f_28[0]))
			{
				func_230(&uLocal_119, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_1", 7, 0, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uLocal_115[0], sVar0, "hipster_post_post_irony", 8f, -8f, 513, 0, 1148846080, 0);
			}
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_115[0], 0);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_115[0], 1);
			iLocal_114++;
			break;
		
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_115[0]))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_115[0]) >= 0.95f)
				{
					iLocal_114++;
				}
			}
			break;
		
		case 4:
			uLocal_115[1] = PED::CREATE_SYNCHRONIZED_SCENE(Local_106, Local_109, 2);
			if (func_128(uParam0->f_28[0]))
			{
				func_230(&uLocal_119, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_2", 7, 0, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uLocal_115[1], sVar0, "hipster_self_hating_hipster", 8f, -8f, 513, 0, 1148846080, 0);
			}
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_115[1], 0);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_115[1], 1);
			iLocal_114++;
			break;
		
		case 5:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_115[1]))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_115[1]) >= 0.95f)
				{
					iLocal_114++;
				}
			}
			break;
		
		case 6:
			uLocal_115[2] = PED::CREATE_SYNCHRONIZED_SCENE(Local_106, Local_109, 2);
			if (func_128(uParam0->f_28[0]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uLocal_115[2], sVar0, "hipster_idle", 8f, -8f, 513, 0, 1148846080, 0);
			}
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_115[2], 1);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_115[2], 0);
			iLocal_114++;
			break;
		
		case 7:
			break;
	}
}

bool func_230(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_242(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 1;
	Global_21798 = 0;
	Global_21802 = 0;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_231(sParam2, iParam4, 0);
}

int func_231(char* sParam0, int iParam1, bool bParam2)
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
					func_146();
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
		if (func_241(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_240();
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
				func_239();
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
				if (func_238())
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
			if (func_142())
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
			func_237();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_236();
		func_232();
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
		func_146();
	}
	return 0;
}

void func_232()
{
	if (!func_233())
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

int func_233()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_90())
	{
		return 0;
	}
	if (func_234(PLAYER::PLAYER_ID()))
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

bool func_234(int iParam0)
{
	return func_235(iParam0, 20);
}

bool func_235(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

void func_236()
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

void func_237()
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

int func_238()
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

void func_239()
{
	if (func_60(14))
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
		Global_19486 = func_227();
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

void func_240()
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

bool func_241(int iParam0, int iParam1)
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

void func_242(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_243(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

float func_244(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, iParam2);
}

int func_245(var uParam0)
{
	func_191();
	if (iLocal_113 < 0)
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[1], 1)) < 25f)
		{
			return 1;
		}
		switch (*uParam0)
		{
			case 52:
				CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_28[0], 0.1f, 0f, 0.9f, 1, -1, 2500, 2000, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[0], -1, 0, 2);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				CAM::_SET_GAMEPLAY_HINT_ANGLE(-5f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(0.1f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETZ(0.3f);
				CAM::SET_GAMEPLAY_HINT_FOV(40f);
				break;
			
			case 54:
				CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_28[0], 0f, -0.1f, 0.9f, 1, -1, 2500, 2000, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[0], -1, 0, 2);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				CAM::_SET_GAMEPLAY_HINT_ANGLE(-10f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.9f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETZ(0.35f);
				CAM::SET_GAMEPLAY_HINT_FOV(40f);
				break;
			
			case 55:
				CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_28[1], 0f, 0f, 0.9f, 1, -1, 2500, 2000, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[1], -1, 0, 2);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				CAM::_SET_GAMEPLAY_HINT_ANGLE(-8f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.9f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0.1f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETZ(0.35f);
				CAM::SET_GAMEPLAY_HINT_FOV(40f);
				break;
			
			case 56:
				CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_28[1], 0f, 0f, 0f, 1, -1, 2500, 2000, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[1], -1, 0, 2);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				CAM::_SET_GAMEPLAY_HINT_ANGLE(-5f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(0.15f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETZ(0.3f);
				CAM::SET_GAMEPLAY_HINT_FOV(40f);
				break;
		}
		iLocal_113 = MISC::GET_GAME_TIMER() + 2500;
	}
	else if (MISC::GET_GAME_TIMER() > iLocal_113)
	{
		iLocal_113 = -1;
		return 1;
	}
	return 0;
}

int func_246(var uParam0)
{
	func_191();
	switch (iLocal_284)
	{
		case 0:
			if (func_128(uParam0->f_28[0]))
			{
				func_247();
				iLocal_284++;
			}
			break;
		
		case 1:
			if (func_128(uParam0->f_28[0]))
			{
				if (!func_147())
				{
					if (func_230(&uLocal_119, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_3", 8, 0, 0))
					{
						uLocal_285 = PED::CREATE_SYNCHRONIZED_SCENE(Local_106, Local_109, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uLocal_285, "misstrvram_2", "hipster_cunts_in_america", 8f, -8f, 513, 0, 1148846080, 0);
						CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_28[0], 0f, 0f, 0.5f, 1, -1, 2500, 2000, 0);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[0], -1, 0, 2);
						CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
						CAM::_SET_GAMEPLAY_HINT_ANGLE(0f);
						CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(0.1f);
						CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0f);
						CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETZ(0.35f);
						CAM::SET_GAMEPLAY_HINT_FOV(40f);
						iLocal_284++;
					}
				}
			}
			break;
		
		case 2:
			if (func_128(uParam0->f_28[0]))
			{
				if (!func_147())
				{
					iLocal_284++;
				}
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_247()
{
	Global_19671 = 0;
	func_248();
}

void func_248()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_20805 = 6;
	}
}

int func_249(var uParam0, int iParam1)
{
	switch (uParam0->f_16)
	{
		case 0:
			if (*uParam0 == 12)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1826.631f, 4699.115f, 35.38089f, 1812.878f, 4710.457f, 42.05354f, 23.75f, 0, 1, 0))
				{
					if (func_128(uParam0->f_28[0]))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], 1), 1) < 3f)
						{
							if (func_254(2))
							{
								if (func_253(uParam0->f_27))
								{
									func_252(uParam0->f_27, *uParam0);
									func_371("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
									return 1;
								}
							}
						}
					}
					else
					{
						return 0;
					}
				}
				else if (func_128(uParam0->f_28[0]))
				{
					if (func_251(uParam0))
					{
						if (func_254(2))
						{
							if (func_253(uParam0->f_27))
							{
								func_252(uParam0->f_27, *uParam0);
								return 1;
							}
						}
					}
				}
				else
				{
					return 0;
				}
			}
			else if (*uParam0 == 21)
			{
				if ((((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1895.788f, -434.0192f, 40.30126f, -1883.038f, -444.0811f, 50.24509f, 8.5f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1883.576f, -443.6434f, 36.40581f, -1874.826f, -448.0797f, 49.15162f, 8.5f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1876.343f, -446.2214f, 35.64637f, -1866.952f, -456.5601f, 49.0442f, 8.5f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1882.997f, -438.9922f, 44.17246f, -1874.079f, -443.342f, 48.69179f, 0.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1878.822f, -441.7655f, 44.9175f, -1877.941f, -439.9522f, 47.28982f, 1.25f, 0, 1, 0))
				{
					if (func_128(uParam0->f_28[0]))
					{
						if (func_251(uParam0))
						{
							if (func_254(2))
							{
								if (func_253(uParam0->f_27))
								{
									func_252(uParam0->f_27, *uParam0);
									return 1;
								}
							}
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
			else if (*uParam0 == 22)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 837.0731f, 1261.086f, 366.1592f, 780.8383f, 1260.829f, 351.405f, 17.75f, 0, 1, 0))
				{
					if (func_128(uParam0->f_28[0]))
					{
						if (func_251(uParam0))
						{
							if (func_254(2))
							{
								if (func_253(uParam0->f_27))
								{
									func_252(uParam0->f_27, *uParam0);
									return 1;
								}
							}
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
			else if (func_128(uParam0->f_28[0]))
			{
				if (func_251(uParam0))
				{
					if (func_254(2))
					{
						if (func_253(uParam0->f_27))
						{
							func_252(uParam0->f_27, *uParam0);
							return 1;
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_128(uParam0->f_35[0]))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_35[0], 0))
				{
					if (func_254(3))
					{
						func_252(uParam0->f_27, *uParam0);
						return 1;
					}
				}
				else if (iParam1 == 1)
				{
					func_250();
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_35[0], 0))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_35[0], 1), 1) < uParam0->f_15)
					{
						if (func_254(2))
						{
							if (func_253(uParam0->f_27))
							{
								func_252(uParam0->f_27, *uParam0);
								return 1;
							}
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 3:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), uParam0->f_17[0], 1) < uParam0->f_15)
			{
				if (func_254(2))
				{
					if (func_253(uParam0->f_27))
					{
						func_252(uParam0->f_27, *uParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 4:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_17[0], uParam0->f_17[1], 0, 1, 0))
			{
				if (func_254(2))
				{
					if (func_253(uParam0->f_27))
					{
						func_252(uParam0->f_27, *uParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 5:
			if (*uParam0 == 6)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (func_128(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
					{
						if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1323100960) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -442313018))
						{
							if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), uParam0->f_35[0]))
							{
								if (func_254(3))
								{
									return 1;
								}
							}
						}
						else if ((VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -50547061) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1621617168)) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1394036463))
						{
							if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) && VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), uParam0->f_35[0]))
							{
								if (func_254(3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
			else if (*uParam0 == 10)
			{
				if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) >= 2f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 245.8885f, 371.9034f, 103.9884f, 241.5898f, 359.6458f, 107.3461f, 1.25f, 0, 1, 0))
					{
						if (func_254(2))
						{
							if (func_253(uParam0->f_27))
							{
								func_252(uParam0->f_27, *uParam0);
								func_371("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return 1;
							}
						}
					}
				}
			}
			else if (*uParam0 == 46)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -164.2046f, 277.4866f, 91.55322f, -153.6f, 277.4061f, 97.33813f, 10f, 0, 1, 0))
				{
					return 0;
				}
			}
			else if (*uParam0 == 31)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2728.948f, 4143.44f, 42.29295f, 2722.213f, 4144.521f, 45.43182f, 10f, 0, 1, 0))
				{
					if (func_254(2))
					{
						if (func_253(1))
						{
							func_252(1, *uParam0);
							func_371("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return 1;
						}
					}
				}
			}
			else if (*uParam0 == 39)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -992.4995f, 358.7455f, 96.3735f, -1021.94f, 361.8888f, 65.36148f, 30f, 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -983.5426f, 369.1104f, 68.46017f, -1028.566f, 395.4613f, 94.57245f, 15f, 0, 1, 0))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -983.875f, 346.7556f, 68.02096f, -1021.451f, 336.3458f, 93.18714f, 14.5f, 0, 1, 0))
						{
							if (func_254(2))
							{
								if (func_253(uParam0->f_27))
								{
									func_252(uParam0->f_27, *uParam0);
									func_371("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return 1;
								}
							}
						}
					}
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_17[0], uParam0->f_17[1], uParam0->f_24, 0, 1, 0))
			{
				if (*uParam0 == 45)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2338.697f, 2597.037f, 45.39052f, 2324.003f, 2597.185f, 47.74961f, 8.5f, 0, 1, 0))
					{
						return 0;
					}
				}
				if (func_254(2))
				{
					if (func_253(uParam0->f_27))
					{
						func_252(uParam0->f_27, *uParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			break;
	}
	return 0;
}

void func_250()
{
	func_30(&(Global_102203.f_2890), &Global_102203, 0, 1, 1, 0);
}

int func_251(var uParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && uParam0->f_27)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], 1), 1) < (uParam0->f_15 + fVar0))
		{
			return 1;
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], 1), 1) < uParam0->f_15)
	{
		return 1;
	}
	return 0;
}

void func_252(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		if (!func_131(iParam1))
		{
			return;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			func_371("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				func_371("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				VEHICLE::SET_VEHICLE_ENGINE_ON(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0, 1, 0);
			}
			func_191();
		}
	}
}

int func_253(bool bParam0)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
		else if (bParam0)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (func_158(iVar0))
				{
					if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					{
						if ((!ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iVar0) && !ENTITY::IS_ENTITY_IN_AIR(iVar0)) && ENTITY::GET_ENTITY_SPEED(iVar0) < 1f)
						{
							return 1;
						}
					}
					else if (!ENTITY::IS_ENTITY_IN_AIR(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_254(int iParam0)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_227();
				if (!func_39(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_222()) || Global_110685) || Global_30770) || func_260()) || func_241(8, -1)) || func_96()) || func_259()) || func_258()) || func_257()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_222()) || Global_30770) || func_260()) || func_241(8, -1)) || func_258()) || func_96()) || func_259()) || func_257()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_222()) || Global_110685) || Global_30770) || func_260()) || func_241(8, -1)) || func_258()) || func_96()) || func_259()) || func_257()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_222()) || Global_110685) || Global_30770) || func_260()) || func_241(8, -1)) || func_96()) || func_259()) || func_257()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_222() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_241(8, -1)) || func_257()) || func_256()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_241(8, -1) || func_96()) || func_259()) || func_256()) || func_255())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_222()) || Global_30770) || func_260()) || func_241(8, -1)) || func_259()) || func_258()) || func_257()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_222()) || func_259()) || Global_110685) || Global_30770) || func_260()) || Global_42596) || func_241(8, -1)) || func_258()) || func_256()) || func_257()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_222()) || Global_110685) || Global_30770) || func_260()) || func_241(8, -1)) || func_258()) || func_256()) || func_96()) || func_259()) || func_257())
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

var func_255()
{
	return Global_98783.f_1;
}

int func_256()
{
	if (Global_95666 != -1)
	{
		return MISC::IS_BIT_SET(Global_89532[Global_95666].f_15, 13);
	}
	return 0;
}

int func_257()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

int func_258()
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

bool func_259()
{
	return Global_98796.f_346 > 0;
}

var func_260()
{
	return Global_1312877;
}

void func_261(var uParam0, var uParam1)
{
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (func_128(PLAYER::PLAYER_PED_ID()))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
		}
		switch (*uParam0)
		{
			case 52:
				if (func_128(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "TriggerHappy_WhiteTrash";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
				}
				if (func_128(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Nervous_WhiteTrash";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			
			case 53:
				if (func_128(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Rampage_Hipster";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
				}
				break;
			
			case 54:
				if (func_128(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Armed_Mexican_Goon";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION((*uParam1)[0], 8, 1, 0, 0);
				}
				if (func_128(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Mexican_Goon";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			
			case 55:
				if (func_128(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Thug";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION((*uParam1)[0], 10, 0, 1, 0);
				}
				if (func_128(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Armed_Thug";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[1], uParam0->f_28[1], 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION((*uParam1)[1], 10, 1, 0, 0);
				}
				break;
			
			case 56:
				if (func_128(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Army_Guy_Right";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
				}
				if (func_128(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Army_Guy_Left";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			}
	}
}

void func_262(int iParam0, char* sParam1, struct<3> Param2)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (Global_41431 == 17)
			{
				if (*iParam0 != -1)
				{
					func_268(iParam0);
				}
			}
			else if (func_267())
			{
				if (*iParam0 != -1)
				{
					func_268(iParam0);
				}
			}
			else if (*iParam0 == -1)
			{
				if (func_266(PLAYER::PLAYER_PED_ID(), Param2, 1) <= 100f)
				{
					func_265(iParam0, 1);
				}
			}
			else
			{
				switch (func_264(*iParam0))
				{
					case 1:
						if (MISC::ARE_STRINGS_EQUAL(sParam1, "JOSH_1_INT_CONCAT"))
						{
							CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(sParam1, 14, 8);
						}
						else
						{
							CUTSCENE::REQUEST_CUTSCENE(sParam1, 8);
						}
						STREAMING::_0xF8155A7F03DDFC8E(2);
						func_263(*iParam0, 1);
						break;
					
					case 2:
						CUTSCENE::STOP_CUTSCENE(0);
						CUTSCENE::REMOVE_CUTSCENE();
						STREAMING::_0xF8155A7F03DDFC8E(0);
						func_263(*iParam0, 0);
						break;
				}
				if (func_266(PLAYER::PLAYER_PED_ID(), Param2, 1) > 120f)
				{
					func_268(iParam0);
				}
			}
		}
	}
}

void func_263(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_76618 == iParam0)
		{
			Global_76619 = iParam0;
		}
	}
	else if (Global_76619 == iParam0)
	{
		Global_76619 = -1;
	}
}

int func_264(int iParam0)
{
	if (Global_76618 == iParam0)
	{
		if (Global_76619 == -1)
		{
			if (Global_76617 < MISC::GET_FRAME_COUNT())
			{
				return 1;
			}
		}
	}
	else if (Global_76619 == iParam0)
	{
		return 2;
	}
	return 0;
}

void func_265(int iParam0, int iParam1)
{
	if (Global_76615 < 5)
	{
		Global_76604[Global_76615] = 0;
		Global_76604[Global_76615].f_1 = iParam1;
		bVar0 = false;
		while (!bVar0)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < Global_76615)
			{
				if (Global_76604[iVar1] == Global_76604[Global_76615])
				{
					Global_76604[Global_76615]++;
					bVar0 = false;
				}
				iVar1++;
			}
		}
		*iParam0 = Global_76604[Global_76615];
		Global_76615++;
		Global_76616 = 1;
	}
	else
	{
		*iParam0 = -1;
	}
}

float func_266(int iParam0, struct<3> Param1, int iParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, iParam4);
}

bool func_267()
{
	return Global_96053;
}

void func_268(int iParam0)
{
	CUTSCENE::STOP_CUTSCENE(0);
	CUTSCENE::REMOVE_CUTSCENE();
	func_269(iParam0);
}

void func_269(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_76619 == *iParam0)
	{
		func_263(*iParam0, 0);
	}
	if (Global_76618 == *iParam0)
	{
		Global_76618 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_76615)
	{
		if (Global_76604[iVar1] == *iParam0)
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= (Global_76615 - 2))
	{
		Global_76604[iVar2] = Global_76604[iVar2 + 1];
		Global_76604[iVar2].f_1 = Global_76604[iVar2 + 1].f_1;
		iVar2++;
	}
	Global_76604[(Global_76615 - 1)] = -1;
	Global_76604[(Global_76615 - 1)].f_1 = 3;
	Global_76615 = (Global_76615 - 1);
	Global_76616 = 1;
	Global_76617 = MISC::GET_FRAME_COUNT();
	*iParam0 = -1;
}

void func_270(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_186();
	}
	if (iParam0 == -1)
	{
		return;
	}
	Global_110725[iParam0].f_1 = 1;
}

bool func_271(int iParam0)
{
	return Global_110725[iParam0].f_1;
}

void func_272(var uParam0)
{
	if (*uParam0 == 52)
	{
		func_371(" RAMPAGE 1 - FORCE FREEZE CHAIRS AND PRE-RELEASE FOR B*2124538");
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[3]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[3], 1);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_41[3]));
			uParam0->f_41[3] = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[4]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[4], 1);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_41[4]));
			uParam0->f_41[4] = 0;
		}
	}
}

int func_273(var uParam0)
{
	if ((*uParam0 == 54 || *uParam0 == 55) || *uParam0 == 56)
	{
		if (PED::_0x5407B7288D0478B7(PLAYER::PLAYER_PED_ID()) > 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_274(var uParam0)
{
	switch (*uParam0)
	{
		case 52:
			func_349(uParam0);
			iLocal_299 = func_348();
			break;
		
		case 53:
			func_342(uParam0);
			iLocal_299 = func_340();
			break;
		
		case 54:
			func_339(uParam0);
			break;
		
		case 55:
			func_338(uParam0);
			iLocal_299 = func_337();
			break;
		
		case 56:
			func_275(uParam0);
			break;
		
		default:
			break;
	}
	if (iLocal_299 != 0)
	{
	}
	uParam0->f_16 = 0;
	if (*uParam0 == 53)
	{
		uParam0->f_15 = 15f;
	}
	else
	{
		uParam0->f_15 = 12f;
	}
	uParam0->f_25 = 1;
}

void func_275(var uParam0)
{
	sVar0 = "misstvrram_5";
	iVar1 = 1925237458;
	iVar2 = 321739290;
	STREAMING::REQUEST_MODEL(iVar1);
	STREAMING::REQUEST_MODEL(iVar2);
	STREAMING::REQUEST_ANIM_DICT(sVar0);
	WEAPON::REQUEST_WEAPON_ASSET(-1568386805, 31, 0);
	while ((!STREAMING::HAS_MODEL_LOADED(iVar1) || !STREAMING::HAS_MODEL_LOADED(iVar2)) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_335(&(uParam0->f_28[0]), iVar1, -1299.4f, 2506.24f, 21.07f, -122.79f, 0))
	{
		SYSTEM::WAIT(0);
	}
	func_334(&(uParam0->f_28[0]));
	PED::SET_PED_NAME_DEBUG(uParam0->f_28[0], "RAMP:PED 0");
	TASK::TASK_PLAY_ANIM(uParam0->f_28[0], sVar0, "marines_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 11, 0, 0, 0);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 0);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 1);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 2);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 3);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 4);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 5);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 6);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 7);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 8);
	while (!func_335(&(uParam0->f_28[1]), iVar1, -1299.49f, 2505.53f, 21.05f, -101.94f, 0))
	{
		SYSTEM::WAIT(0);
	}
	func_334(&(uParam0->f_28[1]));
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 11, 0, 0, 0);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 0);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 1);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 2);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 3);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 4);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 5);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 6);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 7);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 8);
	PED::SET_PED_NAME_DEBUG(uParam0->f_28[1], "RAMP:PED 1");
	TASK::TASK_PLAY_ANIM(uParam0->f_28[1], sVar0, "marines_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_333(&(uParam0->f_35[0]), iVar2, -1298.16f, 2504.153f, 21.062f, 165.48f))
	{
		SYSTEM::WAIT(0);
	}
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_35[0], 1084227584);
	func_332(&(uParam0->f_35[0]));
	VEHICLE::SET_VEHICLE_EXTRA(uParam0->f_35[0], 1, 0);
	VEHICLE::SET_VEHICLE_EXTRA(uParam0->f_35[0], 1, 1);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_35[0], 1);
	if (!func_276(&(uParam0->f_41[0]), -1568386805, -1297.84f, 2505.91f, 19.34f, func_331(-0.5f)))
	{
	}
	else
	{
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], 0, 0);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_41[0], -1297.84f, 2505.91f, 19.34f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_41[0], func_331(-0.5f));
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 1);
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_5_CON", 24);
	uParam0->f_27 = 0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
}

int func_276(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		OBJECT::DELETE_OBJECT(uParam0);
		*uParam0 = 0;
	}
	iVar0 = WEAPON::GET_WEAPONTYPE_MODEL(iParam1);
	STREAMING::REQUEST_MODEL(iVar0);
	iVar8 = MISC::GET_GAME_TIMER() + 10000;
	while (MISC::GET_GAME_TIMER() < iVar8)
	{
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			*uParam0 = WEAPON::CREATE_WEAPON_OBJECT(iParam1, -1, Param2, 1, 1065353216, 0, 0, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			if (func_330(&uVar1, iParam1, 962500902))
			{
				if (WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(*uParam0, func_277(&uVar1, iParam1, 962500902, 0)))
				{
					WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(*uParam0, func_277(&uVar1, iParam1, 962500902, 0));
				}
				else if (WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(*uParam0, func_277(&uVar1, iParam1, 962500902, 1)))
				{
					WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(*uParam0, func_277(&uVar1, iParam1, 962500902, 1));
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				ENTITY::SET_ENTITY_COORDS(*uParam0, Param2, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(*uParam0, fParam5);
				return 1;
			}
		}
		SYSTEM::WAIT(0);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	return 0;
}

int func_277(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_329(&Var0, *uParam0, uParam0->f_4, uParam0->f_6, uParam0->f_1);
	iVar8 = 0;
	while (func_278(&Var0, iParam1, iVar7, 0))
	{
		if (Var0.f_4 == iParam2)
		{
			if (iParam3 == iVar8)
			{
				return Var0;
			}
			iVar8++;
		}
		iVar7++;
	}
	return 0;
}

bool func_278(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	func_329(uParam0, 0, 989182658, 0, 0);
	switch (iParam1)
	{
		case 453432689:
			if (func_328(iLocal_105))
			{
				if (!func_319(1623028892, 453432689, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_329(uParam0, -19858063, -571619404, 1, 1);
							break;
						
						case 2:
							func_329(uParam0, -316253668, -571619404, 2, 0);
							break;
						
						case 3:
							func_329(uParam0, 899381934, 679107254, 1, 0);
							break;
						
						case 4:
							func_329(uParam0, 1709866683, 1863181664, 1, 0);
							break;
						
						case 5:
							func_329(uParam0, -684126074, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, -19858063, -571619404, 1, 1);
							break;
						
						case 1:
							func_329(uParam0, -316253668, -571619404, 2, 0);
							break;
						
						case 2:
							func_329(uParam0, 899381934, 679107254, 1, 0);
							break;
						
						case 3:
							func_329(uParam0, 1709866683, 1863181664, 1, 0);
							break;
						
						case 4:
							func_329(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_329(uParam0, -19858063, -571619404, 1, 1);
						break;
					
					case 1:
						func_329(uParam0, -316253668, -571619404, 2, 0);
						break;
					
					case 2:
						func_329(uParam0, 899381934, 679107254, 1, 0);
						break;
					
					case 3:
						func_329(uParam0, 1709866683, 1863181664, 1, 0);
						break;
					
					case 4:
						func_329(uParam0, -684126074, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case 1593441988:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, 119648377, -571619404, 1, 1);
					break;
				
				case 1:
					func_329(uParam0, -696561875, -571619404, 2, 0);
					break;
				
				case 2:
					func_329(uParam0, 899381934, 679107254, 1, 0);
					break;
				
				case 3:
					func_329(uParam0, -1023114086, 1863181664, 1, 0);
					break;
				
				case 4:
					func_329(uParam0, -966439566, 962500902, 1, 0);
					break;
			}
			break;
		
		case 584646201:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, 834974250, -571619404, 1, 1);
					break;
				
				case 1:
					func_329(uParam0, 614078421, -571619404, 2, 0);
					break;
				
				case 2:
					func_329(uParam0, 899381934, 679107254, 1, 0);
					break;
				
				case 3:
					func_329(uParam0, -1023114086, 1863181664, 1, 0);
					break;
				
				case 4:
					func_329(uParam0, -1686714580, 962500902, 1, 0);
					break;
			}
			break;
		
		case 324215364:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, -884429072, -571619404, 1, 1);
					break;
				
				case 1:
					func_329(uParam0, 283556395, -571619404, 2, 0);
					break;
				
				case 2:
					func_329(uParam0, 899381934, 679107254, 1, 0);
					break;
				
				case 3:
					func_329(uParam0, -1657815255, 196630833, 1, 0);
					break;
				
				case 4:
					func_329(uParam0, -1489156508, 1863181664, 1, 0);
					break;
				
				case 5:
					func_329(uParam0, 1215999497, 962500902, 1, 0);
					break;
			}
			break;
		
		case 736523883:
			if (func_328(iLocal_105))
			{
				if (!func_319(1623028892, 736523883, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_329(uParam0, 643254679, -571619404, 1, 1);
							break;
						
						case 2:
							func_329(uParam0, 889808635, -571619404, 2, 0);
							break;
						
						case 3:
							func_329(uParam0, 2043113590, -571619404, 3, 0);
							break;
						
						case 4:
							func_329(uParam0, 2076495324, 679107254, 1, 0);
							break;
						
						case 5:
							func_329(uParam0, 1019656791, 196630833, 1, 0);
							break;
						
						case 6:
							func_329(uParam0, -1023114086, 1863181664, 1, 0);
							break;
						
						case 7:
							func_329(uParam0, 663170192, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, 643254679, -571619404, 1, 1);
							break;
						
						case 1:
							func_329(uParam0, 889808635, -571619404, 2, 0);
							break;
						
						case 2:
							func_329(uParam0, 2043113590, -571619404, 3, 0);
							break;
						
						case 3:
							func_329(uParam0, 2076495324, 679107254, 1, 0);
							break;
						
						case 4:
							func_329(uParam0, 1019656791, 196630833, 1, 0);
							break;
						
						case 5:
							func_329(uParam0, -1023114086, 1863181664, 1, 0);
							break;
						
						case 6:
							func_329(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_329(uParam0, 643254679, -571619404, 1, 1);
						break;
					
					case 1:
						func_329(uParam0, 889808635, -571619404, 2, 0);
						break;
					
					case 2:
						func_329(uParam0, 2043113590, -571619404, 3, 0);
						break;
					
					case 3:
						func_329(uParam0, 2076495324, 679107254, 1, 0);
						break;
					
					case 4:
						func_329(uParam0, 1019656791, 196630833, 1, 0);
						break;
					
					case 5:
						func_329(uParam0, -1023114086, 1863181664, 1, 0);
						break;
					
					case 6:
						func_329(uParam0, 663170192, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case -1074790547:
			if (func_328(iLocal_105))
			{
				if (!func_319(1623028892, -1074790547, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_329(uParam0, -1101075946, -571619404, 1, 1);
							break;
						
						case 2:
							func_329(uParam0, -1323216997, -571619404, 2, 0);
							break;
						
						case 3:
							func_329(uParam0, -604986051, -571619404, 3, 0);
							break;
						
						case 4:
							func_329(uParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 5:
							func_329(uParam0, 2076495324, 679107254, 1, 0);
							break;
						
						case 6:
							func_329(uParam0, -1657815255, 196630833, 1, 0);
							break;
						
						case 7:
							func_329(uParam0, -1489156508, 1863181664, 1, 0);
							break;
						
						case 8:
							func_329(uParam0, 1319990579, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, -1101075946, -571619404, 1, 1);
							break;
						
						case 1:
							func_329(uParam0, -1323216997, -571619404, 2, 0);
							break;
						
						case 2:
							func_329(uParam0, -604986051, -571619404, 3, 0);
							break;
						
						case 3:
							func_329(uParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 4:
							func_329(uParam0, 2076495324, 679107254, 1, 0);
							break;
						
						case 5:
							func_329(uParam0, -1657815255, 196630833, 1, 0);
							break;
						
						case 6:
							func_329(uParam0, -1489156508, 1863181664, 1, 0);
							break;
						
						case 7:
							func_329(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_329(uParam0, -1101075946, -571619404, 1, 1);
						break;
					
					case 1:
						func_329(uParam0, -1323216997, -571619404, 2, 0);
						break;
					
					case 2:
						func_329(uParam0, -604986051, -571619404, 3, 0);
						break;
					
					case 3:
						func_329(uParam0, 202788691, -1322016827, 1, 0);
						break;
					
					case 4:
						func_329(uParam0, 2076495324, 679107254, 1, 0);
						break;
					
					case 5:
						func_329(uParam0, -1657815255, 196630833, 1, 0);
						break;
					
					case 6:
						func_329(uParam0, -1489156508, 1863181664, 1, 0);
						break;
					
					case 7:
						func_329(uParam0, 1319990579, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case -2084633992:
			if (func_328(iLocal_105))
			{
				if (!func_319(1623028892, -2084633992, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_329(uParam0, -1614924820, -571619404, 1, 1);
							break;
						
						case 2:
							func_329(uParam0, -1861183855, -571619404, 2, 0);
							break;
						
						case 3:
							func_329(uParam0, -1167922891, -571619404, 3, 0);
							break;
						
						case 4:
							func_329(uParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 5:
							func_329(uParam0, 2076495324, 679107254, 1, 0);
							break;
						
						case 6:
							func_329(uParam0, -1596416958, 196630833, 1, 0);
							break;
						
						case 7:
							func_329(uParam0, -2089531990, 1863181664, 1, 0);
							break;
						
						case 8:
							func_329(uParam0, -660892072, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, -1614924820, -571619404, 1, 1);
							break;
						
						case 1:
							func_329(uParam0, -1861183855, -571619404, 2, 0);
							break;
						
						case 2:
							func_329(uParam0, -1167922891, -571619404, 3, 0);
							break;
						
						case 3:
							func_329(uParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 4:
							func_329(uParam0, 2076495324, 679107254, 1, 0);
							break;
						
						case 5:
							func_329(uParam0, -1596416958, 196630833, 1, 0);
							break;
						
						case 6:
							func_329(uParam0, -2089531990, 1863181664, 1, 0);
							break;
						
						case 7:
							func_329(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_329(uParam0, -1614924820, -571619404, 1, 1);
						break;
					
					case 1:
						func_329(uParam0, -1861183855, -571619404, 2, 0);
						break;
					
					case 2:
						func_329(uParam0, -1167922891, -571619404, 3, 0);
						break;
					
					case 3:
						func_329(uParam0, 202788691, -1322016827, 1, 0);
						break;
					
					case 4:
						func_329(uParam0, 2076495324, 679107254, 1, 0);
						break;
					
					case 5:
						func_329(uParam0, -1596416958, 196630833, 1, 0);
						break;
					
					case 6:
						func_329(uParam0, -2089531990, 1863181664, 1, 0);
						break;
					
					case 7:
						func_329(uParam0, -660892072, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case -1357824103:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, -91250417, -571619404, 1, 1);
					break;
				
				case 1:
					func_329(uParam0, -1899902599, -571619404, 2, 0);
					break;
				
				case 2:
					func_329(uParam0, 2076495324, 679107254, 1, 0);
					break;
				
				case 3:
					func_329(uParam0, -1439939148, 196630833, 1, 0);
					break;
				
				case 4:
					func_329(uParam0, -2089531990, 1863181664, 1, 0);
					break;
				
				case 5:
					func_329(uParam0, 930927479, 962500902, 1, 0);
					break;
			}
			break;
		
		case -1660422300:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, -197857404, -571619404, 1, 1);
					break;
				
				case 1:
					func_329(uParam0, -2112517305, -571619404, 2, 0);
					break;
				
				case 2:
					func_329(uParam0, 1006677997, 196630833, 1, 0);
					break;
				
				case 3:
					func_329(uParam0, -690308418, 962500902, 1, 0);
					break;
			}
			break;
		
		case 2144741730:
			if (func_328(iLocal_105))
			{
				if (!func_319(1623028892, 2144741730, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_329(uParam0, -503336118, -571619404, 1, 1);
							break;
						
						case 2:
							func_329(uParam0, -691692330, -571619404, 2, 0);
							break;
						
						case 3:
							func_329(uParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 4:
							func_329(uParam0, -1596416958, 196630833, 1, 0);
							break;
						
						case 5:
							func_329(uParam0, -1828795171, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, -503336118, -571619404, 1, 1);
							break;
						
						case 1:
							func_329(uParam0, -691692330, -571619404, 2, 0);
							break;
						
						case 2:
							func_329(uParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 3:
							func_329(uParam0, -1596416958, 196630833, 1, 0);
							break;
						
						case 4:
							func_329(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_329(uParam0, -503336118, -571619404, 1, 1);
						break;
					
					case 1:
						func_329(uParam0, -691692330, -571619404, 2, 0);
						break;
					
					case 2:
						func_329(uParam0, 202788691, -1322016827, 1, 0);
						break;
					
					case 3:
						func_329(uParam0, -1596416958, 196630833, 1, 0);
						break;
					
					case 4:
						func_329(uParam0, -1828795171, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case -494615257:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, -1796727865, -571619404, 1, 1);
					break;
				
				case 1:
					func_329(uParam0, -2034401422, -571619404, 2, 0);
					break;
				
				case 2:
					func_329(uParam0, 202788691, -1322016827, 1, 0);
					break;
				
				case 3:
					func_329(uParam0, 2076495324, 679107254, 1, 0);
					break;
				
				case 4:
					func_329(uParam0, -2089531990, 1863181664, 1, 0);
					break;
			}
			break;
		
		case 100416529:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, -1681506167, -571619404, 1, 1);
					break;
				
				case 1:
					func_329(uParam0, -1489156508, 1863181664, 1, 0);
					break;
				
				case 2:
					func_329(uParam0, -767279652, 196630833, 1, 1);
					break;
				
				case 3:
					func_329(uParam0, -1135289737, 196630833, 2, 0);
					break;
				
				case 4:
					func_329(uParam0, 1077065191, 962500902, 1, 0);
					break;
			}
			break;
		
		case 205991906:
			if (func_328(iLocal_105))
			{
				if (!func_319(1623028892, 205991906, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_329(uParam0, 1198478068, -571619404, 1, 1);
							break;
						
						case 2:
							func_329(uParam0, -767279652, 196630833, 1, 1);
							break;
						
						case 3:
							func_329(uParam0, -1135289737, 196630833, 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, 1198478068, -571619404, 1, 1);
							break;
						
						case 1:
							func_329(uParam0, -767279652, 196630833, 1, 1);
							break;
						
						case 2:
							func_329(uParam0, -1135289737, 196630833, 2, 0);
							break;
						
						case 3:
							func_329(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_329(uParam0, 1198478068, -571619404, 1, 1);
						break;
					
					case 1:
						func_329(uParam0, -767279652, 196630833, 1, 1);
						break;
					
					case 2:
						func_329(uParam0, -1135289737, 196630833, 2, 0);
						break;
					}
			}
			break;
		
		case -1568386805:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, 202788691, -1322016827, 1, 0);
					break;
				
				case 1:
					func_329(uParam0, 2076495324, 679107254, 1, 0);
					break;
				
				case 2:
					func_329(uParam0, -1439939148, 196630833, 1, 0);
					break;
			}
			break;
		
		case 1119849093:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, -924946682, -571619404, 1, 1);
					break;
			}
			break;
		
		case -270015777:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, -1928132688, -571619404, 1, 1);
					break;
				
				case 1:
					func_329(uParam0, -1152981993, -571619404, 2, 0);
					break;
				
				case 2:
					func_329(uParam0, 2076495324, 679107254, 1, 0);
					break;
				
				case 3:
					func_329(uParam0, -1657815255, 196630833, 1, 0);
					break;
				
				case 4:
					func_329(uParam0, -1489156508, 1863181664, 1, 0);
					break;
				
				case 5:
					func_329(uParam0, 663517359, 962500902, 1, 0);
					break;
			}
			break;
		
		case -1654528753:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, 202788691, -1322016827, 1, 0);
					break;
				
				case 1:
					func_329(uParam0, 2076495324, 679107254, 1, 0);
					break;
				
				case 2:
					func_329(uParam0, -1489156508, 1863181664, 1, 0);
					break;
			}
			break;
		
		case -1716589765:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, 580369945, -571619404, 1, 1);
					break;
				
				case 1:
					func_329(uParam0, -640439150, -571619404, 2, 0);
					break;
				
				case 2:
					func_329(uParam0, 899381934, 679107254, 1, 0);
					break;
				
				case 3:
					func_329(uParam0, -1489156508, 1863181664, 1, 0);
					break;
				
				case 4:
					func_329(uParam0, 2008591151, 962500902, 1, 0);
					break;
			}
			break;
		
		case 2017895192:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, -2052698631, 962500902, 1, 0);
					break;
			}
			break;
		
		case 961495388:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, -2045758401, -571619404, 1, 1);
					break;
				
				case 1:
					func_329(uParam0, -785724817, -571619404, 2, 0);
					break;
				
				case 2:
					func_329(uParam0, -282298175, -571619404, 3, 0);
					break;
				
				case 3:
					func_329(uParam0, -76490669, -571619404, 4, 0);
					break;
				
				case 4:
					func_329(uParam0, -1478681000, -571619404, 5, 0);
					break;
				
				case 5:
					func_329(uParam0, 1675665560, -571619404, 6, 0);
					break;
				
				case 6:
					func_329(uParam0, 0, -1322016827, 1, 1);
					break;
				
				case 7:
					func_329(uParam0, -1654288262, -1322016827, 2, 0);
					break;
				
				case 8:
					func_329(uParam0, 0, -1572840598, 1, 1);
					break;
				
				case 9:
					func_329(uParam0, 2076495324, -1572840598, 2, 0);
					break;
				
				case 10:
					func_329(uParam0, 0, 1684637069, 1, 1);
					break;
				
				case 11:
					func_329(uParam0, 1108334355, 1684637069, 2, 0);
					break;
				
				case 12:
					func_329(uParam0, 77277509, 1684637069, 3, 0);
					break;
				
				case 13:
					func_329(uParam0, -966040254, 1684637069, 4, 0);
					break;
				
				case 14:
					func_329(uParam0, 0, 945598191, 1, 1);
					break;
				
				case 15:
					func_329(uParam0, -1489156508, 945598191, 2, 0);
					break;
				
				case 16:
					func_329(uParam0, -1181482284, 945598191, 3, 0);
					break;
				
				case 17:
					func_329(uParam0, -932732805, 945598191, 4, 0);
					break;
				
				case 18:
					func_329(uParam0, -569259057, 945598191, 5, 0);
					break;
				
				case 19:
					func_329(uParam0, -326080308, 945598191, 6, 0);
					break;
				
				case 20:
					func_329(uParam0, 48731514, 945598191, 7, 0);
					break;
				
				case 21:
					func_329(uParam0, 880736428, 945598191, 8, 0);
					break;
				
				case 22:
					func_329(uParam0, 1303784126, 945598191, 9, 0);
					break;
				
				case 23:
					func_329(uParam0, 1134861606, -1312077031, 1, 1);
					break;
				
				case 24:
					func_329(uParam0, 1447477866, -1312077031, 2, 0);
					break;
				
				case 25:
					func_329(uParam0, 0, 962500902, 1, 1);
					break;
				
				case 26:
					func_329(uParam0, -1860492113, 962500902, 2, 0);
					break;
				
				case 27:
					func_329(uParam0, 937772107, 962500902, 3, 0);
					break;
				
				case 28:
					func_329(uParam0, 1401650071, 962500902, 4, 0);
					break;
				
				case 29:
					func_329(uParam0, 628662130, 962500902, 5, 0);
					break;
				
				case 30:
					func_329(uParam0, -985047251, 962500902, 6, 0);
					break;
				
				case 31:
					func_329(uParam0, -812944463, 962500902, 7, 0);
					break;
				
				case 32:
					func_329(uParam0, -1447352303, 962500902, 8, 0);
					break;
				
				case 33:
					func_329(uParam0, -60338860, 962500902, 9, 0);
					break;
				
				case 34:
					func_329(uParam0, 2088750491, 962500902, 10, 0);
					break;
				
				case 35:
					func_329(uParam0, -1513913454, 962500902, 11, 0);
					break;
				
				case 36:
					func_329(uParam0, -1179558480, 962500902, 12, 0);
					break;
			}
			break;
		
		case -86904375:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, 1283078430, -571619404, 1, 1);
					break;
				
				case 1:
					func_329(uParam0, 1574296533, -571619404, 2, 0);
					break;
				
				case 2:
					func_329(uParam0, 391640422, -571619404, 3, 0);
					break;
				
				case 3:
					func_329(uParam0, 1025884839, -571619404, 4, 0);
					break;
				
				case 4:
					func_329(uParam0, 626875735, -571619404, 5, 0);
					break;
				
				case 5:
					func_329(uParam0, 1141059345, -571619404, 6, 0);
					break;
				
				case 6:
					func_329(uParam0, 0, -546751811, 1, 1);
					break;
				
				case 7:
					func_329(uParam0, -1654288262, -546751811, 2, 0);
					break;
				
				case 8:
					func_329(uParam0, 0, 679107254, 1, 1);
					break;
				
				case 9:
					func_329(uParam0, 2076495324, 679107254, 2, 0);
					break;
				
				case 10:
					func_329(uParam0, 0, 196630833, 1, 1);
					break;
				
				case 11:
					func_329(uParam0, 1108334355, 196630833, 2, 0);
					break;
				
				case 12:
					func_329(uParam0, 77277509, 196630833, 3, 0);
					break;
				
				case 13:
					func_329(uParam0, -966040254, 196630833, 4, 0);
					break;
				
				case 14:
					func_329(uParam0, 0, 945598191, 1, 1);
					break;
				
				case 15:
					func_329(uParam0, -2089531990, 945598191, 2, 0);
					break;
				
				case 16:
					func_329(uParam0, -1181482284, 945598191, 3, 0);
					break;
				
				case 17:
					func_329(uParam0, -932732805, 945598191, 4, 0);
					break;
				
				case 18:
					func_329(uParam0, -569259057, 945598191, 5, 0);
					break;
				
				case 19:
					func_329(uParam0, -326080308, 945598191, 6, 0);
					break;
				
				case 20:
					func_329(uParam0, 48731514, 945598191, 7, 0);
					break;
				
				case 21:
					func_329(uParam0, 880736428, 945598191, 8, 0);
					break;
				
				case 22:
					func_329(uParam0, 1303784126, 945598191, 9, 0);
					break;
				
				case 23:
					func_329(uParam0, -2093598721, -1312077031, 1, 1);
					break;
				
				case 24:
					func_329(uParam0, -1958983669, -1312077031, 2, 0);
					break;
				
				case 25:
					func_329(uParam0, 0, 962500902, 1, 1);
					break;
				
				case 26:
					func_329(uParam0, 1272803094, 962500902, 2, 0);
					break;
				
				case 27:
					func_329(uParam0, 1080719624, 962500902, 3, 0);
					break;
				
				case 28:
					func_329(uParam0, 792221348, 962500902, 4, 0);
					break;
				
				case 29:
					func_329(uParam0, -452181427, 962500902, 5, 0);
					break;
				
				case 30:
					func_329(uParam0, -746774737, 962500902, 6, 0);
					break;
				
				case 31:
					func_329(uParam0, -2044296061, 962500902, 7, 0);
					break;
				
				case 32:
					func_329(uParam0, -199171978, 962500902, 8, 0);
					break;
				
				case 33:
					func_329(uParam0, -1428075016, 962500902, 9, 0);
					break;
				
				case 34:
					func_329(uParam0, -1735153315, 962500902, 10, 0);
					break;
				
				case 35:
					func_329(uParam0, 1796459838, 962500902, 11, 0);
					break;
				
				case 36:
					func_329(uParam0, -631911105, 962500902, 12, 0);
					break;
			}
			break;
		
		case -608341376:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, 1227564412, -571619404, 1, 1);
					break;
				
				case 1:
					func_329(uParam0, 400507625, -571619404, 2, 0);
					break;
				
				case 2:
					func_329(uParam0, -161179835, -571619404, 3, 0);
					break;
				
				case 3:
					func_329(uParam0, -1020871238, -571619404, 4, 0);
					break;
				
				case 4:
					func_329(uParam0, 696788003, -571619404, 5, 0);
					break;
				
				case 5:
					func_329(uParam0, 1475288264, -571619404, 6, 0);
					break;
				
				case 6:
					func_329(uParam0, 0, -546751811, 1, 1);
					break;
				
				case 7:
					func_329(uParam0, -1654288262, -546751811, 2, 0);
					break;
				
				case 8:
					func_329(uParam0, 0, 196630833, 1, 1);
					break;
				
				case 9:
					func_329(uParam0, 1108334355, 196630833, 2, 0);
					break;
				
				case 10:
					func_329(uParam0, 1060929921, 196630833, 3, 0);
					break;
				
				case 11:
					func_329(uParam0, -966040254, 196630833, 4, 0);
					break;
				
				case 12:
					func_329(uParam0, 0, 1863181664, 1, 1);
					break;
				
				case 13:
					func_329(uParam0, -1181482284, 1863181664, 2, 0);
					break;
				
				case 14:
					func_329(uParam0, -932732805, 1863181664, 3, 0);
					break;
				
				case 15:
					func_329(uParam0, -569259057, 1863181664, 4, 0);
					break;
				
				case 16:
					func_329(uParam0, -326080308, 1863181664, 5, 0);
					break;
				
				case 17:
					func_329(uParam0, 48731514, 1863181664, 6, 0);
					break;
				
				case 18:
					func_329(uParam0, 880736428, 1863181664, 7, 0);
					break;
				
				case 19:
					func_329(uParam0, 1303784126, 1863181664, 8, 0);
					break;
				
				case 20:
					func_329(uParam0, -1018236364, -1312077031, 1, 1);
					break;
				
				case 21:
					func_329(uParam0, -1243457701, -1312077031, 2, 0);
					break;
				
				case 22:
					func_329(uParam0, 0, 962500902, 1, 1);
					break;
				
				case 23:
					func_329(uParam0, 1249283253, 962500902, 2, 0);
					break;
				
				case 24:
					func_329(uParam0, -857707587, 962500902, 3, 0);
					break;
				
				case 25:
					func_329(uParam0, -1097543898, 962500902, 4, 0);
					break;
				
				case 26:
					func_329(uParam0, 1980349969, 962500902, 5, 0);
					break;
				
				case 27:
					func_329(uParam0, 1219453777, 962500902, 6, 0);
					break;
				
				case 28:
					func_329(uParam0, -1853459190, 962500902, 7, 0);
					break;
				
				case 29:
					func_329(uParam0, -2074781016, 962500902, 8, 0);
					break;
				
				case 30:
					func_329(uParam0, 457967755, 962500902, 9, 0);
					break;
				
				case 31:
					func_329(uParam0, 235171324, 962500902, 10, 0);
					break;
				
				case 32:
					func_329(uParam0, 42685294, 962500902, 11, 0);
					break;
				
				case 33:
					func_329(uParam0, -687617715, 962500902, 12, 0);
					break;
			}
			break;
		
		case 177293209:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, -98690520, -571619404, 1, 1);
					break;
				
				case 1:
					func_329(uParam0, 752418717, -571619404, 2, 0);
					break;
				
				case 2:
					func_329(uParam0, 247526935, -571619404, 3, 0);
					break;
				
				case 3:
					func_329(uParam0, -130689324, -571619404, 4, 0);
					break;
				
				case 4:
					func_329(uParam0, 1005144310, -571619404, 5, 0);
					break;
				
				case 5:
					func_329(uParam0, -1981031769, -571619404, 6, 0);
					break;
				
				case 6:
					func_329(uParam0, -2101279869, 196630833, 1, 0);
					break;
				
				case 7:
					func_329(uParam0, -1135289737, 196630833, 2, 1);
					break;
				
				case 8:
					func_329(uParam0, -1233121104, 196630833, 3, 0);
					break;
				
				case 9:
					func_329(uParam0, 776198721, 196630833, 4, 0);
					break;
				
				case 10:
					func_329(uParam0, 0, 1863181664, 1, 1);
					break;
				
				case 11:
					func_329(uParam0, -1404903567, 1863181664, 2, 0);
					break;
				
				case 12:
					func_329(uParam0, 1602080333, 1863181664, 3, 0);
					break;
				
				case 13:
					func_329(uParam0, 1764221345, 1863181664, 4, 0);
					break;
				
				case 14:
					func_329(uParam0, -1869205321, -1312077031, 1, 1);
					break;
				
				case 15:
					func_329(uParam0, 277524638, -1312077031, 2, 0);
					break;
				
				case 16:
					func_329(uParam0, 0, 962500902, 1, 1);
					break;
				
				case 17:
					func_329(uParam0, -130843390, 962500902, 2, 0);
					break;
				
				case 18:
					func_329(uParam0, -977347227, 962500902, 3, 0);
					break;
				
				case 19:
					func_329(uParam0, -378461067, 962500902, 4, 0);
					break;
				
				case 20:
					func_329(uParam0, 329939175, 962500902, 5, 0);
					break;
				
				case 21:
					func_329(uParam0, 643374672, 962500902, 6, 0);
					break;
				
				case 22:
					func_329(uParam0, 807875052, 962500902, 7, 0);
					break;
				
				case 23:
					func_329(uParam0, -1401804168, 962500902, 8, 0);
					break;
				
				case 24:
					func_329(uParam0, -1096495395, 962500902, 9, 0);
					break;
				
				case 25:
					func_329(uParam0, -847811454, 962500902, 10, 0);
					break;
				
				case 26:
					func_329(uParam0, -1413108537, 962500902, 11, 0);
					break;
				
				case 27:
					func_329(uParam0, 1815270123, 962500902, 12, 0);
					break;
			}
			break;
		
		case -1075685676:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, -1795936926, -571619404, 1, 1);
					break;
				
				case 1:
					func_329(uParam0, 1591132456, -571619404, 2, 0);
					break;
				
				case 2:
					func_329(uParam0, 634039983, -571619404, 3, 0);
					break;
				
				case 3:
					func_329(uParam0, 733837882, -571619404, 4, 0);
					break;
				
				case 4:
					func_329(uParam0, -2046910199, -571619404, 5, 0);
					break;
				
				case 5:
					func_329(uParam0, 1329061674, -571619404, 6, 0);
					break;
				
				case 6:
					func_329(uParam0, 0, 196630833, 1, 1);
					break;
				
				case 7:
					func_329(uParam0, -1898661008, 196630833, 2, 0);
					break;
				
				case 8:
					func_329(uParam0, 0, 679107254, 1, 1);
					break;
				
				case 9:
					func_329(uParam0, 1140676955, 679107254, 2, 0);
					break;
				
				case 10:
					func_329(uParam0, 0, 1863181664, 1, 1);
					break;
				
				case 11:
					func_329(uParam0, 1709866683, 1863181664, 2, 0);
					break;
				
				case 12:
					func_329(uParam0, 568543123, 1863181664, 3, 0);
					break;
				
				case 13:
					func_329(uParam0, 0, 962500902, 1, 1);
					break;
				
				case 14:
					func_329(uParam0, 1550611612, 962500902, 2, 0);
					break;
				
				case 15:
					func_329(uParam0, 368550800, 962500902, 3, 0);
					break;
				
				case 16:
					func_329(uParam0, -1769069349, 962500902, 4, 0);
					break;
				
				case 17:
					func_329(uParam0, 24902297, 962500902, 5, 0);
					break;
				
				case 18:
					func_329(uParam0, -228041614, 962500902, 6, 0);
					break;
				
				case 19:
					func_329(uParam0, -584961562, 962500902, 7, 0);
					break;
				
				case 20:
					func_329(uParam0, -1153175946, 962500902, 8, 0);
					break;
				
				case 21:
					func_329(uParam0, 1301287696, 962500902, 9, 0);
					break;
				
				case 22:
					func_329(uParam0, 1597093459, 962500902, 10, 0);
					break;
				
				case 23:
					func_329(uParam0, 1769871776, 962500902, 11, 0);
					break;
				
				case 24:
					func_329(uParam0, -1827882671, 962500902, 12, 0);
					break;
			}
			break;
		
		case 2024373456:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, 1277460590, -571619404, 1, 1);
					break;
				
				case 1:
					func_329(uParam0, -1182573778, -571619404, 2, 0);
					break;
				
				case 2:
					func_329(uParam0, 2146055916, -571619404, 3, 0);
					break;
				
				case 3:
					func_329(uParam0, -644734235, -571619404, 4, 0);
					break;
				
				case 4:
					func_329(uParam0, 974903034, -571619404, 5, 0);
					break;
				
				case 5:
					func_329(uParam0, 190476639, -571619404, 6, 0);
					break;
				
				case 6:
					func_329(uParam0, 0, -1572840598, 1, 1);
					break;
				
				case 7:
					func_329(uParam0, 2076495324, -1572840598, 2, 0);
					break;
				
				case 8:
					func_329(uParam0, 0, 196630833, 1, 1);
					break;
				
				case 9:
					func_329(uParam0, -1613015470, 196630833, 2, 0);
					break;
				
				case 10:
					func_329(uParam0, -452809877, 196630833, 3, 0);
					break;
				
				case 11:
					func_329(uParam0, 1038927834, 196630833, 4, 0);
					break;
				
				case 12:
					func_329(uParam0, 0, 945598191, 1, 1);
					break;
				
				case 13:
					func_329(uParam0, -1023114086, 945598191, 1, 0);
					break;
				
				case 14:
					func_329(uParam0, -1181482284, 945598191, 2, 0);
					break;
				
				case 15:
					func_329(uParam0, -932732805, 945598191, 3, 0);
					break;
				
				case 16:
					func_329(uParam0, -569259057, 945598191, 4, 0);
					break;
				
				case 17:
					func_329(uParam0, -326080308, 945598191, 5, 0);
					break;
				
				case 18:
					func_329(uParam0, 48731514, 945598191, 6, 0);
					break;
				
				case 19:
					func_329(uParam0, 880736428, 945598191, 7, 0);
					break;
				
				case 20:
					func_329(uParam0, 1303784126, 945598191, 8, 0);
					break;
				
				case 21:
					func_329(uParam0, -653246751, -1312077031, 1, 1);
					break;
				
				case 22:
					func_329(uParam0, -1520117877, -1312077031, 2, 0);
					break;
				
				case 23:
					func_329(uParam0, 0, 962500902, 1, 1);
					break;
				
				case 24:
					func_329(uParam0, -996700057, 962500902, 2, 0);
					break;
				
				case 25:
					func_329(uParam0, 940943685, 962500902, 3, 0);
					break;
				
				case 26:
					func_329(uParam0, 1263226800, 962500902, 4, 0);
					break;
				
				case 27:
					func_329(uParam0, -328035840, 962500902, 5, 0);
					break;
				
				case 28:
					func_329(uParam0, 1224100642, 962500902, 6, 0);
					break;
				
				case 29:
					func_329(uParam0, 899228776, 962500902, 7, 0);
					break;
				
				case 30:
					func_329(uParam0, 616006309, 962500902, 8, 0);
					break;
				
				case 31:
					func_329(uParam0, -1561952511, 962500902, 9, 0);
					break;
				
				case 32:
					func_329(uParam0, 572063080, 962500902, 10, 0);
					break;
				
				case 33:
					func_329(uParam0, 1170588613, 962500902, 11, 0);
					break;
				
				case 34:
					func_329(uParam0, 966612367, 962500902, 12, 0);
					break;
			}
			break;
		
		case 487013001:
			if (func_328(iLocal_105))
			{
				if (!func_319(1623028892, 487013001, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_329(uParam0, 2076495324, 679107254, 1, 0);
							break;
						
						case 2:
							func_329(uParam0, -435637410, 1863181664, 1, 0);
							break;
						
						case 3:
							func_329(uParam0, -1562927653, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, 2076495324, 679107254, 1, 0);
							break;
						
						case 1:
							func_329(uParam0, -435637410, 1863181664, 1, 0);
							break;
						
						case 2:
							func_329(uParam0, -1562927653, 962500902, 1, 0);
							break;
						
						case 3:
							func_329(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_329(uParam0, 2076495324, 679107254, 1, 0);
						break;
					
					case 1:
						func_329(uParam0, -435637410, 1863181664, 1, 0);
						break;
					
					case 2:
						func_329(uParam0, -1562927653, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case -1063057011:
			if (func_328(iLocal_105))
			{
				if (!func_319(1623028892, -1063057011, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_329(uParam0, -959978111, -571619404, 1, 1);
							break;
						
						case 2:
							func_329(uParam0, 2089537806, -571619404, 2, 0);
							break;
						
						case 3:
							func_329(uParam0, 1801039530, -571619404, 3, 0);
							break;
						
						case 4:
							func_329(uParam0, 2076495324, 953267555, 1, 0);
							break;
						
						case 5:
							func_329(uParam0, -1596416958, 196630833, 1, 0);
							break;
						
						case 6:
							func_329(uParam0, -1489156508, 1863181664, 1, 0);
							break;
						
						case 7:
							func_329(uParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 8:
							func_329(uParam0, 1929467122, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, -959978111, -571619404, 1, 1);
							break;
						
						case 1:
							func_329(uParam0, 2089537806, -571619404, 2, 0);
							break;
						
						case 2:
							func_329(uParam0, 1801039530, -571619404, 3, 0);
							break;
						
						case 3:
							func_329(uParam0, 2076495324, 953267555, 1, 0);
							break;
						
						case 4:
							func_329(uParam0, -1596416958, 196630833, 1, 0);
							break;
						
						case 5:
							func_329(uParam0, -1489156508, 1863181664, 1, 0);
							break;
						
						case 6:
							func_329(uParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 7:
							func_329(uParam0, 1929467122, 962500902, 1, 0);
							break;
						
						case 8:
							func_329(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_329(uParam0, -959978111, -571619404, 1, 1);
						break;
					
					case 1:
						func_329(uParam0, 2089537806, -571619404, 2, 0);
						break;
					
					case 2:
						func_329(uParam0, 1801039530, -571619404, 3, 0);
						break;
					
					case 3:
						func_329(uParam0, 2076495324, 953267555, 1, 0);
						break;
					
					case 4:
						func_329(uParam0, -1596416958, 196630833, 1, 0);
						break;
					
					case 5:
						func_329(uParam0, -1489156508, 1863181664, 1, 0);
						break;
					
					case 6:
						func_329(uParam0, 202788691, -1322016827, 1, 0);
						break;
					
					case 7:
						func_329(uParam0, 1929467122, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case -1076751822:
			if (func_328(iLocal_105))
			{
				if (!func_319(1623028892, -1076751822, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_329(uParam0, -125817127, -571619404, 1, 1);
							break;
						
						case 2:
							func_329(uParam0, 2063610803, -571619404, 2, 0);
							break;
						
						case 3:
							func_329(uParam0, -2144080721, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, -125817127, -571619404, 1, 1);
							break;
						
						case 1:
							func_329(uParam0, 2063610803, -571619404, 2, 0);
							break;
						
						case 2:
							func_329(uParam0, -2144080721, 962500902, 1, 0);
							break;
						
						case 3:
							func_329(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_329(uParam0, -125817127, -571619404, 1, 1);
						break;
					
					case 1:
						func_329(uParam0, 2063610803, -571619404, 2, 0);
						break;
					
					case 2:
						func_329(uParam0, -2144080721, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case -952879014:
			if (func_328(iLocal_105))
			{
				if (!func_319(1623028892, -952879014, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_329(uParam0, -667205311, -571619404, 1, 1);
							break;
						
						case 2:
							func_329(uParam0, -855823675, -571619404, 2, 0);
							break;
						
						case 3:
							func_329(uParam0, 471997210, 196630833, 1, 1);
							break;
						
						case 4:
							func_329(uParam0, 2076495324, 953267555, 1, 0);
							break;
						
						case 5:
							func_329(uParam0, -2089531990, 1863181664, 1, 0);
							break;
						
						case 6:
							func_329(uParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 7:
							func_329(uParam0, 371102273, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, -667205311, -571619404, 1, 1);
							break;
						
						case 1:
							func_329(uParam0, -855823675, -571619404, 2, 0);
							break;
						
						case 2:
							func_329(uParam0, 471997210, 196630833, 1, 1);
							break;
						
						case 3:
							func_329(uParam0, 2076495324, 953267555, 1, 0);
							break;
						
						case 4:
							func_329(uParam0, -2089531990, 1863181664, 1, 0);
							break;
						
						case 5:
							func_329(uParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 6:
							func_329(uParam0, 371102273, 962500902, 1, 0);
							break;
						
						case 7:
							func_329(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_329(uParam0, -667205311, -571619404, 1, 1);
						break;
					
					case 1:
						func_329(uParam0, -855823675, -571619404, 2, 0);
						break;
					
					case 2:
						func_329(uParam0, 471997210, 196630833, 1, 1);
						break;
					
					case 3:
						func_329(uParam0, 2076495324, 953267555, 1, 0);
						break;
					
					case 4:
						func_329(uParam0, -2089531990, 1863181664, 1, 0);
						break;
					
					case 5:
						func_329(uParam0, 202788691, -1322016827, 1, 0);
						break;
					
					case 6:
						func_329(uParam0, 371102273, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case -1045183535:
			if (func_328(iLocal_105))
			{
				if (!func_319(1623028892, -1045183535, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_329(uParam0, -377062173, -571619404, 1, 1);
							break;
						
						case 2:
							func_329(uParam0, 384708672, 962500902, 1, 0);
							break;
						
						case 3:
							func_329(uParam0, -1802258419, 962500902, 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, -377062173, -571619404, 1, 1);
							break;
						
						case 1:
							func_329(uParam0, 384708672, 962500902, 1, 0);
							break;
						
						case 2:
							func_329(uParam0, -1802258419, 962500902, 2, 0);
							break;
						
						case 3:
							func_329(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_329(uParam0, -377062173, -571619404, 1, 1);
						break;
					
					case 1:
						func_329(uParam0, 384708672, 962500902, 1, 0);
						break;
					
					case 2:
						func_329(uParam0, -1802258419, 962500902, 2, 0);
						break;
					}
			}
			break;
		
		case 2132975508:
			if (func_328(iLocal_105))
			{
				if (!func_319(1623028892, 2132975508, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_329(uParam0, -979292288, -571619404, 1, 1);
							break;
						
						case 2:
							func_329(uParam0, -1284994289, -571619404, 2, 0);
							break;
						
						case 3:
							func_329(uParam0, 2076495324, 953267555, 1, 0);
							break;
						
						case 4:
							func_329(uParam0, -1439939148, 196630833, 1, 0);
							break;
						
						case 5:
							func_329(uParam0, -2089531990, 1863181664, 1, 0);
							break;
						
						case 6:
							func_329(uParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 7:
							func_329(uParam0, -1470645128, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_329(uParam0, -979292288, -571619404, 1, 1);
							break;
						
						case 1:
							func_329(uParam0, -1284994289, -571619404, 2, 0);
							break;
						
						case 2:
							func_329(uParam0, 2076495324, 953267555, 1, 0);
							break;
						
						case 3:
							func_329(uParam0, -1439939148, 196630833, 1, 0);
							break;
						
						case 4:
							func_329(uParam0, -2089531990, 1863181664, 1, 0);
							break;
						
						case 5:
							func_329(uParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 6:
							func_329(uParam0, -1470645128, 962500902, 1, 0);
							break;
						
						case 7:
							func_329(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_329(uParam0, -979292288, -571619404, 1, 1);
						break;
					
					case 1:
						func_329(uParam0, -1284994289, -571619404, 2, 0);
						break;
					
					case 2:
						func_329(uParam0, 2076495324, 953267555, 1, 0);
						break;
					
					case 3:
						func_329(uParam0, -1439939148, 196630833, 1, 0);
						break;
					
					case 4:
						func_329(uParam0, -2089531990, 1863181664, 1, 0);
						break;
					
					case 5:
						func_329(uParam0, 202788691, -1322016827, 1, 0);
						break;
					
					case 6:
						func_329(uParam0, -1470645128, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case 1432025498:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, -845938367, -571619404, 1, 1);
					break;
				
				case 1:
					func_329(uParam0, -1618338827, -571619404, 2, 0);
					break;
				
				case 2:
					func_329(uParam0, -380098265, -571619404, 3, 0);
					break;
				
				case 3:
					func_329(uParam0, 1315288101, -571619404, 4, 0);
					break;
				
				case 4:
					func_329(uParam0, 1004815965, -571619404, 5, 0);
					break;
				
				case 5:
					func_329(uParam0, 0, -1572840598, 1, 1);
					break;
				
				case 6:
					func_329(uParam0, 2076495324, -1572840598, 2, 0);
					break;
				
				case 7:
					func_329(uParam0, 0, 196630833, 1, 1);
					break;
				
				case 8:
					func_329(uParam0, 1108334355, 196630833, 2, 0);
					break;
				
				case 9:
					func_329(uParam0, 77277509, 196630833, 3, 0);
					break;
				
				case 10:
					func_329(uParam0, 1060929921, 196630833, 4, 0);
					break;
				
				case 11:
					func_329(uParam0, 0, 1863181664, 1, 1);
					break;
				
				case 12:
					func_329(uParam0, -1404903567, 1863181664, 2, 0);
					break;
				
				case 13:
					func_329(uParam0, 1602080333, 1863181664, 3, 0);
					break;
				
				case 14:
					func_329(uParam0, 0, 962500902, 1, 1);
					break;
				
				case 15:
					func_329(uParam0, -474112444, 962500902, 2, 0);
					break;
				
				case 16:
					func_329(uParam0, 387223451, 962500902, 3, 0);
					break;
				
				case 17:
					func_329(uParam0, 617753366, 962500902, 4, 0);
					break;
				
				case 18:
					func_329(uParam0, -222378256, 962500902, 5, 0);
					break;
				
				case 19:
					func_329(uParam0, 8741501, 962500902, 6, 0);
					break;
				
				case 20:
					func_329(uParam0, -601286203, 962500902, 7, 0);
					break;
				
				case 21:
					func_329(uParam0, -511433605, 962500902, 8, 0);
					break;
				
				case 22:
					func_329(uParam0, -655387818, 962500902, 9, 0);
					break;
				
				case 23:
					func_329(uParam0, -282476598, 962500902, 10, 0);
					break;
				
				case 24:
					func_329(uParam0, 1739501925, 962500902, 11, 0);
					break;
				
				case 25:
					func_329(uParam0, 1178671645, 962500902, 12, 0);
					break;
			}
			break;
		
		case -1768145561:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, 382112385, -571619404, 1, 1);
					break;
				
				case 1:
					func_329(uParam0, -568352468, -571619404, 2, 0);
					break;
				
				case 2:
					func_329(uParam0, -2023373174, -571619404, 3, 0);
					break;
				
				case 3:
					func_329(uParam0, -570355066, -571619404, 4, 0);
					break;
				
				case 4:
					func_329(uParam0, 1362433589, -571619404, 5, 0);
					break;
				
				case 5:
					func_329(uParam0, 1346235024, -571619404, 6, 0);
					break;
				
				case 6:
					func_329(uParam0, 0, 679107254, 1, 1);
					break;
				
				case 7:
					func_329(uParam0, 2076495324, 679107254, 2, 0);
					break;
				
				case 8:
					func_329(uParam0, 0, 1684637069, 1, 1);
					break;
				
				case 9:
					func_329(uParam0, 1108334355, 1684637069, 2, 0);
					break;
				
				case 10:
					func_329(uParam0, 77277509, 1684637069, 3, 0);
					break;
				
				case 11:
					func_329(uParam0, -966040254, 1684637069, 4, 0);
					break;
				
				case 12:
					func_329(uParam0, 0, 1863181664, 1, 1);
					break;
				
				case 13:
					func_329(uParam0, -1489156508, 1863181664, 2, 0);
					break;
				
				case 14:
					func_329(uParam0, -1181482284, 1863181664, 3, 0);
					break;
				
				case 15:
					func_329(uParam0, -932732805, 1863181664, 4, 0);
					break;
				
				case 16:
					func_329(uParam0, -569259057, 1863181664, 5, 0);
					break;
				
				case 17:
					func_329(uParam0, -326080308, 1863181664, 6, 0);
					break;
				
				case 18:
					func_329(uParam0, 48731514, 1863181664, 7, 0);
					break;
				
				case 19:
					func_329(uParam0, 880736428, 1863181664, 8, 0);
					break;
				
				case 20:
					func_329(uParam0, 1303784126, 1863181664, 9, 0);
					break;
				
				case 21:
					func_329(uParam0, 0, -1322016827, 1, 1);
					break;
				
				case 22:
					func_329(uParam0, -1654288262, -1322016827, 2, 0);
					break;
				
				case 23:
					func_329(uParam0, -415870039, -1312077031, 1, 1);
					break;
				
				case 24:
					func_329(uParam0, -109086661, -1312077031, 2, 0);
					break;
				
				case 25:
					func_329(uParam0, 0, 962500902, 1, 1);
					break;
				
				case 26:
					func_329(uParam0, -737430213, 962500902, 2, 0);
					break;
				
				case 27:
					func_329(uParam0, 1125852043, 962500902, 3, 0);
					break;
				
				case 28:
					func_329(uParam0, 886015732, 962500902, 4, 0);
					break;
				
				case 29:
					func_329(uParam0, -1262287139, 962500902, 5, 0);
					break;
				
				case 30:
					func_329(uParam0, -295208411, 962500902, 6, 0);
					break;
				
				case 31:
					func_329(uParam0, -544154504, 962500902, 7, 0);
					break;
				
				case 32:
					func_329(uParam0, 172765678, 962500902, 8, 0);
					break;
				
				case 33:
					func_329(uParam0, -1982877449, 962500902, 9, 0);
					break;
				
				case 34:
					func_329(uParam0, 2072122460, 962500902, 10, 0);
					break;
				
				case 35:
					func_329(uParam0, -1986220171, 962500902, 11, 0);
					break;
				
				case 36:
					func_329(uParam0, 1377355801, 962500902, 12, 0);
					break;
			}
			break;
		
		case -2009644972:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, 21392614, -571619404, 1, 1);
					break;
				
				case 1:
					func_329(uParam0, -829683854, -571619404, 2, 0);
					break;
				
				case 2:
					func_329(uParam0, -1876057490, -571619404, 3, 0);
					break;
				
				case 3:
					func_329(uParam0, -424845447, -571619404, 4, 0);
					break;
				
				case 4:
					func_329(uParam0, -1928301566, -571619404, 5, 0);
					break;
				
				case 5:
					func_329(uParam0, -1055790298, -571619404, 6, 0);
					break;
				
				case 6:
					func_329(uParam0, 0, -1572840598, 1, 1);
					break;
				
				case 7:
					func_329(uParam0, 1246324211, -1572840598, 2, 0);
					break;
				
				case 8:
					func_329(uParam0, 0, 196630833, 1, 1);
					break;
				
				case 9:
					func_329(uParam0, 1205768792, 196630833, 2, 0);
					break;
				
				case 10:
					func_329(uParam0, 0, 945598191, 1, 1);
					break;
				
				case 11:
					func_329(uParam0, 1709866683, 945598191, 2, 0);
					break;
				
				case 12:
					func_329(uParam0, -1434287169, 945598191, 3, 0);
					break;
				
				case 13:
					func_329(uParam0, 0, 962500902, 1, 1);
					break;
				
				case 14:
					func_329(uParam0, 259780317, 962500902, 2, 0);
					break;
				
				case 15:
					func_329(uParam0, -1973342474, 962500902, 3, 0);
					break;
				
				case 16:
					func_329(uParam0, 1996130345, 962500902, 4, 0);
					break;
				
				case 17:
					func_329(uParam0, -1455657812, 962500902, 5, 0);
					break;
				
				case 18:
					func_329(uParam0, -1668263084, 962500902, 6, 0);
					break;
				
				case 19:
					func_329(uParam0, 1308243489, 962500902, 7, 0);
					break;
				
				case 20:
					func_329(uParam0, 1122574335, 962500902, 8, 0);
					break;
				
				case 21:
					func_329(uParam0, 1420313469, 962500902, 9, 0);
					break;
				
				case 22:
					func_329(uParam0, 109848390, 962500902, 10, 0);
					break;
				
				case 23:
					func_329(uParam0, 593945703, 962500902, 11, 0);
					break;
				
				case 24:
					func_329(uParam0, 1142457062, 962500902, 12, 0);
					break;
			}
			break;
		
		case 1785463520:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, -1797182002, -571619404, 1, 1);
					break;
				
				case 1:
					func_329(uParam0, -422587990, -571619404, 2, 0);
					break;
				
				case 2:
					func_329(uParam0, -679861550, -571619404, 3, 0);
					break;
				
				case 3:
					func_329(uParam0, 1842849902, -571619404, 4, 0);
					break;
				
				case 4:
					func_329(uParam0, -193998727, -571619404, 5, 0);
					break;
				
				case 5:
					func_329(uParam0, -515203373, -571619404, 6, 0);
					break;
				
				case 6:
					func_329(uParam0, 0, 679107254, 1, 1);
					break;
				
				case 7:
					func_329(uParam0, 2076495324, 679107254, 2, 0);
					break;
				
				case 8:
					func_329(uParam0, 1108334355, 1684637069, 2, 0);
					break;
				
				case 9:
					func_329(uParam0, -966040254, 1684637069, 3, 0);
					break;
				
				case 10:
					func_329(uParam0, 1528590652, 1684637069, 4, 1);
					break;
				
				case 11:
					func_329(uParam0, 0, 945598191, 1, 1);
					break;
				
				case 12:
					func_329(uParam0, -2089531990, 945598191, 2, 0);
					break;
				
				case 13:
					func_329(uParam0, -1181482284, 945598191, 3, 0);
					break;
				
				case 14:
					func_329(uParam0, -932732805, 945598191, 4, 0);
					break;
				
				case 15:
					func_329(uParam0, -569259057, 945598191, 5, 0);
					break;
				
				case 16:
					func_329(uParam0, -326080308, 945598191, 6, 0);
					break;
				
				case 17:
					func_329(uParam0, 48731514, 945598191, 7, 0);
					break;
				
				case 18:
					func_329(uParam0, 880736428, 945598191, 8, 0);
					break;
				
				case 19:
					func_329(uParam0, 1303784126, 945598191, 9, 0);
					break;
				
				case 20:
					func_329(uParam0, 0, -546751811, 1, 1);
					break;
				
				case 21:
					func_329(uParam0, -1654288262, -546751811, 2, 0);
					break;
				
				case 22:
					func_329(uParam0, 941317513, -1312077031, 1, 1);
					break;
				
				case 23:
					func_329(uParam0, 1748450780, -1312077031, 2, 0);
					break;
				
				case 24:
					func_329(uParam0, 0, 962500902, 1, 1);
					break;
				
				case 25:
					func_329(uParam0, -1869284448, 962500902, 2, 0);
					break;
				
				case 26:
					func_329(uParam0, 1931539634, 962500902, 3, 0);
					break;
				
				case 27:
					func_329(uParam0, 1624199183, 962500902, 4, 0);
					break;
				
				case 28:
					func_329(uParam0, -26834113, 962500902, 5, 0);
					break;
				
				case 29:
					func_329(uParam0, -210406055, 962500902, 6, 0);
					break;
				
				case 30:
					func_329(uParam0, 423313640, 962500902, 7, 0);
					break;
				
				case 31:
					func_329(uParam0, 276639596, 962500902, 8, 0);
					break;
				
				case 32:
					func_329(uParam0, -991356863, 962500902, 9, 0);
					break;
				
				case 33:
					func_329(uParam0, -1682848301, 962500902, 10, 0);
					break;
				
				case 34:
					func_329(uParam0, 996213771, 962500902, 11, 0);
					break;
				
				case 35:
					func_329(uParam0, -1214048550, 962500902, 12, 0);
					break;
			}
			break;
		
		case -879347409:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, -1172055874, -571619404, 1, 1);
					break;
				
				case 1:
					func_329(uParam0, -958864266, -571619404, 2, 0);
					break;
				
				case 2:
					func_329(uParam0, 15712037, -571619404, 3, 0);
					break;
				
				case 3:
					func_329(uParam0, 284438159, -571619404, 4, 0);
					break;
				
				case 4:
					func_329(uParam0, 231258687, -571619404, 5, 0);
					break;
				
				case 5:
					func_329(uParam0, 0, 196630833, 1, 1);
					break;
				
				case 6:
					func_329(uParam0, 1108334355, 196630833, 2, 0);
					break;
				
				case 7:
					func_329(uParam0, 77277509, 196630833, 3, 0);
					break;
				
				case 8:
					func_329(uParam0, 0, 679107254, 1, 1);
					break;
				
				case 9:
					func_329(uParam0, 899381934, 679107254, 2, 0);
					break;
				
				case 10:
					func_329(uParam0, 0, 1863181664, 1, 1);
					break;
				
				case 11:
					func_329(uParam0, 654802123, 1863181664, 2, 0);
					break;
				
				case 12:
					func_329(uParam0, 0, 962500902, 1, 1);
					break;
				
				case 13:
					func_329(uParam0, -1069552225, 962500902, 2, 0);
					break;
				
				case 14:
					func_329(uParam0, 11918884, 962500902, 3, 0);
					break;
				
				case 15:
					func_329(uParam0, 176157112, 962500902, 4, 0);
					break;
				
				case 16:
					func_329(uParam0, -220052855, 962500902, 5, 0);
					break;
				
				case 17:
					func_329(uParam0, 288456487, 962500902, 6, 0);
					break;
				
				case 18:
					func_329(uParam0, 398658626, 962500902, 7, 0);
					break;
				
				case 19:
					func_329(uParam0, 628697006, 962500902, 8, 0);
					break;
				
				case 20:
					func_329(uParam0, 925911836, 962500902, 9, 0);
					break;
				
				case 21:
					func_329(uParam0, 1222307441, 962500902, 10, 0);
					break;
				
				case 22:
					func_329(uParam0, 552442715, 962500902, 11, 0);
					break;
				
				case 23:
					func_329(uParam0, -648943513, 962500902, 12, 0);
					break;
			}
			break;
		
		case -2066285827:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, 25766362, -571619404, 1, 1);
					break;
				
				case 1:
					func_329(uParam0, -273676760, -571619404, 2, 0);
					break;
				
				case 2:
					func_329(uParam0, -2111807319, -571619404, 3, 0);
					break;
				
				case 3:
					func_329(uParam0, -1449330342, -571619404, 4, 0);
					break;
				
				case 4:
					func_329(uParam0, -89655827, -571619404, 5, 0);
					break;
				
				case 5:
					func_329(uParam0, 1130501904, -571619404, 6, 0);
					break;
				
				case 6:
					func_329(uParam0, 0, 679107254, 1, 1);
					break;
				
				case 7:
					func_329(uParam0, 2076495324, 679107254, 2, 0);
					break;
				
				case 8:
					func_329(uParam0, 0, 1684637069, 1, 1);
					break;
				
				case 9:
					func_329(uParam0, 1108334355, 1684637069, 2, 0);
					break;
				
				case 10:
					func_329(uParam0, -944910075, 1684637069, 3, 0);
					break;
				
				case 11:
					func_329(uParam0, 1060929921, 1684637069, 4, 0);
					break;
				
				case 12:
					func_329(uParam0, 1704640795, -1312077031, 1, 1);
					break;
				
				case 13:
					func_329(uParam0, 1005743559, -1312077031, 2, 0);
					break;
				
				case 14:
					func_329(uParam0, 0, 1863181664, 1, 1);
					break;
				
				case 15:
					func_329(uParam0, -2089531990, 1863181664, 2, 0);
					break;
				
				case 16:
					func_329(uParam0, -1181482284, 1863181664, 3, 0);
					break;
				
				case 17:
					func_329(uParam0, -932732805, 1863181664, 4, 0);
					break;
				
				case 18:
					func_329(uParam0, -569259057, 1863181664, 5, 0);
					break;
				
				case 19:
					func_329(uParam0, -326080308, 1863181664, 6, 0);
					break;
				
				case 20:
					func_329(uParam0, 48731514, 1863181664, 7, 0);
					break;
				
				case 21:
					func_329(uParam0, 880736428, 1863181664, 8, 0);
					break;
				
				case 22:
					func_329(uParam0, 1303784126, 1863181664, 9, 0);
					break;
				
				case 23:
					func_329(uParam0, 0, -1322016827, 1, 1);
					break;
				
				case 24:
					func_329(uParam0, -1654288262, -1322016827, 2, 0);
					break;
				
				case 25:
					func_329(uParam0, 0, 962500902, 1, 1);
					break;
				
				case 26:
					func_329(uParam0, -1371515465, 962500902, 2, 0);
					break;
				
				case 27:
					func_329(uParam0, -1190793877, 962500902, 3, 0);
					break;
				
				case 28:
					func_329(uParam0, -1497085720, 962500902, 4, 0);
					break;
				
				case 29:
					func_329(uParam0, -1803148180, 962500902, 5, 0);
					break;
				
				case 30:
					func_329(uParam0, -1975971886, 962500902, 6, 0);
					break;
				
				case 31:
					func_329(uParam0, 36929477, 962500902, 7, 0);
					break;
				
				case 32:
					func_329(uParam0, -268444834, 962500902, 8, 0);
					break;
				
				case 33:
					func_329(uParam0, -574769446, 962500902, 9, 0);
					break;
				
				case 34:
					func_329(uParam0, -882699739, 962500902, 10, 0);
					break;
				
				case 35:
					func_329(uParam0, -1468181474, 962500902, 11, 0);
					break;
				
				case 36:
					func_329(uParam0, -974541230, 962500902, 12, 0);
					break;
			}
			break;
		
		case -1355376991:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, -673450233, 962500902, 1, 0);
					break;
			}
			break;
		
		case 727643628:
			switch (iParam2)
			{
				case 0:
					func_329(uParam0, 1423184737, -571619404, 1, 1);
					break;
				
				case 1:
					func_329(uParam0, -2122814295, -571619404, 2, 0);
					break;
				
				case 2:
					func_329(uParam0, -1828202758, 1863181664, 1, 0);
					break;
			}
			break;
		
		default:
			iVar12 = func_66(iParam1, &uVar15);
			if (iVar12 != -1)
			{
				iVar13 = 0;
				while (iVar13 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar12))
				{
					if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar12, iVar13, &Var54))
					{
						if (!func_63(Var54.f_3))
						{
							if (Var54 == -571619404 || Var54 == 291640902)
							{
								iVar1++;
							}
							else if (Var54 == 679107254 || Var54 == -1572840598)
							{
								iVar2++;
							}
							else if (Var54 == 196630833 || Var54 == 1684637069)
							{
								iVar3++;
							}
							else if (Var54 == -1843287667 || Var54 == 497110245)
							{
								iVar4++;
							}
							else if (Var54 == -1322016827 || Var54 == -546751811)
							{
								iVar5++;
							}
							else if (Var54 == 1863181664 || Var54 == 945598191)
							{
								iVar6++;
							}
							else if (Var54 == 1731751835)
							{
								iVar7++;
							}
							else if (Var54 == 962500902)
							{
								iVar8++;
							}
							else if (Var54 == -31573710)
							{
								iVar9++;
							}
							else if (Var54 == -1312077031)
							{
								iVar10++;
							}
							else
							{
								iVar11++;
							}
							if (iVar14 == iParam2)
							{
								if (Var54 == -571619404 || Var54 == 291640902)
								{
									iVar0 = iVar1;
								}
								else if (Var54 == 679107254 || Var54 == -1572840598)
								{
									iVar0 = iVar2;
								}
								else if (Var54 == 196630833 || Var54 == 1684637069)
								{
									iVar0 = iVar3;
								}
								else if (Var54 == -1843287667 || Var54 == 497110245)
								{
									iVar0 = iVar4;
								}
								else if (Var54 == -1322016827 || Var54 == -546751811)
								{
									iVar0 = iVar5;
								}
								else if (Var54 == 1863181664 || Var54 == 945598191)
								{
									iVar0 = iVar6;
								}
								else if (Var54 == 1731751835)
								{
									iVar0 = iVar7;
								}
								else if (Var54 == 962500902)
								{
									iVar0 = iVar8;
								}
								else if (Var54 == -31573710)
								{
									iVar0 = iVar9;
								}
								else if (Var54 == -1312077031)
								{
									iVar0 = iVar10;
								}
								else
								{
									iVar0 = iVar11;
								}
								func_329(uParam0, Var54.f_3, Var54, iVar0, Var54.f_1);
							}
							iVar14++;
						}
					}
					iVar13++;
				}
			}
			break;
	}
	if (bParam3)
	{
		uParam0->f_2 = func_279(iParam1, *uParam0);
	}
	return uParam0->f_4 != 989182658;
}

int func_279(int iParam0, int iParam1)
{
	iVar0 = 0;
	fVar1 = 2.5f;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case 453432689:
				switch (iParam1)
				{
					case -19858063:
						iVar0 = 120;
						break;
					
					case -316253668:
						iVar0 = 155;
						break;
					
					case 899381934:
						iVar0 = 189;
						break;
					
					case 1709866683:
						iVar0 = 729;
						break;
					
					case -684126074:
						iVar0 = 18600;
						break;
				}
				break;
			
			case 1593441988:
				switch (iParam1)
				{
					case 119648377:
						iVar0 = 136;
						break;
					
					case -696561875:
						iVar0 = 159;
						break;
					
					case 899381934:
						iVar0 = 189;
						break;
					
					case -1023114086:
						iVar0 = 735;
						break;
					
					case -966439566:
						iVar0 = 14500;
						break;
				}
				break;
			
			case 584646201:
				switch (iParam1)
				{
					case 834974250:
						iVar0 = 145;
						break;
					
					case 614078421:
						iVar0 = 165;
						break;
					
					case 899381934:
						iVar0 = 185;
						break;
					
					case -1023114086:
						iVar0 = 730;
						break;
					
					case -1686714580:
						iVar0 = 15800;
						break;
				}
				break;
			
			case 324215364:
				switch (iParam1)
				{
					case -884429072:
						iVar0 = 120;
						break;
					
					case 283556395:
						iVar0 = 137;
						break;
					
					case 899381934:
						iVar0 = 190;
						break;
					
					case -1657815255:
						iVar0 = 549;
						break;
					
					case -1489156508:
						iVar0 = 775;
						break;
					
					case 1215999497:
						iVar0 = 15100;
						break;
				}
				break;
			
			case 736523883:
				switch (iParam1)
				{
					case 643254679:
						iVar0 = 119;
						break;
					
					case 889808635:
						iVar0 = 134;
						break;
					
					case 2043113590:
						iVar0 = -1;
						break;
					
					case 2076495324:
						iVar0 = 210;
						break;
					
					case 1019656791:
						iVar0 = 549;
						break;
					
					case -1023114086:
						iVar0 = 815;
						break;
					
					case 663170192:
						iVar0 = 19300;
						break;
				}
				break;
			
			case -1074790547:
				switch (iParam1)
				{
					case -1101075946:
						iVar0 = 120;
						break;
					
					case -1323216997:
						iVar0 = 129;
						break;
					
					case -604986051:
						iVar0 = -1;
						break;
					
					case 202788691:
						iVar0 = 159;
						break;
					
					case 2076495324:
						iVar0 = 189;
						break;
					
					case -1657815255:
						iVar0 = 565;
						break;
					
					case -1489156508:
						iVar0 = 810;
						break;
					
					case 1319990579:
						iVar0 = 14400;
						break;
				}
				break;
			
			case -2084633992:
				switch (iParam1)
				{
					case -1614924820:
						iVar0 = 99;
						break;
					
					case -1861183855:
						iVar0 = 105;
						break;
					
					case -1167922891:
						iVar0 = -1;
						break;
					
					case 202788691:
						iVar0 = 132;
						break;
					
					case 2076495324:
						iVar0 = 150;
						break;
					
					case -1596416958:
						iVar0 = 450;
						break;
					
					case -2089531990:
						iVar0 = 815;
						break;
					
					case -660892072:
						iVar0 = 17900;
						break;
				}
				break;
			
			case -1357824103:
				switch (iParam1)
				{
					case -91250417:
						iVar0 = 110;
						break;
					
					case -1899902599:
						iVar0 = 124;
						break;
					
					case 2076495324:
						iVar0 = 159;
						break;
					
					case -1439939148:
						iVar0 = 450;
						break;
					
					case -2089531990:
						iVar0 = 812;
						break;
					
					case 930927479:
						iVar0 = 16500;
						break;
				}
				break;
			
			case -1660422300:
				switch (iParam1)
				{
					case -197857404:
						iVar0 = 135;
						break;
					
					case -2112517305:
						iVar0 = 145;
						break;
					
					case 1006677997:
						iVar0 = 450;
						break;
					
					case -690308418:
						iVar0 = 15600;
						break;
				}
				break;
			
			case 2144741730:
				switch (iParam1)
				{
					case -503336118:
						iVar0 = 119;
						break;
					
					case -691692330:
						iVar0 = 126;
						break;
					
					case 202788691:
						iVar0 = 129;
						break;
					
					case -1596416958:
						iVar0 = 559;
						break;
					
					case -1828795171:
						iVar0 = 14000;
						break;
				}
				break;
			
			case 487013001:
				switch (iParam1)
				{
					case 2076495324:
						iVar0 = 189;
						break;
					
					case -435637410:
						iVar0 = 975;
						break;
					
					case -1562927653:
						iVar0 = 16900;
						break;
				}
				break;
			
			case -494615257:
				switch (iParam1)
				{
					case -1796727865:
						iVar0 = 129;
						break;
					
					case -2034401422:
						iVar0 = 139;
						break;
					
					case 202788691:
						iVar0 = 150;
						break;
					
					case 2076495324:
						iVar0 = 225;
						break;
					
					case -2089531990:
						iVar0 = 899;
						break;
				}
				break;
			
			case 100416529:
				switch (iParam1)
				{
					case -1681506167:
						iVar0 = -1;
						break;
					
					case -767279652:
						iVar0 = 559;
						break;
					
					case -1135289737:
						iVar0 = 975;
						break;
					
					case -1489156508:
						iVar0 = 920;
						break;
					
					case 1077065191:
						iVar0 = 13000;
						break;
				}
				break;
			
			case 205991906:
				switch (iParam1)
				{
					case 1198478068:
						iVar0 = -1;
						break;
					
					case -767279652:
						iVar0 = 575;
						break;
					
					case -1135289737:
						iVar0 = 999;
						break;
				}
				break;
			
			case -1568386805:
				switch (iParam1)
				{
					case 202788691:
						iVar0 = 128;
						break;
					
					case 2076495324:
						iVar0 = 185;
						break;
					
					case -1439939148:
						iVar0 = 525;
						break;
				}
				break;
			
			case 1119849093:
				switch (iParam1)
				{
					case -924946682:
						iVar0 = -1;
						break;
				}
				break;
			
			case -270015777:
				switch (iParam1)
				{
					case -1928132688:
						iVar0 = 110;
						break;
					
					case -1152981993:
						iVar0 = 9700;
						break;
					
					case 2076495324:
						iVar0 = 2275;
						break;
					
					case -1657815255:
						iVar0 = 10875;
						break;
					
					case -1489156508:
						iVar0 = 12400;
						break;
					
					case 663517359:
						iVar0 = 17600;
						break;
				}
				if (func_318() && (func_317() || func_316()))
				{
					iVar0 = 0;
				}
				break;
			
			case -1654528753:
				switch (iParam1)
				{
					case 202788691:
						iVar0 = 4100;
						break;
					
					case 2076495324:
						iVar0 = 2300;
						break;
					
					case -1489156508:
						iVar0 = 12450;
						break;
				}
				if (func_318() && (func_317() || func_316()))
				{
					iVar0 = 0;
				}
				break;
			
			case -1716589765:
				switch (iParam1)
				{
					case 580369945:
						iVar0 = 0;
						break;
					
					case -640439150:
						iVar0 = 9500;
						break;
					
					case 899381934:
						iVar0 = 2000;
						break;
					
					case -1489156508:
						iVar0 = 12250;
						break;
					
					case 2008591151:
						iVar0 = 20000;
						break;
				}
				if (func_318() && (func_317() || func_316()))
				{
					iVar0 = 0;
				}
				break;
			
			case 2017895192:
				switch (iParam1)
				{
					case -2052698631:
						iVar0 = 13700;
						break;
				}
				break;
			
			case -952879014:
				switch (iParam1)
				{
					case -667205311:
						iVar0 = 0;
						break;
					
					case -855823675:
						iVar0 = 3612;
						break;
					
					case 471997210:
						iVar0 = 0;
						break;
					
					case 2076495324:
						iVar0 = 1020;
						break;
					
					case -2089531990:
						iVar0 = 5000;
						break;
					
					case 202788691:
						iVar0 = 1760;
						break;
					
					case 371102273:
						iVar0 = 17200;
						break;
				}
				break;
			
			case -771403250:
				switch (iParam1)
				{
					case 222992026:
						iVar0 = 0;
						break;
					
					case 1694090795:
						iVar0 = 3680;
						break;
					
					case 899381934:
						iVar0 = 710;
						break;
					
					case -1023114086:
						iVar0 = 4800;
						break;
					
					case 2053798779:
						iVar0 = 12000;
						break;
				}
				break;
			
			case -656458692:
				switch (iParam1)
				{
					case -971770235:
						iVar0 = 4900;
						break;
					
					case -287703709:
						iVar0 = 5600;
						break;
					
					case 1351683121:
						iVar0 = 5500;
						break;
					
					case -1755194916:
						iVar0 = 5200;
						break;
					
					case 2112683568:
						iVar0 = 4600;
						break;
					
					case 1062111910:
						iVar0 = 4700;
						break;
					
					case 146278587:
						iVar0 = 4800;
						break;
					
					case -494162961:
						iVar0 = 4300;
						break;
					
					case 2062808965:
						iVar0 = 4000;
						break;
				}
				break;
			
			case 2132975508:
				switch (iParam1)
				{
					case -979292288:
						iVar0 = 108;
						break;
					
					case -1284994289:
						iVar0 = 9950;
						break;
					
					case 2076495324:
						iVar0 = 2575;
						break;
					
					case -1657815255:
						iVar0 = 11350;
						break;
					
					case -1489156508:
						iVar0 = 12500;
						break;
					
					case 202788691:
						iVar0 = 4275;
						break;
					
					case -1470645128:
						iVar0 = 16600;
						break;
				}
				break;
			
			case -1076751822:
				switch (iParam1)
				{
					case -125817127:
						iVar0 = 29;
						break;
					
					case 2063610803:
						iVar0 = 9150;
						break;
					
					case -2144080721:
						iVar0 = 13900;
						break;
				}
				break;
			
			case -1063057011:
				switch (iParam1)
				{
					case -959978111:
						iVar0 = 108;
						break;
					
					case 2089537806:
						iVar0 = 9975;
						break;
					
					case 1801039530:
						iVar0 = -1;
						break;
					
					case 2076495324:
						iVar0 = 2525;
						break;
					
					case -1596416958:
						iVar0 = 11550;
						break;
					
					case -1489156508:
						iVar0 = 12500;
						break;
					
					case 1929467122:
						iVar0 = 18000;
						break;
				}
				break;
			
			case -619010992:
				switch (iParam1)
				{
					case 1198425599:
						iVar0 = 0;
						break;
					
					case -1188271751:
						iVar0 = 3680;
						break;
					
					case -1444295948:
						iVar0 = -1;
						break;
					
					case -1023114086:
						iVar0 = 4840;
						break;
				}
				break;
			
			default:
				iVar2 = func_66(iParam0, &uVar4);
				if (iVar2 != -1)
				{
					iVar3 = 0;
					while (iVar3 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar2))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar2, iVar3, &Var43))
						{
							if (!func_63(Var43.f_3))
							{
								if (Var43.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (!func_314(iParam1))
									{
										Var43.f_5 = -1;
									}
									if (Var43.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var43.f_5;
									}
									if (iParam0 == 1317494643)
									{
										if (func_318() && (func_317() || func_316()))
										{
											iVar0 = 0;
										}
									}
								}
							}
						}
						iVar3++;
					}
				}
				break;
		}
	}
	else
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case 453432689:
				switch (iParam1)
				{
					case -19858063:
						iVar0 = 120;
						break;
					
					case -316253668:
						iVar0 = 9175;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2885));
						break;
					
					case 899381934:
						iVar0 = 1675;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4337));
						break;
					
					case 1709866683:
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4338));
						break;
					
					case -684126074:
						iVar0 = Global_262145.f_10572;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4415));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20718;
						break;
				}
				break;
			
			case 1593441988:
				switch (iParam1)
				{
					case 119648377:
						iVar0 = 136;
						break;
					
					case -696561875:
						iVar0 = Global_262145.f_20607;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2886));
						break;
					
					case 899381934:
						iVar0 = 1825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4339));
						break;
					
					case -1023114086:
						iVar0 = Global_262145.f_20608;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4340));
						break;
					
					case -966439566:
						iVar0 = Global_262145.f_11956;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4410));
						break;
				}
				break;
			
			case 584646201:
				switch (iParam1)
				{
					case 834974250:
						iVar0 = 145;
						break;
					
					case 614078421:
						iVar0 = 9400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2888));
						break;
					
					case 899381934:
						iVar0 = 1975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4341));
						break;
					
					case -1023114086:
						iVar0 = 12200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4342));
						break;
					
					case -1686714580:
						iVar0 = Global_262145.f_10571;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4404));
						break;
				}
				break;
			
			case 324215364:
				switch (iParam1)
				{
					case -884429072:
						iVar0 = 120;
						break;
					
					case 283556395:
						iVar0 = 9325;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2889));
						break;
					
					case 899381934:
						iVar0 = 1900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4345));
						break;
					
					case -1657815255:
						iVar0 = 10800;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4347));
						break;
					
					case -1489156508:
						iVar0 = 12150;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4346));
						break;
					
					case 1215999497:
						iVar0 = Global_262145.f_10575;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4414));
						break;
				}
				break;
			
			case 736523883:
				switch (iParam1)
				{
					case 643254679:
						iVar0 = 119;
						break;
					
					case 889808635:
						iVar0 = 9475;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2890));
						break;
					
					case 2043113590:
						iVar0 = Global_262145.f_16127;
						break;
					
					case 2076495324:
						iVar0 = 2050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4348));
						break;
					
					case 1019656791:
						iVar0 = 10825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4350));
						break;
					
					case -1023114086:
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4349));
						break;
					
					case 663170192:
						iVar0 = Global_262145.f_10574;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4419));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20719;
						break;
				}
				break;
			
			case -1074790547:
				switch (iParam1)
				{
					case -1101075946:
						iVar0 = 120;
						break;
					
					case -1323216997:
						iVar0 = 9550;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2892));
						break;
					
					case -604986051:
						iVar0 = Global_262145.f_16122;
						break;
					
					case 202788691:
						iVar0 = 4200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4358));
						break;
					
					case 2076495324:
						iVar0 = 2125;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4355));
						break;
					
					case -1657815255:
						iVar0 = 10850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4357));
						break;
					
					case -1489156508:
						iVar0 = 12300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4356));
						break;
					
					case 1319990579:
						iVar0 = Global_262145.f_10568;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4405));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20721;
						break;
				}
				break;
			
			case -2084633992:
				switch (iParam1)
				{
					case -1614924820:
						iVar0 = 99;
						break;
					
					case -1861183855:
						iVar0 = 9775;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2893));
						break;
					
					case -1167922891:
						iVar0 = Global_262145.f_16121;
						break;
					
					case 202788691:
						iVar0 = 4350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4366));
						break;
					
					case 2076495324:
						iVar0 = 2350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4363));
						break;
					
					case -1596416958:
						iVar0 = 10900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4365));
						break;
					
					case -2089531990:
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4364));
						break;
					
					case -660892072:
						iVar0 = Global_262145.f_10570;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4408));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20722;
						break;
				}
				break;
			
			case -1357824103:
				switch (iParam1)
				{
					case -91250417:
						iVar0 = 110;
						break;
					
					case -1899902599:
						iVar0 = 9925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2895));
						break;
					
					case 2076495324:
						iVar0 = 2425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4368));
						break;
					
					case -1439939148:
						iVar0 = 10950;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4370));
						break;
					
					case -2089531990:
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4369));
						break;
					
					case 930927479:
						iVar0 = Global_262145.f_10569;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4403));
						break;
				}
				break;
			
			case -1660422300:
				switch (iParam1)
				{
					case -197857404:
						iVar0 = 135;
						break;
					
					case -2112517305:
						iVar0 = 9850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2896));
						break;
					
					case 1006677997:
						iVar0 = 10925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4371));
						break;
					
					case -690308418:
						iVar0 = Global_262145.f_11957;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4413));
						break;
				}
				break;
			
			case 2144741730:
				switch (iParam1)
				{
					case -503336118:
						iVar0 = 119;
						break;
					
					case -691692330:
						iVar0 = 10000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2897));
						break;
					
					case 202788691:
						iVar0 = 4425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4393));
						break;
					
					case -1596416958:
						iVar0 = 10975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4394));
						break;
					
					case -1828795171:
						iVar0 = Global_262145.f_11958;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4409));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20720;
						break;
				}
				break;
			
			case 487013001:
				switch (iParam1)
				{
					case 2076495324:
						iVar0 = 1750;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4375));
						break;
					
					case -435637410:
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4376));
						break;
					
					case -1562927653:
						iVar0 = Global_262145.f_11953;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4417));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_22429;
						break;
				}
				break;
			
			case -494615257:
				switch (iParam1)
				{
					case -1796727865:
						iVar0 = 129;
						break;
					
					case -2034401422:
						iVar0 = 9625;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2899));
						break;
					
					case 202788691:
						iVar0 = 4275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4379));
						break;
					
					case 2076495324:
						iVar0 = 2200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4380));
						break;
					
					case -2089531990:
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4381));
						break;
				}
				break;
			
			case 100416529:
				switch (iParam1)
				{
					case -1681506167:
						iVar0 = -1;
						break;
					
					case -767279652:
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4382));
						break;
					
					case -1135289737:
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4383));
						break;
					
					case -1489156508:
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4384));
						break;
					
					case 1077065191:
						iVar0 = Global_262145.f_10577;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4420));
						break;
				}
				break;
			
			case 205991906:
				switch (iParam1)
				{
					case 1198478068:
						iVar0 = -1;
						break;
					
					case -767279652:
						iVar0 = 99;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4385));
						break;
					
					case -1135289737:
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4386));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20723;
						break;
				}
				break;
			
			case -1568386805:
				switch (iParam1)
				{
					case 202788691:
						iVar0 = 4500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4395));
						break;
					
					case 2076495324:
						iVar0 = 2500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4391));
						break;
					
					case -1439939148:
						iVar0 = 11000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4392));
						break;
				}
				break;
			
			case 1119849093:
				switch (iParam1)
				{
					case -924946682:
						iVar0 = -1;
						break;
				}
				break;
			
			case -270015777:
				switch (iParam1)
				{
					case -1928132688:
						iVar0 = 110;
						break;
					
					case -1152981993:
						iVar0 = 9700;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2891));
						break;
					
					case 2076495324:
						iVar0 = 2275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4351));
						break;
					
					case -1657815255:
						iVar0 = 10875;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4354));
						break;
					
					case -1489156508:
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4352));
						break;
					
					case 663517359:
						iVar0 = Global_262145.f_11954;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4353));
						break;
				}
				break;
			
			case 1627465347:
				switch (iParam1)
				{
					case 484812453:
						iVar0 = 0;
						break;
					
					case -355941776:
						iVar0 = Global_262145.f_6601;
						break;
				}
				break;
			
			case -1076751822:
				switch (iParam1)
				{
					case -125817127:
						iVar0 = 0;
						break;
					
					case 2063610803:
						iVar0 = Global_262145.f_7180;
						break;
					
					case -2144080721:
						iVar0 = Global_262145.f_11955;
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_22434;
						break;
				}
				break;
			
			case -1063057011:
				switch (iParam1)
				{
					case -959978111:
						iVar0 = 0;
						break;
					
					case 2089537806:
						iVar0 = Global_262145.f_7185;
						break;
					
					case 1801039530:
						iVar0 = Global_262145.f_16124;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_7188;
						break;
					
					case -1596416958:
						iVar0 = Global_262145.f_7184;
						break;
					
					case -1489156508:
						iVar0 = Global_262145.f_7182;
						break;
					
					case 202788691:
						iVar0 = Global_262145.f_7187;
						break;
					
					case 1929467122:
						iVar0 = Global_262145.f_11959;
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_22430;
						break;
				}
				break;
			
			case -771403250:
				switch (iParam1)
				{
					case 222992026:
						iVar0 = 0;
						break;
					
					case 1694090795:
						iVar0 = Global_262145.f_7186;
						break;
					
					case 899381934:
						iVar0 = Global_262145.f_7190;
						break;
					
					case -1023114086:
						iVar0 = Global_262145.f_7183;
						break;
					
					case 2053798779:
						iVar0 = Global_262145.f_7210;
						break;
				}
				break;
			
			case 2132975508:
				switch (iParam1)
				{
					case -979292288:
						iVar0 = 0;
						break;
					
					case -1284994289:
						iVar0 = Global_262145.f_7193;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_7196;
						break;
					
					case -2089531990:
						iVar0 = Global_262145.f_7191;
						break;
					
					case -1439939148:
						iVar0 = Global_262145.f_7192;
						break;
					
					case 202788691:
						iVar0 = Global_262145.f_7194;
						break;
					
					case -1470645128:
						iVar0 = Global_262145.f_11960;
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_22433;
						break;
				}
				break;
			
			case 137902532:
				switch (iParam1)
				{
					case 1168357051:
						iVar0 = 0;
						break;
					
					case 867832552:
						iVar0 = Global_262145.f_7668;
						break;
					
					case -1023114086:
						iVar0 = Global_262145.f_7669;
						break;
				}
				break;
			
			case 984333226:
				switch (iParam1)
				{
					case 844049759:
						iVar0 = 0;
						break;
					
					case -1759709443:
						iVar0 = Global_262145.f_8392;
						break;
					
					case -2000168365:
						iVar0 = Global_262145.f_16128;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_8393;
						break;
					
					case -1489156508:
						iVar0 = Global_262145.f_8394;
						break;
					
					case 202788691:
						iVar0 = Global_262145.f_8395;
						break;
				}
				break;
			
			case -952879014:
				switch (iParam1)
				{
					case -667205311:
						iVar0 = 0;
						break;
					
					case -855823675:
						iVar0 = Global_262145.f_8398;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_8399;
						break;
					
					case -2089531990:
						iVar0 = Global_262145.f_8401;
						break;
					
					case 202788691:
						iVar0 = Global_262145.f_8402;
						break;
					
					case 371102273:
						iVar0 = Global_262145.f_8403;
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_22431;
						break;
				}
				break;
			
			case -1654528753:
				switch (iParam1)
				{
					case 202788691:
						iVar0 = 4100;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_14622));
						break;
					
					case 2076495324:
						iVar0 = 2300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4377));
						break;
					
					case -1489156508:
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4378));
						break;
				}
				if (func_318() && (func_317() || func_316()))
				{
					iVar0 = 0;
				}
				break;
			
			case -1716589765:
				switch (iParam1)
				{
					case 580369945:
						iVar0 = 0;
						break;
					
					case -640439150:
						iVar0 = 9500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2887));
						break;
					
					case 899381934:
						iVar0 = 2000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4343));
						break;
					
					case -1489156508:
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4344));
						break;
					
					case 2008591151:
						iVar0 = Global_262145.f_10573;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4416));
						break;
				}
				if (func_318() && (func_317() || func_316()))
				{
					iVar0 = 0;
				}
				break;
			
			case 2017895192:
				switch (iParam1)
				{
					case -2052698631:
						iVar0 = Global_262145.f_10576;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4418));
						break;
				}
				break;
			
			case -656458692:
				switch (iParam1)
				{
					case -971770235:
						iVar0 = Global_262145.f_10893;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4423));
						break;
					
					case -287703709:
						iVar0 = Global_262145.f_10894;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4424));
						break;
					
					case 1351683121:
						iVar0 = Global_262145.f_10895;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4425));
						break;
					
					case -1755194916:
						iVar0 = Global_262145.f_10896;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4426));
						break;
					
					case 2112683568:
						iVar0 = Global_262145.f_10897;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4427));
						break;
					
					case 1062111910:
						iVar0 = Global_262145.f_10898;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4428));
						break;
					
					case 146278587:
						iVar0 = Global_262145.f_10899;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4429));
						break;
					
					case -494162961:
						iVar0 = Global_262145.f_10900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4430));
						break;
					
					case 2062808965:
						iVar0 = Global_262145.f_10901;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4431));
						break;
				}
				break;
			
			case -619010992:
				switch (iParam1)
				{
					case 1198425599:
						iVar0 = 0;
						break;
					
					case -1188271751:
						iVar0 = Global_262145.f_10918;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4433));
						break;
					
					case -1444295948:
						iVar0 = Global_262145.f_16126;
						break;
					
					case -1023114086:
						iVar0 = Global_262145.f_10919;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4434));
						break;
				}
				break;
			
			case -538741184:
				switch (iParam1)
				{
					case -1858624256:
						iVar0 = 0;
						break;
					
					case 1530822070:
						iVar0 = Global_262145.f_12801;
						break;
					
					case -409758110:
						iVar0 = Global_262145.f_12802;
						break;
				}
				break;
			
			case -1045183535:
				switch (iParam1)
				{
					case -377062173:
						iVar0 = 0;
						break;
					
					case 384708672:
						iVar0 = Global_262145.f_12859;
						break;
					
					case -1802258419:
						iVar0 = Global_262145.f_12800;
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_22432;
						break;
				}
				break;
			
			case 1649403952:
				switch (iParam1)
				{
					case 1363085923:
						iVar0 = 0;
						break;
					
					case 1509923832:
						iVar0 = Global_262145.f_14552;
						break;
					
					case -972590066:
						iVar0 = Global_262145.f_16123;
						break;
				}
				break;
			
			case -275439685:
				switch (iParam1)
				{
					case 703231006:
						iVar0 = 0;
						break;
				}
				break;
			
			case -1121678507:
				switch (iParam1)
				{
					case -2067221805:
						iVar0 = 0;
						break;
					
					case -1820405577:
						iVar0 = Global_262145.f_18570;
						break;
				}
				break;
			
			case 171789620:
				switch (iParam1)
				{
					case 1125642654:
						iVar0 = 0;
						break;
					
					case 860508675:
						iVar0 = Global_262145.f_20603;
						break;
					
					case 1857603803:
						iVar0 = Global_262145.f_16125;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_20604;
						break;
					
					case -1439939148:
						iVar0 = Global_262145.f_20606;
						break;
					
					case 202788691:
						iVar0 = Global_262145.f_20605;
						break;
				}
				break;
			
			case 961495388:
				switch (iParam1)
				{
					case -2045758401:
						iVar0 = 0;
						break;
					
					case -785724817:
						iVar0 = Global_262145.f_20724;
						break;
					
					case -1478681000:
						iVar0 = Global_262145.f_20725;
						break;
					
					case 1675665560:
						iVar0 = Global_262145.f_20726;
						break;
					
					case -76490669:
						iVar0 = Global_262145.f_20727;
						break;
					
					case -282298175:
						iVar0 = Global_262145.f_20728;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_20729;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_20730;
						break;
					
					case 77277509:
						iVar0 = Global_262145.f_20731;
						break;
					
					case 1060929921:
						iVar0 = Global_262145.f_20732;
						break;
					
					case -966040254:
						iVar0 = Global_262145.f_20733;
						break;
					
					case -1489156508:
						iVar0 = Global_262145.f_20734;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_20735;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_20736;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_20737;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_20738;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_20739;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_20740;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_20741;
						break;
					
					case -1654288262:
						iVar0 = Global_262145.f_20742;
						break;
					
					case 1134861606:
						iVar0 = 0;
						break;
					
					case 1447477866:
						iVar0 = Global_262145.f_20743;
						break;
					
					case -1860492113:
						iVar0 = Global_262145.f_20852;
						break;
					
					case 937772107:
						iVar0 = Global_262145.f_20853;
						break;
					
					case 1401650071:
						iVar0 = Global_262145.f_20854;
						break;
					
					case 628662130:
						iVar0 = Global_262145.f_20855;
						break;
					
					case -985047251:
						iVar0 = Global_262145.f_20856;
						break;
					
					case -812944463:
						iVar0 = Global_262145.f_20857;
						break;
					
					case -1447352303:
						iVar0 = Global_262145.f_20858;
						break;
					
					case -60338860:
						iVar0 = Global_262145.f_20859;
						break;
					
					case 2088750491:
						iVar0 = Global_262145.f_20860;
						break;
					
					case -1513913454:
						iVar0 = Global_262145.f_20861;
						break;
					
					case -1179558480:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case -86904375:
				switch (iParam1)
				{
					case 1283078430:
						iVar0 = 0;
						break;
					
					case 1574296533:
						iVar0 = Global_262145.f_20744;
						break;
					
					case 626875735:
						iVar0 = Global_262145.f_20745;
						break;
					
					case 1141059345:
						iVar0 = Global_262145.f_20746;
						break;
					
					case 1025884839:
						iVar0 = Global_262145.f_20747;
						break;
					
					case 391640422:
						iVar0 = Global_262145.f_20748;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_20749;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_20750;
						break;
					
					case 77277509:
						iVar0 = Global_262145.f_20751;
						break;
					
					case 1060929921:
						iVar0 = Global_262145.f_20752;
						break;
					
					case -966040254:
						iVar0 = Global_262145.f_20753;
						break;
					
					case -2089531990:
						iVar0 = Global_262145.f_20754;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_20755;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_20756;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_20757;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_20758;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_20759;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_20760;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_20761;
						break;
					
					case -1654288262:
						iVar0 = Global_262145.f_20762;
						break;
					
					case -2093598721:
						iVar0 = 0;
						break;
					
					case -1958983669:
						iVar0 = Global_262145.f_20763;
						break;
					
					case 1272803094:
						iVar0 = Global_262145.f_20852;
						break;
					
					case 1080719624:
						iVar0 = Global_262145.f_20853;
						break;
					
					case 792221348:
						iVar0 = Global_262145.f_20854;
						break;
					
					case -452181427:
						iVar0 = Global_262145.f_20855;
						break;
					
					case -746774737:
						iVar0 = Global_262145.f_20856;
						break;
					
					case -2044296061:
						iVar0 = Global_262145.f_20857;
						break;
					
					case -199171978:
						iVar0 = Global_262145.f_20858;
						break;
					
					case -1428075016:
						iVar0 = Global_262145.f_20859;
						break;
					
					case -1735153315:
						iVar0 = Global_262145.f_20860;
						break;
					
					case 1796459838:
						iVar0 = Global_262145.f_20861;
						break;
					
					case -631911105:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case -608341376:
				switch (iParam1)
				{
					case 1227564412:
						iVar0 = 0;
						break;
					
					case 400507625:
						iVar0 = Global_262145.f_20764;
						break;
					
					case 696788003:
						iVar0 = Global_262145.f_20765;
						break;
					
					case 1475288264:
						iVar0 = Global_262145.f_20766;
						break;
					
					case -1020871238:
						iVar0 = Global_262145.f_20767;
						break;
					
					case -161179835:
						iVar0 = Global_262145.f_20768;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_20769;
						break;
					
					case 77277509:
						iVar0 = Global_262145.f_20770;
						break;
					
					case 1060929921:
						iVar0 = Global_262145.f_20771;
						break;
					
					case -966040254:
						iVar0 = Global_262145.f_20772;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_20773;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_20774;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_20775;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_20776;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_20777;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_20778;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_20779;
						break;
					
					case -1654288262:
						iVar0 = Global_262145.f_20780;
						break;
					
					case -1018236364:
						iVar0 = 0;
						break;
					
					case -1243457701:
						iVar0 = Global_262145.f_20781;
						break;
					
					case 1249283253:
						iVar0 = Global_262145.f_20852;
						break;
					
					case -857707587:
						iVar0 = Global_262145.f_20853;
						break;
					
					case -1097543898:
						iVar0 = Global_262145.f_20854;
						break;
					
					case 1980349969:
						iVar0 = Global_262145.f_20855;
						break;
					
					case 1219453777:
						iVar0 = Global_262145.f_20856;
						break;
					
					case -1853459190:
						iVar0 = Global_262145.f_20857;
						break;
					
					case -2074781016:
						iVar0 = Global_262145.f_20858;
						break;
					
					case 457967755:
						iVar0 = Global_262145.f_20859;
						break;
					
					case 235171324:
						iVar0 = Global_262145.f_20860;
						break;
					
					case 42685294:
						iVar0 = Global_262145.f_20861;
						break;
					
					case -687617715:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case 177293209:
				switch (iParam1)
				{
					case -98690520:
						iVar0 = 0;
						break;
					
					case 752418717:
						iVar0 = Global_262145.f_20782;
						break;
					
					case -130689324:
						iVar0 = Global_262145.f_20783;
						break;
					
					case 1005144310:
						iVar0 = Global_262145.f_20785;
						break;
					
					case 247526935:
						iVar0 = Global_262145.f_20786;
						break;
					
					case -1981031769:
						iVar0 = Global_262145.f_20784;
						break;
					
					case -2101279869:
						iVar0 = Global_262145.f_20787;
						break;
					
					case -1135289737:
						iVar0 = 0;
						break;
					
					case -1233121104:
						iVar0 = Global_262145.f_20788;
						break;
					
					case 776198721:
						iVar0 = Global_262145.f_20789;
						break;
					
					case -1404903567:
						iVar0 = Global_262145.f_20790;
						break;
					
					case 1602080333:
						iVar0 = Global_262145.f_20791;
						break;
					
					case 1764221345:
						iVar0 = Global_262145.f_20792;
						break;
					
					case -1869205321:
						iVar0 = 0;
						break;
					
					case 277524638:
						iVar0 = Global_262145.f_20793;
						break;
					
					case -130843390:
						iVar0 = Global_262145.f_20852;
						break;
					
					case -977347227:
						iVar0 = Global_262145.f_20853;
						break;
					
					case -378461067:
						iVar0 = Global_262145.f_20854;
						break;
					
					case 329939175:
						iVar0 = Global_262145.f_20855;
						break;
					
					case 643374672:
						iVar0 = Global_262145.f_20856;
						break;
					
					case 807875052:
						iVar0 = Global_262145.f_20857;
						break;
					
					case -1401804168:
						iVar0 = Global_262145.f_20858;
						break;
					
					case -1096495395:
						iVar0 = Global_262145.f_20859;
						break;
					
					case -847811454:
						iVar0 = Global_262145.f_20860;
						break;
					
					case -1413108537:
						iVar0 = Global_262145.f_20861;
						break;
					
					case 1815270123:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case -1075685676:
				switch (iParam1)
				{
					case -1795936926:
						iVar0 = 0;
						break;
					
					case 1591132456:
						iVar0 = Global_262145.f_20794;
						break;
					
					case -2046910199:
						iVar0 = Global_262145.f_20796;
						break;
					
					case 1329061674:
						iVar0 = Global_262145.f_20795;
						break;
					
					case 733837882:
						iVar0 = Global_262145.f_20797;
						break;
					
					case 634039983:
						iVar0 = Global_262145.f_20798;
						break;
					
					case 1140676955:
						iVar0 = Global_262145.f_20799;
						break;
					
					case -1898661008:
						iVar0 = Global_262145.f_20800;
						break;
					
					case 1709866683:
						iVar0 = Global_262145.f_20801;
						break;
					
					case 568543123:
						iVar0 = Global_262145.f_20802;
						break;
					
					case 1550611612:
						iVar0 = Global_262145.f_20852;
						break;
					
					case 368550800:
						iVar0 = Global_262145.f_20853;
						break;
					
					case -1769069349:
						iVar0 = Global_262145.f_20854;
						break;
					
					case 24902297:
						iVar0 = Global_262145.f_20855;
						break;
					
					case -228041614:
						iVar0 = Global_262145.f_20856;
						break;
					
					case -584961562:
						iVar0 = Global_262145.f_20857;
						break;
					
					case -1153175946:
						iVar0 = Global_262145.f_20858;
						break;
					
					case 1301287696:
						iVar0 = Global_262145.f_20859;
						break;
					
					case 1597093459:
						iVar0 = Global_262145.f_20860;
						break;
					
					case 1769871776:
						iVar0 = Global_262145.f_20861;
						break;
					
					case -1827882671:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case 2024373456:
				switch (iParam1)
				{
					case 1277460590:
						iVar0 = 0;
						break;
					
					case -1182573778:
						iVar0 = Global_262145.f_20803;
						break;
					
					case 974903034:
						iVar0 = Global_262145.f_20805;
						break;
					
					case 190476639:
						iVar0 = Global_262145.f_20804;
						break;
					
					case -644734235:
						iVar0 = Global_262145.f_20806;
						break;
					
					case 2146055916:
						iVar0 = Global_262145.f_20807;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_20808;
						break;
					
					case -1613015470:
						iVar0 = Global_262145.f_20809;
						break;
					
					case -452809877:
						iVar0 = Global_262145.f_20810;
						break;
					
					case 1038927834:
						iVar0 = Global_262145.f_20811;
						break;
					
					case -1023114086:
						iVar0 = Global_262145.f_20812;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_20813;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_20814;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_20815;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_20816;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_20817;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_20818;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_20819;
						break;
					
					case -653246751:
						iVar0 = 0;
						break;
					
					case -1520117877:
						iVar0 = Global_262145.f_20820;
						break;
					
					case -996700057:
						iVar0 = Global_262145.f_20852;
						break;
					
					case 940943685:
						iVar0 = Global_262145.f_20853;
						break;
					
					case 1263226800:
						iVar0 = Global_262145.f_20854;
						break;
					
					case -328035840:
						iVar0 = Global_262145.f_20855;
						break;
					
					case 1224100642:
						iVar0 = Global_262145.f_20856;
						break;
					
					case 899228776:
						iVar0 = Global_262145.f_20857;
						break;
					
					case 616006309:
						iVar0 = Global_262145.f_20858;
						break;
					
					case -1561952511:
						iVar0 = Global_262145.f_20859;
						break;
					
					case 572063080:
						iVar0 = Global_262145.f_20860;
						break;
					
					case 1170588613:
						iVar0 = Global_262145.f_20861;
						break;
					
					case 966612367:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case 1432025498:
				switch (iParam1)
				{
					case -845938367:
						iVar0 = 0;
						break;
					
					case 1315288101:
						iVar0 = Global_262145.f_22461;
						break;
					
					case 1004815965:
						iVar0 = Global_262145.f_22462;
						break;
					
					case -380098265:
						iVar0 = Global_262145.f_22460;
						break;
					
					case -1618338827:
						iVar0 = Global_262145.f_22459;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_22488;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_22489;
						break;
					
					case 77277509:
						iVar0 = Global_262145.f_22490;
						break;
					
					case 1060929921:
						iVar0 = Global_262145.f_22491;
						break;
					
					case -1404903567:
						iVar0 = Global_262145.f_22492;
						break;
					
					case 1602080333:
						iVar0 = Global_262145.f_22493;
						break;
					
					case -474112444:
						iVar0 = Global_262145.f_20852;
						break;
					
					case 387223451:
						iVar0 = Global_262145.f_20853;
						break;
					
					case 617753366:
						iVar0 = Global_262145.f_20854;
						break;
					
					case -222378256:
						iVar0 = Global_262145.f_20855;
						break;
					
					case 8741501:
						iVar0 = Global_262145.f_20856;
						break;
					
					case -601286203:
						iVar0 = Global_262145.f_20857;
						break;
					
					case -511433605:
						iVar0 = Global_262145.f_20858;
						break;
					
					case -655387818:
						iVar0 = Global_262145.f_20859;
						break;
					
					case -282476598:
						iVar0 = Global_262145.f_20860;
						break;
					
					case 1739501925:
						iVar0 = Global_262145.f_20861;
						break;
					
					case 1178671645:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case -1768145561:
				switch (iParam1)
				{
					case 382112385:
						iVar0 = 0;
						break;
					
					case -568352468:
						iVar0 = Global_262145.f_22463;
						break;
					
					case 1362433589:
						iVar0 = Global_262145.f_22467;
						break;
					
					case 1346235024:
						iVar0 = Global_262145.f_22465;
						break;
					
					case -570355066:
						iVar0 = Global_262145.f_22466;
						break;
					
					case -2023373174:
						iVar0 = Global_262145.f_22464;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_22494;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_22495;
						break;
					
					case 77277509:
						iVar0 = Global_262145.f_22496;
						break;
					
					case -966040254:
						iVar0 = Global_262145.f_22497;
						break;
					
					case -1489156508:
						iVar0 = Global_262145.f_22498;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_22499;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_22500;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_22501;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_22502;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_22503;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_22504;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_22505;
						break;
					
					case -1654288262:
						iVar0 = Global_262145.f_22506;
						break;
					
					case -415870039:
						iVar0 = 0;
						break;
					
					case -109086661:
						iVar0 = Global_262145.f_22507;
						break;
					
					case -737430213:
						iVar0 = Global_262145.f_20852;
						break;
					
					case 1125852043:
						iVar0 = Global_262145.f_20853;
						break;
					
					case 886015732:
						iVar0 = Global_262145.f_20854;
						break;
					
					case -1262287139:
						iVar0 = Global_262145.f_20855;
						break;
					
					case -295208411:
						iVar0 = Global_262145.f_20856;
						break;
					
					case -544154504:
						iVar0 = Global_262145.f_20857;
						break;
					
					case 172765678:
						iVar0 = Global_262145.f_20858;
						break;
					
					case -1982877449:
						iVar0 = Global_262145.f_20859;
						break;
					
					case 2072122460:
						iVar0 = Global_262145.f_20860;
						break;
					
					case -1986220171:
						iVar0 = Global_262145.f_20861;
						break;
					
					case 1377355801:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case -2009644972:
				switch (iParam1)
				{
					case 21392614:
						iVar0 = 0;
						break;
					
					case -829683854:
						iVar0 = Global_262145.f_23374;
						break;
					
					case -1055790298:
						iVar0 = Global_262145.f_22483;
						break;
					
					case -1928301566:
						iVar0 = Global_262145.f_22485;
						break;
					
					case -424845447:
						iVar0 = Global_262145.f_22484;
						break;
					
					case -1876057490:
						iVar0 = Global_262145.f_22482;
						break;
					
					case 1246324211:
						iVar0 = Global_262145.f_22539;
						break;
					
					case 1205768792:
						iVar0 = Global_262145.f_22540;
						break;
					
					case 1709866683:
						iVar0 = Global_262145.f_22541;
						break;
					
					case -1434287169:
						iVar0 = Global_262145.f_22542;
						break;
					
					case 259780317:
						iVar0 = Global_262145.f_20852;
						break;
					
					case -1973342474:
						iVar0 = Global_262145.f_20853;
						break;
					
					case 1996130345:
						iVar0 = Global_262145.f_20854;
						break;
					
					case -1455657812:
						iVar0 = Global_262145.f_20855;
						break;
					
					case -1668263084:
						iVar0 = Global_262145.f_20856;
						break;
					
					case 1308243489:
						iVar0 = Global_262145.f_20857;
						break;
					
					case 1122574335:
						iVar0 = Global_262145.f_20858;
						break;
					
					case 1420313469:
						iVar0 = Global_262145.f_20859;
						break;
					
					case 109848390:
						iVar0 = Global_262145.f_20860;
						break;
					
					case 593945703:
						iVar0 = Global_262145.f_20861;
						break;
					
					case 1142457062:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case 1785463520:
				switch (iParam1)
				{
					case -1797182002:
						iVar0 = 0;
						break;
					
					case -422587990:
						iVar0 = Global_262145.f_22468;
						break;
					
					case -193998727:
						iVar0 = Global_262145.f_22472;
						break;
					
					case -515203373:
						iVar0 = Global_262145.f_22470;
						break;
					
					case 1842849902:
						iVar0 = Global_262145.f_22471;
						break;
					
					case -679861550:
						iVar0 = Global_262145.f_22469;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_22508;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_22509;
						break;
					
					case -966040254:
						iVar0 = Global_262145.f_22510;
						break;
					
					case 1528590652:
						iVar0 = 0;
						break;
					
					case -2089531990:
						iVar0 = Global_262145.f_22511;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_22512;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_22513;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_22514;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_22515;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_22516;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_22517;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_22518;
						break;
					
					case -1654288262:
						iVar0 = Global_262145.f_22519;
						break;
					
					case 941317513:
						iVar0 = 0;
						break;
					
					case 1748450780:
						iVar0 = Global_262145.f_22520;
						break;
					
					case -1869284448:
						iVar0 = Global_262145.f_20852;
						break;
					
					case 1931539634:
						iVar0 = Global_262145.f_20853;
						break;
					
					case 1624199183:
						iVar0 = Global_262145.f_20854;
						break;
					
					case -26834113:
						iVar0 = Global_262145.f_20855;
						break;
					
					case -210406055:
						iVar0 = Global_262145.f_20856;
						break;
					
					case 423313640:
						iVar0 = Global_262145.f_20857;
						break;
					
					case 276639596:
						iVar0 = Global_262145.f_20858;
						break;
					
					case -991356863:
						iVar0 = Global_262145.f_20859;
						break;
					
					case -1682848301:
						iVar0 = Global_262145.f_20860;
						break;
					
					case 996213771:
						iVar0 = Global_262145.f_20861;
						break;
					
					case -1214048550:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case -879347409:
				switch (iParam1)
				{
					case -1172055874:
						iVar0 = 0;
						break;
					
					case -958864266:
						iVar0 = Global_262145.f_22473;
						break;
					
					case 231258687:
						iVar0 = Global_262145.f_22474;
						break;
					
					case 284438159:
						iVar0 = Global_262145.f_22476;
						break;
					
					case 15712037:
						iVar0 = Global_262145.f_22475;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_22521;
						break;
					
					case 77277509:
						iVar0 = Global_262145.f_22522;
						break;
					
					case 899381934:
						iVar0 = Global_262145.f_22523;
						break;
					
					case 654802123:
						iVar0 = Global_262145.f_22524;
						break;
					
					case -1069552225:
						iVar0 = Global_262145.f_20852;
						break;
					
					case 11918884:
						iVar0 = Global_262145.f_20853;
						break;
					
					case 176157112:
						iVar0 = Global_262145.f_20854;
						break;
					
					case -220052855:
						iVar0 = Global_262145.f_20855;
						break;
					
					case 288456487:
						iVar0 = Global_262145.f_20856;
						break;
					
					case 398658626:
						iVar0 = Global_262145.f_20857;
						break;
					
					case 628697006:
						iVar0 = Global_262145.f_20858;
						break;
					
					case 925911836:
						iVar0 = Global_262145.f_20859;
						break;
					
					case 1222307441:
						iVar0 = Global_262145.f_20860;
						break;
					
					case 552442715:
						iVar0 = Global_262145.f_20861;
						break;
					
					case -648943513:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case -2066285827:
				switch (iParam1)
				{
					case 25766362:
						iVar0 = 0;
						break;
					
					case -273676760:
						iVar0 = Global_262145.f_22477;
						break;
					
					case -89655827:
						iVar0 = Global_262145.f_22481;
						break;
					
					case 1130501904:
						iVar0 = Global_262145.f_22479;
						break;
					
					case -1449330342:
						iVar0 = Global_262145.f_22480;
						break;
					
					case -2111807319:
						iVar0 = Global_262145.f_22478;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_22525;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_22526;
						break;
					
					case -944910075:
						iVar0 = Global_262145.f_22527;
						break;
					
					case 1060929921:
						iVar0 = Global_262145.f_22528;
						break;
					
					case 1704640795:
						iVar0 = 0;
						break;
					
					case 1005743559:
						iVar0 = Global_262145.f_22538;
						break;
					
					case -2089531990:
						iVar0 = Global_262145.f_22529;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_22530;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_22531;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_22532;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_22533;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_22534;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_22535;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_22536;
						break;
					
					case -1654288262:
						iVar0 = Global_262145.f_22537;
						break;
					
					case -1371515465:
						iVar0 = Global_262145.f_20852;
						break;
					
					case -1190793877:
						iVar0 = Global_262145.f_20853;
						break;
					
					case -1497085720:
						iVar0 = Global_262145.f_20854;
						break;
					
					case -1803148180:
						iVar0 = Global_262145.f_20855;
						break;
					
					case -1975971886:
						iVar0 = Global_262145.f_20856;
						break;
					
					case 36929477:
						iVar0 = Global_262145.f_20857;
						break;
					
					case -268444834:
						iVar0 = Global_262145.f_20858;
						break;
					
					case -574769446:
						iVar0 = Global_262145.f_20859;
						break;
					
					case -882699739:
						iVar0 = Global_262145.f_20860;
						break;
					
					case -1468181474:
						iVar0 = Global_262145.f_20861;
						break;
					
					case -974541230:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case -1355376991:
				switch (iParam1)
				{
					case -673450233:
						iVar0 = 0;
						break;
				}
				break;
			
			case 727643628:
				switch (iParam1)
				{
					case 1423184737:
						iVar0 = 0;
						break;
					
					case -2122814295:
						iVar0 = Global_262145.f_27905;
						break;
					
					case -1828202758:
						iVar0 = Global_262145.f_27906;
						break;
				}
				break;
			
			default:
				iVar65 = func_66(iParam0, &uVar67);
				if (iVar65 != -1)
				{
					iVar66 = 0;
					while (iVar66 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar65))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar65, iVar66, &Var106))
						{
							if (!func_63(Var106.f_3))
							{
								if (Var106.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (Var106.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var106.f_5;
									}
								}
							}
						}
						iVar66++;
					}
				}
				break;
			}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_312())
	{
		StringCopy(&Var144, func_310(iParam1, iParam0), 16);
		func_306(&sVar128, Var144, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, 1, func_308(iParam0), func_307(iParam0), -1, 0, 0);
		if (NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&sVar128))
		{
			iVar0 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar128), 1671640801, 1);
		}
	}
	if (iVar0 > 0)
	{
		fVar148 = func_280(iParam0, &iVar0, fVar1);
		if (fVar148 != 1f)
		{
		}
	}
	return iVar0;
}

float func_280(int iParam0, int iParam1, float fParam2)
{
	fVar0 = 0f;
	fVar1 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_312())
	{
		return 1f;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fParam2));
	}
	if (!Global_76622)
	{
		if (*iParam1 != 0)
		{
			iVar2 = func_303(iParam0);
			if (iVar2 == 3)
			{
				fVar1 = 0.1f;
			}
			else if (iVar2 == 2)
			{
				fVar1 = 0.15f;
			}
			else if (iVar2 == 1)
			{
				fVar1 = 0.25f;
			}
		}
	}
	if (iLocal_104 == 1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_262145.f_77));
			fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_122) / 100f));
		}
	}
	if (iLocal_104 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_262145.f_77));
			if (func_281())
			{
				fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_122) / 100f));
				iLocal_104 = 1;
			}
			else
			{
				iLocal_104 = -1;
			}
		}
	}
	fVar0 = (1f - fVar1);
	*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fVar0));
	return fVar0;
}

int func_281()
{
	if (MISC::IS_PC_VERSION())
	{
		return 0;
	}
	if (func_300())
	{
		if (func_285())
		{
			iVar0 = func_283();
			iVar1 = func_282();
			fVar2 = ((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_262145.f_121) && iVar0 >= 8)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_282()
{
	iVar0 = (iVar0 + Global_1387921);
	iVar0 = (iVar0 + Global_1387924);
	return iVar0;
}

int func_283()
{
	iVar0 = (iVar0 + Global_1387922);
	iVar0 = (iVar0 + Global_1387923);
	iVar0 = (iVar0 + Global_1387921);
	iVar0 = (iVar0 + Global_1387924);
	iVar0 = (iVar0 + Global_1387926);
	iVar0 = (iVar0 + Global_1387925);
	iVar0 = (iVar0 + func_284(-1619412469));
	iVar0 = (iVar0 + func_284(1659604058));
	iVar0 = (iVar0 + func_284(242250445));
	iVar0 = (iVar0 + func_284(-1440509968));
	iVar0 = (iVar0 + func_284(55646841));
	iVar0 = (iVar0 + func_284(995519836));
	iVar0 = (iVar0 + func_284(915369945));
	iVar0 = (iVar0 + func_284(-1029657896));
	iVar0 = (iVar0 + func_284(1938637151));
	return iVar0;
}

int func_284(int iParam0)
{
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_285()
{
	CLOCK::GET_POSIX_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var7 = { func_299(-77337635) };
	if (func_286(Var7, Var0, 7))
	{
		return 1;
	}
	return 0;
}

int func_286(struct<7> Param0, struct<7> Param7, int iParam14)
{
	iVar0 = func_297(Param7);
	iVar1 = func_293(Param0, iParam14);
	if (iVar1 == -15)
	{
		return 0;
	}
	if (func_287(iVar0, iVar1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_287(int iParam0, int iParam1)
{
	if (!func_292(iParam1) || !func_292(iParam0))
	{
		return 1;
	}
	iVar0 = func_102(iParam0);
	iVar1 = func_102(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_104(iParam0);
	iVar1 = func_104(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_291(iParam0);
	iVar1 = func_291(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_290(iParam0);
	iVar1 = func_290(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_289(iParam0);
	iVar1 = func_289(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_288(iParam0);
	iVar1 = func_288(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_288(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_289(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_290(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_291(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_292(int iParam0)
{
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_288(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_289(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_290(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_102(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_104(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_291(iParam0);
	if (iVar5 < 1 || iVar5 > func_101(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

var func_293(struct<7> Param0, int iParam7)
{
	if (func_296(Param0) == 0)
	{
		uVar0 = func_297(Param0);
		uVar1 = uVar0;
		func_294(&uVar1, 0, 0, 0, iParam7, 0, 0);
		if (iParam7 == 0)
		{
			uVar1 = uVar0;
		}
		return uVar1;
	}
	return uVar2;
}

void func_294(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_102(*uParam0);
	iVar1 = func_104(*uParam0);
	iVar2 = func_291(*uParam0);
	iVar3 = func_290(*uParam0);
	iVar4 = func_289(*uParam0);
	iVar5 = func_288(*uParam0);
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
	iVar6 = func_101(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_101(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_295(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_295(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_107(uParam0, iParam1);
	func_106(uParam0, iParam2);
	func_105(uParam0, iParam3);
	func_99(uParam0, iParam5);
	func_100(uParam0, iParam4);
	func_98(uParam0, iParam6);
}

int func_296(struct<7> Param0)
{
	if ((((((Param0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
	{
		return 1;
	}
	return 0;
}

var func_297(struct<6> Param0, var uParam6)
{
	if (Param0 > 0)
	{
		func_98(&uVar0, Param0);
	}
	if (Param0.f_1 > 0)
	{
		func_99(&uVar0, func_298(Param0.f_1));
	}
	if (Param0.f_2 > 0)
	{
		func_100(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0)
	{
		func_105(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0)
	{
		func_106(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0)
	{
		func_107(&uVar0, Param0.f_5);
	}
	return uVar0;
}

int func_298(int iParam0)
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

struct<7> func_299(int iParam0)
{
	uVar0 = iParam0;
	if (STATS::STAT_GET_DATE(uVar0, &Var8, 7, -1))
	{
		return Var8;
	}
	return Var1;
}

int func_300()
{
	if (func_302() && func_301(0))
	{
		return 1;
	}
	return 0;
}

var func_301(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_302()
{
	return func_301(func_54() + 1);
}

int func_303(int iParam0)
{
	iVar0 = func_227();
	if (iParam0 == 0 || !func_39(iVar0))
	{
		return -1;
	}
	iVar1 = 7;
	switch (iParam0)
	{
		case -1569615261:
			break;
		
		case -72657034:
			break;
		
		case 324215364:
			iVar1 = 1;
			break;
		
		case 736523883:
			iVar1 = 1;
			break;
		
		case 2017895192:
			iVar1 = 3;
			break;
		
		case 487013001:
			iVar1 = 3;
			break;
		
		case -494615257:
			iVar1 = 3;
			break;
		
		case -1074790547:
			iVar1 = 2;
			break;
		
		case -2084633992:
			iVar1 = 2;
			break;
		
		case -1357824103:
			iVar1 = 2;
			break;
		
		case 100416529:
			break;
		
		case 205991906:
			break;
		
		case -1660422300:
			iVar1 = 4;
			break;
		
		case 2144741730:
			iVar1 = 4;
			break;
		
		case -1312131151:
			break;
		
		case -1568386805:
			break;
		
		case 1119849093:
			iVar1 = 5;
			break;
		
		case -1716189206:
			break;
		
		case 1737195953:
			break;
		
		case 883325847:
			break;
		
		case 911657153:
			break;
		
		case 584646201:
			iVar1 = 0;
			break;
		
		case 1593441988:
			iVar1 = 0;
			break;
		
		case 453432689:
			iVar1 = 0;
			break;
		
		case -37975472:
			break;
		
		case -1813897027:
			break;
		
		case 741814745:
			break;
	}
	if (iVar1 != 7)
	{
		switch (func_304(iVar1, iVar0))
		{
			case 1:
				return 3;
				break;
			
			case 2:
				return 2;
				break;
			
			case 3:
				return 1;
				break;
		}
	}
	else
	{
		iVar3[0] = func_304(1, iVar0);
		iVar3[1] = func_304(3, iVar0);
		iVar3[2] = func_304(2, iVar0);
		iVar3[3] = func_304(4, iVar0);
		iVar3[4] = func_304(5, iVar0);
		iVar3[5] = func_304(0, iVar0);
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 3)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 1;
		}
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 2)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 2;
		}
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 1)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 3;
		}
	}
	return -1;
}

int func_304(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		iVar0 = 0;
		iVar1 = 1;
		iVar2 = 2;
		iVar3 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 3;
		iVar1 = 4;
		iVar2 = 5;
		iVar3 = -1;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 9;
		iVar1 = 10;
		iVar2 = 11;
		iVar3 = -1;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 6;
		iVar1 = 7;
		iVar2 = 8;
		iVar3 = -1;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 12;
		iVar1 = 13;
		iVar2 = 14;
		iVar3 = -1;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 15;
		iVar1 = 16;
		iVar2 = 17;
		iVar3 = -1;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 18;
		iVar1 = 19;
		iVar2 = 20;
		iVar3 = 21;
	}
	else
	{
		return 0;
	}
	iVar4 = func_305(iVar0, iParam1);
	if (func_305(iVar1, iParam1) < iVar4)
	{
		iVar4 = func_305(iVar1, iParam1);
	}
	if (func_305(iVar2, iParam1) < iVar4)
	{
		iVar4 = func_305(iVar2, iParam1);
	}
	if (iVar3 != -1)
	{
		if (func_305(iVar3, iParam1) < iVar4)
		{
			iVar4 = func_305(iVar3, iParam1);
		}
	}
	return iVar4;
}

int func_305(int iParam0, int iParam1)
{
	return Global_111638.f_19142[iParam1].f_3[iParam0].f_3;
}

void func_306(char* sParam0, char[8] cParam1, char[4] cParam3, char[4] cParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	switch (MISC::GET_HASH_KEY(&cParam1))
	{
		case 64715401:
		case -2016195117:
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		
		case -414529079:
		case -1253005183:
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		
		case 336264847:
		case -1119195824:
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		
		case 531395379:
		case -672224483:
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		
		case 1034118160:
		case 600999375:
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		
		case -218834291:
		case -859056265:
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
		
		case 1779531303:
		case 82051787:
			StringCopy(&cParam1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam6)
	{
		case 0:
			if (iParam5 == 1885233650)
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == -1667301416)
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 1:
			if (iParam5 == 1885233650)
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == -1667301416)
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam7 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			if (iParam10 != -1)
			{
				StringConCat(sParam0, "_p", 64);
				StringIntConCat(sParam0, iParam10, 64);
			}
			break;
		
		case 2:
			if (iParam5 == 1885233650)
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == -1667301416)
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			break;
		
		case 4:
			if (iParam5 == Global_73804)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam5 == Global_73805)
			{
				StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (iParam5 == Global_73806)
			{
				StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (iParam5 == Global_73807)
			{
				StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (iParam5 == Global_73808)
			{
				StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (iParam5 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam7 == 24 || iParam7 == 25)
				{
					if (iParam9 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam10 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam10 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam10 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam10 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam10 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam10 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam10 == 6)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam9 = -1;
				}
				else if (iParam7 == 38)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam7 == 65)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			else if (iParam7 == 22)
			{
				StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam5), 16);
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1) || MISC::GET_HASH_KEY(&cParam1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam11)
				{
					switch (iParam5)
					{
						case -394074634:
						case -789894171:
						case -748008636:
						case 1737773231:
						case -1883002148:
						case 1621617168:
							StringConCat(sParam0, "2", 64);
							break;
						
						case -2064372143:
						case -1241712818:
						case -1743316013:
						case -2052737935:
							StringConCat(sParam0, "3", 64);
							break;
						
						case -2033222435:
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
			}
			else if (iParam7 == 40)
			{
				switch (iParam5)
				{
					case -757735410:
						StringCopy(&cParam1, "FCR2", 16);
						break;
					
					case 1790834270:
						StringCopy(&cParam1, "DIABLOUS2", 16);
						break;
					
					case -2022483795:
						StringCopy(&cParam1, "COMET3", 16);
						break;
					
					default:
						StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam5), 16);
						if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1))
						{
							return;
						}
						break;
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &cParam1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam11)
				{
					switch (iParam5)
					{
						case -394074634:
						case -789894171:
						case -748008636:
						case 1737773231:
						case -1883002148:
						case 1621617168:
							StringConCat(sParam0, "2", 64);
							break;
						
						case -2064372143:
						case -1241712818:
						case -1743316013:
						case -2052737935:
							StringConCat(sParam0, "3", 64);
							break;
						
						case -2033222435:
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
				if (iParam10 != -1)
				{
					StringConCat(sParam0, "_p", 64);
					StringIntConCat(sParam0, iParam10, 64);
				}
			}
			break;
	}
	if (bParam12)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

int func_307(int iParam0)
{
	switch (iParam0)
	{
		case -1075685676:
		case 2024373456:
		case 961495388:
		case -86904375:
		case -608341376:
		case 177293209:
		case 1432025498:
		case -1768145561:
		case -2009644972:
		case 1785463520:
		case -879347409:
		case -2066285827:
			return 2;
			break;
	}
	return -1;
}

int func_308(int iParam0)
{
	return func_309(iParam0);
}

int func_309(int iParam0)
{
	switch (iParam0)
	{
		case -1569615261:
			return 0;
			break;
		
		case 453432689:
			return 1;
			break;
		
		case 1593441988:
			return 2;
			break;
		
		case 584646201:
			return 3;
			break;
		
		case -1716589765:
			return 4;
			break;
		
		case 736523883:
			return 5;
			break;
		
		case -270015777:
			return 6;
			break;
		
		case 324215364:
			return 7;
			break;
		
		case -1074790547:
			return 8;
			break;
		
		case -2084633992:
			return 9;
			break;
		
		case -947031628:
			return 10;
			break;
		
		case -1357824103:
			return 11;
			break;
		
		case -1660422300:
			return 12;
			break;
		
		case 2144741730:
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case 741814745:
			return 15;
			break;
		
		case -1813897027:
			return 16;
			break;
		
		case -37975472:
			return 17;
			break;
		
		case 856002082:
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case 100416529:
			return 20;
			break;
		
		case 205991906:
			return 21;
			break;
		
		case 487013001:
			return 22;
			break;
		
		case -1654528753:
			return 23;
			break;
		
		case -494615257:
			return 24;
			break;
		
		case 2017895192:
			return 25;
			break;
		
		case -1568386805:
			return 26;
			break;
		
		case -1312131151:
			return 27;
			break;
		
		case 1119849093:
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case 911657153:
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case -72657034:
			return 33;
			break;
		
		case -1716189206:
			return 34;
			break;
		
		case 1737195953:
			return 35;
			break;
		
		case 1317494643:
			return 36;
			break;
		
		case -1786099057:
			return 37;
			break;
		
		case -2067956739:
			return 38;
			break;
		
		case 1141786504:
			return 39;
			break;
		
		case 1305664598:
			return 40;
			break;
		
		case 615608432:
			return 41;
			break;
		
		case 101631238:
			return 42;
			break;
		
		case 883325847:
			return 43;
			break;
		
		case -38085395:
			return 44;
			break;
		
		case -102323637:
			return 45;
			break;
		
		case -1063057011:
			return 46;
			break;
		
		case -1076751822:
			return 47;
			break;
		
		case -771403250:
			return 49;
			break;
		
		case 2132975508:
			return 48;
			break;
		
		case 1627465347:
			return 50;
			break;
		
		case -1834847097:
			return 51;
			break;
		
		case 137902532:
			return 52;
			break;
		
		case 1198879012:
			return 57;
			break;
		
		case -1466123874:
			return 53;
			break;
		
		case 2138347493:
			return 54;
			break;
		
		case -952879014:
			return 56;
			break;
		
		case 984333226:
			return 55;
			break;
		
		case -1420407917:
			return 60;
			break;
		
		case 1672152130:
			return 61;
			break;
		
		case -102973651:
			return 58;
			break;
		
		case 1834241177:
			return 59;
			break;
		
		case 171789620:
			return 64;
			break;
		
		case -656458692:
			return 62;
			break;
		
		case -598887786:
			return 63;
			break;
		
		case -581044007:
			return 65;
			break;
		
		case -619010992:
			return 68;
			break;
		
		case -275439685:
			return 66;
			break;
		
		case 1649403952:
			return 67;
			break;
		
		case -1951375401:
			return 69;
			break;
		
		case -1045183535:
			return 70;
			break;
		
		case -538741184:
			return 71;
			break;
		
		case 317205821:
			return 72;
			break;
		
		case -1121678507:
			return 73;
			break;
		
		case 125959754:
			return 74;
			break;
		
		case -853065399:
			return 75;
			break;
		
		case -1169823560:
			return 76;
			break;
		
		case -1810795771:
			return 77;
			break;
		
		case 419712736:
			return 78;
			break;
		
		case 961495388:
			return 8;
			break;
		
		case -86904375:
			return 9;
			break;
		
		case -608341376:
			return 13;
			break;
		
		case 177293209:
			return 21;
			break;
		
		case -1075685676:
			return 1;
			break;
		
		case 2024373456:
			return 5;
			break;
		
		case 1432025498:
			return 22;
			break;
		
		case -1768145561:
			return 46;
			break;
		
		case -2009644972:
			return 47;
			break;
		
		case 1785463520:
			return 56;
			break;
		
		case -879347409:
			return 70;
			break;
		
		case -2066285827:
			return 48;
			break;
		
		case -1746263880:
			return 79;
			break;
		
		case 940833800:
			return 80;
			break;
		
		case -1355376991:
			return 81;
			break;
		
		case 1198256469:
			return 82;
			break;
		
		case -1238556825:
			return 83;
			break;
		
		case -1853920116:
			return 84;
			break;
		
		case 727643628:
			return 85;
			break;
	}
	return 0;
}

char* func_310(int iParam0, int iParam1)
{
	if (iParam1 == -656458692)
	{
		switch (iParam0)
		{
			case -213504205:
				return "WT_KNUCKLE";
				break;
			
			case -971770235:
				return "WCT_KNUCK_02";
				break;
			
			case -287703709:
				return "WCT_KNUCK_BG";
				break;
			
			case 1351683121:
				return "WCT_KNUCK_DLR";
				break;
			
			case -1755194916:
				return "WCT_KNUCK_DMD";
				break;
			
			case 2112683568:
				return "WCT_KNUCK_HT";
				break;
			
			case 1062111910:
				return "WCT_KNUCK_LV";
				break;
			
			case 146278587:
				return "WCT_KNUCK_PC";
				break;
			
			case -494162961:
				return "WCT_KNUCK_SLG";
				break;
			
			case 2062808965:
				return "WCT_KNUCK_VG";
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "WCT_NONE";
			break;
		
		case 1967214384:
			return "WCT_RAIL";
			break;
		
		case 202788691:
			return "WCT_GRIP";
			break;
		
		case 899381934:
			return "WCT_FLASH";
			break;
		
		case 2076495324:
			return "WCT_FLASH";
			break;
		
		case -1657815255:
			return "WCT_SCOPE_MAC";
			break;
		
		case 1019656791:
			return "WCT_SCOPE_MAC";
			break;
		
		case -1439939148:
			return "WCT_SCOPE_SML";
			break;
		
		case 1006677997:
			return "WCT_SCOPE_SML";
			break;
		
		case -1596416958:
			return "WCT_SCOPE_MED";
			break;
		
		case -767279652:
			return "WCT_SCOPE_LRG";
			break;
		
		case -1135289737:
			return "WCT_SCOPE_MAX";
			break;
		
		case -1023114086:
			return "WCT_SUPP";
			break;
		
		case -2089531990:
			return "WCT_SUPP";
			break;
		
		case -1489156508:
			return "WCT_SUPP";
			break;
		
		case -435637410:
			return "WCT_SUPP";
			break;
		
		case -19858063:
			return "WCT_CLIP1";
			break;
		
		case -316253668:
			return "WCT_CLIP2";
			break;
		
		case 119648377:
			return "WCT_CLIP1";
			break;
		
		case -696561875:
			return "WCT_CLIP2";
			break;
		
		case 834974250:
			return "WCT_CLIP1";
			break;
		
		case 614078421:
			return "WCT_CLIP2";
			break;
		
		case -884429072:
			return "WCT_CLIP1";
			break;
		
		case 283556395:
			return "WCT_CLIP2";
			break;
		
		case 643254679:
			return "WCT_CLIP1";
			break;
		
		case 889808635:
			return "WCT_CLIP2";
			break;
		
		case -1101075946:
			return "WCT_CLIP1";
			break;
		
		case -1323216997:
			return "WCT_CLIP2";
			break;
		
		case -1614924820:
			return "WCT_CLIP1";
			break;
		
		case -1861183855:
			return "WCT_CLIP2";
			break;
		
		case -91250417:
			return "WCT_CLIP1";
			break;
		
		case -1899902599:
			return "WCT_CLIP2";
			break;
		
		case -197857404:
			return "WCT_CLIP1";
			break;
		
		case -2112517305:
			return "WCT_CLIP2";
			break;
		
		case -503336118:
			return "WCT_CLIP1";
			break;
		
		case -691692330:
			return "WCT_CLIP2";
			break;
		
		case -1796727865:
			return "WCT_CLIP1";
			break;
		
		case -2034401422:
			return "WCT_CLIP2";
			break;
		
		case -1681506167:
			return "WCT_CLIP1";
			break;
		
		case 1198478068:
			return "WCT_CLIP1";
			break;
		
		case -924946682:
			return "WCT_CLIP2";
			break;
		
		case -1928132688:
			return "WCT_CLIP1";
			break;
		
		case -1152981993:
			return "WCT_CLIP2";
			break;
		
		case 580369945:
			return "WCT_CLIP1";
			break;
		
		case -640439150:
			return "WCT_CLIP2";
			break;
		
		case 195735895:
			return "WCT_CLIP1";
			break;
		
		case 1525977990:
			return "WCT_CLIP1";
			break;
		
		case 1824470811:
			return "WCT_CLIP2";
			break;
		
		case -890514874:
			return "WCT_CLIP1";
			break;
		
		case -507117574:
			return "WCT_CLIP2";
			break;
		
		case -124428919:
			return "WCT_CLIP1";
			break;
		
		case 1048471894:
			return "WCT_CLIP2";
			break;
		
		case -125817127:
			return "WCT_CLIP1";
			break;
		
		case 2063610803:
			return "WCT_CLIP2";
			break;
		
		case 1168357051:
			return "WCT_CLIP1";
			break;
		
		case 867832552:
			return "WCT_CLIP2";
			break;
		
		case 844049759:
			return "WCT_CLIP1";
			break;
		
		case -667205311:
			return "WCT_CLIP1";
			break;
		
		case -1759709443:
			return "WCT_CLIP2";
			break;
		
		case -855823675:
			return "WCT_CLIP2";
			break;
		
		case 471997210:
			return "WCT_SCOPE_LRG";
			break;
		
		case 1709866683:
			return "WCT_SUPP";
			break;
		
		case 1125642654:
			return "WCT_CLIP1";
			break;
		
		case 860508675:
			return "WCT_CLIP2";
			break;
		
		case -878820883:
			return "WCT_CLIP1";
			break;
		
		case 1198425599:
			return "WCT_CLIP1";
			break;
		
		case -1188271751:
			return "WCT_CLIP2";
			break;
		
		case 1319990579:
			return "WCT_VAR_GOLD";
			break;
		
		case 930927479:
			return "WCT_VAR_METAL";
			break;
		
		case -660892072:
			return "WCT_VAR_GOLD";
			break;
		
		case -1686714580:
			return "WCT_VAR_METAL";
			break;
		
		case -684126074:
			return "WCT_VAR_GOLD";
			break;
		
		case 2008591151:
			return "WCT_VAR_SIL";
			break;
		
		case 2053798779:
			return "WCT_VAR_WOOD";
			break;
		
		case 663170192:
			return "WCT_VAR_GOLD";
			break;
		
		case 1215999497:
			return "WCT_VAR_GOLD";
			break;
		
		case -2052698631:
			return "WCT_VAR_METAL";
			break;
		
		case 1077065191:
			return "WCT_VAR_WOOD";
			break;
		
		case 371102273:
			return "WCT_VAR_GOLD";
			break;
		
		case 663517359:
			return "WCT_VAR_GOLD";
			break;
		
		case -1470645128:
			return "WCT_VAR_METAL";
			break;
		
		case -1828795171:
			return "WCT_VAR_ETCHM";
			break;
		
		case -966439566:
			return "WCT_VAR_GOLD";
			break;
		
		case -690308418:
			return "WCT_VAR_GOLD";
			break;
		
		case -1562927653:
			return "WCT_VAR_GOLD";
			break;
		
		case -2144080721:
			return "WCT_VAR_WOOD";
			break;
		
		case 1929467122:
			return "WCT_VAR_ETCHM";
			break;
		
		case -1858624256:
			return "WCT_SB_BASE";
			break;
		
		case 1530822070:
			return "WCT_SB_VAR1";
			break;
		
		case -409758110:
			return "WCT_SB_VAR2";
			break;
		
		case -377062173:
			return "WCT_CLIP1";
			break;
		
		case 384708672:
			return "WCT_REV_VARB";
			break;
		
		case -1802258419:
			return "WCT_REV_VARG";
			break;
		
		case 2043113590:
			return "WCT_CLIP_DRM";
			break;
		
		case -1167922891:
			return "WCT_CLIP_BOX";
			break;
		
		case -604986051:
			return "WCT_CLIP_DRM";
			break;
		
		case -2000168365:
			return "WCT_CLIP_DRM";
			break;
		
		case 1623028892:
			return "WCT_VAR_GUN";
			break;
		
		case -1214048550:
			return "WCT_CAMO_IND";
			break;
		
		case 1142457062:
			return "WCT_CAMO_IND";
			break;
		
		case -829683854:
			return "WCT_CLIP2";
			break;
		
		case -944910075:
			return "WCT_SCOPE_MAC2";
			break;
		
		case 1060929921:
			return "WCT_SCOPE_SML2";
			break;
		
		case -673450233:
			return "WCT_VAR_RAY18";
			break;
		
		case 1423184737:
			return "WCT_CLIP1";
			break;
		
		case -2122814295:
			return "WCT_CLIP2";
			break;
		
		case -1828202758:
			return "WCT_SUPP";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_66(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar0))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar0, iVar1, &Var41))
						{
							if (Var41.f_3 == iParam0)
							{
								return func_311(&(Var41.f_6));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

var func_311(var uParam0)
{
	return uParam0;
}

int func_312()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_313())
	{
		return 1;
	}
	return 0;
}

int func_313()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_314(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (iParam0)
		{
			case -604986051:
			case -1167922891:
			case 1857603803:
			case -972590066:
			case -2000168365:
			case -1444295948:
			case 2043113590:
			case 1801039530:
				return 0;
			
			default:
		}
	}
	else if (func_315(iParam0))
	{
		return Global_262145.f_20713;
	}
	return 1;
}

int func_315(int iParam0)
{
	switch (iParam0)
	{
		case -1827882671:
		case 966612367:
		case 1815270123:
		case -687617715:
		case -1179558480:
		case -631911105:
		case 1178671645:
		case 1377355801:
		case 1142457062:
		case -1214048550:
		case -648943513:
		case -974541230:
			return 1;
			break;
	}
	return 0;
}

int func_316()
{
	if (MISC::IS_BIT_SET(Global_25, 6))
	{
		if (MISC::IS_BIT_SET(Global_25, 2) || MISC::IS_BIT_SET(Global_25, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(1571103992, &uVar0, -1))
	{
		if (MISC::IS_BIT_SET(uVar0, 6))
		{
			if (MISC::IS_BIT_SET(iVar0, 2) || MISC::IS_BIT_SET(iVar0, 4))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_150473.f_3)
		{
			iVar2 = 1035124638;
			if (STATS::STAT_GET_INT(iVar2, &uVar1, -1))
			{
				if (MISC::IS_BIT_SET(uVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		uVar3 = MISC::GET_PROFILE_SETTING(866);
		if (MISC::IS_BIT_SET(uVar3, 2) || MISC::IS_BIT_SET(iVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_317()
{
	if (MISC::IS_BIT_SET(Global_25, 5))
	{
		if (MISC::IS_BIT_SET(Global_25, 1) || MISC::IS_BIT_SET(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(1571103992, &uVar0, -1))
	{
		if (MISC::IS_BIT_SET(uVar0, 5))
		{
			if (MISC::IS_BIT_SET(iVar0, 1) || MISC::IS_BIT_SET(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_150473.f_3)
		{
			iVar2 = 1035124638;
			if (STATS::STAT_GET_INT(iVar2, &uVar1, -1))
			{
				if (MISC::IS_BIT_SET(uVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		uVar3 = MISC::GET_PROFILE_SETTING(866);
		if (MISC::IS_BIT_SET(uVar3, 1) || MISC::IS_BIT_SET(iVar3, 3))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25())
			{
				STATS::STAT_GET_INT(1571103992, &uVar4, -1);
				MISC::SET_BIT(&uVar4, 1);
				MISC::SET_BIT(&uVar4, 3);
				MISC::SET_BIT(&uVar4, 5);
				MISC::SET_BIT(&Global_25, 1);
				MISC::SET_BIT(&Global_25, 3);
				MISC::SET_BIT(&Global_25, 5);
				STATS::STAT_SET_INT(1571103992, uVar4, 1);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					uVar4 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&uVar4, 1);
					MISC::SET_BIT(&uVar4, 3);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(uVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_318()
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

bool func_319(int iParam0, int iParam1, int iParam2)
{
	if (func_327())
	{
		return 0;
	}
	uVar0 = func_323(iParam0, iParam1, iParam2);
	iVar1 = func_321(iParam0, iParam1);
	return MISC::IS_BIT_SET(uVar0, func_320(iVar1));
}

int func_320(int iParam0)
{
	return (iParam0 % 32);
}

int func_321(int iParam0, int iParam1)
{
	return func_322(iParam0, iParam1);
}

int func_322(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 453432689:
			switch (iParam0)
			{
				case -19858063:
					return 1;
					break;
				
				case -316253668:
					return 2;
					break;
				
				case 899381934:
					return 3;
					break;
				
				case 1709866683:
					return 4;
					break;
				
				case -684126074:
					return 175;
					break;
				
				case 1623028892:
					return 211;
					break;
			}
			break;
		
		case 1593441988:
			switch (iParam0)
			{
				case 119648377:
					return 5;
					break;
				
				case -696561875:
					return 6;
					break;
				
				case 899381934:
					return 7;
					break;
				
				case -1023114086:
					return 8;
					break;
				
				case -966439566:
					return 186;
					break;
			}
			break;
		
		case 584646201:
			switch (iParam0)
			{
				case 834974250:
					return 11;
					break;
				
				case 614078421:
					return 12;
					break;
				
				case 899381934:
					return 13;
					break;
				
				case -1023114086:
					return 14;
					break;
				
				case -1686714580:
					return 164;
					break;
			}
			break;
		
		case 324215364:
			switch (iParam0)
			{
				case -884429072:
					return 15;
					break;
				
				case 283556395:
					return 16;
					break;
				
				case 899381934:
					return 17;
					break;
				
				case -1657815255:
					return 18;
					break;
				
				case -1489156508:
					return 19;
					break;
				
				case 1215999497:
					return 174;
					break;
			}
			break;
		
		case 736523883:
			switch (iParam0)
			{
				case 643254679:
					return 22;
					break;
				
				case 889808635:
					return 23;
					break;
				
				case 2043113590:
					return 207;
					break;
				
				case 2076495324:
					return 24;
					break;
				
				case 1019656791:
					return 25;
					break;
				
				case -1023114086:
					return 26;
					break;
				
				case 663170192:
					return 179;
					break;
				
				case 1623028892:
					return 212;
					break;
			}
			break;
		
		case -1074790547:
			switch (iParam0)
			{
				case -1101075946:
					return 27;
					break;
				
				case -1323216997:
					return 28;
					break;
				
				case -604986051:
					return 201;
					break;
				
				case 202788691:
					return 29;
					break;
				
				case 2076495324:
					return 30;
					break;
				
				case -1657815255:
					return 31;
					break;
				
				case -1489156508:
					return 32;
					break;
				
				case 1319990579:
					return 165;
					break;
				
				case 1623028892:
					return 213;
					break;
			}
			break;
		
		case -2084633992:
			switch (iParam0)
			{
				case -1614924820:
					return 33;
					break;
				
				case -1861183855:
					return 34;
					break;
				
				case -1167922891:
					return 202;
					break;
				
				case 1967214384:
					return 35;
					break;
				
				case 202788691:
					return 36;
					break;
				
				case 2076495324:
					return 37;
					break;
				
				case -1596416958:
					return 38;
					break;
				
				case -2089531990:
					return 39;
					break;
				
				case -660892072:
					return 168;
					break;
				
				case 1623028892:
					return 214;
					break;
			}
			break;
		
		case -1357824103:
			switch (iParam0)
			{
				case -91250417:
					return 44;
					break;
				
				case -1899902599:
					return 45;
					break;
				
				case 2076495324:
					return 47;
					break;
				
				case -1439939148:
					return 48;
					break;
				
				case -2089531990:
					return 49;
					break;
				
				case 930927479:
					return 163;
					break;
			}
			break;
		
		case -1660422300:
			switch (iParam0)
			{
				case -197857404:
					return 50;
					break;
				
				case -2112517305:
					return 51;
					break;
				
				case 1006677997:
					return 52;
					break;
				
				case -690308418:
					return 187;
					break;
			}
			break;
		
		case 2144741730:
			switch (iParam0)
			{
				case -503336118:
					return 53;
					break;
				
				case -691692330:
					return 54;
					break;
				
				case 202788691:
					return 55;
					break;
				
				case -1596416958:
					return 56;
					break;
				
				case -1828795171:
					return 188;
					break;
				
				case 1623028892:
					return 215;
					break;
			}
			break;
		
		case 487013001:
			switch (iParam0)
			{
				case -435637410:
					return 59;
					break;
				
				case 2076495324:
					return 60;
					break;
				
				case -1562927653:
					return 193;
					break;
				
				case 1623028892:
					return 389;
					break;
			}
			break;
		
		case -494615257:
			switch (iParam0)
			{
				case -1796727865:
					return 64;
					break;
				
				case -2034401422:
					return 65;
					break;
				
				case 202788691:
					return 66;
					break;
				
				case 2076495324:
					return 67;
					break;
				
				case -2089531990:
					return 68;
					break;
			}
			break;
		
		case 100416529:
			switch (iParam0)
			{
				case -1681506167:
					return 69;
					break;
				
				case -767279652:
					return 70;
					break;
				
				case -1135289737:
					return 71;
					break;
				
				case -1489156508:
					return 72;
					break;
				
				case 1077065191:
					return 180;
					break;
			}
			break;
		
		case 205991906:
			switch (iParam0)
			{
				case 1198478068:
					return 76;
					break;
				
				case -1135289737:
					return 77;
					break;
				
				case -767279652:
					return 82;
					break;
				
				case 1623028892:
					return 216;
					break;
			}
			break;
		
		case -1568386805:
			switch (iParam0)
			{
				case 202788691:
					return 78;
					break;
				
				case 2076495324:
					return 79;
					break;
				
				case -1439939148:
					return 80;
					break;
			}
			break;
		
		case 1119849093:
			switch (iParam0)
			{
				case -924946682:
					return 81;
					break;
			}
			break;
		
		case -270015777:
			switch (iParam0)
			{
				case -1928132688:
					return 83;
					break;
				
				case -1152981993:
					return 84;
					break;
				
				case 2076495324:
					return 85;
					break;
				
				case -1657815255:
					return 86;
					break;
				
				case -1489156508:
					return 87;
					break;
				
				case 663517359:
					return 189;
					break;
			}
			break;
		
		case -1654528753:
			switch (iParam0)
			{
				case 202788691:
					return 88;
					break;
				
				case 2076495324:
					return 89;
					break;
				
				case -1489156508:
					return 90;
					break;
			}
			break;
		
		case -1716589765:
			switch (iParam0)
			{
				case 580369945:
					return 91;
					break;
				
				case -640439150:
					return 92;
					break;
				
				case 899381934:
					return 93;
					break;
				
				case -1489156508:
					return 94;
					break;
				
				case 2008591151:
					return 176;
					break;
			}
			break;
		
		case 392730790:
			switch (iParam0)
			{
				case 195735895:
					return 95;
					break;
				
				case -767279652:
					return 96;
					break;
				
				case -1135289737:
					return 97;
					break;
				
				case -2089531990:
					return 98;
					break;
			}
			break;
		
		case -947031628:
			switch (iParam0)
			{
				case 1525977990:
					return 99;
					break;
				
				case 1824470811:
					return 100;
					break;
				
				case 202788691:
					return 101;
					break;
				
				case 2076495324:
					return 102;
					break;
				
				case -1596416958:
					return 103;
					break;
				
				case -2089531990:
					return 104;
					break;
			}
			break;
		
		case -572349828:
			switch (iParam0)
			{
				case -890514874:
					return 105;
					break;
				
				case -507117574:
					return 106;
					break;
				
				case 202788691:
					return 107;
					break;
				
				case -1596416958:
					return 108;
					break;
			}
			break;
		
		case -1887867191:
			switch (iParam0)
			{
				case -124428919:
					return 109;
					break;
				
				case 1048471894:
					return 110;
					break;
			}
			break;
		
		case -1063057011:
			switch (iParam0)
			{
				case -959978111:
					return 111;
					break;
				
				case 2089537806:
					return 112;
					break;
				
				case 1801039530:
					return 208;
					break;
				
				case 202788691:
					return 113;
					break;
				
				case 2076495324:
					return 114;
					break;
				
				case -1596416958:
					return 115;
					break;
				
				case -1489156508:
					return 116;
					break;
				
				case 1929467122:
					return 190;
					break;
				
				case 1623028892:
					return 390;
					break;
			}
			break;
		
		case -1076751822:
			switch (iParam0)
			{
				case -125817127:
					return 117;
					break;
				
				case 2063610803:
					return 118;
					break;
				
				case 899381934:
					return 119;
					break;
				
				case -1023114086:
					return 120;
					break;
				
				case -2144080721:
					return 191;
					break;
				
				case 1623028892:
					return 391;
					break;
			}
			break;
		
		case -771403250:
			switch (iParam0)
			{
				case 222992026:
					return 121;
					break;
				
				case 1694090795:
					return 122;
					break;
				
				case 899381934:
					return 123;
					break;
				
				case -1023114086:
					return 124;
					break;
				
				case 2053798779:
					return 171;
					break;
			}
			break;
		
		case 2132975508:
			switch (iParam0)
			{
				case -979292288:
					return 131;
					break;
				
				case -1284994289:
					return 132;
					break;
				
				case 2076495324:
					return 127;
					break;
				
				case -2089531990:
					return 128;
					break;
				
				case -1439939148:
					return 129;
					break;
				
				case 202788691:
					return 130;
					break;
				
				case -1470645128:
					return 192;
					break;
				
				case 1623028892:
					return 394;
					break;
			}
			break;
		
		case 1627465347:
			switch (iParam0)
			{
				case 484812453:
					return 125;
					break;
				
				case -355941776:
					return 126;
					break;
			}
			break;
		
		case 137902532:
			switch (iParam0)
			{
				case 1168357051:
					return 133;
					break;
				
				case 867832552:
					return 134;
					break;
				
				case -1023114086:
					return 136;
					break;
			}
			break;
		
		case 984333226:
			switch (iParam0)
			{
				case 844049759:
					return 137;
					break;
				
				case -1759709443:
					return 140;
					break;
				
				case -2000168365:
					return 205;
					break;
				
				case 2076495324:
					return 145;
					break;
				
				case -1489156508:
					return 146;
					break;
				
				case 202788691:
					return 147;
					break;
			}
			break;
		
		case -952879014:
			switch (iParam0)
			{
				case -667205311:
					return 138;
					break;
				
				case -855823675:
					return 139;
					break;
				
				case 471997210:
					return 141;
					break;
				
				case 2076495324:
					return 142;
					break;
				
				case -2089531990:
					return 143;
					break;
				
				case 202788691:
					return 144;
					break;
				
				case 371102273:
					return 172;
					break;
				
				case 1623028892:
					return 392;
					break;
			}
			break;
		
		case 171789620:
			switch (iParam0)
			{
				case 1125642654:
					return 149;
					break;
				
				case 860508675:
					return 150;
					break;
				
				case 1857603803:
					return 203;
					break;
				
				case 2076495324:
					return 151;
					break;
				
				case -1439939148:
					return 152;
					break;
				
				case 202788691:
					return 153;
					break;
			}
			break;
		
		case 2017895192:
			switch (iParam0)
			{
				case -2052698631:
					return 178;
					break;
			}
			break;
		
		case -598887786:
			switch (iParam0)
			{
				case -878820883:
					return 148;
					break;
			}
			break;
		
		case -656458692:
			switch (iParam0)
			{
				case -971770235:
					return 154;
					break;
				
				case -287703709:
					return 155;
					break;
				
				case 1351683121:
					return 156;
					break;
				
				case -1755194916:
					return 157;
					break;
				
				case 2112683568:
					return 158;
					break;
				
				case 1062111910:
					return 159;
					break;
				
				case 146278587:
					return 160;
					break;
				
				case -494162961:
					return 161;
					break;
				
				case 2062808965:
					return 162;
					break;
			}
			break;
		
		case -619010992:
			switch (iParam0)
			{
				case 1198425599:
					return 184;
					break;
				
				case -1188271751:
					return 185;
					break;
				
				case -1444295948:
					return 206;
					break;
				
				case -1023114086:
					return 183;
					break;
			}
			break;
		
		case -538741184:
			switch (iParam0)
			{
				case 1530822070:
					return 194;
					break;
				
				case -409758110:
					return 195;
					break;
			}
			break;
		
		case -1045183535:
			switch (iParam0)
			{
				case -377062173:
					return 196;
					break;
				
				case 384708672:
					return 197;
					break;
				
				case -1802258419:
					return 198;
					break;
				
				case 1623028892:
					return 393;
					break;
			}
			break;
		
		case 1649403952:
			switch (iParam0)
			{
				case 1363085923:
					return 199;
					break;
				
				case 1509923832:
					return 200;
					break;
				
				case -972590066:
					return 204;
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam0)
			{
				case -2067221805:
					return 209;
					break;
				
				case -1820405577:
					return 210;
					break;
			}
			break;
		
		case -1075685676:
			switch (iParam0)
			{
				case -1795936926:
					return 217;
					break;
				
				case 1591132456:
					return 218;
					break;
				
				case 1329061674:
					return 219;
					break;
				
				case -2046910199:
					return 220;
					break;
				
				case 733837882:
					return 221;
					break;
				
				case 634039983:
					return 222;
					break;
				
				case 1140676955:
					return 223;
					break;
				
				case -1898661008:
					return 224;
					break;
				
				case 1709866683:
					return 225;
					break;
				
				case 568543123:
					return 226;
					break;
				
				case 1550611612:
					return 367;
					break;
				
				case 368550800:
					return 368;
					break;
				
				case -1769069349:
					return 369;
					break;
				
				case 24902297:
					return 370;
					break;
				
				case -228041614:
					return 371;
					break;
				
				case -584961562:
					return 372;
					break;
				
				case -1153175946:
					return 373;
					break;
				
				case 1301287696:
					return 374;
					break;
				
				case 1597093459:
					return 375;
					break;
				
				case 1769871776:
					return 376;
					break;
				
				case -1827882671:
					return 377;
					break;
			}
			break;
		
		case 2024373456:
			switch (iParam0)
			{
				case 1277460590:
					return 227;
					break;
				
				case -1182573778:
					return 228;
					break;
				
				case 190476639:
					return 229;
					break;
				
				case 974903034:
					return 230;
					break;
				
				case -644734235:
					return 231;
					break;
				
				case 2146055916:
					return 232;
					break;
				
				case 2076495324:
					return 233;
					break;
				
				case -1613015470:
					return 234;
					break;
				
				case -452809877:
					return 235;
					break;
				
				case 1038927834:
					return 236;
					break;
				
				case -1023114086:
					return 237;
					break;
				
				case -1181482284:
					return 238;
					break;
				
				case -932732805:
					return 239;
					break;
				
				case -569259057:
					return 240;
					break;
				
				case -326080308:
					return 241;
					break;
				
				case 48731514:
					return 242;
					break;
				
				case 880736428:
					return 243;
					break;
				
				case 1303784126:
					return 244;
					break;
				
				case -653246751:
					return 245;
					break;
				
				case -1520117877:
					return 246;
					break;
				
				case -996700057:
					return 378;
					break;
				
				case 940943685:
					return 379;
					break;
				
				case 1263226800:
					return 380;
					break;
				
				case -328035840:
					return 381;
					break;
				
				case 1224100642:
					return 382;
					break;
				
				case 899228776:
					return 383;
					break;
				
				case 616006309:
					return 384;
					break;
				
				case -1561952511:
					return 385;
					break;
				
				case 572063080:
					return 386;
					break;
				
				case 1170588613:
					return 387;
					break;
				
				case 966612367:
					return 388;
					break;
			}
			break;
		
		case 177293209:
			switch (iParam0)
			{
				case -98690520:
					return 247;
					break;
				
				case 752418717:
					return 248;
					break;
				
				case -130689324:
					return 249;
					break;
				
				case -1981031769:
					return 250;
					break;
				
				case 1005144310:
					return 251;
					break;
				
				case 247526935:
					return 252;
					break;
				
				case -2101279869:
					return 253;
					break;
				
				case -1135289737:
					return 254;
					break;
				
				case -1233121104:
					return 255;
					break;
				
				case 776198721:
					return 256;
					break;
				
				case -1404903567:
					return 257;
					break;
				
				case 1602080333:
					return 258;
					break;
				
				case 1764221345:
					return 259;
					break;
				
				case -1869205321:
					return 260;
					break;
				
				case 277524638:
					return 261;
					break;
				
				case -130843390:
					return 356;
					break;
				
				case -977347227:
					return 357;
					break;
				
				case -378461067:
					return 358;
					break;
				
				case 329939175:
					return 359;
					break;
				
				case 643374672:
					return 360;
					break;
				
				case 807875052:
					return 361;
					break;
				
				case -1401804168:
					return 362;
					break;
				
				case -1096495395:
					return 363;
					break;
				
				case -847811454:
					return 364;
					break;
				
				case -1413108537:
					return 365;
					break;
				
				case 1815270123:
					return 366;
					break;
			}
			break;
		
		case -608341376:
			switch (iParam0)
			{
				case 1227564412:
					return 262;
					break;
				
				case 400507625:
					return 263;
					break;
				
				case 696788003:
					return 264;
					break;
				
				case 1475288264:
					return 265;
					break;
				
				case -1020871238:
					return 266;
					break;
				
				case -161179835:
					return 267;
					break;
				
				case -1654288262:
					return 268;
					break;
				
				case 1108334355:
					return 269;
					break;
				
				case 1060929921:
					return 270;
					break;
				
				case -966040254:
					return 271;
					break;
				
				case -1181482284:
					return 272;
					break;
				
				case -932732805:
					return 273;
					break;
				
				case -569259057:
					return 274;
					break;
				
				case -326080308:
					return 275;
					break;
				
				case 48731514:
					return 276;
					break;
				
				case 880736428:
					return 277;
					break;
				
				case 1303784126:
					return 278;
					break;
				
				case -1018236364:
					return 279;
					break;
				
				case -1243457701:
					return 280;
					break;
				
				case 1249283253:
					return 345;
					break;
				
				case -857707587:
					return 346;
					break;
				
				case -1097543898:
					return 347;
					break;
				
				case 1980349969:
					return 348;
					break;
				
				case 1219453777:
					return 349;
					break;
				
				case -1853459190:
					return 350;
					break;
				
				case -2074781016:
					return 351;
					break;
				
				case 457967755:
					return 352;
					break;
				
				case 235171324:
					return 353;
					break;
				
				case 42685294:
					return 354;
					break;
				
				case -687617715:
					return 355;
					break;
			}
			break;
		
		case 961495388:
			switch (iParam0)
			{
				case -2045758401:
					return 281;
					break;
				
				case -785724817:
					return 282;
					break;
				
				case -1478681000:
					return 283;
					break;
				
				case 1675665560:
					return 284;
					break;
				
				case -76490669:
					return 285;
					break;
				
				case -282298175:
					return 286;
					break;
				
				case -1654288262:
					return 287;
					break;
				
				case 2076495324:
					return 288;
					break;
				
				case 1108334355:
					return 289;
					break;
				
				case 77277509:
					return 290;
					break;
				
				case -966040254:
					return 291;
					break;
				
				case -1489156508:
					return 292;
					break;
				
				case -1181482284:
					return 293;
					break;
				
				case -932732805:
					return 294;
					break;
				
				case -569259057:
					return 295;
					break;
				
				case -326080308:
					return 296;
					break;
				
				case 48731514:
					return 297;
					break;
				
				case 880736428:
					return 298;
					break;
				
				case 1303784126:
					return 299;
					break;
				
				case 1134861606:
					return 300;
					break;
				
				case 1447477866:
					return 301;
					break;
				
				case -1860492113:
					return 323;
					break;
				
				case 937772107:
					return 324;
					break;
				
				case 1401650071:
					return 325;
					break;
				
				case 628662130:
					return 326;
					break;
				
				case -985047251:
					return 327;
					break;
				
				case -812944463:
					return 328;
					break;
				
				case -1447352303:
					return 329;
					break;
				
				case -60338860:
					return 330;
					break;
				
				case 2088750491:
					return 331;
					break;
				
				case -1513913454:
					return 332;
					break;
				
				case -1179558480:
					return 333;
					break;
			}
			break;
		
		case -86904375:
			switch (iParam0)
			{
				case 1283078430:
					return 302;
					break;
				
				case 1574296533:
					return 303;
					break;
				
				case 626875735:
					return 304;
					break;
				
				case 1141059345:
					return 305;
					break;
				
				case 1025884839:
					return 306;
					break;
				
				case 391640422:
					return 307;
					break;
				
				case -1654288262:
					return 308;
					break;
				
				case 2076495324:
					return 309;
					break;
				
				case 1108334355:
					return 310;
					break;
				
				case 77277509:
					return 311;
					break;
				
				case -966040254:
					return 312;
					break;
				
				case -2089531990:
					return 313;
					break;
				
				case -1181482284:
					return 314;
					break;
				
				case -932732805:
					return 315;
					break;
				
				case -569259057:
					return 316;
					break;
				
				case -326080308:
					return 317;
					break;
				
				case 48731514:
					return 318;
					break;
				
				case 880736428:
					return 319;
					break;
				
				case 1303784126:
					return 320;
					break;
				
				case -2093598721:
					return 321;
					break;
				
				case -1958983669:
					return 322;
					break;
				
				case 1272803094:
					return 334;
					break;
				
				case 1080719624:
					return 335;
					break;
				
				case 792221348:
					return 336;
					break;
				
				case -452181427:
					return 337;
					break;
				
				case -746774737:
					return 338;
					break;
				
				case -2044296061:
					return 339;
					break;
				
				case -199171978:
					return 340;
					break;
				
				case -1428075016:
					return 341;
					break;
				
				case -1735153315:
					return 342;
					break;
				
				case 1796459838:
					return 343;
					break;
				
				case -631911105:
					return 344;
					break;
			}
			break;
		
		case 1432025498:
			switch (iParam0)
			{
				case -845938367:
					return 395;
					break;
				
				case 1315288101:
					return 396;
					break;
				
				case 1004815965:
					return 397;
					break;
				
				case -380098265:
					return 398;
					break;
				
				case -1618338827:
					return 399;
					break;
				
				case 2076495324:
					return 400;
					break;
				
				case 1108334355:
					return 401;
					break;
				
				case 77277509:
					return 402;
					break;
				
				case 1060929921:
					return 403;
					break;
				
				case -1404903567:
					return 404;
					break;
				
				case 1602080333:
					return 405;
					break;
				
				case -474112444:
					return 488;
					break;
				
				case 387223451:
					return 489;
					break;
				
				case 617753366:
					return 490;
					break;
				
				case -222378256:
					return 491;
					break;
				
				case 8741501:
					return 492;
					break;
				
				case -601286203:
					return 493;
					break;
				
				case -511433605:
					return 494;
					break;
				
				case -655387818:
					return 495;
					break;
				
				case -282476598:
					return 496;
					break;
				
				case 1739501925:
					return 497;
					break;
				
				case 1178671645:
					return 498;
					break;
			}
			break;
		
		case -1768145561:
			switch (iParam0)
			{
				case 382112385:
					return 406;
					break;
				
				case -568352468:
					return 407;
					break;
				
				case 1362433589:
					return 408;
					break;
				
				case 1346235024:
					return 409;
					break;
				
				case -570355066:
					return 410;
					break;
				
				case -2023373174:
					return 411;
					break;
				
				case 2076495324:
					return 412;
					break;
				
				case 1108334355:
					return 413;
					break;
				
				case 77277509:
					return 414;
					break;
				
				case -966040254:
					return 415;
					break;
				
				case -1489156508:
					return 416;
					break;
				
				case -1181482284:
					return 417;
					break;
				
				case -932732805:
					return 418;
					break;
				
				case -569259057:
					return 419;
					break;
				
				case -326080308:
					return 420;
					break;
				
				case 48731514:
					return 421;
					break;
				
				case 880736428:
					return 422;
					break;
				
				case 1303784126:
					return 423;
					break;
				
				case -1654288262:
					return 424;
					break;
				
				case -415870039:
					return 425;
					break;
				
				case -109086661:
					return 426;
					break;
				
				case -737430213:
					return 532;
					break;
				
				case 1125852043:
					return 533;
					break;
				
				case 886015732:
					return 534;
					break;
				
				case -1262287139:
					return 535;
					break;
				
				case -295208411:
					return 536;
					break;
				
				case -544154504:
					return 537;
					break;
				
				case 172765678:
					return 538;
					break;
				
				case -1982877449:
					return 539;
					break;
				
				case 2072122460:
					return 540;
					break;
				
				case -1986220171:
					return 541;
					break;
				
				case 1377355801:
					return 542;
					break;
			}
			break;
		
		case -2009644972:
			switch (iParam0)
			{
				case 21392614:
					return 427;
					break;
				
				case -829683854:
					return 428;
					break;
				
				case -1055790298:
					return 429;
					break;
				
				case -1928301566:
					return 430;
					break;
				
				case -424845447:
					return 431;
					break;
				
				case -1876057490:
					return 432;
					break;
				
				case 1246324211:
					return 433;
					break;
				
				case 1205768792:
					return 434;
					break;
				
				case 1709866683:
					return 435;
					break;
				
				case -1434287169:
					return 436;
					break;
				
				case 259780317:
					return 510;
					break;
				
				case -1973342474:
					return 511;
					break;
				
				case 1996130345:
					return 512;
					break;
				
				case -1455657812:
					return 513;
					break;
				
				case -1668263084:
					return 514;
					break;
				
				case 1308243489:
					return 515;
					break;
				
				case 1122574335:
					return 516;
					break;
				
				case 1420313469:
					return 517;
					break;
				
				case 109848390:
					return 518;
					break;
				
				case 593945703:
					return 519;
					break;
				
				case 1142457062:
					return 520;
					break;
			}
			break;
		
		case 1785463520:
			switch (iParam0)
			{
				case -1797182002:
					return 437;
					break;
				
				case -422587990:
					return 438;
					break;
				
				case -193998727:
					return 439;
					break;
				
				case -515203373:
					return 440;
					break;
				
				case 1842849902:
					return 441;
					break;
				
				case -679861550:
					return 442;
					break;
				
				case 2076495324:
					return 443;
					break;
				
				case 1108334355:
					return 444;
					break;
				
				case -966040254:
					return 445;
					break;
				
				case 1528590652:
					return 446;
					break;
				
				case -2089531990:
					return 447;
					break;
				
				case -1181482284:
					return 448;
					break;
				
				case -932732805:
					return 449;
					break;
				
				case -569259057:
					return 450;
					break;
				
				case -326080308:
					return 451;
					break;
				
				case 48731514:
					return 452;
					break;
				
				case 880736428:
					return 453;
					break;
				
				case 1303784126:
					return 454;
					break;
				
				case -1654288262:
					return 455;
					break;
				
				case 941317513:
					return 456;
					break;
				
				case 1748450780:
					return 457;
					break;
				
				case -1869284448:
					return 521;
					break;
				
				case 1931539634:
					return 522;
					break;
				
				case 1624199183:
					return 523;
					break;
				
				case -26834113:
					return 524;
					break;
				
				case -210406055:
					return 525;
					break;
				
				case 423313640:
					return 526;
					break;
				
				case 276639596:
					return 527;
					break;
				
				case -991356863:
					return 528;
					break;
				
				case -1682848301:
					return 529;
					break;
				
				case 996213771:
					return 530;
					break;
				
				case -1214048550:
					return 531;
					break;
			}
			break;
		
		case -879347409:
			switch (iParam0)
			{
				case -1172055874:
					return 458;
					break;
				
				case 231258687:
					return 459;
					break;
				
				case 284438159:
					return 460;
					break;
				
				case 15712037:
					return 461;
					break;
				
				case -958864266:
					return 462;
					break;
				
				case 1108334355:
					return 463;
					break;
				
				case 77277509:
					return 464;
					break;
				
				case 899381934:
					return 465;
					break;
				
				case 654802123:
					return 466;
					break;
				
				case -1069552225:
					return 499;
					break;
				
				case 11918884:
					return 500;
					break;
				
				case 176157112:
					return 501;
					break;
				
				case -220052855:
					return 502;
					break;
				
				case 288456487:
					return 503;
					break;
				
				case 398658626:
					return 504;
					break;
				
				case 628697006:
					return 505;
					break;
				
				case 925911836:
					return 506;
					break;
				
				case 1222307441:
					return 507;
					break;
				
				case 552442715:
					return 508;
					break;
				
				case -648943513:
					return 509;
					break;
			}
			break;
		
		case -2066285827:
			switch (iParam0)
			{
				case 25766362:
					return 467;
					break;
				
				case -273676760:
					return 468;
					break;
				
				case -89655827:
					return 469;
					break;
				
				case 1130501904:
					return 470;
					break;
				
				case -1449330342:
					return 471;
					break;
				
				case -2111807319:
					return 472;
					break;
				
				case 2076495324:
					return 473;
					break;
				
				case 1108334355:
					return 474;
					break;
				
				case -944910075:
					return 475;
					break;
				
				case 1060929921:
					return 476;
					break;
				
				case 1704640795:
					return 477;
					break;
				
				case 1005743559:
					return 478;
					break;
				
				case -2089531990:
					return 479;
					break;
				
				case -1181482284:
					return 480;
					break;
				
				case -932732805:
					return 481;
					break;
				
				case -569259057:
					return 482;
					break;
				
				case -326080308:
					return 483;
					break;
				
				case 48731514:
					return 484;
					break;
				
				case 880736428:
					return 485;
					break;
				
				case 1303784126:
					return 486;
					break;
				
				case -1654288262:
					return 487;
					break;
				
				case -1371515465:
					return 543;
					break;
				
				case -1190793877:
					return 544;
					break;
				
				case -1497085720:
					return 545;
					break;
				
				case -1803148180:
					return 546;
					break;
				
				case -1975971886:
					return 547;
					break;
				
				case 36929477:
					return 548;
					break;
				
				case -268444834:
					return 549;
					break;
				
				case -574769446:
					return 550;
					break;
				
				case -882699739:
					return 551;
					break;
				
				case -1468181474:
					return 552;
					break;
				
				case -974541230:
					return 553;
					break;
			}
			break;
		
		case -1355376991:
			switch (iParam0)
			{
				case -673450233:
					return 554;
					break;
			}
			break;
		
		case 727643628:
			switch (iParam0)
			{
				case 1423184737:
					return 555;
					break;
				
				case -2122814295:
					return 556;
					break;
				
				case -1828202758:
					return 557;
					break;
			}
			break;
	}
	return 0;
}

var func_323(int iParam0, int iParam1, var uParam2)
{
	uVar0 = func_52(func_324(iParam0, iParam1), uParam2, 0);
	return uVar0;
}

int func_324(int iParam0, int iParam1)
{
	iVar0 = func_321(iParam0, iParam1);
	iVar1 = func_326(iVar0);
	if ((func_77() == 0 || func_325() == 0) || (func_77() == 999 && func_325() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 687;
				break;
			
			case 1:
				return 688;
				break;
			
			case 2:
				return 689;
				break;
			
			case 3:
				return 690;
				break;
			
			case 4:
				return 1753;
				break;
			
			case 5:
				return 2435;
				break;
			
			case 6:
				return 2827;
				break;
			
			case 7:
				return 5501;
				break;
			
			case 8:
				return 5505;
				break;
			
			case 9:
				return 5509;
				break;
			
			case 10:
				return 5622;
				break;
			
			case 11:
				return 5626;
				break;
			
			case 12:
				return 5630;
				break;
			
			case 13:
				return 5634;
				break;
			
			case 14:
				return 6373;
				break;
			
			case 15:
				return 6496;
				break;
			
			case 16:
				return 6516;
				break;
			
			case 17:
				return 6522;
				break;
		}
	}
	return 1753;
}

int func_325()
{
	return Global_30769;
}

int func_326(int iParam0)
{
	return (iParam0 / 32);
}

bool func_327()
{
	return Global_1312856;
}

int func_328(int iParam0)
{
	if (iParam0 != -1)
	{
		if ((((iParam0 == 46 || iParam0 == 47) || iParam0 == 48) || iParam0 == 49) || iParam0 == 52)
		{
			return 1;
		}
	}
	return 0;
}

void func_329(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_1 = iParam4;
}

int func_330(var uParam0, int iParam1, int iParam2)
{
	func_329(&Var0, *uParam0, uParam0->f_4, uParam0->f_6, uParam0->f_1);
	while (func_278(&Var0, iParam1, iVar7, 0))
	{
		if (Var0.f_4 == iParam2)
		{
			return 1;
		}
		iVar7++;
	}
	return 0;
}

float func_331(float fParam0)
{
	return (fParam0 * 57.29578f);
}

int func_332(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, 1);
	return 1;
}

int func_333(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		VEHICLE::DELETE_VEHICLE(uParam0);
		*uParam0 = 0;
	}
	*uParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, 1, 1, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	return 1;
}

int func_334(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	PED::SET_PED_MONEY(*uParam0, 0);
	PED::SET_PED_NAME_DEBUG(*uParam0, "RAMP:SCENE PED");
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
	return 1;
}

int func_335(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		PED::DELETE_PED(uParam0);
		*uParam0 = 0;
	}
	*uParam0 = PED::CREATE_PED(26, iParam1, Param2, fParam5, 1, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		func_336(*uParam0, Param2);
		ENTITY::SET_ENTITY_HEADING(*uParam0, fParam5);
	}
	PED::SET_PED_MONEY(*uParam0, 0);
	PED::SET_PED_NAME_DEBUG(*uParam0, "RAMP:SCENE PED");
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
	return 1;
}

Vector3 func_336(var uParam0, struct<3> Param1)
{
	Param1.z = (Param1.z + 0.15f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &uVar0, 0, 0))
	{
		Param1.z = uVar0;
	}
	if (func_225(uParam0))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0, Param1, 1, 0, 0, 1);
	}
	return Param1;
}

int func_337()
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(-177.0628f, -1679.715f, 33.16263f, -157.0628f, -1659.715f, 37.16263f, 0, 1, 1, 1);
}

void func_338(var uParam0)
{
	iVar0 = -449965460;
	sVar1 = "misstrvram_4";
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_ANIM_DICT(sVar1);
	WEAPON::REQUEST_WEAPON_ASSET(-1074790547, 31, 0);
	while (!STREAMING::HAS_MODEL_LOADED(iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar1))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_335(&(uParam0->f_28[0]), iVar0, -161.37f, -1669.63f, 33.1f, func_331(1.03f), 1))
	{
		SYSTEM::WAIT(0);
	}
	func_334(&(uParam0->f_28[0]));
	PED::SET_PED_NAME_DEBUG(uParam0->f_28[0], "RP0_NOGUN");
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 10, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 11, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(uParam0->f_28[0], sVar1, "thugs_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_335(&(uParam0->f_28[1]), iVar0, -161.93f, -1670.39f, 33.14f, func_331(0.2f), 1))
	{
		SYSTEM::WAIT(0);
	}
	func_334(&(uParam0->f_28[1]));
	PED::SET_PED_NAME_DEBUG(uParam0->f_28[1], "RP1_GUN");
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[1]);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 10, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 11, 0, 0, 0);
	WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[1], -1074790547, 100, 1, 1);
	TASK::TASK_PLAY_ANIM(uParam0->f_28[1], sVar1, "thugs_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	StringCopy(&(uParam0->f_9), "TRVRAM_4", 24);
	uParam0->f_27 = 0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
}

void func_339(var uParam0)
{
	iVar0 = -424905564;
	sVar1 = "misstrvram_3";
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_ANIM_DICT(sVar1);
	WEAPON::REQUEST_WEAPON_ASSET(324215364, 31, 10);
	while ((!STREAMING::HAS_MODEL_LOADED(iVar0) || !WEAPON::HAS_WEAPON_ASSET_LOADED(324215364)) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar1))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_335(&(uParam0->f_28[0]), iVar0, 464.6125f, -1848.767f, 27.816f, 177.39f, 1))
	{
		SYSTEM::WAIT(0);
	}
	func_334(&(uParam0->f_28[0]));
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 11, 0, 0, 0);
	PED::SET_PED_NAME_DEBUG(uParam0->f_28[0], "RAMP:PED 0");
	TASK::TASK_PLAY_ANIM(uParam0->f_28[0], sVar1, "mexicans_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_335(&(uParam0->f_28[1]), iVar0, 465.782f, -1849.073f, 27.817f, 129.92f, 1))
	{
		SYSTEM::WAIT(0);
	}
	func_334(&(uParam0->f_28[1]));
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 11, 0, 0, 0);
	PED::SET_PED_NAME_DEBUG(uParam0->f_28[1], "RAMP:PED 1");
	TASK::TASK_PLAY_ANIM(uParam0->f_28[1], sVar1, "mexicans_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	if (func_276(&(uParam0->f_41[0]), 324215364, 467f, -1855.4f, 32f, func_331(-0.85f)))
	{
		WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(uParam0->f_41[0], -1657815255);
		WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(uParam0->f_41[0], 283556395);
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_3", 24);
	uParam0->f_27 = 0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
}

int func_340()
{
	return func_341(1182.137f, -400.4787f, 66.92414f, 8f);
}

var func_341(struct<3> Param0, float fParam3)
{
	Var0 = { (fParam3 / 2f), (fParam3 / 2f), (fParam3 / 2f) };
	return PED::ADD_SCENARIO_BLOCKING_AREA(Param0 - Var0, Param0 + Var0, 0, 1, 1, 1);
}

void func_342(var uParam0)
{
	iVar0 = -554721426;
	iVar1 = 525667351;
	iVar2 = -1038739674;
	sVar3 = "misstrvram_2";
	iVar4 = 60309;
	Var5 = { 0f, 0f, 0f };
	Var8 = { 0f, 0f, 0f };
	WEAPON::REQUEST_WEAPON_ASSET(2017895192, 31, 0);
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(iVar1);
	STREAMING::REQUEST_MODEL(iVar2);
	STREAMING::REQUEST_ANIM_DICT(sVar3);
	func_346(&uLocal_112);
	while ((((!STREAMING::HAS_MODEL_LOADED(iVar0) || !STREAMING::HAS_MODEL_LOADED(iVar1)) || !STREAMING::HAS_MODEL_LOADED(iVar2)) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar3)) || !func_345(&uLocal_112))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA_OF_OBJECTS(1180.021f, -401.7374f, 66.8767f, 0.75f, 0);
	uParam0->f_41[2] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1179.778f, -401.7374f, 66.8697f, 1f, 525667351, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[2]))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_41[2], 1180.05f, -401.83f, 66.88f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[2], 0f, 0f, 50f, 2, 1);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[2], 1);
	}
	uParam0->f_41[3] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1181.243f, -402.5309f, 67.2564f, 1f, -207026330, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[3]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[3], 1);
	}
	while (!func_335(&(uParam0->f_28[0]), iVar0, 1181.547f, -400.0954f, 67.5757f, -124.2928f, 0))
	{
		SYSTEM::WAIT(0);
	}
	func_334(&(uParam0->f_28[0]));
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], 1);
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
	func_344(&(uParam0->f_41[1]), iVar2, 1181.547f, -400.0954f, 65.5757f, 0f);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], iVar4), Var8, Var5, 1, 0, 0, 0, 2, 1);
	func_343(&uLocal_112, 0, 3);
	if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_59))
	{
		uParam0->f_59 = PED::CREATE_SYNCHRONIZED_SCENE(Local_106, Local_109, 2);
		if (func_128(uParam0->f_28[0]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uParam0->f_59, sVar3, "hipster_idle", 8f, -8f, 513, 0, 1148846080, 0);
		}
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_59, 1);
	}
	if (!func_276(&(uParam0->f_41[0]), 2017895192, 1162.2f, -395.4f, 72.9f, func_331(-0.71f)))
	{
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_2_CONCAT", 24);
	uParam0->f_27 = 0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
}

void func_343(var uParam0, bool bParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (bParam1)
		{
			MOBILE::GET_MOBILE_PHONE_RENDER_ID(&uVar0);
		}
		else
		{
			if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("npcphone"))
			{
				HUD::REGISTER_NAMED_RENDERTARGET("npcphone", 0);
				HUD::LINK_NAMED_RENDERTARGET(-1038739674);
			}
			uVar0 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("npcphone");
		}
		HUD::SET_TEXT_RENDER_ID(uVar0);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DISPLAY_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, Global_19406, Global_19407, Global_19408, Global_19409, 255, 255, 255, 255, 0);
	}
}

void func_344(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_154(uParam0);
	*uParam0 = OBJECT::CREATE_OBJECT(iParam1, Param2, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(*uParam0, fParam5);
}

int func_345(var uParam0)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_346(var uParam0)
{
	*uParam0 = unk_0x67D02A194A2FC2BD(func_347());
}

char* func_347()
{
	return "CELLPHONE_CUTSCENE";
}

int func_348()
{
	return func_341(911.5349f, 3642.111f, 31.64738f, 8f);
}

void func_349(var uParam0)
{
	sVar3 = "misstrvram_1";
	iVar4 = 28422;
	Var5 = { 0f, 0f, 0f };
	Var8 = { 0f, 0f, -0.1f };
	iVar11 = 1165307954;
	iVar12 = 146905321;
	iVar13 = 1172836182;
	STREAMING::REQUEST_MODEL(iVar11);
	STREAMING::REQUEST_MODEL(iVar12);
	STREAMING::REQUEST_MODEL(iVar13);
	STREAMING::REQUEST_ANIM_DICT(sVar3);
	WEAPON::REQUEST_WEAPON_ASSET(-1074790547, 31, 0);
	while ((((!STREAMING::HAS_MODEL_LOADED(iVar11) || !STREAMING::HAS_MODEL_LOADED(iVar12)) || !STREAMING::HAS_MODEL_LOADED(iVar13)) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar3)) || !WEAPON::HAS_WEAPON_ASSET_LOADED(-1074790547))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_335(&(uParam0->f_28[0]), iVar11, 907.998f, 3643.826f, 32.29243f, -173.0453f, 0))
	{
		SYSTEM::WAIT(0);
	}
	if (func_128(uParam0->f_28[0]))
	{
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 11, 0, 0, 0);
		Var0 = { PED::GET_PED_BONE_COORDS(uParam0->f_28[0], iVar4, 0f, 0f, 0f) };
		PED::SET_PED_NAME_DEBUG(uParam0->f_28[0], "RAMP:PED 0");
		func_344(&(uParam0->f_41[1]), iVar13, Var0, 0f);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], iVar4), Var8, Var5, 1, 1, 0, 0, 2, 1);
		OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(uParam0->f_41[1], 1);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], 1);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 208, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], 1862763509);
	}
	while (!func_335(&(uParam0->f_28[1]), iVar11, 909.3126f, 3643.507f, 32.2952f, 153.0127f, 0))
	{
		SYSTEM::WAIT(0);
	}
	if (func_128(uParam0->f_28[1]))
	{
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 11, 0, 0, 0);
		Var0 = { PED::GET_PED_BONE_COORDS(uParam0->f_28[1], iVar4, 0f, 0f, 0f) };
		PED::SET_PED_NAME_DEBUG(uParam0->f_28[1], "RAMP:PED 1");
		func_344(&(uParam0->f_41[2]), iVar13, Var0, 0f);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[2], uParam0->f_28[1], PED::GET_PED_BONE_INDEX(uParam0->f_28[1], iVar4), Var8, Var5, 1, 1, 0, 0, 2, 1);
		OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(uParam0->f_41[2], 1);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[1], 1);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_28[1], 208, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[1], 1862763509);
	}
	uParam0->f_41[3] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(909.3884f, 3643.652f, 31.699f, 1f, 146905321, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[3]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[3], 1);
	}
	uParam0->f_41[4] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(908.0437f, 3643.682f, 31.7073f, 1f, 146905321, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[4]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[4], 1);
	}
	if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_59))
	{
		uParam0->f_59 = PED::CREATE_SYNCHRONIZED_SCENE(910.13f, 3643.74f, 31.69f, 0f, 0f, func_331(-0.26f), 2);
		if (func_128(uParam0->f_28[0]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uParam0->f_59, sVar3, "redneck_idle_a", 8f, -8f, 513, 0, 1148846080, 0);
		}
		if (func_128(uParam0->f_28[1]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[1], uParam0->f_59, sVar3, "redneck_idle_b", 8f, -8f, 513, 0, 1148846080, 0);
		}
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_59, 1);
	}
	if (!func_276(&(uParam0->f_41[0]), -1074790547, 907.52f, 3644.32f, 31.86f, -164.89f))
	{
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar11);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar12);
	StringCopy(&(uParam0->f_9), "TRVRAM_1", 24);
	uParam0->f_27 = 0;
}

int func_350(int iParam0)
{
	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 1;
	}
	if (func_180(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_351(int iParam0)
{
	func_111(iParam0, &Var0);
	iVar32 = func_227();
	if (iVar32 == 145)
	{
		return 1;
	}
	else if ((iVar32 != 1 && iVar32 != 0) && iVar32 != 2)
	{
		return 1;
	}
	if (!MISC::IS_BIT_SET(Var0.f_26, iVar32))
	{
		return 1;
	}
	return 0;
}

int func_352(int iParam0, var uParam1, struct<3> Param2, float fParam5)
{
	if (*iParam0 == 1)
	{
		if (func_353((*iParam0)[0], Param2, fParam5, uParam1))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (func_353((*iParam0)[iVar0], Param2, fParam5, uParam1))
			{
				iVar0 = *iParam0;
				return 1;
			}
			iVar0++;
		}
	}
	func_371("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
	return 0;
}

int func_353(int iParam0, struct<3> Param1, float fParam4, var uParam5)
{
	iVar0 = 0;
	func_111(iParam0, &Var1);
	if (func_354(Var1.f_6, Param1, fParam4, 0))
	{
		if (MISC::IS_BIT_SET(Global_111638.f_18569[iParam0], 0))
		{
			if (!MISC::IS_BIT_SET(Global_111638.f_18569[iParam0], 3))
			{
				iVar0 = 1;
			}
		}
		if (func_190(iParam0))
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 1)
	{
		*uParam5 = iParam0;
		StringCopy(&(uParam5->f_1), Var1, 32);
		return 1;
	}
	return 0;
}

int func_354(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
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

int func_355(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

void func_356(var uParam0, bool bParam1)
{
	func_272(uParam0);
	if (bParam1)
	{
		func_371(" SCRIPT TERMINATING: Cleaning up entities in Launcher");
		func_359(uParam0, 0, 0, 0);
	}
	func_358(&(uParam0->f_48));
	if (iLocal_287 != -1)
	{
		func_371("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_269(&iLocal_287);
	}
	if (iLocal_299 != 0)
	{
		if (*uParam0 == 55 || *uParam0 == 53)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_299, 0);
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(0);
	}
	if (iLocal_291)
	{
		if (func_2("RAMP_HELP_TRIG"))
		{
			HUD::CLEAR_HELP(1);
			iLocal_291 = 0;
		}
	}
	func_357();
	func_371("SCRIPT TERMINATED");
	Global_96016 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_357()
{
	func_371("Running end routines.");
	Global_111356 = (Global_111356 - 1);
}

int func_358(var uParam0)
{
	if (func_152(uParam0))
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam0))
		{
			STREAMING::REMOVE_ANIM_DICT(*uParam0);
			*uParam0 = "";
			uParam0->f_1 = "";
			return 1;
		}
	}
	return 0;
}

void func_359(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_367(uParam0, iParam1);
	func_363(uParam0, bParam2);
	func_360(uParam0, bParam3);
}

void func_360(var uParam0, bool bParam1)
{
	func_361(&(uParam0->f_41), bParam1);
}

void func_361(var uParam0, bool bParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_154(uParam0[iVar0]);
		}
		else
		{
			func_362(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_362(var uParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0))
		{
			ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0);
		}
		else
		{
			OBJECT::_MARK_OBJECT_FOR_DELETION(*uParam0);
		}
	}
}

void func_363(var uParam0, bool bParam1)
{
	func_364(&(uParam0->f_35), bParam1);
}

void func_364(var uParam0, bool bParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_366(uParam0[iVar0]);
		}
		else
		{
			func_365(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_365(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*uParam0, 0);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
}

void func_366(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
		}
		if (func_158(*uParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1))
			{
				if (func_128(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
						return;
					}
				}
				VEHICLE::DELETE_VEHICLE(uParam0);
			}
		}
		else
		{
			if (func_128(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
					return;
				}
			}
			VEHICLE::DELETE_VEHICLE(uParam0);
		}
	}
}

void func_367(var uParam0, int iParam1)
{
	func_368(&(uParam0->f_28), iParam1);
}

void func_368(var uParam0, int iParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_370(uParam0[iVar0]);
		}
		else
		{
			func_369(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_369(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
			}
			PED::SET_PED_KEEP_TASK(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
			}
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
	}
}

void func_370(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0, 0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0, 1);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
		}
		PED::DELETE_PED(uParam0);
	}
}

void func_371(char* sParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
	}
}

void func_372(var uParam0)
{
	*uParam0 = -1;
	StringCopy(&(uParam0->f_1), "", 32);
	uParam0->f_15 = 12f;
	uParam0->f_16 = 6;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_373()
{
	func_371("Running start routines.");
	Global_111356++;
}

