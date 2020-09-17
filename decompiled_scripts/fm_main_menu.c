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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_76 = 3f;
	fLocal_77 = 0f;
	fLocal_78 = 2f;
	fLocal_79 = 100f;
	iLocal_94 = -1;
	fLocal_96 = 0.5f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_20();
	}
	HUD::REQUEST_ADDITIONAL_TEXT("FMMC", 2);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
	uLocal_223 = Global_4456448.f_2;
	Global_1312441 = 0;
	Local_102.f_5 = Global_4456448;
	Global_1312371 = 0;
	Global_1312442 = 0;
	iLocal_222 = Global_4456448;
	if (Global_4456448 == 0)
	{
		Global_4456448.f_2 = uLocal_223;
	}
	Global_1653486 = 0;
	while (true)
	{
		if (iLocal_222 != Global_4456448)
		{
			func_19(&Local_102);
			iLocal_222 = Global_4456448;
			MISC::CLEAR_BIT(&(Local_102.f_4), 0);
		}
		if (func_18() == 3)
		{
			func_20();
		}
		if (func_17())
		{
			func_20();
		}
		SYSTEM::WAIT(0);
		switch (iLocal_220)
		{
			case 0:
				HUD::REQUEST_ADDITIONAL_TEXT("FMMC", 2);
				if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("FMMC", 2))
				{
					iLocal_220 = 1;
				}
				break;
			
			case 1:
				if (Local_102.f_5 != Global_4456448)
				{
					Local_102.f_5 = Global_4456448;
					func_19(&Local_102);
				}
				HUD::DISABLE_FRONTEND_THIS_FRAME();
				func_16(&Local_102);
				Global_1653487 = 0;
				Global_1653486 = 0;
				iLocal_220 = 4;
				if (!func_15())
				{
					func_14();
				}
				break;
			
			case 4:
				if (func_13(1))
				{
					if (Global_4456448.f_2 == 5)
					{
						if (func_12(&uLocal_221))
						{
							iLocal_220 = 2;
						}
					}
					else if (func_11())
					{
						if (func_10(&uLocal_221))
						{
							iLocal_220 = 2;
						}
					}
					else if (Global_4456448.f_2 == 11)
					{
						if (func_9(&uLocal_221))
						{
							iLocal_220 = 2;
						}
					}
					else if (Global_4456448.f_2 == 12)
					{
						if (func_8(&uLocal_221))
						{
							iLocal_220 = 2;
						}
					}
					else if (Global_4456448.f_2 != 6 && Global_4456448 != 4)
					{
						if (func_7(&uLocal_221))
						{
							iLocal_220 = 2;
						}
					}
					else if (func_6(&uLocal_221))
					{
						iLocal_220 = 2;
					}
				}
				else if (Global_4456448 == 1)
				{
					if (func_5(&uLocal_221))
					{
						iLocal_220 = 2;
					}
				}
				else if (func_4())
				{
					if (func_2(&uLocal_221))
					{
						iLocal_220 = 2;
					}
				}
				if (Global_1653486 == 1)
				{
					iLocal_220 = 3;
					Global_1653486 = 0;
				}
				break;
			
			case 3:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 217))
				{
					iLocal_220 = 1;
				}
				break;
			
			case 2:
				iLocal_220 = 1;
				break;
			
			case 5:
				func_16(&Local_102);
				break;
			
			case 8:
				func_20();
				break;
		}
		if (Global_1312442)
		{
			Global_1312442 = 0;
			func_20();
		}
		if (func_1())
		{
			Global_1312442 = 0;
			func_20();
		}
		if (Global_4456448.f_194127)
		{
			func_20();
		}
		if (Global_1312443)
		{
			func_20();
		}
	}
}

bool func_1()
{
	return Global_1312371;
}

int func_2(var uParam0)
{
	if (!MISC::IS_BIT_SET(*uParam0, 2))
	{
		SCRIPT::REQUEST_SCRIPT("FM_Race_Creator");
		if (SCRIPT::HAS_SCRIPT_LOADED("FM_Race_Creator"))
		{
			if (!func_3())
			{
				SYSTEM::START_NEW_SCRIPT("FM_Race_Creator", 35000);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("FM_Race_Creator");
				MISC::SET_BIT(uParam0, 2);
			}
		}
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1141911594) == 0)
	{
		MISC::CLEAR_BIT(uParam0, 2);
		return 1;
	}
	return 0;
}

int func_3()
{
	if (((((((SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1768762336) > 0 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1518439287) > 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1141911594) > 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-884469787) > 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(229048663) > 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1121276913) > 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1167339987) > 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1844397475) > 0)
	{
		return 1;
	}
	return 0;
}

int func_4()
{
	if (Global_4456448 == 2 || Global_4456448 == 8)
	{
		return 1;
	}
	return 0;
}

int func_5(var uParam0)
{
	if (!MISC::IS_BIT_SET(*uParam0, 2))
	{
		SCRIPT::REQUEST_SCRIPT("FM_Deathmatch_Creator");
		if (SCRIPT::HAS_SCRIPT_LOADED("FM_Deathmatch_Creator"))
		{
			if (!func_3())
			{
				SYSTEM::START_NEW_SCRIPT("FM_Deathmatch_Creator", 35000);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("FM_Deathmatch_Creator");
				MISC::SET_BIT(uParam0, 2);
			}
		}
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1518439287) == 0)
	{
		MISC::CLEAR_BIT(uParam0, 2);
		return 1;
	}
	return 0;
}

int func_6(var uParam0)
{
	if (!MISC::IS_BIT_SET(*uParam0, 2))
	{
		SCRIPT::REQUEST_SCRIPT("FM_Capture_Creator");
		if (SCRIPT::HAS_SCRIPT_LOADED("FM_Capture_Creator"))
		{
			if (!func_3())
			{
				SYSTEM::START_NEW_SCRIPT("FM_Capture_Creator", 35000);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("FM_Capture_Creator");
				MISC::SET_BIT(uParam0, 2);
			}
		}
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-884469787) == 0)
	{
		MISC::CLEAR_BIT(uParam0, 2);
		return 1;
	}
	return 0;
}

int func_7(var uParam0)
{
	if (!MISC::IS_BIT_SET(*uParam0, 2))
	{
		SCRIPT::REQUEST_SCRIPT("FM_Mission_Creator");
		if (SCRIPT::HAS_SCRIPT_LOADED("FM_Mission_Creator"))
		{
			if (!func_3())
			{
				SYSTEM::START_NEW_SCRIPT("FM_Mission_Creator", 35000);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("FM_Mission_Creator");
				MISC::SET_BIT(uParam0, 2);
			}
		}
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1768762336) == 0)
	{
		MISC::CLEAR_BIT(uParam0, 2);
		return 1;
	}
	return 0;
}

int func_8(var uParam0)
{
	if (!MISC::IS_BIT_SET(*uParam0, 2))
	{
		SCRIPT::REQUEST_SCRIPT("Freemode_Creator");
		if (SCRIPT::HAS_SCRIPT_LOADED("Freemode_Creator"))
		{
			if (!func_3())
			{
				SYSTEM::START_NEW_SCRIPT("Freemode_Creator", 35000);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("Freemode_Creator");
				MISC::SET_BIT(uParam0, 2);
			}
		}
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1844397475) == 0)
	{
		MISC::CLEAR_BIT(uParam0, 2);
		return 1;
	}
	return 0;
}

int func_9(var uParam0)
{
	if (!MISC::IS_BIT_SET(*uParam0, 2))
	{
		SCRIPT::REQUEST_SCRIPT("Basic_Creator");
		if (SCRIPT::HAS_SCRIPT_LOADED("Basic_Creator"))
		{
			if (!func_3())
			{
				SYSTEM::START_NEW_SCRIPT("Basic_Creator", 35000);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("Basic_Creator");
				MISC::SET_BIT(uParam0, 2);
			}
		}
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1167339987) == 0)
	{
		MISC::CLEAR_BIT(uParam0, 2);
		return 1;
	}
	return 0;
}

int func_10(var uParam0)
{
	if (!MISC::IS_BIT_SET(*uParam0, 2))
	{
		SCRIPT::REQUEST_SCRIPT("FM_Survival_Creator");
		if (SCRIPT::HAS_SCRIPT_LOADED("FM_Survival_Creator"))
		{
			if (!func_3())
			{
				SYSTEM::START_NEW_SCRIPT("FM_Survival_Creator", 35000);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("FM_Survival_Creator");
				MISC::SET_BIT(uParam0, 2);
			}
		}
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1121276913) == 0)
	{
		MISC::CLEAR_BIT(uParam0, 2);
		return 1;
	}
	return 0;
}

bool func_11()
{
	return Global_4456448 == 3;
}

int func_12(var uParam0)
{
	if (!MISC::IS_BIT_SET(*uParam0, 2))
	{
		SCRIPT::REQUEST_SCRIPT("FM_LTS_Creator");
		if (SCRIPT::HAS_SCRIPT_LOADED("FM_LTS_Creator"))
		{
			if (!func_3())
			{
				SYSTEM::START_NEW_SCRIPT("FM_LTS_Creator", 35000);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("FM_LTS_Creator");
				MISC::SET_BIT(uParam0, 2);
			}
		}
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(229048663) == 0)
	{
		MISC::CLEAR_BIT(uParam0, 2);
		return 1;
	}
	return 0;
}

int func_13(bool bParam0)
{
	if (!bParam0)
	{
		return Global_4456448 == 0;
	}
	if ((((((Global_4456448 == 0 || Global_4456448 == 4) || Global_4456448 == 6) || Global_4456448 == 3) || Global_4456448 == 31) || Global_4456448.f_2 == 6) || Global_4456448.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

void func_14()
{
	Global_22211.f_5 = 1;
}

bool func_15()
{
	return (Global_22211.f_5 || Global_22211.f_6);
}

void func_16(var uParam0)
{
	if (Global_4456448 == 0)
	{
		Global_4456448.f_201 = uParam0->f_8[0][5];
		Global_4456448.f_202 = uParam0->f_8[0][5];
		Global_4456448.f_206 = uParam0->f_8[0][7] + 1;
	}
	else if (Global_4456448 == 1)
	{
		Global_4456448.f_201 = uParam0->f_8[1][0];
		Global_4456448.f_226 = uParam0->f_8[1][2];
		Global_4456448.f_229 = uParam0->f_8[1][3];
		Global_4456448.f_203 = uParam0->f_8[1][4];
		Global_4456448.f_116794 = uParam0->f_8[1][5];
		Global_4456448.f_116793 = uParam0->f_8[1][6];
		Global_4456448.f_235 = uParam0->f_8[1][7];
		Global_4456448.f_78235 = uParam0->f_8[1][8];
		Global_4456448.f_240 = uParam0->f_8[1][9];
		Global_4456448.f_230 = uParam0->f_8[1][10];
		Global_4456448.f_232 = uParam0->f_8[1][11];
		Global_4456448.f_234 = uParam0->f_8[1][12];
		Global_4456448.f_233 = uParam0->f_8[1][13];
		Global_4456448.f_124063 = uParam0->f_8[1][14];
	}
	else if (Global_4456448 == 2)
	{
		Global_4456448.f_201 = uParam0->f_8[2][4];
		Global_4456448.f_75707 = uParam0->f_8[2][14];
		Global_4456448.f_75704 = uParam0->f_8[2][7];
	}
}

bool func_17()
{
	return Global_1312368;
}

int func_18()
{
	if (MISC::IS_BIT_SET(Global_1377170.f_102, 1))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_1377170.f_102, 2))
	{
		MISC::CLEAR_BIT(&(Global_1377170.f_102), 2);
		return 2;
	}
	if (MISC::IS_BIT_SET(Global_1377170.f_102, 3))
	{
		MISC::CLEAR_BIT(&(Global_1377170.f_102), 3);
		return 3;
	}
	return 0;
}

void func_19(var uParam0)
{
}

void func_20()
{
	func_21();
	Global_4456448.f_194127 = 0;
	Global_1312441 = 1;
	Global_1312442 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_21()
{
	Global_22211.f_5 = 0;
}

