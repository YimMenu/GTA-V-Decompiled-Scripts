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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		func_70();
	}
	func_69();
	func_68();
	Global_42604 = 0;
	iVar123 = func_61();
	iVar124 = func_61();
	iVar125 = 2000;
	Global_42606 = 1;
	bVar126 = true;
	while (true)
	{
		iVar127 = 0;
		if (bVar126)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_111638.f_24981, (4 - 1)))
			{
				func_60(26);
				bVar126 = false;
			}
		}
		if (!Global_42605 && GAMEPLAY::GET_GAME_TIMER() > Global_41982)
		{
			iVar127 = 0;
			while (iVar127 < 122)
			{
				if ((Global_45940[iVar127] && !Global_45940[iVar127].f_1) && !Global_45940[iVar127].f_45)
				{
					iVar0[iVar127] = (iVar0[iVar127] + iVar125);
					if (iVar0[iVar127] > Global_45940[iVar127].f_43)
					{
						if (func_34(7, 144, 2, -1, 0))
						{
							func_32(iVar127, 0);
							iVar0[iVar127] = 0;
							Global_42606 = 1;
						}
					}
				}
				SYSTEM::WAIT(0);
				iVar127++;
			}
			iVar123 = func_61();
			iVar128 = 0;
			iVar129 = 0;
			iVar130 = 0;
			func_20(iVar123, iVar124, &iVar129, &iVar129, &iVar128, &iVar129, &iVar129, &iVar129);
			if (iVar128 < 0)
			{
				iVar128 = (iVar128 * -1);
			}
			if (iVar128 > 0 && Global_19486.f_1 == 3)
			{
				iVar124 = iVar123;
				if (Global_53337 > 0)
				{
					iVar131 = Global_53337;
					iVar132 = 0;
					while (iVar131 != 0)
					{
						if ((Global_53338[iVar132].f_52 != 0 && iVar132 < 8) && Global_53338[iVar132].f_4)
						{
							Global_53338[iVar132].f_2 = (Global_53338[iVar132].f_2 - iVar128);
							bVar133 = false;
							bVar134 = false;
							bVar135 = false;
							iVar136 = 0;
							while (!bVar135)
							{
								if (Global_51915[iVar136].f_1 != Global_53338[iVar132].f_52)
								{
									iVar136++;
								}
								else
								{
									bVar134 = true;
									bVar135 = true;
								}
								if (iVar136 == 7)
								{
									bVar135 = true;
									Global_53338[iVar132].f_52 = 0;
									bVar133 = true;
								}
							}
							if (!bVar134)
							{
								bVar133 = true;
								Global_53338[iVar132].f_4 = 0;
							}
							else if (Global_53338[iVar132].f_2 < 1)
							{
								if (func_34(7, 145, 2, -1, 0))
								{
									bVar137 = false;
									if (Global_53338[iVar132].f_5 || Global_53338[iVar132].f_10 > 0)
									{
										bVar137 = true;
									}
									if (func_17(Global_53338[iVar132], Global_53338[iVar132].f_1, bVar137))
									{
										bVar138 = true;
										if (Global_53338[iVar132].f_10 > 0)
										{
											bVar138 = false;
										}
										if (Global_53338[iVar132].f_5)
										{
											func_16(Global_53338[iVar132], &(Global_53338[iVar132].f_6), bVar138);
										}
										if (Global_53338[iVar132].f_10 > 0)
										{
											iVar130 = 0;
											iVar130 = 0;
											while (iVar130 < Global_53338[iVar132].f_10)
											{
												func_15(Global_53338[iVar132], &(Global_53338[iVar132].f_11[iVar130]));
												iVar130++;
											}
										}
										if (bVar137 && !bVar138)
										{
											func_1(Global_53338[iVar132]);
										}
										func_60(Global_53338[iVar132]);
									}
									Global_53338[iVar132].f_52 = 0;
									Global_53338[iVar132].f_5 = 0;
									Global_53338[iVar132].f_2 = 0;
									bVar133 = true;
									Global_53338[iVar132].f_4 = 0;
								}
							}
							if (bVar133)
							{
								Global_53337 = (Global_53337 - 1);
							}
							iVar131 = (iVar131 - 1);
						}
						iVar132++;
						if (iVar132 == 8)
						{
							iVar131 = 0;
						}
						SYSTEM::WAIT(0);
					}
				}
			}
		}
		SYSTEM::WAIT(iVar125);
		Global_42607 = 0;
		Global_42608 = 0;
		Global_42609 = 0;
		iVar139 = Global_51553[0];
		if (iVar139 > 16)
		{
			iVar139 = 16;
		}
		iVar127 = 0;
		while (iVar127 < iVar139)
		{
			if (!Global_51553[0].f_69[iVar127])
			{
				Global_42607++;
			}
			iVar127++;
		}
		iVar139 = Global_51553[1];
		if (iVar139 > 16)
		{
			iVar139 = 16;
		}
		iVar127 = 0;
		while (iVar127 < iVar139)
		{
			if (!Global_51553[1].f_69[iVar127])
			{
				Global_42608++;
			}
			iVar127++;
		}
		iVar139 = Global_51553[2];
		if (iVar139 > 16)
		{
			iVar139 = 16;
		}
		iVar127 = 0;
		while (iVar127 < iVar139)
		{
			if (!Global_51553[2].f_69[iVar127])
			{
				Global_42609++;
			}
			iVar127++;
		}
		SYSTEM::WAIT(iVar125);
	}
}

void func_1(int iParam0)
{
	iVar0 = func_14(iParam0);
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
		MemCopy(&Var3, {func_13(Global_42615[iVar7].f_1)}, 4);
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
		func_2(1, Global_42615[iVar1].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_42615[iVar1].f_3)
		{
			case 0:
				func_2(0, Global_42615[iVar1].f_2, iVar1, &Var3, &(Global_51915[iVar0].f_10[iVar2].f_7[0]), &(Global_51915[iVar0].f_10[iVar2].f_7[1]), &(Global_51915[iVar0].f_10[iVar2].f_7[2]), &(Global_51915[iVar0].f_10[iVar2].f_7[3]), &(Global_51915[iVar0].f_10[iVar2].f_7[4]), &(Global_51915[iVar0].f_10[iVar2].f_7[5]), &(Global_51915[iVar0].f_10[iVar2].f_7[6]), &(Global_51915[iVar0].f_10[iVar2].f_7[7]), &(Global_51915[iVar0].f_10[iVar2].f_7[8]), &(Global_51915[iVar0].f_10[iVar2].f_7[9]));
				break;
			
			case 1:
				func_2(1, Global_42615[iVar1].f_2, iVar1, &Var3, &(Global_51915[iVar0].f_10[iVar2].f_7[0]), &(Global_51915[iVar0].f_10[iVar2].f_7[1]), &(Global_51915[iVar0].f_10[iVar2].f_7[2]), &(Global_51915[iVar0].f_10[iVar2].f_7[3]), &(Global_51915[iVar0].f_10[iVar2].f_7[4]), &(Global_51915[iVar0].f_10[iVar2].f_7[5]), &(Global_51915[iVar0].f_10[iVar2].f_7[6]), &(Global_51915[iVar0].f_10[iVar2].f_7[7]), &(Global_51915[iVar0].f_10[iVar2].f_7[8]), &(Global_51915[iVar0].f_10[iVar2].f_7[9]));
				break;
			
			case 2:
				func_2(2, Global_42615[iVar1].f_2, iVar1, &Var3, &(Global_51915[iVar0].f_10[iVar2].f_7[0]), &(Global_51915[iVar0].f_10[iVar2].f_7[1]), &(Global_51915[iVar0].f_10[iVar2].f_7[2]), &(Global_51915[iVar0].f_10[iVar2].f_7[3]), &(Global_51915[iVar0].f_10[iVar2].f_7[4]), &(Global_51915[iVar0].f_10[iVar2].f_7[5]), &(Global_51915[iVar0].f_10[iVar2].f_7[6]), &(Global_51915[iVar0].f_10[iVar2].f_7[7]), &(Global_51915[iVar0].f_10[iVar2].f_7[8]), &(Global_51915[iVar0].f_10[iVar2].f_7[9]));
				break;
			}
	}
}

void func_2(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return;
	}
	iVar0 = func_6();
	bVar1 = false;
	StringCopy(&cVar2, func_5(iParam1, &bVar1), 64);
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
			func_3(UI::_SET_NOTIFICATION_MESSAGE(&cVar2, &cVar2, 0, 2, UI::_GET_LABEL_TEXT(func_4(iParam1)), 0));
		}
		else
		{
			func_3(UI::_SET_NOTIFICATION_MESSAGE("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, UI::_GET_LABEL_TEXT(func_4(iParam1)), 0));
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

void func_3(var uParam0)
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

char* func_4(int iParam0)
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

char* func_5(int iParam0, int iParam1)
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

int func_6()
{
	func_7();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_7()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_11(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_10(PLAYER::PLAYER_PED_ID());
			if (func_9(iVar0) && (!func_8(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_9(Global_111638.f_2358.f_539.f_4321))
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

bool func_8(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_9(int iParam0)
{
	return iParam0 < 3;
}

int func_10(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_11(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_11(int iParam0)
{
	if (func_9(iParam0))
	{
		return func_12(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_12(int iParam0)
{
	return Global_1798[iParam0];
}

struct<16> func_13(int iParam0)
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

int func_14(int iParam0)
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

void func_15(int iParam0, char* sParam1)
{
	iVar0 = func_14(iParam0);
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

void func_16(int iParam0, char* sParam1, bool bParam2)
{
	iVar0 = func_14(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_51915[iVar0].f_9 == 0)
	{
		return;
	}
	Global_51915[iVar0].f_10[(Global_51915[iVar0].f_9 - 1)].f_1 = 1;
	StringCopy(&(Global_51915[iVar0].f_10[(Global_51915[iVar0].f_9 - 1)].f_2), sParam1, 16);
	Global_51915[iVar0].f_10[(Global_51915[iVar0].f_9 - 1)].f_6 = 0;
	StringCopy(&(Global_51915[iVar0].f_10[(Global_51915[iVar0].f_9 - 1)].f_7[0]), "", 16);
	StringCopy(&(Global_51915[iVar0].f_10[(Global_51915[iVar0].f_9 - 1)].f_7[1]), "", 16);
	StringCopy(&(Global_51915[iVar0].f_10[(Global_51915[iVar0].f_9 - 1)].f_7[2]), "", 16);
	StringCopy(&(Global_51915[iVar0].f_10[(Global_51915[iVar0].f_9 - 1)].f_7[3]), "", 16);
	StringCopy(&(Global_51915[iVar0].f_10[(Global_51915[iVar0].f_9 - 1)].f_7[4]), "", 16);
	if (bParam2)
	{
		func_1(iParam0);
	}
}

int func_17(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_19(iParam0, 1);
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
			func_18(Global_51915[iVar0].f_4[iVar1], Global_51915[iVar0].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_18(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		Var3 = { func_13(Global_42615[iVar20].f_1) };
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
			Var3 = { func_13(Global_42615[iVar26].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_51553[iParam0].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_2(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_2(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_2(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_2(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

int func_19(int iParam0, bool bParam1)
{
	iVar0 = func_14(iParam0);
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

void func_20(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_30(iParam0, iParam1))
	{
		iVar0 = func_29(iParam1);
		iVar1 = func_27(iParam0);
		iVar2 = (func_27(iParam0) - func_27(iParam1));
		iVar3 = (func_29(iParam0) - func_29(iParam1));
		iVar4 = (func_26(iParam0) - func_26(iParam1));
		iVar5 = (func_25(iParam0) - func_25(iParam1));
		iVar6 = (func_24(iParam0) - func_24(iParam1));
		iVar7 = (func_23(iParam0) - func_23(iParam1));
	}
	else
	{
		iVar0 = func_29(iParam0);
		iVar1 = func_27(iParam1);
		iVar2 = (func_27(iParam1) - func_27(iParam0));
		iVar3 = (func_29(iParam1) - func_29(iParam0));
		iVar4 = (func_26(iParam1) - func_26(iParam0));
		iVar5 = (func_25(iParam1) - func_25(iParam0));
		iVar6 = (func_24(iParam1) - func_24(iParam0));
		iVar7 = (func_23(iParam1) - func_23(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_22(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_21(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

float func_21(float fParam0, float fParam1, float fParam2)
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

int func_22(int iParam0, int iParam1)
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

int func_23(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_24(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_25(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_26(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_27(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_28(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_28(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_29(int iParam0)
{
	return iParam0 & 15;
}

int func_30(int iParam0, int iParam1)
{
	if (!func_31(iParam1) || !func_31(iParam0))
	{
		return 1;
	}
	iVar0 = func_27(iParam0);
	iVar1 = func_27(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_29(iParam0);
	iVar1 = func_29(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_26(iParam0);
	iVar1 = func_26(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_25(iParam0);
	iVar1 = func_25(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_24(iParam0);
	iVar1 = func_24(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_23(iParam0);
	iVar1 = func_23(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_31(int iParam0)
{
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_23(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_24(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_25(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_27(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_29(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_26(iParam0);
	if (iVar5 < 1 || iVar5 > func_22(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_32(int iParam0, bool bParam1)
{
	if (!Global_45940[iParam0] && !Global_45940[iParam0].f_1)
	{
		return;
	}
	if (Global_45940[iParam0].f_31 == Global_45940[iParam0].f_30)
	{
		iVar0 = (Global_45940[iParam0].f_42 - 1);
		if (iVar0 < 0)
		{
			return;
		}
		if (Global_42615[Global_45940[iParam0].f_32[iVar0]].f_4 == 0)
		{
			Global_45940[iParam0].f_1 = 1;
		}
		return;
	}
	if (Global_45940[iParam0].f_1)
	{
		return;
	}
	iVar1 = Global_45940[iParam0].f_8[Global_45940[iParam0].f_31];
	Global_45940[iParam0].f_31++;
	func_33(iParam0, iVar1);
	Global_45940[iParam0].f_45 = Global_42615[iVar1].f_10;
	Global_45940[iParam0].f_43 = Global_42615[iVar1].f_11;
	iVar2 = Global_45940[iParam0].f_2;
	func_18(Global_42615[iVar1].f_3, iParam0, 0, 0, bParam1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_45940[iParam0].f_3[iVar3] != Global_42615[iVar1].f_2 && Global_45940[iParam0].f_3[iVar3] != Global_42615[iVar1].f_3)
		{
			func_18(Global_45940[iParam0].f_3[iVar3], iParam0, 0, 0, bParam1);
		}
		iVar3++;
	}
	if (Global_45940[iParam0].f_31 == Global_45940[iParam0].f_30)
	{
		if (Global_42615[Global_45940[iParam0].f_32[(Global_45940[iParam0].f_42 - 1)]].f_4 == 0)
		{
			Global_45940[iParam0].f_1 = 1;
			return;
		}
	}
}

int func_33(int iParam0, var uParam1)
{
	if (Global_45940[iParam0].f_42 >= 9)
	{
		return 0;
	}
	Global_45940[iParam0].f_32[Global_45940[iParam0].f_42] = uParam1;
	Global_45940[iParam0].f_42++;
	return 1;
}

int func_34(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_59())
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1)
		{
			return 0;
		}
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 0;
	}
	if (func_58() && iParam2 < 4)
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_56(PLAYER::PLAYER_PED_ID()))
		{
			if (GAMEPLAY::IS_BIT_SET(iParam0, func_55()) && !GAMEPLAY::IS_BIT_SET(iParam4, 19))
			{
				return 0;
			}
		}
	}
	if (Global_76620)
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (Global_73825)
	{
		return 0;
	}
	if (Global_94751)
	{
		return 0;
	}
	if ((func_54() || (Global_22211.f_4 && Global_22211.f_104 == 4)) || func_53())
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(iParam4, 18))
	{
		if (!GAMEPLAY::IS_BIT_SET(iParam0, func_55()))
		{
			return 0;
		}
	}
	iVar0 = 1;
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	else if (iParam2 != 5)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 1)
		{
			return 0;
		}
		if (GAMEPLAY::IS_AUTO_SAVE_IN_PROGRESS())
		{
			return 0;
		}
		if (Global_95672)
		{
			return 0;
		}
		if (func_46(50f, 1) != -1)
		{
			return 0;
		}
		if (((((iParam1 == 17 || iParam1 == 19) || iParam1 == 14) || iParam1 == 0) || iParam1 == 1) || iParam1 == 2)
		{
			if (GAMEPLAY::IS_BIT_SET(iParam0, func_55()))
			{
				iVar1 = func_43(func_6());
				iVar2 = func_43(iParam1);
				iVar3 = func_42(iVar1, iVar2);
				if (iVar3 < 9)
				{
					if (Global_111638.f_18098.f_175[iVar3].f_8 == 1 || Global_111638.f_18098.f_175[iVar3].f_8 == 2)
					{
						if (func_41(&(Global_111638.f_18098.f_175[iVar3].f_5)))
						{
							if (func_38(&(Global_111638.f_18098.f_175[iVar3].f_5)) < 30f)
							{
								return 0;
							}
						}
					}
				}
			}
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 2)
	{
		return 0;
	}
	if (func_37())
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(iParam4, 3))
	{
		if (Global_110685)
		{
			return 0;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				return 0;
			}
		}
		if (Global_110348.f_19 != 0)
		{
			return 0;
		}
		if (Global_41431 == 5)
		{
			return 0;
		}
	}
	if (iParam3 != -1)
	{
		if (func_36(PLAYER::PLAYER_PED_ID(), iParam3, 0))
		{
			return 0;
		}
	}
	iVar4 = func_6();
	if (func_9(iVar4))
	{
		PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		switch (iParam1)
		{
			case 4:
				switch (iVar4)
				{
					case 0:
						iVar22[0] = func_11(1);
						iVar22[1] = func_11(2);
						break;
					
					case 1:
						iVar22[0] = func_11(0);
						iVar22[1] = func_11(2);
						break;
					
					case 2:
						iVar22[0] = func_11(0);
						iVar22[1] = func_11(1);
						break;
				}
				break;
			
			case 5:
				iVar22[0] = func_11(1);
				iVar22[1] = func_11(2);
				break;
			
			case 6:
				iVar22[0] = func_35(12);
				iVar22[1] = func_11(1);
				break;
			
			case 7:
				iVar22[0] = func_35(12);
				iVar22[1] = func_11(0);
				break;
			
			case 8:
				iVar22[0] = func_11(0);
				iVar22[1] = func_11(1);
				break;
			
			case 9:
				iVar22[0] = func_11(0);
				iVar22[1] = func_11(2);
				break;
			
			case 10:
				iVar22[0] = func_35(23);
				iVar22[1] = func_11(0);
				break;
			
			case 11:
				iVar22[0] = func_35(23);
				iVar22[1] = func_11(0);
				break;
			
			default:
				if (func_9(iParam1))
				{
					iVar22[0] = func_11(iParam1);
				}
				else
				{
					iVar22[0] = func_35(iParam1);
				}
				iVar22[1] = 0;
				break;
		}
		iVar25 = 0;
		while (iVar25 < 2)
		{
			if (iVar22[iVar25] != 0)
			{
				iVar26 = 0;
				while (iVar26 < 16)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar5[iVar26]))
					{
						if (ENTITY::GET_ENTITY_MODEL(uVar5[iVar26]) == iVar22[iVar25])
						{
							if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar26], 0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uVar5[iVar26], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 6400f)
									{
										return 0;
									}
								}
							}
							else
							{
								return 0;
							}
						}
					}
					iVar26++;
				}
				iVar27 = 0;
				switch (iVar22[iVar25])
				{
					case 225514697:
						iVar27 = Global_96222[0];
						break;
					
					case -1692214353:
						iVar27 = Global_96222[1];
						break;
					
					case -1686040670:
						iVar27 = Global_96222[2];
						break;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar27))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar27, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 6400f)
						{
							return 0;
						}
					}
				}
				switch (iVar22[iVar25])
				{
					case 225514697:
						iVar27 = Global_98669[0];
						break;
					
					case -1692214353:
						iVar27 = Global_98669[1];
						break;
					
					case -1686040670:
						iVar27 = Global_98669[2];
						break;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar27))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar27, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 6400f)
						{
							return 0;
						}
					}
				}
			}
			iVar25++;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_35(int iParam0)
{
	if (!func_9(iParam0))
	{
		return func_12(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_36(int iParam0, int iParam1, float fParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		Var0 = { Global_41432[iParam1] };
		fVar5 = Var0.f_3;
		if (fParam2 > 0f)
		{
			fVar5 = fParam2;
		}
		if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Var0, 1) < fVar5)
		{
			return 1;
		}
		else if (Var0.f_4 != -1)
		{
			return func_36(iParam0, Var0.f_4, fParam2);
		}
	}
	return 0;
}

int func_37()
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

float func_38(var uParam0)
{
	if (func_41(uParam0))
	{
		if (func_40(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_39(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_39(bool bParam0)
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

bool func_40(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

bool func_41(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 1);
}

int func_42(int iParam0, int iParam1)
{
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 8;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

int func_43(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < func_45())
	{
		return func_44(iParam0);
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == func_45())
	{
		return 6;
	}
	if (iParam0 == 168)
	{
		return 6;
	}
	return 6;
}

var func_44(int iParam0)
{
	return Global_1798[iParam0].f_11;
}

int func_45()
{
	if (Global_30768 == 0 || Global_30768 == 2)
	{
		return 167;
	}
	return 161;
}

int func_46(float fParam0, bool bParam1)
{
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iVar36 = func_52();
		iVar37 = 0;
		iVar37 = 0;
		while (iVar37 < 63)
		{
			iVar32 = iVar37;
			if (GAMEPLAY::IS_BIT_SET(Global_111638.f_18569[iVar32], 2) && !GAMEPLAY::IS_BIT_SET(Global_111638.f_18569[iVar32], 3))
			{
				func_47(iVar32, &Var0);
				fVar35 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
				if (fVar35 < fVar34)
				{
					bVar38 = true;
					if (bParam1)
					{
						if (iVar36 != Var0.f_26)
						{
							bVar38 = false;
						}
					}
					if (bVar38)
					{
						iVar33 = iVar32;
						fVar34 = fVar35;
					}
				}
			}
			iVar37++;
		}
	}
	return iVar33;
}

void func_47(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_48(uParam1, "Abigail1", func_50(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 1:
			func_48(uParam1, "Abigail2", func_50(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 2:
			func_48(uParam1, "Barry1", func_50(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 3:
			func_48(uParam1, "Barry2", func_50(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
		
		case 4:
			func_48(uParam1, "Barry3", func_50(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 5:
			func_48(uParam1, "Barry3A", func_50(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 6:
			func_48(uParam1, "Barry3C", func_50(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 7:
			func_48(uParam1, "Barry4", func_50(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_49(iParam0), 0, 0);
			break;
		
		case 8:
			func_48(uParam1, "Dreyfuss1", func_50(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 9:
			func_48(uParam1, "Epsilon1", func_50(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 10:
			func_48(uParam1, "Epsilon2", func_50(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 11:
			func_48(uParam1, "Epsilon3", func_50(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 12:
			func_48(uParam1, "Epsilon4", func_50(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 13:
			func_48(uParam1, "Epsilon5", func_50(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 14:
			func_48(uParam1, "Epsilon6", func_50(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 15:
			func_48(uParam1, "Epsilon7", func_50(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 16:
			func_48(uParam1, "Epsilon8", func_50(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 17:
			func_48(uParam1, "Extreme1", func_50(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 18:
			func_48(uParam1, "Extreme2", func_50(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 19:
			func_48(uParam1, "Extreme3", func_50(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 20:
			func_48(uParam1, "Extreme4", func_50(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 21:
			func_48(uParam1, "Fanatic1", func_50(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_49(iParam0), 1, 0);
			break;
		
		case 22:
			func_48(uParam1, "Fanatic2", func_50(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_49(iParam0), 1, 0);
			break;
		
		case 23:
			func_48(uParam1, "Fanatic3", func_50(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_49(iParam0), 0, 1);
			break;
		
		case 24:
			func_48(uParam1, "Hao1", func_50(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_49(iParam0), 0, 1);
			break;
		
		case 25:
			func_48(uParam1, "Hunting1", func_50(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 26:
			func_48(uParam1, "Hunting2", func_50(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 27:
			func_48(uParam1, "Josh1", func_50(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 28:
			func_48(uParam1, "Josh2", func_50(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
		
		case 29:
			func_48(uParam1, "Josh3", func_50(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
		
		case 30:
			func_48(uParam1, "Josh4", func_50(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 31:
			func_48(uParam1, "Maude1", func_50(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 32:
			func_48(uParam1, "Minute1", func_50(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 33:
			func_48(uParam1, "Minute2", func_50(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 34:
			func_48(uParam1, "Minute3", func_50(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 35:
			func_48(uParam1, "MrsPhilips1", func_50(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 36:
			func_48(uParam1, "MrsPhilips2", func_50(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 37:
			func_48(uParam1, "Nigel1", func_50(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 38:
			func_48(uParam1, "Nigel1A", func_50(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
		
		case 39:
			func_48(uParam1, "Nigel1B", func_50(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_49(iParam0), 1, 1);
			break;
		
		case 40:
			func_48(uParam1, "Nigel1C", func_50(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_49(iParam0), 1, 1);
			break;
		
		case 41:
			func_48(uParam1, "Nigel1D", func_50(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_49(iParam0), 1, 1);
			break;
		
		case 42:
			func_48(uParam1, "Nigel2", func_50(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
		
		case 43:
			func_48(uParam1, "Nigel3", func_50(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
		
		case 44:
			func_48(uParam1, "Omega1", func_50(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 45:
			func_48(uParam1, "Omega2", func_50(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 46:
			func_48(uParam1, "Paparazzo1", func_50(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 47:
			func_48(uParam1, "Paparazzo2", func_50(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 48:
			func_48(uParam1, "Paparazzo3", func_50(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 49:
			func_48(uParam1, "Paparazzo3A", func_50(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 50:
			func_48(uParam1, "Paparazzo3B", func_50(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 51:
			func_48(uParam1, "Paparazzo4", func_50(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 52:
			func_48(uParam1, "Rampage1", func_50(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 54:
			func_48(uParam1, "Rampage3", func_50(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 55:
			func_48(uParam1, "Rampage4", func_50(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 56:
			func_48(uParam1, "Rampage5", func_50(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 53:
			func_48(uParam1, "Rampage2", func_50(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 57:
			func_48(uParam1, "TheLastOne", func_50(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 58:
			func_48(uParam1, "Tonya1", func_50(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 59:
			func_48(uParam1, "Tonya2", func_50(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 60:
			func_48(uParam1, "Tonya3", func_50(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 61:
			func_48(uParam1, "Tonya4", func_50(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 62:
			func_48(uParam1, "Tonya5", func_50(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_48(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_49(int iParam0)
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

struct<2> func_50(int iParam0)
{
	StringCopy(&Var0, "", 8);
	cVar2 = { func_51(iParam0) };
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_51(int iParam0)
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

int func_52()
{
	func_7();
	switch (Global_111638.f_2358.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_53()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

int func_54()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

var func_55()
{
	func_7();
	return Global_111638.f_2358.f_539.f_4321;
}

int func_56(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_57(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_57(int iParam0)
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

int func_58()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

int func_59()
{
	if (Global_19486.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_60(int iParam0)
{
	if (iParam0 == 26)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_24981, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_14(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_51915[iVar0] = 0;
}

var func_61()
{
	func_67(&uVar0, TIME::GET_CLOCK_SECONDS());
	func_66(&uVar0, TIME::GET_CLOCK_MINUTES());
	func_65(&uVar0, TIME::GET_CLOCK_HOURS());
	func_64(&uVar0, TIME::GET_CLOCK_DAY_OF_MONTH());
	func_63(&uVar0, TIME::GET_CLOCK_MONTH());
	func_62(&uVar0, TIME::GET_CLOCK_YEAR());
	return uVar0;
}

void func_62(var uParam0, int iParam1)
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

void func_63(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_64(var uParam0, int iParam1)
{
	iVar0 = func_29(*uParam0);
	iVar1 = func_27(*uParam0);
	if (iParam1 < 1 || iParam1 > func_22(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_65(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_66(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_67(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_68()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_51553[iVar0] = Global_111638.f_21032[iVar0];
		iVar1 = 0;
		while (iVar1 < 16)
		{
			Global_51553[iVar0].f_1[iVar1] = Global_111638.f_21032[iVar0].f_1[iVar1];
			Global_51553[iVar0].f_18[iVar1] = Global_111638.f_21032[iVar0].f_18[iVar1];
			Global_51553[iVar0].f_35[iVar1] = Global_111638.f_21032[iVar0].f_35[iVar1];
			Global_51553[iVar0].f_52[iVar1] = Global_111638.f_21032[iVar0].f_52[iVar1];
			Global_51553[iVar0].f_69[iVar1] = Global_111638.f_21032[iVar0].f_69[iVar1];
			Global_51553[iVar0].f_86[iVar1] = Global_111638.f_21032[iVar0].f_86[iVar1];
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Global_51915[iVar0].f_2 = Global_111638.f_21032.f_311[iVar0];
		Global_51915[iVar0] = Global_111638.f_21032.f_311[iVar0].f_2;
		Global_51915[iVar0].f_3 = Global_111638.f_21032.f_311[iVar0].f_3;
		Global_51915[iVar0].f_1 = Global_111638.f_21032.f_311[iVar0].f_1;
		Global_51915[iVar0].f_9 = Global_111638.f_21032.f_311[iVar0].f_9;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_51915[iVar0].f_4[iVar1] = Global_111638.f_21032.f_311[iVar0].f_4[iVar1];
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_51915[iVar0].f_10[iVar1] = Global_111638.f_21032.f_311[iVar0].f_10[iVar1];
			Global_51915[iVar0].f_10[iVar1].f_1 = Global_111638.f_21032.f_311[iVar0].f_10[iVar1].f_1;
			Global_51915[iVar0].f_10[iVar1].f_2 = { Global_111638.f_21032.f_311[iVar0].f_10[iVar1].f_2 };
			Global_51915[iVar0].f_10[iVar1].f_6 = Global_111638.f_21032.f_311[iVar0].f_10[iVar1].f_6;
			iVar2 = 0;
			while (iVar2 < 10)
			{
				Global_51915[iVar0].f_10[iVar1].f_7[iVar2] = { Global_111638.f_21032.f_311[iVar0].f_10[iVar1].f_7[iVar2] };
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 122)
	{
		Global_45940[iVar0] = Global_111638.f_21032.f_1733[iVar0];
		Global_45940[iVar0].f_1 = Global_111638.f_21032.f_1733[iVar0].f_1;
		Global_45940[iVar0].f_45 = Global_111638.f_21032.f_1733[iVar0].f_2;
		Global_45940[iVar0].f_31 = Global_111638.f_21032.f_1733[iVar0].f_3;
		iVar1 = 0;
		while (iVar1 < 9)
		{
			if (Global_111638.f_21032.f_1733[iVar0].f_4[iVar1] > 0)
			{
				Global_45940[iVar0].f_32[iVar1] = (Global_111638.f_21032.f_1733[iVar0].f_4[iVar1] - 1);
				Global_45940[iVar0].f_42++;
			}
			iVar1++;
		}
		iVar0++;
	}
	Global_53337 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_53338[iVar0] = Global_111638.f_21032.f_3442[iVar0];
		Global_53338[iVar0].f_1 = Global_111638.f_21032.f_3442[iVar0].f_1;
		Global_53338[iVar0].f_2 = Global_111638.f_21032.f_3442[iVar0].f_2;
		Global_53338[iVar0].f_5 = Global_111638.f_21032.f_3442[iVar0].f_5;
		Global_53338[iVar0].f_6 = { Global_111638.f_21032.f_3442[iVar0].f_6 };
		Global_53338[iVar0].f_10 = Global_111638.f_21032.f_3442[iVar0].f_10;
		iVar1 = 0;
		while (iVar1 < 10)
		{
			Global_53338[iVar0].f_11[iVar1] = { Global_111638.f_21032.f_3442[iVar0].f_11[iVar1] };
			iVar1++;
		}
		Global_53338[iVar0].f_52 = Global_111638.f_21032.f_3442[iVar0].f_52;
		if (Global_53338[iVar0].f_52 != 0)
		{
			Global_53337++;
		}
		iVar0++;
	}
}

void func_69()
{
	Global_42615[0] = 15;
	Global_42615[0].f_1 = 16;
	Global_42615[0].f_2 = 4;
	Global_42615[0].f_3 = 0;
	Global_42615[0].f_10 = 1;
	Global_42615[0].f_11 = 0;
	Global_42615[0].f_4 = 0;
	Global_42615[1] = 17;
	Global_42615[1].f_1 = 16;
	Global_42615[1].f_2 = 4;
	Global_42615[1].f_3 = 0;
	Global_42615[1].f_10 = 1;
	Global_42615[1].f_11 = 0;
	Global_42615[1].f_4 = 0;
	Global_42615[2] = 18;
	Global_42615[2].f_1 = 16;
	Global_42615[2].f_2 = 4;
	Global_42615[2].f_3 = 0;
	Global_42615[2].f_10 = 1;
	Global_42615[2].f_11 = 0;
	Global_42615[2].f_4 = 0;
	Global_42615[3] = 19;
	Global_42615[3].f_1 = 16;
	Global_42615[3].f_2 = 4;
	Global_42615[3].f_3 = 0;
	Global_42615[3].f_10 = 1;
	Global_42615[3].f_11 = 0;
	Global_42615[3].f_4 = 0;
	Global_42615[4] = 20;
	Global_42615[4].f_1 = 16;
	Global_42615[4].f_2 = 4;
	Global_42615[4].f_3 = 0;
	Global_42615[4].f_10 = 1;
	Global_42615[4].f_11 = 0;
	Global_42615[4].f_4 = 0;
	Global_42615[5] = 21;
	Global_42615[5].f_1 = 16;
	Global_42615[5].f_2 = 4;
	Global_42615[5].f_3 = 0;
	Global_42615[5].f_10 = 1;
	Global_42615[5].f_11 = 0;
	Global_42615[5].f_4 = 0;
	Global_42615[6] = 22;
	Global_42615[6].f_1 = 16;
	Global_42615[6].f_2 = 4;
	Global_42615[6].f_3 = 0;
	Global_42615[6].f_10 = 0;
	Global_42615[6].f_11 = 0;
	Global_42615[6].f_4 = 0;
	Global_42615[7] = 23;
	Global_42615[7].f_1 = 24;
	Global_42615[7].f_2 = 4;
	Global_42615[7].f_3 = 0;
	Global_42615[7].f_10 = 0;
	Global_42615[7].f_11 = 0;
	Global_42615[7].f_4 = 0;
	Global_42615[8] = 25;
	Global_42615[8].f_1 = 26;
	Global_42615[8].f_2 = 4;
	Global_42615[8].f_3 = 0;
	Global_42615[8].f_10 = 0;
	Global_42615[8].f_11 = 0;
	Global_42615[8].f_4 = 0;
	Global_42615[9] = 27;
	Global_42615[9].f_1 = 28;
	Global_42615[9].f_2 = 4;
	Global_42615[9].f_3 = 0;
	Global_42615[9].f_10 = 0;
	Global_42615[9].f_11 = 0;
	Global_42615[9].f_4 = 0;
	Global_42615[10] = 32;
	Global_42615[10].f_1 = 33;
	Global_42615[10].f_2 = 5;
	Global_42615[10].f_3 = 0;
	Global_42615[10].f_10 = 0;
	Global_42615[10].f_11 = 0;
	Global_42615[10].f_4 = 0;
	Global_42615[11] = 34;
	Global_42615[11].f_1 = 35;
	Global_42615[11].f_2 = 5;
	Global_42615[11].f_3 = 0;
	Global_42615[11].f_10 = 0;
	Global_42615[11].f_11 = 0;
	Global_42615[11].f_4 = 0;
	Global_42615[12] = 42;
	Global_42615[12].f_1 = 43;
	Global_42615[12].f_2 = 7;
	Global_42615[12].f_3 = 1;
	Global_42615[12].f_10 = 0;
	Global_42615[12].f_11 = 0;
	Global_42615[12].f_4 = 0;
	Global_42615[13] = 44;
	Global_42615[13].f_1 = 45;
	Global_42615[13].f_2 = 7;
	Global_42615[13].f_3 = 1;
	Global_42615[13].f_10 = 0;
	Global_42615[13].f_11 = 0;
	Global_42615[13].f_4 = 0;
	Global_42615[14] = 46;
	Global_42615[14].f_1 = 47;
	Global_42615[14].f_2 = 7;
	Global_42615[14].f_3 = 1;
	Global_42615[14].f_10 = 0;
	Global_42615[14].f_11 = 0;
	Global_42615[14].f_4 = 0;
	Global_42615[15] = 48;
	Global_42615[15].f_1 = 49;
	Global_42615[15].f_2 = 7;
	Global_42615[15].f_3 = 1;
	Global_42615[15].f_10 = 0;
	Global_42615[15].f_11 = 0;
	Global_42615[15].f_4 = 0;
	Global_42615[16] = 50;
	Global_42615[16].f_1 = 51;
	Global_42615[16].f_2 = 4;
	Global_42615[16].f_3 = 0;
	Global_42615[16].f_10 = 0;
	Global_42615[16].f_11 = 0;
	Global_42615[16].f_4 = 0;
	Global_42615[17] = 61;
	Global_42615[17].f_1 = 62;
	Global_42615[17].f_2 = 8;
	Global_42615[17].f_3 = 0;
	Global_42615[17].f_10 = 1;
	Global_42615[17].f_11 = 0;
	Global_42615[17].f_4 = 0;
	Global_42615[18] = 63;
	Global_42615[18].f_1 = 64;
	Global_42615[18].f_2 = 9;
	Global_42615[18].f_3 = 1;
	Global_42615[18].f_10 = 1;
	Global_42615[18].f_11 = 0;
	Global_42615[18].f_4 = 0;
	Global_42615[19] = 61;
	Global_42615[19].f_1 = 65;
	Global_42615[19].f_2 = 8;
	Global_42615[19].f_3 = 0;
	Global_42615[19].f_10 = 1;
	Global_42615[19].f_11 = 0;
	Global_42615[19].f_4 = 0;
	Global_42615[20] = 61;
	Global_42615[20].f_1 = 66;
	Global_42615[20].f_2 = 8;
	Global_42615[20].f_3 = 0;
	Global_42615[20].f_10 = 1;
	Global_42615[20].f_11 = 0;
	Global_42615[20].f_4 = 0;
	Global_42615[21] = 61;
	Global_42615[21].f_1 = 67;
	Global_42615[21].f_2 = 8;
	Global_42615[21].f_3 = 0;
	Global_42615[21].f_10 = 1;
	Global_42615[21].f_11 = 0;
	Global_42615[21].f_4 = 0;
	Global_42615[22] = 61;
	Global_42615[22].f_1 = 68;
	Global_42615[22].f_2 = 8;
	Global_42615[22].f_3 = 0;
	Global_42615[22].f_10 = 0;
	Global_42615[22].f_11 = 0;
	Global_42615[22].f_4 = 0;
	Global_42615[23] = 69;
	Global_42615[23].f_1 = 70;
	Global_42615[23].f_2 = 10;
	Global_42615[23].f_3 = 2;
	Global_42615[23].f_10 = 1;
	Global_42615[23].f_11 = 0;
	Global_42615[23].f_4 = 0;
	Global_42615[24] = 63;
	Global_42615[24].f_1 = 74;
	Global_42615[24].f_2 = 9;
	Global_42615[24].f_3 = 1;
	Global_42615[24].f_10 = 1;
	Global_42615[24].f_11 = 0;
	Global_42615[24].f_4 = 0;
	Global_42615[25] = 63;
	Global_42615[25].f_1 = 75;
	Global_42615[25].f_2 = 9;
	Global_42615[25].f_3 = 1;
	Global_42615[25].f_10 = 1;
	Global_42615[25].f_11 = 0;
	Global_42615[25].f_4 = 0;
	Global_42615[26] = 63;
	Global_42615[26].f_1 = 76;
	Global_42615[26].f_2 = 9;
	Global_42615[26].f_3 = 1;
	Global_42615[26].f_10 = 1;
	Global_42615[26].f_11 = 0;
	Global_42615[26].f_4 = 0;
	Global_42615[27] = 63;
	Global_42615[27].f_1 = 77;
	Global_42615[27].f_2 = 9;
	Global_42615[27].f_3 = 1;
	Global_42615[27].f_10 = 0;
	Global_42615[27].f_11 = 0;
	Global_42615[27].f_4 = 0;
	Global_42615[28] = 69;
	Global_42615[28].f_1 = 73;
	Global_42615[28].f_2 = 10;
	Global_42615[28].f_3 = 2;
	Global_42615[28].f_10 = 1;
	Global_42615[28].f_11 = 0;
	Global_42615[28].f_4 = 0;
	Global_42615[29] = 69;
	Global_42615[29].f_1 = 72;
	Global_42615[29].f_2 = 10;
	Global_42615[29].f_3 = 2;
	Global_42615[29].f_10 = 1;
	Global_42615[29].f_11 = 0;
	Global_42615[29].f_4 = 0;
	Global_42615[30] = 69;
	Global_42615[30].f_1 = 71;
	Global_42615[30].f_2 = 10;
	Global_42615[30].f_3 = 2;
	Global_42615[30].f_10 = 0;
	Global_42615[30].f_11 = 0;
	Global_42615[30].f_4 = 0;
	Global_42615[31] = 90;
	Global_42615[31].f_1 = 91;
	Global_42615[31].f_2 = 11;
	Global_42615[31].f_3 = 1;
	Global_42615[31].f_10 = 0;
	Global_42615[31].f_11 = 0;
	Global_42615[31].f_4 = 0;
	Global_42615[32] = 90;
	Global_42615[32].f_1 = 92;
	Global_42615[32].f_2 = 11;
	Global_42615[32].f_3 = 0;
	Global_42615[32].f_10 = 0;
	Global_42615[32].f_11 = 0;
	Global_42615[32].f_4 = 0;
	Global_42615[33] = 90;
	Global_42615[33].f_1 = 93;
	Global_42615[33].f_2 = 11;
	Global_42615[33].f_3 = 2;
	Global_42615[33].f_10 = 0;
	Global_42615[33].f_11 = 0;
	Global_42615[33].f_4 = 0;
	Global_42615[34] = 94;
	Global_42615[34].f_1 = 95;
	Global_42615[34].f_2 = 13;
	Global_42615[34].f_3 = 0;
	Global_42615[34].f_10 = 0;
	Global_42615[34].f_11 = 0;
	Global_42615[34].f_4 = 0;
	Global_42615[35] = 94;
	Global_42615[35].f_1 = 96;
	Global_42615[35].f_2 = 13;
	Global_42615[35].f_3 = 1;
	Global_42615[35].f_10 = 0;
	Global_42615[35].f_11 = 0;
	Global_42615[35].f_4 = 0;
	Global_42615[36] = 94;
	Global_42615[36].f_1 = 97;
	Global_42615[36].f_2 = 13;
	Global_42615[36].f_3 = 2;
	Global_42615[36].f_10 = 0;
	Global_42615[36].f_11 = 0;
	Global_42615[36].f_4 = 0;
	Global_42615[37] = 94;
	Global_42615[37].f_1 = 98;
	Global_42615[37].f_2 = 14;
	Global_42615[37].f_3 = 0;
	Global_42615[37].f_10 = 0;
	Global_42615[37].f_11 = 0;
	Global_42615[37].f_4 = 0;
	Global_42615[38] = 94;
	Global_42615[38].f_1 = 99;
	Global_42615[38].f_2 = 14;
	Global_42615[38].f_3 = 1;
	Global_42615[38].f_10 = 0;
	Global_42615[38].f_11 = 0;
	Global_42615[38].f_4 = 0;
	Global_42615[39] = 94;
	Global_42615[39].f_1 = 100;
	Global_42615[39].f_2 = 14;
	Global_42615[39].f_3 = 2;
	Global_42615[39].f_10 = 0;
	Global_42615[39].f_11 = 0;
	Global_42615[39].f_4 = 0;
	Global_42615[40] = 94;
	Global_42615[40].f_1 = 101;
	Global_42615[40].f_2 = 12;
	Global_42615[40].f_3 = 0;
	Global_42615[40].f_10 = 0;
	Global_42615[40].f_11 = 0;
	Global_42615[40].f_4 = 0;
	Global_42615[41] = 94;
	Global_42615[41].f_1 = 102;
	Global_42615[41].f_2 = 12;
	Global_42615[41].f_3 = 1;
	Global_42615[41].f_10 = 0;
	Global_42615[41].f_11 = 0;
	Global_42615[41].f_4 = 0;
	Global_42615[42] = 94;
	Global_42615[42].f_1 = 103;
	Global_42615[42].f_2 = 12;
	Global_42615[42].f_3 = 2;
	Global_42615[42].f_10 = 0;
	Global_42615[42].f_11 = 0;
	Global_42615[42].f_4 = 0;
	Global_42615[43] = 104;
	Global_42615[43].f_1 = 105;
	Global_42615[43].f_2 = 7;
	Global_42615[43].f_3 = 0;
	Global_42615[43].f_10 = 1;
	Global_42615[43].f_11 = 0;
	Global_42615[43].f_4 = 0;
	Global_42615[44] = 108;
	Global_42615[44].f_1 = 109;
	Global_42615[44].f_2 = 15;
	Global_42615[44].f_3 = 0;
	Global_42615[44].f_10 = 1;
	Global_42615[44].f_11 = 0;
	Global_42615[44].f_4 = 0;
	Global_42615[45] = 110;
	Global_42615[45].f_1 = 111;
	Global_42615[45].f_2 = 15;
	Global_42615[45].f_3 = 0;
	Global_42615[45].f_10 = 1;
	Global_42615[45].f_11 = 0;
	Global_42615[45].f_4 = 0;
	Global_42615[46] = 112;
	Global_42615[46].f_1 = 113;
	Global_42615[46].f_2 = 15;
	Global_42615[46].f_3 = 0;
	Global_42615[46].f_10 = 1;
	Global_42615[46].f_11 = 0;
	Global_42615[46].f_4 = 0;
	Global_42615[47] = 117;
	Global_42615[47].f_1 = 118;
	Global_42615[47].f_2 = 16;
	Global_42615[47].f_3 = 0;
	Global_42615[47].f_10 = 1;
	Global_42615[47].f_11 = 0;
	Global_42615[47].f_4 = 0;
	Global_42615[48] = 119;
	Global_42615[48].f_1 = 120;
	Global_42615[48].f_2 = 16;
	Global_42615[48].f_3 = 0;
	Global_42615[48].f_10 = 1;
	Global_42615[48].f_11 = 0;
	Global_42615[48].f_4 = 0;
	Global_42615[49] = 131;
	Global_42615[49].f_1 = 132;
	Global_42615[49].f_2 = 16;
	Global_42615[49].f_3 = 0;
	Global_42615[49].f_10 = 1;
	Global_42615[49].f_11 = 0;
	Global_42615[49].f_4 = 0;
	Global_42615[50] = 129;
	Global_42615[50].f_1 = 130;
	Global_42615[50].f_2 = 16;
	Global_42615[50].f_3 = 0;
	Global_42615[50].f_10 = 0;
	Global_42615[50].f_11 = 0;
	Global_42615[50].f_4 = 0;
	Global_42615[51] = 127;
	Global_42615[51].f_1 = 128;
	Global_42615[51].f_2 = 16;
	Global_42615[51].f_3 = 0;
	Global_42615[51].f_10 = 1;
	Global_42615[51].f_11 = 0;
	Global_42615[51].f_4 = 0;
	Global_42615[52] = 125;
	Global_42615[52].f_1 = 126;
	Global_42615[52].f_2 = 16;
	Global_42615[52].f_3 = 0;
	Global_42615[52].f_10 = 1;
	Global_42615[52].f_11 = 0;
	Global_42615[52].f_4 = 0;
	Global_42615[53] = 123;
	Global_42615[53].f_1 = 124;
	Global_42615[53].f_2 = 16;
	Global_42615[53].f_3 = 0;
	Global_42615[53].f_10 = 1;
	Global_42615[53].f_11 = 0;
	Global_42615[53].f_4 = 0;
	Global_42615[54] = 121;
	Global_42615[54].f_1 = 122;
	Global_42615[54].f_2 = 16;
	Global_42615[54].f_3 = 0;
	Global_42615[54].f_10 = 1;
	Global_42615[54].f_11 = 0;
	Global_42615[54].f_4 = 0;
	Global_42615[55] = 133;
	Global_42615[55].f_1 = 134;
	Global_42615[55].f_2 = 12;
	Global_42615[55].f_3 = 0;
	Global_42615[55].f_10 = 0;
	Global_42615[55].f_11 = 0;
	Global_42615[55].f_4 = 0;
	Global_42615[56] = 135;
	Global_42615[56].f_1 = 136;
	Global_42615[56].f_2 = 14;
	Global_42615[56].f_3 = 0;
	Global_42615[56].f_10 = 0;
	Global_42615[56].f_11 = 0;
	Global_42615[56].f_4 = 0;
	Global_42615[57] = 137;
	Global_42615[57].f_1 = 138;
	Global_42615[57].f_2 = 12;
	Global_42615[57].f_3 = 0;
	Global_42615[57].f_10 = 0;
	Global_42615[57].f_11 = 0;
	Global_42615[57].f_4 = 0;
	Global_42615[58] = 133;
	Global_42615[58].f_1 = 139;
	Global_42615[58].f_2 = 12;
	Global_42615[58].f_3 = 1;
	Global_42615[58].f_10 = 0;
	Global_42615[58].f_11 = 0;
	Global_42615[58].f_4 = 0;
	Global_42615[59] = 133;
	Global_42615[59].f_1 = 140;
	Global_42615[59].f_2 = 12;
	Global_42615[59].f_3 = 2;
	Global_42615[59].f_10 = 0;
	Global_42615[59].f_11 = 0;
	Global_42615[59].f_4 = 0;
	Global_42615[60] = 135;
	Global_42615[60].f_1 = 136;
	Global_42615[60].f_2 = 14;
	Global_42615[60].f_3 = 1;
	Global_42615[60].f_10 = 0;
	Global_42615[60].f_11 = 0;
	Global_42615[60].f_4 = 0;
	Global_42615[61] = 135;
	Global_42615[61].f_1 = 136;
	Global_42615[61].f_2 = 14;
	Global_42615[61].f_3 = 2;
	Global_42615[61].f_10 = 0;
	Global_42615[61].f_11 = 0;
	Global_42615[61].f_4 = 0;
	Global_42615[62] = 137;
	Global_42615[62].f_1 = 141;
	Global_42615[62].f_2 = 12;
	Global_42615[62].f_3 = 1;
	Global_42615[62].f_10 = 0;
	Global_42615[62].f_11 = 0;
	Global_42615[62].f_4 = 0;
	Global_42615[63] = 137;
	Global_42615[63].f_1 = 138;
	Global_42615[63].f_2 = 12;
	Global_42615[63].f_3 = 2;
	Global_42615[63].f_10 = 0;
	Global_42615[63].f_11 = 0;
	Global_42615[63].f_4 = 0;
	Global_42615[64] = 148;
	Global_42615[64].f_1 = 149;
	Global_42615[64].f_2 = 7;
	Global_42615[64].f_3 = 0;
	Global_42615[64].f_10 = 0;
	Global_42615[64].f_11 = 0;
	Global_42615[64].f_4 = 0;
	Global_42615[65] = 148;
	Global_42615[65].f_1 = 151;
	Global_42615[65].f_2 = 7;
	Global_42615[65].f_3 = 0;
	Global_42615[65].f_10 = 0;
	Global_42615[65].f_11 = 0;
	Global_42615[65].f_4 = 0;
	Global_42615[66] = 148;
	Global_42615[66].f_1 = 150;
	Global_42615[66].f_2 = 7;
	Global_42615[66].f_3 = 0;
	Global_42615[66].f_10 = 0;
	Global_42615[66].f_11 = 0;
	Global_42615[66].f_4 = 0;
	Global_42615[67] = 155;
	Global_42615[67].f_1 = 156;
	Global_42615[67].f_2 = 63;
	Global_42615[67].f_3 = 2;
	Global_42615[67].f_10 = 0;
	Global_42615[67].f_11 = 0;
	Global_42615[67].f_4 = 0;
	Global_42615[68] = 125;
	Global_42615[68].f_1 = 160;
	Global_42615[68].f_2 = 16;
	Global_42615[68].f_3 = 0;
	Global_42615[68].f_10 = 1;
	Global_42615[68].f_11 = 0;
	Global_42615[68].f_4 = 0;
	Global_42615[69] = 161;
	Global_42615[69].f_1 = 162;
	Global_42615[69].f_2 = 64;
	Global_42615[69].f_3 = 2;
	Global_42615[69].f_10 = 0;
	Global_42615[69].f_11 = 0;
	Global_42615[69].f_4 = 0;
	Global_42615[70] = 161;
	Global_42615[70].f_1 = 162;
	Global_42615[70].f_2 = 64;
	Global_42615[70].f_3 = 1;
	Global_42615[70].f_10 = 0;
	Global_42615[70].f_11 = 0;
	Global_42615[70].f_4 = 0;
	Global_42615[71] = 161;
	Global_42615[71].f_1 = 162;
	Global_42615[71].f_2 = 64;
	Global_42615[71].f_3 = 2;
	Global_42615[71].f_10 = 0;
	Global_42615[71].f_11 = 0;
	Global_42615[71].f_4 = 0;
	Global_42615[72] = 166;
	Global_42615[72].f_1 = 16;
	Global_42615[72].f_2 = 21;
	Global_42615[72].f_3 = 0;
	Global_42615[72].f_10 = 0;
	Global_42615[72].f_11 = 0;
	Global_42615[72].f_4 = 0;
	Global_42615[73] = 166;
	Global_42615[73].f_1 = 16;
	Global_42615[73].f_2 = 21;
	Global_42615[73].f_3 = 1;
	Global_42615[73].f_10 = 0;
	Global_42615[73].f_11 = 0;
	Global_42615[73].f_4 = 0;
	Global_42615[74] = 166;
	Global_42615[74].f_1 = 16;
	Global_42615[74].f_2 = 21;
	Global_42615[74].f_3 = 2;
	Global_42615[74].f_10 = 0;
	Global_42615[74].f_11 = 0;
	Global_42615[74].f_4 = 0;
	Global_42615[75] = 167;
	Global_42615[75].f_1 = 16;
	Global_42615[75].f_2 = 6;
	Global_42615[75].f_3 = 2;
	Global_42615[75].f_10 = 0;
	Global_42615[75].f_11 = 0;
	Global_42615[75].f_4 = 0;
	Global_42615[76] = 168;
	Global_42615[76].f_1 = 16;
	Global_42615[76].f_2 = 6;
	Global_42615[76].f_3 = 2;
	Global_42615[76].f_10 = 0;
	Global_42615[76].f_11 = 0;
	Global_42615[76].f_4 = 0;
	Global_42615[77] = 169;
	Global_42615[77].f_1 = 16;
	Global_42615[77].f_2 = 6;
	Global_42615[77].f_3 = 2;
	Global_42615[77].f_10 = 0;
	Global_42615[77].f_11 = 0;
	Global_42615[77].f_4 = 0;
	Global_42615[78] = 170;
	Global_42615[78].f_1 = 16;
	Global_42615[78].f_2 = 6;
	Global_42615[78].f_3 = 2;
	Global_42615[78].f_10 = 0;
	Global_42615[78].f_11 = 0;
	Global_42615[78].f_4 = 0;
	Global_42615[79] = 171;
	Global_42615[79].f_1 = 16;
	Global_42615[79].f_2 = 6;
	Global_42615[79].f_3 = 2;
	Global_42615[79].f_10 = 0;
	Global_42615[79].f_11 = 0;
	Global_42615[79].f_4 = 0;
	Global_42615[80] = 172;
	Global_42615[80].f_1 = 173;
	Global_42615[80].f_2 = 6;
	Global_42615[80].f_3 = 2;
	Global_42615[80].f_10 = 0;
	Global_42615[80].f_11 = 0;
	Global_42615[80].f_4 = 0;
	Global_42615[81] = 174;
	Global_42615[81].f_1 = 175;
	Global_42615[81].f_2 = 6;
	Global_42615[81].f_3 = 2;
	Global_42615[81].f_10 = 0;
	Global_42615[81].f_11 = 0;
	Global_42615[81].f_4 = 0;
	Global_42615[82] = 176;
	Global_42615[82].f_1 = 177;
	Global_42615[82].f_2 = 6;
	Global_42615[82].f_3 = 2;
	Global_42615[82].f_10 = 0;
	Global_42615[82].f_11 = 0;
	Global_42615[82].f_4 = 0;
	Global_42615[83] = 178;
	Global_42615[83].f_1 = 179;
	Global_42615[83].f_2 = 6;
	Global_42615[83].f_3 = 2;
	Global_42615[83].f_10 = 0;
	Global_42615[83].f_11 = 0;
	Global_42615[83].f_4 = 0;
	Global_42615[84] = 180;
	Global_42615[84].f_1 = 181;
	Global_42615[84].f_2 = 4;
	Global_42615[84].f_3 = 0;
	Global_42615[84].f_10 = 0;
	Global_42615[84].f_11 = 3000;
	Global_42615[84].f_4 = 0;
	Global_42615[85] = 185;
	Global_42615[85].f_1 = 186;
	Global_42615[85].f_2 = 22;
	Global_42615[85].f_3 = 0;
	Global_42615[85].f_10 = 0;
	Global_42615[85].f_11 = 0;
	Global_42615[85].f_4 = 0;
	Global_42615[86] = 193;
	Global_42615[86].f_1 = 194;
	Global_42615[86].f_2 = 24;
	Global_42615[86].f_3 = 0;
	Global_42615[86].f_10 = 1;
	Global_42615[86].f_11 = 0;
	Global_42615[86].f_4 = 1;
	Global_42615[86].f_5[0] = 199;
	Global_42615[86].f_5[0].f_1 = 87;
	Global_42615[86].f_5[0].f_2 = 0;
	Global_42615[86].f_5[0].f_3 = -1;
	Global_42615[87] = 195;
	Global_42615[87].f_1 = 196;
	Global_42615[87].f_2 = 0;
	Global_42615[87].f_3 = 24;
	Global_42615[87].f_10 = 0;
	Global_42615[87].f_11 = 0;
	Global_42615[87].f_4 = 1;
	Global_42615[87].f_5[0] = 199;
	Global_42615[87].f_5[0].f_1 = 88;
	Global_42615[87].f_5[0].f_2 = 0;
	Global_42615[87].f_5[0].f_3 = -1;
	Global_42615[88] = 197;
	Global_42615[88].f_1 = 198;
	Global_42615[88].f_2 = 24;
	Global_42615[88].f_3 = 0;
	Global_42615[88].f_10 = 0;
	Global_42615[88].f_11 = 120000;
	Global_42615[88].f_4 = 0;
	Global_42615[89] = 200;
	Global_42615[89].f_1 = 201;
	Global_42615[89].f_2 = 24;
	Global_42615[89].f_3 = 0;
	Global_42615[89].f_10 = 1;
	Global_42615[89].f_11 = 0;
	Global_42615[89].f_4 = 1;
	Global_42615[89].f_5[0] = 199;
	Global_42615[89].f_5[0].f_1 = 90;
	Global_42615[89].f_5[0].f_2 = 0;
	Global_42615[89].f_5[0].f_3 = -1;
	Global_42615[90] = 202;
	Global_42615[90].f_1 = 203;
	Global_42615[90].f_2 = 0;
	Global_42615[90].f_3 = 24;
	Global_42615[90].f_10 = 0;
	Global_42615[90].f_11 = 0;
	Global_42615[90].f_4 = 1;
	Global_42615[90].f_5[0] = 199;
	Global_42615[90].f_5[0].f_1 = 91;
	Global_42615[90].f_5[0].f_2 = 0;
	Global_42615[90].f_5[0].f_3 = -1;
	Global_42615[91] = 204;
	Global_42615[91].f_1 = 205;
	Global_42615[91].f_2 = 24;
	Global_42615[91].f_3 = 0;
	Global_42615[91].f_10 = 0;
	Global_42615[91].f_11 = 120000;
	Global_42615[91].f_4 = 0;
	Global_42615[92] = 209;
	Global_42615[92].f_1 = 210;
	Global_42615[92].f_2 = 25;
	Global_42615[92].f_3 = 0;
	Global_42615[92].f_10 = 1;
	Global_42615[92].f_11 = 0;
	Global_42615[92].f_4 = 1;
	Global_42615[92].f_5[0] = 199;
	Global_42615[92].f_5[0].f_1 = 93;
	Global_42615[92].f_5[0].f_2 = 0;
	Global_42615[92].f_5[0].f_3 = -1;
	Global_42615[93] = 211;
	Global_42615[93].f_1 = 212;
	Global_42615[93].f_2 = 0;
	Global_42615[93].f_3 = 25;
	Global_42615[93].f_10 = 0;
	Global_42615[93].f_11 = 0;
	Global_42615[93].f_4 = 1;
	Global_42615[93].f_5[0] = 199;
	Global_42615[93].f_5[0].f_1 = 94;
	Global_42615[93].f_5[0].f_2 = 0;
	Global_42615[93].f_5[0].f_3 = -1;
	Global_42615[94] = 213;
	Global_42615[94].f_1 = 214;
	Global_42615[94].f_2 = 25;
	Global_42615[94].f_3 = 0;
	Global_42615[94].f_10 = 1;
	Global_42615[94].f_11 = 60000;
	Global_42615[94].f_4 = 1;
	Global_42615[94].f_5[0] = 199;
	Global_42615[94].f_5[0].f_1 = 95;
	Global_42615[94].f_5[0].f_2 = 0;
	Global_42615[94].f_5[0].f_3 = -1;
	Global_42615[95] = 215;
	Global_42615[95].f_1 = 216;
	Global_42615[95].f_2 = 0;
	Global_42615[95].f_3 = 25;
	Global_42615[95].f_10 = 0;
	Global_42615[95].f_11 = 0;
	Global_42615[95].f_4 = 1;
	Global_42615[95].f_5[0] = 199;
	Global_42615[95].f_5[0].f_1 = 96;
	Global_42615[95].f_5[0].f_2 = 0;
	Global_42615[95].f_5[0].f_3 = -1;
	Global_42615[96] = 217;
	Global_42615[96].f_1 = 218;
	Global_42615[96].f_2 = 25;
	Global_42615[96].f_3 = 0;
	Global_42615[96].f_10 = 0;
	Global_42615[96].f_11 = 60000;
	Global_42615[96].f_4 = 0;
	Global_42615[97] = 222;
	Global_42615[97].f_1 = 223;
	Global_42615[97].f_2 = 26;
	Global_42615[97].f_3 = 0;
	Global_42615[97].f_10 = 1;
	Global_42615[97].f_11 = 0;
	Global_42615[97].f_4 = 1;
	Global_42615[97].f_5[0] = 199;
	Global_42615[97].f_5[0].f_1 = 98;
	Global_42615[97].f_5[0].f_2 = 0;
	Global_42615[97].f_5[0].f_3 = -1;
	Global_42615[98] = 224;
	Global_42615[98].f_1 = 225;
	Global_42615[98].f_2 = 0;
	Global_42615[98].f_3 = 26;
	Global_42615[98].f_10 = 0;
	Global_42615[98].f_11 = 0;
	Global_42615[98].f_4 = 0;
	Global_42615[99] = 229;
	Global_42615[99].f_1 = 230;
	Global_42615[99].f_2 = 27;
	Global_42615[99].f_3 = 0;
	Global_42615[99].f_10 = 1;
	Global_42615[99].f_11 = 0;
	Global_42615[99].f_4 = 1;
	Global_42615[99].f_5[0] = 199;
	Global_42615[99].f_5[0].f_1 = 100;
	Global_42615[99].f_5[0].f_2 = 0;
	Global_42615[99].f_5[0].f_3 = -1;
	Global_42615[100] = 231;
	Global_42615[100].f_1 = 232;
	Global_42615[100].f_2 = 0;
	Global_42615[100].f_3 = 27;
	Global_42615[100].f_10 = 0;
	Global_42615[100].f_11 = 0;
	Global_42615[100].f_4 = 0;
	Global_42615[101] = 236;
	Global_42615[101].f_1 = 237;
	Global_42615[101].f_2 = 28;
	Global_42615[101].f_3 = 0;
	Global_42615[101].f_10 = 0;
	Global_42615[101].f_11 = 0;
	Global_42615[101].f_4 = 0;
	Global_42615[102] = 238;
	Global_42615[102].f_1 = 239;
	Global_42615[102].f_2 = 26;
	Global_42615[102].f_3 = 0;
	Global_42615[102].f_10 = 1;
	Global_42615[102].f_11 = 0;
	Global_42615[102].f_4 = 1;
	Global_42615[102].f_5[0] = 199;
	Global_42615[102].f_5[0].f_1 = 103;
	Global_42615[102].f_5[0].f_2 = 0;
	Global_42615[102].f_5[0].f_3 = -1;
	Global_42615[103] = 240;
	Global_42615[103].f_1 = 241;
	Global_42615[103].f_2 = 0;
	Global_42615[103].f_3 = 26;
	Global_42615[103].f_10 = 0;
	Global_42615[103].f_11 = 0;
	Global_42615[103].f_4 = 0;
	Global_42615[104] = 245;
	Global_42615[104].f_1 = 246;
	Global_42615[104].f_2 = 29;
	Global_42615[104].f_3 = 0;
	Global_42615[104].f_10 = 1;
	Global_42615[104].f_11 = 0;
	Global_42615[104].f_4 = 1;
	Global_42615[104].f_5[0] = 199;
	Global_42615[104].f_5[0].f_1 = 105;
	Global_42615[104].f_5[0].f_2 = 0;
	Global_42615[104].f_5[0].f_3 = -1;
	Global_42615[105] = 247;
	Global_42615[105].f_1 = 248;
	Global_42615[105].f_2 = 0;
	Global_42615[105].f_3 = 29;
	Global_42615[105].f_10 = 0;
	Global_42615[105].f_11 = 0;
	Global_42615[105].f_4 = 0;
	Global_42615[106] = 252;
	Global_42615[106].f_1 = 253;
	Global_42615[106].f_2 = 30;
	Global_42615[106].f_3 = 1;
	Global_42615[106].f_10 = 1;
	Global_42615[106].f_11 = 120000;
	Global_42615[106].f_4 = 1;
	Global_42615[106].f_5[0] = 199;
	Global_42615[106].f_5[0].f_1 = 107;
	Global_42615[106].f_5[0].f_2 = 0;
	Global_42615[106].f_5[0].f_3 = -1;
	Global_42615[107] = 254;
	Global_42615[107].f_1 = 255;
	Global_42615[107].f_2 = 1;
	Global_42615[107].f_3 = 30;
	Global_42615[107].f_10 = 0;
	Global_42615[107].f_11 = 0;
	Global_42615[107].f_4 = 1;
	Global_42615[107].f_5[0] = 199;
	Global_42615[107].f_5[0].f_1 = 108;
	Global_42615[107].f_5[0].f_2 = 0;
	Global_42615[107].f_5[0].f_3 = -1;
	Global_42615[108] = 256;
	Global_42615[108].f_1 = 257;
	Global_42615[108].f_2 = 30;
	Global_42615[108].f_3 = 1;
	Global_42615[108].f_10 = 1;
	Global_42615[108].f_11 = 120000;
	Global_42615[108].f_4 = 1;
	Global_42615[108].f_5[0] = 199;
	Global_42615[108].f_5[0].f_1 = 109;
	Global_42615[108].f_5[0].f_2 = 0;
	Global_42615[108].f_5[0].f_3 = -1;
	Global_42615[109] = 258;
	Global_42615[109].f_1 = 259;
	Global_42615[109].f_2 = 1;
	Global_42615[109].f_3 = 30;
	Global_42615[109].f_10 = 0;
	Global_42615[109].f_11 = 0;
	Global_42615[109].f_4 = 1;
	Global_42615[109].f_5[0] = 199;
	Global_42615[109].f_5[0].f_1 = 110;
	Global_42615[109].f_5[0].f_2 = 0;
	Global_42615[109].f_5[0].f_3 = -1;
	Global_42615[110] = 260;
	Global_42615[110].f_1 = 261;
	Global_42615[110].f_2 = 30;
	Global_42615[110].f_3 = 1;
	Global_42615[110].f_10 = 0;
	Global_42615[110].f_11 = 60000;
	Global_42615[110].f_4 = 0;
	Global_42615[111] = 265;
	Global_42615[111].f_1 = 266;
	Global_42615[111].f_2 = 31;
	Global_42615[111].f_3 = 1;
	Global_42615[111].f_10 = 1;
	Global_42615[111].f_11 = 0;
	Global_42615[111].f_4 = 1;
	Global_42615[111].f_5[0] = 199;
	Global_42615[111].f_5[0].f_1 = 112;
	Global_42615[111].f_5[0].f_2 = 0;
	Global_42615[111].f_5[0].f_3 = -1;
	Global_42615[112] = 267;
	Global_42615[112].f_1 = 268;
	Global_42615[112].f_2 = 1;
	Global_42615[112].f_3 = 31;
	Global_42615[112].f_10 = 0;
	Global_42615[112].f_11 = 0;
	Global_42615[112].f_4 = 0;
	Global_42615[113] = 272;
	Global_42615[113].f_1 = 273;
	Global_42615[113].f_2 = 32;
	Global_42615[113].f_3 = 1;
	Global_42615[113].f_10 = 1;
	Global_42615[113].f_11 = 0;
	Global_42615[113].f_4 = 1;
	Global_42615[113].f_5[0] = 199;
	Global_42615[113].f_5[0].f_1 = 114;
	Global_42615[113].f_5[0].f_2 = 0;
	Global_42615[113].f_5[0].f_3 = -1;
	Global_42615[114] = 274;
	Global_42615[114].f_1 = 275;
	Global_42615[114].f_2 = 1;
	Global_42615[114].f_3 = 32;
	Global_42615[114].f_10 = 0;
	Global_42615[114].f_11 = 0;
	Global_42615[114].f_4 = 1;
	Global_42615[114].f_5[0] = 199;
	Global_42615[114].f_5[0].f_1 = 115;
	Global_42615[114].f_5[0].f_2 = 0;
	Global_42615[114].f_5[0].f_3 = -1;
	Global_42615[115] = 276;
	Global_42615[115].f_1 = 277;
	Global_42615[115].f_2 = 32;
	Global_42615[115].f_3 = 1;
	Global_42615[115].f_10 = 0;
	Global_42615[115].f_11 = 30000;
	Global_42615[115].f_4 = 0;
	Global_42615[116] = 278;
	Global_42615[116].f_1 = 279;
	Global_42615[116].f_2 = 32;
	Global_42615[116].f_3 = 1;
	Global_42615[116].f_10 = 1;
	Global_42615[116].f_11 = 0;
	Global_42615[116].f_4 = 1;
	Global_42615[116].f_5[0] = 282;
	Global_42615[116].f_5[0].f_1 = 117;
	Global_42615[116].f_5[0].f_2 = 0;
	Global_42615[116].f_5[0].f_3 = -1;
	Global_42615[117] = 280;
	Global_42615[117].f_1 = 281;
	Global_42615[117].f_2 = 1;
	Global_42615[117].f_3 = 32;
	Global_42615[117].f_10 = 0;
	Global_42615[117].f_11 = 0;
	Global_42615[117].f_4 = 0;
	Global_42615[118] = 283;
	Global_42615[118].f_1 = 284;
	Global_42615[118].f_2 = 32;
	Global_42615[118].f_3 = 1;
	Global_42615[118].f_10 = 1;
	Global_42615[118].f_11 = 0;
	Global_42615[118].f_4 = 1;
	Global_42615[118].f_5[0] = 199;
	Global_42615[118].f_5[0].f_1 = 119;
	Global_42615[118].f_5[0].f_2 = 0;
	Global_42615[118].f_5[0].f_3 = -1;
	Global_42615[119] = 285;
	Global_42615[119].f_1 = 286;
	Global_42615[119].f_2 = 1;
	Global_42615[119].f_3 = 32;
	Global_42615[119].f_10 = 0;
	Global_42615[119].f_11 = 0;
	Global_42615[119].f_4 = 0;
	Global_42615[120] = 287;
	Global_42615[120].f_1 = 288;
	Global_42615[120].f_2 = 32;
	Global_42615[120].f_3 = 1;
	Global_42615[120].f_10 = 1;
	Global_42615[120].f_11 = 0;
	Global_42615[120].f_4 = 1;
	Global_42615[120].f_5[0] = 199;
	Global_42615[120].f_5[0].f_1 = 121;
	Global_42615[120].f_5[0].f_2 = 0;
	Global_42615[120].f_5[0].f_3 = -1;
	Global_42615[121] = 289;
	Global_42615[121].f_1 = 290;
	Global_42615[121].f_2 = 1;
	Global_42615[121].f_3 = 32;
	Global_42615[121].f_10 = 0;
	Global_42615[121].f_11 = 0;
	Global_42615[121].f_4 = 1;
	Global_42615[121].f_5[0] = 199;
	Global_42615[121].f_5[0].f_1 = 122;
	Global_42615[121].f_5[0].f_2 = 0;
	Global_42615[121].f_5[0].f_3 = -1;
	Global_42615[122] = 291;
	Global_42615[122].f_1 = 292;
	Global_42615[122].f_2 = 32;
	Global_42615[122].f_3 = 1;
	Global_42615[122].f_10 = 1;
	Global_42615[122].f_11 = 30000;
	Global_42615[122].f_4 = 1;
	Global_42615[122].f_5[0] = 199;
	Global_42615[122].f_5[0].f_1 = 123;
	Global_42615[122].f_5[0].f_2 = 0;
	Global_42615[122].f_5[0].f_3 = -1;
	Global_42615[123] = 293;
	Global_42615[123].f_1 = 294;
	Global_42615[123].f_2 = 1;
	Global_42615[123].f_3 = 32;
	Global_42615[123].f_10 = 0;
	Global_42615[123].f_11 = 0;
	Global_42615[123].f_4 = 0;
	Global_42615[124] = 295;
	Global_42615[124].f_1 = 296;
	Global_42615[124].f_2 = 27;
	Global_42615[124].f_3 = 1;
	Global_42615[124].f_10 = 1;
	Global_42615[124].f_11 = 0;
	Global_42615[124].f_4 = 1;
	Global_42615[124].f_5[0] = 199;
	Global_42615[124].f_5[0].f_1 = 125;
	Global_42615[124].f_5[0].f_2 = 0;
	Global_42615[124].f_5[0].f_3 = -1;
	Global_42615[125] = 297;
	Global_42615[125].f_1 = 298;
	Global_42615[125].f_2 = 1;
	Global_42615[125].f_3 = 27;
	Global_42615[125].f_10 = 0;
	Global_42615[125].f_11 = 0;
	Global_42615[125].f_4 = 0;
	Global_42615[126] = 299;
	Global_42615[126].f_1 = 300;
	Global_42615[126].f_2 = 2;
	Global_42615[126].f_3 = 1;
	Global_42615[126].f_10 = 1;
	Global_42615[126].f_11 = 0;
	Global_42615[126].f_4 = 1;
	Global_42615[126].f_5[0] = 199;
	Global_42615[126].f_5[0].f_1 = 127;
	Global_42615[126].f_5[0].f_2 = 0;
	Global_42615[126].f_5[0].f_3 = -1;
	Global_42615[127] = 301;
	Global_42615[127].f_1 = 302;
	Global_42615[127].f_2 = 1;
	Global_42615[127].f_3 = 2;
	Global_42615[127].f_10 = 0;
	Global_42615[127].f_11 = 0;
	Global_42615[127].f_4 = 1;
	Global_42615[127].f_5[0] = 199;
	Global_42615[127].f_5[0].f_1 = 128;
	Global_42615[127].f_5[0].f_2 = 0;
	Global_42615[127].f_5[0].f_3 = -1;
	Global_42615[128] = 303;
	Global_42615[128].f_1 = 304;
	Global_42615[128].f_2 = 2;
	Global_42615[128].f_3 = 1;
	Global_42615[128].f_10 = 1;
	Global_42615[128].f_11 = 60000;
	Global_42615[128].f_4 = 1;
	Global_42615[128].f_5[0] = 199;
	Global_42615[128].f_5[0].f_1 = 129;
	Global_42615[128].f_5[0].f_2 = 0;
	Global_42615[128].f_5[0].f_3 = -1;
	Global_42615[129] = 305;
	Global_42615[129].f_1 = 306;
	Global_42615[129].f_2 = 1;
	Global_42615[129].f_3 = 2;
	Global_42615[129].f_10 = 0;
	Global_42615[129].f_11 = 0;
	Global_42615[129].f_4 = 1;
	Global_42615[129].f_5[0] = 199;
	Global_42615[129].f_5[0].f_1 = 130;
	Global_42615[129].f_5[0].f_2 = 0;
	Global_42615[129].f_5[0].f_3 = -1;
	Global_42615[130] = 307;
	Global_42615[130].f_1 = 308;
	Global_42615[130].f_2 = 2;
	Global_42615[130].f_3 = 1;
	Global_42615[130].f_10 = 0;
	Global_42615[130].f_11 = 30000;
	Global_42615[130].f_4 = 0;
	Global_42615[131] = 309;
	Global_42615[131].f_1 = 310;
	Global_42615[131].f_2 = 0;
	Global_42615[131].f_3 = 1;
	Global_42615[131].f_10 = 1;
	Global_42615[131].f_11 = 0;
	Global_42615[131].f_4 = 1;
	Global_42615[131].f_5[0] = 199;
	Global_42615[131].f_5[0].f_1 = 132;
	Global_42615[131].f_5[0].f_2 = 0;
	Global_42615[131].f_5[0].f_3 = -1;
	Global_42615[132] = 311;
	Global_42615[132].f_1 = 312;
	Global_42615[132].f_2 = 1;
	Global_42615[132].f_3 = 0;
	Global_42615[132].f_10 = 0;
	Global_42615[132].f_11 = 0;
	Global_42615[132].f_4 = 1;
	Global_42615[132].f_5[0] = 199;
	Global_42615[132].f_5[0].f_1 = 133;
	Global_42615[132].f_5[0].f_2 = 0;
	Global_42615[132].f_5[0].f_3 = -1;
	Global_42615[133] = 313;
	Global_42615[133].f_1 = 314;
	Global_42615[133].f_2 = 0;
	Global_42615[133].f_3 = 1;
	Global_42615[133].f_10 = 0;
	Global_42615[133].f_11 = 25000;
	Global_42615[133].f_4 = 0;
	Global_42615[134] = 315;
	Global_42615[134].f_1 = 316;
	Global_42615[134].f_2 = 0;
	Global_42615[134].f_3 = 1;
	Global_42615[134].f_10 = 1;
	Global_42615[134].f_11 = 0;
	Global_42615[134].f_4 = 1;
	Global_42615[134].f_5[0] = 199;
	Global_42615[134].f_5[0].f_1 = 135;
	Global_42615[134].f_5[0].f_2 = 0;
	Global_42615[134].f_5[0].f_3 = -1;
	Global_42615[135] = 317;
	Global_42615[135].f_1 = 318;
	Global_42615[135].f_2 = 1;
	Global_42615[135].f_3 = 0;
	Global_42615[135].f_10 = 0;
	Global_42615[135].f_11 = 0;
	Global_42615[135].f_4 = 0;
	Global_42615[136] = 322;
	Global_42615[136].f_1 = 323;
	Global_42615[136].f_2 = 33;
	Global_42615[136].f_3 = 2;
	Global_42615[136].f_10 = 1;
	Global_42615[136].f_11 = 0;
	Global_42615[136].f_4 = 1;
	Global_42615[136].f_5[0] = 199;
	Global_42615[136].f_5[0].f_1 = 137;
	Global_42615[136].f_5[0].f_2 = 0;
	Global_42615[136].f_5[0].f_3 = -1;
	Global_42615[137] = 324;
	Global_42615[137].f_1 = 325;
	Global_42615[137].f_2 = 2;
	Global_42615[137].f_3 = 33;
	Global_42615[137].f_10 = 0;
	Global_42615[137].f_11 = 0;
	Global_42615[137].f_4 = 0;
	Global_42615[138] = 326;
	Global_42615[138].f_1 = 327;
	Global_42615[138].f_2 = 33;
	Global_42615[138].f_3 = 2;
	Global_42615[138].f_10 = 1;
	Global_42615[138].f_11 = 0;
	Global_42615[138].f_4 = 1;
	Global_42615[138].f_5[0] = 199;
	Global_42615[138].f_5[0].f_1 = 139;
	Global_42615[138].f_5[0].f_2 = 0;
	Global_42615[138].f_5[0].f_3 = -1;
	Global_42615[139] = 328;
	Global_42615[139].f_1 = 329;
	Global_42615[139].f_2 = 2;
	Global_42615[139].f_3 = 33;
	Global_42615[139].f_10 = 0;
	Global_42615[139].f_11 = 0;
	Global_42615[139].f_4 = 1;
	Global_42615[139].f_5[0] = 199;
	Global_42615[139].f_5[0].f_1 = -1;
	Global_42615[139].f_5[0].f_2 = 0;
	Global_42615[139].f_5[0].f_3 = -1;
	Global_42615[140] = 330;
	Global_42615[140].f_1 = 331;
	Global_42615[140].f_2 = 2;
	Global_42615[140].f_3 = 33;
	Global_42615[140].f_10 = 0;
	Global_42615[140].f_11 = 0;
	Global_42615[140].f_4 = 0;
	Global_42615[141] = 332;
	Global_42615[141].f_1 = 333;
	Global_42615[141].f_2 = 29;
	Global_42615[141].f_3 = 2;
	Global_42615[141].f_10 = 0;
	Global_42615[141].f_11 = 0;
	Global_42615[141].f_4 = 1;
	Global_42615[141].f_5[0] = 199;
	Global_42615[141].f_5[0].f_1 = 142;
	Global_42615[141].f_5[0].f_2 = 0;
	Global_42615[141].f_5[0].f_3 = -1;
	Global_42615[142] = 334;
	Global_42615[142].f_1 = 335;
	Global_42615[142].f_2 = 2;
	Global_42615[142].f_3 = 29;
	Global_42615[142].f_10 = 0;
	Global_42615[142].f_11 = 0;
	Global_42615[142].f_4 = 0;
	Global_42615[143] = 336;
	Global_42615[143].f_1 = 337;
	Global_42615[143].f_2 = 3;
	Global_42615[143].f_3 = 2;
	Global_42615[143].f_10 = 0;
	Global_42615[143].f_11 = 0;
	Global_42615[143].f_4 = 1;
	Global_42615[143].f_5[0] = 199;
	Global_42615[143].f_5[0].f_1 = 144;
	Global_42615[143].f_5[0].f_2 = 0;
	Global_42615[143].f_5[0].f_3 = -1;
	Global_42615[144] = 338;
	Global_42615[144].f_1 = 339;
	Global_42615[144].f_2 = 2;
	Global_42615[144].f_3 = 3;
	Global_42615[144].f_10 = 0;
	Global_42615[144].f_11 = 0;
	Global_42615[144].f_4 = 0;
	Global_42615[145] = 343;
	Global_42615[145].f_1 = 344;
	Global_42615[145].f_2 = 34;
	Global_42615[145].f_3 = 2;
	Global_42615[145].f_10 = 0;
	Global_42615[145].f_11 = 0;
	Global_42615[145].f_4 = 1;
	Global_42615[145].f_5[0] = 199;
	Global_42615[145].f_5[0].f_1 = 146;
	Global_42615[145].f_5[0].f_2 = 0;
	Global_42615[145].f_5[0].f_3 = -1;
	Global_42615[146] = 345;
	Global_42615[146].f_1 = 346;
	Global_42615[146].f_2 = 2;
	Global_42615[146].f_3 = 34;
	Global_42615[146].f_10 = 0;
	Global_42615[146].f_11 = 0;
	Global_42615[146].f_4 = 0;
	Global_42615[147] = 319;
	Global_42615[147].f_1 = 347;
	Global_42615[147].f_2 = 26;
	Global_42615[147].f_3 = 2;
	Global_42615[147].f_10 = 0;
	Global_42615[147].f_11 = 0;
	Global_42615[147].f_4 = 0;
	Global_42615[148] = 351;
	Global_42615[148].f_1 = 352;
	Global_42615[148].f_2 = 35;
	Global_42615[148].f_3 = 2;
	Global_42615[148].f_10 = 0;
	Global_42615[148].f_11 = 0;
	Global_42615[148].f_4 = 0;
	Global_42615[149] = 351;
	Global_42615[149].f_1 = 352;
	Global_42615[149].f_2 = 35;
	Global_42615[149].f_3 = 0;
	Global_42615[149].f_10 = 0;
	Global_42615[149].f_11 = 0;
	Global_42615[149].f_4 = 0;
	Global_42615[150] = 351;
	Global_42615[150].f_1 = 352;
	Global_42615[150].f_2 = 35;
	Global_42615[150].f_3 = 1;
	Global_42615[150].f_10 = 0;
	Global_42615[150].f_11 = 0;
	Global_42615[150].f_4 = 0;
	Global_42615[151] = 355;
	Global_42615[151].f_1 = 356;
	Global_42615[151].f_2 = 36;
	Global_42615[151].f_3 = 2;
	Global_42615[151].f_10 = 0;
	Global_42615[151].f_11 = 0;
	Global_42615[151].f_4 = 0;
	Global_42615[152] = 355;
	Global_42615[152].f_1 = 356;
	Global_42615[152].f_2 = 36;
	Global_42615[152].f_3 = 0;
	Global_42615[152].f_10 = 0;
	Global_42615[152].f_11 = 0;
	Global_42615[152].f_4 = 0;
	Global_42615[153] = 355;
	Global_42615[153].f_1 = 356;
	Global_42615[153].f_2 = 36;
	Global_42615[153].f_3 = 1;
	Global_42615[153].f_10 = 0;
	Global_42615[153].f_11 = 0;
	Global_42615[153].f_4 = 0;
	Global_42615[154] = 363;
	Global_42615[154].f_1 = 364;
	Global_42615[154].f_2 = 38;
	Global_42615[154].f_3 = 2;
	Global_42615[154].f_10 = 0;
	Global_42615[154].f_11 = 0;
	Global_42615[154].f_4 = 0;
	Global_42615[155] = 365;
	Global_42615[155].f_1 = 366;
	Global_42615[155].f_2 = 11;
	Global_42615[155].f_3 = 0;
	Global_42615[155].f_10 = 0;
	Global_42615[155].f_11 = 0;
	Global_42615[155].f_4 = 0;
	Global_42615[156] = 365;
	Global_42615[156].f_1 = 366;
	Global_42615[156].f_2 = 11;
	Global_42615[156].f_3 = 1;
	Global_42615[156].f_10 = 0;
	Global_42615[156].f_11 = 0;
	Global_42615[156].f_4 = 0;
	Global_42615[157] = 365;
	Global_42615[157].f_1 = 366;
	Global_42615[157].f_2 = 11;
	Global_42615[157].f_3 = 2;
	Global_42615[157].f_10 = 0;
	Global_42615[157].f_11 = 0;
	Global_42615[157].f_4 = 0;
	Global_42615[158] = 367;
	Global_42615[158].f_1 = 368;
	Global_42615[158].f_2 = 29;
	Global_42615[158].f_3 = 2;
	Global_42615[158].f_10 = 0;
	Global_42615[158].f_11 = 0;
	Global_42615[158].f_4 = 0;
	Global_42615[159] = 372;
	Global_42615[159].f_1 = 373;
	Global_42615[159].f_2 = 39;
	Global_42615[159].f_3 = 0;
	Global_42615[159].f_10 = 0;
	Global_42615[159].f_11 = 0;
	Global_42615[159].f_4 = 0;
	Global_42615[160] = 374;
	Global_42615[160].f_1 = 375;
	Global_42615[160].f_2 = 39;
	Global_42615[160].f_3 = 1;
	Global_42615[160].f_10 = 0;
	Global_42615[160].f_11 = 0;
	Global_42615[160].f_4 = 0;
	Global_42615[161] = 417;
	Global_42615[161].f_1 = 418;
	Global_42615[161].f_2 = 40;
	Global_42615[161].f_3 = 1;
	Global_42615[161].f_10 = 0;
	Global_42615[161].f_11 = 0;
	Global_42615[161].f_4 = 0;
	Global_42615[162] = 419;
	Global_42615[162].f_1 = 420;
	Global_42615[162].f_2 = 43;
	Global_42615[162].f_3 = 0;
	Global_42615[162].f_10 = 0;
	Global_42615[162].f_11 = 0;
	Global_42615[162].f_4 = 0;
	Global_42615[163] = 421;
	Global_42615[163].f_1 = 422;
	Global_42615[163].f_2 = 43;
	Global_42615[163].f_3 = 2;
	Global_42615[163].f_10 = 0;
	Global_42615[163].f_11 = 0;
	Global_42615[163].f_4 = 0;
	Global_42615[164] = 423;
	Global_42615[164].f_1 = 424;
	Global_42615[164].f_2 = 43;
	Global_42615[164].f_3 = 1;
	Global_42615[164].f_10 = 0;
	Global_42615[164].f_11 = 0;
	Global_42615[164].f_4 = 0;
	Global_42615[165] = 425;
	Global_42615[165].f_1 = 426;
	Global_42615[165].f_2 = 44;
	Global_42615[165].f_3 = 1;
	Global_42615[165].f_10 = 0;
	Global_42615[165].f_11 = 0;
	Global_42615[165].f_4 = 0;
	Global_42615[166] = 427;
	Global_42615[166].f_1 = 428;
	Global_42615[166].f_2 = 45;
	Global_42615[166].f_3 = 0;
	Global_42615[166].f_10 = 0;
	Global_42615[166].f_11 = 0;
	Global_42615[166].f_4 = 0;
	Global_42615[167] = 429;
	Global_42615[167].f_1 = 430;
	Global_42615[167].f_2 = 46;
	Global_42615[167].f_3 = 0;
	Global_42615[167].f_10 = 0;
	Global_42615[167].f_11 = 0;
	Global_42615[167].f_4 = 0;
	Global_42615[168] = 431;
	Global_42615[168].f_1 = 432;
	Global_42615[168].f_2 = 49;
	Global_42615[168].f_3 = 0;
	Global_42615[168].f_10 = 0;
	Global_42615[168].f_11 = 0;
	Global_42615[168].f_4 = 0;
	Global_42615[169] = 433;
	Global_42615[169].f_1 = 434;
	Global_42615[169].f_2 = 49;
	Global_42615[169].f_3 = 2;
	Global_42615[169].f_10 = 0;
	Global_42615[169].f_11 = 0;
	Global_42615[169].f_4 = 0;
	Global_42615[170] = 435;
	Global_42615[170].f_1 = 436;
	Global_42615[170].f_2 = 49;
	Global_42615[170].f_3 = 1;
	Global_42615[170].f_10 = 0;
	Global_42615[170].f_11 = 0;
	Global_42615[170].f_4 = 0;
	Global_42615[171] = 437;
	Global_42615[171].f_1 = 438;
	Global_42615[171].f_2 = 50;
	Global_42615[171].f_3 = 1;
	Global_42615[171].f_10 = 0;
	Global_42615[171].f_11 = 0;
	Global_42615[171].f_4 = 0;
	Global_42615[172] = 439;
	Global_42615[172].f_1 = 440;
	Global_42615[172].f_2 = 51;
	Global_42615[172].f_3 = 0;
	Global_42615[172].f_10 = 0;
	Global_42615[172].f_11 = 0;
	Global_42615[172].f_4 = 0;
	Global_42615[173] = 441;
	Global_42615[173].f_1 = 442;
	Global_42615[173].f_2 = 51;
	Global_42615[173].f_3 = 2;
	Global_42615[173].f_10 = 0;
	Global_42615[173].f_11 = 0;
	Global_42615[173].f_4 = 0;
	Global_42615[174] = 443;
	Global_42615[174].f_1 = 444;
	Global_42615[174].f_2 = 51;
	Global_42615[174].f_3 = 1;
	Global_42615[174].f_10 = 0;
	Global_42615[174].f_11 = 0;
	Global_42615[174].f_4 = 0;
	Global_42615[175] = 445;
	Global_42615[175].f_1 = 446;
	Global_42615[175].f_2 = 52;
	Global_42615[175].f_3 = 0;
	Global_42615[175].f_10 = 0;
	Global_42615[175].f_11 = 0;
	Global_42615[175].f_4 = 0;
	Global_42615[176] = 447;
	Global_42615[176].f_1 = 448;
	Global_42615[176].f_2 = 52;
	Global_42615[176].f_3 = 2;
	Global_42615[176].f_10 = 0;
	Global_42615[176].f_11 = 0;
	Global_42615[176].f_4 = 0;
	Global_42615[177] = 449;
	Global_42615[177].f_1 = 450;
	Global_42615[177].f_2 = 52;
	Global_42615[177].f_3 = 1;
	Global_42615[177].f_10 = 0;
	Global_42615[177].f_11 = 0;
	Global_42615[177].f_4 = 0;
	Global_42615[178] = 451;
	Global_42615[178].f_1 = 452;
	Global_42615[178].f_2 = 53;
	Global_42615[178].f_3 = 2;
	Global_42615[178].f_10 = 0;
	Global_42615[178].f_11 = 0;
	Global_42615[178].f_4 = 0;
	Global_42615[179] = 453;
	Global_42615[179].f_1 = 454;
	Global_42615[179].f_2 = 53;
	Global_42615[179].f_3 = 0;
	Global_42615[179].f_10 = 0;
	Global_42615[179].f_11 = 0;
	Global_42615[179].f_4 = 0;
	Global_42615[180] = 455;
	Global_42615[180].f_1 = 456;
	Global_42615[180].f_2 = 53;
	Global_42615[180].f_3 = 1;
	Global_42615[180].f_10 = 0;
	Global_42615[180].f_11 = 0;
	Global_42615[180].f_4 = 0;
	Global_42615[181] = 457;
	Global_42615[181].f_1 = 458;
	Global_42615[181].f_2 = 4;
	Global_42615[181].f_3 = 0;
	Global_42615[181].f_10 = 0;
	Global_42615[181].f_11 = 0;
	Global_42615[181].f_4 = 0;
	Global_42615[182] = 459;
	Global_42615[182].f_1 = 460;
	Global_42615[182].f_2 = 37;
	Global_42615[182].f_3 = 0;
	Global_42615[182].f_10 = 0;
	Global_42615[182].f_11 = 0;
	Global_42615[182].f_4 = 0;
	Global_42615[183] = 461;
	Global_42615[183].f_1 = 462;
	Global_42615[183].f_2 = 37;
	Global_42615[183].f_3 = 2;
	Global_42615[183].f_10 = 0;
	Global_42615[183].f_11 = 0;
	Global_42615[183].f_4 = 0;
	Global_42615[184] = 463;
	Global_42615[184].f_1 = 464;
	Global_42615[184].f_2 = 37;
	Global_42615[184].f_3 = 1;
	Global_42615[184].f_10 = 0;
	Global_42615[184].f_11 = 0;
	Global_42615[184].f_4 = 0;
	Global_42615[185] = 471;
	Global_42615[185].f_1 = 472;
	Global_42615[185].f_2 = 54;
	Global_42615[185].f_3 = 1;
	Global_42615[185].f_10 = 0;
	Global_42615[185].f_11 = 0;
	Global_42615[185].f_4 = 0;
	Global_42615[186] = 473;
	Global_42615[186].f_1 = 474;
	Global_42615[186].f_2 = 54;
	Global_42615[186].f_3 = 0;
	Global_42615[186].f_10 = 0;
	Global_42615[186].f_11 = 0;
	Global_42615[186].f_4 = 0;
	Global_42615[187] = 475;
	Global_42615[187].f_1 = 476;
	Global_42615[187].f_2 = 55;
	Global_42615[187].f_3 = 1;
	Global_42615[187].f_10 = 0;
	Global_42615[187].f_11 = 0;
	Global_42615[187].f_4 = 0;
	Global_42615[188] = 477;
	Global_42615[188].f_1 = 478;
	Global_42615[188].f_2 = 54;
	Global_42615[188].f_3 = 2;
	Global_42615[188].f_10 = 0;
	Global_42615[188].f_11 = 0;
	Global_42615[188].f_4 = 0;
	Global_42615[189] = 479;
	Global_42615[189].f_1 = 480;
	Global_42615[189].f_2 = 55;
	Global_42615[189].f_3 = 0;
	Global_42615[189].f_10 = 0;
	Global_42615[189].f_11 = 0;
	Global_42615[189].f_4 = 0;
	Global_42615[190] = 481;
	Global_42615[190].f_1 = 482;
	Global_42615[190].f_2 = 55;
	Global_42615[190].f_3 = 2;
	Global_42615[190].f_10 = 0;
	Global_42615[190].f_11 = 0;
	Global_42615[190].f_4 = 0;
	Global_42615[191] = 483;
	Global_42615[191].f_1 = 484;
	Global_42615[191].f_2 = 12;
	Global_42615[191].f_3 = 0;
	Global_42615[191].f_10 = 0;
	Global_42615[191].f_11 = 0;
	Global_42615[191].f_4 = 0;
	Global_42615[192] = 485;
	Global_42615[192].f_1 = 486;
	Global_42615[192].f_2 = 12;
	Global_42615[192].f_3 = 1;
	Global_42615[192].f_10 = 0;
	Global_42615[192].f_11 = 0;
	Global_42615[192].f_4 = 0;
	Global_42615[193] = 487;
	Global_42615[193].f_1 = 488;
	Global_42615[193].f_2 = 12;
	Global_42615[193].f_3 = 2;
	Global_42615[193].f_10 = 0;
	Global_42615[193].f_11 = 0;
	Global_42615[193].f_4 = 0;
	Global_42615[194] = 510;
	Global_42615[194].f_1 = 511;
	Global_42615[194].f_2 = 56;
	Global_42615[194].f_3 = 0;
	Global_42615[194].f_10 = 0;
	Global_42615[194].f_11 = 0;
	Global_42615[194].f_4 = 0;
	Global_42615[195] = 512;
	Global_42615[195].f_1 = 513;
	Global_42615[195].f_2 = 56;
	Global_42615[195].f_3 = 0;
	Global_42615[195].f_10 = 0;
	Global_42615[195].f_11 = 0;
	Global_42615[195].f_4 = 0;
	Global_42615[196] = 514;
	Global_42615[196].f_1 = 515;
	Global_42615[196].f_2 = 56;
	Global_42615[196].f_3 = 0;
	Global_42615[196].f_10 = 0;
	Global_42615[196].f_11 = 0;
	Global_42615[196].f_4 = 0;
	Global_42615[197] = 516;
	Global_42615[197].f_1 = 517;
	Global_42615[197].f_2 = 56;
	Global_42615[197].f_3 = 0;
	Global_42615[197].f_10 = 0;
	Global_42615[197].f_11 = 0;
	Global_42615[197].f_4 = 0;
	Global_42615[198] = 518;
	Global_42615[198].f_1 = 519;
	Global_42615[198].f_2 = 56;
	Global_42615[198].f_3 = 0;
	Global_42615[198].f_10 = 0;
	Global_42615[198].f_11 = 0;
	Global_42615[198].f_4 = 0;
	Global_42615[199] = 520;
	Global_42615[199].f_1 = 521;
	Global_42615[199].f_2 = 57;
	Global_42615[199].f_3 = 0;
	Global_42615[199].f_10 = 1;
	Global_42615[199].f_11 = 60000;
	Global_42615[199].f_4 = 1;
	Global_42615[199].f_5[0] = 536;
	Global_42615[199].f_5[0].f_1 = 200;
	Global_42615[199].f_5[0].f_2 = 0;
	Global_42615[199].f_5[0].f_3 = -1;
	Global_42615[200] = 522;
	Global_42615[200].f_1 = 523;
	Global_42615[200].f_2 = 0;
	Global_42615[200].f_3 = 57;
	Global_42615[200].f_10 = 0;
	Global_42615[200].f_11 = 0;
	Global_42615[200].f_4 = 1;
	Global_42615[200].f_5[0] = 537;
	Global_42615[200].f_5[0].f_1 = 201;
	Global_42615[200].f_5[0].f_2 = 0;
	Global_42615[200].f_5[0].f_3 = -1;
	Global_42615[201] = 524;
	Global_42615[201].f_1 = 525;
	Global_42615[201].f_2 = 57;
	Global_42615[201].f_3 = 0;
	Global_42615[201].f_10 = 1;
	Global_42615[201].f_11 = 60000;
	Global_42615[201].f_4 = 1;
	Global_42615[201].f_5[0] = 538;
	Global_42615[201].f_5[0].f_1 = 202;
	Global_42615[201].f_5[0].f_2 = 0;
	Global_42615[201].f_5[0].f_3 = -1;
	Global_42615[202] = 526;
	Global_42615[202].f_1 = 527;
	Global_42615[202].f_2 = 0;
	Global_42615[202].f_3 = 57;
	Global_42615[202].f_10 = 0;
	Global_42615[202].f_11 = 0;
	Global_42615[202].f_4 = 1;
	Global_42615[202].f_5[0] = 539;
	Global_42615[202].f_5[0].f_1 = 203;
	Global_42615[202].f_5[0].f_2 = 0;
	Global_42615[202].f_5[0].f_3 = -1;
	Global_42615[203] = 528;
	Global_42615[203].f_1 = 529;
	Global_42615[203].f_2 = 57;
	Global_42615[203].f_3 = 0;
	Global_42615[203].f_10 = 1;
	Global_42615[203].f_11 = 60000;
	Global_42615[203].f_4 = 1;
	Global_42615[203].f_5[0] = 540;
	Global_42615[203].f_5[0].f_1 = 204;
	Global_42615[203].f_5[0].f_2 = 0;
	Global_42615[203].f_5[0].f_3 = -1;
	Global_42615[204] = 530;
	Global_42615[204].f_1 = 531;
	Global_42615[204].f_2 = 0;
	Global_42615[204].f_3 = 57;
	Global_42615[204].f_10 = 0;
	Global_42615[204].f_11 = 0;
	Global_42615[204].f_4 = 1;
	Global_42615[204].f_5[0] = 541;
	Global_42615[204].f_5[0].f_1 = 205;
	Global_42615[204].f_5[0].f_2 = 0;
	Global_42615[204].f_5[0].f_3 = -1;
	Global_42615[205] = 532;
	Global_42615[205].f_1 = 533;
	Global_42615[205].f_2 = 57;
	Global_42615[205].f_3 = 0;
	Global_42615[205].f_10 = 1;
	Global_42615[205].f_11 = 60000;
	Global_42615[205].f_4 = 1;
	Global_42615[205].f_5[0] = 542;
	Global_42615[205].f_5[0].f_1 = 206;
	Global_42615[205].f_5[0].f_2 = 0;
	Global_42615[205].f_5[0].f_3 = -1;
	Global_42615[206] = 534;
	Global_42615[206].f_1 = 535;
	Global_42615[206].f_2 = 0;
	Global_42615[206].f_3 = 57;
	Global_42615[206].f_10 = 0;
	Global_42615[206].f_11 = 0;
	Global_42615[206].f_4 = 0;
	Global_42615[207] = 543;
	Global_42615[207].f_1 = 544;
	Global_42615[207].f_2 = 58;
	Global_42615[207].f_3 = 0;
	Global_42615[207].f_10 = 1;
	Global_42615[207].f_11 = 60000;
	Global_42615[207].f_4 = 1;
	Global_42615[207].f_5[0] = 557;
	Global_42615[207].f_5[0].f_1 = 208;
	Global_42615[207].f_5[0].f_2 = 0;
	Global_42615[207].f_5[0].f_3 = -1;
	Global_42615[208] = 545;
	Global_42615[208].f_1 = 546;
	Global_42615[208].f_2 = 0;
	Global_42615[208].f_3 = 58;
	Global_42615[208].f_10 = 0;
	Global_42615[208].f_11 = 0;
	Global_42615[208].f_4 = 1;
	Global_42615[208].f_5[0] = 558;
	Global_42615[208].f_5[0].f_1 = 209;
	Global_42615[208].f_5[0].f_2 = 0;
	Global_42615[208].f_5[0].f_3 = -1;
	Global_42615[209] = 547;
	Global_42615[209].f_1 = 548;
	Global_42615[209].f_2 = 58;
	Global_42615[209].f_3 = 0;
	Global_42615[209].f_10 = 1;
	Global_42615[209].f_11 = 60000;
	Global_42615[209].f_4 = 1;
	Global_42615[209].f_5[0] = 559;
	Global_42615[209].f_5[0].f_1 = 210;
	Global_42615[209].f_5[0].f_2 = 0;
	Global_42615[209].f_5[0].f_3 = -1;
	Global_42615[210] = 549;
	Global_42615[210].f_1 = 550;
	Global_42615[210].f_2 = 0;
	Global_42615[210].f_3 = 58;
	Global_42615[210].f_10 = 0;
	Global_42615[210].f_11 = 0;
	Global_42615[210].f_4 = 1;
	Global_42615[210].f_5[0] = 560;
	Global_42615[210].f_5[0].f_1 = 211;
	Global_42615[210].f_5[0].f_2 = 0;
	Global_42615[210].f_5[0].f_3 = -1;
	Global_42615[211] = 551;
	Global_42615[211].f_1 = 552;
	Global_42615[211].f_2 = 58;
	Global_42615[211].f_3 = 0;
	Global_42615[211].f_10 = 1;
	Global_42615[211].f_11 = 60000;
	Global_42615[211].f_4 = 1;
	Global_42615[211].f_5[0] = 561;
	Global_42615[211].f_5[0].f_1 = 212;
	Global_42615[211].f_5[0].f_2 = 0;
	Global_42615[211].f_5[0].f_3 = -1;
	Global_42615[212] = 553;
	Global_42615[212].f_1 = 554;
	Global_42615[212].f_2 = 0;
	Global_42615[212].f_3 = 58;
	Global_42615[212].f_10 = 0;
	Global_42615[212].f_11 = 0;
	Global_42615[212].f_4 = 1;
	Global_42615[212].f_5[0] = 562;
	Global_42615[212].f_5[0].f_1 = -1;
	Global_42615[212].f_5[0].f_2 = 0;
	Global_42615[212].f_5[0].f_3 = -1;
	Global_42615[213] = 555;
	Global_42615[213].f_1 = 556;
	Global_42615[213].f_2 = 58;
	Global_42615[213].f_3 = 0;
	Global_42615[213].f_10 = 1;
	Global_42615[213].f_11 = 60000;
	Global_42615[213].f_4 = 0;
	Global_42615[214] = 563;
	Global_42615[214].f_1 = 564;
	Global_42615[214].f_2 = 59;
	Global_42615[214].f_3 = 0;
	Global_42615[214].f_10 = 1;
	Global_42615[214].f_11 = 60000;
	Global_42615[214].f_4 = 1;
	Global_42615[214].f_5[0] = 579;
	Global_42615[214].f_5[0].f_1 = 215;
	Global_42615[214].f_5[0].f_2 = 0;
	Global_42615[214].f_5[0].f_3 = -1;
	Global_42615[215] = 565;
	Global_42615[215].f_1 = 566;
	Global_42615[215].f_2 = 0;
	Global_42615[215].f_3 = 59;
	Global_42615[215].f_10 = 0;
	Global_42615[215].f_11 = 0;
	Global_42615[215].f_4 = 1;
	Global_42615[215].f_5[0] = 580;
	Global_42615[215].f_5[0].f_1 = 216;
	Global_42615[215].f_5[0].f_2 = 0;
	Global_42615[215].f_5[0].f_3 = -1;
	Global_42615[216] = 567;
	Global_42615[216].f_1 = 568;
	Global_42615[216].f_2 = 59;
	Global_42615[216].f_3 = 0;
	Global_42615[216].f_10 = 1;
	Global_42615[216].f_11 = 60000;
	Global_42615[216].f_4 = 1;
	Global_42615[216].f_5[0] = 581;
	Global_42615[216].f_5[0].f_1 = 217;
	Global_42615[216].f_5[0].f_2 = 0;
	Global_42615[216].f_5[0].f_3 = -1;
	Global_42615[217] = 569;
	Global_42615[217].f_1 = 570;
	Global_42615[217].f_2 = 0;
	Global_42615[217].f_3 = 59;
	Global_42615[217].f_10 = 0;
	Global_42615[217].f_11 = 0;
	Global_42615[217].f_4 = 1;
	Global_42615[217].f_5[0] = 582;
	Global_42615[217].f_5[0].f_1 = 218;
	Global_42615[217].f_5[0].f_2 = 0;
	Global_42615[217].f_5[0].f_3 = -1;
	Global_42615[218] = 571;
	Global_42615[218].f_1 = 572;
	Global_42615[218].f_2 = 59;
	Global_42615[218].f_3 = 0;
	Global_42615[218].f_10 = 1;
	Global_42615[218].f_11 = 60000;
	Global_42615[218].f_4 = 1;
	Global_42615[218].f_5[0] = 583;
	Global_42615[218].f_5[0].f_1 = 219;
	Global_42615[218].f_5[0].f_2 = 0;
	Global_42615[218].f_5[0].f_3 = -1;
	Global_42615[219] = 573;
	Global_42615[219].f_1 = 574;
	Global_42615[219].f_2 = 0;
	Global_42615[219].f_3 = 59;
	Global_42615[219].f_10 = 0;
	Global_42615[219].f_11 = 0;
	Global_42615[219].f_4 = 1;
	Global_42615[219].f_5[0] = 584;
	Global_42615[219].f_5[0].f_1 = 220;
	Global_42615[219].f_5[0].f_2 = 0;
	Global_42615[219].f_5[0].f_3 = -1;
	Global_42615[220] = 575;
	Global_42615[220].f_1 = 576;
	Global_42615[220].f_2 = 59;
	Global_42615[220].f_3 = 0;
	Global_42615[220].f_10 = 1;
	Global_42615[220].f_11 = 60000;
	Global_42615[220].f_4 = 1;
	Global_42615[220].f_5[0] = 585;
	Global_42615[220].f_5[0].f_1 = 221;
	Global_42615[220].f_5[0].f_2 = 0;
	Global_42615[220].f_5[0].f_3 = -1;
	Global_42615[221] = 577;
	Global_42615[221].f_1 = 578;
	Global_42615[221].f_2 = 0;
	Global_42615[221].f_3 = 59;
	Global_42615[221].f_10 = 0;
	Global_42615[221].f_11 = 0;
	Global_42615[221].f_4 = 0;
	Global_42615[222] = 586;
	Global_42615[222].f_1 = 587;
	Global_42615[222].f_2 = 60;
	Global_42615[222].f_3 = 2;
	Global_42615[222].f_10 = 1;
	Global_42615[222].f_11 = 60000;
	Global_42615[222].f_4 = 1;
	Global_42615[222].f_5[0] = 600;
	Global_42615[222].f_5[0].f_1 = 223;
	Global_42615[222].f_5[0].f_2 = 0;
	Global_42615[222].f_5[0].f_3 = -1;
	Global_42615[223] = 588;
	Global_42615[223].f_1 = 589;
	Global_42615[223].f_2 = 2;
	Global_42615[223].f_3 = 60;
	Global_42615[223].f_10 = 0;
	Global_42615[223].f_11 = 0;
	Global_42615[223].f_4 = 1;
	Global_42615[223].f_5[0] = 601;
	Global_42615[223].f_5[0].f_1 = 224;
	Global_42615[223].f_5[0].f_2 = 0;
	Global_42615[223].f_5[0].f_3 = -1;
	Global_42615[224] = 590;
	Global_42615[224].f_1 = 591;
	Global_42615[224].f_2 = 60;
	Global_42615[224].f_3 = 2;
	Global_42615[224].f_10 = 1;
	Global_42615[224].f_11 = 60000;
	Global_42615[224].f_4 = 1;
	Global_42615[224].f_5[0] = 602;
	Global_42615[224].f_5[0].f_1 = 225;
	Global_42615[224].f_5[0].f_2 = 0;
	Global_42615[224].f_5[0].f_3 = -1;
	Global_42615[225] = 592;
	Global_42615[225].f_1 = 593;
	Global_42615[225].f_2 = 2;
	Global_42615[225].f_3 = 60;
	Global_42615[225].f_10 = 0;
	Global_42615[225].f_11 = 0;
	Global_42615[225].f_4 = 1;
	Global_42615[225].f_5[0] = 603;
	Global_42615[225].f_5[0].f_1 = 226;
	Global_42615[225].f_5[0].f_2 = 0;
	Global_42615[225].f_5[0].f_3 = -1;
	Global_42615[226] = 594;
	Global_42615[226].f_1 = 595;
	Global_42615[226].f_2 = 60;
	Global_42615[226].f_3 = 2;
	Global_42615[226].f_10 = 1;
	Global_42615[226].f_11 = 60000;
	Global_42615[226].f_4 = 1;
	Global_42615[226].f_5[0] = 604;
	Global_42615[226].f_5[0].f_1 = 227;
	Global_42615[226].f_5[0].f_2 = 0;
	Global_42615[226].f_5[0].f_3 = -1;
	Global_42615[227] = 596;
	Global_42615[227].f_1 = 597;
	Global_42615[227].f_2 = 2;
	Global_42615[227].f_3 = 60;
	Global_42615[227].f_10 = 1;
	Global_42615[227].f_11 = 60000;
	Global_42615[227].f_4 = 1;
	Global_42615[227].f_5[0] = 605;
	Global_42615[227].f_5[0].f_1 = 228;
	Global_42615[227].f_5[0].f_2 = 0;
	Global_42615[227].f_5[0].f_3 = -1;
	Global_42615[228] = 598;
	Global_42615[228].f_1 = 599;
	Global_42615[228].f_2 = 2;
	Global_42615[228].f_3 = 60;
	Global_42615[228].f_10 = 0;
	Global_42615[228].f_11 = 0;
	Global_42615[228].f_4 = 0;
	Global_42615[229] = 606;
	Global_42615[229].f_1 = 607;
	Global_42615[229].f_2 = 61;
	Global_42615[229].f_3 = 2;
	Global_42615[229].f_10 = 1;
	Global_42615[229].f_11 = 60000;
	Global_42615[229].f_4 = 1;
	Global_42615[229].f_5[0] = 610;
	Global_42615[229].f_5[0].f_1 = 230;
	Global_42615[229].f_5[0].f_2 = 0;
	Global_42615[229].f_5[0].f_3 = -1;
	Global_42615[230] = 608;
	Global_42615[230].f_1 = 609;
	Global_42615[230].f_2 = 2;
	Global_42615[230].f_3 = 61;
	Global_42615[230].f_10 = 0;
	Global_42615[230].f_11 = 0;
	Global_42615[230].f_4 = 1;
	Global_42615[230].f_5[0] = 617;
	Global_42615[230].f_5[0].f_1 = 231;
	Global_42615[230].f_5[0].f_2 = 0;
	Global_42615[230].f_5[0].f_3 = -1;
	Global_42615[231] = 611;
	Global_42615[231].f_1 = 612;
	Global_42615[231].f_2 = 61;
	Global_42615[231].f_3 = 2;
	Global_42615[231].f_10 = 1;
	Global_42615[231].f_11 = 60000;
	Global_42615[231].f_4 = 1;
	Global_42615[231].f_5[0] = 618;
	Global_42615[231].f_5[0].f_1 = 232;
	Global_42615[231].f_5[0].f_2 = 0;
	Global_42615[231].f_5[0].f_3 = -1;
	Global_42615[232] = 613;
	Global_42615[232].f_1 = 614;
	Global_42615[232].f_2 = 2;
	Global_42615[232].f_3 = 61;
	Global_42615[232].f_10 = 0;
	Global_42615[232].f_11 = 0;
	Global_42615[232].f_4 = 1;
	Global_42615[232].f_5[0] = 619;
	Global_42615[232].f_5[0].f_1 = 233;
	Global_42615[232].f_5[0].f_2 = 0;
	Global_42615[232].f_5[0].f_3 = -1;
	Global_42615[233] = 615;
	Global_42615[233].f_1 = 616;
	Global_42615[233].f_2 = 61;
	Global_42615[233].f_3 = 2;
	Global_42615[233].f_10 = 1;
	Global_42615[233].f_11 = 60000;
	Global_42615[233].f_4 = 1;
	Global_42615[233].f_5[0] = 622;
	Global_42615[233].f_5[0].f_1 = 234;
	Global_42615[233].f_5[0].f_2 = 0;
	Global_42615[233].f_5[0].f_3 = -1;
	Global_42615[234] = 620;
	Global_42615[234].f_1 = 621;
	Global_42615[234].f_2 = 2;
	Global_42615[234].f_3 = 61;
	Global_42615[234].f_10 = 0;
	Global_42615[234].f_11 = 0;
	Global_42615[234].f_4 = 0;
	Global_42615[235] = 623;
	Global_42615[235].f_1 = 624;
	Global_42615[235].f_2 = 62;
	Global_42615[235].f_3 = 2;
	Global_42615[235].f_10 = 1;
	Global_42615[235].f_11 = 60000;
	Global_42615[235].f_4 = 1;
	Global_42615[235].f_5[0] = 635;
	Global_42615[235].f_5[0].f_1 = 236;
	Global_42615[235].f_5[0].f_2 = 0;
	Global_42615[235].f_5[0].f_3 = -1;
	Global_42615[236] = 625;
	Global_42615[236].f_1 = 626;
	Global_42615[236].f_2 = 2;
	Global_42615[236].f_3 = 62;
	Global_42615[236].f_10 = 0;
	Global_42615[236].f_11 = 0;
	Global_42615[236].f_4 = 1;
	Global_42615[236].f_5[0] = 636;
	Global_42615[236].f_5[0].f_1 = 237;
	Global_42615[236].f_5[0].f_2 = 0;
	Global_42615[236].f_5[0].f_3 = -1;
	Global_42615[237] = 627;
	Global_42615[237].f_1 = 628;
	Global_42615[237].f_2 = 62;
	Global_42615[237].f_3 = 2;
	Global_42615[237].f_10 = 1;
	Global_42615[237].f_11 = 60000;
	Global_42615[237].f_4 = 1;
	Global_42615[237].f_5[0] = 637;
	Global_42615[237].f_5[0].f_1 = 238;
	Global_42615[237].f_5[0].f_2 = 0;
	Global_42615[237].f_5[0].f_3 = -1;
	Global_42615[238] = 629;
	Global_42615[238].f_1 = 630;
	Global_42615[238].f_2 = 2;
	Global_42615[238].f_3 = 62;
	Global_42615[238].f_10 = 0;
	Global_42615[238].f_11 = 0;
	Global_42615[238].f_4 = 1;
	Global_42615[238].f_5[0] = 638;
	Global_42615[238].f_5[0].f_1 = 239;
	Global_42615[238].f_5[0].f_2 = 0;
	Global_42615[238].f_5[0].f_3 = -1;
	Global_42615[239] = 631;
	Global_42615[239].f_1 = 632;
	Global_42615[239].f_2 = 62;
	Global_42615[239].f_3 = 2;
	Global_42615[239].f_10 = 1;
	Global_42615[239].f_11 = 60000;
	Global_42615[239].f_4 = 1;
	Global_42615[239].f_5[0] = 639;
	Global_42615[239].f_5[0].f_1 = 240;
	Global_42615[239].f_5[0].f_2 = 0;
	Global_42615[239].f_5[0].f_3 = -1;
	Global_42615[240] = 633;
	Global_42615[240].f_1 = 634;
	Global_42615[240].f_2 = 2;
	Global_42615[240].f_3 = 62;
	Global_42615[240].f_10 = 0;
	Global_42615[240].f_11 = 0;
	Global_42615[240].f_4 = 0;
	Global_42615[241] = 646;
	Global_42615[241].f_1 = 647;
	Global_42615[241].f_2 = 36;
	Global_42615[241].f_3 = 2;
	Global_42615[241].f_10 = 0;
	Global_42615[241].f_11 = 0;
	Global_42615[241].f_4 = 0;
	Global_42615[242] = 648;
	Global_42615[242].f_1 = 649;
	Global_42615[242].f_2 = 36;
	Global_42615[242].f_3 = 0;
	Global_42615[242].f_10 = 0;
	Global_42615[242].f_11 = 0;
	Global_42615[242].f_4 = 0;
	Global_42615[243] = 650;
	Global_42615[243].f_1 = 651;
	Global_42615[243].f_2 = 36;
	Global_42615[243].f_3 = 1;
	Global_42615[243].f_10 = 0;
	Global_42615[243].f_11 = 0;
	Global_42615[243].f_4 = 0;
	Global_42615[244] = 655;
	Global_42615[244].f_1 = 656;
	Global_42615[244].f_2 = 65;
	Global_42615[244].f_3 = 1;
	Global_42615[244].f_10 = 0;
	Global_42615[244].f_11 = 0;
	Global_42615[244].f_4 = 0;
	Global_42615[245] = 657;
	Global_42615[245].f_1 = 658;
	Global_42615[245].f_2 = 65;
	Global_42615[245].f_3 = 1;
	Global_42615[245].f_10 = 0;
	Global_42615[245].f_11 = 0;
	Global_42615[245].f_4 = 0;
	Global_42615[246] = 659;
	Global_42615[246].f_1 = 660;
	Global_42615[246].f_2 = 65;
	Global_42615[246].f_3 = 1;
	Global_42615[246].f_10 = 0;
	Global_42615[246].f_11 = 0;
	Global_42615[246].f_4 = 0;
	Global_42615[247] = 661;
	Global_42615[247].f_1 = 662;
	Global_42615[247].f_2 = 65;
	Global_42615[247].f_3 = 1;
	Global_42615[247].f_10 = 0;
	Global_42615[247].f_11 = 0;
	Global_42615[247].f_4 = 0;
	Global_42615[248] = 663;
	Global_42615[248].f_1 = 664;
	Global_42615[248].f_2 = 33;
	Global_42615[248].f_3 = 2;
	Global_42615[248].f_10 = 0;
	Global_42615[248].f_11 = 40000;
	Global_42615[248].f_4 = 0;
	Global_42615[249] = 665;
	Global_42615[249].f_1 = 666;
	Global_42615[249].f_2 = 19;
	Global_42615[249].f_3 = 1;
	Global_42615[249].f_10 = 1;
	Global_42615[249].f_11 = 0;
	Global_42615[249].f_4 = 0;
	Global_42615[250] = 667;
	Global_42615[250].f_1 = 668;
	Global_42615[250].f_2 = 19;
	Global_42615[250].f_3 = 1;
	Global_42615[250].f_10 = 1;
	Global_42615[250].f_11 = 0;
	Global_42615[250].f_4 = 0;
	Global_42615[251] = 669;
	Global_42615[251].f_1 = 670;
	Global_42615[251].f_2 = 19;
	Global_42615[251].f_3 = 1;
	Global_42615[251].f_10 = 1;
	Global_42615[251].f_11 = 0;
	Global_42615[251].f_4 = 0;
	Global_42615[252] = 671;
	Global_42615[252].f_1 = 672;
	Global_42615[252].f_2 = 19;
	Global_42615[252].f_3 = 1;
	Global_42615[252].f_10 = 1;
	Global_42615[252].f_11 = 0;
	Global_42615[252].f_4 = 0;
	Global_42615[253] = 673;
	Global_42615[253].f_1 = 674;
	Global_42615[253].f_2 = 19;
	Global_42615[253].f_3 = 1;
	Global_42615[253].f_10 = 1;
	Global_42615[253].f_11 = 0;
	Global_42615[253].f_4 = 0;
	Global_42615[254] = 675;
	Global_42615[254].f_1 = 676;
	Global_42615[254].f_2 = 19;
	Global_42615[254].f_3 = 1;
	Global_42615[254].f_10 = 1;
	Global_42615[254].f_11 = 0;
	Global_42615[254].f_4 = 0;
	Global_42615[255] = 679;
	Global_42615[255].f_1 = 680;
	Global_42615[255].f_2 = 19;
	Global_42615[255].f_3 = 1;
	Global_42615[255].f_10 = 1;
	Global_42615[255].f_11 = 0;
	Global_42615[255].f_4 = 0;
	Global_42615[256] = 677;
	Global_42615[256].f_1 = 678;
	Global_42615[256].f_2 = 19;
	Global_42615[256].f_3 = 1;
	Global_42615[256].f_10 = 1;
	Global_42615[256].f_11 = 0;
	Global_42615[256].f_4 = 0;
	Global_42615[257] = 681;
	Global_42615[257].f_1 = 682;
	Global_42615[257].f_2 = 19;
	Global_42615[257].f_3 = 1;
	Global_42615[257].f_10 = 1;
	Global_42615[257].f_11 = 0;
	Global_42615[257].f_4 = 0;
	Global_42615[258] = 683;
	Global_42615[258].f_1 = 684;
	Global_42615[258].f_2 = 19;
	Global_42615[258].f_3 = 1;
	Global_42615[258].f_10 = 1;
	Global_42615[258].f_11 = 0;
	Global_42615[258].f_4 = 0;
	Global_42615[259] = 685;
	Global_42615[259].f_1 = 686;
	Global_42615[259].f_2 = 19;
	Global_42615[259].f_3 = 1;
	Global_42615[259].f_10 = 1;
	Global_42615[259].f_11 = 0;
	Global_42615[259].f_4 = 0;
	Global_42615[260] = 687;
	Global_42615[260].f_1 = 688;
	Global_42615[260].f_2 = 19;
	Global_42615[260].f_3 = 1;
	Global_42615[260].f_10 = 1;
	Global_42615[260].f_11 = 0;
	Global_42615[260].f_4 = 0;
	Global_42615[261] = 691;
	Global_42615[261].f_1 = 692;
	Global_42615[261].f_2 = 19;
	Global_42615[261].f_3 = 1;
	Global_42615[261].f_10 = 1;
	Global_42615[261].f_11 = 0;
	Global_42615[261].f_4 = 0;
	Global_42615[262] = 689;
	Global_42615[262].f_1 = 690;
	Global_42615[262].f_2 = 19;
	Global_42615[262].f_3 = 1;
	Global_42615[262].f_10 = 1;
	Global_42615[262].f_11 = 0;
	Global_42615[262].f_4 = 0;
	Global_42615[263] = 693;
	Global_42615[263].f_1 = 694;
	Global_42615[263].f_2 = 19;
	Global_42615[263].f_3 = 1;
	Global_42615[263].f_10 = 1;
	Global_42615[263].f_11 = 0;
	Global_42615[263].f_4 = 0;
	Global_42615[264] = 695;
	Global_42615[264].f_1 = 696;
	Global_42615[264].f_2 = 19;
	Global_42615[264].f_3 = 1;
	Global_42615[264].f_10 = 1;
	Global_42615[264].f_11 = 0;
	Global_42615[264].f_4 = 0;
	Global_42615[265] = 697;
	Global_42615[265].f_1 = 698;
	Global_42615[265].f_2 = 19;
	Global_42615[265].f_3 = 1;
	Global_42615[265].f_10 = 1;
	Global_42615[265].f_11 = 0;
	Global_42615[265].f_4 = 0;
	Global_42615[266] = 699;
	Global_42615[266].f_1 = 700;
	Global_42615[266].f_2 = 19;
	Global_42615[266].f_3 = 1;
	Global_42615[266].f_10 = 1;
	Global_42615[266].f_11 = 0;
	Global_42615[266].f_4 = 0;
	Global_42615[267] = 701;
	Global_42615[267].f_1 = 702;
	Global_42615[267].f_2 = 19;
	Global_42615[267].f_3 = 1;
	Global_42615[267].f_10 = 1;
	Global_42615[267].f_11 = 0;
	Global_42615[267].f_4 = 0;
	Global_42615[268] = 703;
	Global_42615[268].f_1 = 704;
	Global_42615[268].f_2 = 19;
	Global_42615[268].f_3 = 1;
	Global_42615[268].f_10 = 1;
	Global_42615[268].f_11 = 0;
	Global_42615[268].f_4 = 0;
	Global_42615[269] = 705;
	Global_42615[269].f_1 = 706;
	Global_42615[269].f_2 = 19;
	Global_42615[269].f_3 = 1;
	Global_42615[269].f_10 = 1;
	Global_42615[269].f_11 = 0;
	Global_42615[269].f_4 = 0;
	Global_42615[270] = 707;
	Global_42615[270].f_1 = 708;
	Global_42615[270].f_2 = 16;
	Global_42615[270].f_3 = 0;
	Global_42615[270].f_10 = 1;
	Global_42615[270].f_11 = 0;
	Global_42615[270].f_4 = 0;
	Global_42615[271] = 709;
	Global_42615[271].f_1 = 710;
	Global_42615[271].f_2 = 16;
	Global_42615[271].f_3 = 0;
	Global_42615[271].f_10 = 1;
	Global_42615[271].f_11 = 0;
	Global_42615[271].f_4 = 0;
	Global_42615[272] = 711;
	Global_42615[272].f_1 = 712;
	Global_42615[272].f_2 = 16;
	Global_42615[272].f_3 = 0;
	Global_42615[272].f_10 = 1;
	Global_42615[272].f_11 = 0;
	Global_42615[272].f_4 = 0;
	Global_42615[273] = 713;
	Global_42615[273].f_1 = 714;
	Global_42615[273].f_2 = 16;
	Global_42615[273].f_3 = 0;
	Global_42615[273].f_10 = 1;
	Global_42615[273].f_11 = 0;
	Global_42615[273].f_4 = 0;
	Global_42615[274] = 715;
	Global_42615[274].f_1 = 716;
	Global_42615[274].f_2 = 16;
	Global_42615[274].f_3 = 0;
	Global_42615[274].f_10 = 1;
	Global_42615[274].f_11 = 0;
	Global_42615[274].f_4 = 0;
	Global_42615[275] = 717;
	Global_42615[275].f_1 = 718;
	Global_42615[275].f_2 = 16;
	Global_42615[275].f_3 = 0;
	Global_42615[275].f_10 = 1;
	Global_42615[275].f_11 = 0;
	Global_42615[275].f_4 = 0;
	Global_42615[276] = 719;
	Global_42615[276].f_1 = 720;
	Global_42615[276].f_2 = 16;
	Global_42615[276].f_3 = 0;
	Global_42615[276].f_10 = 1;
	Global_42615[276].f_11 = 0;
	Global_42615[276].f_4 = 0;
	Global_45940[0].f_45 = 0;
	Global_45940[0].f_31 = 0;
	Global_45940[0].f_42 = 0;
	Global_45940[0].f_43 = 0;
	Global_45940[0].f_2 = 2;
	Global_45940[0].f_3[0] = 0;
	Global_45940[0].f_3[1] = 4;
	Global_45940[0].f_30 = 8;
	Global_45940[0].f_8[0] = 0;
	Global_45940[0].f_8[1] = 1;
	Global_45940[0].f_8[2] = 2;
	Global_45940[0].f_8[3] = 3;
	Global_45940[0].f_8[4] = 4;
	Global_45940[0].f_8[5] = 5;
	Global_45940[0].f_8[6] = 6;
	Global_45940[0].f_8[7] = 9;
	Global_45940[1].f_45 = 0;
	Global_45940[1].f_31 = 0;
	Global_45940[1].f_42 = 0;
	Global_45940[1].f_43 = 0;
	Global_45940[1].f_2 = 3;
	Global_45940[1].f_3[0] = 5;
	Global_45940[1].f_3[1] = 0;
	Global_45940[1].f_3[2] = 4;
	Global_45940[1].f_30 = 3;
	Global_45940[1].f_8[0] = 10;
	Global_45940[1].f_8[1] = 11;
	Global_45940[1].f_8[2] = 16;
	Global_45940[2].f_45 = 0;
	Global_45940[2].f_31 = 0;
	Global_45940[2].f_42 = 0;
	Global_45940[2].f_43 = 0;
	Global_45940[2].f_2 = 2;
	Global_45940[2].f_3[0] = 7;
	Global_45940[2].f_3[1] = 1;
	Global_45940[2].f_30 = 1;
	Global_45940[2].f_8[0] = 12;
	Global_45940[3].f_45 = 0;
	Global_45940[3].f_31 = 0;
	Global_45940[3].f_42 = 0;
	Global_45940[3].f_43 = 0;
	Global_45940[3].f_2 = 2;
	Global_45940[3].f_3[0] = 7;
	Global_45940[3].f_3[1] = 1;
	Global_45940[3].f_30 = 1;
	Global_45940[3].f_8[0] = 14;
	Global_45940[4].f_45 = 0;
	Global_45940[4].f_31 = 0;
	Global_45940[4].f_42 = 0;
	Global_45940[4].f_43 = 0;
	Global_45940[4].f_2 = 2;
	Global_45940[4].f_3[0] = 7;
	Global_45940[4].f_3[1] = 1;
	Global_45940[4].f_30 = 1;
	Global_45940[4].f_8[0] = 13;
	Global_45940[5].f_45 = 0;
	Global_45940[5].f_31 = 0;
	Global_45940[5].f_42 = 0;
	Global_45940[5].f_43 = 0;
	Global_45940[5].f_2 = 2;
	Global_45940[5].f_3[0] = 7;
	Global_45940[5].f_3[1] = 1;
	Global_45940[5].f_30 = 1;
	Global_45940[5].f_8[0] = 15;
	Global_45940[6].f_45 = 0;
	Global_45940[6].f_31 = 0;
	Global_45940[6].f_42 = 0;
	Global_45940[6].f_43 = 0;
	Global_45940[6].f_2 = 2;
	Global_45940[6].f_3[0] = 0;
	Global_45940[6].f_3[1] = 8;
	Global_45940[6].f_30 = 5;
	Global_45940[6].f_8[0] = 17;
	Global_45940[6].f_8[1] = 19;
	Global_45940[6].f_8[2] = 20;
	Global_45940[6].f_8[3] = 21;
	Global_45940[6].f_8[4] = 22;
	Global_45940[7].f_45 = 0;
	Global_45940[7].f_31 = 0;
	Global_45940[7].f_42 = 0;
	Global_45940[7].f_43 = 0;
	Global_45940[7].f_2 = 2;
	Global_45940[7].f_3[0] = 1;
	Global_45940[7].f_3[1] = 9;
	Global_45940[7].f_30 = 5;
	Global_45940[7].f_8[0] = 18;
	Global_45940[7].f_8[1] = 24;
	Global_45940[7].f_8[2] = 25;
	Global_45940[7].f_8[3] = 26;
	Global_45940[7].f_8[4] = 27;
	Global_45940[8].f_45 = 0;
	Global_45940[8].f_31 = 0;
	Global_45940[8].f_42 = 0;
	Global_45940[8].f_43 = 0;
	Global_45940[8].f_2 = 2;
	Global_45940[8].f_3[0] = 2;
	Global_45940[8].f_3[1] = 10;
	Global_45940[8].f_30 = 4;
	Global_45940[8].f_8[0] = 23;
	Global_45940[8].f_8[1] = 28;
	Global_45940[8].f_8[2] = 29;
	Global_45940[8].f_8[3] = 30;
	Global_45940[9].f_45 = 0;
	Global_45940[9].f_31 = 0;
	Global_45940[9].f_42 = 0;
	Global_45940[9].f_43 = 0;
	Global_45940[9].f_2 = 1;
	Global_45940[9].f_3[0] = 11;
	Global_45940[9].f_30 = 3;
	Global_45940[9].f_8[0] = 31;
	Global_45940[9].f_8[1] = 32;
	Global_45940[9].f_8[2] = 33;
	Global_45940[10].f_45 = 0;
	Global_45940[10].f_31 = 0;
	Global_45940[10].f_42 = 0;
	Global_45940[10].f_43 = 0;
	Global_45940[10].f_2 = 1;
	Global_45940[10].f_3[0] = 13;
	Global_45940[10].f_30 = 3;
	Global_45940[10].f_8[0] = 34;
	Global_45940[10].f_8[1] = 35;
	Global_45940[10].f_8[2] = 36;
	Global_45940[11].f_45 = 0;
	Global_45940[11].f_31 = 0;
	Global_45940[11].f_42 = 0;
	Global_45940[11].f_43 = 0;
	Global_45940[11].f_2 = 1;
	Global_45940[11].f_3[0] = 14;
	Global_45940[11].f_30 = 3;
	Global_45940[11].f_8[0] = 37;
	Global_45940[11].f_8[1] = 38;
	Global_45940[11].f_8[2] = 39;
	Global_45940[12].f_45 = 0;
	Global_45940[12].f_31 = 0;
	Global_45940[12].f_42 = 0;
	Global_45940[12].f_43 = 0;
	Global_45940[12].f_2 = 1;
	Global_45940[12].f_3[0] = 12;
	Global_45940[12].f_30 = 6;
	Global_45940[12].f_8[0] = 40;
	Global_45940[12].f_8[1] = 41;
	Global_45940[12].f_8[2] = 42;
	Global_45940[12].f_8[3] = 191;
	Global_45940[12].f_8[4] = 192;
	Global_45940[12].f_8[5] = 193;
	Global_45940[13].f_45 = 0;
	Global_45940[13].f_31 = 0;
	Global_45940[13].f_42 = 0;
	Global_45940[13].f_43 = 0;
	Global_45940[13].f_2 = 2;
	Global_45940[13].f_3[0] = 7;
	Global_45940[13].f_3[1] = 0;
	Global_45940[13].f_30 = 1;
	Global_45940[13].f_8[0] = 43;
	Global_45940[14].f_45 = 0;
	Global_45940[14].f_31 = 0;
	Global_45940[14].f_42 = 0;
	Global_45940[14].f_43 = 0;
	Global_45940[14].f_2 = 4;
	Global_45940[14].f_3[0] = 15;
	Global_45940[14].f_3[1] = 0;
	Global_45940[14].f_3[2] = 1;
	Global_45940[14].f_3[3] = 2;
	Global_45940[14].f_30 = 3;
	Global_45940[14].f_8[0] = 44;
	Global_45940[14].f_8[1] = 45;
	Global_45940[14].f_8[2] = 46;
	Global_45940[15].f_45 = 0;
	Global_45940[15].f_31 = 0;
	Global_45940[15].f_42 = 0;
	Global_45940[15].f_43 = 0;
	Global_45940[15].f_2 = 4;
	Global_45940[15].f_3[0] = 16;
	Global_45940[15].f_3[1] = 0;
	Global_45940[15].f_3[2] = 1;
	Global_45940[15].f_3[3] = 2;
	Global_45940[15].f_30 = 1;
	Global_45940[15].f_8[0] = 47;
	Global_45940[16].f_45 = 0;
	Global_45940[16].f_31 = 0;
	Global_45940[16].f_42 = 0;
	Global_45940[16].f_43 = 0;
	Global_45940[16].f_2 = 4;
	Global_45940[16].f_3[0] = 16;
	Global_45940[16].f_3[1] = 0;
	Global_45940[16].f_3[2] = 1;
	Global_45940[16].f_3[3] = 2;
	Global_45940[16].f_30 = 1;
	Global_45940[16].f_8[0] = 48;
	Global_45940[17].f_45 = 0;
	Global_45940[17].f_31 = 0;
	Global_45940[17].f_42 = 0;
	Global_45940[17].f_43 = 0;
	Global_45940[17].f_2 = 4;
	Global_45940[17].f_3[0] = 0;
	Global_45940[17].f_3[1] = 1;
	Global_45940[17].f_3[2] = 2;
	Global_45940[17].f_3[3] = 16;
	Global_45940[17].f_30 = 1;
	Global_45940[17].f_8[0] = 49;
	Global_45940[18].f_45 = 0;
	Global_45940[18].f_31 = 0;
	Global_45940[18].f_42 = 0;
	Global_45940[18].f_43 = 0;
	Global_45940[18].f_2 = 4;
	Global_45940[18].f_3[0] = 0;
	Global_45940[18].f_3[1] = 1;
	Global_45940[18].f_3[2] = 2;
	Global_45940[18].f_3[3] = 16;
	Global_45940[18].f_30 = 1;
	Global_45940[18].f_8[0] = 50;
	Global_45940[19].f_45 = 0;
	Global_45940[19].f_31 = 0;
	Global_45940[19].f_42 = 0;
	Global_45940[19].f_43 = 0;
	Global_45940[19].f_2 = 4;
	Global_45940[19].f_3[0] = 0;
	Global_45940[19].f_3[1] = 1;
	Global_45940[19].f_3[2] = 2;
	Global_45940[19].f_3[3] = 16;
	Global_45940[19].f_30 = 1;
	Global_45940[19].f_8[0] = 51;
	Global_45940[20].f_45 = 0;
	Global_45940[20].f_31 = 0;
	Global_45940[20].f_42 = 0;
	Global_45940[20].f_43 = 0;
	Global_45940[20].f_2 = 4;
	Global_45940[20].f_3[0] = 0;
	Global_45940[20].f_3[1] = 1;
	Global_45940[20].f_3[2] = 2;
	Global_45940[20].f_3[3] = 16;
	Global_45940[20].f_30 = 1;
	Global_45940[20].f_8[0] = 52;
	Global_45940[21].f_45 = 0;
	Global_45940[21].f_31 = 0;
	Global_45940[21].f_42 = 0;
	Global_45940[21].f_43 = 0;
	Global_45940[21].f_2 = 4;
	Global_45940[21].f_3[0] = 16;
	Global_45940[21].f_3[1] = 0;
	Global_45940[21].f_3[2] = 1;
	Global_45940[21].f_3[3] = 2;
	Global_45940[21].f_30 = 1;
	Global_45940[21].f_8[0] = 53;
	Global_45940[22].f_45 = 0;
	Global_45940[22].f_31 = 0;
	Global_45940[22].f_42 = 0;
	Global_45940[22].f_43 = 0;
	Global_45940[22].f_2 = 4;
	Global_45940[22].f_3[0] = 0;
	Global_45940[22].f_3[1] = 1;
	Global_45940[22].f_3[2] = 2;
	Global_45940[22].f_3[3] = 16;
	Global_45940[22].f_30 = 1;
	Global_45940[22].f_8[0] = 54;
	Global_45940[23].f_45 = 0;
	Global_45940[23].f_31 = 0;
	Global_45940[23].f_42 = 0;
	Global_45940[23].f_43 = 0;
	Global_45940[23].f_2 = 1;
	Global_45940[23].f_3[0] = 12;
	Global_45940[23].f_30 = 3;
	Global_45940[23].f_8[0] = 55;
	Global_45940[23].f_8[1] = 58;
	Global_45940[23].f_8[2] = 59;
	Global_45940[24].f_45 = 0;
	Global_45940[24].f_31 = 0;
	Global_45940[24].f_42 = 0;
	Global_45940[24].f_43 = 0;
	Global_45940[24].f_2 = 1;
	Global_45940[24].f_3[0] = 14;
	Global_45940[24].f_30 = 3;
	Global_45940[24].f_8[0] = 56;
	Global_45940[24].f_8[1] = 60;
	Global_45940[24].f_8[2] = 61;
	Global_45940[25].f_45 = 0;
	Global_45940[25].f_31 = 0;
	Global_45940[25].f_42 = 0;
	Global_45940[25].f_43 = 0;
	Global_45940[25].f_2 = 1;
	Global_45940[25].f_3[0] = 12;
	Global_45940[25].f_30 = 3;
	Global_45940[25].f_8[0] = 57;
	Global_45940[25].f_8[1] = 62;
	Global_45940[25].f_8[2] = 63;
	Global_45940[26].f_45 = 0;
	Global_45940[26].f_31 = 0;
	Global_45940[26].f_42 = 0;
	Global_45940[26].f_43 = 0;
	Global_45940[26].f_2 = 4;
	Global_45940[26].f_3[0] = 1;
	Global_45940[26].f_3[1] = 0;
	Global_45940[26].f_3[2] = 2;
	Global_45940[26].f_3[3] = 20;
	Global_45940[26].f_30 = 1;
	Global_45940[26].f_8[0] = 64;
	Global_45940[27].f_45 = 0;
	Global_45940[27].f_31 = 0;
	Global_45940[27].f_42 = 0;
	Global_45940[27].f_43 = 0;
	Global_45940[27].f_2 = 4;
	Global_45940[27].f_3[0] = 17;
	Global_45940[27].f_3[1] = 0;
	Global_45940[27].f_3[2] = 1;
	Global_45940[27].f_3[3] = 2;
	Global_45940[27].f_30 = 1;
	Global_45940[27].f_8[0] = 66;
	Global_45940[28].f_45 = 0;
	Global_45940[28].f_31 = 0;
	Global_45940[28].f_42 = 0;
	Global_45940[28].f_43 = 0;
	Global_45940[28].f_2 = 4;
	Global_45940[28].f_3[0] = 18;
	Global_45940[28].f_3[1] = 0;
	Global_45940[28].f_3[2] = 1;
	Global_45940[28].f_3[3] = 2;
	Global_45940[28].f_30 = 1;
	Global_45940[28].f_8[0] = 65;
	Global_45940[29].f_45 = 0;
	Global_45940[29].f_31 = 0;
	Global_45940[29].f_42 = 0;
	Global_45940[29].f_43 = 0;
	Global_45940[29].f_2 = 2;
	Global_45940[29].f_3[0] = 2;
	Global_45940[29].f_3[1] = 63;
	Global_45940[29].f_30 = 1;
	Global_45940[29].f_8[0] = 67;
	Global_45940[30].f_45 = 0;
	Global_45940[30].f_31 = 0;
	Global_45940[30].f_42 = 0;
	Global_45940[30].f_43 = 0;
	Global_45940[30].f_2 = 3;
	Global_45940[30].f_3[0] = 0;
	Global_45940[30].f_3[1] = 1;
	Global_45940[30].f_3[2] = 2;
	Global_45940[30].f_30 = 1;
	Global_45940[30].f_8[0] = 68;
	Global_45940[31].f_45 = 0;
	Global_45940[31].f_31 = 0;
	Global_45940[31].f_42 = 0;
	Global_45940[31].f_43 = 0;
	Global_45940[31].f_2 = 2;
	Global_45940[31].f_3[0] = 0;
	Global_45940[31].f_3[1] = 64;
	Global_45940[31].f_30 = 1;
	Global_45940[31].f_8[0] = 69;
	Global_45940[32].f_45 = 0;
	Global_45940[32].f_31 = 0;
	Global_45940[32].f_42 = 0;
	Global_45940[32].f_43 = 0;
	Global_45940[32].f_2 = 2;
	Global_45940[32].f_3[0] = 1;
	Global_45940[32].f_3[1] = 64;
	Global_45940[32].f_30 = 1;
	Global_45940[32].f_8[0] = 70;
	Global_45940[33].f_45 = 0;
	Global_45940[33].f_31 = 0;
	Global_45940[33].f_42 = 0;
	Global_45940[33].f_43 = 0;
	Global_45940[33].f_2 = 2;
	Global_45940[33].f_3[0] = 2;
	Global_45940[33].f_3[1] = 64;
	Global_45940[33].f_30 = 1;
	Global_45940[33].f_8[0] = 71;
	Global_45940[34].f_45 = 0;
	Global_45940[34].f_31 = 0;
	Global_45940[34].f_42 = 0;
	Global_45940[34].f_43 = 0;
	Global_45940[34].f_2 = 1;
	Global_45940[34].f_3[0] = 21;
	Global_45940[34].f_30 = 1;
	Global_45940[34].f_8[0] = 72;
	Global_45940[35].f_45 = 0;
	Global_45940[35].f_31 = 0;
	Global_45940[35].f_42 = 0;
	Global_45940[35].f_43 = 0;
	Global_45940[35].f_2 = 1;
	Global_45940[35].f_3[0] = 21;
	Global_45940[35].f_30 = 1;
	Global_45940[35].f_8[0] = 73;
	Global_45940[36].f_45 = 0;
	Global_45940[36].f_31 = 0;
	Global_45940[36].f_42 = 0;
	Global_45940[36].f_43 = 0;
	Global_45940[36].f_2 = 1;
	Global_45940[36].f_3[0] = 21;
	Global_45940[36].f_30 = 1;
	Global_45940[36].f_8[0] = 74;
	Global_45940[37].f_45 = 0;
	Global_45940[37].f_31 = 0;
	Global_45940[37].f_42 = 0;
	Global_45940[37].f_43 = 0;
	Global_45940[37].f_2 = 2;
	Global_45940[37].f_3[0] = 6;
	Global_45940[37].f_3[1] = 2;
	Global_45940[37].f_30 = 9;
	Global_45940[37].f_8[0] = 75;
	Global_45940[37].f_8[1] = 76;
	Global_45940[37].f_8[2] = 77;
	Global_45940[37].f_8[3] = 78;
	Global_45940[37].f_8[4] = 79;
	Global_45940[37].f_8[5] = 80;
	Global_45940[37].f_8[6] = 81;
	Global_45940[37].f_8[7] = 82;
	Global_45940[37].f_8[8] = 83;
	Global_45940[38].f_45 = 0;
	Global_45940[38].f_31 = 0;
	Global_45940[38].f_42 = 0;
	Global_45940[38].f_43 = 0;
	Global_45940[38].f_2 = 2;
	Global_45940[38].f_3[0] = 0;
	Global_45940[38].f_3[1] = 4;
	Global_45940[38].f_30 = 1;
	Global_45940[38].f_8[0] = 84;
	Global_45940[39].f_45 = 0;
	Global_45940[39].f_31 = 0;
	Global_45940[39].f_42 = 0;
	Global_45940[39].f_43 = 0;
	Global_45940[39].f_2 = 4;
	Global_45940[39].f_3[0] = 22;
	Global_45940[39].f_3[1] = 0;
	Global_45940[39].f_3[2] = 1;
	Global_45940[39].f_3[3] = 2;
	Global_45940[39].f_30 = 1;
	Global_45940[39].f_8[0] = 85;
	Global_45940[40].f_45 = 0;
	Global_45940[40].f_31 = 0;
	Global_45940[40].f_42 = 0;
	Global_45940[40].f_43 = 0;
	Global_45940[40].f_2 = 2;
	Global_45940[40].f_3[0] = 0;
	Global_45940[40].f_3[1] = 24;
	Global_45940[40].f_30 = 3;
	Global_45940[40].f_8[0] = 86;
	Global_45940[40].f_8[1] = 87;
	Global_45940[40].f_8[2] = 88;
	Global_45940[41].f_45 = 0;
	Global_45940[41].f_31 = 0;
	Global_45940[41].f_42 = 0;
	Global_45940[41].f_43 = 0;
	Global_45940[41].f_2 = 2;
	Global_45940[41].f_3[0] = 0;
	Global_45940[41].f_3[1] = 24;
	Global_45940[41].f_30 = 3;
	Global_45940[41].f_8[0] = 89;
	Global_45940[41].f_8[1] = 90;
	Global_45940[41].f_8[2] = 91;
	Global_45940[42].f_45 = 0;
	Global_45940[42].f_31 = 0;
	Global_45940[42].f_42 = 0;
	Global_45940[42].f_43 = 0;
	Global_45940[42].f_2 = 2;
	Global_45940[42].f_3[0] = 0;
	Global_45940[42].f_3[1] = 25;
	Global_45940[42].f_30 = 5;
	Global_45940[42].f_8[0] = 92;
	Global_45940[42].f_8[1] = 93;
	Global_45940[42].f_8[2] = 94;
	Global_45940[42].f_8[3] = 95;
	Global_45940[42].f_8[4] = 96;
	Global_45940[43].f_45 = 0;
	Global_45940[43].f_31 = 0;
	Global_45940[43].f_42 = 0;
	Global_45940[43].f_43 = 0;
	Global_45940[43].f_2 = 2;
	Global_45940[43].f_3[0] = 26;
	Global_45940[43].f_3[1] = 0;
	Global_45940[43].f_30 = 2;
	Global_45940[43].f_8[0] = 97;
	Global_45940[43].f_8[1] = 98;
	Global_45940[44].f_45 = 0;
	Global_45940[44].f_31 = 0;
	Global_45940[44].f_42 = 0;
	Global_45940[44].f_43 = 0;
	Global_45940[44].f_2 = 2;
	Global_45940[44].f_3[0] = 27;
	Global_45940[44].f_3[1] = 0;
	Global_45940[44].f_30 = 2;
	Global_45940[44].f_8[0] = 99;
	Global_45940[44].f_8[1] = 100;
	Global_45940[45].f_45 = 0;
	Global_45940[45].f_31 = 0;
	Global_45940[45].f_42 = 0;
	Global_45940[45].f_43 = 0;
	Global_45940[45].f_2 = 3;
	Global_45940[45].f_3[0] = 0;
	Global_45940[45].f_3[1] = 2;
	Global_45940[45].f_3[2] = 28;
	Global_45940[45].f_30 = 1;
	Global_45940[45].f_8[0] = 101;
	Global_45940[46].f_45 = 0;
	Global_45940[46].f_31 = 0;
	Global_45940[46].f_42 = 0;
	Global_45940[46].f_43 = 0;
	Global_45940[46].f_2 = 2;
	Global_45940[46].f_3[0] = 0;
	Global_45940[46].f_3[1] = 26;
	Global_45940[46].f_30 = 2;
	Global_45940[46].f_8[0] = 102;
	Global_45940[46].f_8[1] = 103;
	Global_45940[47].f_45 = 0;
	Global_45940[47].f_31 = 0;
	Global_45940[47].f_42 = 0;
	Global_45940[47].f_43 = 0;
	Global_45940[47].f_2 = 2;
	Global_45940[47].f_3[0] = 0;
	Global_45940[47].f_3[1] = 29;
	Global_45940[47].f_30 = 2;
	Global_45940[47].f_8[0] = 104;
	Global_45940[47].f_8[1] = 105;
	Global_45940[48].f_45 = 0;
	Global_45940[48].f_31 = 0;
	Global_45940[48].f_42 = 0;
	Global_45940[48].f_43 = 0;
	Global_45940[48].f_2 = 2;
	Global_45940[48].f_3[0] = 1;
	Global_45940[48].f_3[1] = 30;
	Global_45940[48].f_30 = 5;
	Global_45940[48].f_8[0] = 106;
	Global_45940[48].f_8[1] = 107;
	Global_45940[48].f_8[2] = 108;
	Global_45940[48].f_8[3] = 109;
	Global_45940[48].f_8[4] = 110;
	Global_45940[49].f_45 = 0;
	Global_45940[49].f_31 = 0;
	Global_45940[49].f_42 = 0;
	Global_45940[49].f_43 = 0;
	Global_45940[49].f_2 = 2;
	Global_45940[49].f_3[0] = 1;
	Global_45940[49].f_3[1] = 31;
	Global_45940[49].f_30 = 2;
	Global_45940[49].f_8[0] = 111;
	Global_45940[49].f_8[1] = 112;
	Global_45940[50].f_45 = 0;
	Global_45940[50].f_31 = 0;
	Global_45940[50].f_42 = 0;
	Global_45940[50].f_43 = 0;
	Global_45940[50].f_2 = 2;
	Global_45940[50].f_3[0] = 1;
	Global_45940[50].f_3[1] = 32;
	Global_45940[50].f_30 = 3;
	Global_45940[50].f_8[0] = 113;
	Global_45940[50].f_8[1] = 114;
	Global_45940[50].f_8[2] = 115;
	Global_45940[51].f_45 = 0;
	Global_45940[51].f_31 = 0;
	Global_45940[51].f_42 = 0;
	Global_45940[51].f_43 = 0;
	Global_45940[51].f_2 = 2;
	Global_45940[51].f_3[0] = 1;
	Global_45940[51].f_3[1] = 32;
	Global_45940[51].f_30 = 2;
	Global_45940[51].f_8[0] = 116;
	Global_45940[51].f_8[1] = 117;
	Global_45940[52].f_45 = 0;
	Global_45940[52].f_31 = 0;
	Global_45940[52].f_42 = 0;
	Global_45940[52].f_43 = 0;
	Global_45940[52].f_2 = 2;
	Global_45940[52].f_3[0] = 1;
	Global_45940[52].f_3[1] = 32;
	Global_45940[52].f_30 = 2;
	Global_45940[52].f_8[0] = 118;
	Global_45940[52].f_8[1] = 119;
	Global_45940[53].f_45 = 0;
	Global_45940[53].f_31 = 0;
	Global_45940[53].f_42 = 0;
	Global_45940[53].f_43 = 0;
	Global_45940[53].f_2 = 2;
	Global_45940[53].f_3[0] = 1;
	Global_45940[53].f_3[1] = 32;
	Global_45940[53].f_30 = 4;
	Global_45940[53].f_8[0] = 120;
	Global_45940[53].f_8[1] = 121;
	Global_45940[53].f_8[2] = 122;
	Global_45940[53].f_8[3] = 123;
	Global_45940[54].f_45 = 0;
	Global_45940[54].f_31 = 0;
	Global_45940[54].f_42 = 0;
	Global_45940[54].f_43 = 0;
	Global_45940[54].f_2 = 2;
	Global_45940[54].f_3[0] = 1;
	Global_45940[54].f_3[1] = 27;
	Global_45940[54].f_30 = 2;
	Global_45940[54].f_8[0] = 124;
	Global_45940[54].f_8[1] = 125;
	Global_45940[55].f_45 = 0;
	Global_45940[55].f_31 = 0;
	Global_45940[55].f_42 = 0;
	Global_45940[55].f_43 = 0;
	Global_45940[55].f_2 = 2;
	Global_45940[55].f_3[0] = 1;
	Global_45940[55].f_3[1] = 2;
	Global_45940[55].f_30 = 5;
	Global_45940[55].f_8[0] = 126;
	Global_45940[55].f_8[1] = 127;
	Global_45940[55].f_8[2] = 128;
	Global_45940[55].f_8[3] = 129;
	Global_45940[55].f_8[4] = 130;
	Global_45940[56].f_45 = 0;
	Global_45940[56].f_31 = 0;
	Global_45940[56].f_42 = 0;
	Global_45940[56].f_43 = 0;
	Global_45940[56].f_2 = 2;
	Global_45940[56].f_3[0] = 1;
	Global_45940[56].f_3[1] = 0;
	Global_45940[56].f_30 = 3;
	Global_45940[56].f_8[0] = 131;
	Global_45940[56].f_8[1] = 132;
	Global_45940[56].f_8[2] = 133;
	Global_45940[57].f_45 = 0;
	Global_45940[57].f_31 = 0;
	Global_45940[57].f_42 = 0;
	Global_45940[57].f_43 = 0;
	Global_45940[57].f_2 = 2;
	Global_45940[57].f_3[0] = 0;
	Global_45940[57].f_3[1] = 1;
	Global_45940[57].f_30 = 2;
	Global_45940[57].f_8[0] = 134;
	Global_45940[57].f_8[1] = 135;
	Global_45940[58].f_45 = 0;
	Global_45940[58].f_31 = 0;
	Global_45940[58].f_42 = 0;
	Global_45940[58].f_43 = 0;
	Global_45940[58].f_2 = 2;
	Global_45940[58].f_3[0] = 2;
	Global_45940[58].f_3[1] = 33;
	Global_45940[58].f_30 = 2;
	Global_45940[58].f_8[0] = 136;
	Global_45940[58].f_8[1] = 137;
	Global_45940[59].f_45 = 0;
	Global_45940[59].f_31 = 0;
	Global_45940[59].f_42 = 0;
	Global_45940[59].f_43 = 0;
	Global_45940[59].f_2 = 2;
	Global_45940[59].f_3[0] = 2;
	Global_45940[59].f_3[1] = 33;
	Global_45940[59].f_30 = 3;
	Global_45940[59].f_8[0] = 138;
	Global_45940[59].f_8[1] = 139;
	Global_45940[59].f_8[2] = 248;
	Global_45940[60].f_45 = 0;
	Global_45940[60].f_31 = 0;
	Global_45940[60].f_42 = 0;
	Global_45940[60].f_43 = 0;
	Global_45940[60].f_2 = 2;
	Global_45940[60].f_3[0] = 2;
	Global_45940[60].f_3[1] = 33;
	Global_45940[60].f_30 = 1;
	Global_45940[60].f_8[0] = 140;
	Global_45940[61].f_45 = 0;
	Global_45940[61].f_31 = 0;
	Global_45940[61].f_42 = 0;
	Global_45940[61].f_43 = 0;
	Global_45940[61].f_2 = 2;
	Global_45940[61].f_3[0] = 2;
	Global_45940[61].f_3[1] = 29;
	Global_45940[61].f_30 = 2;
	Global_45940[61].f_8[0] = 141;
	Global_45940[61].f_8[1] = 142;
	Global_45940[62].f_45 = 0;
	Global_45940[62].f_31 = 0;
	Global_45940[62].f_42 = 0;
	Global_45940[62].f_43 = 0;
	Global_45940[62].f_2 = 2;
	Global_45940[62].f_3[0] = 3;
	Global_45940[62].f_3[1] = 2;
	Global_45940[62].f_30 = 2;
	Global_45940[62].f_8[0] = 143;
	Global_45940[62].f_8[1] = 144;
	Global_45940[63].f_45 = 0;
	Global_45940[63].f_31 = 0;
	Global_45940[63].f_42 = 0;
	Global_45940[63].f_43 = 0;
	Global_45940[63].f_2 = 2;
	Global_45940[63].f_3[0] = 2;
	Global_45940[63].f_3[1] = 34;
	Global_45940[63].f_30 = 2;
	Global_45940[63].f_8[0] = 145;
	Global_45940[63].f_8[1] = 146;
	Global_45940[64].f_45 = 0;
	Global_45940[64].f_31 = 0;
	Global_45940[64].f_42 = 0;
	Global_45940[64].f_43 = 0;
	Global_45940[64].f_2 = 2;
	Global_45940[64].f_3[0] = 2;
	Global_45940[64].f_3[1] = 26;
	Global_45940[64].f_30 = 1;
	Global_45940[64].f_8[0] = 147;
	Global_45940[65].f_45 = 0;
	Global_45940[65].f_31 = 0;
	Global_45940[65].f_42 = 0;
	Global_45940[65].f_43 = 0;
	Global_45940[65].f_2 = 1;
	Global_45940[65].f_3[0] = 35;
	Global_45940[65].f_30 = 3;
	Global_45940[65].f_8[0] = 148;
	Global_45940[65].f_8[1] = 149;
	Global_45940[65].f_8[2] = 150;
	Global_45940[66].f_45 = 0;
	Global_45940[66].f_31 = 0;
	Global_45940[66].f_42 = 0;
	Global_45940[66].f_43 = 0;
	Global_45940[66].f_2 = 1;
	Global_45940[66].f_3[0] = 36;
	Global_45940[66].f_30 = 3;
	Global_45940[66].f_8[0] = 151;
	Global_45940[66].f_8[1] = 152;
	Global_45940[66].f_8[2] = 153;
	Global_45940[67].f_45 = 0;
	Global_45940[67].f_31 = 0;
	Global_45940[67].f_42 = 0;
	Global_45940[67].f_43 = 0;
	Global_45940[67].f_2 = 2;
	Global_45940[67].f_3[0] = 4;
	Global_45940[67].f_3[1] = 0;
	Global_45940[67].f_30 = 1;
	Global_45940[67].f_8[0] = 7;
	Global_45940[68].f_45 = 0;
	Global_45940[68].f_31 = 0;
	Global_45940[68].f_42 = 0;
	Global_45940[68].f_43 = 0;
	Global_45940[68].f_2 = 2;
	Global_45940[68].f_3[0] = 4;
	Global_45940[68].f_3[1] = 0;
	Global_45940[68].f_30 = 1;
	Global_45940[68].f_8[0] = 8;
	Global_45940[69].f_45 = 0;
	Global_45940[69].f_31 = 0;
	Global_45940[69].f_42 = 0;
	Global_45940[69].f_43 = 0;
	Global_45940[69].f_2 = 2;
	Global_45940[69].f_3[0] = 2;
	Global_45940[69].f_3[1] = 38;
	Global_45940[69].f_30 = 1;
	Global_45940[69].f_8[0] = 154;
	Global_45940[70].f_45 = 0;
	Global_45940[70].f_31 = 0;
	Global_45940[70].f_42 = 0;
	Global_45940[70].f_43 = 0;
	Global_45940[70].f_2 = 1;
	Global_45940[70].f_3[0] = 11;
	Global_45940[70].f_30 = 3;
	Global_45940[70].f_8[0] = 155;
	Global_45940[70].f_8[1] = 156;
	Global_45940[70].f_8[2] = 157;
	Global_45940[71].f_45 = 0;
	Global_45940[71].f_31 = 0;
	Global_45940[71].f_42 = 0;
	Global_45940[71].f_43 = 0;
	Global_45940[71].f_2 = 2;
	Global_45940[71].f_3[0] = 2;
	Global_45940[71].f_3[1] = 29;
	Global_45940[71].f_30 = 1;
	Global_45940[71].f_8[0] = 158;
	Global_45940[72].f_45 = 0;
	Global_45940[72].f_31 = 0;
	Global_45940[72].f_42 = 0;
	Global_45940[72].f_43 = 0;
	Global_45940[72].f_2 = 1;
	Global_45940[72].f_3[0] = 0;
	Global_45940[72].f_30 = 1;
	Global_45940[72].f_8[0] = 159;
	Global_45940[73].f_45 = 0;
	Global_45940[73].f_31 = 0;
	Global_45940[73].f_42 = 0;
	Global_45940[73].f_43 = 0;
	Global_45940[73].f_2 = 1;
	Global_45940[73].f_3[0] = 1;
	Global_45940[73].f_30 = 1;
	Global_45940[73].f_8[0] = 160;
	Global_45940[74].f_45 = 0;
	Global_45940[74].f_31 = 0;
	Global_45940[74].f_42 = 0;
	Global_45940[74].f_43 = 0;
	Global_45940[74].f_2 = 1;
	Global_45940[74].f_3[0] = 1;
	Global_45940[74].f_30 = 1;
	Global_45940[74].f_8[0] = 161;
	Global_45940[75].f_45 = 0;
	Global_45940[75].f_31 = 0;
	Global_45940[75].f_42 = 0;
	Global_45940[75].f_43 = 0;
	Global_45940[75].f_2 = 1;
	Global_45940[75].f_3[0] = 0;
	Global_45940[75].f_30 = 1;
	Global_45940[75].f_8[0] = 162;
	Global_45940[76].f_45 = 0;
	Global_45940[76].f_31 = 0;
	Global_45940[76].f_42 = 0;
	Global_45940[76].f_43 = 0;
	Global_45940[76].f_2 = 1;
	Global_45940[76].f_3[0] = 2;
	Global_45940[76].f_30 = 1;
	Global_45940[76].f_8[0] = 163;
	Global_45940[77].f_45 = 0;
	Global_45940[77].f_31 = 0;
	Global_45940[77].f_42 = 0;
	Global_45940[77].f_43 = 0;
	Global_45940[77].f_2 = 1;
	Global_45940[77].f_3[0] = 1;
	Global_45940[77].f_30 = 1;
	Global_45940[77].f_8[0] = 164;
	Global_45940[78].f_45 = 0;
	Global_45940[78].f_31 = 0;
	Global_45940[78].f_42 = 0;
	Global_45940[78].f_43 = 0;
	Global_45940[78].f_2 = 1;
	Global_45940[78].f_3[0] = 1;
	Global_45940[78].f_30 = 1;
	Global_45940[78].f_8[0] = 165;
	Global_45940[79].f_45 = 0;
	Global_45940[79].f_31 = 0;
	Global_45940[79].f_42 = 0;
	Global_45940[79].f_43 = 0;
	Global_45940[79].f_2 = 1;
	Global_45940[79].f_3[0] = 0;
	Global_45940[79].f_30 = 1;
	Global_45940[79].f_8[0] = 166;
	Global_45940[80].f_45 = 0;
	Global_45940[80].f_31 = 0;
	Global_45940[80].f_42 = 0;
	Global_45940[80].f_43 = 0;
	Global_45940[80].f_2 = 1;
	Global_45940[80].f_3[0] = 0;
	Global_45940[80].f_30 = 1;
	Global_45940[80].f_8[0] = 167;
	Global_45940[81].f_45 = 0;
	Global_45940[81].f_31 = 0;
	Global_45940[81].f_42 = 0;
	Global_45940[81].f_43 = 0;
	Global_45940[81].f_2 = 1;
	Global_45940[81].f_3[0] = 0;
	Global_45940[81].f_30 = 1;
	Global_45940[81].f_8[0] = 168;
	Global_45940[82].f_45 = 0;
	Global_45940[82].f_31 = 0;
	Global_45940[82].f_42 = 0;
	Global_45940[82].f_43 = 0;
	Global_45940[82].f_2 = 1;
	Global_45940[82].f_3[0] = 2;
	Global_45940[82].f_30 = 1;
	Global_45940[82].f_8[0] = 169;
	Global_45940[83].f_45 = 0;
	Global_45940[83].f_31 = 0;
	Global_45940[83].f_42 = 0;
	Global_45940[83].f_43 = 0;
	Global_45940[83].f_2 = 1;
	Global_45940[83].f_3[0] = 1;
	Global_45940[83].f_30 = 1;
	Global_45940[83].f_8[0] = 170;
	Global_45940[84].f_45 = 0;
	Global_45940[84].f_31 = 0;
	Global_45940[84].f_42 = 0;
	Global_45940[84].f_43 = 0;
	Global_45940[84].f_2 = 1;
	Global_45940[84].f_3[0] = 1;
	Global_45940[84].f_30 = 1;
	Global_45940[84].f_8[0] = 171;
	Global_45940[85].f_45 = 0;
	Global_45940[85].f_31 = 0;
	Global_45940[85].f_42 = 0;
	Global_45940[85].f_43 = 0;
	Global_45940[85].f_2 = 1;
	Global_45940[85].f_3[0] = 0;
	Global_45940[85].f_30 = 1;
	Global_45940[85].f_8[0] = 172;
	Global_45940[86].f_45 = 0;
	Global_45940[86].f_31 = 0;
	Global_45940[86].f_42 = 0;
	Global_45940[86].f_43 = 0;
	Global_45940[86].f_2 = 1;
	Global_45940[86].f_3[0] = 2;
	Global_45940[86].f_30 = 1;
	Global_45940[86].f_8[0] = 173;
	Global_45940[87].f_45 = 0;
	Global_45940[87].f_31 = 0;
	Global_45940[87].f_42 = 0;
	Global_45940[87].f_43 = 0;
	Global_45940[87].f_2 = 1;
	Global_45940[87].f_3[0] = 1;
	Global_45940[87].f_30 = 1;
	Global_45940[87].f_8[0] = 174;
	Global_45940[88].f_45 = 0;
	Global_45940[88].f_31 = 0;
	Global_45940[88].f_42 = 0;
	Global_45940[88].f_43 = 0;
	Global_45940[88].f_2 = 1;
	Global_45940[88].f_3[0] = 0;
	Global_45940[88].f_30 = 1;
	Global_45940[88].f_8[0] = 175;
	Global_45940[89].f_45 = 0;
	Global_45940[89].f_31 = 0;
	Global_45940[89].f_42 = 0;
	Global_45940[89].f_43 = 0;
	Global_45940[89].f_2 = 1;
	Global_45940[89].f_3[0] = 2;
	Global_45940[89].f_30 = 1;
	Global_45940[89].f_8[0] = 176;
	Global_45940[90].f_45 = 0;
	Global_45940[90].f_31 = 0;
	Global_45940[90].f_42 = 0;
	Global_45940[90].f_43 = 0;
	Global_45940[90].f_2 = 1;
	Global_45940[90].f_3[0] = 1;
	Global_45940[90].f_30 = 1;
	Global_45940[90].f_8[0] = 177;
	Global_45940[91].f_45 = 0;
	Global_45940[91].f_31 = 0;
	Global_45940[91].f_42 = 0;
	Global_45940[91].f_43 = 0;
	Global_45940[91].f_2 = 1;
	Global_45940[91].f_3[0] = 0;
	Global_45940[91].f_30 = 1;
	Global_45940[91].f_8[0] = 179;
	Global_45940[92].f_45 = 0;
	Global_45940[92].f_31 = 0;
	Global_45940[92].f_42 = 0;
	Global_45940[92].f_43 = 0;
	Global_45940[92].f_2 = 1;
	Global_45940[92].f_3[0] = 2;
	Global_45940[92].f_30 = 1;
	Global_45940[92].f_8[0] = 178;
	Global_45940[93].f_45 = 0;
	Global_45940[93].f_31 = 0;
	Global_45940[93].f_42 = 0;
	Global_45940[93].f_43 = 0;
	Global_45940[93].f_2 = 1;
	Global_45940[93].f_3[0] = 1;
	Global_45940[93].f_30 = 1;
	Global_45940[93].f_8[0] = 180;
	Global_45940[94].f_45 = 0;
	Global_45940[94].f_31 = 0;
	Global_45940[94].f_42 = 0;
	Global_45940[94].f_43 = 0;
	Global_45940[94].f_2 = 2;
	Global_45940[94].f_3[0] = 4;
	Global_45940[94].f_3[1] = 0;
	Global_45940[94].f_30 = 1;
	Global_45940[94].f_8[0] = 181;
	Global_45940[95].f_45 = 0;
	Global_45940[95].f_31 = 0;
	Global_45940[95].f_42 = 0;
	Global_45940[95].f_43 = 0;
	Global_45940[95].f_2 = 1;
	Global_45940[95].f_3[0] = 37;
	Global_45940[95].f_30 = 1;
	Global_45940[95].f_8[0] = 182;
	Global_45940[96].f_45 = 0;
	Global_45940[96].f_31 = 0;
	Global_45940[96].f_42 = 0;
	Global_45940[96].f_43 = 0;
	Global_45940[96].f_2 = 1;
	Global_45940[96].f_3[0] = 37;
	Global_45940[96].f_30 = 1;
	Global_45940[96].f_8[0] = 183;
	Global_45940[97].f_45 = 0;
	Global_45940[97].f_31 = 0;
	Global_45940[97].f_42 = 0;
	Global_45940[97].f_43 = 0;
	Global_45940[97].f_2 = 1;
	Global_45940[97].f_3[0] = 37;
	Global_45940[97].f_30 = 1;
	Global_45940[97].f_8[0] = 184;
	Global_45940[98].f_45 = 0;
	Global_45940[98].f_31 = 0;
	Global_45940[98].f_42 = 0;
	Global_45940[98].f_43 = 0;
	Global_45940[98].f_2 = 1;
	Global_45940[98].f_3[0] = 54;
	Global_45940[98].f_30 = 3;
	Global_45940[98].f_8[0] = 185;
	Global_45940[98].f_8[1] = 186;
	Global_45940[98].f_8[2] = 188;
	Global_45940[99].f_45 = 0;
	Global_45940[99].f_31 = 0;
	Global_45940[99].f_42 = 0;
	Global_45940[99].f_43 = 0;
	Global_45940[99].f_2 = 1;
	Global_45940[99].f_3[0] = 55;
	Global_45940[99].f_30 = 3;
	Global_45940[99].f_8[0] = 187;
	Global_45940[99].f_8[1] = 189;
	Global_45940[99].f_8[2] = 190;
	Global_45940[100].f_45 = 0;
	Global_45940[100].f_31 = 0;
	Global_45940[100].f_42 = 0;
	Global_45940[100].f_43 = 0;
	Global_45940[100].f_2 = 3;
	Global_45940[100].f_3[0] = 56;
	Global_45940[100].f_3[1] = 0;
	Global_45940[100].f_3[2] = 2;
	Global_45940[100].f_30 = 5;
	Global_45940[100].f_8[0] = 194;
	Global_45940[100].f_8[1] = 195;
	Global_45940[100].f_8[2] = 196;
	Global_45940[100].f_8[3] = 197;
	Global_45940[100].f_8[4] = 198;
	Global_45940[101].f_45 = 0;
	Global_45940[101].f_31 = 0;
	Global_45940[101].f_42 = 0;
	Global_45940[101].f_43 = 0;
	Global_45940[101].f_2 = 2;
	Global_45940[101].f_3[0] = 57;
	Global_45940[101].f_3[1] = 0;
	Global_45940[101].f_30 = 8;
	Global_45940[101].f_8[0] = 199;
	Global_45940[101].f_8[1] = 200;
	Global_45940[101].f_8[2] = 201;
	Global_45940[101].f_8[3] = 202;
	Global_45940[101].f_8[4] = 203;
	Global_45940[101].f_8[5] = 204;
	Global_45940[101].f_8[6] = 205;
	Global_45940[101].f_8[7] = 206;
	Global_45940[102].f_45 = 0;
	Global_45940[102].f_31 = 0;
	Global_45940[102].f_42 = 0;
	Global_45940[102].f_43 = 0;
	Global_45940[102].f_2 = 2;
	Global_45940[102].f_3[0] = 58;
	Global_45940[102].f_3[1] = 0;
	Global_45940[102].f_30 = 7;
	Global_45940[102].f_8[0] = 207;
	Global_45940[102].f_8[1] = 208;
	Global_45940[102].f_8[2] = 209;
	Global_45940[102].f_8[3] = 210;
	Global_45940[102].f_8[4] = 211;
	Global_45940[102].f_8[5] = 212;
	Global_45940[102].f_8[6] = 213;
	Global_45940[103].f_45 = 0;
	Global_45940[103].f_31 = 0;
	Global_45940[103].f_42 = 0;
	Global_45940[103].f_43 = 0;
	Global_45940[103].f_2 = 2;
	Global_45940[103].f_3[0] = 59;
	Global_45940[103].f_3[1] = 0;
	Global_45940[103].f_30 = 8;
	Global_45940[103].f_8[0] = 214;
	Global_45940[103].f_8[1] = 215;
	Global_45940[103].f_8[2] = 216;
	Global_45940[103].f_8[3] = 217;
	Global_45940[103].f_8[4] = 218;
	Global_45940[103].f_8[5] = 219;
	Global_45940[103].f_8[6] = 220;
	Global_45940[103].f_8[7] = 221;
	Global_45940[104].f_45 = 0;
	Global_45940[104].f_31 = 0;
	Global_45940[104].f_42 = 0;
	Global_45940[104].f_43 = 0;
	Global_45940[104].f_2 = 2;
	Global_45940[104].f_3[0] = 60;
	Global_45940[104].f_3[1] = 2;
	Global_45940[104].f_30 = 7;
	Global_45940[104].f_8[0] = 222;
	Global_45940[104].f_8[1] = 223;
	Global_45940[104].f_8[2] = 224;
	Global_45940[104].f_8[3] = 225;
	Global_45940[104].f_8[4] = 226;
	Global_45940[104].f_8[5] = 227;
	Global_45940[104].f_8[6] = 228;
	Global_45940[105].f_45 = 0;
	Global_45940[105].f_31 = 0;
	Global_45940[105].f_42 = 0;
	Global_45940[105].f_43 = 0;
	Global_45940[105].f_2 = 2;
	Global_45940[105].f_3[0] = 61;
	Global_45940[105].f_3[1] = 2;
	Global_45940[105].f_30 = 6;
	Global_45940[105].f_8[0] = 229;
	Global_45940[105].f_8[1] = 230;
	Global_45940[105].f_8[2] = 231;
	Global_45940[105].f_8[3] = 232;
	Global_45940[105].f_8[4] = 233;
	Global_45940[105].f_8[5] = 234;
	Global_45940[106].f_45 = 0;
	Global_45940[106].f_31 = 0;
	Global_45940[106].f_42 = 0;
	Global_45940[106].f_43 = 0;
	Global_45940[106].f_2 = 2;
	Global_45940[106].f_3[0] = 62;
	Global_45940[106].f_3[1] = 2;
	Global_45940[106].f_30 = 6;
	Global_45940[106].f_8[0] = 235;
	Global_45940[106].f_8[1] = 236;
	Global_45940[106].f_8[2] = 237;
	Global_45940[106].f_8[3] = 238;
	Global_45940[106].f_8[4] = 239;
	Global_45940[106].f_8[5] = 240;
	Global_45940[107].f_45 = 0;
	Global_45940[107].f_31 = 0;
	Global_45940[107].f_42 = 0;
	Global_45940[107].f_43 = 0;
	Global_45940[107].f_2 = 1;
	Global_45940[107].f_3[0] = 36;
	Global_45940[107].f_30 = 1;
	Global_45940[107].f_8[0] = 241;
	Global_45940[108].f_45 = 0;
	Global_45940[108].f_31 = 0;
	Global_45940[108].f_42 = 0;
	Global_45940[108].f_43 = 0;
	Global_45940[108].f_2 = 1;
	Global_45940[108].f_3[0] = 36;
	Global_45940[108].f_30 = 1;
	Global_45940[108].f_8[0] = 242;
	Global_45940[109].f_45 = 0;
	Global_45940[109].f_31 = 0;
	Global_45940[109].f_42 = 0;
	Global_45940[109].f_43 = 0;
	Global_45940[109].f_2 = 1;
	Global_45940[109].f_3[0] = 36;
	Global_45940[109].f_30 = 1;
	Global_45940[109].f_8[0] = 243;
	Global_45940[110].f_45 = 0;
	Global_45940[110].f_31 = 0;
	Global_45940[110].f_42 = 0;
	Global_45940[110].f_43 = 0;
	Global_45940[110].f_2 = 1;
	Global_45940[110].f_3[0] = 65;
	Global_45940[110].f_30 = 1;
	Global_45940[110].f_8[0] = 244;
	Global_45940[111].f_45 = 0;
	Global_45940[111].f_31 = 0;
	Global_45940[111].f_42 = 0;
	Global_45940[111].f_43 = 0;
	Global_45940[111].f_2 = 1;
	Global_45940[111].f_3[0] = 65;
	Global_45940[111].f_30 = 1;
	Global_45940[111].f_8[0] = 245;
	Global_45940[112].f_45 = 0;
	Global_45940[112].f_31 = 0;
	Global_45940[112].f_42 = 0;
	Global_45940[112].f_43 = 0;
	Global_45940[112].f_2 = 1;
	Global_45940[112].f_3[0] = 65;
	Global_45940[112].f_30 = 1;
	Global_45940[112].f_8[0] = 246;
	Global_45940[113].f_45 = 0;
	Global_45940[113].f_31 = 0;
	Global_45940[113].f_42 = 0;
	Global_45940[113].f_43 = 0;
	Global_45940[113].f_2 = 1;
	Global_45940[113].f_3[0] = 65;
	Global_45940[113].f_30 = 1;
	Global_45940[113].f_8[0] = 247;
	Global_45940[114].f_45 = 0;
	Global_45940[114].f_31 = 0;
	Global_45940[114].f_42 = 0;
	Global_45940[114].f_43 = 0;
	Global_45940[114].f_2 = 2;
	Global_45940[114].f_3[0] = 19;
	Global_45940[114].f_3[1] = 1;
	Global_45940[114].f_30 = 21;
	Global_45940[114].f_8[0] = 249;
	Global_45940[114].f_8[1] = 250;
	Global_45940[114].f_8[2] = 251;
	Global_45940[114].f_8[3] = 252;
	Global_45940[114].f_8[4] = 253;
	Global_45940[114].f_8[5] = 254;
	Global_45940[114].f_8[6] = 255;
	Global_45940[114].f_8[7] = 256;
	Global_45940[114].f_8[8] = 257;
	Global_45940[114].f_8[9] = 258;
	Global_45940[114].f_8[10] = 259;
	Global_45940[114].f_8[11] = 260;
	Global_45940[114].f_8[12] = 261;
	Global_45940[114].f_8[13] = 262;
	Global_45940[114].f_8[14] = 263;
	Global_45940[114].f_8[15] = 264;
	Global_45940[114].f_8[16] = 265;
	Global_45940[114].f_8[17] = 266;
	Global_45940[114].f_8[18] = 267;
	Global_45940[114].f_8[19] = 268;
	Global_45940[114].f_8[20] = 269;
	Global_45940[115].f_45 = 0;
	Global_45940[115].f_31 = 0;
	Global_45940[115].f_42 = 0;
	Global_45940[115].f_43 = 0;
	Global_45940[115].f_2 = 4;
	Global_45940[115].f_3[0] = 0;
	Global_45940[115].f_3[1] = 1;
	Global_45940[115].f_3[2] = 2;
	Global_45940[115].f_3[3] = 16;
	Global_45940[115].f_30 = 1;
	Global_45940[115].f_8[0] = 270;
	Global_45940[116].f_45 = 0;
	Global_45940[116].f_31 = 0;
	Global_45940[116].f_42 = 0;
	Global_45940[116].f_43 = 0;
	Global_45940[116].f_2 = 4;
	Global_45940[116].f_3[0] = 0;
	Global_45940[116].f_3[1] = 1;
	Global_45940[116].f_3[2] = 2;
	Global_45940[116].f_3[3] = 16;
	Global_45940[116].f_30 = 1;
	Global_45940[116].f_8[0] = 271;
	Global_45940[117].f_45 = 0;
	Global_45940[117].f_31 = 0;
	Global_45940[117].f_42 = 0;
	Global_45940[117].f_43 = 0;
	Global_45940[117].f_2 = 4;
	Global_45940[117].f_3[0] = 0;
	Global_45940[117].f_3[1] = 1;
	Global_45940[117].f_3[2] = 2;
	Global_45940[117].f_3[3] = 16;
	Global_45940[117].f_30 = 1;
	Global_45940[117].f_8[0] = 272;
	Global_45940[118].f_45 = 0;
	Global_45940[118].f_31 = 0;
	Global_45940[118].f_42 = 0;
	Global_45940[118].f_43 = 0;
	Global_45940[118].f_2 = 4;
	Global_45940[118].f_3[0] = 0;
	Global_45940[118].f_3[1] = 1;
	Global_45940[118].f_3[2] = 2;
	Global_45940[118].f_3[3] = 16;
	Global_45940[118].f_30 = 1;
	Global_45940[118].f_8[0] = 273;
	Global_45940[119].f_45 = 0;
	Global_45940[119].f_31 = 0;
	Global_45940[119].f_42 = 0;
	Global_45940[119].f_43 = 0;
	Global_45940[119].f_2 = 4;
	Global_45940[119].f_3[0] = 0;
	Global_45940[119].f_3[1] = 1;
	Global_45940[119].f_3[2] = 2;
	Global_45940[119].f_3[3] = 16;
	Global_45940[119].f_30 = 1;
	Global_45940[119].f_8[0] = 274;
	Global_45940[120].f_45 = 0;
	Global_45940[120].f_31 = 0;
	Global_45940[120].f_42 = 0;
	Global_45940[120].f_43 = 0;
	Global_45940[120].f_2 = 4;
	Global_45940[120].f_3[0] = 0;
	Global_45940[120].f_3[1] = 1;
	Global_45940[120].f_3[2] = 2;
	Global_45940[120].f_3[3] = 16;
	Global_45940[120].f_30 = 1;
	Global_45940[120].f_8[0] = 275;
	Global_45940[121].f_45 = 0;
	Global_45940[121].f_31 = 0;
	Global_45940[121].f_42 = 0;
	Global_45940[121].f_43 = 0;
	Global_45940[121].f_2 = 4;
	Global_45940[121].f_3[0] = 0;
	Global_45940[121].f_3[1] = 1;
	Global_45940[121].f_3[2] = 2;
	Global_45940[121].f_3[3] = 16;
	Global_45940[121].f_30 = 1;
	Global_45940[121].f_8[0] = 276;
}

void func_70()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

