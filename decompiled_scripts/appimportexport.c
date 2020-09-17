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
	iLocal_610 = -1;
	iLocal_629 = -1;
	iLocal_630 = 2000;
	iLocal_634 = 2000000;
	fLocal_635 = 0f;
	fLocal_636 = 0f;
	fLocal_637 = 0f;
	fLocal_638 = 0f;
	iLocal_646 = -1;
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("appImportExport")) > 1)
	{
		func_412(1, 0);
	}
	uLocal_631 = unk_0x67D02A194A2FC2BD("IMPORT_EXPORT_WAREHOUSE");
	func_409(1);
	func_407(1);
	func_406();
	HUD::THEFEED_PAUSE();
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_631))
	{
		SYSTEM::WAIT(0);
	}
	Global_75434 = 1;
	Global_73932 = 0;
	if (func_405(PLAYER::PLAYER_ID()))
	{
		uLocal_613 = func_404(PLAYER::PLAYER_ID());
	}
	Global_1676347 = 0;
	func_392(PLAYER::PLAYER_ID(), 0, 0, 0);
	func_391();
	func_384();
	if (MISC::IS_PC_VERSION())
	{
		func_383(1, 1, 1, 1);
	}
	func_382();
	if (func_381())
	{
		MISC::SET_BIT(&uLocal_612, 1);
	}
	if (func_380())
	{
		MISC::SET_BIT(&uLocal_612, 3);
	}
	func_377();
	AUDIO::START_AUDIO_SCENE("GTAO_Computer_Screen_Active_Scene");
	while (Global_75434)
	{
		if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 14))
		{
			func_412(0, 1);
		}
		else if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (iLocal_648 == 0)
			{
				func_412(0, 1);
			}
		}
		else if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_412(0, 1);
		}
		else if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			func_412(0, 1);
		}
		else if (!func_405(PLAYER::PLAYER_ID()) && !func_376())
		{
			if (func_375("IEAPPINPUTTRIG") || func_375("IEAPPINPUTTRPC"))
			{
				HUD::CLEAR_HELP(1);
			}
			func_412(0, 1);
		}
		switch (iLocal_648)
		{
			case 0:
				func_363();
				if (!MISC::IS_BIT_SET(uLocal_612, 3))
				{
					func_358();
					func_335();
				}
				if (!MISC::IS_BIT_SET(uLocal_612, 1))
				{
					func_327();
				}
				if (!iLocal_608)
				{
					func_322();
					func_263();
				}
				else if (func_262(PLAYER::PLAYER_ID()) && NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
				{
					iLocal_648 = 1;
					if (MISC::IS_PC_VERSION())
					{
						func_383(0, 1, 1, 1);
					}
				}
				break;
			
			case 1:
				func_260();
				if (!func_259(&uLocal_814))
				{
					func_258(&uLocal_814, 0, 0);
				}
				else if (func_257(&uLocal_814, 301000, 0))
				{
					Global_1676347 = 0;
					func_412(0, 1);
				}
				if (func_256(PLAYER::PLAYER_ID()))
				{
					iLocal_648 = 2;
					func_255(&uLocal_814);
				}
				else if (!func_262(PLAYER::PLAYER_ID()))
				{
					Global_1676347 = 0;
					func_412(0, 1);
				}
				break;
			
			case 2:
				if (func_82(func_254(), 1))
				{
					func_4();
					while (func_1(PLAYER::PLAYER_ID()))
					{
						SYSTEM::WAIT(0);
					}
					func_412(0, 0);
				}
				else if (iLocal_610 == 17)
				{
					Global_1676362 = 0;
				}
				else
				{
					Global_1676362 = 1;
				}
				func_412(0, 1);
				break;
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (func_2(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == PLAYER::PLAYER_ID()) && func_2(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
	}
	return 0;
}

int func_2(int iParam0, bool bParam1, bool bParam2)
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

int func_3()
{
	return -1;
}

void func_4()
{
	bVar6 = func_254();
	MISC::CLEAR_BIT(&(Global_1676377.f_4), 5);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (bVar6)
		{
			uVar1[iVar0] = iLocal_619[iVar0];
		}
		else
		{
			uVar1[iVar0] = iLocal_614[iVar0];
		}
		iVar0++;
	}
	if (iLocal_629 == 0 || func_254())
	{
		func_81(PLAYER::PLAYER_ID(), 1);
	}
	if (func_70(iLocal_629, func_80(bVar6), bVar6))
	{
		func_51(188, uVar1[0], uVar1[1], uVar1[2], uVar1[3], 0);
		func_11(&uVar1);
		if (Global_73932)
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Global_1628237[PLAYER::PLAYER_ID()].f_11.f_354[iVar0] = -1;
				iVar0++;
			}
		}
		else
		{
			func_5();
		}
	}
}

void func_5()
{
	iVar0 = func_9();
	iVar0++;
	func_6(5328, iVar0, -1, 1, 0);
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_7(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_7(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_8();
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

int func_8()
{
	return Global_1312745;
}

int func_9()
{
	return func_10(5328, -1, 0);
}

int func_10(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_7(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_11(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			iVar6[iVar0] = 0;
			iVar1[iVar0] = -1;
		}
		else
		{
			iVar6[iVar0] = 0;
			iVar1[iVar0] = func_50((*uParam0)[iVar0]);
		}
		iVar0++;
	}
	if (func_49())
	{
		while (!func_30(&iVar1, &iVar6, &iVar11))
		{
			SYSTEM::WAIT(0);
		}
		if (iVar11 == 2)
		{
			func_12(uParam0);
		}
		else
		{
			Global_73932 = 1;
		}
	}
	else
	{
		func_12(uParam0);
	}
}

void func_12(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar1 = (*uParam0)[iVar0];
		if (iVar1 != 0)
		{
			func_28(iVar1);
			func_27(iVar1);
			func_17(iVar1);
			iVar2 = (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_134.f_1 - 1);
			if (iVar2 >= 0)
			{
				func_16(iVar2);
			}
		}
		iVar0++;
	}
	if (!func_49())
	{
		func_13(-1558535687, 10, 0);
	}
}

void func_13(int iParam0, int iParam1, int iParam2)
{
	if (func_15(iParam1, iParam2))
	{
		iVar0 = func_14();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_14()
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

int func_15(int iParam0, var uParam1)
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

void func_16(int iParam0)
{
	if (iParam0 >= 0 && iParam0 <= 40)
	{
		Global_1590535[PLAYER::PLAYER_ID()].f_274.f_134.f_1 = iParam0;
	}
}

void func_17(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (func_23(func_26(iVar0), -1, -1) == iParam0)
		{
			func_22(func_26(iVar0), 0, -1, 1);
		}
		else
		{
			iVar0++;
		}
	}
	func_18();
}

void func_18()
{
	iVar1 = 0;
	while (iVar1 < 40)
	{
		iVar2[iVar1] = func_23(func_26(iVar1), -1, -1);
		if ((iVar2[iVar1] / 32) < iVar43)
		{
			if (!MISC::IS_BIT_SET(iVar43[(iVar2[iVar1] / 32)], (iVar2[iVar1] % 32)))
			{
				MISC::SET_BIT(&(iVar43[(iVar2[iVar1] / 32)]), (iVar2[iVar1] % 32));
			}
			else if (iVar2[iVar1] != 0)
			{
				iVar2[iVar1] = 0;
			}
		}
		else
		{
			iVar2[iVar1] = 0;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (iVar2[iVar1] == 0 || !func_19(PLAYER::PLAYER_ID(), iVar2[iVar1]))
		{
			iVar0 = iVar1;
			while (iVar0 <= 38)
			{
				iVar2[iVar0] = iVar2[iVar0 + 1];
				iVar2[iVar0 + 1] = 0;
				iVar0++;
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 40)
	{
		func_22(func_26(iVar1), iVar2[iVar1], -1, 1);
		iVar1++;
	}
}

int func_19(int iParam0, int iParam1)
{
	if (func_20(iParam0))
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

bool func_20(int iParam0)
{
	return func_21(iParam0) != 0;
}

int func_21(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	return Global_1590535[iParam0].f_274.f_134;
}

var func_22(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_8();
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

int func_23(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_8();
	}
	iVar0 = 0;
	iVar1 = func_25(iParam0, iParam1);
	uVar2 = func_24(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_24(int iParam0)
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

int func_25(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_8();
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

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15224;
		
		case 1:
			return 15225;
		
		case 2:
			return 15226;
		
		case 3:
			return 15227;
		
		case 4:
			return 15228;
		
		case 5:
			return 15229;
		
		case 6:
			return 15230;
		
		case 7:
			return 15231;
		
		case 8:
			return 15232;
		
		case 9:
			return 15233;
		
		case 10:
			return 15234;
		
		case 11:
			return 15235;
		
		case 12:
			return 15236;
		
		case 13:
			return 15237;
		
		case 14:
			return 15238;
		
		case 15:
			return 15239;
		
		case 16:
			return 15240;
		
		case 17:
			return 15241;
		
		case 18:
			return 15242;
		
		case 19:
			return 15243;
		
		case 20:
			return 15244;
		
		case 21:
			return 15245;
		
		case 22:
			return 15246;
		
		case 23:
			return 15247;
		
		case 24:
			return 15248;
		
		case 25:
			return 15249;
		
		case 26:
			return 15250;
		
		case 27:
			return 15251;
		
		case 28:
			return 15252;
		
		case 29:
			return 15253;
		
		case 30:
			return 15254;
		
		case 31:
			return 15255;
		
		case 32:
			return 15256;
		
		case 33:
			return 15257;
		
		case 34:
			return 15258;
		
		case 35:
			return 15259;
		
		case 36:
			return 15260;
		
		case 37:
			return 15261;
		
		case 38:
			return 15262;
		
		case 39:
			return 15263;
		
		default:
	}
	return 15224;
}

void func_27(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_134.f_2[iVar0] == iParam0 || Global_1590535[PLAYER::PLAYER_ID()].f_274.f_134.f_2[iVar0] == (1000 + iParam0))
		{
			Global_1590535[PLAYER::PLAYER_ID()].f_274.f_134.f_2[iVar0] = 0;
		}
		else
		{
			iVar0++;
		}
	}
}

void func_28(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (func_10(func_29(iVar0), -1, 0) == iParam0)
		{
			func_6(func_29(iVar0), 0, -1, 1, 0);
		}
		else
		{
			iVar0++;
		}
	}
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3977;
		
		case 1:
			return 3978;
		
		case 2:
			return 3979;
		
		case 3:
			return 3980;
		
		case 4:
			return 3981;
		
		case 5:
			return 3982;
		
		case 6:
			return 3983;
		
		case 7:
			return 3984;
		
		case 8:
			return 3985;
		
		case 9:
			return 3986;
		
		case 10:
			return 3987;
		
		case 11:
			return 3988;
		
		case 12:
			return 3989;
		
		case 13:
			return 3990;
		
		case 14:
			return 3991;
		
		case 15:
			return 3992;
		
		case 16:
			return 3993;
		
		case 17:
			return 3994;
		
		case 18:
			return 3995;
		
		case 19:
			return 3996;
		
		case 20:
			return 3997;
		
		case 21:
			return 3998;
		
		case 22:
			return 3999;
		
		case 23:
			return 4000;
		
		case 24:
			return 4001;
		
		case 25:
			return 4002;
		
		case 26:
			return 4003;
		
		case 27:
			return 4004;
		
		case 28:
			return 4005;
		
		case 29:
			return 4006;
		
		case 30:
			return 4007;
		
		case 31:
			return 4008;
		
		case 32:
			return 4009;
		
		case 33:
			return 4010;
		
		case 34:
			return 4011;
		
		case 35:
			return 4012;
		
		case 36:
			return 4013;
		
		case 37:
			return 4014;
		
		case 38:
			return 4015;
		
		case 39:
			return 4016;
		
		default:
	}
	return 3977;
}

bool func_30(int iParam0, int iParam1, var uParam2)
{
	if (*uParam2 != 0 && *uParam2 != 1)
	{
		*uParam2 = 0;
	}
	if (*iParam0 != *iParam1 || *iParam0 > 70)
	{
		*uParam2 = 3;
		return 1;
	}
	switch (*uParam2)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < *iParam1)
			{
				if ((*iParam0)[iVar0] != -1)
				{
					if ((*iParam1)[iVar0] > 0)
					{
					}
					else if ((*iParam1)[iVar0] == 0)
					{
					}
					else
					{
						(*iParam1)[iVar0] = 0;
					}
					iVar1 = func_48((*iParam0)[iVar0]);
					if (func_44(78225582, -1494913648, iVar1, -716644653, (*iParam1)[iVar0], 0, 0, 4, 0, 3))
					{
						*uParam2 = 1;
					}
					else
					{
						*uParam2 = 3;
					}
				}
				iVar0++;
			}
			if (*uParam2 == 1 && func_39())
			{
			}
			else
			{
				*uParam2 = 3;
				func_33(func_37());
			}
			break;
		
		case 1:
			if (func_32(func_37()))
			{
				if (func_31(func_37()) == 2)
				{
					*uParam2 = 2;
					func_33(func_37());
				}
				else
				{
					*uParam2 = 3;
					func_33(func_37());
				}
			}
			break;
	}
	return *uParam2 != 1;
}

int func_31(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2;
	}
	return 0;
}

int func_32(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2 != 1;
	}
	return 0;
}

void func_33(int iParam0)
{
	bVar0 = false;
	if (!func_49())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_36(iParam0))
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
		func_34(&(Global_4263954[iParam0]));
	}
}

void func_34(var uParam0)
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
	func_35(&(uParam0->f_14));
	func_35(&(uParam0->f_14.f_13));
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

void func_35(var uParam0)
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

int func_36(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

int func_37()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_38(iVar0) != 2147483647)
		{
			if (func_36(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_38(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66;
	}
	return -1;
}

int func_39()
{
	bVar0 = false;
	if (!func_49())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_37();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_8()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_43(Global_4263954[iVar2].f_66.f_6, Global_4263954[iVar2].f_66.f_4, Global_4263954[iVar2].f_66.f_1) == 1)
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
	iVar3 = func_38(iVar2);
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
				func_40(Global_4263954[iVar2], iVar2);
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	return 0;
}

void func_40(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_42(Var0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_41();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_41()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_42(int iParam0)
{
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_43(int iParam0, int iParam1, int iParam2)
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

int func_44(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bVar0 = false;
	if (!func_49())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_8()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
	iVar1 = func_37();
	if (iVar1 == -1)
	{
		if (!func_46(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_45(iParam1))
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
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, uParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_45(int iParam0)
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

int func_46(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bVar0 = false;
	if (!func_49())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_8()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
		*iParam0 = func_47(uVar3, iParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_47(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_49())
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
				func_40(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_48(int iParam0)
{
	StringCopy(&cVar0, "MP_STAT_IE_WH_OWNED_VEHICLE_", 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringConCat(&cVar0, "_v0", 64);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_49()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_50(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_134.f_2[iVar0] == iParam0 || Global_1590535[PLAYER::PLAYER_ID()].f_274.f_134.f_2[iVar0] == (1000 + iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_51(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	if (iParam0 != 178 && iParam0 != 188)
	{
	}
	if (iParam0 == 188)
	{
		func_69(8);
	}
	func_68(uParam1, uParam2, uParam3, uParam4, iParam5);
	func_52(iParam0, -1);
}

void func_52(int iParam0, int iParam1)
{
	if (func_67() || !func_64(1))
	{
		if (!func_61(PLAYER::PLAYER_ID(), 0))
		{
			func_60(iParam0);
			func_53(iParam0, func_57(1, 1), func_56(), func_55(), func_54(), iParam1);
		}
	}
}

void func_53(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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

var func_54()
{
	return Global_2537071.f_5124.f_341;
}

var func_55()
{
	return Global_2537071.f_5124.f_340;
}

var func_56()
{
	return Global_2537071.f_5124.f_339;
}

int func_57(int iParam0, bool bParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_2(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_58(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_58(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_59(-1, 0) == 8;
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

int func_59(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
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

void func_60(var uParam0)
{
	Global_1628237[PLAYER::PLAYER_ID()].f_11.f_32 = uParam0;
}

int func_61(int iParam0, int iParam1)
{
	if (func_63(iParam0, 0))
	{
		return func_62(Global_1628237[iParam0].f_11.f_33) == iParam1;
	}
	return 0;
}

int func_62(int iParam0)
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

int func_63(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_64(bool bParam0)
{
	return func_65(PLAYER::PLAYER_ID(), bParam0);
}

bool func_65(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_66(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_3();
}

int func_66(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (Global_1628237[iParam0].f_11 != func_3())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_67()
{
	return func_66(PLAYER::PLAYER_ID());
}

void func_68(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	Global_1628237[PLAYER::PLAYER_ID()].f_11.f_186[0] = uParam0;
	Global_1628237[PLAYER::PLAYER_ID()].f_11.f_186[1] = uParam1;
	Global_1628237[PLAYER::PLAYER_ID()].f_11.f_186[2] = uParam2;
	Global_1628237[PLAYER::PLAYER_ID()].f_11.f_186[3] = uParam3;
	Global_1628237[PLAYER::PLAYER_ID()].f_11.f_186.f_5 = uParam4;
}

void func_69(int iParam0)
{
	if (Global_2537071.f_5124.f_339 != iParam0)
	{
		Global_2537071.f_5124.f_339 = iParam0;
	}
}

int func_70(int iParam0, int iParam1, bool bParam2)
{
	if (!func_64(1))
	{
		return 0;
	}
	if (!func_67())
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
		iVar18 = func_21(func_79());
		if (iVar18 != 0)
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Global_1628237[PLAYER::PLAYER_ID()].f_11.f_354[iVar0] = func_78(iVar18);
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
				uVar22 = func_71(&iVar1, iVar17, &uVar19);
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
				Global_1628237[PLAYER::PLAYER_ID()].f_11.f_354[iVar0] = func_71(&iVar1, iVar17, &uVar23);
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

int func_71(int iParam0, int iParam1, var uParam2)
{
	if (!func_64(1))
	{
		return -1;
	}
	fVar0 = Global_262145.f_17634;
	fVar1 = Global_262145.f_17635;
	iVar17 = func_77(PLAYER::PLAYER_ID());
	if (Global_1590535[iVar17].f_274[5] > -1)
	{
		Var18 = { Global_1049922[Global_1590535[iVar17].f_274[5]].f_38[0].f_23 };
		Var18.z = 0f;
	}
	else
	{
		return -1;
	}
	if (func_20(iVar17))
	{
		Var21 = { Global_1676377.f_488[func_74(func_21(iVar17))] };
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
			Var27 = { func_73((*iParam0)[iVar24]) };
			Var27.z = 0f;
			fVar30 = SYSTEM::VDIST(Var27, Var18);
			fVar31 = SYSTEM::VDIST(Var27, Var21);
			if (fVar30 >= fVar0 && fVar31 >= fVar1)
			{
				func_72((*iParam0)[iVar24], &iVar25, &iVar26);
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
			func_72(uVar2[iVar32], &iVar25, &iVar26);
			MISC::SET_BIT(uParam2[iVar25], iVar26);
			return uVar2[iVar32];
		}
		else
		{
			iVar24 = 0;
			while (iVar24 < iParam1)
			{
				func_72((*iParam0)[iVar24], &iVar25, &iVar26);
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
				func_72(uVar2[iVar33], &iVar25, &iVar26);
				MISC::SET_BIT(uParam2[iVar25], iVar26);
				return uVar2[iVar33];
			}
			else
			{
				iVar34 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1);
				func_72(uVar2[iVar34], &iVar25, &iVar26);
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

void func_72(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	*iParam2 = (iParam0 - *iParam1 * 32);
}

Vector3 func_73(int iParam0)
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

int func_74(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_76(iVar0) == 1)
		{
			if (func_75(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_75(int iParam0)
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

int func_76(int iParam0)
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

int func_77(int iParam0)
{
	if (iParam0 != func_3())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_3();
}

int func_78(int iParam0)
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

int func_79()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11;
}

int func_80(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!bParam0)
		{
			if (iLocal_614[iVar0] != 0)
			{
				iVar1++;
			}
		}
		else if (iLocal_619[iVar0] != 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_81(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (iParam0 != func_3())
		{
			if (!MISC::IS_BIT_SET(Global_2425662[iParam0].f_195, 19))
			{
				MISC::SET_BIT(&(Global_2425662[iParam0].f_195), 19);
			}
		}
	}
	else if (iParam0 != func_3())
	{
		if (MISC::IS_BIT_SET(Global_2425662[iParam0].f_195, 19))
		{
			MISC::CLEAR_BIT(&(Global_2425662[iParam0].f_195), 19);
		}
	}
}

int func_82(bool bParam0, bool bParam1)
{
	if (!func_20(PLAYER::PLAYER_ID()))
	{
		iLocal_610 = 16;
		return 0;
	}
	if (!func_253(PLAYER::PLAYER_ID(), 188, 0))
	{
		iLocal_610 = func_91(PLAYER::PLAYER_ID(), 188, 0);
		if (iLocal_610 == 16)
		{
			iLocal_610 = 19;
		}
		else if (iLocal_610 == 15)
		{
			iLocal_610 = 20;
		}
		return 0;
	}
	if (!func_66(PLAYER::PLAYER_ID()))
	{
		iLocal_610 = 14;
		return 0;
	}
	if (func_89(PLAYER::PLAYER_ID()))
	{
		iLocal_610 = 15;
		return 0;
	}
	if (func_87(PLAYER::PLAYER_ID()))
	{
		iLocal_610 = 13;
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		iLocal_610 = 12;
		return 0;
	}
	if (func_86() < func_80(bParam0))
	{
		iLocal_610 = 17;
		return 0;
	}
	if (func_84())
	{
		iLocal_610 = 18;
		return 0;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iVar1 = Global_1572864[iVar0].f_100;
			if (iVar1 != func_3())
			{
				if (((!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar1) || !func_2(iVar1, 1, 1)) || !func_405(iVar1)) || func_83(iVar1))
				{
					if (Global_1572864[iVar0].f_101 == 0 || Global_1572864[iVar0].f_101 == -1)
					{
					}
					else
					{
						iLocal_610 = 17;
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_83(int iParam0)
{
	if (iParam0 != func_3() && func_2(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0].f_310, 3);
	}
	return 0;
}

int func_84()
{
	if (Global_1676348 && func_85())
	{
		return 1;
	}
	return 0;
}

var func_85()
{
	return Global_2461839;
}

int func_86()
{
	if (func_405(PLAYER::PLAYER_ID()))
	{
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_11[iVar0] != func_3())
		{
			if ((func_405(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_11[iVar0]) && func_2(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_11[iVar0], 1, 1)) && !func_83(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_11[iVar0]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_87(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_88(iParam0, 9);
	}
	return 0;
}

bool func_88(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

bool func_89(int iParam0)
{
	return func_90(iParam0, 1);
}

int func_90(int iParam0, int iParam1)
{
	if (iParam0 != func_3())
	{
		if (Global_1628237[iParam0].f_11 != func_3())
		{
			if (Global_1628237[iParam0].f_11 == iParam0 && Global_1628237[iParam0].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_91(int iParam0, int iParam1, bool bParam2)
{
	if (!func_121(func_225(iParam1, -1, -1, -1), func_182(iParam1, -1, 1, -1, -1, iParam0), func_130(iParam1, -1, -1, -1, -1, iParam0), 0, 1))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (func_89(iParam0))
	{
		if (iParam1 == 153)
		{
			iVar0 = 211;
		}
	}
	if (func_119(iParam1) >= func_118(iVar0))
	{
		return 5;
	}
	if (func_117(iParam0))
	{
		return 6;
	}
	if (func_116(iParam0))
	{
		return 14;
	}
	iVar1 = func_111(iParam0);
	if (iVar1 != -1)
	{
		return iVar1;
	}
	if (func_62(iParam1) == 1)
	{
		if ((func_110() || func_109()) || ((!bParam2 && func_108() != 0) && func_62(iParam1) == 1))
		{
			return 2;
		}
	}
	else if (func_62(iParam1) == 2)
	{
		if (!func_105(iParam1))
		{
			return 3;
		}
		if (!bParam2)
		{
			if (Global_1628237[iParam0].f_11.f_34 != func_3())
			{
				return 9;
			}
		}
		if (func_104(iParam0))
		{
			return 10;
		}
	}
	else if (func_102(iParam1))
	{
		if (func_101(iParam0) <= 0)
		{
			return 4;
		}
	}
	if (func_100(iParam1))
	{
		if (func_99())
		{
			return 13;
		}
		if (func_97())
		{
			return 12;
		}
	}
	if (func_101(iParam0) + 1 < func_96(iVar0))
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
			if (!func_93(iParam0, 0))
			{
				return 1;
			}
			break;
		
		case 189:
			if (func_92(iParam0, 21) || func_92(iParam0, 25))
			{
				return 0;
			}
			break;
	}
	return -1;
}

bool func_92(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2425662[iParam0].f_208, iParam1);
}

int func_93(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (!func_94(iVar1, iParam0, 1))
			{
				if (iParam1 || !func_88(iVar1, 31))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_94(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_3())
	{
		if (!bParam2)
		{
			if (func_95(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628237[iParam0].f_11 != func_3())
		{
			return iParam1 == Global_1628237[iParam0].f_11;
		}
	}
	return 0;
}

int func_95(int iParam0, int iParam1)
{
	if (iParam1 != func_3())
	{
		if (iParam0 != func_3())
		{
			if (Global_1628237[iParam0].f_11 != func_3())
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

int func_96(int iParam0)
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

int func_97()
{
	if (func_98())
	{
		return 1;
	}
	return Global_2450632.f_644;
}

bool func_98()
{
	return Global_1312837 == 10;
}

bool func_99()
{
	return Global_262145.f_15220;
}

int func_100(int iParam0)
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

int func_101(int iParam0)
{
	if (func_77(iParam0) == func_3())
	{
		return 0;
	}
	return Global_1628237[iParam0].f_11.f_19;
}

int func_102(int iParam0)
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
	return func_103(iParam0, 0);
	return 0;
}

int func_103(int iParam0, int iParam1)
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

int func_104(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if ((Global_1628237[iParam0].f_11.f_34 != func_3() && Global_1628237[iParam0].f_11.f_34 == iVar1) && Global_1628237[iVar1].f_11.f_34 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_105(int iParam0)
{
	switch (iParam0)
	{
		case 179:
			if (func_107() < 2)
			{
				return 0;
			}
			break;
		
		case 148:
			if (func_106() < 2)
			{
				return 0;
			}
			break;
		
		default:
			if (func_106() < 2)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_106()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (func_66(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_107()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (func_89(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_108()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11.f_102;
}

bool func_109()
{
	return Global_1650640.f_11.f_144 != -1;
}

bool func_110()
{
	return Global_1650640.f_11.f_143 != -1;
}

int func_111(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_113())
	{
		iVar1 = Global_1628237[iParam0].f_11.f_11[iVar0];
		if (iVar1 != func_3())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (func_117(iVar1))
				{
					return 7;
				}
				if (func_116(iVar1))
				{
					return 15;
				}
				if (func_112(iVar1))
				{
					return 16;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_112(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	if (((((MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_4, 2) || MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_4, 3)) || MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_4, 5)) || MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_4, 6)) || MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_4, 7)) || MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_369.f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_113()
{
	return (func_114() - 1);
}

int func_114()
{
	return func_115(PLAYER::PLAYER_ID());
}

int func_115(int iParam0)
{
	iVar0 = Global_1628237[iParam0].f_11;
	if (iVar0 != func_3() && Global_1628237[iVar0].f_11.f_450 == 1)
	{
		return 8;
	}
	return 4;
}

int func_116(int iParam0)
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

int func_117(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628237[iVar0].f_1, 0);
	}
	return 0;
}

int func_118(int iParam0)
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

int func_119(int iParam0)
{
	return Global_1650640.f_11.f_147[func_120(iParam0)];
}

int func_120(int iParam0)
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

int func_121(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_129(iParam0, bParam3, bParam4) || func_128(iParam1, bParam3, bParam4)) || func_122(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_122(int iParam0, bool bParam1, bool bParam2)
{
	return func_123(2, iParam0, 0, bParam1, bParam2);
}

int func_123(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!MISC::IS_BIT_SET(Global_1389296, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_127(iParam0) - func_126(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_126(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_127(iParam0) - func_125(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_126(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_127(iParam0) - func_126(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[PLAYER::PLAYER_ID()] != 3)
		{
			iVar1 = (iVar1 - func_124(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_124(int iParam0)
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

int func_125(int iParam0)
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

int func_126(int iParam0, bool bParam1)
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

int func_127(int iParam0)
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

int func_128(int iParam0, bool bParam1, bool bParam2)
{
	return func_123(1, iParam0, 0, bParam1, bParam2);
}

int func_129(int iParam0, bool bParam1, bool bParam2)
{
	return func_123(0, iParam0, 0, bParam1, bParam2);
}

int func_130(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
			return func_181(iParam1);
		
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
			return func_179(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_173(iParam1, iParam2, iParam3, iParam4);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_161(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(uParam5), iParam4);
		
		case 233:
			return func_154(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
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
			return func_146(iParam1, iParam2);
		
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
			return func_143(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_142(iParam1);
		
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
			return func_138(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 158:
			return func_134(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 181:
			return func_131(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		default:
	}
	return 0;
}

int func_131(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_133(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_132(iParam0, iParam2));
	return iVar0;
}

int func_132(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 5;
		
		default:
	}
	return 1;
}

int func_133(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_134(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_137(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_135(iParam0, iParam2));
	return iVar0;
}

int func_135(int iParam0, int iParam1)
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
			if (func_65(iParam1, 1))
			{
				Var0 = { func_136(iParam1) };
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

Vector3 func_136(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_301;
}

int func_137(int iParam0, int iParam1, var uParam2)
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

int func_138(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_141(iParam0, iParam1, iParam3);
	if (!func_140(iParam0))
	{
		iVar0 = (iVar0 + func_139(iParam0, iParam2));
	}
	return iVar0;
}

int func_139(int iParam0, int iParam1)
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
			if (func_101(iParam1) + 1 == 1)
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

int func_140(int iParam0)
{
	return 0;
}

int func_141(int iParam0, int iParam1, int iParam2)
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

int func_142(int iParam0)
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

int func_143(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_145(iParam0, iParam1);
	if (func_144(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_144(int iParam0)
{
	return 1;
}

int func_145(int iParam0, int iParam1)
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

int func_146(int iParam0, int iParam1)
{
	iVar0 = func_153(iParam0, iParam1);
	if (!func_152(iParam0))
	{
		iVar0 = (iVar0 + func_147(iParam0, func_151() + 1));
	}
	if (iParam0 == 14 || ((((func_152(iParam0) && iParam0 != 9) && iParam0 != 16) && iParam0 != 7) && iParam0 != 17))
	{
		iVar0 = (iVar0 + func_147(iParam0, func_151() + 1));
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

int func_147(int iParam0, int iParam1)
{
	if (func_150(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_149(iParam0, iParam1);
			iVar2 = func_148(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_152(iParam0))
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

int func_148(int iParam0)
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

int func_149(int iParam0, int iParam1)
{
	if (func_152(iParam0))
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

int func_150(int iParam0)
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

int func_151()
{
	if (func_79() == func_3())
	{
		return 0;
	}
	return func_101(func_79());
}

int func_152(int iParam0)
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

int func_153(int iParam0, int iParam1)
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

int func_154(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = func_160(iParam0, iParam1, iParam2, iParam4);
	if (!func_159(iParam0))
	{
		if (iParam3 != func_3())
		{
			iVar0 = (iVar0 + func_156(iParam0, func_101(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_155(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_155(int iParam0)
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

int func_156(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
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
			if (func_159(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_158(iParam0))
	{
		iVar0 = func_158(iParam0);
	}
	else if (iVar0 < func_157(iParam0))
	{
		iVar0 = func_157(iParam0);
	}
	return iVar0;
}

int func_157(int iParam0)
{
	return 1;
}

int func_158(int iParam0)
{
	return 4;
}

int func_159(int iParam0)
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

int func_160(int iParam0, int iParam1, var uParam2, var uParam3)
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

int func_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = func_172(iParam0, iParam1, iParam2, iParam4);
	if (!func_171(iParam0))
	{
		if (iParam3 != func_3())
		{
			iVar0 = (iVar0 + func_163(iParam0, func_101(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_162(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_162(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			return 1;
		
		default:
	}
	return 0;
}

int func_163(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_170(iParam0))
	{
		iVar1 = func_169(iParam3);
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
	else if (func_168(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_167(iParam2))
		{
			iVar0 = func_167(iParam2);
		}
	}
	if (iVar0 > func_165(iParam0))
	{
		iVar0 = func_165(iParam0);
	}
	else if (iVar0 < func_164(iParam0))
	{
		iVar0 = func_164(iParam0);
	}
	return iVar0;
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_165(int iParam0)
{
	if (!func_170(iParam0))
	{
		if (func_171(iParam0))
		{
			if (func_166(iParam0))
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

int func_166(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_167(int iParam0)
{
	if (iParam0 == func_3() || Global_1590535[iParam0].f_274.f_264 == 0)
	{
		return 50;
	}
	return (50 - Global_1590535[iParam0].f_274.f_264.f_3);
}

int func_168(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_169(int iParam0)
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

int func_170(int iParam0)
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

int func_171(int iParam0)
{
	if (func_170(iParam0) || func_168(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_172(int iParam0, int iParam1, int iParam2, var uParam3)
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

int func_173(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_178(iParam0, iParam1, iParam2, iParam3);
	if (!func_177(iParam0))
	{
		iVar0 = (iVar0 + func_175(iParam0, func_151() + 1, -1, iParam2));
	}
	if (func_174(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_174(int iParam0)
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

int func_175(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_176(iParam0))
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
	else if (func_177(iParam0))
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

int func_176(int iParam0)
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

int func_177(int iParam0)
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

int func_178(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_179(int iParam0, int iParam1, var uParam2)
{
	iVar0 = func_180(iParam0, iParam1);
	if (iParam0 == 15)
	{
		iVar0++;
	}
	return iVar0;
}

int func_180(int iParam0, int iParam1)
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

int func_181(int iParam0)
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

int func_182(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
			return func_224(iParam1);
		
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
			return func_220(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_216(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_210(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(uParam5), 0, 0, 0);
		
		case 233:
			return func_204(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_203(iParam1, iParam3);
		
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
			return func_202(iParam1, iParam3, iParam4);
		
		case 238:
		case 249:
			return func_201(iParam1);
		
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
			return func_195(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		case 158:
			return func_189(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		case 181:
			return func_183(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		default:
	}
	return 0;
}

int func_183(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_188(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_187(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_186(func_101(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_185(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_184(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_184(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_185(int iParam0, int iParam1)
{
	return func_184(iParam0, iParam1) > 0;
}

int func_186(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

int func_187(int iParam0, int iParam1)
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

int func_188(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		default:
	}
	return 0;
}

int func_189(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
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
		iVar0 = (iVar0 + func_194(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_193(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_192(func_101(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_191(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_190(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_190(int iParam0, int iParam1)
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

bool func_191(int iParam0, int iParam1)
{
	return func_190(iParam0, iParam1) > 0;
}

int func_192(int iParam0, int iParam1, int iParam2)
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
			if (iParam2 != func_3())
			{
				if (func_65(iParam2, 1))
				{
					Var0 = { func_136(iParam2) };
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

int func_193(int iParam0, int iParam1)
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

int func_194(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 53:
			return 0;
		
		default:
	}
	return 0;
}

int func_195(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
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
		if (func_140(iParam0))
		{
			iVar0 = (iVar0 + func_139(iParam0, iParam2));
		}
		iVar0 = (iVar0 + func_200(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_199(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_198(func_101(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (func_197(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_196(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_196(int iParam0, int iParam1)
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

bool func_197(int iParam0, int iParam1)
{
	return func_196(iParam0, iParam1) > 0;
}

int func_198(int iParam0, int iParam1)
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

int func_199(int iParam0, int iParam1)
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

int func_200(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		default:
	}
	return 0;
}

int func_201(int iParam0)
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

int func_202(int iParam0, int iParam1, int iParam2)
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
	if (func_144(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_203(int iParam0, int iParam1)
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
	if ((func_152(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_147(iParam0, func_151() + 1));
	}
	return iVar0;
}

int func_204(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		if (func_159(iParam0))
		{
			if (iParam3 != func_3())
			{
				iVar0 = (iVar0 + func_156(iParam0, func_101(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_3())
		{
			iVar0 = (iVar0 + func_209(iParam0, func_101(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_208(0, iParam1) != -1)
		{
			if (iParam3 != func_3())
			{
				iVar0 = (iVar0 + func_207(func_101(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_206(iParam0))
		{
			iVar0 = (iVar0 + func_205(iParam0));
		}
	}
	return iVar0;
}

int func_205(int iParam0)
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

bool func_206(int iParam0)
{
	return func_205(iParam0) > 0;
}

int func_207(var uParam0, int iParam1)
{
	return 2;
}

int func_208(int iParam0, int iParam1)
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

int func_209(int iParam0, int iParam1)
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
			uVar0 = func_10(5326, -1, 0);
			if (MISC::IS_BIT_SET(uVar0, 7))
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

int func_210(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		if (func_171(iParam0))
		{
			if (iParam3 != func_3())
			{
				iVar0 = (iVar0 + func_163(iParam0, func_101(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_3())
		{
			iVar0 = (iVar0 + func_215(iParam0, func_101(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_214(0, iParam1) != -1)
		{
			if (iParam3 != func_3())
			{
				iVar0 = (iVar0 + func_213(func_101(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_212(iParam0))
		{
			iVar0 = (iVar0 + func_211(iParam0));
		}
	}
	return iVar0;
}

int func_211(int iParam0)
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

bool func_212(int iParam0)
{
	return func_211(iParam0) > 0;
}

int func_213(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (func_166(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_166(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_166(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_166(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_166(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_166(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_166(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_166(iParam1))
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

int func_214(int iParam0, int iParam1)
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

int func_215(int iParam0, int iParam1)
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

int func_216(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_175(iParam0, func_151() + 1, -1, iParam2) == 1)
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
		if (func_177(iParam0))
		{
			iVar0 = (iVar0 + func_175(iParam0, func_151() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_219(iParam0, func_151() + 1));
	}
	if (!bParam3)
	{
		if (func_218(iParam0))
		{
			iVar0 = (iVar0 + func_217(iParam0));
		}
	}
	return iVar0;
}

int func_217(int iParam0)
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

bool func_218(int iParam0)
{
	return func_217(iParam0) > 0;
}

int func_219(int iParam0, int iParam1)
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

int func_220(int iParam0, int iParam1, int iParam2)
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
	iVar0 = (iVar0 + func_223(iParam0, func_151() + 1, iParam2));
	iVar0 = (iVar0 + func_221(iParam0));
	return iVar0;
}

int func_221(int iParam0)
{
	if (func_222(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_222(int iParam0)
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

int func_223(int iParam0, var uParam1, int iParam2)
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

int func_224(int iParam0)
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

int func_225(int iParam0, int iParam1, int iParam2, int iParam3)
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
			return func_252(iParam1);
		
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
			return func_249(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_246(iParam1, iParam2, iParam3, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_243(iParam1, iParam2, iParam3, 0);
		
		case 233:
			return func_240(iParam1, iParam2, iParam3, 0);
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_239(iParam1, iParam2);
		
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
			return func_238();
		
		case 218:
			return func_237();
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		case 237:
		case 250:
			return func_236(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_235(iParam1, iParam2);
		
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
			return func_232(iParam1, iParam2, 0, -1);
		
		case 158:
			return func_229(iParam1, iParam2, 0, -1);
		
		case 181:
			return func_226(iParam1, iParam2, 0, -1);
		
		default:
	}
	return 0;
}

int func_226(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 2:
			iVar0 += 6;
			break;
	}
	if (!bParam2)
	{
		if (func_185(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_227(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_227(int iParam0, var uParam1)
{
	if (func_185(iParam0, uParam1))
	{
		return (func_184(iParam0, uParam1) + func_228(iParam0, uParam1));
	}
	return 0;
}

int func_228(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_229(int iParam0, int iParam1, bool bParam2, int iParam3)
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
		if (func_191(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_230(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_230(int iParam0, int iParam1)
{
	if (func_191(iParam0, iParam1))
	{
		return (func_190(iParam0, iParam1) + func_231(iParam0, iParam1));
	}
	return 0;
}

int func_231(int iParam0, int iParam1)
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

int func_232(int iParam0, int iParam1, bool bParam2, int iParam3)
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
		if (func_197(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_233(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_233(int iParam0, int iParam1)
{
	if (func_197(iParam0, iParam1))
	{
		return (func_196(iParam0, iParam1) + func_234(iParam0, iParam1));
	}
	return 0;
}

int func_234(int iParam0, int iParam1)
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

int func_235(int iParam0, int iParam1)
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

int func_236(int iParam0, int iParam1, int iParam2)
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

int func_237()
{
	iVar0 = 32;
	return iVar0;
}

int func_238()
{
	iVar0 = 8;
	return iVar0;
}

int func_239(int iParam0, int iParam1)
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
		iVar0 = (iVar0 + func_147(iParam0, func_151() + 1));
	}
	return iVar0;
}

int func_240(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_206(iParam0))
		{
			iVar0 = (iVar0 + func_241(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_241(int iParam0, var uParam1)
{
	if (func_206(iParam0))
	{
		return (func_205(iParam0) + func_242(iParam0, uParam1));
	}
	return 0;
}

int func_242(int iParam0, var uParam1)
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

int func_243(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_212(iParam0))
		{
			iVar0 = (iVar0 + func_244(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_244(int iParam0, int iParam1)
{
	if (func_212(iParam0))
	{
		return (func_211(iParam0) + func_245(iParam0, iParam1));
	}
	return 0;
}

int func_245(int iParam0, int iParam1)
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

int func_246(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_218(iParam0))
		{
			iVar0 = (iVar0 + func_247(iParam0));
		}
	}
	return iVar0;
}

int func_247(int iParam0)
{
	if (func_218(iParam0))
	{
		return (func_217(iParam0) + func_248(iParam0));
	}
	return 0;
}

int func_248(int iParam0)
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

int func_249(int iParam0, int iParam1, var uParam2)
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
	iVar0 = (iVar0 + func_250(iParam0));
	return iVar0;
}

int func_250(int iParam0)
{
	if (func_222(iParam0))
	{
		if (func_251(iParam0))
		{
			return 4;
		}
		return 2;
	}
	return 0;
}

int func_251(int iParam0)
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

int func_252(int iParam0)
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

bool func_253(int iParam0, int iParam1, bool bParam2)
{
	return func_91(iParam0, iParam1, bParam2) == -1;
}

bool func_254()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11.f_353 != 2000;
}

void func_255(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_256(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_2425662[iParam0].f_195, 19);
}

int func_257(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_258(uParam0, bParam2, 0);
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

void func_258(var uParam0, bool bParam1, bool bParam2)
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

bool func_259(var uParam0)
{
	return uParam0->f_1;
}

void func_260()
{
	if (!Global_1312575)
	{
		return;
	}
	func_261();
}

void func_261()
{
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
}

bool func_262(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_2425662[iParam0].f_195, 18);
}

void func_263()
{
	if (iLocal_634 == 2000000)
	{
		PAD::ENABLE_CONTROL_ACTION(2, 201, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 237, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_631, "GET_CURRENT_SELECTION");
			uLocal_632 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_631, "GET_CURRENT_TAB_ID");
			uLocal_633 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			iLocal_634 = 1000000;
		}
	}
	if (iLocal_634 == 1000000 && (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_632) && GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_633)))
	{
		iLocal_611 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_633);
		iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_632);
		bVar1 = true;
		bVar2 = true;
		iLocal_634 = iVar0;
		if (func_321(iVar0))
		{
			if (!func_320(8))
			{
				func_317("AH_BUYER_T", func_319(), "OR_OVRLY_OK", "", -1, -1);
				bVar1 = false;
			}
			else if (func_316(PLAYER::PLAYER_ID()))
			{
				func_317("AH_VEH_SEL_T", "AHA_ARCADE_BLCK", "OR_OVRLY_OK", "", -1, -1);
				bVar1 = false;
			}
			else if (!func_315(iVar0, 0))
			{
				if (func_80(0) == 4)
				{
					func_317("AH_BUYER_T", "AH_MAX_PLAYERD", "OR_OVRLY_OK", "", -1, -1);
					bVar1 = false;
				}
				else if (func_80(0) < func_86())
				{
					func_314(iVar0, 0);
				}
				else
				{
					func_317("AH_BUYER_T", "AH_NE_PLAYERD", "OR_OVRLY_OK", "", -1, -1);
					bVar1 = false;
				}
			}
			else
			{
				if (iVar0 > 10000)
				{
					iVar0 = (iVar0 - 10000);
				}
				func_313(iVar0);
			}
			iLocal_634 = 2000000;
		}
		else if (func_312(iVar0))
		{
			iVar3 = iVar0;
			if (!func_320(8))
			{
				func_317("AH_BUYER_T", func_319(), "OR_OVRLY_OK", "", -1, -1);
				bVar1 = false;
			}
			else if (func_316(PLAYER::PLAYER_ID()))
			{
				func_317("AH_VEH_SEL_T", "AHA_ARCADE_BLCK", "OR_OVRLY_OK", "", -1, -1);
				bVar1 = false;
			}
			else if (!func_311(iVar3))
			{
				func_317("AH_BUYER_T", func_310(iVar3), "OR_OVRLY_OK", "", -1, -1);
				bVar1 = false;
			}
			else if (func_86() < func_309(iVar3))
			{
				func_317("AH_BUYER_T", "AH_COL_PLAYERD", "OR_OVRLY_OK", "", -1, -1);
				bVar1 = false;
			}
			else if (iLocal_630 == iVar3)
			{
				iLocal_630 = 2000;
				func_308(1, 0);
			}
			else if (func_307())
			{
				func_308(1, 0);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_631, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(iLocal_630), -1082130432, -1082130432, -1082130432, -1082130432);
				iLocal_630 = iVar3;
				func_304(iVar3);
			}
			else
			{
				iLocal_630 = iVar3;
				func_304(iVar3);
			}
			iLocal_634 = 2000000;
		}
		else
		{
			switch (iVar0)
			{
				case 101:
					break;
				
				case 102:
					break;
				
				case 1002:
					break;
				
				case 1007:
					break;
				
				case 1008:
					break;
				
				case 1009:
					break;
				
				case 1000:
					bVar2 = false;
					func_303(0);
					break;
				
				case 1001:
					bVar2 = false;
					func_303(1);
					break;
				
				default:
					break;
				}
		}
		if (bVar1)
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_631, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(iVar0), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (bVar2)
		{
			func_303(iLocal_611);
		}
	}
	func_264(&iLocal_634);
}

void func_264(int iParam0)
{
	if (*iParam0 < 1000000)
	{
		if (func_84())
		{
			if ((*iParam0 == 1007 || *iParam0 == 1008) || *iParam0 == 1009)
			{
				func_317("AH_BUYER_T", "AH_SAVING_DOWN", "WHOUSE_CONF", "", -1, -1);
				iLocal_609 = 0;
				*iParam0 = 2000000;
				return;
			}
		}
		if (*iParam0 == 101)
		{
			if (iLocal_609)
			{
				bVar0 = func_307();
				if (iLocal_611 != 1)
				{
					bVar0 = false;
				}
				if (func_82(bVar0, 0))
				{
					func_302(bVar0);
					func_289(bVar0);
					func_288();
				}
				else
				{
					Var1 = { func_286(bVar0) };
					func_288();
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_631, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(202), -1082130432, -1082130432, -1082130432, -1082130432);
					if (iLocal_610 == 17 && !bVar0)
					{
						iVar6 = (func_80(bVar0) - func_86());
						iVar5 = 0;
						while (iVar5 < iVar6)
						{
							func_285();
							iVar5++;
						}
					}
					func_317("AH_BUYER_T", &Var1, "OR_OVRLY_OK", "", -1, -1);
				}
			}
			else
			{
				func_288();
			}
		}
		else if (*iParam0 == 102)
		{
			func_288();
		}
		else if (*iParam0 == 1002)
		{
			if (!func_320(8))
			{
				func_317("AH_BUYER_T", func_319(), "OR_OVRLY_OK", "", -1, -1);
			}
			else if (func_316(PLAYER::PLAYER_ID()))
			{
				func_317("AH_VEH_SEL_T", "AHA_ARCADE_BLCK", "OR_OVRLY_OK", "", -1, -1);
			}
			else if ((iLocal_614[0] == 0 && iLocal_611 == 0) || (iLocal_619[0] == 0 && iLocal_611 == 1))
			{
				func_317("AH_VEH_SEL_T", "AH_VEH_SEL_D", "OR_OVRLY_OK", "", -1, -1);
			}
			else if (!func_66(PLAYER::PLAYER_ID()))
			{
				func_317("AH_BUYER_T", "AH_NBOSS", "OR_OVRLY_OK", "", -1, -1);
			}
			else if (func_307() && iLocal_611 == 1)
			{
				if (func_84())
				{
					func_317("AH_BUYER_T", "AH_SAVING_DOWN", "WHOUSE_CONF", "", -1, -1);
				}
				else
				{
					func_317("AH_BUYER_T", "AH_BUYER_D3", "WHOUSE_CONF", "WHOUSE_CANC", -1, -1);
					iLocal_629 = 2;
					iLocal_609 = 1;
				}
			}
			else
			{
				func_284();
			}
		}
		else if (*iParam0 == 1007)
		{
			if (func_283(0))
			{
				func_317("AH_BUYER_T", func_282(1, 1, -1, 1), "WHOUSE_CONF", "", -1, -1);
				iLocal_609 = 0;
			}
			else if (func_281(0))
			{
				iVar7 = func_265(6, 1);
				iVar8 = func_265(6, 0);
				if (iVar7 <= 0)
				{
					iVar7 = -1;
				}
				func_317("AH_BUYER_T", func_282(1, 0, iVar7, 0), "WHOUSE_CONF", "WHOUSE_CANC", iVar7, iVar8);
				iLocal_629 = 0;
				iLocal_609 = 1;
			}
			else
			{
				func_317("AH_BUYER_T", func_282(1, 1, -1, 0), "WHOUSE_CONF", "", -1, -1);
				iLocal_609 = 0;
			}
		}
		else if (*iParam0 == 1008)
		{
			if (func_283(1))
			{
				func_317("AH_BUYER_T", func_282(1, 1, -1, 1), "WHOUSE_CONF", "", -1, -1);
				iLocal_609 = 0;
			}
			else if (func_281(1))
			{
				iVar9 = func_265(11, 1);
				iVar10 = func_265(11, 0);
				func_317("AH_BUYER_T", func_282(0, 0, -1, 0), "WHOUSE_CONF", "WHOUSE_CANC", iVar9, iVar10);
				iLocal_629 = 1;
				iLocal_609 = 1;
			}
			else
			{
				func_317("AH_BUYER_T", func_282(1, 1, -1, 0), "WHOUSE_CONF", "", -1, -1);
				iLocal_609 = 0;
			}
		}
		else if (*iParam0 == 1009)
		{
			if (func_283(2))
			{
				func_317("AH_BUYER_T", func_282(1, 1, -1, 1), "WHOUSE_CONF", "", -1, -1);
				iLocal_609 = 0;
			}
			else if (func_281(2))
			{
				iVar11 = func_265(19, 1);
				iVar12 = func_265(19, 0);
				func_317("AH_BUYER_T", func_282(0, 0, -1, 0), "WHOUSE_CONF", "WHOUSE_CANC", iVar11, iVar12);
				iLocal_629 = 2;
				iLocal_609 = 1;
			}
			else
			{
				func_317("AH_BUYER_T", func_282(1, 1, -1, 0), "WHOUSE_CONF", "", -1, -1);
				iLocal_609 = 0;
			}
		}
		*iParam0 = 2000000;
	}
}

int func_265(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iLocal_614[iVar0] != 0)
		{
			iVar2 = iLocal_614[iVar0];
			iVar1 = (iVar1 + func_266(func_280(iVar2), iParam0, bParam1, 0, 0));
		}
		iVar0++;
	}
	return iVar1;
}

int func_266(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_279(iParam0))
	{
		if (bParam3)
		{
			if (func_275(&uVar0, iParam0, 0, -1))
			{
				return uVar0;
			}
		}
		else
		{
			iVar6 = func_274(iParam0);
			iVar7 = 0;
			iVar8 = 0;
			if (func_273(iParam1) && !bParam4)
			{
				iVar8 = func_271(func_272(iVar6));
				iVar7 = func_270(iVar6, bParam4);
			}
			else if (func_269(iParam1) || bParam4)
			{
				iVar8 = func_268(func_272(iVar6));
				iVar7 = func_267(iVar6, bParam4);
			}
			else
			{
				iVar8 = Global_262145.f_18943;
				iVar7 = func_272(iVar6);
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

int func_267(int iParam0, bool bParam1)
{
	iVar0 = SYSTEM::CEIL((IntToFloat(func_272(iParam0)) * Global_262145.f_18947));
	iVar1 = 0;
	if (!bParam1)
	{
		iVar1 = func_268(func_272(iParam0));
	}
	return (iVar0 + iVar1);
}

int func_268(int iParam0)
{
	return SYSTEM::CEIL((IntToFloat(iParam0) * Global_262145.f_18945));
}

int func_269(int iParam0)
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

int func_270(int iParam0, bool bParam1)
{
	iVar0 = SYSTEM::CEIL((IntToFloat(func_272(iParam0)) * Global_262145.f_18946));
	iVar1 = 0;
	if (!bParam1)
	{
		iVar1 = func_271(func_272(iParam0));
	}
	return (iVar0 + iVar1);
}

int func_271(int iParam0)
{
	return SYSTEM::CEIL((IntToFloat(iParam0) * Global_262145.f_18944));
}

int func_272(int iParam0)
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

int func_273(int iParam0)
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

int func_274(int iParam0)
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

int func_275(var uParam0, int iParam1, bool bParam2, int iParam3)
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
				iVar1 = (Global_262145.f_19162 + func_278(iParam1));
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
				iVar1 = (Global_262145.f_19166 + func_278(iParam1));
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
				iVar1 = (Global_262145.f_19172 + func_278(iParam1));
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
				iVar1 = (Global_262145.f_19170 + func_278(iParam1));
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
				iVar1 = (Global_262145.f_19164 + func_278(iParam1));
				break;
			
			case -2022483795:
				iVar1 = (85000 + func_278(iParam1));
				break;
			
			case 196747873:
				iVar1 = (Global_262145.f_19176 + func_278(iParam1));
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
					iVar1 = (Global_262145.f_28570 + func_278(iParam1));
				}
				break;
			
			case 67753863:
				iVar1 = 700000;
				if (bVar0)
				{
					iVar1 = (Global_262145.f_23407 + func_278(iParam1));
				}
				break;
			
			case -2122646867:
				iVar1 = 815000;
				if (bVar0)
				{
					iVar1 = (Global_262145.f_26100 + func_278(iParam1));
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
					iVar1 = (Global_262145.f_7646 + func_278(iParam1));
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
					iVar1 = (Global_262145.f_18528 + func_278(iParam1));
				}
				break;
			
			case 1717532765:
				iVar1 = 925000;
				if (bVar0)
				{
					iVar1 = (Global_262145.f_28569 + func_278(iParam1));
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
			iVar1 = (Global_262145.f_11867 + func_278(iParam1));
			break;
		
		case -2040426790:
			iVar1 = 100000;
			if (bVar0 && Global_262145.f_11866 >= 0)
			{
				iVar1 = (Global_262145.f_11866 + func_278(iParam1));
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
			iVar1 = (Global_262145.f_11863 + func_278(iParam1));
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
			iVar1 = (Global_262145.f_11862 + func_278(iParam1));
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
			iVar1 = (Global_262145.f_11864 + func_278(iParam1));
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
			iVar1 = (Global_262145.f_11865 + func_278(iParam1));
			break;
		
		case -688189648:
		case -1375060657:
		case -1293924613:
			iVar1 = (Global_262145.f_25150 + func_278(iParam1));
			break;
		
		case -2061049099:
		case 373261600:
		case 1742022738:
			iVar1 = (Global_262145.f_8939 + func_278(iParam1));
			break;
		
		case 628003514:
		case 1537277726:
		case 1239571361:
			iVar1 = (Global_262145.f_23615 + func_278(iParam1));
			break;
		
		case 1009171724:
		case -1924800695:
		case -1744505657:
			iVar1 = (Global_262145.f_25151 + func_278(iParam1));
			break;
		
		case -27326686:
		case -1812949672:
		case -1374500452:
			iVar1 = (Global_262145.f_25153 + func_278(iParam1));
			break;
		
		case 1721676810:
		case 840387324:
		case -715746948:
			iVar1 = (Global_262145.f_25147 + func_278(iParam1));
			break;
		
		case 668439077:
		case -1694081890:
		case -2042350822:
			iVar1 = (Global_262145.f_25148 + func_278(iParam1));
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
			iVar1 = (Global_262145.f_12977 + func_278(iParam1));
			break;
		
		case -1041692462:
			if (bVar0 && Global_262145.f_12979 >= 0)
			{
				iVar1 = Global_262145.f_12979;
			}
			break;
		
		case 633712403:
			iVar1 = (Global_262145.f_12979 + func_278(iParam1));
			break;
		
		case -602287871:
			iVar1 = 982000;
			if (bVar0 && Global_262145.f_13007 >= 0)
			{
				iVar1 = Global_262145.f_13007;
			}
			break;
		
		case -2039755226:
			iVar1 = (Global_262145.f_11862 + func_278(iParam1));
			break;
		
		case -1126264336:
			iVar1 = (Global_262145.f_6577 + func_278(iParam1));
			break;
		
		case 223258115:
			iVar1 = (Global_262145.f_14514 + func_278(iParam1));
			break;
		
		case 1119641113:
			iVar1 = (Global_262145.f_8939 + func_278(iParam1));
			break;
		
		case -1797613329:
			iVar1 = (Global_262145.f_14515 + func_278(iParam1));
			break;
		
		case 16646064:
			iVar1 = Global_262145.f_14513;
			break;
		
		case -899509638:
			iVar1 = (Global_262145.f_14513 + func_278(iParam1));
			break;
		
		case 1356124575:
			iVar1 = (950000 + func_278(iParam1));
			if (bVar0)
			{
				if (Global_262145.f_8634 >= 0)
				{
					iVar1 = (Global_262145.f_8634 + func_278(iParam1));
				}
			}
			break;
		
		case -1924433270:
			iVar1 = (1350000 + func_278(iParam1));
			if (bVar0)
			{
				if (Global_262145.f_8627 >= 0)
				{
					iVar1 = (Global_262145.f_8627 + func_278(iParam1));
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
	if (!func_276(iParam1))
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

int func_276(int iParam0)
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
			if (func_277(iParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_277(int iParam0)
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

int func_278(int iParam0)
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

int func_279(int iParam0)
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

int func_280(int iParam0)
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

int func_281(int iParam0)
{
	if (iParam0 == 0)
	{
		iVar0 = func_265(6, 1);
	}
	else if (iParam0 == 1)
	{
		iVar0 = func_265(11, 1);
	}
	else if (iParam0 == 2)
	{
		iVar0 = func_265(19, 1);
	}
	if (iVar0 > 0 && !MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, 0, 1, 0, -1, 0))
	{
		return 0;
	}
	return 1;
}

char* func_282(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		return "AH_BUYER_D6";
	}
	else if (bParam1)
	{
		if (func_80(0) == 1)
		{
			return "AH_BUYER_NM2";
		}
		else
		{
			return "AH_BUYER_NM1";
		}
	}
	else if (bParam0)
	{
		if (func_80(0) == 1)
		{
			if (iParam2 > 0)
			{
				return "AH_BUYER_D4";
			}
			else
			{
				return "AH_BUYER_D2";
			}
		}
		else if (iParam2 > 0)
		{
			return "AH_BUYER_D5";
		}
	}
	else if (func_80(0) == 1)
	{
		return "AH_BUYER_D4";
	}
	else
	{
		return "AH_BUYER_D5";
	}
	return "AH_BUYER_D1";
}

int func_283(int iParam0)
{
	if (func_84())
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return Global_262145.f_18924;
	}
	else if (iParam0 == 1)
	{
		return Global_262145.f_18925;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_18926;
	}
	return 0;
}

void func_284()
{
	iVar0 = func_265(6, 0);
	iVar1 = func_265(11, 0);
	iVar2 = func_265(19, 0);
	iVar3 = func_265(6, 1);
	iVar4 = func_265(11, 1);
	iVar5 = func_265(19, 1);
	bVar6 = true;
	bVar7 = true;
	bVar8 = true;
	if ((iVar3 > 0 && !MONEY::NETWORK_CAN_SPEND_MONEY(iVar3, 0, 1, 0, -1, 0)) || func_283(0))
	{
		bVar6 = false;
	}
	if ((iVar4 > 0 && !MONEY::NETWORK_CAN_SPEND_MONEY(iVar4, 0, 1, 0, -1, 0)) || func_283(1))
	{
		bVar7 = false;
	}
	if ((iVar5 > 0 && !MONEY::NETWORK_CAN_SPEND_MONEY(iVar5, 0, 1, 0, -1, 0)) || func_283(2))
	{
		bVar8 = false;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_631, "SHOW_BUYERS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar7);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar8);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_303(2);
}

void func_285()
{
	iVar0 = 3;
	while (iVar0 >= 0)
	{
		if (iLocal_614[iVar0] != 0)
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_631, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(iLocal_614[iVar0]), -1082130432, -1082130432, -1082130432, -1082130432);
			iLocal_614[iVar0] = 0;
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
}

struct<4> func_286(bool bParam0)
{
	switch (iLocal_610)
	{
		case 12:
			StringCopy(&Var0, "AH_SES", 16);
			return Var0;
		
		case 13:
			StringCopy(&Var0, "AH_CRIT", 16);
			return Var0;
		
		case 14:
			StringCopy(&Var0, "AH_NBOSS", 16);
			return Var0;
		
		case 15:
			StringCopy(&Var0, "AH_NBOSS", 16);
			return Var0;
		
		case 18:
			StringCopy(&Var0, "AH_SAVING_DOWN", 16);
			return Var0;
		
		case 17:
			StringCopy(&Var0, "AH_NEPLYRS", 16);
			StringIntConCat(&Var0, func_80(bParam0), 16);
			return Var0;
		
		case 20:
			if (func_89(PLAYER::PLAYER_ID()))
			{
				StringCopy(&Var0, "GENERAL_MLF_G1", 16);
			}
			else if (func_287(PLAYER::PLAYER_ID()))
			{
				StringCopy(&Var0, "GENERAL_MLF_G2", 16);
			}
			else
			{
				StringCopy(&Var0, "GENERAL_MLF_G3", 16);
			}
			return Var0;
		
		case 19:
			if (func_89(PLAYER::PLAYER_ID()))
			{
				StringCopy(&Var0, "GENERAL_MLF_G4", 16);
			}
			else if (func_287(PLAYER::PLAYER_ID()))
			{
				StringCopy(&Var0, "GENERAL_MLF_G5", 16);
			}
			else
			{
				StringCopy(&Var0, "GENERAL_MLF_G6", 16);
			}
			return Var0;
			break;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "AH_SES", 16);
		return Var0;
	}
	StringCopy(&Var0, "AH_SELL_NA", 16);
	return Var0;
}

bool func_287(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 26);
}

void func_288()
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_631, "HIDE_OVERLAY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_647 = 0;
	if (iLocal_609)
	{
		iLocal_609 = 0;
	}
}

void func_289(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if ((!bParam0 && iLocal_614[iVar0] != 0) || (bParam0 && iLocal_619[iVar0] != 0))
		{
			uVar6 = iLocal_614[iVar0];
			if (bParam0)
			{
				uVar6 = iLocal_619[iVar0];
			}
			Global_1572864[iVar0].f_101 = uVar6;
			Global_1572864[iVar0].f_100 = iLocal_624[iVar0];
		}
		else
		{
			func_300(&uVar1);
			Global_1572864[iVar0].f_101 = -1;
			Global_1572864[iVar0].f_100 = uVar1[0];
			iLocal_624[iVar0] = uVar1[0];
		}
		iVar0++;
	}
	if (iLocal_629 != 0 && !bParam0)
	{
		if (func_299())
		{
			func_297();
		}
		func_296(1);
		iLocal_608 = 1;
	}
	else
	{
		func_81(PLAYER::PLAYER_ID(), 1);
		iLocal_648 = 2;
	}
	if (bParam0)
	{
		func_295(iLocal_630);
	}
	else
	{
		func_294();
	}
	func_293(0);
	func_290(iLocal_624[0], iLocal_624[1], iLocal_624[2], iLocal_624[3], Global_1572864[0].f_101, Global_1572864[1].f_101, Global_1572864[2].f_101, Global_1572864[3].f_101, iLocal_629, bParam0);
	Global_1676347 = 1;
}

void func_290(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, bool bParam9)
{
	Var0.f_2 = 4;
	Var0.f_7 = 4;
	Var0 = -1409927898;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2[0] = uParam0;
	Var0.f_2[1] = uParam1;
	Var0.f_2[2] = uParam2;
	Var0.f_2[3] = uParam3;
	Var0.f_7[0] = uParam4;
	Var0.f_7[1] = uParam5;
	Var0.f_7[2] = uParam6;
	Var0.f_7[3] = uParam7;
	Var0.f_12 = iParam8;
	Var0.f_13 = bParam9;
	iVar14 = func_291(1);
	if (!iVar14 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 14, iVar14);
	}
}

var func_291(bool bParam0)
{
	if (func_66(PLAYER::PLAYER_ID()))
	{
		iVar2 = PLAYER::PLAYER_ID();
	}
	else
	{
		iVar2 = func_79();
	}
	if (iVar2 == PLAYER::PLAYER_ID() || func_2(iVar2, bParam0, 1))
	{
		MISC::SET_BIT(&uVar0, iVar2);
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar3 = iVar1;
		if ((iVar2 != iVar3 && func_292(iVar3, iVar2)) && func_2(iVar3, bParam0, 1))
		{
			MISC::SET_BIT(&uVar0, iVar1);
		}
		iVar1++;
	}
	return uVar0;
}

int func_292(int iParam0, int iParam1)
{
	iVar0 = func_77(iParam0);
	if (!iVar0 == func_3())
	{
		if (iVar0 == func_77(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_293(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_196, 6))
		{
			MISC::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_196), 6);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_196, 6))
	{
		MISC::CLEAR_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_196), 6);
	}
}

void func_294()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2513267.f_20[iVar0] = 0;
		iVar0++;
	}
	Global_2513267.f_25 = 0;
	Global_2513267.f_19 = 2000;
	Global_1628237[PLAYER::PLAYER_ID()].f_11.f_353 = 2000;
}

void func_295(int iParam0)
{
	if (func_311(iParam0))
	{
		Global_1628237[PLAYER::PLAYER_ID()].f_11.f_353 = iParam0;
	}
}

void func_296(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_195, 18))
		{
			MISC::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_195), 18);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_195, 18))
	{
		MISC::CLEAR_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_195), 18);
	}
}

void func_297()
{
	Global_19671 = 0;
	func_298();
}

void func_298()
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

int func_299()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_300(var uParam0)
{
	iVar2 = 4;
	if (!func_301(PLAYER::PLAYER_ID()))
	{
		(*uParam0)[iVar1] = PLAYER::PLAYER_ID();
		iVar1++;
		iVar2 = (iVar2 - 1);
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if ((((Global_1628237[PLAYER::PLAYER_ID()].f_11.f_11[iVar0] != func_3() && func_2(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_11[iVar0], 1, 1)) && !func_301(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_11[iVar0])) && func_405(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_11[iVar0])) && !func_83(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_11[iVar0]))
		{
			(*uParam0)[iVar1] = Global_1628237[PLAYER::PLAYER_ID()].f_11.f_11[iVar0];
			iVar1++;
		}
		else
		{
			(*uParam0)[iVar1] = func_3();
		}
		iVar0++;
	}
}

int func_301(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iLocal_624[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_302(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if ((!bParam0 && iLocal_614[iVar0] != 0) || (bParam0 && iLocal_619[iVar0] != 0))
		{
			if (iVar0 == 0)
			{
				iLocal_624[iVar0] = PLAYER::PLAYER_ID();
			}
			else
			{
				func_300(&uVar1);
				iLocal_624[iVar0] = uVar1[0];
			}
		}
		iVar0++;
	}
}

void func_303(int iParam0)
{
	if (iLocal_611 != iParam0)
	{
		iLocal_611 = iParam0;
	}
}

void func_304(int iParam0)
{
	Var0.f_1 = 4;
	func_305(&Var0, iParam0);
	iVar7 = 0;
	while (iVar7 < 4)
	{
		func_314(Var0.f_1[iVar7], 1);
		iVar7++;
	}
}

void func_305(var uParam0, int iParam1)
{
	*uParam0 = func_309(iParam1);
	uParam0->f_6 = func_306(iParam1);
	switch (iParam1)
	{
		case 2001:
			uParam0->f_1[0] = 28;
			uParam0->f_1[1] = 23;
			uParam0->f_1[2] = 90;
			uParam0->f_1[3] = 55;
			break;
		
		case 2002:
			uParam0->f_1[0] = 76;
			uParam0->f_1[1] = 4;
			uParam0->f_1[2] = 19;
			uParam0->f_1[3] = 50;
			break;
		
		case 2003:
			uParam0->f_1[0] = 82;
			uParam0->f_1[1] = 42;
			uParam0->f_1[2] = 65;
			uParam0->f_1[3] = 87;
			break;
		
		case 2004:
			uParam0->f_1[0] = 59;
			uParam0->f_1[1] = 48;
			uParam0->f_1[2] = 96;
			uParam0->f_1[3] = 52;
			break;
		
		case 2005:
			uParam0->f_1[0] = 73;
			uParam0->f_1[1] = 67;
			uParam0->f_1[2] = 15;
			uParam0->f_1[3] = 0;
			break;
		
		case 2006:
			uParam0->f_1[0] = 93;
			uParam0->f_1[1] = 34;
			uParam0->f_1[2] = 32;
			uParam0->f_1[3] = 0;
			break;
		
		case 2007:
			uParam0->f_1[0] = 2;
			uParam0->f_1[1] = 12;
			uParam0->f_1[2] = 18;
			uParam0->f_1[3] = 0;
			break;
		
		case 2008:
			uParam0->f_1[0] = 70;
			uParam0->f_1[1] = 27;
			uParam0->f_1[2] = 7;
			uParam0->f_1[3] = 0;
			break;
		
		case 2009:
			uParam0->f_1[0] = 61;
			uParam0->f_1[1] = 80;
			uParam0->f_1[2] = 0;
			uParam0->f_1[3] = 0;
			break;
		
		case 2010:
			uParam0->f_1[0] = 43;
			uParam0->f_1[1] = 38;
			uParam0->f_1[2] = 0;
			uParam0->f_1[3] = 0;
			break;
	}
}

int func_306(int iParam0)
{
	switch (iParam0)
	{
		case 2001:
			return 100000;
		
		case 2002:
			return 200000;
		
		case 2003:
			return 300000;
		
		case 2004:
			return 400000;
		
		case 2005:
			return 500000;
		
		case 2006:
			return 600000;
		
		case 2007:
			return 700000;
		
		case 2008:
			return 800000;
		
		case 2009:
			return 900000;
		
		case 2010:
			return 1000000;
		
		default:
	}
	return 0;
}

bool func_307()
{
	return iLocal_630 != 2000;
}

void func_308(bool bParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!bParam0)
		{
			iLocal_614[iVar0] = 0;
		}
		else
		{
			iLocal_619[iVar0] = 0;
		}
		iVar0++;
	}
	if (bParam1)
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_631, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(iLocal_630), -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

int func_309(int iParam0)
{
	switch (iParam0)
	{
		case 2001:
			return 4;
		
		case 2002:
			return 4;
		
		case 2003:
			return 4;
		
		case 2004:
			return 4;
		
		case 2005:
			return 3;
		
		case 2006:
			return 3;
		
		case 2007:
			return 3;
		
		case 2008:
			return 3;
		
		case 2009:
			return 2;
		
		case 2010:
			return 2;
		
		default:
	}
	return 0;
}

char* func_310(int iParam0)
{
	iVar0 = func_309(iParam0);
	switch (iVar0)
	{
		case 2:
			return "AH_COL_2VEH";
		
		case 3:
			return "AH_COL_3VEH";
		
		case 4:
			return "AH_COL_4VEH";
		
		default:
	}
	return "AH_COL_2VEH";
}

int func_311(int iParam0)
{
	Var1.f_1 = 4;
	func_305(&Var1, iParam0);
	iVar0 = 0;
	while (iVar0 < Var1)
	{
		if (!func_19(PLAYER::PLAYER_ID(), Var1.f_1[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_312(int iParam0)
{
	iVar0 = 2001;
	iVar1 = 2011;
	if ((iParam0 >= iVar0 && iParam0 < iVar1) || (iParam0 > iVar0 + 18000 && iParam0 < iVar1 + 18000))
	{
		return 1;
	}
	return 0;
}

void func_313(int iParam0)
{
	if (iParam0 > 10000)
	{
		iParam0 = (iParam0 - 10000);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == 3)
		{
			iLocal_614[iVar0] = 0;
		}
		else if (iLocal_614[iVar0] == iParam0)
		{
			if (iLocal_614[iVar0 + 1] != 0)
			{
				iLocal_614[iVar0] = iLocal_614[iVar0 + 1];
				iLocal_614[iVar0 + 1] = iParam0;
			}
			else
			{
				iLocal_614[iVar0] = 0;
				return;
			}
		}
		iVar0++;
	}
}

void func_314(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (bParam1)
		{
			if (iLocal_619[iVar0] == 0)
			{
				iLocal_619[iVar0] = iParam0;
				return;
			}
		}
		else if (iLocal_614[iVar0] == 0)
		{
			iLocal_614[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
}

int func_315(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iParam0 > 10000)
	{
		iVar1 = (iVar1 - 10000);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (bParam1)
		{
			if (iLocal_619[iVar0] == iVar1)
			{
				return 1;
			}
		}
		else if (iLocal_614[iVar0] == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_316(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (func_2(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_76(Global_2425662[iParam0].f_310.f_5) == 17;
			}
		}
	}
	return 0;
}

void func_317(char* sParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_631, "SHOW_OVERLAY");
	func_318(sParam0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
	if (iParam4 != -1)
	{
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	}
	if (iParam5 != -1)
	{
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	func_318(sParam2);
	func_318(sParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_647 = 1;
}

void func_318(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

char* func_319()
{
	if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_134.f_1 > 1)
	{
		return "AH_COOLDOWN2";
	}
	return "AH_COOLDOWN";
}

int func_320(int iParam0)
{
	if (iParam0 == 8)
	{
		if (func_259(&(Global_2514606.f_144)) && !func_257(&(Global_2514606.f_144), Global_2514804, 0))
		{
			return 0;
		}
	}
	else if (func_259(&(Global_2514606.f_146)) && !func_257(&(Global_2514606.f_146), Global_262145.f_18842, 1))
	{
		return 0;
	}
	return 1;
}

int func_321(int iParam0)
{
	iVar0 = 0;
	iVar1 = 97;
	if ((iParam0 > iVar0 && iParam0 < iVar1) || (iParam0 > iVar0 + 10000 && iParam0 < iVar1 + 10000))
	{
		return 1;
	}
	return 0;
}

void func_322()
{
	PAD::ENABLE_CONTROL_ACTION(2, 205, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 205))
	{
		if (!iLocal_647)
		{
			func_303(0);
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_631, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(205), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	PAD::ENABLE_CONTROL_ACTION(2, 206, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 206))
	{
		if (!iLocal_647)
		{
			func_303(1);
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_631, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(206), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	PAD::ENABLE_CONTROL_ACTION(2, 207, 1);
	if (PAD::IS_CONTROL_PRESSED(2, 207))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_631, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(207), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2, 207))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_631, "SET_INPUT_RELEASE_EVENT", SYSTEM::TO_FLOAT(207), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	PAD::ENABLE_CONTROL_ACTION(2, 208, 1);
	if (PAD::IS_CONTROL_PRESSED(2, 208))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_631, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(208), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2, 208))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_631, "SET_INPUT_RELEASE_EVENT", SYSTEM::TO_FLOAT(208), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_326();
	PAD::ENABLE_CONTROL_ACTION(2, 201, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_631, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(201), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	PAD::ENABLE_CONTROL_ACTION(2, 202, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_631, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(202), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
	{
		func_325();
	}
	PAD::ENABLE_CONTROL_ACTION(2, 203, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 203))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_631, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(203), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	if (PAD::_IS_USING_KEYBOARD_2(2))
	{
		func_324();
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 237))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_631, "SET_INPUT_RELEASE_EVENT", SYSTEM::TO_FLOAT(237), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 238))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_631, "SET_INPUT_RELEASE_EVENT", SYSTEM::TO_FLOAT(238), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		func_323(0, 1);
	}
	else
	{
		func_323(1, 1);
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(2, 204) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 204)) && !PAD::_IS_USING_KEYBOARD(2))
	{
		func_412(0, 1);
	}
}

void func_323(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		PAD::ENABLE_CONTROL_ACTION(2, 195, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 196, 1);
		iVar0 = PAD::GET_CONTROL_VALUE(2, 195);
		iVar1 = PAD::GET_CONTROL_VALUE(2, 196);
		if (((iVar0 != 127 || iLocal_639 != 127) || iVar1 != 127) || iLocal_640 != 127)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_631, "SET_ANALOG_STICK_INPUT");
			iLocal_639 = iVar0;
			iLocal_640 = iVar1;
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_639);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_640);
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
		if (((iVar2 != 127 || iLocal_641 != 127) || iVar3 != 127) || iLocal_642 != 127)
		{
			bVar4 = (PAD::IS_CONTROL_PRESSED(2, 242) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 242));
			if (!bVar4)
			{
				bVar4 = (PAD::IS_CONTROL_PRESSED(2, 241) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 241));
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_631, "SET_ANALOG_STICK_INPUT");
			iLocal_641 = iVar2;
			iLocal_642 = iVar3;
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_641);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_642);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar4);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_324()
{
	fLocal_635 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	fLocal_636 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	if (fLocal_635 != fLocal_637 || fLocal_636 != fLocal_638)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_631, "SET_MOUSE_INPUT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_635);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_636);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		fLocal_637 = fLocal_635;
		fLocal_638 = fLocal_636;
	}
	PAD::ENABLE_CONTROL_ACTION(2, 237, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_631, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(237), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	PAD::ENABLE_CONTROL_ACTION(2, 238, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 238))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_631, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(202), -1082130432, -1082130432, -1082130432, -1082130432);
		func_325();
	}
}

void func_325()
{
	if (iLocal_647)
	{
		func_288();
	}
	else if (iLocal_611 == 2)
	{
		func_303(0);
	}
	else if (func_307() && iLocal_611 == 1)
	{
		func_308(1, 1);
		iLocal_630 = 2000;
	}
	else if (func_80(0) > 0 && iLocal_611 == 0)
	{
		func_285();
	}
	else
	{
		func_412(0, 1);
	}
}

void func_326()
{
	PAD::ENABLE_CONTROL_ACTION(2, 188, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_631, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(188), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	PAD::ENABLE_CONTROL_ACTION(2, 187, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 187))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_631, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(187), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	PAD::ENABLE_CONTROL_ACTION(2, 189, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_631, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(189), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	PAD::ENABLE_CONTROL_ACTION(2, 190, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_631, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(190), -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_327()
{
	if (!MISC::IS_BIT_SET(uLocal_612, 0) && !MISC::IS_BIT_SET(uLocal_612, 2))
	{
		if (func_332(16))
		{
			sVar0 = "IE_SEC_TUT7";
			iLocal_645 = 9000;
			MISC::SET_BIT(&Global_1676230, 16);
			func_329(&uLocal_643, &uLocal_644, 18);
		}
		else if (func_332(17))
		{
			sVar0 = "IE_SEC_TUT8";
			iLocal_645 = 9500;
			MISC::SET_BIT(&Global_1676230, 17);
			func_329(&uLocal_643, &uLocal_644, 21);
		}
		else if (func_332(18))
		{
			sVar0 = "IE_SEC_TUT13";
			iLocal_645 = 10000;
			MISC::SET_BIT(&Global_1676230, 18);
			func_329(&uLocal_643, &uLocal_644, 36);
		}
		else if (func_332(19))
		{
			sVar0 = "IE_SEC_TUT9";
			iLocal_645 = 10000;
			MISC::SET_BIT(&Global_1676230, 19);
			func_329(&uLocal_643, &uLocal_644, 24);
		}
		else if (func_332(20))
		{
			sVar0 = "IE_SEC_TUT10";
			iLocal_645 = 8500;
			MISC::SET_BIT(&Global_1676230, 20);
			func_329(&uLocal_643, &uLocal_644, 27);
		}
		else if (func_332(21))
		{
			sVar0 = "IE_SEC_TUT11";
			iLocal_645 = 8500;
			MISC::SET_BIT(&Global_1676230, 21);
			func_329(&uLocal_643, &uLocal_644, 30);
		}
		else if (func_332(22))
		{
			sVar0 = "IE_SEC_TUT12";
			iLocal_645 = 8000;
			MISC::SET_BIT(&Global_1676230, 22);
			func_329(&uLocal_643, &uLocal_644, 33);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && !MISC::IS_BIT_SET(uLocal_612, 0))
	{
		func_328(sVar0, iLocal_645);
		MISC::SET_BIT(&uLocal_612, 0);
	}
	else if (MISC::IS_BIT_SET(uLocal_612, 0))
	{
		if (!func_259(&uLocal_816))
		{
			func_258(&uLocal_816, 0, 0);
		}
		else if (func_257(&uLocal_816, iLocal_645, 0))
		{
			MISC::CLEAR_BIT(&uLocal_612, 0);
			iLocal_645 = 0;
			func_255(&uLocal_816);
			if (func_381())
			{
				MISC::SET_BIT(&uLocal_612, 1);
			}
		}
	}
}

void func_328(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_329(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_331(*uParam0, *uParam1, iParam2);
	if (iVar0 < 3)
	{
		func_330(uParam0, uParam1, iParam2, iVar0 + 1);
	}
}

void func_330(var uParam0, var uParam1, var uParam2, int iParam3)
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
		func_6(5367, *uParam0, -1, 1, 0);
	}
	if (*uParam1 != 0)
	{
		func_6(5368, *uParam1, -1, 1, 0);
	}
}

int func_331(var uParam0, var uParam1, var uParam2)
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
			if (MISC::IS_BIT_SET(uParam0, iVar4))
			{
				iVar2++;
			}
		}
		else if (MISC::IS_BIT_SET(uParam1, iVar4))
		{
			iVar2++;
		}
		iVar1++;
	}
	return iVar2;
}

int func_332(int iParam0)
{
	iVar0 = iParam0;
	switch (iParam0)
	{
		case 16:
			if ((!func_334(uLocal_643, uLocal_644, 18) && !MISC::IS_BIT_SET(Global_1676230, iVar0)) && !MISC::IS_BIT_SET(uLocal_612, 4))
			{
				return 1;
			}
			break;
		
		case 17:
			if (((!func_334(uLocal_643, uLocal_644, 21) && !MISC::IS_BIT_SET(Global_1676230, iVar0)) && !MISC::IS_BIT_SET(uLocal_612, 5)) && iLocal_611 == 2)
			{
				return 1;
			}
			break;
		
		case 18:
			if (((!func_334(uLocal_643, uLocal_644, 24) && !MISC::IS_BIT_SET(Global_1676230, iVar0)) && !MISC::IS_BIT_SET(uLocal_612, 5)) && iLocal_611 == 2)
			{
				return 1;
			}
			break;
		
		case 19:
			if (((!func_334(uLocal_643, uLocal_644, 27) && !MISC::IS_BIT_SET(Global_1676230, iVar0)) && !MISC::IS_BIT_SET(uLocal_612, 6)) && iLocal_611 == 1)
			{
				return 1;
			}
			break;
		
		case 20:
			if ((((!func_334(uLocal_643, uLocal_644, 30) && !MISC::IS_BIT_SET(Global_1676230, iVar0)) && !MISC::IS_BIT_SET(uLocal_612, 6)) && iLocal_611 == 1) && func_333())
			{
				return 1;
			}
			break;
		
		case 21:
			if ((!func_334(uLocal_643, uLocal_644, 33) && !MISC::IS_BIT_SET(Global_1676230, iVar0)) && !func_320(8))
			{
				return 1;
			}
			break;
		
		case 22:
			if (((!func_334(uLocal_643, uLocal_644, 36) && !MISC::IS_BIT_SET(Global_1676230, iVar0)) && !MISC::IS_BIT_SET(uLocal_612, 5)) && iLocal_611 == 2)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_333()
{
	iVar0 = 2001;
	while (iVar0 <= (2011 - 1))
	{
		if (func_311(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_334(var uParam0, var uParam1, int iParam2)
{
	return func_331(uParam0, uParam1, iParam2) == 3;
}

void func_335()
{
	if (iLocal_646 != -1)
	{
		func_336(iLocal_646);
	}
}

void func_336(int iParam0)
{
	if (func_337(&uLocal_649, "IMMECAU", func_357(iParam0), 8, 0, 0, 0))
	{
		iLocal_646 = -1;
	}
}

bool func_337(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_356(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_338(sParam2, iParam3, 0);
}

int func_338(char* sParam0, int iParam1, bool bParam2)
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
					func_298();
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
		if (func_355(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_354();
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
				func_346();
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
				if (func_345())
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
			if (func_344())
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
			func_343();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_342();
		func_339();
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
		func_298();
	}
	return 0;
}

void func_339()
{
	if (!func_340())
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

int func_340()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_3())
	{
		return 0;
	}
	if (func_341(PLAYER::PLAYER_ID()))
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

bool func_341(int iParam0)
{
	return func_88(iParam0, 20);
}

void func_342()
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

void func_343()
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

int func_344()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_345()
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

void func_346()
{
	if (func_353(14))
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
		Global_19486 = func_347();
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

var func_347()
{
	func_348();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_348()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_351(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_350(PLAYER::PLAYER_PED_ID());
			if (func_349(iVar0) && (!func_353(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_349(Global_111638.f_2358.f_539.f_4321))
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

bool func_349(int iParam0)
{
	return iParam0 < 3;
}

int func_350(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_351(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_351(int iParam0)
{
	if (func_349(iParam0))
	{
		return func_352(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_352(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_353(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_354()
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

bool func_355(int iParam0, int iParam1)
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

void func_356(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

char* func_357(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IMMEC_TUT1";
		
		case 1:
			return "IMMEC_TUT2";
		
		case 2:
			return "IMMEC_TUT3";
		
		default:
	}
	return "IMMEC_TUT1";
}

void func_358()
{
	if (!MISC::IS_BIT_SET(uLocal_612, 2) && !func_299())
	{
		if (!func_360(3814, -1, -1))
		{
			bVar0 = true;
			iLocal_645 = 6750;
			iLocal_646 = 0;
			func_359(3814, 1, -1, 1);
			MISC::SET_BIT(&uLocal_612, 4);
		}
		else if (iLocal_611 == 2 && !func_360(3815, -1, -1))
		{
			bVar0 = true;
			iLocal_645 = 8000;
			iLocal_646 = 1;
			func_359(3815, 1, -1, 1);
			MISC::SET_BIT(&uLocal_612, 5);
		}
		else if (iLocal_611 == 1 && !func_360(3816, -1, -1))
		{
			bVar0 = true;
			iLocal_645 = 6000;
			iLocal_646 = 2;
			func_359(3816, 1, -1, 1);
			MISC::SET_BIT(&uLocal_612, 6);
		}
	}
	if (bVar0)
	{
		MISC::SET_BIT(&uLocal_612, 2);
	}
	else if (MISC::IS_BIT_SET(uLocal_612, 2))
	{
		if (!func_259(&uLocal_816))
		{
			func_258(&uLocal_816, 0, 0);
		}
		else if (func_257(&uLocal_816, iLocal_645, 0))
		{
			MISC::CLEAR_BIT(&uLocal_612, 2);
			iLocal_645 = 0;
			func_255(&uLocal_816);
			if (func_380())
			{
				MISC::SET_BIT(&uLocal_612, 3);
			}
		}
	}
}

int func_359(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_8();
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

int func_360(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_8();
	}
	iVar1 = func_362(iParam0, iParam1);
	uVar2 = func_361(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_361(int iParam0)
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

int func_362(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_8();
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

void func_363()
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	func_372();
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
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_631, 255, 255, 255, 255, 0);
	func_370();
	func_367(0);
	func_364(1);
}

void func_364(bool bParam0)
{
	if (bParam0)
	{
		func_366();
	}
	func_365(4, -1);
	func_365(6, -1);
	func_365(7, -1);
	func_365(3, -1);
	func_365(1, -1);
	func_365(2, -1);
	func_365(11, -1);
	func_365(13, -1);
	func_365(14, -1);
	func_365(16, -1);
}

void func_365(int iParam0, int iParam1)
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

void func_366()
{
	Global_2537071.f_4532 = 0;
}

void func_367(int iParam0)
{
	if (func_369())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_368(0))
		{
			func_409(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

int func_368(int iParam0)
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

bool func_369()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

void func_370()
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_371();
}

void func_371()
{
	Global_22211.f_134 = 1;
}

void func_372()
{
	func_373(1);
	if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
	}
}

void func_373(bool bParam0)
{
	if (bParam0)
	{
		if (func_374())
		{
			Global_2450632.f_37 = 1;
		}
	}
	else
	{
		Global_2450632.f_37 = 0;
	}
}

bool func_374()
{
	return MISC::IS_BIT_SET(Global_2450632.f_2, 11);
}

var func_375(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_376()
{
	return Global_1694834 != -1;
}

void func_377()
{
	func_379(1);
	func_378(&uLocal_649, 2, 0, "SECUROMECH", 0, 1);
}

void func_378(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_379(bool bParam0)
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

int func_380()
{
	if ((func_360(3814, -1, -1) && func_360(3815, -1, -1)) && func_360(3816, -1, -1))
	{
		return 1;
	}
	return 0;
}

int func_381()
{
	if (((((func_334(uLocal_643, uLocal_644, 18) && func_334(uLocal_643, uLocal_644, 21)) && func_334(uLocal_643, uLocal_644, 24)) && func_334(uLocal_643, uLocal_644, 27)) && func_334(uLocal_643, uLocal_644, 30)) && func_334(uLocal_643, uLocal_644, 33))
	{
		return 1;
	}
	return 0;
}

void func_382()
{
	uLocal_643 = func_10(5367, -1, 0);
	uLocal_644 = func_10(5368, -1, 0);
}

int func_383(int iParam0, int iParam1, int iParam2, int iParam3)
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

void func_384()
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		iVar1 = Global_1590535[PLAYER::PLAYER_ID()].f_274.f_134.f_2[iVar0];
		if (iVar1 > 1000)
		{
			iVar1 = (iVar1 - 1000);
		}
		if (iVar1 > 0 && iVar1 < 97)
		{
			func_390(iVar1, 0);
		}
		iVar0++;
	}
	iVar0 = 2001;
	while (iVar0 <= (2011 - 1))
	{
		func_387(iVar0);
		iVar0++;
	}
	if (!func_320(8))
	{
		iVar2 = func_386(8);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_631, "SET_COOLDOWN");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	func_385();
}

void func_385()
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_631, "SHOW_EXPORT_SCREEN");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_386(int iParam0)
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

void func_387(int iParam0)
{
	if (func_389(iParam0))
	{
		return;
	}
	iVar0 = func_388(iParam0, 1);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_631, "UPDATE_COLLECTION");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_388(int iParam0, int iParam1)
{
	iVar0 = func_309(iParam0);
	if (iParam1 > iVar0)
	{
		iParam1 = iVar0;
	}
	switch (iParam0)
	{
		case 2001:
			iVar1 = Global_262145.f_19056;
			break;
		
		case 2002:
			iVar1 = Global_262145.f_19057;
			break;
		
		case 2003:
			iVar1 = Global_262145.f_19058;
			break;
		
		case 2004:
			iVar1 = Global_262145.f_19059;
			break;
		
		case 2005:
			iVar1 = Global_262145.f_19060;
			break;
		
		case 2006:
			iVar1 = Global_262145.f_19061;
			break;
		
		case 2007:
			iVar1 = Global_262145.f_19062;
			break;
		
		case 2008:
			iVar1 = Global_262145.f_19063;
			break;
		
		case 2009:
			iVar1 = Global_262145.f_19064;
			break;
		
		case 2010:
			iVar1 = Global_262145.f_19065;
			break;
	}
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	return (iVar0 * iVar1);
}

int func_389(int iParam0)
{
	switch (iParam0)
	{
		case 2001:
			return Global_262145.f_19066;
		
		case 2002:
			return Global_262145.f_19067;
		
		case 2003:
			return Global_262145.f_19068;
		
		case 2004:
			return Global_262145.f_19069;
		
		case 2005:
			return Global_262145.f_19070;
		
		case 2006:
			return Global_262145.f_19071;
		
		case 2007:
			return Global_262145.f_19072;
		
		case 2008:
			return Global_262145.f_19073;
		
		case 2009:
			return Global_262145.f_19074;
		
		case 2010:
			return Global_262145.f_19075;
		
		default:
	}
	return 1;
}

void func_390(int iParam0, bool bParam1)
{
	iVar0 = func_266(func_280(iParam0), 6, 0, 0, 0);
	iVar1 = func_266(func_280(iParam0), 19, 0, 0, 1);
	iVar2 = func_266(func_280(iParam0), 6, 0, 1, 0);
	iVar3 = 0;
	if (iVar0 >= Global_262145.f_18940)
	{
		iVar3 = 2;
	}
	else if (iVar0 >= Global_262145.f_18941)
	{
		iVar3 = 1;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_631, "UPDATE_VEHICLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_391()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_624[iVar0] = func_3();
		iVar0++;
	}
}

void func_392(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (func_403())
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
		if (!func_401())
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
				else if (bVar14 || (!func_58(PLAYER::PLAYER_ID(), 0) && !func_400()))
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
					func_397(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_396(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
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
					func_395();
					func_394();
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
				if (!func_396(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
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
					if (func_393(Global_4456448.f_232883))
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

bool func_393(int iParam0)
{
	return iParam0 == 17;
}

void func_394()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { Var0 };
}

void func_395()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[PLAYER::PLAYER_ID()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_396(var uParam0)
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

void func_397(int iParam0, int iParam1, int iParam2)
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
				func_399();
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
		if (func_58(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
		func_398(-2008016205, iParam0);
	}
}

void func_398(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_399()
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

bool func_400()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_401()
{
	if (func_402() == 0)
	{
		return 1;
	}
	return 0;
}

int func_402()
{
	return Global_1312467.f_18;
}

int func_403()
{
	if (Global_1590535[PLAYER::PLAYER_ID()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

int func_404(int iParam0)
{
	if (func_405(iParam0))
	{
		return func_75(Global_2425662[iParam0].f_310.f_5);
	}
	return 0;
}

int func_405(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (func_2(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_76(Global_2425662[iParam0].f_310.f_5) == 1;
			}
		}
	}
	return 0;
}

void func_406()
{
	Global_1312575 = 1;
	StringCopy(&(Global_1312575.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312575.f_9 = MISC::GET_HASH_KEY(&(Global_1312575.f_1));
}

void func_407(bool bParam0)
{
	if (bParam0)
	{
		func_408();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			MISC::SET_BIT(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_368(0))
		{
			func_409(0);
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

void func_408()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_409(int iParam0)
{
	if (func_369())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_411())
		{
			func_410(1, 1);
		}
		else
		{
			func_410(0, 0);
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
	if (!func_344())
	{
		Global_19486.f_1 = 3;
	}
}

void func_410(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_368(0))
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

bool func_411()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

void func_412(int iParam0, bool bParam1)
{
	Global_75434 = iParam0;
	func_407(0);
	func_260();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_631);
	if (bParam1)
	{
		func_392(PLAYER::PLAYER_ID(), 1, 8388608, 0);
		AUDIO::STOP_AUDIO_SCENE("GTAO_Computer_Screen_Active_Scene");
	}
	if (MISC::IS_PC_VERSION() && CUTSCENE::_0xA0FE76168A189DDB())
	{
		func_383(0, 1, 1, 1);
	}
	HUD::THEFEED_RESUME();
	SCRIPT::TERMINATE_THIS_THREAD();
}

