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
	Local_239 = { 0f, 0f, 0f };
	Local_242 = { Local_239 };
	Local_245 = { Local_239 };
	iLocal_250 = 3;
	iLocal_255 = 24818;
	iLocal_258 = 24816;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(178))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_82();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!func_81())
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		if (func_80(0))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		if (func_79(14))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		if ((!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 0) && func_73() == 1) && !func_72())
		{
			func_1();
		}
		else
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
}

void func_1()
{
	switch (iLocal_248)
	{
		case 0:
			func_46();
			func_42();
			func_32();
			func_30();
			func_21();
			if (GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 1) && !bLocal_235)
			{
				iLocal_248++;
			}
			break;
		
		case 1:
			if (func_17(&uLocal_229) > 5f)
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 3))
				{
					func_14(28, iLocal_83[20], 1);
					func_7(28);
					GAMEPLAY::SET_BIT(&(Global_111638.f_10044.f_99), 3);
					func_5(63, 1);
					iLocal_248++;
				}
			}
			break;
		
		case 2:
			if (func_3(63))
			{
				iLocal_248++;
			}
			break;
		
		case 3:
			GAMEPLAY::SET_BIT(&(Global_111638.f_10044.f_99), 0);
			func_2();
			break;
	}
}

int func_2()
{
	if (func_80(0))
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

bool func_3(int iParam0)
{
	return func_4(iParam0, 0);
}

bool func_4(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_111638.f_32744[iParam0], iParam1);
}

void func_5(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_4(iParam0, 0))
		{
			func_6(iParam0, 1, 0);
			func_6(iParam0, 2, 0);
			func_6(iParam0, 3, 0);
			func_6(iParam0, 4, 0);
			func_6(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_6(iParam0, 0, 0);
	}
}

void func_6(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_111638.f_32744[iParam0]), iParam1);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_111638.f_32744[iParam0]), iParam1);
	}
}

void func_7(int iParam0)
{
	iVar0 = func_13(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_51915[iVar0].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_51915[iVar0].f_10[(Global_51915[iVar0].f_9 - 1)];
	iVar2 = (Global_51915[iVar0].f_9 - 1);
	if (!Global_51915[iVar0].f_10[iVar2].f_1)
	{
		iVar7 = Global_51915[iVar0].f_10[iVar2];
		MemCopy(&Var3, {func_12(Global_42615[iVar7].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_51915[iVar0].f_10[iVar2].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar8 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar8 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar8 = "PW_FEED_EM_2";
				break;
		}
		func_8(1, Global_42615[iVar1].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_42615[iVar1].f_3)
		{
			case 0:
				func_8(0, Global_42615[iVar1].f_2, iVar1, &Var3, &(Global_51915[iVar0].f_10[iVar2].f_7[0]), &(Global_51915[iVar0].f_10[iVar2].f_7[1]), &(Global_51915[iVar0].f_10[iVar2].f_7[2]), &(Global_51915[iVar0].f_10[iVar2].f_7[3]), &(Global_51915[iVar0].f_10[iVar2].f_7[4]), &(Global_51915[iVar0].f_10[iVar2].f_7[5]), &(Global_51915[iVar0].f_10[iVar2].f_7[6]), &(Global_51915[iVar0].f_10[iVar2].f_7[7]), &(Global_51915[iVar0].f_10[iVar2].f_7[8]), &(Global_51915[iVar0].f_10[iVar2].f_7[9]));
				break;
			
			case 1:
				func_8(1, Global_42615[iVar1].f_2, iVar1, &Var3, &(Global_51915[iVar0].f_10[iVar2].f_7[0]), &(Global_51915[iVar0].f_10[iVar2].f_7[1]), &(Global_51915[iVar0].f_10[iVar2].f_7[2]), &(Global_51915[iVar0].f_10[iVar2].f_7[3]), &(Global_51915[iVar0].f_10[iVar2].f_7[4]), &(Global_51915[iVar0].f_10[iVar2].f_7[5]), &(Global_51915[iVar0].f_10[iVar2].f_7[6]), &(Global_51915[iVar0].f_10[iVar2].f_7[7]), &(Global_51915[iVar0].f_10[iVar2].f_7[8]), &(Global_51915[iVar0].f_10[iVar2].f_7[9]));
				break;
			
			case 2:
				func_8(2, Global_42615[iVar1].f_2, iVar1, &Var3, &(Global_51915[iVar0].f_10[iVar2].f_7[0]), &(Global_51915[iVar0].f_10[iVar2].f_7[1]), &(Global_51915[iVar0].f_10[iVar2].f_7[2]), &(Global_51915[iVar0].f_10[iVar2].f_7[3]), &(Global_51915[iVar0].f_10[iVar2].f_7[4]), &(Global_51915[iVar0].f_10[iVar2].f_7[5]), &(Global_51915[iVar0].f_10[iVar2].f_7[6]), &(Global_51915[iVar0].f_10[iVar2].f_7[7]), &(Global_51915[iVar0].f_10[iVar2].f_7[8]), &(Global_51915[iVar0].f_10[iVar2].f_7[9]));
				break;
			}
	}
}

void func_8(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return;
	}
	iVar0 = func_73();
	bVar1 = false;
	StringCopy(&cVar2, func_11(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				UI::_SET_NOTIFICATION_TEXT_ENTRY("PROPR_INCEMAIL1");
				break;
			
			case 73:
				UI::_SET_NOTIFICATION_TEXT_ENTRY("PROPR_INCEMAIL3");
				break;
			
			case 74:
				UI::_SET_NOTIFICATION_TEXT_ENTRY("PROPR_INCEMAIL2");
				break;
			
			default:
				UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam3);
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam4))
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam4);
				}
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam5))
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam5);
				}
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam6))
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam6);
				}
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam7))
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam7);
				}
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam8))
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam8);
				}
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam9))
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam9);
				}
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam10))
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam10);
				}
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam11))
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam11);
				}
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam12))
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam12);
				}
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam13))
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_9(UI::_SET_NOTIFICATION_MESSAGE(&cVar2, &cVar2, 0, 2, UI::_GET_LABEL_TEXT(func_10(iParam1)), 0));
		}
		else
		{
			func_9(UI::_SET_NOTIFICATION_MESSAGE("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, UI::_GET_LABEL_TEXT(func_10(iParam1)), 0));
		}
		switch (Global_19486)
		{
			case 0:
				StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
				Global_42607++;
				if (Global_42607 > 16)
				{
					Global_42607 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
				Global_42609++;
				if (Global_42609 > 16)
				{
					Global_42609 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
				Global_42608++;
				if (Global_42608 > 16)
				{
					Global_42608 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
				break;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_19475, 1);
	}
}

void func_9(var uParam0)
{
	Global_42610[Global_42614] = uParam0;
	Global_21863 = 1;
	Global_21862 = uParam0;
	Global_42614++;
	if (Global_42614 == 3)
	{
		Global_42614 = 0;
	}
}

char* func_10(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_11(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return UI::_GET_LABEL_TEXT(&(Global_1798[0].f_7));
		
		case 1:
			return UI::_GET_LABEL_TEXT(&(Global_1798[1].f_7));
		
		case 2:
			return UI::_GET_LABEL_TEXT(&(Global_1798[2].f_7));
		
		case 7:
			return UI::_GET_LABEL_TEXT(&(Global_1798[12].f_7));
		
		case 4:
			return UI::_GET_LABEL_TEXT(&(Global_1798[60].f_7));
		
		case 6:
			return UI::_GET_LABEL_TEXT(&(Global_1798[62].f_7));
		
		case 3:
			return UI::_GET_LABEL_TEXT(&(Global_1798[14].f_7));
		
		case 16:
			return UI::_GET_LABEL_TEXT(&(Global_1798[97].f_7));
		
		case 19:
			return UI::_GET_LABEL_TEXT(&(Global_1798[99].f_7));
		
		case 15:
			return UI::_GET_LABEL_TEXT(&(Global_1798[96].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return UI::_GET_LABEL_TEXT(&(Global_1798[15].f_7));
		
		case 26:
			return UI::_GET_LABEL_TEXT(&(Global_1798[30].f_7));
		
		case 27:
			return UI::_GET_LABEL_TEXT(&(Global_1798[17].f_7));
		
		case 29:
			return UI::_GET_LABEL_TEXT(&(Global_1798[20].f_7));
		
		case 30:
			return UI::_GET_LABEL_TEXT(&(Global_1798[43].f_7));
		
		case 31:
			return UI::_GET_LABEL_TEXT(&(Global_1798[44].f_7));
		
		case 32:
			return UI::_GET_LABEL_TEXT(&(Global_1798[19].f_7));
		
		case 34:
			return UI::_GET_LABEL_TEXT(&(Global_1798[40].f_7));
		
		case 36:
			return UI::_GET_LABEL_TEXT("CELL_E_381");
		
		case 38:
			return UI::_GET_LABEL_TEXT(&(Global_1798[64].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return UI::_GET_LABEL_TEXT(&(Global_1798[122].f_7));
		
		case 40:
			return UI::_GET_LABEL_TEXT(&(Global_1798[125].f_7));
		
		case 41:
			return UI::_GET_LABEL_TEXT(&(Global_1798[113].f_7));
		
		case 42:
			return UI::_GET_LABEL_TEXT(&(Global_1798[126].f_7));
		
		case 43:
			return UI::_GET_LABEL_TEXT(&(Global_1798[127].f_7));
		
		case 44:
			return UI::_GET_LABEL_TEXT(&(Global_1798[124].f_7));
		
		case 45:
			return UI::_GET_LABEL_TEXT(&(Global_1798[114].f_7));
		
		case 46:
			return UI::_GET_LABEL_TEXT(&(Global_1798[115].f_7));
		
		case 47:
			return UI::_GET_LABEL_TEXT(&(Global_1798[116].f_7));
		
		case 48:
			return UI::_GET_LABEL_TEXT(&(Global_1798[123].f_7));
		
		case 49:
			return UI::_GET_LABEL_TEXT(&(Global_1798[117].f_7));
		
		case 50:
			return UI::_GET_LABEL_TEXT(&(Global_1798[118].f_7));
		
		case 51:
			return UI::_GET_LABEL_TEXT(&(Global_1798[119].f_7));
		
		case 52:
			return UI::_GET_LABEL_TEXT(&(Global_1798[120].f_7));
		
		case 53:
			return UI::_GET_LABEL_TEXT(&(Global_1798[121].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_12(int iParam0)
{
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var16, "FAIL", 64);
	return Var16;
}

int func_13(int iParam0)
{
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_51915[iVar0].f_2 == iParam0)
		{
			if (Global_51915[iVar0].f_1 > iVar2)
			{
				iVar2 = Global_51915[iVar0].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

int func_14(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_16(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_51915[iVar0].f_9 == 4)
	{
		return 0;
	}
	Global_51915[iVar0].f_2 = iParam0;
	Global_51915[iVar0].f_10[Global_51915[iVar0].f_9] = iParam1;
	Global_51915[iVar0].f_10[Global_51915[iVar0].f_9].f_1 = 0;
	Global_51915[iVar0].f_10[Global_51915[iVar0].f_9].f_6 = 0;
	Global_51915[iVar0].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_51915[iVar0].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_51915[iVar0].f_4[iVar1] == Global_42615[iParam1].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_51915[iVar0].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_51915[iVar0].f_4[Global_51915[iVar0].f_3] = Global_42615[iParam1].f_3;
			Global_51915[iVar0].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_51915[iVar0].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_51915[iVar0].f_4[iVar1] == Global_42615[iParam1].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_51915[iVar0].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_51915[iVar0].f_4[Global_51915[iVar0].f_3] = Global_42615[iParam1].f_2;
			Global_51915[iVar0].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_51915[iVar0].f_3)
	{
		iVar3 = Global_51915[iVar0].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_15(Global_51915[iVar0].f_4[iVar1], Global_51915[iVar0].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_15(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar19 = (Global_45940[iParam1].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_45940[iParam1].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_12(Global_42615[iVar20].f_1) };
		if (Global_42615[iVar20].f_2 == iParam0 && !Global_42615[iVar20].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_42615[iVar20].f_2;
		iVar0 = Global_51553[iParam0];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_51553[iParam0].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_42607 = (Global_42607 - 1);
						if (Global_42607 < 0)
						{
							Global_42607 = 0;
						}
						break;
					
					case 1:
						Global_42608 = (Global_42608 - 1);
						if (Global_42608 < 0)
						{
							Global_42608 = 0;
						}
						break;
					
					case 2:
						Global_42609 = (Global_42609 - 1);
						if (Global_42609 < 0)
						{
							Global_42609 = 0;
						}
						break;
					}
				}
		}
		Global_51553[iParam0].f_18[iVar0] = iParam1;
		Global_51553[iParam0].f_1[iVar0] = iVar19;
		Global_51553[iParam0].f_35[iVar0] = 0;
		Global_51553[iParam0].f_86[iVar0] = 0;
		Global_51553[iParam0].f_69[iVar0] = 0;
		Global_51553[iParam0]++;
	}
	else
	{
		iVar0 = Global_51553[iParam0];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_51553[iParam0].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_42607 = (Global_42607 - 1);
						if (Global_42607 < 0)
						{
							Global_42607 = 0;
						}
						break;
					
					case 1:
						Global_42608 = (Global_42608 - 1);
						if (Global_42608 < 0)
						{
							Global_42608 = 0;
						}
						break;
					
					case 2:
						Global_42609 = (Global_42609 - 1);
						if (Global_42609 < 0)
						{
							Global_42609 = 0;
						}
						break;
					}
				}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_51915[iVar24].f_1 == iParam1 && Global_51915[iVar24].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_51553[iParam0].f_18[iVar0] = Global_51915[iVar23].f_1;
		Global_51553[iParam0].f_1[iVar0] = (Global_51915[iVar23].f_9 - 1);
		Global_51553[iParam0].f_35[iVar0] = 0;
		Global_51553[iParam0].f_86[iVar0] = 1;
		Global_51553[iParam0].f_69[iVar0] = 0;
		Global_51553[iParam0]++;
		iVar25 = Global_51553[iParam0].f_1[iVar0];
		iVar26 = Global_51915[iVar23].f_10[iVar25];
		iVar2 = iVar26;
		iVar1 = Global_42615[iVar26].f_2;
		if (Global_51915[iVar23].f_10[(Global_51915[iVar23].f_9 - 1)].f_1)
		{
			MemCopy(&Var3, {Global_51915[iVar23].f_10[(Global_51915[iVar23].f_9 - 1)].f_2}, 16);
		}
		else
		{
			Var3 = { func_12(Global_42615[iVar26].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_51553[iParam0].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_8(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_8(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_8(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_8(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

int func_16(int iParam0, bool bParam1)
{
	iVar0 = func_13(iParam0);
	if (iVar0 > -1)
	{
		if (Global_51915[iVar0].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_51915[iVar1] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_51915[iVar1] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_51915[iVar1].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_51915[iVar1].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_51915[iVar1].f_1;
			}
		}
		iVar1++;
	}
	if (Global_51915[iVar4].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_51915[iVar4].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_51553[iVar6];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_51553[iVar6].f_86[iVar8])
					{
						if (!Global_51553[iVar6].f_69[iVar8])
						{
							if (Global_51553[iVar6].f_18[iVar8] == Global_51915[iVar4].f_1)
							{
								if (Global_51553[iVar6].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_42607 = (Global_42607 - 1);
											break;
										
										case 1:
											Global_42608 = (Global_42608 - 1);
											break;
										
										case 2:
											Global_42609 = (Global_42609 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_51915[iVar4].f_2 = iParam0;
	Global_51915[iVar4].f_3 = 0;
	if (!bParam1)
	{
		Global_51915[iVar4] = 1;
	}
	Global_111638.f_21032.f_310++;
	if (Global_111638.f_21032.f_310 == 0)
	{
		Global_111638.f_21032.f_310 = 1;
	}
	Global_51915[iVar4].f_1 = Global_111638.f_21032.f_310;
	Global_51915[iVar4].f_9 = 0;
	return iVar4;
}

float func_17(var uParam0)
{
	if (func_20(uParam0))
	{
		if (func_19(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_18(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_18(bool bParam0)
{
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(uVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER()) / 1000f);
}

bool func_19(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

bool func_20(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 1);
}

void func_21()
{
	switch (iLocal_81)
	{
		case 0:
			if (bLocal_235)
			{
				if (!func_29())
				{
					uLocal_232 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
					while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_232))
					{
						SYSTEM::WAIT(0);
					}
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uLocal_232, "SHOW_BRIDGES_KNIVES_PROGRESS");
					func_28("PW_TITLE");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(20);
					func_28("PW_PASS");
					func_28("PW_CHALLENGE");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(func_26());
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					iLocal_249 = func_26();
					Global_31003 = iLocal_249;
					SYSTEM::SETTIMERB(0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", 1);
				}
				iLocal_81 = 1;
			}
			break;
		
		case 1:
			if ((((((SYSTEM::TIMERB() > 7500 || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || func_29()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || func_25()) || func_24())
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uLocal_232, "SHARD_ANIM_OUT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0.33f);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				SYSTEM::SETTIMERB(0);
				iLocal_81 = 2;
			}
			else
			{
				func_23();
				if (Global_31003 > iLocal_249)
				{
					iLocal_81 = 3;
				}
			}
			break;
		
		case 2:
			if ((((((SYSTEM::TIMERB() > 500 || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || func_29()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || func_25()) || func_24())
			{
				iLocal_81 = 3;
			}
			else
			{
				func_23();
				if (Global_31003 > iLocal_249)
				{
					iLocal_81 = 3;
				}
			}
			break;
		
		case 3:
			func_22();
			bLocal_235 = false;
			iLocal_81 = 0;
			break;
	}
}

void func_22()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_232))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_232);
	}
}

void func_23()
{
	if (!func_29())
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_232))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_232, 0.5f, 0.5f, 1f, 1f, 100, 100, 100, 255, 0);
		}
	}
}

int func_24()
{
	if (Global_41431 == 9 || Global_41431 == 10)
	{
		return Global_110288;
	}
	Global_110288 = 0;
	return 0;
}

int func_25()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return 0;
	}
	return 1;
}

int func_26()
{
	iVar0 = func_27();
	if (iVar0 == 20)
	{
		GAMEPLAY::SET_BIT(&(Global_111638.f_10044.f_99), 1);
	}
	return iVar0;
}

int func_27()
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iVar1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, iVar1))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	if (iVar0 > 20)
	{
		iVar0 = 20;
	}
	return iVar0;
}

void func_28(char* sParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

int func_29()
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

void func_30()
{
	if (func_31() && !iLocal_237)
	{
		iLocal_237 = 1;
		iLocal_79 = 7;
	}
	if (!func_31() && iLocal_237)
	{
		iLocal_237 = 0;
	}
}

int func_31()
{
	if (Global_19471)
	{
		return 1;
	}
	return 0;
}

void func_32()
{
	if (func_17(&uLocal_226) > 3f)
	{
		func_37(0);
		func_36(&uLocal_226, 0f);
		func_35(&uLocal_226);
	}
	if ((func_17(&uLocal_226) <= 3f && func_34(0)) && func_33(PLAYER::PLAYER_PED_ID()))
	{
		if ((CONTROLS::IS_CONTROL_JUST_PRESSED(0, 177) || (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 24) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))) || (func_31() && !iLocal_237))
		{
			func_36(&uLocal_226, 0f);
			func_35(&uLocal_226);
		}
	}
}

int func_33(int iParam0)
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

int func_34(int iParam0)
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

void func_35(var uParam0)
{
	if (func_20(uParam0))
	{
		if (!func_19(uParam0))
		{
			uParam0->f_2 = (func_18(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
			GAMEPLAY::SET_BIT(uParam0, 2);
		}
	}
}

void func_36(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_18(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - fParam1);
	GAMEPLAY::SET_BIT(uParam0, 1);
	GAMEPLAY::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_37(int iParam0)
{
	if (func_41())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_40())
		{
			func_39(1, 1);
		}
		else
		{
			func_39(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		GAMEPLAY::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_7356, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_7356, 30);
	}
	if (!func_38())
	{
		Global_19486.f_1 = 3;
	}
}

int func_38()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_39(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_34(0))
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

bool func_40()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 5);
}

bool func_41()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 19);
}

void func_42()
{
	if (iLocal_238)
	{
		if ((func_17(&uLocal_229) > 5f && func_45() >= 1) && !GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 1))
		{
			switch (iLocal_251)
			{
				case 0:
					func_14(28, iLocal_83[(20 - func_45())], 1);
					iLocal_252 = 0;
					iLocal_251++;
					break;
				
				case 1:
					if (iLocal_252 < 10)
					{
						func_43(28, func_44(iLocal_252));
						iLocal_252++;
					}
					else
					{
						iLocal_251++;
					}
					break;
				
				case 2:
					func_7(28);
					iLocal_251++;
					break;
				
				case 3:
					func_36(&uLocal_229, 0f);
					func_35(&uLocal_229);
					iLocal_238 = 0;
					iLocal_251 = 0;
					func_2();
					break;
				}
			}
	}
}

void func_43(int iParam0, char* sParam1)
{
	iVar0 = func_13(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_51915[iVar0].f_9 == 0)
	{
		return;
	}
	if (Global_51915[iVar0].f_10[(Global_51915[iVar0].f_9 - 1)].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_51915[iVar0].f_10[(Global_51915[iVar0].f_9 - 1)].f_6;
	Global_51915[iVar0].f_10[(Global_51915[iVar0].f_9 - 1)].f_6++;
	StringCopy(&(Global_51915[iVar0].f_10[(Global_51915[iVar0].f_9 - 1)].f_7[iVar1]), sParam1, 16);
}

char* func_44(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 4) && !GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 29))
			{
				return "PW_STRING_1_1";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 4) && !GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 29))
			{
				return "PW_STRING_1_2";
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 4) && GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 29))
			{
				return "PW_STRING_1_3";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 4) && GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 29))
			{
				return "PW_STRING_1_4";
			}
			break;
		
		case 1:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 5) && !GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 6))
			{
				return "PW_STRING_2_1";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 5) && !GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 6))
			{
				return "PW_STRING_2_2";
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 5) && GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 6))
			{
				return "PW_STRING_2_3";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 5) && GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 6))
			{
				return "PW_STRING_2_4";
			}
			break;
		
		case 2:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 7) && !GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 8))
			{
				return "PW_STRING_3_1";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 7) && !GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 8))
			{
				return "PW_STRING_3_2";
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 7) && GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 8))
			{
				return "PW_STRING_3_3";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 7) && GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 8))
			{
				return "PW_STRING_3_4";
			}
			break;
		
		case 3:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 9) && !GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 10))
			{
				return "PW_STRING_4_1";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 9) && !GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 10))
			{
				return "PW_STRING_4_2";
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 9) && GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 10))
			{
				return "PW_STRING_4_3";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 9) && GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 10))
			{
				return "PW_STRING_4_4";
			}
			break;
		
		case 4:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 11) && !GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 14))
			{
				return "PW_STRING_5_1";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 11) && !GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 14))
			{
				return "PW_STRING_5_2";
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 11) && GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 14))
			{
				return "PW_STRING_5_3";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 11) && GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 14))
			{
				return "PW_STRING_5_4";
			}
			break;
		
		case 5:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 16) && !GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 18))
			{
				return "PW_STRING_6_1";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 16) && !GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 18))
			{
				return "PW_STRING_6_2";
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 16) && GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 18))
			{
				return "PW_STRING_6_3";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 16) && GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 18))
			{
				return "PW_STRING_6_4";
			}
			break;
		
		case 6:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 19) && !GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 21))
			{
				return "PW_STRING_7_1";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 19) && !GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 21))
			{
				return "PW_STRING_7_2";
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 19) && GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 21))
			{
				return "PW_STRING_7_3";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 19) && GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 21))
			{
				return "PW_STRING_7_4";
			}
			break;
		
		case 7:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 22) && !GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 23))
			{
				return "PW_STRING_8_1";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 22) && !GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 23))
			{
				return "PW_STRING_8_2";
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 22) && GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 23))
			{
				return "PW_STRING_8_3";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 22) && GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 23))
			{
				return "PW_STRING_8_4";
			}
			break;
		
		case 8:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 24) && !GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 25))
			{
				return "PW_STRING_9_1";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 24) && !GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 25))
			{
				return "PW_STRING_9_2";
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 24) && GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 25))
			{
				return "PW_STRING_9_3";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 24) && GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 25))
			{
				return "PW_STRING_9_4";
			}
			break;
		
		case 9:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 26) && !GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 31))
			{
				return "PW_STRING_10_1";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 26) && !GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 31))
			{
				return "PW_STRING_10_2";
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 26) && GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 31))
			{
				return "PW_STRING_10_3";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 26) && GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 31))
			{
				return "PW_STRING_10_4";
			}
			break;
	}
	return "PW_STRING_NONE";
}

int func_45()
{
	return (20 - func_27());
}

void func_46()
{
	switch (iLocal_79)
	{
		case 0:
			if (func_71())
			{
				if ((!func_70() && Global_4268489 == 0) && Global_4268490 == 0)
				{
					iLocal_79 = 1;
				}
			}
			break;
		
		case 1:
			iLocal_233 = func_65(&iLocal_234, 60f, uLocal_253, 0.8f, 0.7f, 0.25f, 8f, 0.333f, uLocal_254, iLocal_255);
			if (iLocal_233 == 0)
			{
				iLocal_233 = func_65(&iLocal_234, 60f, uLocal_256, 0.8f, 0.7f, 0.25f, 8f, 0.333f, uLocal_257, iLocal_258);
				if (iLocal_233 == 0)
				{
					iLocal_79 = 7;
				}
				else
				{
					iLocal_79 = 4;
				}
			}
			else
			{
				iLocal_79 = 4;
			}
			break;
		
		case 4:
			if (!func_64(iLocal_234))
			{
				func_63(1);
				iLocal_79 = 5;
			}
			else
			{
				if (!iLocal_236)
				{
				}
				else
				{
					iLocal_236 = 0;
				}
				iLocal_79 = 7;
			}
			break;
		
		case 5:
			switch (iLocal_80)
			{
				case 0:
					func_62("PW_HELP_1", -1);
					if (func_61())
					{
						if (func_34(0))
						{
							func_60(99);
							if (func_59("PW_HELP_1"))
							{
								UI::CLEAR_THIS_PRINT("PW_HELP_1");
							}
							iLocal_80 = 1;
						}
					}
					if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 176) || CONTROLS::IS_CONTROL_JUST_PRESSED(0, 178))
					{
						func_63(0);
						func_57(99);
						if (func_59("PW_HELP_1"))
						{
							UI::CLEAR_THIS_PRINT("PW_HELP_1");
						}
						iLocal_79 = 7;
					}
					break;
				
				case 1:
					func_62("PW_HELP_2", -1);
					if (func_55(99))
					{
						iLocal_80 = 0;
						func_63(0);
						func_57(99);
						if (func_59("PW_HELP_2"))
						{
							UI::CLEAR_THIS_PRINT("PW_HELP_2");
						}
						iLocal_79 = 6;
					}
					if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 177))
					{
						iLocal_80 = 0;
						func_63(0);
						func_57(99);
						if (func_59("PW_HELP_2"))
						{
							UI::CLEAR_THIS_PRINT("PW_HELP_2");
						}
						iLocal_79 = 7;
					}
					break;
			}
			break;
		
		case 6:
			func_54(iLocal_234);
			func_51(iLocal_82);
			STATS::STAT_SET_INT(-1939733893, func_27(), 1);
			bLocal_235 = true;
			func_48(&uLocal_226);
			func_48(&uLocal_229);
			iLocal_238 = 1;
			iLocal_79 = 7;
			break;
		
		case 7:
			func_47();
			iLocal_79 = 8;
			break;
		
		case 8:
			if (!func_71())
			{
				iLocal_79 = 0;
			}
			break;
	}
}

void func_47()
{
	iLocal_80 = 0;
	iLocal_82 = 0;
	iLocal_233 = 0;
	iLocal_234 = 0;
	iLocal_236 = 0;
	Local_242 = { Local_239 };
	Local_245 = { Local_239 };
	func_63(0);
	func_57(99);
	if (func_59("PW_HELP_1"))
	{
		UI::CLEAR_THIS_PRINT("PW_HELP_1");
	}
	if (func_59("PW_HELP_2"))
	{
		UI::CLEAR_THIS_PRINT("PW_HELP_2");
	}
}

void func_48(var uParam0)
{
	if (!func_20(uParam0))
	{
		func_50(uParam0);
	}
	else
	{
		func_49(uParam0);
	}
}

void func_49(var uParam0)
{
	func_36(uParam0, 0f);
}

void func_50(var uParam0)
{
	if (!func_20(uParam0))
	{
		func_49(uParam0);
	}
}

void func_51(int iParam0)
{
	iVar0 = func_53(92);
	Global_2414418[iVar0] = 92;
	StringCopy(&(Global_2414418[iVar0].f_1), func_52(iParam0), 64);
	StringCopy(&(Global_2414418[iVar0].f_18[0]), "", 64);
}

char* func_52(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "";
		
		case 1:
			return "AF_BOAR";
		
		case 2:
			return "AF_BORDERCOLLIE";
		
		case 3:
			return "AF_CAT";
		
		case 4:
			return "AF_CHICKENHAWK";
		
		case 5:
			return "AF_CORMORANT";
		
		case 6:
			return "AF_COW";
		
		case 7:
			return "AF_COYOTE";
		
		case 8:
			return "AF_CROW";
		
		case 9:
			return "AF_DEER";
		
		case 10:
			return "AF_HEN";
		
		case 11:
			return "AF_HUSKY";
		
		case 12:
			return "AF_MOUNT_LION";
		
		case 13:
			return "AF_PIG";
		
		case 14:
			return "AF_RABBIT";
		
		case 15:
			return "AF_POODLE";
		
		case 16:
			return "AF_PUG";
		
		case 17:
			return "AF_RETRIEVER";
		
		case 18:
			return "AF_ROTTWEILER";
		
		case 19:
			return "AF_SEAGULL";
		
		case 20:
			return "AF_WESTIE";
		
		default:
	}
	return "";
}

int func_53(int iParam0)
{
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2414418[iVar1] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2414418[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_54(int iParam0)
{
	switch (iParam0)
	{
		case -832573324:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 4))
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_10044.f_99), 4);
				iLocal_82 = 1;
			}
			break;
		
		case 1462895032:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 5))
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_10044.f_99), 5);
				iLocal_82 = 3;
			}
			break;
		
		case -1430839454:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 6))
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_10044.f_99), 6);
				iLocal_82 = 4;
			}
			break;
		
		case 1457690978:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 7))
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_10044.f_99), 7);
				iLocal_82 = 5;
			}
			break;
		
		case -50684386:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 8))
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_10044.f_99), 8);
				iLocal_82 = 6;
			}
			break;
		
		case 1682622302:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 9))
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_10044.f_99), 9);
				iLocal_82 = 7;
			}
			break;
		
		case 402729631:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 10))
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_10044.f_99), 10);
				iLocal_82 = 8;
			}
			break;
		
		case -664053099:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 11))
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_10044.f_99), 11);
				iLocal_82 = 9;
			}
			break;
		
		case 1794449327:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 14))
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_10044.f_99), 14);
				iLocal_82 = 10;
			}
			break;
		
		case 1318032802:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 16))
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_10044.f_99), 16);
				iLocal_82 = 11;
			}
			break;
		
		case 307287994:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 18))
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_10044.f_99), 18);
				iLocal_82 = 12;
			}
			break;
		
		case -1323586730:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 19))
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_10044.f_99), 19);
				iLocal_82 = 13;
			}
			break;
		
		case 1125994524:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 21))
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_10044.f_99), 21);
				iLocal_82 = 15;
			}
			break;
		
		case 1832265812:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 22))
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_10044.f_99), 22);
				iLocal_82 = 16;
			}
			break;
		
		case -541762431:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 23))
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_10044.f_99), 23);
				iLocal_82 = 14;
			}
			break;
		
		case 882848737:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 24))
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_10044.f_99), 24);
				iLocal_82 = 17;
			}
			break;
		
		case -1788665315:
		case 351016938:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 25))
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_10044.f_99), 25);
				iLocal_82 = 18;
			}
			break;
		
		case -745300483:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 26))
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_10044.f_99), 26);
				iLocal_82 = 19;
			}
			break;
		
		case 1126154828:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 29))
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_10044.f_99), 29);
				iLocal_82 = 2;
			}
			break;
		
		case -1384627013:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 31))
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_10044.f_99), 31);
				iLocal_82 = 20;
			}
			break;
		
		default:
			break;
	}
}

int func_55(int iParam0)
{
	if (Global_117[iParam0].f_8 != 150)
	{
		if (func_56(iParam0) == 1)
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

int func_56(int iParam0)
{
	return Global_1798[iParam0].f_18;
}

int func_57(int iParam0)
{
	if (Global_117[iParam0].f_8 != 150)
	{
		func_58(iParam0, 0);
		return 1;
	}
	return 0;
}

void func_58(int iParam0, int iParam1)
{
	Global_1798[iParam0].f_18 = iParam1;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0].f_18 = iParam1;
	}
}

bool func_59(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_60(int iParam0)
{
	Global_19661 = iParam0;
}

int func_61()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1221036409) > 0)
	{
		return 1;
	}
	return 0;
}

void func_62(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_63(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_BIT(&Global_7356, 28);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_7356, 28);
	}
}

int func_64(int iParam0)
{
	switch (iParam0)
	{
		case -832573324:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 4))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1462895032:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 5))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1430839454:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 6))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1457690978:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 7))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -50684386:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 8))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1682622302:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 9))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 402729631:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 10))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -664053099:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 11))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1794449327:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 14))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1318032802:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 16))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 307287994:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 18))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1323586730:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 19))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1125994524:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 21))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1832265812:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 22))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -541762431:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 23))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 882848737:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 24))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1788665315:
		case 351016938:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 25))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -745300483:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 26))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1126154828:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 29))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1384627013:
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 31))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		default:
			iLocal_236 = 1;
			break;
	}
	return 1;
}

int func_65(int iParam0, float fParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, var uParam8, int iParam9)
{
	iVar0 = CAM::_0x89215EC747DF244A(fParam1, uParam2, fParam3, fParam4, fParam5, fParam6, fParam7, uParam8, iParam9);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (iVar0 != 0 && func_33(iVar0))
	{
		if (PED::GET_PED_TYPE(iVar0) == 28)
		{
			if (!ENTITY::IS_ENTITY_OCCLUDED(iVar0))
			{
				*iParam0 = ENTITY::GET_ENTITY_MODEL(iVar0);
				if (func_69(iVar0, 31086))
				{
					fVar1 = func_68(PLAYER::PLAYER_PED_ID(), iVar0, 1);
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(PLAYER::PLAYER_PED_ID(), iVar0))
					{
					}
					if (func_67(*iParam0))
					{
						if (fVar1 <= IntToFloat(func_66(*iParam0)))
						{
						}
						else
						{
							iVar0 = 0;
						}
					}
					else if (fVar1 <= IntToFloat(func_66(*iParam0)))
					{
					}
					else
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case -832573324:
			iVar0 = 30;
			break;
		
		case 1462895032:
			iVar0 = 30;
			break;
		
		case -1430839454:
			iVar0 = 60;
			break;
		
		case 1457690978:
			iVar0 = 60;
			break;
		
		case -50684386:
			iVar0 = 30;
			break;
		
		case 1682622302:
			iVar0 = 30;
			break;
		
		case 402729631:
			iVar0 = 60;
			break;
		
		case -664053099:
			iVar0 = 40;
			break;
		
		case 1794449327:
			iVar0 = 30;
			break;
		
		case 1318032802:
			iVar0 = 30;
			break;
		
		case 307287994:
			iVar0 = 30;
			break;
		
		case -1323586730:
			iVar0 = 30;
			break;
		
		case 111281960:
			iVar0 = 40;
			break;
		
		case 1125994524:
			iVar0 = 30;
			break;
		
		case 1832265812:
			iVar0 = 30;
			break;
		
		case -541762431:
			iVar0 = 30;
			break;
		
		case 882848737:
			iVar0 = 30;
			break;
		
		case -1788665315:
		case 351016938:
			iVar0 = 30;
			break;
		
		case -745300483:
			iVar0 = 60;
			break;
		
		case 1126154828:
			iVar0 = 30;
			break;
		
		case -1384627013:
			iVar0 = 30;
			break;
		
		default:
			iVar0 = 30;
			break;
	}
	return iVar0;
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case -1430839454:
		case 1457690978:
		case 402729631:
		case 1794449327:
		case 111281960:
		case -745300483:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

var func_68(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
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
	return GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, iParam2);
}

int func_69(int iParam0, int iParam1)
{
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	Local_245 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, PED::GET_PED_BONE_INDEX(iParam0, iParam1)) };
	if (iLocal_234 == -541762431 || iLocal_234 == -1011537562)
	{
		Local_242 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, PED::GET_PED_BONE_INDEX(iParam0, 24816)) };
	}
	else
	{
		Local_242 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, PED::GET_PED_BONE_INDEX(iParam0, 24818)) };
	}
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Local_242, &fVar0, &fVar1);
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Local_245, &fVar2, &fVar3);
	if ((((fVar0 >= 0.05f && fVar0 <= 0.95f) && (fVar2 >= 0.05f && fVar2 <= 0.95f)) && (fVar1 >= 0.05f && fVar1 <= 0.95f)) && (fVar3 >= 0.05f && fVar3 <= 0.95f))
	{
		return 1;
	}
	return 0;
}

int func_70()
{
	if (GAMEPLAY::IS_BIT_SET(Global_7358, 3))
	{
		return 1;
	}
	return 0;
}

int func_71()
{
	if (Global_21841)
	{
		return 1;
	}
	return 0;
}

int func_72()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-113320193) > 0)
	{
		return 1;
	}
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1357264198) > 0)
	{
		return 1;
	}
	return 0;
}

int func_73()
{
	func_74();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_74()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_77(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_76(PLAYER::PLAYER_PED_ID());
			if (func_75(iVar0) && (!func_79(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_75(Global_111638.f_2358.f_539.f_4321))
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

bool func_75(int iParam0)
{
	return iParam0 < 3;
}

int func_76(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_77(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_77(int iParam0)
{
	if (func_75(iParam0))
	{
		return func_78(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_78(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_79(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_80(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_76870, 0);
}

int func_81()
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
					uVar0 = GAMEPLAY::GET_PROFILE_SETTING(866);
					GAMEPLAY::SET_BIT(&uVar0, 0);
					STATS::_0xDAC073C7901F9E15(uVar0);
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

void func_82()
{
	if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10044.f_99, 2))
	{
		GAMEPLAY::SET_BIT(&(Global_111638.f_10044.f_99), 2);
	}
	iLocal_248 = 0;
	iLocal_237 = func_31();
	iLocal_83[0] = 249;
	iLocal_83[1] = 250;
	iLocal_83[2] = 251;
	iLocal_83[3] = 252;
	iLocal_83[4] = 253;
	iLocal_83[5] = 254;
	iLocal_83[6] = 255;
	iLocal_83[7] = 256;
	iLocal_83[8] = 257;
	iLocal_83[9] = 258;
	iLocal_83[10] = 259;
	iLocal_83[11] = 260;
	iLocal_83[12] = 261;
	iLocal_83[13] = 262;
	iLocal_83[14] = 263;
	iLocal_83[15] = 264;
	iLocal_83[16] = 265;
	iLocal_83[17] = 266;
	iLocal_83[18] = 267;
	iLocal_83[19] = 268;
	iLocal_83[20] = 269;
}

