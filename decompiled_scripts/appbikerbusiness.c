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
	iLocal_499 = 1;
	iLocal_500 = 1;
	iLocal_506 = -1;
	iLocal_508 = -1;
	iLocal_509 = -1;
	iLocal_513 = -1;
	iLocal_694 = -1;
	iLocal_696 = -1;
	iLocal_697 = -1;
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("appBikerBusiness")) > 1)
	{
		func_508(1);
	}
	uLocal_683 = unk_0x67D02A194A2FC2BD("BIKER_BUSINESSES");
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_683))
	{
		SYSTEM::WAIT(0);
	}
	func_505(1);
	func_503(1);
	func_502();
	HUD::THEFEED_PAUSE();
	func_501(1);
	if (func_500(PLAYER::PLAYER_ID()))
	{
		iLocal_512 = func_498(PLAYER::PLAYER_ID());
	}
	else if (func_497())
	{
		iLocal_512 = Global_1694834;
	}
	else
	{
		func_485(PLAYER::PLAYER_ID(), 0, 0, 0);
	}
	func_467();
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		Local_495 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (!func_464(7638, -1, -1))
	{
		func_461();
	}
	if (MISC::IS_PC_VERSION())
	{
		func_460(1, 1, 1, 1);
	}
	if (iLocal_512 != 0)
	{
		iVar0 = func_459(iLocal_512);
		if (iVar0 != -1)
		{
			if (func_458(PLAYER::PLAYER_ID(), iLocal_512) == func_457(iLocal_512))
			{
				if (!MISC::IS_BIT_SET(Global_1370172, iVar0))
				{
					func_456(iVar0, 1, 0);
					MISC::SET_BIT(&Global_1370172, iVar0);
				}
			}
			else
			{
				MISC::CLEAR_BIT(&Global_1370172, iVar0);
			}
		}
	}
	while (func_455())
	{
		if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 14) || func_454(PLAYER::PLAYER_PED_ID(), Local_495, 1) > 5f)
		{
			func_508(0);
		}
		else if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			func_508(0);
		}
		else if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_508(0);
		}
		else if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_508(0);
		}
		if (func_453(PLAYER::PLAYER_ID()) || ((!func_464(7638, -1, -1) && func_451(PLAYER::PLAYER_ID())) && func_429()))
		{
			func_428(7638, 1, -1, 1);
		}
		func_415();
		func_414();
		if (iLocal_512 != 0)
		{
			iVar1 = func_459(iLocal_512);
			if ((iVar1 > -1 && iVar1 < 6) && iLocal_510 != Global_1370164[iVar1])
			{
				func_467();
			}
		}
		if (iLocal_513 == -1 && !Global_1676237)
		{
			func_11();
		}
		else if (iLocal_509 != 190)
		{
			if (!func_10(&uLocal_514))
			{
				func_9(&uLocal_514, 0, 0);
			}
			else if (func_8(&uLocal_514, 200, 0))
			{
				if (!Global_1676237)
				{
					func_3(PLAYER::PLAYER_ID(), iLocal_512, iLocal_513, 1);
					Global_1676237 = 1;
					func_508(0);
				}
				else if (!Global_1676377.f_3098)
				{
					func_1();
				}
			}
		}
		else if (!func_10(&uLocal_516))
		{
			func_9(&uLocal_516, 0, 0);
			CAM::DO_SCREEN_FADE_OUT(800);
		}
		else if (!Global_1676377.f_3098)
		{
			if (MISC::IS_BIT_SET(Global_1370139, 0))
			{
				func_1();
			}
			else if (func_8(&uLocal_516, 15000, 0))
			{
				func_1();
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	if (!func_2())
	{
		Global_1676377.f_3098 = 1;
	}
}

bool func_2()
{
	return Global_1676377.f_474;
}

void func_3(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_7(PLAYER::PLAYER_ID(), iParam1))
	{
		iVar0 = func_4(PLAYER::PLAYER_ID(), iParam1);
		if (bParam3)
		{
			Global_1590535[iParam0].f_274.f_183[iVar0].f_10 = iParam2 + 1;
		}
		else
		{
			Global_1590535[iParam0].f_274.f_183[iVar0].f_10 = 0;
		}
	}
}

int func_4(int iParam0, int iParam1)
{
	if (func_6(iParam1) && iParam0 != func_5())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_5()
{
	return -1;
}

int func_6(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_7(int iParam0, int iParam1)
{
	if (func_6(iParam1) && iParam0 != func_5())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_8(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_9(uParam0, bParam2, 0);
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

void func_9(var uParam0, bool bParam1, bool bParam2)
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

bool func_10(var uParam0)
{
	return uParam0->f_1;
}

void func_11()
{
	PAD::ENABLE_CONTROL_ACTION(2, 201, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 237, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_683, "GET_CURRENT_SELECTION");
		uLocal_684 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_683, "GET_SELECTED_BUSINESS_ID");
		uLocal_686 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_683, "GET_CURRENT_SCREEN_ID");
		uLocal_687 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		iLocal_500 = 0;
		iLocal_499 = 0;
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_CONTROL_JUST_PRESSED(2, 238)) && iLocal_500)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_683, "GET_CURRENT_SCREEN_ID");
		uLocal_687 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		iLocal_500 = 0;
	}
	if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_687) && !iLocal_500)
	{
		iLocal_508 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_687);
		iLocal_500 = 1;
	}
	if (iLocal_504 && !iLocal_505)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_683, "GET_CURRENT_ROLLOVER");
		uLocal_685 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		iLocal_505 = 1;
	}
	if (iLocal_505)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_685))
		{
			iLocal_506 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_685);
			iLocal_505 = 0;
		}
	}
	if (iLocal_506 == 3014 && func_413())
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("OR_RSP_TUT");
		HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, 8000);
		iVar0 = func_410(9356, -1, -1) + 1;
		func_409(9356, iVar0, -1, 1);
		iLocal_503 = 1;
	}
	if (!iLocal_499)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_684) && GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_686))
		{
			iVar1 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_684);
			iVar2 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_686);
			iVar3 = -1;
			if (iLocal_512 != 0)
			{
				iVar3 = func_459(iLocal_512);
			}
			switch (iVar1)
			{
				case 101:
					func_241(1, iVar2);
					break;
				
				case 102:
					func_241(0, iVar2);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Cancel", "DLC_Biker_Computer_Sounds", 1);
					break;
				
				case 2001:
					func_217(iVar2, iVar1);
					break;
				
				case 3001:
					if (Global_1370164[iVar3] >= Global_262145.f_17916)
					{
						func_216(0, "OR_MIS_NA_B", "OR_OVRLY_OK", "", -1, 1);
					}
					else if (func_215(iVar3))
					{
						func_216(0, "OR_MIS_NA_C", "OR_OVRLY_OK", "", -1, 1);
					}
					break;
				
				case 3002:
					if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iVar3].f_4 <= 0)
					{
						func_216(0, "OR_UPGR_NS", "OR_OVRLY_OK", "", -1, 1);
					}
					else if (func_204(iLocal_512) == 2)
					{
						func_216(0, "OR_UPGR_RES", "OR_OVRLY_OK", "", -1, 1);
					}
					break;
				
				case 3003:
					if (func_203(PLAYER::PLAYER_ID()))
					{
						func_216(0, "BKR_TF_R3", "OR_OVRLY_OK", "", -1, 1);
					}
					else if (!func_201(192))
					{
						if (func_200(PLAYER::PLAYER_ID()) && !func_203(PLAYER::PLAYER_ID()))
						{
							iVar4 = func_31(PLAYER::PLAYER_ID(), 192, 0);
						}
						if (iVar4 == 15)
						{
							func_216(0, "GENERAL_MLF_G1", "OR_OVRLY_OK", "", -1, 1);
						}
						else if (iVar4 == 16)
						{
							func_216(0, "GENERAL_MLF_G4", "OR_OVRLY_OK", "", -1, 1);
						}
						else
						{
							func_216(0, "BKR_TF_R6", "OR_OVRLY_OK", "", -1, 1);
						}
					}
					else
					{
						func_216(iVar1, "OR_BUS_SETUP", "WHOUSE_CONF", "WHOUSE_CANC", -1, 0);
					}
					break;
				
				case 3005:
					if (func_215(iVar3))
					{
						func_216(0, "UA_CANT_SDOWN", "OR_OVRLY_OK", "", -1, 1);
					}
					else
					{
						func_216(iVar1, "OR_STOP_PROD", "WHOUSE_CONF", "WHOUSE_CANC", -1, 0);
					}
					break;
				
				case 3006:
					if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iVar3].f_4 <= 0)
					{
						func_216(0, "OR_BS_NOT_SETUP", "OR_OVRLY_OK", "", -1, 1);
					}
					else if (Global_1370164[iVar3] <= 0)
					{
						func_216(iVar1, "OR_START_PRD_NS", "WHOUSE_CONF", "WHOUSE_CANC", -1, 0);
					}
					else
					{
						func_216(iVar1, "OR_START_PROD", "WHOUSE_CONF", "WHOUSE_CANC", -1, 0);
					}
					break;
				
				case 3008:
				case 3009:
				case 3010:
					iVar5 = (iVar1 - 3008);
					func_18(iVar5, iVar1);
					break;
				
				case 3011:
				case 3012:
				case 3013:
					func_15(iVar1, iVar1 == 3012);
					break;
				
				case 3014:
					iVar6 = Global_1370164[iVar3];
					iVar7 = func_13(0, iVar6, 0);
					if (Global_262145.f_18480)
					{
						func_216(0, "OR_BS_PAY_NA", "OR_OVRLY_OK", "", -1, 1);
					}
					else if (Global_1370164[iVar3] >= Global_262145.f_17916)
					{
						func_216(0, "OR_MIS_NA_B", "OR_OVRLY_OK", "", -1, 1);
					}
					else if (func_215(iVar3))
					{
						func_216(0, "OR_MIS_NA_C", "OR_OVRLY_OK", "", -1, 1);
					}
					else if (!MONEY::NETWORK_CAN_SPEND_MONEY(iVar7, 0, 1, 0, -1, 0))
					{
						func_216(0, "OR_BS_PAY_NM", "OR_OVRLY_OK", "", -1, 1);
					}
					else
					{
						func_216(iVar1, "OR_BUY_SUP", "WHOUSE_CONF", "WHOUSE_CANC", iVar7, 0);
					}
					break;
				
				case 3015:
					func_12(iVar1);
					break;
			}
			iLocal_499 = 1;
		}
	}
}

void func_12(int iParam0)
{
	if (Global_1370164[func_459(iLocal_512)] >= Global_262145.f_17916)
	{
		func_216(0, "OR_MIS_NA_B", "OR_OVRLY_OK", "", -1, 1);
	}
	else if (func_215(func_459(iLocal_512)))
	{
		func_216(0, "OR_MIS_NA_C", "OR_OVRLY_OK", "", -1, 1);
	}
	else if (!func_201(192))
	{
		if (func_200(PLAYER::PLAYER_ID()) && !func_203(PLAYER::PLAYER_ID()))
		{
			iVar0 = func_31(PLAYER::PLAYER_ID(), 192, 0);
		}
		if (iVar0 == 15)
		{
			func_216(0, "GENERAL_MLF_G1", "OR_OVRLY_OK", "", -1, 1);
		}
		else if (iVar0 == 16)
		{
			func_216(0, "GENERAL_MLF_G4", "OR_OVRLY_OK", "", -1, 1);
		}
		else
		{
			func_216(0, "OR_MIS_NA_B", "OR_OVRLY_OK", "", -1, 1);
		}
		iLocal_507 = 0;
	}
	else
	{
		func_216(iParam0, "OR_STEAL_SUP", "WHOUSE_CONF", "WHOUSE_CANC", -1, 0);
	}
}

int func_13(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (bParam0)
		{
			iVar0 = Global_262145.f_21079;
		}
		else
		{
			iVar0 = Global_262145.f_21078;
		}
	}
	else if (bParam0)
	{
		iVar0 = Global_262145.f_17630;
	}
	else
	{
		iVar0 = Global_262145.f_18481;
	}
	fVar2 = (SYSTEM::TO_FLOAT((100 - iParam1)) / 20f);
	iVar1 = SYSTEM::CEIL(fVar2);
	iVar1 = func_14(iVar1, 0, 5);
	return (iVar1 * iVar0);
}

int func_14(int iParam0, int iParam1, int iParam2)
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

void func_15(int iParam0, bool bParam1)
{
	if (func_17(iLocal_512))
	{
		func_216(0, "OR_BUS_EMPTY", "OR_OVRLY_OK", "", -1, 1);
	}
	else if (!func_201(190))
	{
		if (func_200(PLAYER::PLAYER_ID()) && !func_203(PLAYER::PLAYER_ID()))
		{
			iVar0 = func_31(PLAYER::PLAYER_ID(), 190, 0);
		}
		if (iVar0 == 15)
		{
			func_216(0, "GENERAL_MLF_G1", "OR_OVRLY_OK", "", -1, 1);
		}
		else if (iVar0 == 16)
		{
			func_216(0, "GENERAL_MLF_G4", "OR_OVRLY_OK", "", -1, 1);
		}
		else
		{
			func_216(0, "OR_MIS_NA", "OR_OVRLY_OK", "", -1, 1);
		}
	}
	else if (func_16(iLocal_512) > 25)
	{
		if (bParam1)
		{
			func_216(1003, "OR_SELL_GDB", "OR_OVRLY_OK", "", -1, 0);
		}
		else
		{
			func_216(1002, "OR_SELL_GDB", "OR_OVRLY_OK", "", -1, 0);
		}
	}
	else
	{
		func_216(iParam0, "OR_SELL_GD", "WHOUSE_CONF", "WHOUSE_CANC", -1, 0);
	}
}

int func_16(int iParam0)
{
	iVar0 = func_457(iParam0);
	iVar1 = func_458(PLAYER::PLAYER_ID(), iParam0);
	fVar2 = ((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar0)) * 100f);
	return SYSTEM::ROUND(fVar2);
}

int func_17(int iParam0)
{
	if (func_7(PLAYER::PLAYER_ID(), iParam0))
	{
		iVar0 = func_459(iParam0);
		return Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iVar0].f_1 == 0;
	}
	return 0;
}

void func_18(int iParam0, int iParam1)
{
	iVar0 = func_459(iLocal_512);
	if (!func_30(iVar0))
	{
		func_216(0, "OR_UPGR_NA", "OR_OVRLY_OK", "", -1, 1);
	}
	else if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iVar0].f_4 <= 0)
	{
		func_216(0, "OR_UPGR_NS", "OR_OVRLY_OK", "", -1, 1);
	}
	else if (func_29(iParam0, iLocal_512))
	{
		func_216(0, "OR_UPGR_NA", "OR_OVRLY_OK", "", -1, 1);
	}
	else if (func_28(PLAYER::PLAYER_ID(), iLocal_512, iParam0))
	{
		func_216(0, "OR_UPGR_OWN", "OR_OVRLY_OK", "", -1, 1);
	}
	else if (MONEY::NETWORK_CAN_SPEND_MONEY(func_19(iParam0, iLocal_512), 0, 1, 0, -1, 0))
	{
		func_216(iParam1, "OR_BUY_UPGR", "WHOUSE_CONF", "WHOUSE_CANC", -1, 0);
	}
	else
	{
		func_216(0, "OR_UPG_NO_MONEY", "OR_OVRLY_OK", "", -1, 1);
	}
}

int func_19(int iParam0, int iParam1)
{
	iVar0 = func_27(iParam1);
	switch (iVar0)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_17600;
				
				case 2:
					return Global_262145.f_17601;
				
				case 1:
					return Global_262145.f_17602;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_17603;
				
				case 2:
					return Global_262145.f_17604;
				
				case 1:
					return Global_262145.f_17605;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_17606;
				
				case 2:
					return Global_262145.f_17607;
				
				case 1:
					return Global_262145.f_17608;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_17609;
				
				case 2:
					return Global_262145.f_17610;
				
				case 1:
					return Global_262145.f_17611;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_17612;
				
				case 2:
					return Global_262145.f_17613;
				
				case 1:
					return Global_262145.f_17614;
				
				default:
			}
			break;
		
		case 5:
			iVar1 = func_26(PLAYER::PLAYER_ID());
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_25())
			{
				iVar2 = 0;
				iVar3 = 0;
				if (iParam0 == 8)
				{
					iVar2 = 2;
					iVar3 = func_21(iVar2, iParam1, iVar1);
				}
				else if (iParam0 == 7)
				{
					iVar2 = 1;
					iVar3 = func_21(iVar2, iParam1, iVar1);
				}
				else if (iParam0 == 5 || iParam0 == 11)
				{
					iVar2 = 2;
				}
				else if ((((((iParam0 == 4 || iParam0 == 10) || iParam0 == 6) || iParam0 == 9) || iParam0 == 0) || iParam0 == 2) || iParam0 == 1)
				{
					iVar2 = 1;
				}
				func_20(&sVar4, iVar0, iParam0, iVar2, iVar3);
				uVar20 = MISC::GET_HASH_KEY(&sVar4);
				if (NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(uVar20))
				{
					uVar21 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(uVar20, 426439576, 1);
					return uVar21;
				}
			}
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_20960;
				
				case 2:
					return Global_262145.f_20961;
				
				case 1:
					return Global_262145.f_20962;
				
				case 3:
					return Global_262145.f_20950;
				
				case 4:
					return Global_262145.f_20951;
				
				case 5:
					return Global_262145.f_20952;
				
				case 6:
					return Global_262145.f_20953;
				
				case 7:
					if (func_21(1, iParam1, iVar1) == 0)
					{
						return Global_262145.f_20954;
					}
					else
					{
						return (0 + Global_262145.f_20955);
					}
					break;
				
				case 8:
					if (func_21(2, iParam1, iVar1) == 0)
					{
						return (Global_262145.f_20954 + Global_262145.f_20956);
					}
					else
					{
						return (0 + Global_262145.f_20956);
					}
					break;
				
				case 9:
					return Global_262145.f_20957;
				
				case 10:
					return Global_262145.f_20958;
				
				case 11:
					return Global_262145.f_20959;
			}
			break;
	}
	return 0;
}

void func_20(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 5:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_EQUIP_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 1:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_STAFF_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 2:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_SEC_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 3:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_DECOR_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 4:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_DECOR_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 5:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_DECOR_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 6:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_ACCOM_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 7:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_RANGE_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 8:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_RANGE_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 9:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_GNLCK_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 10:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_TRNPT_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 11:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_TRNPT_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
			}
			break;
	}
}

int func_21(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 0)
	{
		if (iParam1 != iParam2)
		{
			return 0;
		}
		if (func_22(5381, -1, 0) == 0)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_22(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_23(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_23(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_24();
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

int func_24()
{
	return Global_1312745;
}

int func_25()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_26(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	return Global_1590535[iParam0].f_274.f_183[5];
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

int func_28(int iParam0, int iParam1, int iParam2)
{
	if (func_7(iParam0, iParam1))
	{
		iVar0 = func_4(iParam0, iParam1);
		return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_183[iVar0].f_5, iParam2);
	}
	return 0;
}

int func_29(int iParam0, int iParam1)
{
	iVar0 = func_27(iParam1);
	switch (iVar0)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_17767;
				
				case 2:
					return Global_262145.f_17766;
				
				case 1:
					return Global_262145.f_17765;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_17770;
				
				case 2:
					return Global_262145.f_17769;
				
				case 1:
					return Global_262145.f_17768;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_17774;
				
				case 2:
					return Global_262145.f_17775;
				
				case 1:
					return Global_262145.f_17774;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_17773;
				
				case 2:
					return Global_262145.f_17772;
				
				case 1:
					return Global_262145.f_17771;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_17764;
				
				case 2:
					return Global_262145.f_17763;
				
				case 1:
					return Global_262145.f_17762;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 2:
					return 0;
				
				case 1:
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
				
				default:
			}
			break;
	}
	return 1;
}

bool func_30(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

int func_31(int iParam0, int iParam1, bool bParam2)
{
	if (!func_66(func_172(iParam1, -1, -1, -1), func_129(iParam1, -1, 1, -1, -1, iParam0), func_75(iParam1, -1, -1, -1, -1, iParam0), 0, 1))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (func_64(iParam0))
	{
		if (iParam1 == 153)
		{
			iVar0 = 211;
		}
	}
	if (func_62(iParam1) >= func_61(iVar0))
	{
		return 5;
	}
	if (func_60(iParam0))
	{
		return 6;
	}
	if (func_59(iParam0))
	{
		return 14;
	}
	iVar1 = func_54(iParam0);
	if (iVar1 != -1)
	{
		return iVar1;
	}
	if (func_53(iParam1) == 1)
	{
		if ((func_52() || func_51()) || ((!bParam2 && func_50() != 0) && func_53(iParam1) == 1))
		{
			return 2;
		}
	}
	else if (func_53(iParam1) == 2)
	{
		if (!func_47(iParam1))
		{
			return 3;
		}
		if (!bParam2)
		{
			if (Global_1628237[iParam0].f_11.f_34 != func_5())
			{
				return 9;
			}
		}
		if (func_46(iParam0))
		{
			return 10;
		}
	}
	else if (func_44(iParam1))
	{
		if (func_42(iParam0) <= 0)
		{
			return 4;
		}
	}
	if (func_41(iParam1))
	{
		if (func_40())
		{
			return 13;
		}
		if (func_38())
		{
			return 12;
		}
	}
	if (func_42(iParam0) + 1 < func_37(iVar0))
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
			if (!func_33(iParam0, 0))
			{
				return 1;
			}
			break;
		
		case 189:
			if (func_32(iParam0, 21) || func_32(iParam0, 25))
			{
				return 0;
			}
			break;
	}
	return -1;
}

bool func_32(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2425662[iParam0].f_208, iParam1);
}

int func_33(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (!func_35(iVar1, iParam0, 1))
			{
				if (iParam1 || !func_34(iVar1, 31))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_34(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_35(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_5())
	{
		if (!bParam2)
		{
			if (func_36(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628237[iParam0].f_11 != func_5())
		{
			return iParam1 == Global_1628237[iParam0].f_11;
		}
	}
	return 0;
}

int func_36(int iParam0, int iParam1)
{
	if (iParam1 != func_5())
	{
		if (iParam0 != func_5())
		{
			if (Global_1628237[iParam0].f_11 != func_5())
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

int func_37(int iParam0)
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

int func_38()
{
	if (func_39())
	{
		return 1;
	}
	return Global_2450632.f_644;
}

bool func_39()
{
	return Global_1312837 == 10;
}

bool func_40()
{
	return Global_262145.f_15220;
}

int func_41(int iParam0)
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

int func_42(int iParam0)
{
	if (func_43(iParam0) == func_5())
	{
		return 0;
	}
	return Global_1628237[iParam0].f_11.f_19;
}

int func_43(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_5();
}

int func_44(int iParam0)
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
	return func_45(iParam0, 0);
	return 0;
}

int func_45(int iParam0, int iParam1)
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

int func_46(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if ((Global_1628237[iParam0].f_11.f_34 != func_5() && Global_1628237[iParam0].f_11.f_34 == iVar1) && Global_1628237[iVar1].f_11.f_34 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_47(int iParam0)
{
	switch (iParam0)
	{
		case 179:
			if (func_49() < 2)
			{
				return 0;
			}
			break;
		
		case 148:
			if (func_48() < 2)
			{
				return 0;
			}
			break;
		
		default:
			if (func_48() < 2)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_48()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (func_200(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_49()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (func_64(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_50()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11.f_102;
}

bool func_51()
{
	return Global_1650640.f_11.f_144 != -1;
}

bool func_52()
{
	return Global_1650640.f_11.f_143 != -1;
}

int func_53(int iParam0)
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

int func_54(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_56())
	{
		iVar1 = Global_1628237[iParam0].f_11.f_11[iVar0];
		if (iVar1 != func_5())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (func_60(iVar1))
				{
					return 7;
				}
				if (func_59(iVar1))
				{
					return 15;
				}
				if (func_55(iVar1))
				{
					return 16;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_55(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (((((MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_4, 2) || MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_4, 3)) || MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_4, 5)) || MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_4, 6)) || MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_4, 7)) || MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_369.f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_56()
{
	return (func_57() - 1);
}

int func_57()
{
	return func_58(PLAYER::PLAYER_ID());
}

int func_58(int iParam0)
{
	iVar0 = Global_1628237[iParam0].f_11;
	if (iVar0 != func_5() && Global_1628237[iVar0].f_11.f_450 == 1)
	{
		return 8;
	}
	return 4;
}

int func_59(int iParam0)
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

int func_60(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628237[iVar0].f_1, 0);
	}
	return 0;
}

int func_61(int iParam0)
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

int func_62(int iParam0)
{
	return Global_1650640.f_11.f_147[func_63(iParam0)];
}

int func_63(int iParam0)
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

bool func_64(int iParam0)
{
	return func_65(iParam0, 1);
}

int func_65(int iParam0, int iParam1)
{
	if (iParam0 != func_5())
	{
		if (Global_1628237[iParam0].f_11 != func_5())
		{
			if (Global_1628237[iParam0].f_11 == iParam0 && Global_1628237[iParam0].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_66(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_74(iParam0, bParam3, bParam4) || func_73(iParam1, bParam3, bParam4)) || func_67(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_67(int iParam0, bool bParam1, bool bParam2)
{
	return func_68(2, iParam0, 0, bParam1, bParam2);
}

int func_68(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!MISC::IS_BIT_SET(Global_1389296, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_72(iParam0) - func_71(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_71(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_72(iParam0) - func_70(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_71(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_72(iParam0) - func_71(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[PLAYER::PLAYER_ID()] != 3)
		{
			iVar1 = (iVar1 - func_69(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_69(int iParam0)
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

int func_70(int iParam0)
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

int func_71(int iParam0, bool bParam1)
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

int func_72(int iParam0)
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

int func_73(int iParam0, bool bParam1, bool bParam2)
{
	return func_68(1, iParam0, 0, bParam1, bParam2);
}

int func_74(int iParam0, bool bParam1, bool bParam2)
{
	return func_68(0, iParam0, 0, bParam1, bParam2);
}

int func_75(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
			return func_128(iParam1);
		
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
			return func_126(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_120(iParam1, iParam2, iParam3, iParam4);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_108(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(uParam5), iParam4);
		
		case 233:
			return func_101(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
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
			return func_92(iParam1, iParam2);
		
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
			return func_89(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_88(iParam1);
		
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
			return func_84(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 158:
			return func_79(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 181:
			return func_76(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		default:
	}
	return 0;
}

int func_76(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_78(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_77(iParam0, iParam2));
	return iVar0;
}

int func_77(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 5;
		
		default:
	}
	return 1;
}

int func_78(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_83(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_80(iParam0, iParam2));
	return iVar0;
}

int func_80(int iParam0, int iParam1)
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
			if (func_82(iParam1, 1))
			{
				Var0 = { func_81(iParam1) };
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

Vector3 func_81(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_301;
}

bool func_82(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_200(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_5();
}

int func_83(int iParam0, int iParam1, var uParam2)
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

int func_84(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_87(iParam0, iParam1, iParam3);
	if (!func_86(iParam0))
	{
		iVar0 = (iVar0 + func_85(iParam0, iParam2));
	}
	return iVar0;
}

int func_85(int iParam0, int iParam1)
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
			if (func_42(iParam1) + 1 == 1)
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

int func_86(int iParam0)
{
	return 0;
}

int func_87(int iParam0, int iParam1, int iParam2)
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

int func_88(int iParam0)
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

int func_89(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_91(iParam0, iParam1);
	if (func_90(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_90(int iParam0)
{
	return 1;
}

int func_91(int iParam0, int iParam1)
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

int func_92(int iParam0, int iParam1)
{
	iVar0 = func_100(iParam0, iParam1);
	if (!func_99(iParam0))
	{
		iVar0 = (iVar0 + func_93(iParam0, func_97() + 1));
	}
	if (iParam0 == 14 || ((((func_99(iParam0) && iParam0 != 9) && iParam0 != 16) && iParam0 != 7) && iParam0 != 17))
	{
		iVar0 = (iVar0 + func_93(iParam0, func_97() + 1));
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

int func_93(int iParam0, int iParam1)
{
	if (func_96(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_95(iParam0, iParam1);
			iVar2 = func_94(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_99(iParam0))
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

int func_94(int iParam0)
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

int func_95(int iParam0, int iParam1)
{
	if (func_99(iParam0))
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

int func_96(int iParam0)
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

int func_97()
{
	if (func_98() == func_5())
	{
		return 0;
	}
	return func_42(func_98());
}

int func_98()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11;
}

int func_99(int iParam0)
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

int func_100(int iParam0, int iParam1)
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

int func_101(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = func_107(iParam0, iParam1, iParam2, iParam4);
	if (!func_106(iParam0))
	{
		if (iParam3 != func_5())
		{
			iVar0 = (iVar0 + func_103(iParam0, func_42(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_102(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_102(int iParam0)
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

int func_103(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
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
			if (func_106(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_105(iParam0))
	{
		iVar0 = func_105(iParam0);
	}
	else if (iVar0 < func_104(iParam0))
	{
		iVar0 = func_104(iParam0);
	}
	return iVar0;
}

int func_104(int iParam0)
{
	return 1;
}

int func_105(int iParam0)
{
	return 4;
}

int func_106(int iParam0)
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

int func_107(int iParam0, int iParam1, var uParam2, var uParam3)
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

int func_108(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = func_119(iParam0, iParam1, iParam2, iParam4);
	if (!func_118(iParam0))
	{
		if (iParam3 != func_5())
		{
			iVar0 = (iVar0 + func_110(iParam0, func_42(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_109(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			return 1;
		
		default:
	}
	return 0;
}

int func_110(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_117(iParam0))
	{
		iVar1 = func_116(iParam3);
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
	else if (func_115(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_114(iParam2))
		{
			iVar0 = func_114(iParam2);
		}
	}
	if (iVar0 > func_112(iParam0))
	{
		iVar0 = func_112(iParam0);
	}
	else if (iVar0 < func_111(iParam0))
	{
		iVar0 = func_111(iParam0);
	}
	return iVar0;
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_112(int iParam0)
{
	if (!func_117(iParam0))
	{
		if (func_118(iParam0))
		{
			if (func_113(iParam0))
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

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_114(int iParam0)
{
	if (iParam0 == func_5() || Global_1590535[iParam0].f_274.f_264 == 0)
	{
		return 50;
	}
	return (50 - Global_1590535[iParam0].f_274.f_264.f_3);
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_116(int iParam0)
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

int func_117(int iParam0)
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

int func_118(int iParam0)
{
	if (func_117(iParam0) || func_115(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_119(int iParam0, int iParam1, int iParam2, var uParam3)
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

int func_120(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_125(iParam0, iParam1, iParam2, iParam3);
	if (!func_124(iParam0))
	{
		iVar0 = (iVar0 + func_122(iParam0, func_97() + 1, -1, iParam2));
	}
	if (func_121(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_121(int iParam0)
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

int func_122(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_123(iParam0))
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
	else if (func_124(iParam0))
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

int func_123(int iParam0)
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

int func_124(int iParam0)
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

int func_125(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_126(int iParam0, int iParam1, var uParam2)
{
	iVar0 = func_127(iParam0, iParam1);
	if (iParam0 == 15)
	{
		iVar0++;
	}
	return iVar0;
}

int func_127(int iParam0, int iParam1)
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

int func_128(int iParam0)
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

int func_129(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
			return func_171(iParam1);
		
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
			return func_167(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_163(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_157(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(uParam5), 0, 0, 0);
		
		case 233:
			return func_151(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_150(iParam1, iParam3);
		
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
			return func_149(iParam1, iParam3, iParam4);
		
		case 238:
		case 249:
			return func_148(iParam1);
		
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
			return func_142(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		case 158:
			return func_136(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		case 181:
			return func_130(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		default:
	}
	return 0;
}

int func_130(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_135(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_134(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_133(func_42(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_132(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_131(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_131(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_132(int iParam0, int iParam1)
{
	return func_131(iParam0, iParam1) > 0;
}

int func_133(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

int func_134(int iParam0, int iParam1)
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

int func_135(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		default:
	}
	return 0;
}

int func_136(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
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
		iVar0 = (iVar0 + func_141(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_140(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_139(func_42(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_138(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_137(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_137(int iParam0, int iParam1)
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

bool func_138(int iParam0, int iParam1)
{
	return func_137(iParam0, iParam1) > 0;
}

int func_139(int iParam0, int iParam1, int iParam2)
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
			if (iParam2 != func_5())
			{
				if (func_82(iParam2, 1))
				{
					Var0 = { func_81(iParam2) };
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

int func_140(int iParam0, int iParam1)
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

int func_141(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 53:
			return 0;
		
		default:
	}
	return 0;
}

int func_142(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
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
		if (func_86(iParam0))
		{
			iVar0 = (iVar0 + func_85(iParam0, iParam2));
		}
		iVar0 = (iVar0 + func_147(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_146(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_145(func_42(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (func_144(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_143(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_143(int iParam0, int iParam1)
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

bool func_144(int iParam0, int iParam1)
{
	return func_143(iParam0, iParam1) > 0;
}

int func_145(int iParam0, int iParam1)
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

int func_146(int iParam0, int iParam1)
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

int func_147(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		default:
	}
	return 0;
}

int func_148(int iParam0)
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

int func_149(int iParam0, int iParam1, int iParam2)
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
	if (func_90(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_150(int iParam0, int iParam1)
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
	if ((func_99(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_93(iParam0, func_97() + 1));
	}
	return iVar0;
}

int func_151(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		if (func_106(iParam0))
		{
			if (iParam3 != func_5())
			{
				iVar0 = (iVar0 + func_103(iParam0, func_42(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_5())
		{
			iVar0 = (iVar0 + func_156(iParam0, func_42(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_155(0, iParam1) != -1)
		{
			if (iParam3 != func_5())
			{
				iVar0 = (iVar0 + func_154(func_42(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_153(iParam0))
		{
			iVar0 = (iVar0 + func_152(iParam0));
		}
	}
	return iVar0;
}

int func_152(int iParam0)
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

bool func_153(int iParam0)
{
	return func_152(iParam0) > 0;
}

int func_154(var uParam0, int iParam1)
{
	return 2;
}

int func_155(int iParam0, int iParam1)
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

int func_156(int iParam0, int iParam1)
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
			iVar0 = func_22(5326, -1, 0);
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

int func_157(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		if (func_118(iParam0))
		{
			if (iParam3 != func_5())
			{
				iVar0 = (iVar0 + func_110(iParam0, func_42(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_5())
		{
			iVar0 = (iVar0 + func_162(iParam0, func_42(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_161(0, iParam1) != -1)
		{
			if (iParam3 != func_5())
			{
				iVar0 = (iVar0 + func_160(func_42(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_159(iParam0))
		{
			iVar0 = (iVar0 + func_158(iParam0));
		}
	}
	return iVar0;
}

int func_158(int iParam0)
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

bool func_159(int iParam0)
{
	return func_158(iParam0) > 0;
}

int func_160(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (func_113(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_113(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_113(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_113(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_113(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_113(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_113(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_113(iParam1))
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

int func_161(int iParam0, int iParam1)
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

int func_162(int iParam0, int iParam1)
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

int func_163(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_122(iParam0, func_97() + 1, -1, iParam2) == 1)
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
		if (func_124(iParam0))
		{
			iVar0 = (iVar0 + func_122(iParam0, func_97() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_166(iParam0, func_97() + 1));
	}
	if (!bParam3)
	{
		if (func_165(iParam0))
		{
			iVar0 = (iVar0 + func_164(iParam0));
		}
	}
	return iVar0;
}

int func_164(int iParam0)
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

bool func_165(int iParam0)
{
	return func_164(iParam0) > 0;
}

int func_166(int iParam0, int iParam1)
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

int func_167(int iParam0, int iParam1, int iParam2)
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
	iVar0 = (iVar0 + func_170(iParam0, func_97() + 1, iParam2));
	iVar0 = (iVar0 + func_168(iParam0));
	return iVar0;
}

int func_168(int iParam0)
{
	if (func_169(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_169(int iParam0)
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

int func_170(int iParam0, var uParam1, int iParam2)
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

int func_171(int iParam0)
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

int func_172(int iParam0, int iParam1, int iParam2, int iParam3)
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
			return func_199(iParam1);
		
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
			return func_196(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_193(iParam1, iParam2, iParam3, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_190(iParam1, iParam2, iParam3, 0);
		
		case 233:
			return func_187(iParam1, iParam2, iParam3, 0);
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_186(iParam1, iParam2);
		
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
			return func_185();
		
		case 218:
			return func_184();
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		case 237:
		case 250:
			return func_183(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_182(iParam1, iParam2);
		
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
			return func_179(iParam1, iParam2, 0, -1);
		
		case 158:
			return func_176(iParam1, iParam2, 0, -1);
		
		case 181:
			return func_173(iParam1, iParam2, 0, -1);
		
		default:
	}
	return 0;
}

int func_173(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 2:
			iVar0 += 6;
			break;
	}
	if (!bParam2)
	{
		if (func_132(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_174(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_174(int iParam0, var uParam1)
{
	if (func_132(iParam0, uParam1))
	{
		return (func_131(iParam0, uParam1) + func_175(iParam0, uParam1));
	}
	return 0;
}

int func_175(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_176(int iParam0, int iParam1, bool bParam2, int iParam3)
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
		if (func_138(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_177(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_177(int iParam0, int iParam1)
{
	if (func_138(iParam0, iParam1))
	{
		return (func_137(iParam0, iParam1) + func_178(iParam0, iParam1));
	}
	return 0;
}

int func_178(int iParam0, int iParam1)
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

int func_179(int iParam0, int iParam1, bool bParam2, int iParam3)
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
		if (func_144(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_180(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_180(int iParam0, int iParam1)
{
	if (func_144(iParam0, iParam1))
	{
		return (func_143(iParam0, iParam1) + func_181(iParam0, iParam1));
	}
	return 0;
}

int func_181(int iParam0, int iParam1)
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

int func_182(int iParam0, int iParam1)
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

int func_183(int iParam0, int iParam1, int iParam2)
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

int func_184()
{
	iVar0 = 32;
	return iVar0;
}

int func_185()
{
	iVar0 = 8;
	return iVar0;
}

int func_186(int iParam0, int iParam1)
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
		iVar0 = (iVar0 + func_93(iParam0, func_97() + 1));
	}
	return iVar0;
}

int func_187(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_153(iParam0))
		{
			iVar0 = (iVar0 + func_188(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_188(int iParam0, var uParam1)
{
	if (func_153(iParam0))
	{
		return (func_152(iParam0) + func_189(iParam0, uParam1));
	}
	return 0;
}

int func_189(int iParam0, var uParam1)
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

int func_190(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_159(iParam0))
		{
			iVar0 = (iVar0 + func_191(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_191(int iParam0, int iParam1)
{
	if (func_159(iParam0))
	{
		return (func_158(iParam0) + func_192(iParam0, iParam1));
	}
	return 0;
}

int func_192(int iParam0, int iParam1)
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

int func_193(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_165(iParam0))
		{
			iVar0 = (iVar0 + func_194(iParam0));
		}
	}
	return iVar0;
}

int func_194(int iParam0)
{
	if (func_165(iParam0))
	{
		return (func_164(iParam0) + func_195(iParam0));
	}
	return 0;
}

int func_195(int iParam0)
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

int func_196(int iParam0, int iParam1, var uParam2)
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
	iVar0 = (iVar0 + func_197(iParam0));
	return iVar0;
}

int func_197(int iParam0)
{
	if (func_169(iParam0))
	{
		if (func_198(iParam0))
		{
			return 4;
		}
		return 2;
	}
	return 0;
}

int func_198(int iParam0)
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

int func_199(int iParam0)
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

int func_200(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (Global_1628237[iParam0].f_11 != func_5())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

int func_201(int iParam0)
{
	if (!func_202(PLAYER::PLAYER_ID(), iParam0, 0))
	{
		return 0;
	}
	if (!func_64(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_203(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_202(int iParam0, int iParam1, bool bParam2)
{
	return func_31(iParam0, iParam1, bParam2) == -1;
}

int func_203(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_34(iParam0, 9);
	}
	return 0;
}

int func_204(int iParam0)
{
	if (!func_7(PLAYER::PLAYER_ID(), iParam0))
	{
		return 0;
	}
	iVar0 = func_459(iParam0);
	if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iVar0].f_4 <= 0)
	{
		return 4;
	}
	else if (!func_213(PLAYER::PLAYER_ID(), iVar0) && !func_212(iVar0))
	{
		return 2;
	}
	else if (func_205(iVar0, iParam0))
	{
		return 1;
	}
	return 3;
}

int func_205(int iParam0, int iParam1)
{
	if (iParam0 == 5)
	{
		if (Global_1370164[iParam0] > 0 && (!func_210(iParam1) || !func_206(PLAYER::PLAYER_ID(), iParam1)))
		{
			if (!Global_262145.f_21076 || func_200(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
		return 0;
	}
	if ((Global_1370164[iParam0] > 0 && !func_210(iParam1)) && (!Global_262145.f_18479 || func_64(PLAYER::PLAYER_ID())))
	{
		return 1;
	}
	return 0;
}

bool func_206(int iParam0, int iParam1)
{
	return func_208(iParam0, iParam1) >= func_207(iParam1);
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 21:
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
			return Global_262145.f_21070;
		
		default:
	}
	return 0;
}

int func_208(int iParam0, int iParam1)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (func_6(iParam1) && func_209(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return Global_1590535[iParam0].f_274.f_256;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_209(int iParam0)
{
	return func_27(iParam0) == 5;
}

bool func_210(int iParam0)
{
	return func_211(PLAYER::PLAYER_ID(), iParam0);
}

int func_211(int iParam0, int iParam1)
{
	if (iParam0 != func_5() && func_7(iParam0, iParam1))
	{
		iVar0 = func_4(iParam0, iParam1);
		if (func_30(iVar0))
		{
			return Global_1590535[iParam0].f_274.f_183[iVar0].f_1 >= func_457(iParam1);
		}
	}
	return 0;
}

bool func_212(int iParam0)
{
	return Global_1370147[iParam0] != 0;
}

int func_213(int iParam0, int iParam1)
{
	if (iParam0 != func_5() && func_7(iParam0, func_214(iParam0, iParam1)))
	{
		return Global_1590535[iParam0].f_274.f_183[iParam1].f_6;
	}
	return 0;
}

int func_214(int iParam0, int iParam1)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_6(Global_1590535[iParam0].f_274.f_183[iParam1]))
	{
		uVar0 = Global_1590535[iParam0].f_274.f_183[iParam1];
	}
	return uVar0;
}

bool func_215(int iParam0)
{
	return Global_1370140[iParam0] != 0;
}

void func_216(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, bool bParam5)
{
	iLocal_507 = iParam0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_683, "SHOW_OVERLAY");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
	if (iParam4 != -1)
	{
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(sParam2);
	GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(sParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (bParam5)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "DLC_Biker_Computer_Sounds", 1);
	}
	iLocal_502 = 1;
}

void func_217(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	bVar1 = func_237(iVar0);
	iVar2 = func_234(iVar0);
	if (func_233(PLAYER::PLAYER_ID(), func_27(iVar0)))
	{
		iVar3 = func_232(PLAYER::PLAYER_ID(), func_27(iVar0));
		iVar2 = (iVar2 - func_220(iVar3));
	}
	if (bVar1)
	{
		iVar2 = 0;
	}
	if (iVar2 > 0 && !MONEY::NETWORK_CAN_SPEND_MONEY(iVar2, 0, 1, 0, -1, 0))
	{
		func_216(0, "OR_BUS_AFF", "OR_OVRLY_OK", "", -1, 1);
	}
	else if (func_218(iVar0))
	{
		if (func_233(PLAYER::PLAYER_ID(), func_27(iVar0)))
		{
			func_216(1001, "OR_BUY_BUSB", "WHOUSE_CONF", "WHOUSE_CANC", -1, 0);
		}
		else
		{
			func_216(iParam1, "OR_BUY_BUS", "WHOUSE_CONF", "WHOUSE_CANC", -1, 0);
		}
	}
	else
	{
		func_216(0, "OR_BUS_NA", "OR_OVRLY_OK", "", -1, 1);
	}
}

int func_218(int iParam0)
{
	if (func_219(iParam0) || func_7(PLAYER::PLAYER_ID(), iParam0))
	{
		return 0;
	}
	return 1;
}

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_262145.f_17742;
		
		case 1:
			return Global_262145.f_17754;
		
		case 3:
			return Global_262145.f_17758;
		
		case 5:
			return Global_262145.f_17746;
		
		case 4:
			return Global_262145.f_17750;
		
		case 7:
			return Global_262145.f_17743;
		
		case 6:
			return Global_262145.f_17755;
		
		case 8:
			return Global_262145.f_17759;
		
		case 10:
			return Global_262145.f_17747;
		
		case 9:
			return Global_262145.f_17751;
		
		case 12:
			return Global_262145.f_17744;
		
		case 11:
			return Global_262145.f_17756;
		
		case 13:
			return Global_262145.f_17760;
		
		case 15:
			return Global_262145.f_17748;
		
		case 14:
			return Global_262145.f_17752;
		
		case 17:
			return Global_262145.f_17745;
		
		case 16:
			return Global_262145.f_17757;
		
		case 18:
			return Global_262145.f_17761;
		
		case 20:
			return Global_262145.f_17749;
		
		case 19:
			return Global_262145.f_17753;
		
		case 21:
			return 0;
		
		case 22:
			return 0;
		
		case 23:
			return 0;
		
		case 24:
			return 0;
		
		case 25:
			return 0;
		
		case 26:
			return 0;
		
		case 27:
			return 0;
		
		case 28:
			return 0;
		
		case 29:
			return 0;
		
		case 30:
			return 0;
		
		case 31:
			return 0;
		
		default:
	}
	return 1;
}

int func_220(int iParam0)
{
	iVar0 = (func_227(iParam0) / 2);
	if (iVar0 < 0)
	{
		iVar0 = (func_234(iParam0) / 2);
	}
	if (func_28(PLAYER::PLAYER_ID(), iParam0, 0))
	{
		iVar1 = (func_19(0, iParam0) / 2);
		iVar0 = (iVar0 + iVar1);
	}
	if (func_28(PLAYER::PLAYER_ID(), iParam0, 2))
	{
		iVar2 = (func_19(2, iParam0) / 2);
		iVar0 = (iVar0 + iVar2);
	}
	if (func_209(iParam0))
	{
		if (func_226(PLAYER::PLAYER_ID()))
		{
			iVar3 = (func_19(6, iParam0) / 2);
			iVar0 = (iVar0 + iVar3);
		}
		if (func_225(PLAYER::PLAYER_ID()))
		{
			iVar4 = (Global_262145.f_20954 / 2);
			iVar0 = (iVar0 + iVar4);
		}
		if (func_224(PLAYER::PLAYER_ID()))
		{
			iVar5 = (Global_262145.f_20954 / 2);
			iVar0 = (iVar0 + iVar5);
		}
		if (func_223(PLAYER::PLAYER_ID()))
		{
			iVar6 = (func_19(9, iParam0) / 2);
			iVar0 = (iVar0 + iVar6);
		}
		if (func_222(PLAYER::PLAYER_ID()))
		{
			iVar7 = (func_19(10, iParam0) / 2);
			iVar0 = (iVar0 + iVar7);
		}
		if (func_221(PLAYER::PLAYER_ID()))
		{
			iVar8 = (func_19(11, iParam0) / 2);
			iVar0 = (iVar0 + iVar8);
		}
	}
	return iVar0;
}

bool func_221(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 13);
}

bool func_222(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 12);
}

bool func_223(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 9);
}

bool func_224(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 11);
}

bool func_225(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 10);
}

bool func_226(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 8);
}

int func_227(int iParam0)
{
	if (func_7(PLAYER::PLAYER_ID(), iParam0))
	{
		iVar0 = func_4(PLAYER::PLAYER_ID(), iParam0);
		if (func_228(iVar0, &uVar1))
		{
			return uVar1;
		}
	}
	return -1;
}

int func_228(int iParam0, var uParam1)
{
	if (func_22(func_231(iParam0), -1, 0) == func_22(func_230(iParam0), -1, 0))
	{
		*uParam1 = func_22(func_229(iParam0), -1, 0);
		return *uParam1 >= 0;
	}
	return 0;
}

int func_229(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6359;
		
		case 1:
			return 6360;
		
		case 2:
			return 6361;
		
		case 3:
			return 6362;
		
		case 4:
			return 6363;
		
		case 5:
			return 6364;
		
		default:
	}
	return 6359;
}

int func_230(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3837;
		
		case 1:
			return 3838;
		
		case 2:
			return 3839;
		
		case 3:
			return 3840;
		
		case 4:
			return 3841;
		
		case 5:
			return 5440;
		
		default:
	}
	return 3837;
}

int func_231(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6348;
		
		case 1:
			return 6349;
		
		case 2:
			return 6350;
		
		case 3:
			return 6351;
		
		case 4:
			return 6352;
		
		case 5:
			return 6353;
		
		default:
	}
	return 6348;
}

int func_232(int iParam0, int iParam1)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590535[iParam0].f_274.f_183[iVar0] != 0)
		{
			iVar1 = Global_1590535[iParam0].f_274.f_183[iVar0];
			if (func_27(iVar1) == iParam1)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_233(int iParam0, int iParam1)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590535[iParam0].f_274.f_183[iVar0] != 0)
		{
			iVar1 = Global_1590535[iParam0].f_274.f_183[iVar0];
			if (func_27(iVar1) == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_234(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_25())
	{
		bVar0 = false;
		if (func_237(iParam0))
		{
			bVar0 = true;
		}
		func_236(&sVar1, iParam0, bVar0);
		uVar17 = MISC::GET_HASH_KEY(&sVar1);
		if (NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(uVar17))
		{
			uVar18 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(uVar17, 426439576, 1);
			StringCopy(&cVar19, func_235(iParam0), 16);
			return uVar18;
		}
		else
		{
			StringCopy(&cVar23, func_235(iParam0), 16);
		}
	}
	if (func_237(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 2:
			return Global_262145.f_17576;
		
		case 1:
			return Global_262145.f_17572;
		
		case 3:
			return Global_262145.f_17568;
		
		case 5:
			return Global_262145.f_17560;
		
		case 4:
			return Global_262145.f_17564;
		
		case 7:
			return Global_262145.f_17577;
		
		case 6:
			return Global_262145.f_17573;
		
		case 8:
			return Global_262145.f_17569;
		
		case 10:
			return Global_262145.f_17561;
		
		case 9:
			return Global_262145.f_17565;
		
		case 12:
			return Global_262145.f_17578;
		
		case 11:
			return Global_262145.f_17574;
		
		case 13:
			return Global_262145.f_17570;
		
		case 15:
			return Global_262145.f_17562;
		
		case 14:
			return Global_262145.f_17566;
		
		case 17:
			return Global_262145.f_17579;
		
		case 16:
			return Global_262145.f_17575;
		
		case 18:
			return Global_262145.f_17571;
		
		case 20:
			return Global_262145.f_17563;
		
		case 19:
			return Global_262145.f_17567;
		
		case 21:
			return Global_262145.f_20943;
		
		case 22:
			return Global_262145.f_20942;
		
		case 23:
			return Global_262145.f_20944;
		
		case 24:
			return Global_262145.f_20939;
		
		case 25:
			return Global_262145.f_20941;
		
		case 26:
			return Global_262145.f_20940;
		
		case 27:
			return Global_262145.f_20945;
		
		case 28:
			return Global_262145.f_20949;
		
		case 29:
			return Global_262145.f_20948;
		
		case 30:
			return Global_262145.f_20947;
		
		case 31:
			return Global_262145.f_20946;
		
		default:
	}
	return 0;
}

char* func_235(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

void func_236(char* sParam0, int iParam1, bool bParam2)
{
	StringCopy(sParam0, "FACTORY_INDEX_", 64);
	StringIntConCat(sParam0, iParam1, 64);
	StringConCat(sParam0, "_t0_v0", 64);
	if (bParam2)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

int func_237(int iParam0)
{
	if (func_238())
	{
		if (iParam0 == 28 || iParam0 == 14)
		{
			return 1;
		}
	}
	return 0;
}

bool func_238()
{
	return (func_240() || func_239());
}

int func_239()
{
	switch (NETWORK::_0x155467ACA0F55705())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_240()
{
	switch (NETWORK::_0x754615490A029508())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

void func_241(bool bParam0, int iParam1)
{
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(uLocal_683, "HIDE_OVERLAY");
	iLocal_502 = 0;
	if (bParam0)
	{
		switch (iLocal_507)
		{
			case 2001:
				if (iLocal_501)
				{
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(uLocal_683, "SHOW_HOMEPAGE");
					iLocal_501 = 0;
				}
				else if (!func_219(iParam1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "DLC_Biker_Computer_Sounds", 1);
					if (func_233(PLAYER::PLAYER_ID(), func_27(iParam1)))
					{
						func_406(iParam1);
						func_405(iVar0, 0);
					}
					else
					{
						func_350(iParam1);
					}
				}
				break;
			
			case 1001:
				func_216(2001, "OR_BUY_SAV", "WHOUSE_CONF", "WHOUSE_CANC", func_349(iParam1), 0);
				break;
			
			case 1002:
				if (!func_201(190))
				{
					if (func_200(PLAYER::PLAYER_ID()) && !func_203(PLAYER::PLAYER_ID()))
					{
						iVar1 = func_31(PLAYER::PLAYER_ID(), 190, 0);
					}
					if (iVar1 == 15)
					{
						func_216(0, "GENERAL_MLF_G1", "OR_OVRLY_OK", "", -1, 1);
					}
					else if (iVar1 == 16)
					{
						func_216(0, "GENERAL_MLF_G4", "OR_OVRLY_OK", "", -1, 1);
					}
					else
					{
						func_216(0, "OR_MIS_NA", "OR_OVRLY_OK", "", -1, 1);
					}
				}
				else
				{
					func_216(3011, "OR_SELL_GD", "WHOUSE_CONF", "WHOUSE_CANC", -1, 0);
				}
				break;
			
			case 1003:
				if (!func_201(190))
				{
					if (func_200(PLAYER::PLAYER_ID()) && !func_203(PLAYER::PLAYER_ID()))
					{
						iVar1 = func_31(PLAYER::PLAYER_ID(), 190, 0);
					}
					if (iVar1 == 15)
					{
						func_216(0, "GENERAL_MLF_G1", "OR_OVRLY_OK", "", -1, 1);
					}
					else if (iVar1 == 16)
					{
						func_216(0, "GENERAL_MLF_G4", "OR_OVRLY_OK", "", -1, 1);
					}
					else
					{
						func_216(0, "OR_MIS_NA", "OR_OVRLY_OK", "", -1, 1);
					}
				}
				else
				{
					func_216(3012, "OR_SELL_GD", "WHOUSE_CONF", "WHOUSE_CANC", -1, 0);
				}
				break;
			
			case 3003:
				if (func_348(iLocal_512))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "DLC_Biker_Computer_Sounds", 1);
					func_344(iLocal_512);
					func_342(func_459(iLocal_512));
				}
				break;
			
			case 3005:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Business_Shutdown", "DLC_Biker_Computer_Sounds", 1);
				iVar0 = func_459(iLocal_512);
				func_328();
				func_405(iVar0, 1);
				func_467();
				if (func_327(PLAYER::PLAYER_ID()))
				{
					iVar2 = func_326(func_27(iLocal_512));
					if (func_325(iVar2))
					{
						iVar3 = func_323(iVar2);
						func_311(iVar3, 1);
						MISC::SET_BIT(&Global_1676232, iVar0);
					}
				}
				break;
			
			case 3006:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Business_Restart", "DLC_Biker_Computer_Sounds", 1);
				iVar0 = func_459(iLocal_512);
				func_309(func_459(iLocal_512));
				func_467();
				func_405(iVar0, 0);
				break;
			
			case 3008:
				if (func_308(0, iLocal_512))
				{
					if (func_304(0))
					{
						func_298(0);
					}
				}
				break;
			
			case 3009:
				if (func_308(1, iLocal_512))
				{
					if (func_304(1))
					{
						func_298(1);
						func_467();
						func_216(0, "OR_SUS_P_STAF", "OR_OVRLY_OK", "", -1, 1);
					}
				}
				break;
			
			case 3010:
				if (func_308(2, iLocal_512))
				{
					if (func_304(2))
					{
						func_298(2);
					}
				}
				break;
			
			case 3011:
				if (func_283(iLocal_512))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "DLC_Biker_Computer_Sounds", 1);
					func_281(func_459(iLocal_512), !Global_262145.f_16981);
					func_264(190, iLocal_512, 0);
					func_260(iLocal_512, 0);
				}
				else
				{
					func_216(0, func_259(iLocal_694), "OR_OVRLY_OK", "", -1, 1);
				}
				break;
			
			case 3012:
				if (func_283(iLocal_512))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "DLC_Biker_Computer_Sounds", 1);
					func_281(func_459(iLocal_512), !Global_262145.f_16981);
					func_264(190, iLocal_512, 1);
					func_260(iLocal_512, 1);
				}
				else
				{
					func_216(0, func_259(iLocal_694), "OR_OVRLY_OK", "", -1, 1);
				}
				break;
			
			case 3014:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "DLC_Biker_Computer_Sounds", 1);
				func_246(iLocal_512, -1);
				iVar0 = func_459(iLocal_512);
				if (func_245())
				{
					func_242(iVar0);
					func_216(0, "OR_RSP_PAID", "OR_OVRLY_OK", "", -1, 0);
					func_467();
					HUD::CLEAR_HELP(1);
					if (func_17(iLocal_512))
					{
						HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("OR_PSUP_OTW0");
					}
					else
					{
						HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("OR_PSUP_OTW1");
					}
					HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, 8000);
				}
				else
				{
					func_216(0, "UA_PSUP_FAIL", "OR_OVRLY_OK", "", -1, 1);
				}
				break;
			
			case 3015:
				if (func_348(iLocal_512))
				{
					Global_1676233 = iLocal_512;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "DLC_Biker_Computer_Sounds", 1);
					func_264(192, iLocal_512, -1);
					func_281(func_459(iLocal_512), !Global_262145.f_16981);
					func_342(func_459(iLocal_512));
				}
				break;
			}
	}
}

void func_242(int iParam0)
{
	if (Global_1370140[iParam0] == 0)
	{
		Global_1370140[iParam0] = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_243(func_244(iParam0), 1, -1, 1, 0);
	}
}

void func_243(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_23(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_244(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3873;
		
		case 1:
			return 3874;
		
		case 2:
			return 3875;
		
		case 3:
			return 3876;
		
		case 4:
			return 3877;
		
		case 5:
			return 5444;
		
		default:
	}
	return 3873;
}

int func_245()
{
	if (!func_25())
	{
		return 1;
	}
	iLocal_696 = -1;
	iLocal_697 = -1;
	iVar9 = 0;
	while (iVar9 < 5)
	{
		if (Global_4263954[iVar9].f_66.f_4 == 268924934)
		{
			iLocal_696 = iVar9;
		}
		else
		{
			iVar9++;
		}
	}
	if (iLocal_696 == -1)
	{
		SYSTEM::WAIT(0);
		func_415();
		return 0;
	}
	while (!func_8(&uVar7, 15000, 0))
	{
		if (iLocal_697 == -1)
		{
			if (Global_4263954[iLocal_696].f_66 != 2147483647)
			{
				iLocal_697 = Global_4263954[iLocal_696].f_66;
			}
		}
		iVar10 = 0;
		while (iVar10 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
		{
			if (SCRIPT::GET_EVENT_AT_INDEX(1, iVar10) == 226)
			{
				if (SCRIPT::GET_EVENT_DATA(1, iVar10, &Var0, 7))
				{
					if (Var0.x == iLocal_697 && Var0.x != -1)
					{
						if (Var0.z == 0)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
				}
			}
			iVar10++;
		}
		SYSTEM::WAIT(0);
		func_415();
	}
	SYSTEM::WAIT(0);
	func_415();
	return 0;
}

void func_246(int iParam0, int iParam1)
{
	iVar0 = Global_1370164[func_459(iParam0)];
	fVar1 = (SYSTEM::TO_FLOAT((100 - iVar0)) / 20f);
	iVar2 = SYSTEM::CEIL(fVar1);
	iVar3 = func_13(0, iVar0, 0);
	uVar4 = MISC::GET_HASH_KEY(func_235(iParam0));
	iVar5 = func_27(iParam0);
	if (iParam1 != -1 && iParam1 > 0)
	{
		iVar3 = iParam1;
	}
	if (func_25())
	{
		func_247(268924934, iVar3, &iVar6, 0, 1, 0);
		Global_4263954[iVar6] = uVar4;
		Global_4263954[iVar6].f_1 = iVar5;
		Global_4263954[iVar6].f_9 = iVar2;
	}
	else
	{
		MONEY::_0x0035BB914316F1E3(iVar3, uVar4, iVar5, iVar2);
	}
}

void func_247(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_25())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_248(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
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
		case 1982688246:
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
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
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
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_248(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_248(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
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
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
			func_248(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_248(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bVar0 = false;
	if (!func_25())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_24()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263954[iVar2].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_255(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263954[*uParam0].f_66.f_8 = 1;
					Global_4263954[*uParam0].f_66.f_12 = 1;
				}
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264535 = 1;
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_254(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_249(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_249(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_250(iParam0);
	}
}

void func_250(int iParam0)
{
	bVar0 = false;
	if (!func_25())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_253(iParam0))
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
		func_251(&(Global_4263954[iParam0]));
	}
}

void func_251(var uParam0)
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
	func_252(&(uParam0->f_14));
	func_252(&(uParam0->f_14.f_13));
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

void func_252(var uParam0)
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

int func_253(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

void func_254(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_255(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_25())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0].f_66.f_2 = 1;
			Global_4263954[iVar0].f_66.f_1 = iParam5;
			Global_4263954[iVar0].f_66.f_3 = iParam1;
			Global_4263954[iVar0].f_66.f_4 = iParam2;
			Global_4263954[iVar0].f_66.f_7 = uParam3;
			Global_4263954[iVar0].f_66.f_5 = 0;
			Global_4263954[iVar0].f_66 = iParam0;
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
				func_256(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_256(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_258(Var0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_257();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_257()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_258(int iParam0)
{
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

char* func_259(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BKR_TF_R1";
		
		case 1:
			return "BKR_TF_R2";
		
		case 13:
			return "BKR_TF_R3";
		
		case 2:
			return "BKR_TF_R4";
		
		case 3:
			return "BKR_TF_R5";
		
		case 4:
			return "BKR_TF_R6";
		
		default:
	}
	return "BKR_TF_R1";
}

void func_260(int iParam0, int iParam1)
{
	iVar1 = func_459(iParam0);
	if (func_263(iParam0))
	{
		if (iParam1 == 0)
		{
			iVar0 = func_262(iVar1);
		}
		else
		{
			iVar0 = func_261(iVar1);
		}
	}
	else if (iParam1 == 0)
	{
		iVar0 = func_261(iVar1);
	}
	else
	{
		iVar0 = func_262(iVar1);
	}
	iVar2 = func_22(iVar0, -1, 0) + 1;
	func_243(iVar0, iVar2, -1, 1, 0);
}

int func_261(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3911;
		
		case 1:
			return 3944;
		
		case 2:
			return 3946;
		
		case 3:
			return 3948;
		
		case 4:
			return 3950;
		
		case 5:
			return 5455;
		
		default:
	}
	return 3911;
}

int func_262(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3901;
		
		case 1:
			return 3930;
		
		case 2:
			return 3934;
		
		case 3:
			return 3938;
		
		case 4:
			return 3942;
		
		case 5:
			return 5453;
		
		default:
	}
	return 3899;
}

int func_263(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar0) / 5f));
	if (iVar1 == 2 || iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_264(int iParam0, int iParam1, int iParam2)
{
	if (func_201(iParam0))
	{
		func_265(iParam0, iParam1, iParam2);
		Global_1674374.f_53 = 0;
		iLocal_509 = iParam0;
		Global_1676237 = 1;
	}
}

void func_265(int iParam0, int iParam1, int iParam2)
{
	func_280(iParam1, iParam2);
	func_266(iParam0, iParam1);
}

void func_266(var uParam0, var uParam1)
{
	if (func_279() || !func_278(1))
	{
		if (!func_276(PLAYER::PLAYER_ID(), 0))
		{
			func_275(uParam0);
			func_267(uParam0, func_271(1, 1), func_270(), func_269(), func_268(), uParam1);
		}
	}
}

void func_267(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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

var func_268()
{
	return Global_2537071.f_5124.f_341;
}

var func_269()
{
	return Global_2537071.f_5124.f_340;
}

var func_270()
{
	return Global_2537071.f_5124.f_339;
}

int func_271(int iParam0, bool bParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_274(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_272(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_272(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_273(-1, 0) == 8;
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

int func_273(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_24();
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

int func_274(int iParam0, bool bParam1, bool bParam2)
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

void func_275(var uParam0)
{
	Global_1628237[PLAYER::PLAYER_ID()].f_11.f_32 = uParam0;
}

int func_276(int iParam0, int iParam1)
{
	if (func_277(iParam0, 0))
	{
		return func_53(Global_1628237[iParam0].f_11.f_33) == iParam1;
	}
	return 0;
}

int func_277(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_278(bool bParam0)
{
	return func_82(PLAYER::PLAYER_ID(), bParam0);
}

int func_279()
{
	return func_200(PLAYER::PLAYER_ID());
}

void func_280(var uParam0, var uParam1)
{
	Global_1628237[PLAYER::PLAYER_ID()].f_11.f_193 = uParam0;
	Global_1628237[PLAYER::PLAYER_ID()].f_11.f_193.f_1 = uParam1;
}

void func_281(int iParam0, bool bParam1)
{
	if (!func_30(iParam0))
	{
		return;
	}
	func_428(func_282(iParam0), bParam1, -1, 1);
	Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iParam0].f_6 = bParam1;
}

int func_282(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

int func_283(int iParam0)
{
	iVar0 = func_459(iParam0);
	if (!func_202(PLAYER::PLAYER_ID(), 190, 0))
	{
		iLocal_694 = 4;
		return 0;
	}
	if (func_203(PLAYER::PLAYER_ID()))
	{
		iLocal_694 = 13;
		return 0;
	}
	if (func_17(iParam0))
	{
		iLocal_694 = 0;
		return 0;
	}
	if (func_25())
	{
		iLocal_692 = 1;
		iLocal_693 = 0;
		iVar1 = func_296(1);
		while (!func_285(iVar0, iVar1, &iLocal_695))
		{
			SYSTEM::WAIT(0);
			func_415();
		}
		func_415();
		if (iLocal_695 == 3)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
			iLocal_694 = 4;
			return 0;
		}
		else if (iLocal_695 == 2)
		{
			func_284(iVar1);
		}
	}
	return 1;
}

void func_284(int iParam0)
{
	Global_4264525 = iParam0;
}

bool func_285(int iParam0, int iParam1, int iParam2)
{
	if (*iParam2 != 0 && *iParam2 != 1)
	{
		*iParam2 = 0;
	}
	switch (*iParam2)
	{
		case 0:
			if (func_295() != -1)
			{
				return 0;
			}
			iVar0 = func_294(iParam0);
			if (func_291(78225582, -1799524201, iParam1, -1018905335, 1, 0, 1, 4, iVar0, 3))
			{
				*iParam2 = 1;
			}
			else
			{
				*iParam2 = 3;
			}
			if (*iParam2 == 1 && func_288())
			{
			}
			else
			{
				*iParam2 = 3;
				func_250(func_295());
			}
			break;
		
		case 1:
			if (func_287(func_295()))
			{
				if (func_286(func_295()) == 2)
				{
					*iParam2 = 2;
					func_250(func_295());
					func_284(iParam1);
				}
				else
				{
					*iParam2 = 3;
					func_250(func_295());
				}
			}
			break;
	}
	return *iParam2 != 1;
}

int func_286(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2;
	}
	return 0;
}

int func_287(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2 != 1;
	}
	return 0;
}

int func_288()
{
	bVar0 = false;
	if (!func_25())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_295();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_24()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_290(Global_4263954[iVar2].f_66.f_6, Global_4263954[iVar2].f_66.f_4, Global_4263954[iVar2].f_66.f_1) == 1)
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
	iVar3 = func_289(iVar2);
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
				func_256(Global_4263954[iVar2], iVar2);
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	return 0;
}

int func_289(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66;
	}
	return -1;
}

int func_290(int iParam0, int iParam1, int iParam2)
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

int func_291(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bVar0 = false;
	if (!func_25())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_24()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
	iVar1 = func_295();
	if (iVar1 == -1)
	{
		if (!func_293(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_292(iParam1))
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

int func_292(int iParam0)
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

int func_293(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bVar0 = false;
	if (!func_25())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_24()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
		*iParam0 = func_255(uVar3, iParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_294(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY4_v0", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY5_v0", 64);
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_295()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_289(iVar0) != 2147483647)
		{
			if (func_253(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

var func_296(bool bParam0)
{
	func_297(&sVar0, bParam0);
	return MISC::GET_HASH_KEY(&sVar0);
}

void func_297(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		StringCopy(sParam0, "IG_SELL_0_t0_v0", 64);
	}
	else
	{
		StringCopy(sParam0, "IG_BUY_0_t0_v0", 64);
	}
}

void func_298(int iParam0)
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "DLC_Biker_Computer_Sounds", 1);
	func_301(iLocal_512, iParam0, 1);
	if (func_299(PLAYER::PLAYER_ID()))
	{
		func_467();
	}
	else
	{
		iLocal_513 = iParam0;
	}
}

int func_299(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_274(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_300(Global_2425662[iParam0].f_310.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_300(int iParam0)
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

void func_301(int iParam0, int iParam1, bool bParam2)
{
	if (func_7(PLAYER::PLAYER_ID(), iParam0))
	{
		iVar0 = func_4(PLAYER::PLAYER_ID(), iParam0);
		if (bParam2)
		{
			MISC::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iVar0].f_5), iParam1);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iVar0].f_5), iParam1);
		}
		func_243(func_303(iVar0, iParam1), func_302(bParam2), -1, 1, 0);
	}
}

int func_302(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_303(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 3854;
				
				case 1:
					return 3855;
				
				case 2:
					return 3856;
				
				case 3:
					return 3857;
				
				case 4:
					return 3858;
				
				case 5:
					return 5377;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return 3878;
				
				case 1:
					return 3879;
				
				case 2:
					return 3880;
				
				case 3:
					return 3881;
				
				case 4:
					return 3882;
				
				case 5:
					return 5376;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 3883;
				
				case 1:
					return 3884;
				
				case 2:
					return 3885;
				
				case 3:
					return 3886;
				
				case 4:
					return 3887;
				
				case 5:
					return 5378;
				
				default:
			}
			break;
	}
	return 3854;
}

int func_304(int iParam0)
{
	bVar0 = true;
	iVar1 = 1;
	iVar2 = func_19(iParam0, iLocal_512);
	iVar3 = iParam0;
	iVar4 = func_459(iLocal_512);
	iVar5 = func_307(iVar4, iVar3 + 1);
	iVar6 = func_27(iLocal_512);
	iVar7 = func_306(iVar6, iVar3 + 1, 1);
	if (func_25())
	{
		bVar0 = false;
		while (!func_305(-103880010, 235173372, iVar7, 1, iVar2, &iLocal_511, iVar5, 3, 0, 0))
		{
			SYSTEM::WAIT(0);
			func_415();
			if (iLocal_511 == 1 && func_295() == -1)
			{
				iLocal_511 = 3;
				iVar1 = 0;
			}
		else
		{
			}
		}
		func_415();
		if (iLocal_511 == 2)
		{
			bVar0 = true;
		}
		iLocal_511 = 0;
	}
	if (bVar0)
	{
		if (iVar2 > 0)
		{
			Var8.x = MISC::GET_HASH_KEY(func_235(iLocal_512));
			Var8.y = iVar6;
			Var8.z = iParam0;
			MONEY::_0x675D19C6067CAE08(iVar2, &Var8, 0, 1);
		}
		iLocal_498 = 1;
		if (func_25())
		{
			func_250(func_295());
		}
		return 1;
	}
	if (iVar1 && func_25())
	{
		func_250(func_295());
	}
	return 0;
}

bool func_305(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (*uParam5 != 0 && *uParam5 != 1)
	{
		*uParam5 = 0;
	}
	switch (*uParam5)
	{
		case 0:
			if (func_291(78225582, iParam0, iParam2, iParam1, iParam3, iParam4, 1, 4, iParam6, iParam7))
			{
				if (func_288())
				{
					*uParam5 = 1;
				}
				else
				{
					*uParam5 = 3;
					func_250(func_295());
				}
			}
			else
			{
				*uParam5 = 3;
				func_250(func_295());
			}
			break;
		
		case 1:
			if (func_287(func_295()))
			{
				if (func_286(func_295()) == 2)
				{
					*uParam5 = 2;
					if (iParam4 != 0)
					{
						NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_289(func_295()));
						if (iParam0 == 1394405165)
						{
							MONEY::NETWORK_BUY_PROPERTY(iParam4, iParam8, 0, 0);
						}
						else if (iParam0 == -103880010)
						{
						}
						else
						{
							MONEY::NETWORK_BUY_ITEM(iParam4, iParam8, 18, 1, 0, 0, 0, iParam9, 0, 1);
						}
					}
					func_250(func_295());
				}
				else
				{
					*uParam5 = 3;
					func_250(func_295());
				}
			}
			break;
	}
	return *uParam5 != 1;
}

int func_306(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&Var0, "FA_UPGRADE_FAKEID_SETUP_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				
				case 1:
					StringCopy(&Var0, "FA_UPGRADE_FAKEID_EQUIP_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				
				case 2:
					StringCopy(&Var0, "FA_UPGRADE_FAKEID_STAFF_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				
				case 3:
					StringCopy(&Var0, "FA_UPGRADE_FAKEID_SEC_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					StringCopy(&Var0, "FA_UPGRADE_WEED_SETUP_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				
				case 1:
					StringCopy(&Var0, "FA_UPGRADE_WEED_EQUIP_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				
				case 2:
					StringCopy(&Var0, "FA_UPGRADE_WEED_STAFF_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				
				case 3:
					StringCopy(&Var0, "FA_UPGRADE_WEED_SEC_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					StringCopy(&Var0, "FA_UPGRADE_CASH_SETUP_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				
				case 1:
					StringCopy(&Var0, "FA_UPGRADE_CASH_EQUIP_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				
				case 2:
					StringCopy(&Var0, "FA_UPGRADE_CASH_STAFF_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				
				case 3:
					StringCopy(&Var0, "FA_UPGRADE_CASH_SEC_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					StringCopy(&Var0, "FA_UPGRADE_METH_SETUP_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				
				case 1:
					StringCopy(&Var0, "FA_UPGRADE_METH_EQUIP_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				
				case 2:
					StringCopy(&Var0, "FA_UPGRADE_METH_STAFF_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				
				case 3:
					StringCopy(&Var0, "FA_UPGRADE_METH_SEC_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					StringCopy(&Var0, "FA_UPGRADE_COKE_SETUP_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				
				case 1:
					StringCopy(&Var0, "FA_UPGRADE_COKE_EQUIP_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				
				case 2:
					StringCopy(&Var0, "FA_UPGRADE_COKE_STAFF_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				
				case 3:
					StringCopy(&Var0, "FA_UPGRADE_COKE_SEC_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
			}
			break;
		
		case 5:
			if (iParam1 == 0)
			{
				StringCopy(&Var0, "FA_UPGRADE_WEAPONS_SETUP_", 64);
				StringIntConCat(&Var0, iParam2, 64);
				StringConCat(&Var0, "_t0_v0", 64);
				break;
			}
			else
			{
				func_20(&Var0, iParam0, iParam1, iParam2, 0);
			}
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&Var0);
}

int func_307(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					StringCopy(&cVar0, "MP_STAT_FACTORYSETUP0_v0", 64);
					break;
				
				case 1:
					StringCopy(&cVar0, "MP_STAT_FACTORYSETUP1_v0", 64);
					break;
				
				case 2:
					StringCopy(&cVar0, "MP_STAT_FACTORYSETUP2_v0", 64);
					break;
				
				case 3:
					StringCopy(&cVar0, "MP_STAT_FACTORYSETUP3_v0", 64);
					break;
				
				case 4:
					StringCopy(&cVar0, "MP_STAT_FACTORYSETUP4_v0", 64);
					break;
				
				case 5:
					StringCopy(&cVar0, "MP_STAT_FACTORYSETUP5_v0", 64);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES0_v0", 64);
					break;
				
				case 1:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES1_v0", 64);
					break;
				
				case 2:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES2_v0", 64);
					break;
				
				case 3:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES3_v0", 64);
					break;
				
				case 4:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES4_v0", 64);
					break;
				
				case 5:
					StringCopy(&cVar0, "MP_STAT_BUNKER_EQUIPMENT_v0", 64);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES0_1_v0", 64);
					break;
				
				case 1:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES1_1_v0", 64);
					break;
				
				case 2:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES2_1_v0", 64);
					break;
				
				case 3:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES3_1_v0", 64);
					break;
				
				case 4:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES4_1_v0", 64);
					break;
				
				case 5:
					StringCopy(&cVar0, "MP_STAT_BUNKER_STAFF_v0", 64);
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES0_2_v0", 64);
					break;
				
				case 1:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES1_2_v0", 64);
					break;
				
				case 2:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES2_2_v0", 64);
					break;
				
				case 3:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES3_2_v0", 64);
					break;
				
				case 4:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES4_2_v0", 64);
					break;
				
				case 5:
					StringCopy(&cVar0, "MP_STAT_BUNKER_SECURITY_v0", 64);
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 5:
					StringCopy(&cVar0, "MP_STAT_BUNKER_DECOR_v0", 64);
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 5:
					StringCopy(&cVar0, "MP_STAT_BUNKER_SAVEBED_v0", 64);
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 5:
					StringCopy(&cVar0, "MP_STAT_BUNKER_FIRING_RANGE_v0", 64);
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 5:
					StringCopy(&cVar0, "MP_STAT_BUNKER_GUNLOCKER_v0", 64);
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 5:
					StringCopy(&cVar0, "MP_STAT_BUNKER_TRANSPORTATION_v0", 64);
					break;
			}
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_308(int iParam0, int iParam1)
{
	if (!func_28(PLAYER::PLAYER_ID(), iParam1, iParam0) && MONEY::NETWORK_CAN_SPEND_MONEY(func_19(iParam0, iParam1), 0, 1, 0, -1, 0))
	{
		return 1;
	}
	return 0;
}

void func_309(int iParam0)
{
	if (Global_1370147[iParam0] == 0)
	{
		Global_1370147[iParam0] = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_428(func_310(iParam0), 1, -1, 1);
	}
}

int func_310(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9389;
		
		case 1:
			return 9390;
		
		case 2:
			return 9391;
		
		case 3:
			return 9392;
		
		case 4:
			return 9393;
		
		case 5:
			return 15374;
		
		default:
	}
	return 9389;
}

void func_311(int iParam0, bool bParam1)
{
	if (!func_322(iParam0))
	{
		return;
	}
	iVar0 = func_321(PLAYER::PLAYER_ID(), iParam0);
	if (!func_320(iVar0))
	{
		return;
	}
	func_317(iVar0, iParam0, 1, 0);
	func_316(&(Global_2513564[iParam0]));
	iVar1 = iVar0;
	iVar2 = func_315(iParam0);
	func_409(iVar2, 0, -1, 1);
	if (iParam0 < 4)
	{
		iVar1 = (iVar1 + iParam0 * 7);
		MISC::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_281.f_2), iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_281.f_3), iVar1);
	}
	if (bParam1)
	{
		func_312(-1871889645, 10, 0);
	}
}

void func_312(int iParam0, int iParam1, int iParam2)
{
	if (func_314(iParam1, iParam2))
	{
		iVar0 = func_313();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_313()
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

int func_314(int iParam0, var uParam1)
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

int func_315(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = 22018;
			break;
		
		case 1:
			iVar0 = 22019;
			break;
		
		case 2:
			iVar0 = 22020;
			break;
		
		case 3:
			iVar0 = 22021;
			break;
		
		case 4:
			iVar0 = 22022;
			break;
	}
	return iVar0;
}

void func_316(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_317(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_322(iParam1) || !func_320(iParam0))
	{
		return;
	}
	iVar0 = func_319(iParam0);
	iVar1 = (iVar0 - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2513564[iParam1])));
	if (bParam2)
	{
		func_316(&(Global_2513564[iParam1]));
	}
	if (bParam3)
	{
		iVar1 = iVar0;
	}
	iVar2 = func_318(iParam0);
	func_243(iVar2, iVar1, -1, 1, 0);
	Global_2513583[iParam0] = iVar1;
}

int func_318(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 10837;
		
		case 2:
			return 10838;
		
		case 3:
			return 10839;
		
		case 4:
			return 10840;
		
		case 5:
			return 10841;
		
		case 6:
			return 10842;
		
		case 0:
			return 10843;
		
		default:
	}
	return 10837;
}

int func_319(int iParam0)
{
	if (!func_320(iParam0))
	{
		return -1;
	}
	return Global_2513583[iParam0];
}

bool func_320(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 7);
}

int func_321(int iParam0, int iParam1)
{
	if (!func_322(iParam1))
	{
		return -1;
	}
	iVar1 = -1;
	if (iParam1 < 4)
	{
		iVar2 = iParam1 * 7;
		iVar3 = iVar2 + 6;
		iVar0 = iVar2;
		while (iVar0 <= iVar3)
		{
			if (MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_2, iVar0))
			{
				iVar0 = (iVar0 - iParam1 * 7);
				iVar1 = iVar0;
			}
			else
			{
				iVar0++;
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if (MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_3, iVar0))
			{
				iVar1 = iVar0;
			}
			else
			{
				iVar0++;
			}
		}
	}
	return iVar1;
}

bool func_322(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 5);
}

int func_323(int iParam0)
{
	if (!func_320(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_324(iVar0, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_324(int iParam0, int iParam1)
{
	if (!func_322(iParam0) || !func_320(iParam1))
	{
		return 0;
	}
	if (iParam0 < 4)
	{
		iVar0 = (iParam0 * 7 + iParam1);
		if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_281.f_2, iVar0))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = iParam1;
		if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_281.f_3, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_325(int iParam0)
{
	if (!func_320(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_324(iVar0, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_326(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1;
		
		case 1:
			return 4;
		
		case 4:
			return 2;
		
		case 3:
			return 3;
		
		case 0:
			return 5;
		
		case 2:
			return 6;
		
		default:
	}
	return -1;
}

int func_327(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (Global_1590535[iParam0].f_274.f_281 != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_328()
{
	iVar0 = func_459(iLocal_512);
	if (func_25() && func_458(PLAYER::PLAYER_ID(), iLocal_512) > 0)
	{
		iVar1 = func_296(1);
		iLocal_692 = 1;
		while (!func_285(iVar0, iVar1, &iLocal_695))
		{
			SYSTEM::WAIT(0);
			func_415();
		}
		func_415();
		if (iLocal_695 == 2)
		{
			iLocal_695 = 0;
			iVar2 = func_458(PLAYER::PLAYER_ID(), iLocal_512);
			while (!func_338(iVar0, iVar2, 0, 0, &iLocal_695, 0))
			{
				SYSTEM::WAIT(0);
				func_415();
			}
			func_284(iVar1);
			func_415();
			if (iLocal_695 == 2)
			{
				func_329(PLAYER::PLAYER_ID(), iLocal_512, 1, 0, 0, 0);
				func_456(iVar0, 0, 0);
			}
		}
	}
	else
	{
		func_329(PLAYER::PLAYER_ID(), iLocal_512, 1, 0, 0, 0);
		func_456(iVar0, 0, 0);
	}
}

void func_329(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = func_459(iParam1);
	if (func_30(iVar0))
	{
		if (func_7(iParam0, iParam1))
		{
			func_281(iVar0, 0);
			if (bParam3)
			{
				Global_1590535[iParam0].f_274.f_183[iVar0].f_4 = 0;
				func_409(func_337(iVar0), 0, -1, 1);
			}
			else
			{
				Global_1590535[iParam0].f_274.f_183[iVar0].f_4 = 1;
				func_409(func_337(iVar0), 1, -1, 1);
			}
			if (bParam2)
			{
				func_243(func_336(iVar0), 0, -1, 1, 0);
				Global_1590535[iParam0].f_274.f_183[iVar0].f_1 = 0;
			}
			if (bParam4)
			{
				func_243(func_335(iVar0), 0, -1, 1, 0);
				func_334(iVar0, 0);
				func_333(iVar0, 0);
			}
			Global_1370147[iVar0] = 0;
			func_428(func_310(iVar0), 0, -1, 1);
			func_428(func_332(iVar0), 0, -1, 1);
			if (func_27(iParam1) == 1)
			{
				Global_1370162 = 1;
				Global_1370174 = 0;
			}
			Global_1590535[iParam0].f_274.f_183[iVar0].f_8 = 0;
			func_428(func_331(iVar0), 0, -1, 1);
			func_330(iVar0);
			if (func_209(iParam1))
			{
				if (bParam5)
				{
					Global_1590535[iParam0].f_274.f_256 = 0;
					func_243(5442, 0, -1, 1, 0);
				}
			}
			Global_2460611 = 1;
		}
	}
}

void func_330(int iParam0)
{
	MISC::CLEAR_BIT(&Global_1370171, iParam0);
	MISC::CLEAR_BIT(&Global_1370171, iParam0 + 6);
}

int func_331(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9394;
		
		case 1:
			return 9395;
		
		case 2:
			return 9396;
		
		case 3:
			return 9397;
		
		case 4:
			return 9398;
		
		case 5:
			return 15371;
		
		default:
	}
	return 9394;
}

int func_332(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7633;
		
		case 1:
			return 7634;
		
		case 2:
			return 7635;
		
		case 3:
			return 7636;
		
		case 4:
			return 7637;
		
		case 5:
			return 15383;
		
		default:
	}
	return 7633;
}

void func_333(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1370164[iParam0])
	{
		Global_1370164[iParam0] = iParam1;
	}
}

void func_334(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iParam0].f_2)
	{
		Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iParam0].f_2 = iParam1;
	}
}

int func_335(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3847;
		
		case 1:
			return 3848;
		
		case 2:
			return 3849;
		
		case 3:
			return 3850;
		
		case 4:
			return 3851;
		
		case 5:
			return 5443;
		
		default:
	}
	return 3847;
}

int func_336(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3842;
		
		case 1:
			return 3843;
		
		case 2:
			return 3844;
		
		case 3:
			return 3845;
		
		case 4:
			return 3846;
		
		case 5:
			return 5441;
		
		default:
	}
	return 3842;
}

int func_337(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9350;
		
		case 1:
			return 9351;
		
		case 2:
			return 9352;
		
		case 3:
			return 9353;
		
		case 4:
			return 9354;
		
		case 5:
			return 15266;
		
		default:
	}
	return 9350;
}

bool func_338(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (*iParam4 != 0 && *iParam4 != 1)
	{
		*iParam4 = 0;
	}
	switch (*iParam4)
	{
		case 0:
			if (func_295() != -1)
			{
				return 0;
			}
			iVar2 = func_341(iParam0);
			iVar3 = func_340();
			iVar4 = func_339(iParam0, 0);
			switch (iParam3)
			{
				case 0:
					iVar5 = -1003644442;
					break;
				
				case 1:
					iVar5 = 402112378;
					break;
				
				case 2:
					iVar5 = 1283718111;
					break;
				
				case 3:
					iVar5 = -1818214114;
					break;
			}
			if (iParam3 == 0 || func_291(78225582, -1799524201, iVar3, -788753717, 1, 0, 1, 4, iVar2, 3))
			{
				if (func_291(78225582, 69656641, iVar4, -788753717, iParam1, 0, 1, 4, 0, 3))
				{
					if (func_291(78225582, -739932302, iVar5, -788753717, 1, iParam2, 0, 4, iVar4, 3))
					{
						*iParam4 = 1;
					}
					else
					{
						*iParam4 = 3;
					}
				}
				else
				{
					*iParam4 = 3;
				}
			}
			else
			{
				*iParam4 = 3;
			}
			if (*iParam4 == 1 && func_288())
			{
			}
			else
			{
				*iParam4 = 3;
				func_250(func_295());
			}
			break;
		
		case 1:
			if (func_287(func_295()))
			{
				if (func_286(func_295()) == 2)
				{
					if (iParam2 > 0)
					{
						NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_289(func_295()));
						iVar0 = func_214(PLAYER::PLAYER_ID(), iParam0);
						iVar1 = func_27(iVar0);
						MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam2, MISC::GET_HASH_KEY(func_235(iVar0)), iVar1, iParam5);
					}
					*iParam4 = 2;
					func_250(func_295());
				}
				else
				{
					*iParam4 = 3;
					func_250(func_295());
				}
			}
			break;
	}
	return *iParam4 != 1;
}

int func_339(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (iParam0 == 5)
		{
			StringCopy(&cVar0, "MP_STAT_RESTOTALFORFACTORY5_v0", 64);
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY0_v0", 64);
				break;
			
			case 1:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY1_v0", 64);
				break;
			
			case 2:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY2_v0", 64);
				break;
			
			case 3:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY3_v0", 64);
				break;
			
			case 4:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY4_v0", 64);
				break;
			
			case 5:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY5_v0", 64);
				break;
			}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

var func_340()
{
	return Global_4264525;
}

int func_341(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY4_v0", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY5_v0", 64);
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

void func_342(int iParam0)
{
	iVar0 = func_343(iParam0);
	iVar1 = func_22(iVar0, -1, 0) + 1;
	func_243(iVar0, iVar1, -1, 1, 0);
}

int func_343(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3899;
		
		case 1:
			return 3928;
		
		case 2:
			return 3932;
		
		case 3:
			return 3936;
		
		case 4:
			return 3940;
		
		case 5:
			return 5451;
		
		default:
	}
	return 3899;
}

void func_344(int iParam0)
{
	if (func_201(192))
	{
		func_345(iParam0);
		Global_1674374.f_53 = 0;
		Global_1676237 = 1;
	}
}

void func_345(int iParam0)
{
	iVar0 = func_27(iParam0);
	iVar1 = func_347(iVar0);
	if (iVar1 != -1)
	{
		func_346(iVar1);
		func_265(192, iParam0, -1);
	}
}

void func_346(int iParam0)
{
	if (Global_2537071.f_5124.f_339 != iParam0)
	{
		Global_2537071.f_5124.f_339 = iParam0;
	}
}

int func_347(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 15;
		
		case 3:
			return 16;
		
		case 4:
			return 17;
		
		case 0:
			return 18;
		
		case 2:
			return 19;
		
		default:
	}
	return -1;
}

int func_348(int iParam0)
{
	iVar0 = func_459(iParam0);
	if (!func_202(PLAYER::PLAYER_ID(), 190, 0))
	{
		iLocal_694 = 4;
		return 0;
	}
	if (func_203(PLAYER::PLAYER_ID()))
	{
		iLocal_694 = 13;
		return 0;
	}
	if (func_25())
	{
		iLocal_692 = 1;
		iLocal_693 = 0;
		iVar1 = func_296(0);
		while (!func_285(iVar0, iVar1, &iLocal_695))
		{
			SYSTEM::WAIT(0);
			func_415();
		}
		func_415();
		if (iLocal_695 == 3)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
			iLocal_694 = 4;
			return 0;
		}
		else if (iLocal_695 == 2)
		{
			func_284(iVar1);
		}
	}
	return 1;
}

int func_349(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = func_27(iVar0);
	iVar2 = func_232(PLAYER::PLAYER_ID(), iVar1);
	return func_220(iVar2);
}

void func_350(int iParam0)
{
	iVar0 = iParam0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iVar2] == 0)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar2++;
		}
	}
	if (func_394(iVar0, &iVar1, 0))
	{
		func_384(iVar0);
		func_358(iParam0);
		iLocal_501 = 1;
		func_357(28);
		func_357(29);
		func_356(func_459(iParam0));
		func_353();
		func_428(func_310(iVar1), 0, -1, 1);
		func_330(iVar1);
		func_351(iVar1);
		iLocal_498 = 1;
		func_216(2001, "OR_PUR_SUC", "OR_OVRLY_OK", "", -1, 0);
	}
	else
	{
		func_216(0, "BKR_TF_R5", "OR_OVRLY_OK", "", -1, 0);
	}
}

void func_351(int iParam0)
{
	Global_1370173 = 0;
	func_428(func_352(iParam0), 0, -1, 1);
	if (iParam0 == 5)
	{
		func_428(15440, 0, -1, 1);
	}
	Global_1370244 = 0;
	func_316(&Global_1370245);
}

int func_352(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9456;
		
		case 1:
			return 9457;
		
		case 2:
			return 9458;
		
		case 3:
			return 9459;
		
		case 4:
			return 9460;
		
		case 5:
			return 15370;
		
		default:
	}
	return 9456;
}

void func_353()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_354(iVar0);
		iVar0++;
	}
	Global_1370161 = NETWORK::GET_CLOUD_TIME_AS_INT();
}

void func_354(int iParam0)
{
	if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iParam0] != 0 && Global_1370154[iParam0] != 0)
	{
		iVar0 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1370154[iParam0]);
		if (iVar0 > 1000000)
		{
		}
		else
		{
			func_243(func_355(iParam0), iVar0, -1, 1, 0);
		}
	}
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3956;
		
		case 1:
			return 3957;
		
		case 2:
			return 3958;
		
		case 3:
			return 3959;
		
		case 4:
			return 3960;
		
		case 5:
			return 5457;
		
		default:
	}
	return 3956;
}

void func_356(int iParam0)
{
	Global_1370154[iParam0] = NETWORK::GET_CLOUD_TIME_AS_INT();
	func_243(func_355(iParam0), 0, -1, 1, 0);
}

void func_357(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2537071.f_5124.f_14[iVar0]), iVar1);
}

void func_358(int iParam0)
{
	iVar0 = iParam0;
	if (func_209(iVar0))
	{
		return;
	}
	bVar1 = func_237(iVar0);
	iVar2 = func_27(iVar0);
	iVar3 = func_204(iVar0);
	bVar4 = false;
	uVar5 = ZONE::GET_NAME_OF_ZONE(func_382(iVar0, 0));
	Var6 = { func_381(iVar0, iVar2) };
	iVar10 = func_24();
	iVar11 = 0;
	iVar12 = func_234(iVar0);
	iVar13 = -1;
	iVar14 = func_457(iVar0);
	iVar15 = func_458(PLAYER::PLAYER_ID(), iVar0);
	iVar16 = func_380(PLAYER::PLAYER_ID(), iVar0, iVar15);
	iVar17 = 0;
	iVar18 = 0;
	iVar19 = 0;
	iVar20 = 0;
	iVar21 = 0;
	iVar22 = 0;
	iVar23 = -1;
	iVar24 = 0;
	iVar25 = 0;
	iVar26 = 0;
	iVar27 = 0;
	bVar28 = false;
	if (func_7(PLAYER::PLAYER_ID(), iVar0))
	{
		iVar11 = func_459(iVar0);
		iVar21 = func_376(func_378(iVar10, iVar11), func_377(iVar10, iVar11));
		iVar24 = func_376(func_374(iVar10, iVar11), func_373(iVar10, iVar11));
		iVar25 = func_376(func_371(iVar10, iVar11), func_370(iVar10, iVar11));
		iVar20 = func_369(iVar10, iVar11);
		iVar18 = func_367(iVar0);
		iVar19 = func_363(iVar11, 0, 1);
		iVar26 = func_363(iVar11, 0, 0);
		iVar27 = func_363(iVar11, 1, 1);
		iVar17 = Global_1370164[iVar11];
		iVar22 = func_13(0, iVar17, 0);
		bVar4 = Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iVar11].f_4 > 0;
		if (bVar4 || func_362(iVar0))
		{
			bVar28 = true;
		}
	}
	fVar29 = ((SYSTEM::TO_FLOAT(iVar15) / SYSTEM::TO_FLOAT(iVar14)) * 100f);
	iVar30 = SYSTEM::ROUND(fVar29);
	if (iVar17 < 0)
	{
		iVar17 = 0;
	}
	if (func_361(iVar0))
	{
		iVar13 = iVar12;
		iVar12 = func_360(iVar0);
	}
	if (func_359(iVar17))
	{
		iVar23 = iVar22;
		iVar22 = func_13(1, iVar17, 0);
	}
	iLocal_510 = iVar17;
	if (bVar1)
	{
		iVar12 = 0;
		iVar13 = -1;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_683, "ADD_BUSINESS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(&Var6);
	GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(uVar5);
	GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(&Var6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar12);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar30);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar16);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar17);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar18);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar19);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar20);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar28);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar22);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar23);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_683, "ADD_BUSINESS_STATS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar21);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar24);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar25);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar26);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar27);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_683, "SET_START_PRODUCTION_STATUS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_359(int iParam0)
{
	return func_13(0, iParam0, 0) < func_13(1, iParam0, 0);
}

int func_360(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_262145.f_17596;
		
		case 1:
			return Global_262145.f_17592;
		
		case 3:
			return Global_262145.f_17588;
		
		case 5:
			return Global_262145.f_17580;
		
		case 4:
			return Global_262145.f_17584;
		
		case 7:
			return Global_262145.f_17597;
		
		case 6:
			return Global_262145.f_17593;
		
		case 8:
			return Global_262145.f_17589;
		
		case 10:
			return Global_262145.f_17581;
		
		case 9:
			return Global_262145.f_17585;
		
		case 12:
			return Global_262145.f_17598;
		
		case 11:
			return Global_262145.f_17594;
		
		case 13:
			return Global_262145.f_17590;
		
		case 15:
			return Global_262145.f_17582;
		
		case 14:
			return Global_262145.f_17586;
		
		case 17:
			return Global_262145.f_17599;
		
		case 16:
			return Global_262145.f_17595;
		
		case 18:
			return Global_262145.f_17591;
		
		case 20:
			return Global_262145.f_17583;
		
		case 19:
			return Global_262145.f_17587;
		
		case 21:
			return 2035000;
		
		case 22:
			return 2120000;
		
		case 23:
			return 1950000;
		
		case 24:
			return 2375000;
		
		case 25:
			return 2205000;
		
		case 26:
			return 2290000;
		
		case 27:
			return 1750000;
		
		case 28:
			return 1165000;
		
		case 29:
			return 1450000;
		
		case 30:
			return 1550000;
		
		case 31:
			return 1650000;
		
		default:
	}
	return 0;
}

bool func_361(int iParam0)
{
	return func_234(iParam0) < func_360(iParam0);
}

int func_362(int iParam0)
{
	iVar0 = func_459(iParam0);
	if ((func_7(PLAYER::PLAYER_ID(), iParam0) && Global_1370164[iVar0] < Global_262145.f_17916) && !func_215(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_363(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		return func_22(func_366(iParam0), -1, 0);
	}
	else if (bParam2)
	{
		return func_22(func_365(iParam0), -1, 0);
	}
	return func_22(func_364(iParam0), -1, 0);
}

int func_364(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3912;
		
		case 1:
			return 3913;
		
		case 2:
			return 3914;
		
		case 3:
			return 3915;
		
		case 4:
			return 3916;
		
		case 5:
			return 5447;
		
		default:
	}
	return 3912;
}

int func_365(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3917;
		
		case 1:
			return 3918;
		
		case 2:
			return 3919;
		
		case 3:
			return 3920;
		
		case 4:
			return 3921;
		
		case 5:
			return 5448;
		
		default:
	}
	return 3917;
}

int func_366(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3922;
		
		case 1:
			return 3923;
		
		case 2:
			return 3924;
		
		case 3:
			return 3925;
		
		case 4:
			return 3926;
		
		case 5:
			return 5449;
		
		default:
	}
	return 3922;
}

int func_367(int iParam0)
{
	iVar0 = func_459(iParam0);
	return func_22(func_368(iVar0), -1, 0);
}

int func_368(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		
		case 1:
			return 3952;
		
		case 2:
			return 3953;
		
		case 3:
			return 3954;
		
		case 4:
			return 3955;
		
		case 5:
			return 5456;
		
		default:
	}
	return 3951;
}

int func_369(int iParam0, int iParam1)
{
	return (func_371(iParam0, iParam1) + func_374(iParam0, iParam1));
}

int func_370(int iParam0, int iParam1)
{
	return func_22(func_261(iParam1), iParam0, 0);
}

int func_371(int iParam0, int iParam1)
{
	return func_22(func_372(iParam1), iParam0, 0);
}

int func_372(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3910;
		
		case 1:
			return 3943;
		
		case 2:
			return 3945;
		
		case 3:
			return 3947;
		
		case 4:
			return 3949;
		
		case 5:
			return 5454;
		
		default:
	}
	return 3910;
}

int func_373(int iParam0, int iParam1)
{
	return func_22(func_262(iParam1), iParam0, 0);
}

int func_374(int iParam0, int iParam1)
{
	return func_22(func_375(iParam1), iParam0, 0);
}

int func_375(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3900;
		
		case 1:
			return 3929;
		
		case 2:
			return 3933;
		
		case 3:
			return 3937;
		
		case 4:
			return 3941;
		
		case 5:
			return 5452;
		
		default:
	}
	return 3900;
}

int func_376(int iParam0, int iParam1)
{
	return SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f));
}

int func_377(int iParam0, int iParam1)
{
	return func_22(func_343(iParam1), iParam0, 0);
}

int func_378(int iParam0, int iParam1)
{
	return func_22(func_379(iParam1), iParam0, 0);
}

int func_379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		
		case 1:
			return 3927;
		
		case 2:
			return 3931;
		
		case 3:
			return 3935;
		
		case 4:
			return 3939;
		
		case 5:
			return 5450;
		
		default:
	}
	return 3898;
}

int func_380(int iParam0, int iParam1, int iParam2)
{
	iVar1 = func_27(iParam1);
	if (func_6(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16960;
				if (func_28(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16965);
				}
				if (func_28(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16970);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16959;
				if (func_28(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16964);
				}
				if (func_28(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16969);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16958;
				if (func_28(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16963);
				}
				if (func_28(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16968);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16956;
				if (func_28(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16961);
				}
				if (func_28(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16966);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16957;
				if (func_28(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16962);
				}
				if (func_28(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16967);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21060;
				if (func_28(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21062);
				}
				if (func_28(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21061);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

struct<4> func_381(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 4:
			StringCopy(&Var0, "MP_BWH_CRACK_", 16);
			break;
		
		case 1:
			StringCopy(&Var0, "MP_BWH_WEED_", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "MP_BWH_FCASH_", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "MP_BWH_METH_", 16);
			break;
		
		case 0:
			StringCopy(&Var0, "MP_BWH_FID_", 16);
			break;
		
		case 5:
			StringCopy(&Var0, "MP_BWH_WEA_", 16);
			break;
	}
	iVar4 = iParam0;
	if (iParam1 == 5)
	{
		iVar4 = (iVar4 - 21);
		StringIntConCat(&Var0, iVar4, 16);
	}
	else
	{
		StringIntConCat(&Var0, SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar4) / 5f)), 16);
	}
	StringConCat(&Var0, "D", 16);
	return Var0;
}

Vector3 func_382(int iParam0, int iParam1)
{
	Var0[0] = { 0f, 0f, 0f };
	Var0[1] = { 0f, 0f, 0f };
	if (!func_6(iParam0))
	{
		return Var0[0];
	}
	switch (iParam0)
	{
		case 1:
			Var0[0] = { 46.57f, 6298.997f, 30.2003f };
			break;
		
		case 2:
			Var0[0] = { 405.3243f, 6493.409f, 26.71f };
			break;
		
		case 3:
			Var0[0] = { 58.64f, 6469.08f, 30.3094f };
			break;
		
		case 4:
			Var0[0] = { -441.42f, 6144.01f, 30.44f };
			break;
		
		case 5:
			Var0[0] = { -179.1551f, 6317.944f, 30.2184f };
			break;
		
		case 6:
			Var0[0] = { 1453.143f, -1686.121f, 64.9563f };
			break;
		
		case 7:
			Var0[0] = { 114.6697f, 164.4655f, 103.4672f };
			break;
		
		case 8:
			Var0[0] = { -1464.77f, -390.1486f, 37.3017f };
			break;
		
		case 9:
			Var0[0] = { -1172.126f, -1390.925f, 3.7783f };
			break;
		
		case 10:
			Var0[0] = { 311.3521f, -760.6975f, 28.0504f };
			Var0[1] = { 307.7254f, -699.9282f, 28.3096f };
			break;
		
		case 11:
			Var0[0] = { 208.0649f, 2456.774f, 54.8342f };
			break;
		
		case 12:
			Var0[0] = { 2878.758f, 4459.61f, 47.3484f };
			break;
		
		case 13:
			Var0[0] = { 376.971f, 3590.405f, 32.2221f };
			break;
		
		case 14:
			Var0[0] = { 646.3618f, 2792.016f, 40.6392f };
			break;
		
		case 15:
			Var0[0] = { 1642.669f, 4839.135f, 40.9704f };
			break;
		
		case 16:
			Var0[0] = { 1189.591f, -3098.619f, 4.7346f };
			break;
		
		case 17:
			Var0[0] = { 140.2878f, -2477.946f, 4.94f };
			break;
		
		case 18:
			Var0[0] = { -256.8373f, -2586.215f, 4.9106f };
			break;
		
		case 19:
			Var0[0] = { 666.0431f, -2672.718f, 4.9612f };
			break;
		
		case 20:
			Var0[0] = { -337.6264f, -2769.627f, 3.944f };
			break;
		
		case 21:
			Var0[0] = { 494.0037f, 3015.448f, 40.0526f };
			break;
		
		case 22:
			Var0[0] = { 849.5273f, 3023.794f, 40.2763f };
			break;
		
		case 23:
			Var0[0] = { 40.4676f, 2928.654f, 54.7342f };
			break;
		
		case 24:
			Var0[0] = { 1572.055f, 2224.068f, 77.3731f };
			break;
		
		case 25:
			Var0[0] = { 2107.983f, 3324.722f, 44.3713f };
			break;
		
		case 26:
			Var0[0] = { 2488.974f, 3164.124f, 48.0622f };
			break;
		
		case 27:
			Var0[0] = { 1798.893f, 4705.239f, 38.955f };
			break;
		
		case 28:
			Var0[0] = { -753.681f, 5944.054f, 18.8012f };
			break;
		
		case 29:
			Var0[0] = { -388.6984f, 4338.543f, 55.1304f };
			break;
		
		case 30:
			Var0[0] = { -3029.436f, 3334.414f, 9.0759f };
			break;
		
		case 31:
			Var0[0] = { -3155.589f, 1376.788f, 16.0949f };
			break;
	}
	if (iParam1 && !func_383(Var0[1], 0f, 0f, 0f, 0))
	{
		return Var0[1];
	}
	return Var0[0];
}

bool func_383(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

void func_384(int iParam0)
{
	if (func_6(iParam0))
	{
		iVar0 = 0;
		if (func_209(iParam0))
		{
			iVar0 = 5;
		}
		else
		{
			iVar1 = 0;
			while (iVar1 <= 5)
			{
				if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iVar1] == 0)
				{
					iVar0 = iVar1;
				}
				else
				{
					iVar1++;
				}
			}
		}
		func_243(func_230(iVar0), iParam0, -1, 1, 0);
		func_243(func_231(iVar0), iParam0, -1, 1, 0);
		Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iVar0] = iParam0;
		if (func_209(iParam0))
		{
			Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iVar0].f_11 = 0;
			func_409(9359, 0, -1, 1);
			func_243(5618, 0, -1, 1, 0);
		}
		func_393(iVar0);
		if (14 == iParam0 && func_238())
		{
			func_385(3, 1);
		}
		if (28 == iParam0 && func_238())
		{
			func_385(1, 1);
		}
	}
}

void func_385(int iParam0, bool bParam1)
{
	iVar0 = func_392(iParam0);
	if (iParam0 == -1)
	{
	}
	else if (iParam0 == 114)
	{
	}
	else if (func_391(iParam0))
	{
		iVar1 = func_22(6419, -1, 0);
		if (bParam1)
		{
			MISC::SET_BIT(&iVar1, iVar0);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar1, iVar0);
		}
		func_243(6419, iVar1, -1, 1, 0);
		if (func_390(iParam0))
		{
			func_388(19);
		}
		else
		{
			func_388(20);
		}
	}
	else if (func_387(iParam0))
	{
		if (func_386(iParam0))
		{
			iVar1 = func_22(6420, -1, 0);
			if (bParam1)
			{
				MISC::SET_BIT(&iVar1, iVar0);
			}
			else
			{
				MISC::CLEAR_BIT(&iVar1, iVar0);
			}
			func_243(6420, iVar1, -1, 1, 0);
		}
		else
		{
			iVar1 = func_22(6421, -1, 0);
			if (bParam1)
			{
				MISC::SET_BIT(&iVar1, iVar0);
			}
			else
			{
				MISC::CLEAR_BIT(&iVar1, iVar0);
			}
			func_243(6421, iVar1, -1, 1, 0);
		}
		func_388(21);
	}
	else
	{
		iVar1 = func_22(6154, -1, 0);
		if (bParam1)
		{
			MISC::SET_BIT(&iVar1, iVar0);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar1, iVar0);
		}
		func_243(6154, iVar1, -1, 1, 0);
	}
}

int func_386(int iParam0)
{
	if (iParam0 >= 53 && iParam0 <= 83)
	{
		return 1;
	}
	return 0;
}

int func_387(int iParam0)
{
	if (iParam0 >= 53 && iParam0 <= 113)
	{
		return 1;
	}
	return 0;
}

void func_388(int iParam0)
{
	iVar4 = func_22(6154, -1, 0);
	bVar5 = true;
	switch (iParam0)
	{
		case 19:
			iVar0 = 22;
			iVar1 = 42;
			iVar3 = func_392(19);
			break;
		
		case 20:
			iVar0 = 43;
			iVar1 = 52;
			iVar3 = func_392(20);
			break;
		
		case 21:
			iVar0 = 53;
			iVar1 = 113;
			iVar3 = func_392(21);
			break;
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		iVar6 = iVar2;
		if (!func_389(iVar6))
		{
			bVar5 = false;
		}
		iVar2++;
	}
	if (bVar5)
	{
		if (!MISC::IS_BIT_SET(iVar4, iVar3))
		{
			MISC::SET_BIT(&iVar4, iVar3);
			func_243(6154, iVar4, -1, 1, 0);
		}
	}
	else if (MISC::IS_BIT_SET(iVar4, iVar3))
	{
		MISC::CLEAR_BIT(&iVar4, iVar3);
		func_243(6154, iVar4, -1, 1, 0);
	}
}

bool func_389(int iParam0)
{
	iVar0 = func_392(iParam0);
	bVar3 = false;
	if (iParam0 == -1)
	{
		bVar3 = true;
		iVar2 = 0;
		while (iVar2 < 114)
		{
			if (!func_389(iVar2))
			{
				bVar3 = false;
			}
			iVar2++;
		}
	}
	else if (iParam0 == 114)
	{
	}
	else if (func_391(iParam0))
	{
		iVar1 = func_22(6419, -1, 0);
		bVar3 = MISC::IS_BIT_SET(iVar1, iVar0);
	}
	else if (func_387(iParam0))
	{
		if (func_386(iParam0))
		{
			iVar1 = func_22(6420, -1, 0);
		}
		else
		{
			iVar1 = func_22(6421, -1, 0);
		}
		bVar3 = MISC::IS_BIT_SET(iVar1, iVar0);
	}
	else
	{
		iVar1 = func_22(6154, -1, 0);
		bVar3 = MISC::IS_BIT_SET(iVar1, iVar0);
	}
	return bVar3;
}

int func_390(int iParam0)
{
	if (iParam0 >= 22 && iParam0 <= 42)
	{
		return 1;
	}
	return 0;
}

int func_391(int iParam0)
{
	if (iParam0 >= 22 && iParam0 <= 52)
	{
		return 1;
	}
	return 0;
}

int func_392(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		case 7:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		case 13:
			return 13;
		
		case 14:
			return 14;
		
		case 15:
			return 15;
		
		case 16:
			return 16;
		
		case 17:
			return 17;
		
		case 18:
			return 18;
		
		case 19:
			return 19;
		
		case 20:
			return 20;
		
		case 21:
			return 21;
		
		default:
	}
	switch (iParam0)
	{
		case 22:
			return 0;
		
		case 23:
			return 1;
		
		case 24:
			return 2;
		
		case 25:
			return 3;
		
		case 26:
			return 4;
		
		case 27:
			return 5;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		default:
	}
	switch (iParam0)
	{
		case 53:
			return 0;
		
		case 54:
			return 1;
		
		case 55:
			return 2;
		
		case 56:
			return 3;
		
		case 57:
			return 4;
		
		case 58:
			return 5;
		
		case 59:
			return 6;
		
		case 60:
			return 7;
		
		case 61:
			return 8;
		
		case 62:
			return 9;
		
		case 63:
			return 10;
		
		case 64:
			return 11;
		
		case 65:
			return 12;
		
		case 66:
			return 13;
		
		case 67:
			return 14;
		
		case 68:
			return 15;
		
		case 69:
			return 16;
		
		case 70:
			return 17;
		
		case 71:
			return 18;
		
		case 72:
			return 19;
		
		case 73:
			return 20;
		
		case 74:
			return 21;
		
		case 75:
			return 22;
		
		case 76:
			return 23;
		
		case 77:
			return 24;
		
		case 78:
			return 25;
		
		case 79:
			return 26;
		
		case 80:
			return 27;
		
		case 81:
			return 28;
		
		case 82:
			return 29;
		
		case 83:
			return 30;
		
		case 84:
			return 0;
		
		case 85:
			return 1;
		
		case 86:
			return 2;
		
		case 87:
			return 3;
		
		case 88:
			return 4;
		
		case 89:
			return 5;
		
		case 90:
			return 6;
		
		case 91:
			return 7;
		
		case 92:
			return 8;
		
		case 93:
			return 9;
		
		case 94:
			return 10;
		
		case 95:
			return 11;
		
		case 96:
			return 12;
		
		case 97:
			return 13;
		
		case 98:
			return 14;
		
		case 99:
			return 15;
		
		case 100:
			return 16;
		
		case 101:
			return 17;
		
		case 102:
			return 18;
		
		case 103:
			return 19;
		
		case 104:
			return 20;
		
		case 105:
			return 21;
		
		case 106:
			return 22;
		
		case 107:
			return 23;
		
		case 108:
			return 24;
		
		case 109:
			return 25;
		
		case 110:
			return 26;
		
		case 111:
			return 27;
		
		case 112:
			return 28;
		
		case 113:
			return 29;
		
		default:
	}
	return -1;
}

void func_393(int iParam0)
{
	func_243(func_365(iParam0), 0, -1, 1, 0);
	func_243(func_364(iParam0), 0, -1, 1, 0);
	func_243(func_343(iParam0), 0, -1, 1, 0);
	func_243(func_366(iParam0), 0, -1, 1, 0);
	func_243(func_379(iParam0), 0, -1, 1, 0);
	func_243(func_368(iParam0), 0, -1, 1, 0);
	func_243(func_261(iParam0), 0, -1, 1, 0);
	func_243(func_262(iParam0), 0, -1, 1, 0);
	func_243(func_372(iParam0), 0, -1, 1, 0);
	func_243(func_375(iParam0), 0, -1, 1, 0);
}

int func_394(int iParam0, int iParam1, int iParam2)
{
	if (func_7(PLAYER::PLAYER_ID(), iParam0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
		iLocal_694 = 2;
		return 0;
	}
	StringCopy(&cVar3, func_235(iParam0), 16);
	iVar7 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(func_234(iParam0)) * Global_262145.f_78));
	iVar0 = iVar7;
	bVar8 = func_237(iParam0);
	if (bVar8)
	{
		iVar7 = 0;
		iVar0 = 0;
	}
	if (iParam2 == 0 || iParam2 == 32)
	{
		if (iVar0 > 0)
		{
			if (!MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, 0, 1, 0, -1, 0))
			{
				iLocal_694 = 1;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
				return 0;
			}
		}
	}
	else
	{
		*iParam1 = func_459(iParam2);
		if (*iParam1 == -1)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
			iLocal_694 = 5;
			return 0;
		}
		else
		{
			iVar2 = func_220(iParam2);
			iVar1 = (iVar7 - iVar2);
		}
		if (iVar1 > 0)
		{
			if (!MONEY::NETWORK_CAN_SPEND_MONEY(iVar1, 0, 1, 0, -1, 0))
			{
				func_404(MISC::GET_HASH_KEY(&cVar3), iVar1, 0);
				iLocal_694 = 1;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
				return 0;
			}
		}
	}
	if (func_25())
	{
		iLocal_692 = 1;
		iLocal_693 = 0;
		iVar9 = func_403(iParam0, 0);
		iVar10 = func_402(*iParam1);
		iVar11 = 0;
		if (bVar8)
		{
			iVar9 = func_403(iParam0, 1);
		}
		if (iParam2 != 0 && iParam2 != 32)
		{
			bVar12 = false;
			if (func_237(iParam2))
			{
				bVar12 = true;
			}
			iVar11 = func_403(iParam2, bVar12);
		}
		iVar13 = -1;
		while (func_401(&iVar13, iVar7, *iParam1, -1616616027, 235173372, iVar9, iVar10, iVar2, iVar11))
		{
			func_415();
			SYSTEM::WAIT(0);
		}
		func_415();
		switch (iVar13)
		{
			case 0:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
				iLocal_694 = 3;
				return 0;
				break;
			
			case 2:
				break;
			
			default:
				iLocal_694 = 3;
				return 0;
				break;
		}
	}
	Var14.x = MISC::GET_HASH_KEY(func_235(iParam0));
	Var14.y = func_27(iParam0);
	Var14.z = -1;
	if (iVar1 > 0)
	{
		func_396(-1980650810, iVar1);
	}
	iParam2 = func_214(PLAYER::PLAYER_ID(), *iParam1);
	func_395(*iParam1, iVar7);
	if (iParam2 == 0 || iParam2 == 32)
	{
		if (func_25())
		{
			NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_289(func_295()));
		}
		MONEY::_0x6FD97159FE3C971A(iVar7, &Var14, 0, 1);
	}
	else
	{
		if (iVar2 > 0)
		{
			if (func_25())
			{
				NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_289(func_295()));
			}
			MONEY::NETWORK_EARN_FROM_PROPERTY(iVar2, MISC::GET_HASH_KEY(func_235(iParam2)));
		}
		if (iVar7 > 0)
		{
			if (func_25())
			{
				NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_289(func_295()));
			}
			MONEY::_0xA51B086B0B2C0F7A(iVar7, &Var14, 0, 1);
		}
	}
	if (func_25())
	{
		func_250(func_295());
	}
	return 1;
}

void func_395(int iParam0, int iParam1)
{
	func_243(func_229(iParam0), iParam1, -1, 1, 0);
}

void func_396(int iParam0, int iParam1)
{
	iVar0 = func_400(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_399(iParam0))
	{
		func_398(iParam0, iVar0);
	}
	else
	{
		func_397(iParam0, iVar0);
	}
}

void func_397(int iParam0, int iParam1)
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

void func_398(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_399(int iParam0)
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

int func_400(var uParam0)
{
	uVar0 = uParam0;
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_401(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	iVar0 = (iParam1 - iParam7);
	if (iLocal_692)
	{
		switch (iLocal_693)
		{
			case 0:
				if (func_295() != -1)
				{
					return 1;
				}
				if (iVar0 > 0 && !MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, 0, 1, 0, -1, 0))
				{
					iLocal_693 = 3;
					return 1;
				}
				if (func_291(78225582, iParam3, iParam5, iParam4, 1, iParam1, uParam2, 4, iParam6, 3))
				{
					if (iParam8 == -1261758859)
					{
					}
					if (iParam8 != 0)
					{
						if (func_291(78225582, iParam3, iParam8, iParam4, 1, iParam7, 1, 4, iParam6, 3))
						{
						}
						else
						{
							iLocal_693 = 3;
							return 1;
						}
					}
					if (iLocal_693 != 3)
					{
						if (func_288())
						{
							iLocal_693 = 1;
						}
						else
						{
							iLocal_693 = 3;
						}
					}
				}
				else
				{
					iLocal_693 = 3;
				}
				break;
			
			case 1:
				if (func_287(func_295()))
				{
					if (func_286(func_295()) == 2)
					{
						iLocal_693 = 2;
					}
					else
					{
						iLocal_693 = 3;
					}
				}
				break;
			
			case 2:
				iLocal_692 = 0;
				iLocal_693 = 0;
				HUD::_0x170F541E1CADD1DE(0);
				*iParam0 = 2;
				return 0;
				break;
			
			case 3:
				func_250(func_295());
				iLocal_692 = 0;
				iLocal_693 = 0;
				HUD::_0x170F541E1CADD1DE(0);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				*iParam0 = 0;
				return 0;
				break;
		}
		return 1;
	}
	if (iLocal_693 == 3)
	{
		iLocal_693 = 0;
		*iParam0 = 0;
		return 0;
	}
	iLocal_693 = 0;
	*iParam0 = -1;
	return 0;
}

int func_402(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_FACTORYSLOT0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_FACTORYSLOT1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_FACTORYSLOT2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_FACTORYSLOT3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_FACTORYSLOT4_v0", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_FACTORYSLOT5_v0", 64);
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_403(int iParam0, bool bParam1)
{
	func_236(&sVar0, iParam0, bParam1);
	return MISC::GET_HASH_KEY(&sVar0);
}

void func_404(var uParam0, int iParam1, int iParam2)
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && NETWORK::IS_STORE_AVAILABLE_TO_USER())
	{
		Global_73993 = uParam0;
		Global_73994 = iParam1;
		Global_73992 = 1;
		Global_4268420 = iParam2;
	}
}

void func_405(int iParam0, bool bParam1)
{
	iVar0 = func_22(3973, -1, 0);
	if (bParam1)
	{
		MISC::SET_BIT(&iVar0, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, iParam0);
	}
	Global_2460610 = 1;
	func_243(3973, iVar0, -1, 1, 0);
}

void func_406(int iParam0)
{
	iVar0 = func_27(iParam0);
	iVar1 = func_232(PLAYER::PLAYER_ID(), iVar0);
	if (func_394(iParam0, &uVar2, iVar1))
	{
		func_407(iParam0, iVar1);
		func_358(iVar1);
		func_358(iParam0);
		iLocal_501 = 1;
		iLocal_498 = 1;
		func_216(2001, "OR_PUR_SUC", "OR_OVRLY_OK", "", -1, 0);
	}
	else
	{
		func_216(0, "BKR_TF_R5", "OR_OVRLY_OK", "", -1, 0);
	}
}

void func_407(int iParam0, int iParam1)
{
	if (func_408(iParam0, iParam1))
	{
		iVar0 = func_459(iParam1);
		func_243(func_230(iVar0), iParam0, -1, 1, 0);
		func_243(func_231(iVar0), iParam0, -1, 1, 0);
		Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iVar0] = iParam0;
		func_334(iVar0, 0);
		func_243(func_335(iVar0), 0, -1, 1, 0);
		Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iVar0].f_1 = 0;
		func_243(func_336(iVar0), 0, -1, 1, 0);
		Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iVar0].f_4 = 0;
		func_409(func_337(iVar0), 0, -1, 1);
		Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iVar0].f_5 = 0;
		func_243(func_303(iVar0, 2), 0, -1, 1, 0);
		func_243(func_303(iVar0, 0), 0, -1, 1, 0);
		func_243(func_303(iVar0, 1), 0, -1, 1, 0);
		Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iVar0].f_6 = 0;
		func_428(func_282(iVar0), 0, -1, 1);
		if (iVar0 != 5)
		{
			func_393(iVar0);
		}
		Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iVar0].f_8 = 0;
		func_428(func_331(iVar0), 0, -1, 1);
		if (func_209(iParam0))
		{
			Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iVar0].f_11 = 0;
			Global_1590535[PLAYER::PLAYER_ID()].f_274.f_256 = 0;
			func_243(5442, 0, -1, 1, 0);
		}
		Global_1370147[iVar0] = 0;
		func_428(func_310(iVar0), 0, -1, 1);
		func_428(func_332(iVar0), 0, -1, 1);
		if (func_27(iParam1) == 1)
		{
			Global_1370162 = 1;
			Global_1370174 = 0;
		}
		func_330(iVar0);
		func_333(iVar0, 0);
		if (func_238())
		{
			if (14 == iParam0)
			{
				func_385(3, 1);
			}
			else if (14 == iParam1)
			{
				func_385(3, 0);
			}
			if (28 == iParam0)
			{
				func_385(1, 1);
			}
			else if (28 == iParam1)
			{
				func_385(1, 0);
			}
		}
	}
}

int func_408(int iParam0, int iParam1)
{
	if ((func_6(iParam0) && func_6(iParam1)) && func_27(iParam0) == func_27(iParam1))
	{
		return 1;
	}
	return 0;
}

var func_409(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_24();
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

int func_410(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_24();
	}
	iVar0 = 0;
	iVar1 = func_412(iParam0, iParam1);
	uVar2 = func_411(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_411(int iParam0)
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

int func_412(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_24();
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

int func_413()
{
	if (!iLocal_503 && func_410(9356, -1, -1) < 3)
	{
		return 1;
	}
	return 0;
}

void func_414()
{
	iLocal_504 = 0;
	PAD::ENABLE_CONTROL_ACTION(2, 205, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 205))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_683, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(205), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	PAD::ENABLE_CONTROL_ACTION(2, 206, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 206))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_683, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(206), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	if (PAD::_IS_USING_KEYBOARD_2(2))
	{
		PAD::ENABLE_CONTROL_ACTION(2, 188, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_683, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(301), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		PAD::ENABLE_CONTROL_ACTION(2, 187, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 187))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_683, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(300), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 187))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_683, "SET_INPUT_RELEASE_EVENT", SYSTEM::TO_FLOAT(300), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 188))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_683, "SET_INPUT_RELEASE_EVENT", SYSTEM::TO_FLOAT(301), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		PAD::ENABLE_CONTROL_ACTION(2, 188, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_683, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(188), -1082130432, -1082130432, -1082130432, -1082130432);
			iLocal_504 = 1;
		}
		PAD::ENABLE_CONTROL_ACTION(2, 187, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 187))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_683, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(187), -1082130432, -1082130432, -1082130432, -1082130432);
			iLocal_504 = 1;
		}
	}
	PAD::ENABLE_CONTROL_ACTION(2, 189, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_683, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(189), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	PAD::ENABLE_CONTROL_ACTION(2, 190, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_683, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(190), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	PAD::ENABLE_CONTROL_ACTION(2, 201, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_683, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(201), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	PAD::ENABLE_CONTROL_ACTION(2, 202, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_683, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(202), -1082130432, -1082130432, -1082130432, -1082130432);
		if (((iLocal_508 == 1 || iLocal_508 == -1) || iLocal_508 == 4) || iLocal_508 == 5)
		{
			if (!iLocal_502)
			{
				func_508(0);
			}
		}
		if (iLocal_502)
		{
			iLocal_502 = 0;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Back", "DLC_Biker_Computer_Sounds", 1);
	}
	PAD::ENABLE_CONTROL_ACTION(2, 203, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 203))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_683, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(203), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	PAD::ENABLE_CONTROL_ACTION(2, 204, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 204))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_683, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(204), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	if (PAD::_IS_USING_KEYBOARD_2(2))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_683, "SET_MOUSE_INPUT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 239));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 240));
		iLocal_504 = 1;
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		PAD::ENABLE_CONTROL_ACTION(2, 237, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_683, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(201), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		PAD::ENABLE_CONTROL_ACTION(2, 238, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 238))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_683, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(202), -1082130432, -1082130432, -1082130432, -1082130432);
			if ((iLocal_508 == 1 || iLocal_508 == -1) || iLocal_508 == 4)
			{
				if (!iLocal_502)
				{
					func_508(0);
				}
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Back", "DLC_Biker_Computer_Sounds", 1);
		}
	}
	else
	{
		PAD::ENABLE_CONTROL_ACTION(2, 195, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 196, 1);
		iVar0 = PAD::GET_CONTROL_VALUE(2, 195);
		iVar1 = PAD::GET_CONTROL_VALUE(2, 196);
		if (((iVar0 != 127 || iLocal_688 != 127) || iVar1 != 127) || iLocal_689 != 127)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_683, "SET_ANALOG_STICK_INPUT");
			iLocal_688 = iVar0;
			iLocal_689 = iVar1;
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_688);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_689);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_504 = 1;
		}
	}
	PAD::ENABLE_CONTROL_ACTION(2, 197, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 198, 1);
	iVar2 = PAD::GET_CONTROL_VALUE(2, 197);
	iVar3 = PAD::GET_CONTROL_VALUE(2, 198);
	if (((iVar2 != 127 || iLocal_690 != 127) || iVar3 != 127) || iLocal_691 != 127)
	{
		bVar4 = (PAD::IS_CONTROL_PRESSED(2, 242) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 242));
		if (!bVar4)
		{
			bVar4 = (PAD::IS_CONTROL_PRESSED(2, 241) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 241));
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_683, "SET_ANALOG_STICK_INPUT");
		iLocal_690 = iVar2;
		iLocal_691 = iVar3;
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_690);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_691);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar4);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (!bVar4)
		{
			iLocal_504 = 1;
		}
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(2, 204) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 204)) && !PAD::_IS_USING_KEYBOARD(2))
	{
		func_508(0);
	}
}

void func_415()
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	func_425();
	if (Global_76622)
	{
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
	}
	HUD::THEFEED_HIDE_THIS_FRAME();
	PAD::ENABLE_CONTROL_ACTION(2, 199, 1);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	func_424(0f, 0f, 1f, 1f, 0, 0, 0, 255);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_683, 255, 255, 255, 255, 0);
	func_422();
	func_419(0);
	func_416(1);
	Global_1694834.f_5 = MISC::GET_FRAME_COUNT();
}

void func_416(bool bParam0)
{
	if (bParam0)
	{
		func_418();
	}
	func_417(4, -1);
	func_417(6, -1);
	func_417(7, -1);
	func_417(3, -1);
	func_417(1, -1);
	func_417(2, -1);
	func_417(11, -1);
	func_417(13, -1);
	func_417(14, -1);
	func_417(16, -1);
}

void func_417(int iParam0, int iParam1)
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

void func_418()
{
	Global_2537071.f_4532 = 0;
}

void func_419(int iParam0)
{
	if (func_421())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_420(0))
		{
			func_505(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

int func_420(int iParam0)
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

bool func_421()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

void func_422()
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_423();
}

void func_423()
{
	Global_22211.f_134 = 1;
}

void func_424(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_425()
{
	func_426(1);
	if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
	}
}

void func_426(bool bParam0)
{
	if (bParam0)
	{
		if (func_427())
		{
			Global_2450632.f_37 = 1;
		}
	}
	else
	{
		Global_2450632.f_37 = 0;
	}
}

bool func_427()
{
	return MISC::IS_BIT_SET(Global_2450632.f_2, 11);
}

int func_428(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_24();
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

int func_429()
{
	return func_430(&uLocal_518, "BPLESAU", "BPLES_TUT1", 8, 0, 0, 0);
}

int func_430(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_450(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_431(sParam2, iParam3, 0);
}

int func_431(char* sParam0, int iParam1, bool bParam2)
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
					func_449();
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
		if (func_448(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_447();
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
				func_439();
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
				if (func_438())
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
			if (func_437())
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
			func_436();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_435();
		func_432();
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
		func_449();
	}
	return 0;
}

void func_432()
{
	if (!func_433())
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

int func_433()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_5())
	{
		return 0;
	}
	if (func_434(PLAYER::PLAYER_ID()))
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

bool func_434(int iParam0)
{
	return func_34(iParam0, 20);
}

void func_435()
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

void func_436()
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

int func_437()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_438()
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

void func_439()
{
	if (func_446(14))
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
		Global_19486 = func_440();
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

var func_440()
{
	func_441();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_441()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_444(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_443(PLAYER::PLAYER_PED_ID());
			if (func_442(iVar0) && (!func_446(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_442(Global_111638.f_2358.f_539.f_4321))
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

bool func_442(int iParam0)
{
	return iParam0 < 3;
}

int func_443(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_444(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_444(int iParam0)
{
	if (func_442(iParam0))
	{
		return func_445(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_445(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_446(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_447()
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

bool func_448(int iParam0, int iParam1)
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

void func_449()
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

void func_450(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_451(int iParam0)
{
	if (func_452(Global_1590535[iParam0].f_274.f_28, -1) && !MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 1))
	{
		return 1;
	}
	return 0;
}

int func_452(int iParam0, int iParam1)
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

int func_453(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590535[iParam0].f_274.f_183[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

float func_454(var uParam0, struct<3> Param1, int iParam4)
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

bool func_455()
{
	return Global_73825;
}

void func_456(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		iVar0 = func_366(iParam0);
	}
	else if (bParam2)
	{
		iVar0 = func_365(iParam0);
	}
	else
	{
		iVar0 = func_364(iParam0);
	}
	uVar1 = func_22(iVar0, -1, 0) + 1;
	func_243(iVar0, uVar1, -1, 1, 0);
}

int func_457(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_262145.f_18439;
		
		case 1:
			return Global_262145.f_18447;
		
		case 3:
			return Global_262145.f_18455;
		
		case 5:
			return Global_262145.f_18463;
		
		case 4:
			return Global_262145.f_18471;
		
		case 7:
			return Global_262145.f_18439;
		
		case 6:
			return Global_262145.f_18447;
		
		case 8:
			return Global_262145.f_18455;
		
		case 10:
			return Global_262145.f_18463;
		
		case 9:
			return Global_262145.f_18471;
		
		case 12:
			return Global_262145.f_18439;
		
		case 11:
			return Global_262145.f_18447;
		
		case 13:
			return Global_262145.f_18455;
		
		case 15:
			return Global_262145.f_18463;
		
		case 14:
			return Global_262145.f_18471;
		
		case 17:
			return Global_262145.f_18439;
		
		case 16:
			return Global_262145.f_18447;
		
		case 18:
			return Global_262145.f_18455;
		
		case 20:
			return Global_262145.f_18463;
		
		case 19:
			return Global_262145.f_18471;
		
		case 21:
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
			return Global_262145.f_21054;
		
		default:
	}
	return 0;
}

int func_458(int iParam0, int iParam1)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (func_6(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return Global_1590535[iParam0].f_274.f_183[iVar0].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_459(int iParam0)
{
	if (func_6(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_460(int iParam0, int iParam1, int iParam2, int iParam3)
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

void func_461()
{
	func_463(1);
	func_462(&uLocal_518, 2, 0, "LJT", 0, 1);
}

void func_462(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_463(bool bParam0)
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

int func_464(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_24();
	}
	iVar1 = func_466(iParam0, iParam1);
	uVar2 = func_465(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_465(int iParam0)
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

int func_466(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_24();
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

void func_467()
{
	if (func_484())
	{
		func_475(1);
		iVar0 = func_459(iLocal_512);
		iVar1 = iLocal_512;
		iVar2 = func_27(iLocal_512);
		func_358(iVar1);
		if (!func_17(iLocal_512))
		{
			iVar3 = func_380(PLAYER::PLAYER_ID(), iLocal_512, func_458(PLAYER::PLAYER_ID(), iLocal_512));
			fVar4 = (SYSTEM::TO_FLOAT(iVar3) * Global_262145.f_18594);
			iVar5 = SYSTEM::ROUND(fVar4);
			func_474(func_263(iLocal_512), &cVar10, &cVar6);
			func_473(iVar1, 1, &cVar6, &cVar10, iVar5, 1);
			func_474(!func_263(iLocal_512), &cVar10, &cVar6);
			fVar4 = (SYSTEM::TO_FLOAT(iVar3) * Global_262145.f_18595);
			iVar5 = SYSTEM::ROUND(fVar4);
			func_473(iVar1, 2, &cVar6, &cVar10, iVar5, 1);
		}
		iVar14 = 0;
		while (iVar14 < 12)
		{
			iVar15 = iVar14;
			bVar16 = true;
			Var17 = { func_472(iVar2, iVar15) };
			if (func_28(PLAYER::PLAYER_ID(), iLocal_512, iVar15) || Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iVar0].f_4 <= 0)
			{
				bVar16 = false;
			}
			iVar21 = func_19(iVar15, iLocal_512);
			iVar22 = -1;
			if (func_471(iLocal_512, iVar15) && bVar16)
			{
				iVar22 = iVar21;
				iVar21 = func_470(iVar15, iLocal_512);
			}
			func_468(iVar1, iVar14 + 1, func_469(iVar15), iVar21, iVar22, bVar16, &Var17);
			iVar14++;
		}
	}
	else
	{
		func_475(0);
		iVar23 = 1;
		while (iVar23 <= (32 - 1))
		{
			func_358(iVar23);
			iVar23++;
		}
	}
}

void func_468(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, char* sParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_683, "ADD_BUSINESS_UPGRADE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(uParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(uParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_683, "SET_BUSINESS_UPGRADE_STATUS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_469(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OR_UPG_0";
		
		case 2:
			return "OR_UPG_1";
		
		case 1:
			return "OR_UPG_2";
		
		default:
	}
	return "Unknown upgrade!";
}

int func_470(int iParam0, int iParam1)
{
	iVar0 = func_27(iParam1);
	switch (iVar0)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_17615;
				
				case 2:
					return Global_262145.f_17616;
				
				case 1:
					return Global_262145.f_17617;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_17618;
				
				case 2:
					return Global_262145.f_17619;
				
				case 1:
					return Global_262145.f_17620;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_17621;
				
				case 2:
					return Global_262145.f_17622;
				
				case 1:
					return Global_262145.f_17623;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_17624;
				
				case 2:
					return Global_262145.f_17625;
				
				case 1:
					return Global_262145.f_17626;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_17627;
				
				case 2:
					return Global_262145.f_17628;
				
				case 1:
					return Global_262145.f_17629;
				
				default:
			}
			break;
		
		case 5:
			iVar1 = func_26(PLAYER::PLAYER_ID());
			switch (iParam0)
			{
				case 0:
					return 1155000;
				
				case 2:
					return 351000;
				
				case 1:
					return 598500;
				
				case 3:
					return 175000;
				
				case 4:
					return 215000;
				
				case 5:
					return 290000;
				
				case 6:
					return 265000;
				
				case 7:
					if (func_21(1, iParam1, iVar1) == 0)
					{
						return 740000;
					}
					else
					{
						return 50000;
					}
					break;
				
				case 8:
					if (func_21(2, iParam1, iVar1) == 0)
					{
						return 845000;
					}
					else
					{
						return 105000;
					}
					break;
				
				case 9:
					return 175000;
				
				case 10:
					return 85000;
				
				case 11:
					return 120000;
			}
			break;
	}
	return 0;
}

bool func_471(int iParam0, int iParam1)
{
	return func_19(iParam1, iParam0) < func_470(iParam1, iParam0);
}

struct<4> func_472(int iParam0, int iParam1)
{
	if (iParam1 == 12 || iParam1 == -1)
	{
	}
	switch (iParam0)
	{
		case 4:
			StringCopy(&Var0, "coke_upg_", 16);
			break;
		
		case 1:
			StringCopy(&Var0, "weed_upg_", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "fakecash_upg_", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "meth_upg_", 16);
			break;
		
		case 0:
			StringCopy(&Var0, "fake_id_upg_", 16);
			break;
		
		case 5:
			StringCopy(&Var0, "bunker_upg_", 16);
			break;
	}
	StringIntConCat(&Var0, iParam1, 16);
	return Var0;
}

void func_473(int iParam0, int iParam1, char[4] cParam2, char* sParam3, int iParam4, bool bParam5)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_683, "ADD_BUSINESS_BUYER");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(cParam2);
	GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(sParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_683, "SET_BUSINESS_BUYER_STATUS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_474(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		StringCopy(sParam1, "OR_GOODS_BYR2", 16);
		StringCopy(sParam2, "OR_BYR_DETAILS2", 16);
	}
	else
	{
		StringCopy(sParam1, "OR_GOODS_BYR1", 16);
		StringCopy(sParam2, "OR_BYR_DETAILS1", 16);
	}
}

void func_475(bool bParam0)
{
	uVar0 = func_477(PLAYER::PLAYER_ID());
	if (MISC::IS_STRING_NULL_OR_EMPTY(uVar0))
	{
		uVar0 = func_476();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_683, "SET_PLAYER_DATA");
	GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(uVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

var func_476()
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

char* func_477(int iParam0)
{
	if (((func_34(iParam0, 28) || func_34(PLAYER::PLAYER_ID(), 28)) || func_483(iParam0)) && !func_481(iParam0))
	{
		return func_476();
	}
	if (iParam0 != PLAYER::PLAYER_ID())
	{
		if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
		{
			return func_476();
		}
	}
	if (func_479(iParam0, 1))
	{
		if (func_64(iParam0))
		{
			return func_478(&(Global_1628237[iParam0].f_11.f_104));
		}
		else
		{
			return func_478(&(Global_1628237[iParam0].f_11.f_376));
		}
	}
	else
	{
		return func_478(&(Global_1628237[iParam0].f_11.f_376));
	}
	return "";
}

var func_478(var uParam0)
{
	return uParam0;
}

bool func_479(int iParam0, bool bParam1)
{
	return func_480(iParam0, bParam1, 1);
}

int func_480(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_65(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0].f_11;
	if (iVar0 != func_5() && Global_1628237[iVar0].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_481(int iParam0)
{
	Var0 = { func_482(iParam0) };
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

struct<13> func_482(int iParam0)
{
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_483(int iParam0)
{
	if (iParam0 != func_5())
	{
		Var0 = { func_482(iParam0) };
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

bool func_484()
{
	return iLocal_512 != 0;
}

void func_485(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (func_496())
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
		if (!func_494())
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
				else if (bVar14 || (!func_272(PLAYER::PLAYER_ID(), 0) && !func_493()))
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
					func_490(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_489(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
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
					func_488();
					func_487();
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
				if (!func_489(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
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
					if (func_486(Global_4456448.f_232883))
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

bool func_486(int iParam0)
{
	return iParam0 == 17;
}

void func_487()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { Var0 };
}

void func_488()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[PLAYER::PLAYER_ID()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_489(var uParam0)
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

void func_490(int iParam0, int iParam1, int iParam2)
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
				func_492();
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
		if (func_272(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
		func_491(-2008016205, iParam0);
	}
}

void func_491(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_492()
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

bool func_493()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_494()
{
	if (func_495() == 0)
	{
		return 1;
	}
	return 0;
}

int func_495()
{
	return Global_1312467.f_18;
}

int func_496()
{
	if (Global_1590535[PLAYER::PLAYER_ID()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

bool func_497()
{
	return Global_1694834 != -1;
}

int func_498(int iParam0)
{
	if (func_500(iParam0))
	{
		return func_499(Global_2425662[iParam0].f_310.f_5);
	}
	return 0;
}

int func_499(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
		
		case 70:
			return 21;
			break;
		
		case 71:
			return 22;
			break;
		
		case 72:
			return 23;
			break;
		
		case 73:
			return 24;
			break;
		
		case 74:
			return 25;
			break;
		
		case 75:
			return 26;
			break;
		
		case 76:
			return 27;
			break;
		
		case 77:
			return 28;
			break;
		
		case 78:
			return 29;
			break;
		
		case 79:
			return 30;
			break;
		
		case 80:
			return 31;
			break;
	}
	return 0;
}

int func_500(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_274(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_300(Global_2425662[iParam0].f_310.f_5) == 2;
			}
		}
	}
	return 0;
}

void func_501(int iParam0)
{
	if (Global_73825 != iParam0)
	{
		Global_73825 = iParam0;
	}
}

void func_502()
{
	Global_1312575 = 1;
	StringCopy(&(Global_1312575.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312575.f_9 = MISC::GET_HASH_KEY(&(Global_1312575.f_1));
}

void func_503(bool bParam0)
{
	if (bParam0)
	{
		func_504();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			MISC::SET_BIT(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_420(0))
		{
			func_505(0);
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

void func_504()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_505(int iParam0)
{
	if (func_421())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_507())
		{
			func_506(1, 1);
		}
		else
		{
			func_506(0, 0);
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
	if (!func_437())
	{
		Global_19486.f_1 = 3;
	}
}

void func_506(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_420(0))
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

bool func_507()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

void func_508(int iParam0)
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_683);
	func_501(iParam0);
	func_503(0);
	func_512();
	AUDIO::_0xA5F377B175A699C5(1000);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Exit", "DLC_Biker_Computer_Sounds", 1);
	if (MISC::IS_PC_VERSION())
	{
		func_460(0, 1, 1, 1);
	}
	if (!func_500(PLAYER::PLAYER_ID()) && !func_299(PLAYER::PLAYER_ID()))
	{
		func_485(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	if (func_464(7638, -1, -1) && func_511())
	{
		Var0 = { func_510() };
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "BPLES_TUT1"))
		{
			func_428(7638, 0, -1, 1);
			func_509();
		}
	}
	HUD::THEFEED_RESUME();
	if (iLocal_498 && !func_25())
	{
		Global_2460611 = 1;
	}
	Global_1694834.f_5 = -1;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_509()
{
	Global_19671 = 0;
	func_449();
}

struct<6> func_510()
{
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

int func_511()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_512()
{
	if (!Global_1312575)
	{
		return;
	}
	func_513();
}

void func_513()
{
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
}

